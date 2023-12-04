using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class MusicPlayer : MonoBehaviour
{
    private string apiPlayEndpoint = "http://43.201.136.115:5000/rate/"; // EC2의 공인 IP 주소 또는 도메인 주소로 변경
    public AudioSource audioSource;
    public Button playButton;
    public Button pauseButton;
    public Button nextButton; // 다음 음악을 가져오는 버튼
    public HeartBeat heartScript;
    public Slider progressSlider;
    public RawImage image;
    public TextMeshProUGUI title;
    public TextMeshProUGUI artist; 

    public TextMeshProUGUI currentTimeText; // 현재 시간을 표시하는 텍스트
    public TextMeshProUGUI totalTimeText;   // 총 노래 길이를 표시하는 텍스트


    void Start()
    {
        playButton.interactable = true; // 초기에는 play 버튼만 활성화
        SetButtonVisible(playButton, true);
        SetButtonVisible(pauseButton, false);
        nextButton.onClick.AddListener(NextSongButtonClicked); // 버튼에 클릭 이벤트 등록                          

        StartCoroutine(GetSongsFromAPI());
    }

    void Update()
    {
        // 노래가 재생 중일 때마다 Slider의 값을 업데이트
        if ((audioSource != null && audioSource.isPlaying))
        {
            if (audioSource != null)
            {
                progressSlider.value = Mathf.Clamp01(audioSource.time / audioSource.clip.length);
            }

            // 현재 시간과 총 노래 길이를 텍스트로 표시
            currentTimeText.text = FormatTime(audioSource.time);
            totalTimeText.text = FormatTime(audioSource.clip.length);

            // 노래가 재생 중일 때는 pauseButton을 활성화하고 visible을 true로 설정
            playButton.interactable = false;
            pauseButton.interactable = true;
            SetButtonVisible(playButton, false);
            SetButtonVisible(pauseButton, true);
        }
        else if (audioSource != null && audioSource.clip != null && !audioSource.isPlaying)
        {
            // 노래가 일시 정지 상태일 때는 playButton을 활성화하고 visible을 true로 설정
            playButton.interactable = true;
            pauseButton.interactable = false;
            SetButtonVisible(playButton, true);
            SetButtonVisible(pauseButton, false);

            // 현재 노래가 끝나면 다음 노래를 가져오도록 수정
            if (!isGettingNextSong)
            {
                StartCoroutine(GetSongsFromAPI());
            }
        }
    }


    private bool isGettingNextSong = false;

    void NextSongButtonClicked()
    {
        StartCoroutine(GetSongsFromAPI());
    }

    void PauseMusic()
    {
        // 노래 일시 정지
        audioSource.Pause();
    }

    void SetButtonVisible(Button button, bool isVisible)
    {
        button.gameObject.SetActive(isVisible);
    }

    // 현재 시간이나 총 노래 길이를 포맷팅하는 함수
    string FormatTime(float timeInSeconds)
    {
        int minutes = Mathf.FloorToInt(timeInSeconds / 60f);
        int seconds = Mathf.FloorToInt(timeInSeconds % 60f);
        return string.Format("{0:00}:{1:00}", minutes, seconds);
    }

    void PlayMusic(string musicUrl)
    {
       
        StartCoroutine(GetAudioClipAndPlay(musicUrl));
    }

    IEnumerator GetAudioClipAndPlay(string musicUrl)
    {
        string encodedUrl = Uri.EscapeUriString(musicUrl);

        using (UnityWebRequest www = UnityWebRequest.Get(encodedUrl))
        {
            yield return www.SendWebRequest();

            if (www.isNetworkError || www.isHttpError)
            {
                Debug.LogError("Failed to load audio: " + www.error);
            }
            else
            {
                AudioClip audioClip = DownloadHandlerAudioClip.GetContent(www);

                if (audioClip != null)
                {
                    audioSource.clip = audioClip;
                    audioSource.Play();
                    // 음악이 재생 중이면 pause 버튼 활성화, play 버튼 비활성화
                    pauseButton.interactable = true;
                    playButton.interactable = false;

                    // 노래의 길이를 기다렸다가 다음 노래를 가져오기
                    yield return new WaitForSeconds(audioClip.length);
                    StartCoroutine(GetSongsFromAPI());
                }
                else
                {
                    Debug.LogError("Failed to load audio: " );
                }
            }
                
        }
    }

    IEnumerator GetSongsFromAPI()
    {
        isGettingNextSong = true; // 다음 노래를 가져오는 중임을 표시

        string heartTxt = heartScript.heartTxt.text; 
        UnityWebRequest www = UnityWebRequest.Get(apiPlayEndpoint+heartTxt);
        Debug.Log(apiPlayEndpoint + heartTxt);

        yield return www.SendWebRequest();

        if (www.isNetworkError || www.isHttpError)
        {
            Debug.LogError("Failed to get songs from API: " + www.error);
        }
        else
        {
            string jsonString = www.downloadHandler.text;
            Song song = JsonUtility.FromJson<Song>(jsonString);

            Debug.Log(jsonString);

            string songUrl = song.preview_url;
            title.SetText(song.name);
            artist.SetText(song.singer); 

            PlayMusic(songUrl);
            StartCoroutine(LoadImage(song.image_key));  

        }
        isGettingNextSong = false; // 다음 노래 가져오기가 끝났음을 표시
    }
    IEnumerator LoadImage(string imageUrl)
    {
        using (UnityWebRequest www = UnityWebRequestTexture.GetTexture(imageUrl))
        {
            yield return www.SendWebRequest();

            if (www.isNetworkError || www.isHttpError)
            {
                Debug.LogError("이미지를 불러오는 중 에러 발생: " + www.error);
            }
            else
            {
                // 텍스처를 받아와 RawImage에 적용
                Texture2D texture = DownloadHandlerTexture.GetContent(www);
                image.texture = texture;
            }
        }
    }
    [Serializable]
    private class AccessTokenResponse
    {
        public string access_token; 
    }

    [Serializable]
    private class Song
    {
        public int group_id;
        public int id;
        public string image_key;
        public string name;
        public string preview_url; 
        public string singer;
        public string uri;
    }

}

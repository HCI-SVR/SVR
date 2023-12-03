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

    public TextMeshProUGUI currentTimeText; // 현재 시간을 표시하는 텍스트
    public TextMeshProUGUI totalTimeText;   // 총 노래 길이를 표시하는 텍스트

    private string accessToken;

    void Start()
    {
        playButton.interactable = false; // 초기에는 play 버튼만 활성화
        nextButton.onClick.AddListener(NextSongButtonClicked); // 버튼에 클릭 이벤트 등록                          

        StartCoroutine(GetAccessTokenAndSongs());
    }

    void Update()
    {
        // 노래가 재생 중일 때마다 Slider의 값을 업데이트
        if (audioSource.isPlaying)
        {
            progressSlider.value = audioSource.time / audioSource.clip.length;

            // 현재 시간과 총 노래 길이를 텍스트로 표시
            currentTimeText.text = FormatTime(audioSource.time);
            totalTimeText.text = FormatTime(audioSource.clip.length);

            // 노래가 재생 중일 때는 pauseButton을 활성화하고 visible을 true로 설정
            playButton.interactable = false;
            pauseButton.interactable = true;
            SetButtonVisible(playButton, false);
            SetButtonVisible(pauseButton, true);
        }
        else
        {
            // 노래가 일시 정지 상태일 때는 playButton을 활성화하고 visible을 true로 설정
            playButton.interactable = true;
            pauseButton.interactable = false;
            SetButtonVisible(playButton, true);
            SetButtonVisible(pauseButton, false);
        }
    }
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
        // 현재 재생 중인 클립이 있으면 정지
        if (audioSource.isPlaying)
        {
            audioSource.Stop();
        }
        
        // UnityWebRequestMultimedia.GetAudioClipAsync를 사용하여 오디오 클립 가져오기
        StartCoroutine(GetAudioClipAndPlay(musicUrl));
    }

    IEnumerator GetAudioClipAndPlay(string musicUrl)
    {
        using (UnityWebRequest www = UnityWebRequestMultimedia.GetAudioClip(musicUrl, AudioType.MPEG))
        {
            yield return www.SendWebRequest();

            if (www.responseCode == 200)
            {
                AudioClip audioClip = DownloadHandlerAudioClip.GetContent(www);
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
                Debug.LogError("Failed to load audio: " + www.error);
            }
        }
    }

   
    IEnumerator GetAccessTokenAndSongs()
    {
        
        string authUrl = "http://43.201.136.115:5000/auth/login";

        using (UnityWebRequest www = UnityWebRequest.Get(authUrl)) 
        {
            yield return www.SendWebRequest();

            if (www.isNetworkError || www.isHttpError)
            {
                Debug.LogError("Failed to get access token: " + www.error);
            }
            else
            {
                /*
                string responseJson = www.downloadHandler.text;
                AccessTokenResponse accessTokenResponse = JsonUtility.FromJson<AccessTokenResponse>(responseJson);
                accessToken = accessTokenResponse.access_token;
                

                if (!string.IsNullOrEmpty(accessToken))
                {
                    StartCoroutine(GetSongsFromAPI());
                }
                else
                {
                    Debug.LogError("Access token is empty.");
                }
                */
                StartCoroutine(GetSongsFromAPI());
            }
        }

    }


    IEnumerator GetSongsFromAPI()
    {
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

            if (song != null)
            {
                string songUrl = song.preview_url;
                //Texture2D texture = DownloadHandlerTexture.GetContent(song.image_key);
                PlayMusic(songUrl);
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

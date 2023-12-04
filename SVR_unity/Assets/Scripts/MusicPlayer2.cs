using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.Networking;
using UnityEngine.UI;
using System;
using System.Threading;

public class MusicPlayer2 : MonoBehaviour
{
   
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

    // 그룹 1의 노래를 저장할 변수들
    public AudioClip group1Song1;
    public AudioClip group1Song2;
    public AudioClip group1Song3;

    // 그룹 2의 노래를 저장할 변수들
    public AudioClip group2Song1;
    public AudioClip group2Song2;
    public AudioClip group2Song3;

    // 그룹 3의 노래를 저장할 변수들
    public AudioClip group3Song1;
    public AudioClip group3Song2;
    public AudioClip group3Song3;

    // 그룹 4의 노래를 저장할 변수들
    public AudioClip group4Song1;
    public AudioClip group4Song2;
    public AudioClip group4Song3;

    // 그룹 5의 노래를 저장할 변수들
    public AudioClip group5Song1;
    public AudioClip group5Song2;
    public AudioClip group5Song3;

    

    void Start()
    {
        playButton.interactable = true; // 초기에는 play 버튼만 활성화
        SetButtonVisible(playButton, true);
        SetButtonVisible(pauseButton, false);
        nextButton.onClick.AddListener(NextSongButtonClicked); // 버튼에 클릭 이벤트 등록
        pauseButton.onClick.AddListener(PauseMusic);
    }

    void Update()
    {

        // Check if the audioSource is not null and the song has ended
        if (audioSource.clip == null)
        {
            // Song has ended, get the heart rate and play the next song
            int heartRate = GetHeartBeat();
            Debug.Log("현재 heartRate는: " + heartRate);
            PlayMusic(heartRate);

            

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

        }
    }


    void NextSongButtonClicked()
    {
        // Get the heart rate from the heartTxt
        int heartRate = GetHeartBeat();

        // Play the next song based on the heart rate
        PlayMusic(heartRate);
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

    int GetHeartBeat()
    { 

        string heartTxt = heartScript.heartTxt.text;
        Debug.Log("heartbeat를 읽어왔씁니다!");
        return int.Parse(heartTxt);
        
    }

    void PlayMusic(int heart)
    {
        if (heart >= 180 && heart <= 200)
        {
            // heart가 180 이상 200 이하인 경우
            PlayGroup5();
            Debug.Log("group5 노래 재생");
            
        }
        else if (heart >= 160 && heart < 180)
        {
            // heart가 160 이상 180 미만인 경우
            PlayGroup4();
            Debug.Log("group4 노래 재생");
        }
        else if (heart>=140 && heart < 160)
        {
            PlayGroup3();
            Debug.Log("group3 노래 재생");
        }
        else if(heart>=120 && heart < 140)
        {
            PlayGroup2();
            Debug.Log("group2 노래 재생");
        }
        else
        {
            PlayGroup1();
            Debug.Log("group1 노래 재생");
        }
        Debug.Log("야! 노래 재생한다!");

        Debug.Log("야 " + audioSource.isPlaying);
        totalTimeText.text = FormatTime(audioSource.clip.length);

        // 노래가 실제로 재생되기 시작한 이후에 값을 가져오도록 수정
        if (audioSource.isPlaying)
        {
            StartCoroutine(UpdateCurrentTimeText());
        }

    }
    IEnumerator UpdateCurrentTimeText()
    {
        while (audioSource.isPlaying)
        {
            progressSlider.value = Mathf.Clamp01(audioSource.time / audioSource.clip.length);
            currentTimeText.text = FormatTime(audioSource.time);

            yield return null; // 한 프레임을 기다림
        }
    }

    void PlayGroup1()
    {
        // 그룹 1의 노래 중 랜덤으로 선택
        int randomSongIndex = UnityEngine.Random.Range(1, 4); // 1, 2, 3 중에서 랜덤으로 선택
        AudioClip selectedSong = null;

        switch (randomSongIndex)
        {
            case 1: //charlie puth left and right 
                selectedSong = group1Song1;
                break;
            case 2: //new jeans hype boy
                selectedSong = group1Song2;
                break;
            case 3: // jimin like crazy 
                selectedSong = group1Song3;
                break;
                // 그룹 1의 노래가 더 추가될 경우 추가적인 case문 작성
        }

        // 선택된 노래를 재생하는 로직
        if (selectedSong != null)
        {
            if (selectedSong == group1Song1)
            {
                title.text = "Left and Right";
                artist.text = "Charlie Puth";
                StartCoroutine(LoadImage("https://i.scdn.co/image/ab67616d0000b27335d2e0ed94a934f2cc46fa49"));
            }
            else if (selectedSong == group1Song2)
            {
                title.text = "Hype Boy";
                artist.text = "NewJeans";
                StartCoroutine(LoadImage("https://i.scdn.co/image/ab67616d0000b2739d28fd01859073a3ae6ea209"));
            }
            else
            {
                title.text = "Like Crazy";
                artist.text = "Jimin";
                StartCoroutine(LoadImage("https://i.scdn.co/image/ab67616d0000b2732b46078245d0120690eb560d"));
            }
            audioSource.clip = selectedSong;
            Debug.Log(selectedSong); 
            
            audioSource.Play();
        }
    }

    void PlayGroup2()
    {
        // 그룹 1의 노래 중 랜덤으로 선택
        int randomSongIndex = UnityEngine.Random.Range(1, 4); // 1, 2, 3 중에서 랜덤으로 선택
        AudioClip selectedSong = null;

        switch (randomSongIndex)
        {
            case 1: //newjeans ditto 
                selectedSong = group2Song1;
                break;
            case 2: //jung gook seven
                selectedSong = group2Song2;
                break;
            case 3: // jimin like crazy 
                selectedSong = group2Song3;
                break;
                // 그룹 1의 노래가 더 추가될 경우 추가적인 case문 작성
        }

        // 선택된 노래를 재생하는 로직
        if (selectedSong != null)
        {
            if (selectedSong == group2Song1)
            {
                title.text = "Ditto";
                artist.text = "NewJeans";
                StartCoroutine(LoadImage("https://i.scdn.co/image/ab67616d0000b273edf5b257be1d6593e81bb45f"));
            }
            else if (selectedSong == group2Song2)
            {
                title.text = "Seven";
                artist.text = "Jung Kook";
                StartCoroutine(LoadImage("https://i.scdn.co/image/ab67616d0000b273bf5cce5a0e1ed03a626bdd74"));
            }
            else
            {
                title.text = "Like Crazy";
                artist.text = "Jimin";
                StartCoroutine(LoadImage("https://i.scdn.co/image/ab67616d0000b2732b46078245d0120690eb560d"));
            }
            audioSource.clip = selectedSong;
            Debug.Log(selectedSong);

            audioSource.Play();
        }
    }

    void PlayGroup3()
    {
        // 그룹 1의 노래 중 랜덤으로 선택
        int randomSongIndex = UnityEngine.Random.Range(1, 4); // 1, 2, 3 중에서 랜덤으로 선택
        AudioClip selectedSong = null;

        switch (randomSongIndex)
        {
            case 1: //newjeans super shy
                selectedSong = group3Song1;
                break;
            case 2: //new jeans cookie 
                selectedSong = group3Song2;
                break;
            case 3: //travis scott butterfly effect 
                selectedSong = group3Song3;
                break;
                // 그룹 1의 노래가 더 추가될 경우 추가적인 case문 작성
        }

        // 선택된 노래를 재생하는 로직
        if (selectedSong != null)
        {
            if (selectedSong == group3Song1)
            {
                title.text = "Super Shy";
                artist.text = "NewJeans";
                StartCoroutine(LoadImage("https://i.scdn.co/image/ab67616d0000b2733d98a0ae7c78a3a9babaf8af"));
            }
            else if (selectedSong == group3Song2)
            {
                title.text = "Cookie";
                artist.text = "NewJeans";
                StartCoroutine(LoadImage("https://i.scdn.co/image/ab67616d0000b2739d28fd01859073a3ae6ea209"));
            }
            else
            {
                title.text = "BUTTERFLY EFFECT";
                artist.text = "Travis Scott";
                StartCoroutine(LoadImage("https://i.scdn.co/image/ab67616d0000b273072e9faef2ef7b6db63834a3"));
            }
            audioSource.clip = selectedSong;
            Debug.Log(selectedSong);

            audioSource.Play();
        }
    }

    void PlayGroup4()
    {
        // 그룹 1의 노래 중 랜덤으로 선택
        int randomSongIndex = UnityEngine.Random.Range(1, 4); // 1, 2, 3 중에서 랜덤으로 선택
        AudioClip selectedSong = null;

        switch (randomSongIndex)
        {
            case 1: //BIG NAUTHY Beyond Love (Feat. 10CM)
                selectedSong = group4Song1;
                break;
            case 2: //Harry Styles As it was
                selectedSong = group4Song2;
                break;
            case 3: //Yet To Come BTS  
                selectedSong = group4Song3;
                break;
                // 그룹 1의 노래가 더 추가될 경우 추가적인 case문 작성
        }

        // 선택된 노래를 재생하는 로직
        if (selectedSong != null)
        {
            if (selectedSong == group4Song1)
            {
                title.text = "Beyond Love (Feat. 10CM)";
                artist.text = "BIG Naughty";
                StartCoroutine(LoadImage("https://i.scdn.co/image/ab67616d0000b2734ed336d1298bd24caa4a7b0e"));
            }
            else if (selectedSong == group4Song2)
            {
                title.text = "As It Was";
                artist.text = "Harry Styles";
                StartCoroutine(LoadImage("https://i.scdn.co/image/ab67616d0000b2732e8ed79e177ff6011076f5f0"));
            }
            else
            {
                title.text = "Yet To Come";
                artist.text = "BTS";
                StartCoroutine(LoadImage("https://i.scdn.co/image/ab67616d0000b27317db30ce3f081d6818a8ad49"));
            }
            audioSource.clip = selectedSong;
            Debug.Log(selectedSong);

            audioSource.Play();
        }
    }

    void PlayGroup5()
    {
        // 그룹 1의 노래 중 랜덤으로 선택
        int randomSongIndex = UnityEngine.Random.Range(1, 4); // 1, 2, 3 중에서 랜덤으로 선택
        AudioClip selectedSong = null;

        switch (randomSongIndex)
        {
            case 1: //BLACK PINK Pink Venom
                selectedSong = group5Song1;
                break;
            case 2: //Charlie Puth Light Switch
                selectedSong = group5Song2;
                break;
            case 3: //Charlie Puth I don't think that i like her 
                selectedSong = group5Song3;
                break;
                // 그룹 1의 노래가 더 추가될 경우 추가적인 case문 작성
        }

        // 선택된 노래를 재생하는 로직
        if (selectedSong != null)
        {
            if (selectedSong == group5Song1)
            {
                title.text = "Pink Venom";
                artist.text = "BLACKPINK";
                StartCoroutine(LoadImage("https://i.scdn.co/image/ab67616d0000b273002ef53878df1b4e91c15406"));
            }
            else if (selectedSong == group5Song2)
            {
                title.text = "Light Switch";
                artist.text = "Charlie Puth";
                StartCoroutine(LoadImage("https://i.scdn.co/image/ab67616d0000b27335d2e0ed94a934f2cc46fa49"));
            }
            else
            {
                title.text = "I Don't Think That I Like Her";
                artist.text = "Charlie Puth";
                StartCoroutine(LoadImage("https://i.scdn.co/image/ab67616d0000b273a3b39c1651a617bb09800fd8"));
            }
            audioSource.clip = selectedSong;
            Debug.Log(selectedSong);

            audioSource.Play();
        }
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


}

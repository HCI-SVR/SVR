using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class MusicPlayer : MonoBehaviour
{
    private string apiEndpoint = "http://your-ec2-instance-ip/getSongs"; // EC2의 공인 IP 주소 또는 도메인 주소로 변경
    private AudioSource audioSource;
    public Button playButton;
    public Button pauseButton;

    void Start()
    {
        audioSource = gameObject.GetComponent<AudioSource>();
        playButton.interactable = false; // 초기에는 play 버튼만 활성화
        StartCoroutine(GetSongsFromAPI());
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
                // 오디오 클립 설정 및 재생
                AudioClip audioClip = DownloadHandlerAudioClip.GetContent(www);
                audioSource.clip = audioClip;
                audioSource.Play();

                // 음악이 재생 중이면 pause 버튼 활성화, play 버튼 비활성화
                pauseButton.interactable = true;
                playButton.interactable = false;
            }
            else
            {
                Debug.LogError("Failed to load audio: " + www.error);
            }
        }
    }

    IEnumerator GetSongsFromAPI()
    {
        UnityWebRequest www = UnityWebRequest.Get(apiEndpoint);

        yield return www.SendWebRequest();

        if (www.isNetworkError || www.isHttpError)
        {
            Debug.LogError("Failed to get songs from API: " + www.error);
        }
        else
        {
            string jsonString = www.downloadHandler.text;
            SongList songs = JsonUtility.FromJson<SongList>(jsonString);

            if (songs != null && songs.songs.Count > 0)
            {
                StartCoroutine(GetSpotifyPreviewUrl(songs.songs[0].url));
            }
        }
    }

    IEnumerator GetSpotifyPreviewUrl(string spotifyTrackId)
    {
        string apiUrl = $"https://api.spotify.com/v1/tracks/{spotifyTrackId}";
        string accessToken = "YOUR_SPOTIFY_ACCESS_TOKEN"; // Spotify API에서 발급받은 액세스 토큰으로 교체

        using (UnityWebRequest www = UnityWebRequest.Get(apiUrl))
        {
            www.SetRequestHeader("Authorization", "Bearer " + accessToken);
            yield return www.SendWebRequest();

            if (www.isNetworkError || www.isHttpError)
            {
                Debug.LogError("Failed to get track info: " + www.error);
            }
            else
            {
                string responseJson = www.downloadHandler.text;
                TrackInfoResponse trackInfoResponse = JsonUtility.FromJson<TrackInfoResponse>(responseJson);

                if (trackInfoResponse != null && !string.IsNullOrEmpty(trackInfoResponse.preview_url))
                {
                    PlayMusic(trackInfoResponse.preview_url);
                }
                else
                {
                    Debug.LogError("Preview URL is empty.");
                }
            }
        }
    }

    [System.Serializable]
    private class Song
    {
        public string title;
        public string artist;
        public string albumcover;
        public string url; // Spotify Track ID를 저장하도록 변경
    }

    [System.Serializable]
    private class SongList
    {
        public List<Song> songs;
    }

    [System.Serializable]
    private class TrackInfoResponse
    {
        public string preview_url;
    }
}

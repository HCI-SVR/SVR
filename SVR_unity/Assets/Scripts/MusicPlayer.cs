using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class MusicPlayer : MonoBehaviour
{
    private string apiEndpoint = "http://your-ec2-instance-ip/getSongs"; // EC2의 공인 IP 주소 또는 도메인 주소로 변경
    private AudioSource audioSource;
    private Button playButton;
    private Button pauseButton;
    private string clientId = "YOUR_CLIENT_ID";
    private string clientSecret = "YOUR_CLIENT_SECRET";
    private string accessToken;

    void Start()
    {
        audioSource = gameObject.GetComponent<AudioSource>();
        playButton = GameObject.Find("PlayButton").GetComponent<Button>();
        pauseButton = GameObject.Find("PauseButton").GetComponent<Button>();

        playButton.interactable = false; // 초기에는 play 버튼만 활성화
        StartCoroutine(GetAccessTokenAndSongs());
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

    IEnumerator GetAccessTokenAndSongs()
    {
        string authUrl = "https://accounts.spotify.com/api/token";
        WWWForm form = new WWWForm();
        form.AddField("grant_type", "client_credentials");

        using (UnityWebRequest www = UnityWebRequest.Post(authUrl, form))
        {
            string authHeader = Convert.ToBase64String(System.Text.Encoding.UTF8.GetBytes(clientId + ":" + clientSecret));
            www.SetRequestHeader("Authorization", "Basic " + authHeader);

            yield return www.SendWebRequest();

            if (www.isNetworkError || www.isHttpError)
            {
                Debug.LogError("Failed to get access token: " + www.error);
            }
            else
            {
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
            }
        }
    }

    IEnumerator GetSongsFromAPI()
    {
        UnityWebRequest www = UnityWebRequest.Get(apiEndpoint);
        www.SetRequestHeader("Authorization", "Bearer " + accessToken);

        yield return www.SendWebRequest();

        if (www.isNetworkError || www.isHttpError)
        {
            Debug.LogError("Failed to get songs from API: " + www.error);
        }
        else
        {
            string jsonString = www.downloadHandler.text;
            SongList songs = JsonUtility.FromJson<SongList>("{\"songs\":" + jsonString + "}");

            if (songs != null && songs.songs.Count > 0)
            {
                // 여기에서 노래 정보에서 미리보기 URL을 가져와서 사용
                string previewUrl = songs.songs[0].previewUrl;
                PlayMusic(previewUrl);
            }
        }
    }

    [Serializable]
    private class AccessTokenResponse
    {
        public string access_token;
        public string token_type;
    }

    [Serializable]
    private class Song
    {
        public string title;
        public string artist;
        public string previewUrl; // 미리보기 URL 추가
    }

    [Serializable]
    private class SongList
    {
        public List<Song> songs;
    }
}

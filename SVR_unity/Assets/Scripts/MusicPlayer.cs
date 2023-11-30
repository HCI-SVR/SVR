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

    private string accessToken;

    void Start()
    {
        audioSource = gameObject.GetComponent<AudioSource>();
        playButton = GameObject.Find("PlayButton").GetComponent<Button>();
        pauseButton = GameObject.Find("PauseButton").GetComponent<Button>();

        playButton.interactable = false; // 초기에는 play 버튼만 활성화
        //StartCoroutine(GetAccessTokenAndSongs());
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

    /*
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
    */
    IEnumerator GetAccessTokenAndSongs()
    {
        // 이미 받아온 토큰 정보 사용
        string responseJson = "{ \"access_token\": \"BQCxco4kbogPwZ5Ng5tpmv8brp5eAG9E6okEgbtd0YFc62mWypvSfypnocu0JTrVLQdDXCLkadZRaDRjD-Cwwj4B_IWbEtMM0qEEB0pz-PfzdGd5aMLf3-MRXTTqEF5keYmIpx6P5yY6DZyov13bNpMuUJsiGH4d-GzqKyBxrumpvTdHu9fIpuq5Ph0Hww2nNpGMXw\", \"token_type\": \"Bearer\", \"expires_in\": 3600, \"refresh_token\": \"AQDyv3Atgm-it2ZkjaPH1R1ZryN4Og6jvw6IuguPXZjUxnVbHJZK5gIT14erLucF8z6_J6vXqzU4dPh-DxrDzHgZyikYtJFSdzNnAml5LtoeDdMt_QPbDUhKSFRcKbXELwQ\", \"expires_at\": 1701079809, \"scope\": null }";
        AccessTokenResponse accessTokenResponse = JsonUtility.FromJson<AccessTokenResponse>(responseJson);
        accessToken = accessTokenResponse.access_token;

        if (!string.IsNullOrEmpty(accessToken))
        {
            yield return StartCoroutine(GetSongsFromAPI());
        }
        else
        {
            Debug.LogError("Access token is empty.");
        }
    }


    IEnumerator GetSongsFromAPI()
    {
        /*
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
                string previewUrl = songs.songs[0].uri;
                PlayMusic(previewUrl);
            }
        }
        */
        // 테스트용 더미 데이터
        string dummyData = @"
        {
            ""group_id"": 3,
            ""id"": 8,
            ""image_key"": ""next_level_image.jpg"",
            ""name"": ""Next Level"",
            ""singer"": ""에스파"",
            ""uri"": ""https://api.spotify.com/v1/tracks/3Ua0m0YmEjrMi9XErKcNiR""
        }";

        // 더미 데이터 역직렬화
        Song song = JsonUtility.FromJson<Song>(dummyData);

        if (song != null)
        {
            // 더미 데이터에서 URI를 가져와 음악을 재생
            string songUrl = song.uri;
            PlayMusic(songUrl);
        }
        else
        {
            Debug.LogError("더미 데이터 파싱 실패.");
        }

        yield return null; // 테스트용 더미 데이터, 실제 API 호출은 이 예제에서 이루어지지 않습니다.
    }

    [Serializable]
    private class AccessTokenResponse
    {
        public string access_token= "BQCxco4kbogPwZ5Ng5tpmv8brp5eAG9E6okEgbtd0YFc62mWypvSfypnocu0JTrVLQdDXCLkadZRaDRjD-Cwwj4B_IWbEtMM0qEEB0pz-PfzdGd5aMLf3-MRXTTqEF5keYmIpx6P5yY6DZyov13bNpMuUJsiGH4d-GzqKyBxrumpvTdHu9fIpuq5Ph0Hww2nNpGMXw";
        public string token_type= "Bearer";
        public int expires_in = 3600;
        public string refresh_token = "AQDyv3Atgm-it2ZkjaPH1R1ZryN4Og6jvw6IuguPXZjUxnVbHJZK5gIT14erLucF8z6_J6vXqzU4dPh-DxrDzHgZyikYtJFSdzNnAml5LtoeDdMt_QPbDUhKSFRcKbXELwQ";
        public int expires_at = 1701079809;
        public string scope = null; 
    }

    [Serializable]
    private class Song
    {
        public int group_id;
        public int id;
        public string image_key;
        public string name;
        public string singer;
        public string uri;
    }

}

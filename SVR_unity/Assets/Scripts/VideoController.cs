using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.Video;

public class VideoController : MonoBehaviour
{
    private const string getUrl = "http://43.201.136.115:5000/hci/player";
    public int player_age;
    public float player_weight;
    public int player_group;
    public VideoPlayer videoPlayer; // VideoPlayer 컴포넌트를 연결할 변수
    public string videoPathPrefix = "Assets/Video/"; // 비디오 파일 경로의 프리픽스

    void Start()
    {
        StartCoroutine(GetPlayerData());
    }

    IEnumerator GetPlayerData()
    {
        using (UnityWebRequest www = UnityWebRequest.Get(getUrl))
        {
            yield return www.SendWebRequest();

            if (www.isNetworkError || www.isHttpError)
            {
                Debug.LogError("Player 정보 가져오기 중 에러 발생: " + www.error);
            }
            else
            {
                string json = www.downloadHandler.text;
                Debug.Log(json);

                PlayerData data = JsonUtility.FromJson<PlayerData>(json);
                player_age = data.age;
                player_weight = data.weight;
                player_group = data.group_id;

                PlayVideoBasedOnGroupID(player_group);
            }
        }
    }

    void PlayVideoBasedOnGroupID(int groupID)
    {
        // groupID를 기반으로 특정 비디오를 재생
        string videoFileName = groupID + ".mp4";
        string videoPath = videoPathPrefix + videoFileName;

        // 비디오 파일이 존재하는지 확인
        if (System.IO.File.Exists(videoPath))
        {
            // VideoPlayer 컴포넌트에 비디오 파일 설정
            videoPlayer.url = videoPath;

            // 비디오 재생
            videoPlayer.Play();
        }
        else
        {
            Debug.LogError("비디오 파일이 존재하지 않습니다: " + videoFileName);
        }
    }
    [Serializable]
    private class PlayerData
    {
        public int age;
        public float weight;
        public int group_id;

    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;
using UnityEngine.Networking;
using UnityEngine.UI;

public class HeartBeat : MonoBehaviour
{
    public TextMeshProUGUI heartTxt;
    public RectTransform panelRect;
    public TextMeshProUGUI warningTxt;
    public TextMeshProUGUI msgTxt;
    public int initHeart=0;

    public int count=0;
    public double proper = 0;
    public int player_age;
    public float player_weight;
    public int player_group; 

    private const string apiUrl = "http://43.201.136.115:5000/hci/heartbeat";
    private const string getUrl = "http://43.201.136.115:5000/hci/player"; 

    void Start()
    {
        //warningTxt.gameObject.SetActive(false);
        //msgTxt.gameObject.SetActive(false);

        // Player 정보 가져오기
        StartCoroutine(GetPlayerData());

        StartCoroutine(HeartbeatRoutine());
    }

    int properHeart(int value)
    {
        
        //running일 경우 70%
        if (player_group ==3)
        {
            proper = (220 - player_age-initHeart)*0.7+ initHeart-40;
            Debug.Log("적정 심박수는: "+proper);
            if (value > proper)
            {
                return -1; 
            }
        }
        else if (player_group == 2)//jogging일 경우 65%
        {
            proper = (220 - player_age - initHeart) * 0.65 + initHeart-40;
            Debug.Log("적정 심박수는: " + proper);
            if (value > proper)
            {
                return -1;
            }
        }
        else if (player_group == 1)//fast walk일 경우 60% 
        {
            proper = (220 - player_age - initHeart) * 0.6 + initHeart-40;
            Debug.Log("적정 심박수는: " + proper);
            if (value > proper)
            {
                return -1;
            }
        }
        
        return 0; 

    }
    IEnumerator HeartbeatRoutine()
    {
        WaitForSeconds waitTime = new WaitForSeconds(60f);

        while (true)
        {
            yield return StartCoroutine(GetHeartbeatData());
            yield return waitTime;
        }
    }

    IEnumerator GetHeartbeatData()
    {
        using (UnityWebRequest www = UnityWebRequest.Get(apiUrl))
        {
            yield return www.SendWebRequest();

            if (www.isNetworkError || www.isHttpError)
            {
                Debug.LogError("API 요청 중 에러 발생: " + www.error);
            }
            else
            {
                // API 응답 데이터를 해석하고 처리
                string json = www.downloadHandler.text;
                Debug.Log(json); 
                HeartbeatData data = JsonUtility.FromJson<HeartbeatData>(json);
                count++;


                // 받아온 데이터 사용
                foreach (int value in data.heartbeat)
                {
                    Debug.Log(value);
                    if (count == 1)
                    {
                        initHeart = value;
                    }
                    

                    // 텍스트 업데이트
                    heartTxt.text = value.ToString();
                    int isProper = properHeart(value);

                    if (isProper == -1)//적정 심박수 over
                    {
                        warningTxt.gameObject.SetActive(true);
                        msgTxt.gameObject.SetActive(true);
                        msgTxt.SetText("Lower to "+(int)proper);
                    }
                    msgTxt.SetText("Lower to 88!");

                    // 배경색 변경
                    if (value > 100)
                    {
                        panelRect.GetComponent<Image>().color = Color.red;
                    }
                    else if (value > 50)
                    {
                        panelRect.GetComponent<Image>().color = Color.yellow;
                    }
                    else
                    {
                        panelRect.GetComponent<Image>().color = Color.green;
                    }
                    // Wait for 5 seconds before showing the next value
                    yield return new WaitForSeconds(5f);
                }
            }
        }
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
                player_weight= data.weight;
                player_group = data.group_id; 
            }
        }
    }
    [Serializable]
    private class PlayerData
    {
        public int age;
        public float weight;
        public int group_id; 

    }

    [Serializable]
    private class HeartbeatData
    {
        public List<int> heartbeat;
    }
}

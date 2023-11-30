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


    private const string apiUrl = "http://43.201.136.115:5000/hci/heartbeat"; // EC2의 퍼블릭 IP 주소 또는 도메인 주소

    void Start()
    {
        StartCoroutine(HeartbeatRoutine());
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

                // 받아온 데이터 사용
                foreach (int value in data.heartbeat)
                {
                    Debug.Log(value);

                    // 텍스트 업데이트
                    heartTxt.text = value.ToString();

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

    [Serializable]
    private class HeartbeatData
    {
        public List<int> heartbeat;
    }
}

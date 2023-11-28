using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;
using UnityEngine.Networking;
using UnityEngine.UI;

public class HeartBeat : MonoBehaviour
{
    TextMeshProUGUI heartTxt;
    RectTransform panelRect;


    private const string apiUrl = "http://your_ec2_public_ip_or_domain/api/heartbeat"; // EC2의 퍼블릭 IP 주소 또는 도메인 주소

    IEnumerator Start()
    {
        heartTxt = GetComponentInChildren<TextMeshProUGUI>();
        panelRect = GetComponent<RectTransform>();
        WaitForSeconds waitTime = new WaitForSeconds(60f); // 1분(60초) 간격으로 실행

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
                    else
                    {
                        // 기본 배경색으로 복원하거나 적절한 다른 색상으로 설정
                        panelRect.GetComponent<Image>().color = Color.white;
                    }

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

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.Networking;

public class Exercise : MonoBehaviour
{
    public TextMeshProUGUI timerText;
    public TextMeshProUGUI distanceText;
    public TextMeshProUGUI caloryText; 
    private float elapsedTime = 0f;
    private ExerciseData exerciseData;

    private const string apiUrl = "http://43.201.136.115:5000/hci/exercise"; // EC2의 퍼블릭 IP 주소 또는 도메인 주소
    

    IEnumerator Start()
    {
        WaitForSeconds waitTime = new WaitForSeconds(60f); // 1분(60초) 간격으로 실행
        while (true)
        {
            yield return StartCoroutine(GetExerciseData());
            yield return waitTime;
        }
    }

    void Update()
    {
        timer();
    }

    void timer()
    {
        elapsedTime += Time.deltaTime;

        // 분과 초 계산
        int minutes = Mathf.FloorToInt(elapsedTime / 60f);
        int seconds = Mathf.FloorToInt(elapsedTime % 60f);

        // 텍스트 업데이트
        timerText.text = string.Format("{0:00}:{1:00}", minutes, seconds);
    }

    /*
    void UpdateDistanceText()
    {
        if (exerciseData != null && exerciseData.distances != null && exerciseData.distances.Count > 0)
        {
            // 마지막 거리 정보를 가져옴 (가장 최근 5초 동안의 거리)
            float lastDistance = exerciseData.distances[exerciseData.distances.Count - 1];

            // 텍스트 업데이트
            distanceText.text = string.Format("{0:F2}km", lastDistance);
        }
    }*/

    IEnumerator GetExerciseData()
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
                ExerciseData data = JsonUtility.FromJson<ExerciseData>(json);

                // 받아온 데이터 사용
                foreach (int value in data.calories)
                {
                    Debug.Log(value);

                    // 텍스트 업데이트
                    caloryText.text = "/"+value.ToString()+"kcal";

                    // Wait for 5 seconds before showing the next value
                    yield return new WaitForSeconds(5f);
                }

            }
        }
    }
    [System.Serializable]
    public class ExerciseData
    {
        public List<float> distances;
        public List<float> calories; 
    }
}



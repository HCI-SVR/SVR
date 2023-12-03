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

    public int count = 0; 
    private float elapsedTime = 0f;
    private ExerciseData exerciseData;

    private const string apiUrl = "http://43.201.136.115:5000/hci/exercise"; // EC2의 퍼블릭 IP 주소 또는 도메인 주소
    private const string resetUrl = "http://43.201.136.115:5000/hci/reset";

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
                count++; 

                if(count==1 && data.calories[0] != 0)
                {
                    Debug.Log("exercise 데이터를 초기화합니다");
                    StartCoroutine(GetReset());
                    data.Reset();
                    StartCoroutine(GetExerciseData());
                }


                // 받아온 데이터 사용
                int counts = Mathf.Max(data.calories.Count, data.distances.Count); // 두 리스트 중 더 긴 길이를 사용

                for (int i = 0; i < counts; i++)
                {
                    // Calories 업데이트
                    if (i < data.calories.Count)
                    {
                        float calorieValue = data.calories[i];
                        Debug.Log(calorieValue);
                        caloryText.text = string.Format("/{0:F2}kcal", calorieValue);
                    
                    }

                    // Distances 업데이트
                    if (i < data.distances.Count)
                    {
                        float distanceValue = data.distances[i];
                        Debug.Log(distanceValue);
                        distanceText.text = string.Format("{0:F2}km", distanceValue);
                    }

                    // Wait for 5 seconds before showing the next value
                    yield return new WaitForSeconds(5f);
                }

            }
        }
    }
    IEnumerator GetReset()
    {
        using (UnityWebRequest www = UnityWebRequest.Get(resetUrl))
        {
            yield return www.SendWebRequest();

            if (www.isNetworkError || www.isHttpError)
            {
                Debug.LogError("API 요청 중 에러 발생: " + www.error);
            }
        }
    }

    [System.Serializable]
    public class ExerciseData
    {
        public List<float> distances;
        public List<float> calories;

        public void Reset()
        {
            distances = new List<float>();
            calories = new List<float>();
        }
    }


}



using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.Networking;

public class start : MonoBehaviour
{
    public TMP_InputField ageInput;
    public TMP_InputField weightInput;
    public Button startButton;
    public Button fastWalk;
    public Button jogging;
    public Button running;

    private int selectedOption;
    private const string apiUrl= "http://43.201.136.115:5000/hci/";

    void Start()
    {
        startButton.onClick.AddListener(StartGame);

        // 각각의 옵션 버튼에 클릭 이벤트 리스너 추가
        fastWalk.onClick.AddListener(() => OnOptionButtonClick(1));
        jogging.onClick.AddListener(() => OnOptionButtonClick(2));
        running.onClick.AddListener(() => OnOptionButtonClick(3));
    }
    void OnOptionButtonClick(int option)
    {
        selectedOption = option;
        Debug.Log("Selected intensity: " + selectedOption);
    }

    void StartGame()
    {
        int age = int.Parse(ageInput.text);
        float weight = float.Parse(weightInput.text);

        // 이후에 게임 실행 또는 다음 씬으로 이동하는 로직 추가
        Debug.Log("Age: " + age + ", Weight: " + weight + ", Selected intensity: " + selectedOption);

        // JSON 데이터 생성
        string jsonData = "{\"age\":" + age + ", \"weight\":" + weight + "}";

        // POST 요청 생성 및 설정
        UnityWebRequest www = UnityWebRequest.Post(apiUrl, jsonData);
        www.SetRequestHeader("Content-Type", "application/json");

        // 요청 보내기
        StartCoroutine(SendRequest(www));

        // 새로운 씬으로 이동
        SceneManager.LoadScene("SampleScene");
    }

    IEnumerator SendRequest(UnityWebRequest www)
    {
        yield return www.SendWebRequest();

        if (www.isNetworkError || www.isHttpError)
        {
            Debug.LogError("start API 요청 중 에러 발생: " + www.error);
        }
        else
        {
            Debug.Log("API 응답: " + www.downloadHandler.text);
        }
    }
}

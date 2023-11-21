using Newtonsoft.Json.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

using NativeWebSocket;
using TMPro;

public class HeartBeat : MonoBehaviour
{
    
    WebSocket ws;
    TextMeshProUGUI heartTxt;
    [SerializeField] public string websocketToken = "fOVRFx4MRNBtMdSHgsYTdZPSv5w6kTTfK4ZB6u5vqicnNmUgnFygOItpkoXganVM​"; 
    [SerializeField] public string hyperateID = "internal-testing";
    

    async void Start()
    {
        heartTxt = GetComponent<TextMeshProUGUI>();
        Debug.Log(websocketToken); 
        ws = new WebSocket("wss://app.hyperate.io/socket/websocket?token="+websocketToken);
        Debug.Log("connect!");


        ws.OnOpen += () =>
        {
            Debug.Log("Connection open!");
            SendWebSocketMessage();
        };

        ws.OnError += (e) =>
        {
            Debug.Log("Error! " + e);
        };

        ws.OnClose += (e) =>
        {
            Debug.Log("Connection closed!");
        };

        ws.OnMessage += (bytes) =>
        {
            // getting the message as a string
            var message = System.Text.Encoding.UTF8.GetString(bytes);
            var msg = JObject.Parse(message);

            if (msg["event"].ToString() == "hr_update")
            {
                // Change textbox text into the newly received Heart Rate (integer like "86" which represents beats per minute)
                heartTxt.text = (string)msg["payload"]["hr"];
            }
        };

        // Send heartbeat message every 25 seconds in order to not suspended the connection
        InvokeRepeating("SendHeartbeat", 1.0f, 25.0f);

        // waiting for messages
        await ws.Connect();

    }

    void Update()
    {
        #if !UNITY_WEBGL || UNITY_EDITOR
                ws.DispatchMessageQueue();
        #endif
    }

    
    async void SendWebSocketMessage()
    {
        if (ws.State == NativeWebSocket.WebSocketState.Open)
        {
            // Log into the "internal-testing" channel
            await ws.SendText("{\"topic\": \"hr:" + hyperateID + "\", \"event\": \"phx_join\", \"payload\": {}, \"ref\": 0}");
        }
    }
    async void SendHeartbeat()
    {
        if (ws.State == NativeWebSocket.WebSocketState.Open)
        {
            // Send heartbeat message in order to not be suspended from the connection
            await ws.SendText("{\"topic\": \"phoenix\",\"event\": \"heartbeat\",\"payload\": {},\"ref\": 0}");

        }
    }

    private async void OnApplicationQuit()
    {
        await ws.Close();
    }
}

public class HyperateResponse
{
    public string Event { get; set; }
    public string Payload { get; set; }
    public string Ref { get; set; }
    public string Topic { get; set; }
}

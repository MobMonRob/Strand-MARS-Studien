using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class LogWindow : MonoBehaviour
{
    public TextMeshProUGUI textMesh;

    // Start is called before the first frame update
    void Start()
    {
        textMesh.text += "\n";
        this.OnEnable();
    }

    void OnEnable()
    {
        Application.logMessageReceived += LogMessage;
    }

    private void OnDisable()
    {
       Application.logMessageReceived -= LogMessage;
    }

    public void LogMessage(string message, string stackTrace, LogType type)
    {
        string[] log = textMesh.text.Split('\n');
        if (log[log.Length - 1] != message)
        {
            textMesh.text = message + "\n" + textMesh.text;
        }
    }
}


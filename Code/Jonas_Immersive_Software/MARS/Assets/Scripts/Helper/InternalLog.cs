using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public sealed class InternalLog : MonoBehaviour
{
    private static InternalLog instance = null;
    private string fileName;
    private List<string> Log;

    private InternalLog()
    {
        Log = new List<string>();
        /*// Create Directory
        Directory.CreateDirectory(Application.persistentDataPath + "\\Logs");

        // Combine directory and SessionId to fileName
        fileName = "Session_" + System.DateTime.Now.ToString("dd-MM-yy") + "-" + System.DateTime.Now.ToString("HH:mm:ss") + ".txt";
        fileName = Path.Combine(Application.persistentDataPath + "\\Logs", fileName);

        // Create file and write heading
        using (StreamWriter writer = File.CreateText(fileName))
        {
            writer.WriteLine(fileName);
            writer.WriteLine("\n");
        }*/
    }

    /*public void Entry(string message)
    {
        // Open File to append text
        using (StreamWriter writer = File.AppendText(fileName))
        {
            // Append new log entry
            writer.WriteLine("Entry (" + System.DateTime.Now.ToString("dd/MM/yy:HH:mm:ss") + "):\n#####################");
            writer.WriteLine(message);
            writer.WriteLine("\n");

            // Close writer
            writer.Close();
        }

    }*/

    public void Entry (string message)
    {
        this.Log.Add(message);
    }

    public List<string> Entries
    {
        get => this.Log;
    } 

    public static InternalLog Instance
    {
        get
        {
            if (instance == null)
            {
                instance = new InternalLog();
            }

            return instance;
        }
    }

}

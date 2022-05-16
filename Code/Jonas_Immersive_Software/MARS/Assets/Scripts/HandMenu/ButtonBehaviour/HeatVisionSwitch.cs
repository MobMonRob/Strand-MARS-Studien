using System.Collections;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class HeatVisionSwitch : MonoBehaviour
{

    public RawImage thermalCameraView;

    private bool isThermalVisionActive = false;

    // Sensor Module URI
    private const string sensorModuleURI = "http://10.3.141.1:5000/thermalCameraStream"; // SensorPi
    //private const string sensorModuleURI = "http://192.168.178.39:8080/thermalCameraStream"; // TestPi


    // Toggle video stream player
    public void togglePlayer()
    {
        isThermalVisionActive = !isThermalVisionActive;

        thermalCameraView.color = isThermalVisionActive
            ? new Color(thermalCameraView.color.r, thermalCameraView.color.g, thermalCameraView.color.b, 1)
            : new Color(thermalCameraView.color.r, thermalCameraView.color.g, thermalCameraView.color.b, 0);

        StartCoroutine(UpdateFrame());
    }


    IEnumerator GetFrame()
    {
        UnityWebRequest request = UnityWebRequestTexture.GetTexture(sensorModuleURI);
        yield return request.SendWebRequest();

        if (request.isNetworkError || request.isHttpError)
        {
            //Debug.LogWarning(request.error);
            yield break;
        }

        thermalCameraView.texture = ((DownloadHandlerTexture) request.downloadHandler).texture;
    }


    // UpdateFrame is called once per 40ms
    IEnumerator UpdateFrame()
    {
        while (isThermalVisionActive)
        {
            yield return new WaitForSeconds(0.04f);
            StartCoroutine(GetFrame());
        }
    }
}

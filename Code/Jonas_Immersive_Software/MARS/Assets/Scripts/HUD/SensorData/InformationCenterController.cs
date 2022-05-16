using System.Collections;
using Newtonsoft.Json;
using TMPro;
using UnityEngine;
using UnityEngine.Networking;

public class InformationCenterController : MonoBehaviour
{
    //SensorModuleResponse? sensorModuleResponse;

    // UI Text Element References 
    public TextMeshProUGUI temperatureSensorValue;
    public TextMeshProUGUI carbonMonoxideSensorValue;
    public TextMeshProUGUI oxigenSensorValue;
    public TextMeshProUGUI batteryStatus;

    // Update Routine
    //private static Timer updateSensorValuesRoutine;

    // Sensor Module URI
    private const string sensorModuleURI = "http://10.3.141.1:5000/readAll"; // SensorPi
    //private const string sensorModuleURI = "http://192.168.178.39:8080/readAll"; // TestPi

    /*private void Start()
    {
        // Create timer routine and execute every 3000ms
        updateSensorValuesRoutine = new Timer();
        updateSensorValuesRoutine.Interval = 3000;

        // Add sub-routine for elapsed event
        updateSensorValuesRoutine.Elapsed += (object source, ElapsedEventArgs e) =>
        {
            StartCoroutine(GetSensorModuleResponse(sensorModuleURI));
        };

        // Repeated execution & Enable
        updateSensorValuesRoutine.AutoReset = true;
        updateSensorValuesRoutine.Enabled = true;

        updateSensorValuesRoutine.Start();
    }*/

    IEnumerator Start()
    {
        while (true)
        {
            yield return new WaitForSeconds(2f);
            StartCoroutine(GetSensorModuleResponse(sensorModuleURI));
        }
    }

    private IEnumerator GetSensorModuleResponse (string uri)
    {

        UnityWebRequest webRequest = UnityWebRequest.Get(uri);
        yield return webRequest.SendWebRequest();

        Debug.LogWarning("Line 58: " + webRequest.downloadHandler.text);

        if (webRequest.error != null)
        {
            Debug.LogError("WebRequestError at 'InformationCenterController.cs' line 67: " + webRequest.error);
        }
        else
        {

            batteryStatus.text = (SystemInfo.batteryLevel * 100).ToString() + "%";


            try
            {
                SensorModuleResponse sensorModuleResponse = JsonConvert.DeserializeObject<SensorModuleResponse>(
                    webRequest.downloadHandler.text
                );

                Debug.LogWarning("Temp: " + temperatureSensorValue.text);

                // Update Sensor Value Labels
                // Format for 2 decimal places
                carbonMonoxideSensorValue.text =
                    sensorModuleResponse.carbon.value.ToString("0.00") + "mg/m^3";

                temperatureSensorValue.text =
                    sensorModuleResponse.temperature.value.ToString("0.00") + "°C";

                oxigenSensorValue.text =
                    sensorModuleResponse.oxygen.value.ToString("0.00") + "%";

                Debug.LogWarning("Temp: " + temperatureSensorValue.text);
            } catch (System.Exception e)
            {
                Debug.LogWarning("Error in deserializing Data. " + e);
            }
        }
    }


    /*// Update Routine
    private static Timer updateSensorValuesRoutine;

    // UI Data Diagram References
    private DD_DataDiagram temperatureDataDiagram;
    private GameObject temperatureDataLine;

    private DD_DataDiagram carbonMonoxideDataDiagram;
    private GameObject carbonMonoxideDataLine;

    private DD_DataDiagram oxigenDataDiagram;
    private GameObject oxigenDataLine;

    // DataDiagram Timestep
    float dataDiagramTimeStep = 0;

    // Start is called before the first frame update
    void Start()
    {
        // Register Data Diagram GameObjects
        this.RegisterDataDiagramGameObjects();

        // Create timer routine and execute every 3000ms
        updateSensorValuesRoutine = new System.Timers.Timer();
        updateSensorValuesRoutine.Interval = 2000;

        // Add sub-routine for elapsed event
        updateSensorValuesRoutine.Elapsed += OnSubRoutineCalled;

        // Repeated execution & Enable
        updateSensorValuesRoutine.AutoReset = true;
        updateSensorValuesRoutine.Enabled = true;

        updateSensorValuesRoutine.Start();
    }

    private void OnDestroy()
    {
        updateSensorValuesRoutine.Stop();
        updateSensorValuesRoutine.Dispose();
    }

    private void OnSubRoutineCalled(object source, System.Timers.ElapsedEventArgs e)
    {
        Debug.LogWarning("--------------------------------------\nSubroutine called.");
        
        // Make json accessable
        SensorModuleResponse sensorModuleResponse = JsonConvert.DeserializeObject<SensorModuleResponse>("{ \"temperature\": { \"value\": 9.3, \"status\": \"NORMAL\" }, \"carbonMonoxide\": { \"value\": 6.1, \"status\": \"NORMAL\" }, \"oxigen\": { \"value\": 94.8, \"status\": \"NORMAL\" } }");
        Debug.LogWarning("Json Deserialized.");
        Debug.LogWarning(sensorModuleResponse);

        Debug.LogWarning(sensorModuleResponse.temperature.value);
        Debug.LogWarning(sensorModuleResponse.temperature.value.ToString());
        // Update Sensor Values in UI
        this.updateSensorDataLabels(sensorModuleResponse);
        
        // Update Sensor Values Diagram in UI
        this.updateSensorDataDiagramLines(sensorModuleResponse);
    }

    private void RegisterDataDiagramGameObjects()
    {
        Debug.Log("RegisterDataDiagramGameObjects called");
        GameObject temperatureDataDiagramGameObject = GameObject.Find("/HeadsUpDisplay/SensorDataContainer/SensorDataGroup/Temperature/DataDiagram");
        GameObject carbonMonoxideDataDiagramGameObject = GameObject.Find("/HeadsUpDisplay/SensorDataContainer/SensorDataGroup/CarbonMonoxide/DataDiagram");
        GameObject oxigenDataDiagramGameObject = GameObject.Find("/HeadsUpDisplay/SensorDataContainer/SensorDataGroup/Oxigen/DataDiagram");

        // Check if GameObjects are mounted
        if (temperatureDataDiagramGameObject == null ||
            carbonMonoxideDataDiagramGameObject == null ||
            oxigenDataDiagramGameObject == null)
        {
            Debug.LogWarning(
                "Game Object of Data Diagrams could not be found. As a result, can not graph data.");
            return;
        }

        // Register DataDiagram GameObjects
        temperatureDataDiagram = temperatureDataDiagramGameObject.GetComponent<DD_DataDiagram>();
        carbonMonoxideDataDiagram = carbonMonoxideDataDiagramGameObject.GetComponent<DD_DataDiagram>();
        oxigenDataDiagram = oxigenDataDiagramGameObject.GetComponent<DD_DataDiagram>();

        // Register Default Lines
        // TODO: Registry names?
        temperatureDataLine = temperatureDataDiagram.AddLine("temperatureDataLine", Color.green);
        carbonMonoxideDataLine = carbonMonoxideDataDiagram.AddLine("carbonMonoxideDataLine", Color.green);
        oxigenDataLine = oxigenDataDiagram.AddLine("oxigenDataLine", Color.green);
        Debug.Log("RegisterDataDiagramGameObjects Done");
    }

    private void updateSensorDataLabels (SensorModuleResponse sensorModuleResponse)
    {
        Debug.LogWarning("Update Sensor Values.");
        // Update UI Text of Sensor Value Labels
        temperatureSensorValue.text = sensorModuleResponse.temperature.value.ToString() + "°C";
        carbonMonoxideSensorValue.text = sensorModuleResponse.carbonMonoxide.value.ToString() + "mg/m^3";
        oxigenSensorValue.text = sensorModuleResponse.oxigen.value.ToString() + "%";
        Debug.LogWarning("Updated Sensor Values. Following the text:");
        Debug.LogWarning(oxigenSensorValue.text);
    }

    private void updateSensorDataDiagramLines(SensorModuleResponse sensorModuleResponse)
    {
        Debug.LogWarning("Update Sensor Diagram.");
        // Add Datapoint to Temperature Data Diagram
        temperatureDataDiagram.InputPoint(
            temperatureDataLine,
            new Vector2(dataDiagramTimeStep, sensorModuleResponse.temperature.value));

        // Add Datapoint to Carbon Monoxide Data Diagram
        carbonMonoxideDataDiagram.InputPoint(
            carbonMonoxideDataLine,
            new Vector2(dataDiagramTimeStep, sensorModuleResponse.carbonMonoxide.value));

        // Add Datapoint to Oxigen Data Diagram
        oxigenDataDiagram.InputPoint(
            oxigenDataLine,
            new Vector2(dataDiagramTimeStep, sensorModuleResponse.oxigen.value));

        // Increase Timestep by 0.1
        dataDiagramTimeStep += 0.1f;
        Debug.LogWarning("Updated Sensor Diagram.");
    }*/
}
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SensorSwitch : MonoBehaviour
{

    public void ToggleSensorDataContainerVisibility()
    {
        //Toggle active status of SensorDataGroup
        GameObject SensorDataGroup = GameObject.Find("/HeadsUpDisplay/SensorDataContainer/SensorDataGroup");
        SensorDataGroup.SetActive(!SensorDataGroup.activeSelf);

        //Toggle active status of BackPlate
        GameObject BackPlate = GameObject.Find("/HeadsUpDisplay/SensorDataContainer/BackPlate");
        BackPlate.SetActive(!BackPlate.activeSelf);
    }

}

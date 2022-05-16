using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class InfoPanelClock : MonoBehaviour
{
    public TMP_Text infoPanelClock;

    // Start is called before the first frame update
    void Start()
    {
        infoPanelClock = GetComponent<TMP_Text>();
    }

    // Update is called once per frame
    void Update()
    {
        infoPanelClock.text = System.DateTime.Now.ToString("HH:mm");
    }
}

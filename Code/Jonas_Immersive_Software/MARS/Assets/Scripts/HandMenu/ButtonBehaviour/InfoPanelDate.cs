using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class InfoPanelDate : MonoBehaviour
{
    public TMP_Text infoPanelDate;

    // Start is called before the first frame update
    void Start()
    {
        infoPanelDate = GetComponent<TMP_Text>();
    }

    // Update is called once per frame
    void Update()
    {
        infoPanelDate.text = System.DateTime.Now.ToString("dd/MM/yy");
    }
}

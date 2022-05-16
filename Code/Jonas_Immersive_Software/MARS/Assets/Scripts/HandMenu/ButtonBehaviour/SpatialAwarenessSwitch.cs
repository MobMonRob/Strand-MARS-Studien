using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.SpatialAwareness;
using Microsoft.MixedReality.Toolkit.UI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpatialAwarenessSwitch : MonoBehaviour
{
    public void ToggleSpatialAwareness()
    {
        if (CoreServices.SpatialAwarenessSystem is IMixedRealityDataProviderAccess provider)
        {
            foreach (var observer in provider.GetDataProviders())
            {
                if (observer is IMixedRealitySpatialAwarenessMeshObserver meshObserver)
                {
                    if (meshObserver.DisplayOption.Equals(SpatialAwarenessMeshDisplayOptions.None))
                    {
                        meshObserver.DisplayOption = SpatialAwarenessMeshDisplayOptions.Visible;
                    } else
                    {
                        meshObserver.DisplayOption = SpatialAwarenessMeshDisplayOptions.None;
                    }
                }
            }
        }
    }
}

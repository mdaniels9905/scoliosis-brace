using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;

public class RadiusModifier : MonoBehaviour {
    
    private MeshManipulator meshManipulator;

    private void Awake () {
        meshManipulator = GetComponent<MeshManipulator>();
    }

    public void UpdateDeformationRadius ( SliderEventData eventData ) {
        float temp = eventData.NewValue;
        float moreTemp = temp / 5f;
        meshManipulator.selectionRadius = moreTemp;
    }
}
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;

public class RadiusModifier : MonoBehaviour {
    
    private MeshDeformer meshDeformer;

    private void Awake () {
        meshDeformer = GetComponent<MeshDeformer>();
    }

    public void UpdateDeformationRadius ( SliderEventData eventData ) {
        float temp = eventData.NewValue;
        float moreTemp = temp / 5f;
        meshDeformer.selectionRadius = moreTemp;
    }
}
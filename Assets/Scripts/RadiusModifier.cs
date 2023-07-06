using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;

public class RadiusModifier : MonoBehaviour {
    
    public MeshDeformer meshDeformer;
    public PinchSlider pinchSlider;

    public void UpdateDeformationRadius ( SliderEventData eventData ) {
        float temp = eventData.NewValue;
        float moreTemp = temp / 5f;
        meshDeformer.selectionRadius = moreTemp;
    }
}
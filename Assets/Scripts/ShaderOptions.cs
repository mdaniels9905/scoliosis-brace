using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShaderOptions : MonoBehaviour {

    public Material vertexMaterial;
    public Material translucentMaterial;
    public Material opaqueMaterial;
    public Material fourthOption;

    public void SetToVertex () {
        GetComponent<Renderer>().material = vertexMaterial;
    }

    public void SetToTranslucent () {
        GetComponent<Renderer>().material = translucentMaterial;
    }

    public void SetToOpaque () {
        GetComponent<Renderer>().material = opaqueMaterial;
    }

    public void SetToFourthOption () {
        GetComponent<Renderer>().material = fourthOption;
    }
}
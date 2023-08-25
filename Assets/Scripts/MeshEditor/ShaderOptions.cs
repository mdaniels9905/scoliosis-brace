//This script controls the shader of the scoliosis brace (each function is attached to a button, when a button is clicked, the shader of the
//brace changes to the one assocaited with that button.
//Written by Maya Daniels

using UnityEngine;

public class ShaderOptions : MonoBehaviour {

    [SerializeField]
    private Material vertexMaterial;

    [SerializeField]
    private Material translucentMaterial;

    [SerializeField]
    private Material opaqueMaterial;

    public void SetToVertex () {
        GetComponent<Renderer>().material = vertexMaterial;
    }

    public void SetToTranslucent () {
        GetComponent<Renderer>().material = translucentMaterial;
    }

    public void SetToOpaque () {
        GetComponent<Renderer>().material = opaqueMaterial;
    }
}
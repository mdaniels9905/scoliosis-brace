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
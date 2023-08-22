using UnityEngine;

public class ToggleShaderMenu : MonoBehaviour {

    [SerializeField]
    private MeshRenderer vertexButtonRenderer;

    [SerializeField]
    private MeshRenderer translucentButtonRenderer;

    [SerializeField]
    private MeshRenderer opaqueButtonRenderer;

    [SerializeField]
    private Material defaultMaterial;

    [SerializeField]
    private Material toggledMaterial;

    private bool vertexButtonToggled = false;
    private bool translucentButtonToggled = false;
    private bool opaqueButtonToggled = true;

    private void Start () {
        opaqueButtonRenderer.material = toggledMaterial;
    }

    public void ToggleVertexButton () {
        vertexButtonToggled = true;

        if ( translucentButtonToggled ) {
            translucentButtonToggled = false;
            translucentButtonRenderer.material = defaultMaterial;
        } else if ( opaqueButtonToggled ) {
            opaqueButtonToggled = false;
            opaqueButtonRenderer.material = defaultMaterial;
        } 

        if ( vertexButtonToggled )
            vertexButtonRenderer.material = toggledMaterial;
    }

    public void ToggleTranslucentButton () {
        translucentButtonToggled = true;

        if ( opaqueButtonToggled ) {
            opaqueButtonToggled = false;
            opaqueButtonRenderer.material = defaultMaterial;
        } else if ( vertexButtonToggled ) {
            vertexButtonToggled = false;
            vertexButtonRenderer.material = defaultMaterial;
        } 
        
        if ( translucentButtonToggled )
            translucentButtonRenderer.material = toggledMaterial;
    }

    public void ToggleOpaqueButton () {
        opaqueButtonToggled = true;

        if ( vertexButtonToggled ) {
            vertexButtonToggled = false;
            vertexButtonRenderer.material = defaultMaterial;
        } else if ( translucentButtonToggled ) {
            translucentButtonToggled = false;
            translucentButtonRenderer.material = defaultMaterial;
        }
        
        if ( opaqueButtonToggled )
            opaqueButtonRenderer.material = toggledMaterial;
    }
}
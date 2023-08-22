using UnityEngine;

public class ToggleBrushTypeMenus : MonoBehaviour {

    [SerializeField]
    private MeshRenderer sphereButtonRenderer;

    [SerializeField]
    private MeshRenderer planeButtonRenderer;

    [SerializeField]
    private Material defaultMaterial;

    [SerializeField]
    private Material toggledMaterial;

    private bool sphereButtonToggled = true;
    private bool planeButtonToggled = false;

    private void Start () {
        sphereButtonRenderer.material = toggledMaterial;
    }

    public void ToggleSphereButton () {
        sphereButtonToggled = true;

        if ( planeButtonToggled ) {
            planeButtonToggled = false;
            planeButtonRenderer.material = defaultMaterial;
        }

        if ( sphereButtonToggled )
            sphereButtonRenderer.material = toggledMaterial;
    }

    public void TogglePlaneButton () {
        planeButtonToggled = true;

        if ( sphereButtonToggled ) {
            sphereButtonToggled = false;
            sphereButtonRenderer.material = defaultMaterial;
        }

        if ( planeButtonToggled )
            planeButtonRenderer.material = toggledMaterial;
    }
}

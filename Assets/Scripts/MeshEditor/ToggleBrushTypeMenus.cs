//This script is responsible for handling the toggle features of the brush menu (sphere and plane buttons). When one button is toggled on,
//the other one is is toggled off (if it was already on). Toggling a button on activates certain scripts and toggling the same button off
//deactivates the scripts.
//Written by Maya Daniels

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

    [SerializeField]
    private GameObject sphere;

    [SerializeField]
    private GameObject plane;

    public bool SphereButtonToggled { get; private set; } = true;
    public bool PlaneButtonToggled { get; private set; } = false;

    private void Start () {
        sphereButtonRenderer.material = toggledMaterial;
        sphere.SetActive( true );
        plane.SetActive( false );
    }

    public void ToggleSphereButton () {
        SphereButtonToggled = true;
        sphereButtonRenderer.material = toggledMaterial;
        sphere.SetActive( true );

        if ( PlaneButtonToggled ) {
            PlaneButtonToggled = false;
            planeButtonRenderer.material = defaultMaterial;
            plane.SetActive( false );
        }
        
    }

    public void TogglePlaneButton () {
        PlaneButtonToggled = true;
        planeButtonRenderer.material = toggledMaterial;
        plane.SetActive( true );

        if ( SphereButtonToggled ) {
            SphereButtonToggled = false;
            sphereButtonRenderer.material = defaultMaterial;
            sphere.SetActive( false );
        }    
    }
}

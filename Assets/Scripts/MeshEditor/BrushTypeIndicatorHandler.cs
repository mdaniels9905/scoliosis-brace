using UnityEngine;
using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Input;

public class BrushTypeIndicatorHandler : MonoBehaviour {

    [SerializeField]
    private GameObject scoliosisBraceObject;

    [SerializeField]
    private GameObject radiusSlider;

    [SerializeField]
    private MeshManipulator meshManipulator;

    [SerializeField]
    private Material opaqueMaterial;

    [SerializeField]
    private Material transparentMaterial;

    [SerializeField]
    private ManipulationTypeMenuHandler manipulationTypeMenuHandler;

    [SerializeField]
    private ToggleBrushTypeMenus brushType;

    [SerializeField]
    private GameObject sphere;

    [SerializeField]
    private GameObject plane;

    private float shapeSize;
    private IMixedRealityPointer leftHandPointer;
    private IMixedRealityPointer rightHandPointer;
    private IMixedRealityPointer activePointer;
    private bool isUpdateRunning = true;

    private void Update () {
        if ( !meshManipulator.MoveAndRotateActivated ) {
            if ( manipulationTypeMenuHandler.DeformMenuActivated || manipulationTypeMenuHandler.EraseMenuActivated ) {
                foreach ( var inputSource in CoreServices.InputSystem.DetectedInputSources ) {
                    foreach ( var pointer in inputSource.Pointers ) {
                        if ( pointer.PointerName == "Left_ShellHandRayPointer(Clone)" )
                            leftHandPointer = pointer;
                        else if ( pointer.PointerName == "Right_ShellHandRayPointer(Clone)" )
                            rightHandPointer = pointer;
                    }
                }

                if ( leftHandPointer != null && leftHandPointer.IsInteractionEnabled )
                    activePointer = leftHandPointer;
                else if ( rightHandPointer != null && rightHandPointer.IsInteractionEnabled )
                    activePointer = rightHandPointer;
                else
                    activePointer = null;

                if ( isUpdateRunning ) {
                    if (brushType.SphereButtonToggled) {
                        sphere.transform.localScale = new Vector3( shapeSize, shapeSize, shapeSize );
                        MoveShapeWithCursor( sphere ); 
                    } else if (brushType.PlaneButtonToggled) {
                        plane.transform.localScale = new Vector3( shapeSize, 0.001f, shapeSize );
                        MoveShapeWithCursor( plane );
                    }
                }
            }
        }
    }

    private void MoveShapeWithCursor (GameObject gameObject) {
        if ( activePointer != null && activePointer.IsInteractionEnabled ) {
            if ( activePointer.Result.CurrentPointerTarget == scoliosisBraceObject ) {
                gameObject.SetActive( true );
                gameObject.transform.position = activePointer.Result.Details.Point;
            } else
                gameObject.SetActive( false );
        } else {
            gameObject.SetActive( false );
        }
    }

    public void ChangeShapeSize () {
        shapeSize = meshManipulator.selectionRadius * 2;
        if ( brushType.SphereButtonToggled ) {
            sphere.SetActive( true );
            sphere.transform.localScale = new Vector3( shapeSize, shapeSize, shapeSize );
        } else if ( brushType.PlaneButtonToggled ) {
            plane.transform.localScale = new Vector3( shapeSize, 0.001f, shapeSize );
            plane.SetActive( true );
        }
    }

    public void StopUpdate () {
        isUpdateRunning = false;
        if ( brushType.SphereButtonToggled ) {
            sphere.transform.position = new Vector3( radiusSlider.transform.position.x, radiusSlider.transform.position.y + 0.3f, radiusSlider.transform.position.z );
            sphere.GetComponent<Renderer>().material = opaqueMaterial;
        } else if ( brushType.PlaneButtonToggled ) {
            plane.transform.position = new Vector3( radiusSlider.transform.position.x, radiusSlider.transform.position.y + 0.1f, radiusSlider.transform.position.z );
            plane.GetComponent<Renderer>().material = opaqueMaterial;
        }     
    }

    public void StartUpdate () {
        isUpdateRunning = true;
        if ( brushType.SphereButtonToggled )
            sphere.GetComponent<Renderer>().material = transparentMaterial;
        else if ( brushType.PlaneButtonToggled )
            plane.GetComponent<Renderer>().material = transparentMaterial;
    }
}
//This script controls the brush type indicators (which one is visible, and updates the location of the object when the hand ray cursor moves).
//Written by Maya Daniels

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
                //Finds the cursor at the end of the hand pointer to know where to place the brush type indicator (sphere or plane)
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
                    //While the brace is being edited, the brush type indicator position is updated as the cursor moves to a new position
                    if (brushType.SphereButtonToggled) {
                        sphere.transform.localScale = new Vector3( shapeSize, shapeSize, shapeSize );
                        MoveShapeWithCursor( sphere ); 
                    } else if (brushType.PlaneButtonToggled) {
                        float planeShapeSize = shapeSize / 2;
                        plane.transform.localScale = new Vector3( planeShapeSize, planeShapeSize, planeShapeSize );
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

    //This script is activated when the slider is moved.
    public void ChangeShapeSize () {
        
        if ( brushType.SphereButtonToggled ) {
            shapeSize = meshManipulator.selectionRadius * 2;
            sphere.SetActive( true );
            sphere.transform.localScale = new Vector3( shapeSize, shapeSize, shapeSize );
        } else if ( brushType.PlaneButtonToggled ) {
            shapeSize = meshManipulator.selectionRadius;
            plane.transform.localScale = new Vector3( shapeSize, shapeSize, shapeSize );
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
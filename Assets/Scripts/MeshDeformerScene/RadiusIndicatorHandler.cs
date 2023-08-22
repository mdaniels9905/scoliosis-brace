using UnityEngine;
using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Input;

public class RadiusIndicatorHandler : MonoBehaviour {

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

    private float sphereRadius;
    private IMixedRealityPointer leftHandPointer;
    private IMixedRealityPointer rightHandPointer;
    private IMixedRealityPointer activePointer;
    private bool isUpdateRunning = true;

    private void Start () {
        transform.localScale = Vector3.zero;
    }

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
                    sphereRadius = meshManipulator.selectionRadius * 2;
                    transform.localScale = new Vector3( sphereRadius, sphereRadius, sphereRadius );

                    if ( activePointer != null && activePointer.IsInteractionEnabled ) {
                        if ( activePointer.Result.CurrentPointerTarget == scoliosisBraceObject )
                            transform.position = activePointer.Result.Details.Point;
                        else
                            transform.localScale = Vector3.zero;
                    } else {
                        transform.localScale = Vector3.zero;
                    }
                }
            }
        }
    }

    public void ChangeSphereSize () {
        sphereRadius = meshManipulator.selectionRadius * 2;
        transform.localScale = new Vector3( sphereRadius, sphereRadius, sphereRadius );
    }

    public void StopUpdate () {
        isUpdateRunning = false;
        transform.position = new Vector3( radiusSlider.transform.position.x, radiusSlider.transform.position.y + 0.3f, radiusSlider.transform.position.z );
        GetComponent<Renderer>().material = opaqueMaterial;
    }

    public void StartUpdate () {
        isUpdateRunning = true;
        GetComponent<Renderer>().material = transparentMaterial;
    }
}
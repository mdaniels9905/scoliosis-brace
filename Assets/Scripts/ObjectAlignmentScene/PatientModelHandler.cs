using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.UI.BoundsControl;
using UnityEngine;

public class PatientModelHandler : MonoBehaviour {

    private ObjectManipulator torsoManipulator;
    private BoundsControl torsoBounds;
    private BoxCollider torsoBoxCollider;
    private MeshCollider torsoMeshCollider;

    private void Start () {
        torsoManipulator = GetComponent<ObjectManipulator>();
        torsoBounds = GetComponent<BoundsControl>();
        torsoBoxCollider = GetComponent<BoxCollider>();
        torsoMeshCollider = GetComponent<MeshCollider>();

        torsoManipulator.enabled = false;
        torsoBounds.enabled = false;
        torsoBoxCollider.enabled = false;
        torsoMeshCollider.enabled = false;
    }

    public void OnTorsoButtonToggledOn () {
        torsoManipulator.enabled = true;
        torsoBounds.enabled = true;
        torsoBoxCollider.enabled = true;
        torsoMeshCollider.enabled = true;
    }

    public void OnTorsoButtonToggledOff () {
        torsoManipulator.enabled = false;
        torsoBounds.enabled = false;
        torsoBoxCollider.enabled = false;
        torsoMeshCollider.enabled = false;
    }
}

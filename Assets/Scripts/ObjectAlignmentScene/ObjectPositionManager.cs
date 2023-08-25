//This script handles the object placement from the first scene to the next scene.
//Written by Maya Daniels

using UnityEngine;

public class ObjectPositionManager : MonoBehaviour {

    public static ObjectPositionManager Instance { get; set; }

    public Vector3[] objectPositions = new Vector3[ 2 ];
    public Quaternion[] objectRotations = new Quaternion[ 2 ];
    public Vector3[] objectScales = new Vector3[ 2 ];  

    private void Awake () {
        if (Instance != null) {
            Destroy( gameObject );
            return;
        }

        Instance = this;
        DontDestroyOnLoad( gameObject );
    }
}

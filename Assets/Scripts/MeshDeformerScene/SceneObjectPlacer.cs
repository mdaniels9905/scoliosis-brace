using UnityEngine;

public class SceneObjectPlacer : MonoBehaviour
{
    [SerializeField]
    private GameObject image;

    [SerializeField]
    private GameObject patientModel;

    private void Start () {
        if (ObjectPositionManager.Instance != null) {
            Debug.Log( "2 patientModel before changing: " + patientModel.transform.position.ToString() );
            Debug.Log( "2 image before changing: " + image.transform.position.ToString() );

            image.transform.SetLocalPositionAndRotation( ObjectPositionManager.Instance.objectPositions[ 0 ], ObjectPositionManager.Instance.objectRotations[ 0 ] );
            image.transform.localScale = ObjectPositionManager.Instance.objectScales[ 0 ];

            patientModel.transform.SetLocalPositionAndRotation( ObjectPositionManager.Instance.objectPositions[ 1 ], ObjectPositionManager.Instance.objectRotations[ 1 ] );
            patientModel.transform.localScale = ObjectPositionManager.Instance.objectScales[ 1 ];

            Debug.Log( "2 patientModel after changing: " + patientModel.transform.position.ToString() );
            Debug.Log( "2 image after changing: " + image.transform.position.ToString() );
        }
    }
}

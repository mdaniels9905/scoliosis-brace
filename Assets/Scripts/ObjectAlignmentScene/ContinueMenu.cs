using UnityEngine;
using UnityEngine.SceneManagement;

public class ContinueMenu : MonoBehaviour
{
    [SerializeField]
    private GameObject checkContinuationBox;

    [SerializeField]
    private GameObject image;

    [SerializeField]
    private GameObject patientModel;

    public void OnContinueClicked () {
        gameObject.SetActive( false );
        checkContinuationBox.SetActive( true );
    }

    public void OnNoClicked () {
        gameObject.SetActive( true );
        checkContinuationBox.SetActive( false );
    }

    public void OnYesClicked () {
        checkContinuationBox.SetActive( false );
        SaveObjectTransforms();
        SceneManager.LoadScene( "MeshDeformer" );  
    }

    private void SaveObjectTransforms () {
        ObjectPositionManager.Instance.objectPositions[ 0 ] = image.transform.localPosition;
        ObjectPositionManager.Instance.objectPositions[ 1 ] = patientModel.transform.localPosition;
        Debug.Log( "1 patientModel: " + patientModel.transform.position.ToString() );
        Debug.Log( "1 image: " + image.transform.position.ToString() );

        ObjectPositionManager.Instance.objectRotations[ 0 ] = image.transform.localRotation;
        ObjectPositionManager.Instance.objectRotations[ 1 ] = patientModel.transform.localRotation;

        ObjectPositionManager.Instance.objectScales[ 0 ] = image.transform.localScale;
        ObjectPositionManager.Instance.objectScales[ 1 ] = patientModel.transform.localScale;
    }
}

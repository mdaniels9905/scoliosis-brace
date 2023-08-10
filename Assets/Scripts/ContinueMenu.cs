using UnityEngine;
using UnityEngine.SceneManagement;

public class ContinueMenu : MonoBehaviour
{
    [SerializeField]
    private GameObject areYouSureBox;

    [SerializeField]
    private GameObject image;

    [SerializeField]
    private GameObject braceModel;

    [SerializeField]
    private GameObject torsoModel;

    public Vector3 ImagePosition { get; set; }
    public Vector3 BracePosition { get; set; }
    public Vector3 TorsoPosition { get; set; }

    public void OnContinueClicked () {
        gameObject.SetActive( false );
        areYouSureBox.SetActive( true );
    }

    public void OnNoClicked () {
        gameObject.SetActive( true );
        areYouSureBox.SetActive( false );
    }

    public void OnYesClicked () {
        areYouSureBox.SetActive( false );
        SceneManager.LoadScene( "MeshDeformer" );
        ImagePosition = image.transform.position;
        BracePosition = braceModel.transform.position;
        TorsoPosition = torsoModel.transform.position;
    }
}

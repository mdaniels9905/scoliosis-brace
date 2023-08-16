using UnityEngine;

public class Undo : MonoBehaviour {

    public MeshDeformer meshDeformer;

    public void UndoChange () {
        //meshDeformer.displacedVertices = meshDeformer.storedVertices;
        //meshDeformer.DeformedMesh.vertices = meshDeformer.displacedVertices;
       // meshDeformer.DeformedMesh.RecalculateNormals();
    }
}
using UnityEngine;

public class Undo : MonoBehaviour {

    public MeshDeformer meshDeformer;

    public void UndoChange () {
        meshDeformer.displacedVertices = meshDeformer.storedVertices;
        meshDeformer.deformedMesh.vertices = meshDeformer.displacedVertices;
        meshDeformer.deformedMesh.RecalculateNormals();
    }
}
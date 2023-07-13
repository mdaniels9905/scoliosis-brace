using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FindEdgeVertices : MonoBehaviour
{
    public GameObject scoliosisBrace;

    public class VertexData {
        public Vector3 Vertex { get; set; }
        public List<int> Indices { get; set; }
        public int Number { get; set; }

        public VertexData (Vector3 vertex, List<int> indices, int number) {
            Vertex = vertex;
            Indices = indices;
            Number = number;
        }
    }

    private Vector3[] vertices;
    private List<VertexData> vertexData;

    public void Start () {
        Debug.Log( "Start finding edge vertices" );
        Mesh mesh = scoliosisBrace.GetComponent<MeshFilter>().mesh;

        vertices = mesh.vertices;
        vertexData = new List<VertexData>();
        int[] triangles = mesh.triangles;

        for (int i = 0; i < triangles.Length; i++) {
            int temp = triangles[ i ];
            CheckIfExists( temp );
        }

        for ( int i = 0; i < vertexData.Count; i++ ) {
            if ( vertexData[ i ].Number == 4 )
                Debug.Log( $"At indices {string.Join( ", ", vertexData[ i ].Indices )}: vertex: {string.Join( ", ", vertexData[ i ].Vertex )} and number of occurrences: {vertexData[ i ].Number}" );
        }

        Debug.Log( "End of finding edge vertices" );
    }

    public void CheckIfExists( int index ) {
        Vector3 vertex = vertices[ index ];

        for (int i = 0; i < vertexData.Count; i++ ) {
            if ( vertexData[ i ].Vertex == vertex ) {
                vertexData[i].Indices.Add( index );
                vertexData[ i ].Number++;
                return;
            }
        }
        List<int> tempIndex = new List<int> {
            index
        };
        vertexData.Add( new VertexData( vertex, tempIndex, 1 ) );
        return;
    }

    public void OnDrawGizmos () {
        Gizmos.color = Color.red;
        int[] indices = new int[] { 0, 4, 2, 6304, 1263, 6358, 1266, 1367, 1368, 1372, 1491, 1545, 2083, 2096, 2405, 2452, 2453, 2456, 2490, 2789, 4182, 4186, 4191, 4271, 4285, 5406, 6063, 6413, 6846, 7119, 7187, 7946, 9599, 9601, 9602, 9621, 9625, 10119, 10190, 10507, 10576, 11184, 11195, 34, 5957, 49, 5958, 195, 205, 196, 198, 199, 204, 206, 274, 273, 275, 279, 337, 338, 340, 389, 434, 480, 490, 491, 493, 496, 498, 501, 502, 7615, 689, 7950, 692, 695, 697, 773, 774, 794, 795, 807, 808, 1240, 1241, 1252, 1264, 6303, 1267, 1269, 1270, 6412, 1366, 1370, 1462, 1463, 1472, 1492, 1499, 1507, 1514, 1520, 1525, 1528, 1531, 1534, 1538, 1542, 1546, 1551, 1558, 1610, 1614, 1619, 1633, 1970, 1969, 5405, 2028, 2030, 2027, 2082, 2095, 2102, 2101, 2108, 2117, 2225, 2393, 2394, 2395, 2402, 2406, 2431, 2435, 2443, 2446, 2448, 2450, 2454, 2457, 2484, 2486, 2488, 2533, 2541, 2542, 8218, 2634, 2636, 2639, 2642, 2646, 8287, 2784, 2786, 2783, 6840, 3018, 6861, 3019, 3032, 3033, 3048, 3303, 3304, 3305, 3307, 3552, 3385, 3554, 3551, 9093, 3634, 3635, 3712, 3714, 3711, 10440, 3715, 10189, 3976, 3985, 3986, 10848, 4181, 4183, 4187, 4196, 4200, 4204, 4220, 4239, 4244, 4248, 4251, 4257, 4263, 4269, 4284, 5302, 5352, 5353, 8856, 5535, 6106, 6002, 6004, 6006, 6008, 6009, 6062, 6107, 6149, 6148, 6415, 6357, 6414, 6417, 6420, 6468, 6469, 6471, 6602, 6600, 8830, 6601, 8835, 6604, 6856, 6841, 6845, 6847, 8735, 6848, 6853, 6955, 7034, 7036, 7117, 7186, 7254, 7253, 7322, 7321, 7464, 7396, 7397, 7399, 7401, 7404, 7463, 7532, 7531, 14004, 7616, 13876, 7938, 7939, 8216, 7940, 7944, 7943, 8253, 7948, 8219, 8252, 8286, 8310, 8309, 8350, 8349, 8390, 8389, 8427, 8426, 8461, 8460, 8495, 8494, 8530, 8529, 8732, 8734, 8831, 8834, 12824, 8857, 12825, 9092, 9311, 9162, 9309, 9161, 9201, 9200, 9216, 9231, 9236, 9235, 9260, 9597, 9598, 9600, 9607, 9609, 9611, 9617, 9622, 9626, 9630, 9635, 9641, 10439, 10575, 10643, 10845, 10920, 10930, 10114, 10508, 10712, 10847, 10949, 11194, 341, 387, 436, 475, 476, 478, 688, 690, 1251, 11183, 1467, 1477, 1564, 1625, 2107, 2116, 2224, 2238, 2237, 5534, 2396, 2397, 2410, 2459, 2491, 2790, 3058, 3386, 2532, 8730, 6850, 3637, 3975, 13915, 4180, 4184, 4209, 4226, 5300, 6860, 6953, 8902, 7408, 9215, 9232, 9259, 9619, 9596, 9603, 9604, 10113, 10118, 10711, 10844, 10919, 10929 };
        
        try {
            for (int i = 0; i < indices.Length; i++) {
                Vector3 temp = vertices[ indices[ i ] ];
                temp = transform.TransformPoint( temp );
                Gizmos.DrawSphere( temp, 0.001f );
            }
        } catch (NullReferenceException) { 
            //Nothing
        } catch (IndexOutOfRangeException) { }
    }
}

//Originial code sourced from: https://forum.unity.com/threads/program-a-shader-that-only-displays-the-visible-edges.773534/
// Modifications made by Maya Daniels to add a base colour

Shader "Custom/TriangleShader" {
    Properties {
        _Color("Main Color", Color) = (1, 1, 1, 1)
    }
    
    SubShader {

        Tags {"RenderType" = "Opaque" "Queue" = "Geometry"}
        Pass {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #include "UnityCG.cginc"

            struct appdata {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
            };

            struct v2f {
                float2 uv : TEXCOORD0;
                float4 vertex : SV_POSITION;
            };

            fixed4 _Color;

            v2f vert(appdata v) {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = v.uv;
                return o;
            }

            fixed4 frag(v2f i) : SV_Target {
                return _Color;
            }
            ENDCG
        }

        Tags { "RenderType" = "Transparent" "Queue" = "Transparent" }
        Pass {
            Blend SrcAlpha OneMinusSrcAlpha
            CGPROGRAM
            #pragma vertex VSMain
            #pragma geometry GSMain
            #pragma fragment PSMain
            #pragma target 5.0

            struct Data {
                float4 vertex : SV_Position;
                float2 barycentric : BARYCENTRIC;
            };

            void VSMain(inout float4 vertex:POSITION) { }

            [maxvertexcount(3)]
            void GSMain(triangle float4 patch[3]:SV_Position, inout TriangleStream<Data> stream) {
                Data GS;
                for (uint i = 0; i < 3; i++) {
                    GS.vertex = UnityObjectToClipPos(patch[i]);
                    GS.barycentric = float2(fmod(i,2.0), step(2.0,i));
                    stream.Append(GS);
                }
                stream.RestartStrip();
            }

            float4 PSMain(Data PS) : SV_Target {
                float3 coord = float3(PS.barycentric, 1.0 - PS.barycentric.x - PS.barycentric.y);
                coord = smoothstep(fwidth(coord) * 0.1, fwidth(coord) * 0.1 + fwidth(coord), coord);
                return float4(0..xxx, 1.0 - min(coord.x, min(coord.y, coord.z)));
            }
            ENDCG
        }
    }
}
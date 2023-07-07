#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>
struct Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941;
// System.Collections.Generic.Dictionary`2<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService>
struct Dictionary_2_t5770CEAD66F48047B956AAF7E69E48BDABEF1C68;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Transform>
struct IEnumerable_1_t4980F9E076B96A4E697C2E09671204DD70B5573F;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.UInt32>
struct KeyCollection_tF10B99F6E09082A28F0A88CEEFEE8EEC2974C5B1;
// System.Collections.Generic.List`1<System.Tuple`2<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService>>
struct List_1_tCB59844EB6BF20D3F2C5098689D537EAA7558251;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.MixedRealityToolkit>
struct List_1_t4F4C46F41E42E85B6BB8082F1C70950F30315F4D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct MixedRealitySpatialAwarenessEventData_1_tE46EB2E96DFDDF77196F0A24715743FD22640021;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.UInt32>
struct ValueCollection_tA72BD7D724CE3349A8B73188A810631DD6C92C68;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.UInt32>[]
struct EntryU5BU5D_t2D773360023B366541A954D8D8740BA28904C9FE;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMesh[]
struct TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Microsoft.MixedReality.Toolkit.Examples.Demos.ColorChanger
struct ColorChanger_t7CD2230CE10AB387EB906DE7E060D4E3E4299819;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler
struct DemoSpatialMeshHandler_tFD823EAEBF6167EFE262AAD6B62DD2AA8301B2EE;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IEnumerable
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource
struct IMixedRealityEventSource_t9E9DFD08DEE578702833FF502590A1E0476E59E1;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride
struct IMixedRealityGazeProviderHeadOverride_t4AE8C964650D1C4A0D1210EC95667A257ED934D3;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver
struct IMixedRealitySpatialAwarenessMeshObserver_t30617C2B51DA8C26C155995B2927A9E30C2C9830;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// Microsoft.MixedReality.Toolkit.Examples.Demos.LoadProfile
struct LoadProfile_t18133AB13D77FC4BD5D6D2A86EC403430604CEC2;
// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.LoadProfilesOnStartup
struct LoadProfilesOnStartup_tE2F36222B03732AC3B951CDC8B182051E17DDDE0;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix
struct MaterialMatrix_tA24DA063D198DE17128C737E2C76A175CD09D6FC;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile
struct MixedRealityBoundaryVisualizationProfile_t8696935F2FD43867A7389688367D5F2C41862E81;
// Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile
struct MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile
struct MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC;
// Microsoft.MixedReality.Toolkit.MixedRealityExperienceSettingsProfile
struct MixedRealityExperienceSettingsProfile_tF8529D48DCD3D672F99F8D99C93109C849C9CBBC;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct MixedRealityInputSystemProfile_t43E2FD730113CD773A9FDF6E6829519817478260;
// Microsoft.MixedReality.Toolkit.MixedRealityRegisteredServiceProvidersProfile
struct MixedRealityRegisteredServiceProvidersProfile_t242C7F2DFE03CADEEC7E5552384C86B636A78AC5;
// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile
struct MixedRealitySceneSystemProfile_t3C841F95FE97BC5E0245ACAAE7164BB8B5C31B1D;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData
struct MixedRealitySpatialAwarenessEventData_t665140146CE5C138E399BC73BA5802220AE76341;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile
struct MixedRealitySpatialAwarenessSystemProfile_t84A6651AAFB01D051CB46EFFB648247FA23035D7;
// Microsoft.MixedReality.Toolkit.MixedRealityToolkit
struct MixedRealityToolkit_t34094ACADA92B29D4E89DBB9ECBDD3BF74777D9D;
// Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile
struct MixedRealityToolkitConfigurationProfile_t4B5C622F455F24A9CDF4D3F5C03912E8E33FA414;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Microsoft.MixedReality.Toolkit.UI.PinchSlider
struct PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// Microsoft.MixedReality.Toolkit.Examples.Demos.ShowSliderValue
struct ShowSliderValue_tE8409FAC9961F437152EE24A9DA123C2A04AAF56;
// Microsoft.MixedReality.Toolkit.Examples.Demos.SliderChangeColor
struct SliderChangeColor_t1308C8FB23A2F2F716202E8B4169C7A16BDA9AE7;
// Microsoft.MixedReality.Toolkit.UI.SliderEventData
struct SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379;
// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275;
// System.String
struct String_t;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// Microsoft.MixedReality.Toolkit.Examples.Demos.ToggleGazeSource
struct ToggleGazeSource_tDF88A7A6ABCBB2E36AFF225CD9818ECF88481BC8;
// Microsoft.MixedReality.Toolkit.Examples.Demos.ToggleSpatialMeshObserver
struct ToggleSpatialMeshObserver_t3855829EDEFA59C5384DA5BD1AE41E8047B22CDD;
// Microsoft.MixedReality.Toolkit.Examples.Demos.ToggleSpatialMeshVisualization
struct ToggleSpatialMeshVisualization_t74B773C56D21CE249E5639230A502E584ADA7847;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.TriggerOnStartup
struct TriggerOnStartup_tA0F95BE9BAD2D70E4C900ECD09EEEFACE3D296A8;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// Microsoft.MixedReality.Toolkit.Examples.Experimental.HandMenu.UpdateSliderTrackLine
struct UpdateSliderTrackLine_t16327B23D505E7274FFBB392C1A6E86AC12DE9C6;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGazeProviderHeadOverride_t4AE8C964650D1C4A0D1210EC95667A257ED934D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealitySpatialAwarenessMeshObserver_t30617C2B51DA8C26C155995B2927A9E30C2C9830_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityToolkit_t34094ACADA92B29D4E89DBB9ECBDD3BF74777D9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral697FB0231F804375E0927CADC1B1C0FA85C07BEF;
IL2CPP_EXTERN_C String_t* _stringLiteral7F94A8E8715AB28B4A3A63F016AFABE058C94FF0;
IL2CPP_EXTERN_C String_t* _stringLiteral9874951348E190FDE59ADF48CECAB4A5149C1D18;
IL2CPP_EXTERN_C String_t* _stringLiteral9932973D4B6AA1AA193C06D8D34B58B677685003;
IL2CPP_EXTERN_C String_t* _stringLiteralA2A3DF99788A73C2F0FE7267B988915F72D2C1F1;
IL2CPP_EXTERN_C String_t* _stringLiteralA3ECD8561E7D2C87B06C0D5CD9EC2913C8B766F8;
IL2CPP_EXTERN_C String_t* _stringLiteralBABD5F84CFAE42B094A0A937A48816B61338D316;
IL2CPP_EXTERN_C String_t* _stringLiteralBE75C757AD02FA8901D71BEB1C9171088A9A0D03;
IL2CPP_EXTERN_C String_t* _stringLiteralD87DE9472D71F6ED13876C3E6F9565591968955E;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m7CBAFA50AB995C9F53D6140718FCD31D7BEC7CC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m991A1A2A2EFE70B64BBECFF1B44EE5C04FF8994E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreServices_GetSpatialAwarenessSystemDataProvider_TisIMixedRealitySpatialAwarenessMeshObserver_t30617C2B51DA8C26C155995B2927A9E30C2C9830_m13B7D6AAA41BE0F54C0CB24BA43123A60A271324_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DemoSpatialMeshHandler_RegisterEventHandlers_TisIMixedRealitySpatialAwarenessObservationHandler_1_t92770D3EC6A2A2A1BCC5AFF6614A5CA110847BA4_TisSpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379_mADAFE4F394C813DC386DD8E31846C3E7C54D8866_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DemoSpatialMeshHandler_UnregisterEventHandlers_TisIMixedRealitySpatialAwarenessObservationHandler_1_t92770D3EC6A2A2A1BCC5AFF6614A5CA110847BA4_TisSpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379_m55C725D99854B89870A9A3385B2318573E0E97A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m2A953E5E686FD21410BFE26A979E62AD3B606ACD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m96DDD145802AA047D446C1CCBFE8C7081826DDB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m1D1D35A762F0F28B2765B4DA71CF79CB366FE469_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mFD3AC7FF3135A2F96FD773BBE87E3638ED2DC605_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4B3F8178FB972174D13CD5AB86A7DA5B5251CA3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m8A5D89A88626E5D1C4EC173C7E833ACAC3DDE2FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Cast_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m6A182C168D715CC65604472355C3E0364A97980E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m9AEA33F3B287912A369F86579214A123828BDCC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFE0E36B3C1670C308B04C39EDC76838DD59826B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_mD342F4F06F3848B43732DD183CDDA00AED3EE0A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var;

struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t3179111F5E33FE15E26FF1A12B4917456EB860EA 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>
struct Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t2D773360023B366541A954D8D8740BA28904C9FE* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tF10B99F6E09082A28F0A88CEEFEE8EEC2974C5B1* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA72BD7D724CE3349A8B73188A810631DD6C92C68* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// Microsoft.MixedReality.Toolkit.UI.SliderEventData
struct SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE  : public RuntimeObject
{
	// System.Single Microsoft.MixedReality.Toolkit.UI.SliderEventData::<OldValue>k__BackingField
	float ___U3COldValueU3Ek__BackingField_0;
	// System.Single Microsoft.MixedReality.Toolkit.UI.SliderEventData::<NewValue>k__BackingField
	float ___U3CNewValueU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.UI.PinchSlider Microsoft.MixedReality.Toolkit.UI.SliderEventData::<Slider>k__BackingField
	PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* ___U3CSliderU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.UI.SliderEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// Microsoft.MixedReality.Toolkit.GenericBaseEventData
struct GenericBaseEventData_tA3C45766BDAC0A70B553C855E65F215F2E881687  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource Microsoft.MixedReality.Toolkit.GenericBaseEventData::<EventSource>k__BackingField
	RuntimeObject* ___U3CEventSourceU3Ek__BackingField_2;
	// System.DateTime Microsoft.MixedReality.Toolkit.GenericBaseEventData::<EventTime>k__BackingField
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CEventTimeU3Ek__BackingField_3;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.GenericBaseEventData::<selectedObject>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CselectedObjectU3Ek__BackingField_4;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData
struct MixedRealitySpatialAwarenessEventData_t665140146CE5C138E399BC73BA5802220AE76341  : public GenericBaseEventData_tA3C45766BDAC0A70B553C855E65F215F2E881687
{
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_5;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct MixedRealitySpatialAwarenessEventData_1_tE46EB2E96DFDDF77196F0A24715743FD22640021  : public MixedRealitySpatialAwarenessEventData_t665140146CE5C138E399BC73BA5802220AE76341
{
	// T Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1::<SpatialObject>k__BackingField
	SpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379* ___U3CSpatialObjectU3Ek__BackingField_6;
};

// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile
struct MixedRealityToolkitConfigurationProfile_t4B5C622F455F24A9CDF4D3F5C03912E8E33FA414  : public BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4
{
	// Microsoft.MixedReality.Toolkit.MixedRealityExperienceSettingsProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::experienceSettingsProfile
	MixedRealityExperienceSettingsProfile_tF8529D48DCD3D672F99F8D99C93109C849C9CBBC* ___experienceSettingsProfile_5;
	// Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::targetExperienceScale
	int32_t ___targetExperienceScale_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::enableCameraSystem
	bool ___enableCameraSystem_7;
	// Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::cameraProfile
	MixedRealityCameraProfile_t3EFE29D7BC4D250543D92ABF6EFFF831E219F35F* ___cameraProfile_8;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::cameraSystemType
	SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E* ___cameraSystemType_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::enableInputSystem
	bool ___enableInputSystem_10;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::inputSystemProfile
	MixedRealityInputSystemProfile_t43E2FD730113CD773A9FDF6E6829519817478260* ___inputSystemProfile_11;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::inputSystemType
	SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E* ___inputSystemType_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::enableBoundarySystem
	bool ___enableBoundarySystem_13;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::boundarySystemType
	SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E* ___boundarySystemType_14;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::xrsdkBoundarySystemType
	SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E* ___xrsdkBoundarySystemType_15;
	// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::boundaryVisualizationProfile
	MixedRealityBoundaryVisualizationProfile_t8696935F2FD43867A7389688367D5F2C41862E81* ___boundaryVisualizationProfile_16;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::enableTeleportSystem
	bool ___enableTeleportSystem_17;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::teleportSystemType
	SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E* ___teleportSystemType_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::enableSpatialAwarenessSystem
	bool ___enableSpatialAwarenessSystem_19;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::spatialAwarenessSystemType
	SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E* ___spatialAwarenessSystemType_20;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::spatialAwarenessSystemProfile
	MixedRealitySpatialAwarenessSystemProfile_t84A6651AAFB01D051CB46EFFB648247FA23035D7* ___spatialAwarenessSystemProfile_21;
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::diagnosticsSystemProfile
	MixedRealityDiagnosticsProfile_tF0C607D340096A8CF0E72C813EE76A9CBE288EFC* ___diagnosticsSystemProfile_22;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::enableDiagnosticsSystem
	bool ___enableDiagnosticsSystem_23;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::diagnosticsSystemType
	SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E* ___diagnosticsSystemType_24;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::sceneSystemProfile
	MixedRealitySceneSystemProfile_t3C841F95FE97BC5E0245ACAAE7164BB8B5C31B1D* ___sceneSystemProfile_25;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::enableSceneSystem
	bool ___enableSceneSystem_26;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::sceneSystemType
	SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E* ___sceneSystemType_27;
	// Microsoft.MixedReality.Toolkit.MixedRealityRegisteredServiceProvidersProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::registeredServiceProvidersProfile
	MixedRealityRegisteredServiceProvidersProfile_t242C7F2DFE03CADEEC7E5552384C86B636A78AC5* ___registeredServiceProvidersProfile_28;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::useServiceInspectors
	bool ___useServiceInspectors_29;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::renderDepthBuffer
	bool ___renderDepthBuffer_30;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::enableVerboseLogging
	bool ___enableVerboseLogging_31;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.ColorChanger
struct ColorChanger_t7CD2230CE10AB387EB906DE7E060D4E3E4299819  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MeshRenderer Microsoft.MixedReality.Toolkit.Examples.Demos.ColorChanger::rend
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___rend_4;
	// UnityEngine.Material[] Microsoft.MixedReality.Toolkit.Examples.Demos.ColorChanger::mats
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___mats_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.ColorChanger::cur
	int32_t ___cur_6;
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler
struct DemoSpatialMeshHandler_tFD823EAEBF6167EFE262AAD6B62DD2AA8301B2EE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32> Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::meshUpdateData
	Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* ___meshUpdateData_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::isRegistered
	bool ___isRegistered_5;
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.LoadProfile
struct LoadProfile_t18133AB13D77FC4BD5D6D2A86EC403430604CEC2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile Microsoft.MixedReality.Toolkit.Examples.Demos.LoadProfile::configProfile
	MixedRealityToolkitConfigurationProfile_t4B5C622F455F24A9CDF4D3F5C03912E8E33FA414* ___configProfile_4;
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.LoadProfilesOnStartup
struct LoadProfilesOnStartup_tE2F36222B03732AC3B951CDC8B182051E17DDDE0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.LoadProfilesOnStartup::configProfile
	MixedRealityToolkitConfigurationProfile_t4B5C622F455F24A9CDF4D3F5C03912E8E33FA414* ___configProfile_4;
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix
struct MaterialMatrix_tA24DA063D198DE17128C737E2C76A175CD09D6FC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_4;
	// UnityEngine.Mesh Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::dimension
	int32_t ___dimension_6;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::positionOffset
	float ___positionOffset_7;
	// System.String Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::firstPropertyName
	String_t* ___firstPropertyName_8;
	// System.String Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::secondPropertyName
	String_t* ___secondPropertyName_9;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::localRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localRotation_10;
};

// Microsoft.MixedReality.Toolkit.MixedRealityToolkit
struct MixedRealityToolkit_t34094ACADA92B29D4E89DBB9ECBDD3BF74777D9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::<IsProfileSwitching>k__BackingField
	bool ___U3CIsProfileSwitchingU3Ek__BackingField_8;
	// Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkit::activeProfile
	MixedRealityToolkitConfigurationProfile_t4B5C622F455F24A9CDF4D3F5C03912E8E33FA414* ___activeProfile_9;
	// Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkit::newProfile
	MixedRealityToolkitConfigurationProfile_t4B5C622F455F24A9CDF4D3F5C03912E8E33FA414* ___newProfile_10;
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.ShowSliderValue
struct ShowSliderValue_tE8409FAC9961F437152EE24A9DA123C2A04AAF56  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshPro Microsoft.MixedReality.Toolkit.Examples.Demos.ShowSliderValue::textMesh
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___textMesh_4;
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.SliderChangeColor
struct SliderChangeColor_t1308C8FB23A2F2F716202E8B4169C7A16BDA9AE7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Renderer Microsoft.MixedReality.Toolkit.Examples.Demos.SliderChangeColor::TargetRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___TargetRenderer_4;
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.ToggleGazeSource
struct ToggleGazeSource_tDF88A7A6ABCBB2E36AFF225CD9818ECF88481BC8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride Microsoft.MixedReality.Toolkit.Examples.Demos.ToggleGazeSource::gazeProvider
	RuntimeObject* ___gazeProvider_4;
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.ToggleSpatialMeshObserver
struct ToggleSpatialMeshObserver_t3855829EDEFA59C5384DA5BD1AE41E8047B22CDD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.ToggleSpatialMeshVisualization
struct ToggleSpatialMeshVisualization_t74B773C56D21CE249E5639230A502E584ADA7847  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.TriggerOnStartup
struct TriggerOnStartup_tA0F95BE9BAD2D70E4C900ECD09EEEFACE3D296A8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.TriggerOnStartup::OnSceneStart
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnSceneStart_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Microsoft.MixedReality.Toolkit.Examples.Experimental.HandMenu.UpdateSliderTrackLine
struct UpdateSliderTrackLine_t16327B23D505E7274FFBB392C1A6E86AC12DE9C6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Experimental.HandMenu.UpdateSliderTrackLine::activeLine
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___activeLine_4;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Int32 TMPro.TextMeshPro::_SortingLayer
	int32_t ____SortingLayer_266;
	// System.Int32 TMPro.TextMeshPro::_SortingLayerID
	int32_t ____SortingLayerID_267;
	// System.Int32 TMPro.TextMeshPro::_SortingOrder
	int32_t ____SortingOrder_268;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshPro::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_269;
	// System.Boolean TMPro.TextMeshPro::m_currentAutoSizeMode
	bool ___m_currentAutoSizeMode_270;
	// System.Boolean TMPro.TextMeshPro::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// System.Single TMPro.TextMeshPro::m_previousLossyScaleY
	float ___m_previousLossyScaleY_272;
	// UnityEngine.Renderer TMPro.TextMeshPro::m_renderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___m_renderer_273;
	// UnityEngine.MeshFilter TMPro.TextMeshPro::m_meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___m_meshFilter_274;
	// System.Boolean TMPro.TextMeshPro::m_isFirstAllocation
	bool ___m_isFirstAllocation_275;
	// System.Int32 TMPro.TextMeshPro::m_max_characters
	int32_t ___m_max_characters_276;
	// System.Int32 TMPro.TextMeshPro::m_max_numberOfLines
	int32_t ___m_max_numberOfLines_277;
	// TMPro.TMP_SubMesh[] TMPro.TextMeshPro::m_subTextObjects
	TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9* ___m_subTextObjects_278;
	// TMPro.MaskingTypes TMPro.TextMeshPro::m_maskType
	int32_t ___m_maskType_279;
	// UnityEngine.Matrix4x4 TMPro.TextMeshPro::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_280;
	// UnityEngine.Vector3[] TMPro.TextMeshPro::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_281;
	// System.Boolean TMPro.TextMeshPro::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_282;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>

// System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>

// Microsoft.MixedReality.Toolkit.UI.SliderEventData

// Microsoft.MixedReality.Toolkit.UI.SliderEventData

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Int32

// System.Int32

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// System.UInt32

// System.UInt32

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Mesh

// UnityEngine.Mesh

// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData

// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData

// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>

// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>

// UnityEngine.MeshFilter

// UnityEngine.MeshFilter

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.MeshCollider

// UnityEngine.MeshCollider

// UnityEngine.MeshRenderer

// UnityEngine.MeshRenderer

// Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile

// Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.SphereCollider

// UnityEngine.SphereCollider

// Microsoft.MixedReality.Toolkit.Examples.Demos.ColorChanger

// Microsoft.MixedReality.Toolkit.Examples.Demos.ColorChanger

// Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler

// Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler

// Microsoft.MixedReality.Toolkit.Examples.Demos.LoadProfile

// Microsoft.MixedReality.Toolkit.Examples.Demos.LoadProfile

// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.LoadProfilesOnStartup

// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.LoadProfilesOnStartup

// Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix

// Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix

// Microsoft.MixedReality.Toolkit.MixedRealityToolkit
struct MixedRealityToolkit_t34094ACADA92B29D4E89DBB9ECBDD3BF74777D9D_StaticFields
{
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::isInitializing
	bool ___isInitializing_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::isApplicationQuitting
	bool ___isApplicationQuitting_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::internalShutdown
	bool ___internalShutdown_6;
	// System.Collections.Generic.Dictionary`2<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService> Microsoft.MixedReality.Toolkit.MixedRealityToolkit::activeSystems
	Dictionary_2_t5770CEAD66F48047B956AAF7E69E48BDABEF1C68* ___activeSystems_11;
	// System.Collections.Generic.List`1<System.Tuple`2<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService>> Microsoft.MixedReality.Toolkit.MixedRealityToolkit::registeredMixedRealityServices
	List_1_tCB59844EB6BF20D3F2C5098689D537EAA7558251* ___registeredMixedRealityServices_12;
	// Microsoft.MixedReality.Toolkit.MixedRealityToolkit Microsoft.MixedReality.Toolkit.MixedRealityToolkit::activeInstance
	MixedRealityToolkit_t34094ACADA92B29D4E89DBB9ECBDD3BF74777D9D* ___activeInstance_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::newInstanceBeingInitialized
	bool ___newInstanceBeingInitialized_14;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.MixedRealityToolkit> Microsoft.MixedReality.Toolkit.MixedRealityToolkit::toolkitInstances
	List_1_t4F4C46F41E42E85B6BB8082F1C70950F30315F4D* ___toolkitInstances_17;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.MixedRealityToolkit::UpdateAllServicesPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdateAllServicesPerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.MixedRealityToolkit::LateUpdateAllServicesPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___LateUpdateAllServicesPerfMarker_19;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.MixedRealityToolkit::ExecuteOnAllServicesInOrderPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___ExecuteOnAllServicesInOrderPerfMarker_20;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.MixedRealityToolkit::ExecuteOnAllServicesReverseOrderPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___ExecuteOnAllServicesReverseOrderPerfMarker_21;
};

// Microsoft.MixedReality.Toolkit.MixedRealityToolkit

// Microsoft.MixedReality.Toolkit.Examples.Demos.ShowSliderValue

// Microsoft.MixedReality.Toolkit.Examples.Demos.ShowSliderValue

// Microsoft.MixedReality.Toolkit.Examples.Demos.SliderChangeColor

// Microsoft.MixedReality.Toolkit.Examples.Demos.SliderChangeColor

// Microsoft.MixedReality.Toolkit.Examples.Demos.ToggleGazeSource

// Microsoft.MixedReality.Toolkit.Examples.Demos.ToggleGazeSource

// Microsoft.MixedReality.Toolkit.Examples.Demos.ToggleSpatialMeshObserver

// Microsoft.MixedReality.Toolkit.Examples.Demos.ToggleSpatialMeshObserver

// Microsoft.MixedReality.Toolkit.Examples.Demos.ToggleSpatialMeshVisualization

// Microsoft.MixedReality.Toolkit.Examples.Demos.ToggleSpatialMeshVisualization

// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.TriggerOnStartup

// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.TriggerOnStartup

// Microsoft.MixedReality.Toolkit.Examples.Experimental.HandMenu.UpdateSliderTrackLine

// Microsoft.MixedReality.Toolkit.Examples.Experimental.HandMenu.UpdateSliderTrackLine

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text

// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_283;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_284;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_302;
};

// TMPro.TextMeshPro
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2A953E5E686FD21410BFE26A979E62AD3B606ACD_gshared (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* __this, int32_t ___0_key, uint32_t ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mFD3AC7FF3135A2F96FD773BBE87E3638ED2DC605_gshared (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* __this, int32_t ___0_key, uint32_t* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m8A5D89A88626E5D1C4EC173C7E833ACAC3DDE2FA_gshared (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* __this, int32_t ___0_key, uint32_t ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m96DDD145802AA047D446C1CCBFE8C7081826DDB3_gshared (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m1D1D35A762F0F28B2765B4DA71CF79CB366FE469_gshared (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4B3F8178FB972174D13CD5AB86A7DA5B5251CA3B_gshared (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T Microsoft.MixedReality.Toolkit.CoreServices::GetSpatialAwarenessSystemDataProvider<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_GetSpatialAwarenessSystemDataProvider_TisRuntimeObject_mC644CEE84513E075C4D8ED5EA36D00AD072E040A_gshared (const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast<System.Object>(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Cast_TisRuntimeObject_m21250FA47CFF08469ACE158D6FA4E1FE11837D29_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Random::ColorHSV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Random_ColorHSV_m8230B38CA1270C88D762AC4FF1096D8326F5DCEA (const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealitySpatialAwarenessEventData_get_Id_m862270D43158D37BD0CF07EB63839DCD23E374CF_inline (MixedRealitySpatialAwarenessEventData_t665140146CE5C138E399BC73BA5802220AE76341* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::AddToData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_AddToData_m03D3CC4E40A135B619FD3CDD2FF50D803B2745F5 (DemoSpatialMeshHandler_tFD823EAEBF6167EFE262AAD6B62DD2AA8301B2EE* __this, int32_t ___0_eventDataId, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::UpdateData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_UpdateData_mBE578B5EC4384927F0EDEE67B0F079669A48961D (DemoSpatialMeshHandler_tFD823EAEBF6167EFE262AAD6B62DD2AA8301B2EE* __this, int32_t ___0_eventDataId, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::RemoveFromData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_RemoveFromData_m00802A4584E2C4E1F7804C5D7583916AFE7C4FA6 (DemoSpatialMeshHandler_tFD823EAEBF6167EFE262AAD6B62DD2AA8301B2EE* __this, int32_t ___0_eventDataId, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::Add(TKey,TValue)
inline void Dictionary_2_Add_m2A953E5E686FD21410BFE26A979E62AD3B606ACD (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* __this, int32_t ___0_key, uint32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941*, int32_t, uint32_t, const RuntimeMethod*))Dictionary_2_Add_m2A953E5E686FD21410BFE26A979E62AD3B606ACD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mFD3AC7FF3135A2F96FD773BBE87E3638ED2DC605 (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* __this, int32_t ___0_key, uint32_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941*, int32_t, uint32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_mFD3AC7FF3135A2F96FD773BBE87E3638ED2DC605_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m8A5D89A88626E5D1C4EC173C7E833ACAC3DDE2FA (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* __this, int32_t ___0_key, uint32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941*, int32_t, uint32_t, const RuntimeMethod*))Dictionary_2_set_Item_m8A5D89A88626E5D1C4EC173C7E833ACAC3DDE2FA_gshared)(__this, ___0_key, ___1_value, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m96DDD145802AA047D446C1CCBFE8C7081826DDB3 (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m96DDD145802AA047D446C1CCBFE8C7081826DDB3_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::Remove(TKey)
inline bool Dictionary_2_Remove_m1D1D35A762F0F28B2765B4DA71CF79CB366FE469 (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m1D1D35A762F0F28B2765B4DA71CF79CB366FE469_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::.ctor()
inline void Dictionary_2__ctor_m4B3F8178FB972174D13CD5AB86A7DA5B5251CA3B (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941*, const RuntimeMethod*))Dictionary_2__ctor_m4B3F8178FB972174D13CD5AB86A7DA5B5251CA3B_gshared)(__this, method);
}
// Microsoft.MixedReality.Toolkit.MixedRealityToolkit Microsoft.MixedReality.Toolkit.MixedRealityToolkit::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityToolkit_t34094ACADA92B29D4E89DBB9ECBDD3BF74777D9D* MixedRealityToolkit_get_Instance_m4A9C3B3289DED642D7E57B0E0DD5880089E4D89F_inline (const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.MixedRealityToolkit::set_ActiveProfile(Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkit_set_ActiveProfile_m937A334B7E26E768E90BAFA78708C5095A0F2BEC (MixedRealityToolkit_t34094ACADA92B29D4E89DBB9ECBDD3BF74777D9D* __this, MixedRealityToolkitConfigurationProfile_t4B5C622F455F24A9CDF4D3F5C03912E8E33FA414* ___0_value, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TMPro.TextMeshPro>()
inline TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* Component_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m991A1A2A2EFE70B64BBECFF1B44EE5C04FF8994E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single Microsoft.MixedReality.Toolkit.UI.SliderEventData::get_NewValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SliderEventData_get_NewValue_m5E0B8480E8D0AEAEBCB2AC29ADCFAC8C6F14401F_inline (SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m7CBAFA50AB995C9F53D6140718FCD31D7BEC7CC8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m09CC5207090321051B3C092D5BA21F2858DCD607 (const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride Microsoft.MixedReality.Toolkit.Examples.Demos.ToggleGazeSource::get_GazeProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ToggleGazeSource_get_GazeProvider_mB99F4D67544854BCD85096DEEB3A08588CBA6AEB (ToggleGazeSource_tDF88A7A6ABCBB2E36AFF225CD9818ECF88481BC8* __this, const RuntimeMethod* method) ;
// T Microsoft.MixedReality.Toolkit.CoreServices::GetSpatialAwarenessSystemDataProvider<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver>()
inline RuntimeObject* CoreServices_GetSpatialAwarenessSystemDataProvider_TisIMixedRealitySpatialAwarenessMeshObserver_t30617C2B51DA8C26C155995B2927A9E30C2C9830_m13B7D6AAA41BE0F54C0CB24BA43123A60A271324 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))CoreServices_GetSpatialAwarenessSystemDataProvider_TisRuntimeObject_mC644CEE84513E075C4D8ED5EA36D00AD072E040A_gshared)(method);
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::BuildMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialMatrix_BuildMatrix_m0739D3EC196CBD1772DE7ED45A562EBABCE3CEC2 (MaterialMatrix_tA24DA063D198DE17128C737E2C76A175CD09D6FC* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast<UnityEngine.Transform>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_Cast_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m6A182C168D715CC65604472355C3E0364A97980E (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Cast_TisRuntimeObject_m21250FA47CFF08469ACE158D6FA4E1FE11837D29_gshared)(___0_source, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<UnityEngine.Transform>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* Enumerable_ToList_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m9AEA33F3B287912A369F86579214A123828BDCC8 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___0_source, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.GameObjectExtensions::DestroyGameObject(UnityEngine.GameObject,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectExtensions_DestroyGameObject_mC3E53CD869C89F3490E55280372B3D2660AC0298 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, float ___1_t, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA (String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B (int32_t ___0_type, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_source, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_nameID, float ___1_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8 (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.SphereCollider>()
inline SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* GameObject_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_mD342F4F06F3848B43732DD183CDDA00AED3EE0A0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.MeshCollider>()
inline MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* GameObject_AddComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFE0E36B3C1670C308B04C39EDC76838DD59826B7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ColorChanger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger_Start_m9F9B876245A0CF42E40726207B42D38FE5C696E1 (ColorChanger_t7CD2230CE10AB387EB906DE7E060D4E3E4299819* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (rend == null)
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->___rend_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// rend = GetComponent<MeshRenderer>();
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_2;
		L_2 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		__this->___rend_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rend_4), (void*)L_2);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ColorChanger::Increment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger_Increment_mC9E7A2660A9E70471A4184460660736CC5CE0332 (ColorChanger_t7CD2230CE10AB387EB906DE7E060D4E3E4299819* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mats != null && mats.Length > 0)
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_0 = __this->___mats_5;
		if (!L_0)
		{
			goto IL_004e;
		}
	}
	{
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_1 = __this->___mats_5;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_004e;
		}
	}
	{
		// cur = (cur + 1) % mats.Length;
		int32_t L_2 = __this->___cur_6;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_3 = __this->___mats_5;
		NullCheck(L_3);
		__this->___cur_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_2, 1))%((int32_t)(((RuntimeArray*)L_3)->max_length))));
		// if (rend != null)
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_4 = __this->___rend_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_004e;
		}
	}
	{
		// rend.material = mats[cur];
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_6 = __this->___rend_4;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_7 = __this->___mats_5;
		int32_t L_8 = __this->___cur_6;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_6);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_6, L_10, NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ColorChanger::Decrement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger_Decrement_mD354BB4D3EB9C9776FD9EBD4C4378EAA1A69888F (ColorChanger_t7CD2230CE10AB387EB906DE7E060D4E3E4299819* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mats != null && mats.Length > 0)
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_0 = __this->___mats_5;
		if (!L_0)
		{
			goto IL_0057;
		}
	}
	{
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_1 = __this->___mats_5;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0057;
		}
	}
	{
		// cur = (cur - 1 + mats.Length) % mats.Length;
		int32_t L_2 = __this->___cur_6;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_3 = __this->___mats_5;
		NullCheck(L_3);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_4 = __this->___mats_5;
		NullCheck(L_4);
		__this->___cur_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_2, 1)), ((int32_t)(((RuntimeArray*)L_3)->max_length))))%((int32_t)(((RuntimeArray*)L_4)->max_length))));
		// if (rend != null)
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_5 = __this->___rend_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0057;
		}
	}
	{
		// rend.material = mats[cur];
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_7 = __this->___rend_4;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_8 = __this->___mats_5;
		int32_t L_9 = __this->___cur_6;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_7);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_7, L_11, NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ColorChanger::RandomColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger_RandomColor_m3877F8F8CBC8DD0811CC4B3FFF4E173450944E79 (ColorChanger_t7CD2230CE10AB387EB906DE7E060D4E3E4299819* __this, const RuntimeMethod* method) 
{
	{
		// rend.material.color = UnityEngine.Random.ColorHSV();
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->___rend_4;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Random_ColorHSV_m8230B38CA1270C88D762AC4FF1096D8326F5DCEA(NULL);
		NullCheck(L_1);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ColorChanger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger__ctor_m681A87D78B19A5004E009B0E116800D0A3794C4C (ColorChanger_t7CD2230CE10AB387EB906DE7E060D4E3E4299819* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_Start_m48A4E737391E236D1A27A49A51CA998F972CDEA4 (DemoSpatialMeshHandler_tFD823EAEBF6167EFE262AAD6B62DD2AA8301B2EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoSpatialMeshHandler_RegisterEventHandlers_TisIMixedRealitySpatialAwarenessObservationHandler_1_t92770D3EC6A2A2A1BCC5AFF6614A5CA110847BA4_TisSpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379_mADAFE4F394C813DC386DD8E31846C3E7C54D8866_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RegisterEventHandlers<SpatialAwarenessHandler, SpatialAwarenessMeshObject>();
		GenericVirtualActionInvoker0::Invoke(DemoSpatialMeshHandler_RegisterEventHandlers_TisIMixedRealitySpatialAwarenessObservationHandler_1_t92770D3EC6A2A2A1BCC5AFF6614A5CA110847BA4_TisSpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379_mADAFE4F394C813DC386DD8E31846C3E7C54D8866_RuntimeMethod_var, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_OnEnable_m292A62C3671D9671F069EC6E7EABE07101291189 (DemoSpatialMeshHandler_tFD823EAEBF6167EFE262AAD6B62DD2AA8301B2EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoSpatialMeshHandler_RegisterEventHandlers_TisIMixedRealitySpatialAwarenessObservationHandler_1_t92770D3EC6A2A2A1BCC5AFF6614A5CA110847BA4_TisSpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379_mADAFE4F394C813DC386DD8E31846C3E7C54D8866_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RegisterEventHandlers<SpatialAwarenessHandler, SpatialAwarenessMeshObject>();
		GenericVirtualActionInvoker0::Invoke(DemoSpatialMeshHandler_RegisterEventHandlers_TisIMixedRealitySpatialAwarenessObservationHandler_1_t92770D3EC6A2A2A1BCC5AFF6614A5CA110847BA4_TisSpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379_mADAFE4F394C813DC386DD8E31846C3E7C54D8866_RuntimeMethod_var, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_OnDisable_m48F2D3F0A146EBFB020B8789EE7A524A3C6A1F1B (DemoSpatialMeshHandler_tFD823EAEBF6167EFE262AAD6B62DD2AA8301B2EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoSpatialMeshHandler_UnregisterEventHandlers_TisIMixedRealitySpatialAwarenessObservationHandler_1_t92770D3EC6A2A2A1BCC5AFF6614A5CA110847BA4_TisSpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379_m55C725D99854B89870A9A3385B2318573E0E97A8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnregisterEventHandlers<SpatialAwarenessHandler, SpatialAwarenessMeshObject>();
		GenericVirtualActionInvoker0::Invoke(DemoSpatialMeshHandler_UnregisterEventHandlers_TisIMixedRealitySpatialAwarenessObservationHandler_1_t92770D3EC6A2A2A1BCC5AFF6614A5CA110847BA4_TisSpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379_m55C725D99854B89870A9A3385B2318573E0E97A8_RuntimeMethod_var, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_OnDestroy_m1D2AF55A02FE4FE4CB76652301F5E07084047160 (DemoSpatialMeshHandler_tFD823EAEBF6167EFE262AAD6B62DD2AA8301B2EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoSpatialMeshHandler_UnregisterEventHandlers_TisIMixedRealitySpatialAwarenessObservationHandler_1_t92770D3EC6A2A2A1BCC5AFF6614A5CA110847BA4_TisSpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379_m55C725D99854B89870A9A3385B2318573E0E97A8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnregisterEventHandlers<SpatialAwarenessHandler, SpatialAwarenessMeshObject>();
		GenericVirtualActionInvoker0::Invoke(DemoSpatialMeshHandler_UnregisterEventHandlers_TisIMixedRealitySpatialAwarenessObservationHandler_1_t92770D3EC6A2A2A1BCC5AFF6614A5CA110847BA4_TisSpatialAwarenessMeshObject_t5577B6C05F0A1138C582A8F1B7A717B81AE11379_m55C725D99854B89870A9A3385B2318573E0E97A8_RuntimeMethod_var, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::OnObservationAdded(Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_OnObservationAdded_mF04C3FED1B4B443CBD6A65153BEF4419BFB5CFE6 (DemoSpatialMeshHandler_tFD823EAEBF6167EFE262AAD6B62DD2AA8301B2EE* __this, MixedRealitySpatialAwarenessEventData_1_tE46EB2E96DFDDF77196F0A24715743FD22640021* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// AddToData(eventData.Id);
		MixedRealitySpatialAwarenessEventData_1_tE46EB2E96DFDDF77196F0A24715743FD22640021* L_0 = ___0_eventData;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = MixedRealitySpatialAwarenessEventData_get_Id_m862270D43158D37BD0CF07EB63839DCD23E374CF_inline(L_0, NULL);
		DemoSpatialMeshHandler_AddToData_m03D3CC4E40A135B619FD3CDD2FF50D803B2745F5(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::OnObservationUpdated(Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_OnObservationUpdated_m056BD02DA81F91EE4A911D61665B8B314D415632 (DemoSpatialMeshHandler_tFD823EAEBF6167EFE262AAD6B62DD2AA8301B2EE* __this, MixedRealitySpatialAwarenessEventData_1_tE46EB2E96DFDDF77196F0A24715743FD22640021* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// UpdateData(eventData.Id);
		MixedRealitySpatialAwarenessEventData_1_tE46EB2E96DFDDF77196F0A24715743FD22640021* L_0 = ___0_eventData;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = MixedRealitySpatialAwarenessEventData_get_Id_m862270D43158D37BD0CF07EB63839DCD23E374CF_inline(L_0, NULL);
		DemoSpatialMeshHandler_UpdateData_mBE578B5EC4384927F0EDEE67B0F079669A48961D(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::OnObservationRemoved(Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_OnObservationRemoved_m4CAF7C9A0A9CB14A3D1ED0CBDB03888F6B4F6743 (DemoSpatialMeshHandler_tFD823EAEBF6167EFE262AAD6B62DD2AA8301B2EE* __this, MixedRealitySpatialAwarenessEventData_1_tE46EB2E96DFDDF77196F0A24715743FD22640021* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// RemoveFromData(eventData.Id);
		MixedRealitySpatialAwarenessEventData_1_tE46EB2E96DFDDF77196F0A24715743FD22640021* L_0 = ___0_eventData;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = MixedRealitySpatialAwarenessEventData_get_Id_m862270D43158D37BD0CF07EB63839DCD23E374CF_inline(L_0, NULL);
		DemoSpatialMeshHandler_RemoveFromData_m00802A4584E2C4E1F7804C5D7583916AFE7C4FA6(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::AddToData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_AddToData_m03D3CC4E40A135B619FD3CDD2FF50D803B2745F5 (DemoSpatialMeshHandler_tFD823EAEBF6167EFE262AAD6B62DD2AA8301B2EE* __this, int32_t ___0_eventDataId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m2A953E5E686FD21410BFE26A979E62AD3B606ACD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral697FB0231F804375E0927CADC1B1C0FA85C07BEF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"Started tracking mesh {eventDataId}");
		int32_t L_0 = ___0_eventDataId;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral697FB0231F804375E0927CADC1B1C0FA85C07BEF, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// meshUpdateData.Add(eventDataId, 0);
		Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* L_4 = __this->___meshUpdateData_4;
		int32_t L_5 = ___0_eventDataId;
		NullCheck(L_4);
		Dictionary_2_Add_m2A953E5E686FD21410BFE26A979E62AD3B606ACD(L_4, L_5, 0, Dictionary_2_Add_m2A953E5E686FD21410BFE26A979E62AD3B606ACD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::UpdateData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_UpdateData_mBE578B5EC4384927F0EDEE67B0F079669A48961D (DemoSpatialMeshHandler_tFD823EAEBF6167EFE262AAD6B62DD2AA8301B2EE* __this, int32_t ___0_eventDataId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mFD3AC7FF3135A2F96FD773BBE87E3638ED2DC605_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m8A5D89A88626E5D1C4EC173C7E833ACAC3DDE2FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBABD5F84CFAE42B094A0A937A48816B61338D316);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		// if (meshUpdateData.TryGetValue(eventDataId, out uint updateCount))
		Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* L_0 = __this->___meshUpdateData_4;
		int32_t L_1 = ___0_eventDataId;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mFD3AC7FF3135A2F96FD773BBE87E3638ED2DC605(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mFD3AC7FF3135A2F96FD773BBE87E3638ED2DC605_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		// meshUpdateData[eventDataId] = ++updateCount;
		Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* L_3 = __this->___meshUpdateData_4;
		int32_t L_4 = ___0_eventDataId;
		uint32_t L_5 = V_0;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, 1));
		V_0 = L_6;
		NullCheck(L_3);
		Dictionary_2_set_Item_m8A5D89A88626E5D1C4EC173C7E833ACAC3DDE2FA(L_3, L_4, L_6, Dictionary_2_set_Item_m8A5D89A88626E5D1C4EC173C7E833ACAC3DDE2FA_RuntimeMethod_var);
		// Debug.Log($"Mesh {eventDataId} has been updated {updateCount} times.");
		int32_t L_7 = ___0_eventDataId;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		uint32_t L_10 = V_0;
		uint32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13;
		L_13 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralBABD5F84CFAE42B094A0A937A48816B61338D316, L_9, L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_13, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::RemoveFromData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_RemoveFromData_m00802A4584E2C4E1F7804C5D7583916AFE7C4FA6 (DemoSpatialMeshHandler_tFD823EAEBF6167EFE262AAD6B62DD2AA8301B2EE* __this, int32_t ___0_eventDataId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m96DDD145802AA047D446C1CCBFE8C7081826DDB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m1D1D35A762F0F28B2765B4DA71CF79CB366FE469_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD87DE9472D71F6ED13876C3E6F9565591968955E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (meshUpdateData.ContainsKey(eventDataId))
		Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* L_0 = __this->___meshUpdateData_4;
		int32_t L_1 = ___0_eventDataId;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m96DDD145802AA047D446C1CCBFE8C7081826DDB3(L_0, L_1, Dictionary_2_ContainsKey_m96DDD145802AA047D446C1CCBFE8C7081826DDB3_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		// Debug.Log($"No longer tracking mesh {eventDataId}.");
		int32_t L_3 = ___0_eventDataId;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD87DE9472D71F6ED13876C3E6F9565591968955E, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
		// meshUpdateData.Remove(eventDataId);
		Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* L_7 = __this->___meshUpdateData_4;
		int32_t L_8 = ___0_eventDataId;
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_Remove_m1D1D35A762F0F28B2765B4DA71CF79CB366FE469(L_7, L_8, Dictionary_2_Remove_m1D1D35A762F0F28B2765B4DA71CF79CB366FE469_RuntimeMethod_var);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler__ctor_m3DD926771A64892229BE53755963DB6D5E0B64DF (DemoSpatialMeshHandler_tFD823EAEBF6167EFE262AAD6B62DD2AA8301B2EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4B3F8178FB972174D13CD5AB86A7DA5B5251CA3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<int, uint> meshUpdateData = new Dictionary<int, uint>();
		Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* L_0 = (Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941*)il2cpp_codegen_object_new(Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m4B3F8178FB972174D13CD5AB86A7DA5B5251CA3B(L_0, Dictionary_2__ctor_m4B3F8178FB972174D13CD5AB86A7DA5B5251CA3B_RuntimeMethod_var);
		__this->___meshUpdateData_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshUpdateData_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.LoadProfile::LoadConfigProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadProfile_LoadConfigProfile_mEADBCF21DD4EEAD5125EE062F9B43E2852A40530 (LoadProfile_t18133AB13D77FC4BD5D6D2A86EC403430604CEC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkit_t34094ACADA92B29D4E89DBB9ECBDD3BF74777D9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE75C757AD02FA8901D71BEB1C9171088A9A0D03);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((configProfile != null) && (MixedRealityToolkit.Instance != null))
		MixedRealityToolkitConfigurationProfile_t4B5C622F455F24A9CDF4D3F5C03912E8E33FA414* L_0 = __this->___configProfile_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkit_t34094ACADA92B29D4E89DBB9ECBDD3BF74777D9D_il2cpp_TypeInfo_var);
		MixedRealityToolkit_t34094ACADA92B29D4E89DBB9ECBDD3BF74777D9D* L_2;
		L_2 = MixedRealityToolkit_get_Instance_m4A9C3B3289DED642D7E57B0E0DD5880089E4D89F_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		// MixedRealityToolkit.Instance.ActiveProfile = configProfile;
		il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkit_t34094ACADA92B29D4E89DBB9ECBDD3BF74777D9D_il2cpp_TypeInfo_var);
		MixedRealityToolkit_t34094ACADA92B29D4E89DBB9ECBDD3BF74777D9D* L_4;
		L_4 = MixedRealityToolkit_get_Instance_m4A9C3B3289DED642D7E57B0E0DD5880089E4D89F_inline(NULL);
		MixedRealityToolkitConfigurationProfile_t4B5C622F455F24A9CDF4D3F5C03912E8E33FA414* L_5 = __this->___configProfile_4;
		NullCheck(L_4);
		MixedRealityToolkit_set_ActiveProfile_m937A334B7E26E768E90BAFA78708C5095A0F2BEC(L_4, L_5, NULL);
		// Debug.Log($"Loading new MRTK configuration profile: {configProfile.name}");
		MixedRealityToolkitConfigurationProfile_t4B5C622F455F24A9CDF4D3F5C03912E8E33FA414* L_6 = __this->___configProfile_4;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_6, NULL);
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralBE75C757AD02FA8901D71BEB1C9171088A9A0D03, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
		// configProfile = null;
		__this->___configProfile_4 = (MixedRealityToolkitConfigurationProfile_t4B5C622F455F24A9CDF4D3F5C03912E8E33FA414*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___configProfile_4), (void*)(MixedRealityToolkitConfigurationProfile_t4B5C622F455F24A9CDF4D3F5C03912E8E33FA414*)NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.LoadProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadProfile__ctor_mDE7A410A03CA2656617E35EDE095B1006CB4627F (LoadProfile_t18133AB13D77FC4BD5D6D2A86EC403430604CEC2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ShowSliderValue::OnSliderUpdated(Microsoft.MixedReality.Toolkit.UI.SliderEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowSliderValue_OnSliderUpdated_m0122E5E232F1B3E407DBCFADDBAB7AC64024D43D (ShowSliderValue_tE8409FAC9961F437152EE24A9DA123C2A04AAF56* __this, SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m991A1A2A2EFE70B64BBECFF1B44EE5C04FF8994E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9874951348E190FDE59ADF48CECAB4A5149C1D18);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (textMesh == null)
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___textMesh_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// textMesh = GetComponent<TextMeshPro>();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_2;
		L_2 = Component_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m991A1A2A2EFE70B64BBECFF1B44EE5C04FF8994E(__this, Component_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m991A1A2A2EFE70B64BBECFF1B44EE5C04FF8994E_RuntimeMethod_var);
		__this->___textMesh_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textMesh_4), (void*)L_2);
	}

IL_001a:
	{
		// if (textMesh != null)
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_3 = __this->___textMesh_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0048;
		}
	}
	{
		// textMesh.text = $"{eventData.NewValue:F2}";
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_5 = __this->___textMesh_4;
		SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE* L_6 = ___0_eventData;
		NullCheck(L_6);
		float L_7;
		L_7 = SliderEventData_get_NewValue_m5E0B8480E8D0AEAEBCB2AC29ADCFAC8C6F14401F_inline(L_6, NULL);
		float L_8 = L_7;
		RuntimeObject* L_9 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral9874951348E190FDE59ADF48CECAB4A5149C1D18, L_9, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, L_10);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ShowSliderValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowSliderValue__ctor_mE0766B9D416A44946DFBD2FF7671322A1FC9641A (ShowSliderValue_tE8409FAC9961F437152EE24A9DA123C2A04AAF56* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.SliderChangeColor::OnSliderUpdatedRed(Microsoft.MixedReality.Toolkit.UI.SliderEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderChangeColor_OnSliderUpdatedRed_mBFA31E6D49D85EA95EAD483CDD93D62C7A1267AB (SliderChangeColor_t1308C8FB23A2F2F716202E8B4169C7A16BDA9AE7* __this, SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m7CBAFA50AB995C9F53D6140718FCD31D7BEC7CC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TargetRenderer = GetComponentInChildren<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m7CBAFA50AB995C9F53D6140718FCD31D7BEC7CC8(__this, Component_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m7CBAFA50AB995C9F53D6140718FCD31D7BEC7CC8_RuntimeMethod_var);
		__this->___TargetRenderer_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TargetRenderer_4), (void*)L_0);
		// if ((TargetRenderer != null) && (TargetRenderer.material != null))
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1 = __this->___TargetRenderer_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0072;
		}
	}
	{
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3 = __this->___TargetRenderer_4;
		NullCheck(L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0072;
		}
	}
	{
		// TargetRenderer.material.color = new Color(eventData.NewValue, TargetRenderer.sharedMaterial.color.g, TargetRenderer.sharedMaterial.color.b);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_6 = __this->___TargetRenderer_4;
		NullCheck(L_6);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7;
		L_7 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_6, NULL);
		SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE* L_8 = ___0_eventData;
		NullCheck(L_8);
		float L_9;
		L_9 = SliderEventData_get_NewValue_m5E0B8480E8D0AEAEBCB2AC29ADCFAC8C6F14401F_inline(L_8, NULL);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_10 = __this->___TargetRenderer_4;
		NullCheck(L_10);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11;
		L_11 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_10, NULL);
		NullCheck(L_11);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_11, NULL);
		float L_13 = L_12.___g_1;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_14 = __this->___TargetRenderer_4;
		NullCheck(L_14);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15;
		L_15 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_14, NULL);
		NullCheck(L_15);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		L_16 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_15, NULL);
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		memset((&L_18), 0, sizeof(L_18));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_18), L_9, L_13, L_17, /*hidden argument*/NULL);
		NullCheck(L_7);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_7, L_18, NULL);
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.SliderChangeColor::OnSliderUpdatedGreen(Microsoft.MixedReality.Toolkit.UI.SliderEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderChangeColor_OnSliderUpdatedGreen_m10F9849357809D30DA28A2ADA72CD044E02ED379 (SliderChangeColor_t1308C8FB23A2F2F716202E8B4169C7A16BDA9AE7* __this, SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m7CBAFA50AB995C9F53D6140718FCD31D7BEC7CC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TargetRenderer = GetComponentInChildren<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m7CBAFA50AB995C9F53D6140718FCD31D7BEC7CC8(__this, Component_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m7CBAFA50AB995C9F53D6140718FCD31D7BEC7CC8_RuntimeMethod_var);
		__this->___TargetRenderer_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TargetRenderer_4), (void*)L_0);
		// if ((TargetRenderer != null) && (TargetRenderer.material != null))
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1 = __this->___TargetRenderer_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0072;
		}
	}
	{
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3 = __this->___TargetRenderer_4;
		NullCheck(L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0072;
		}
	}
	{
		// TargetRenderer.material.color = new Color(TargetRenderer.sharedMaterial.color.r, eventData.NewValue, TargetRenderer.sharedMaterial.color.b);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_6 = __this->___TargetRenderer_4;
		NullCheck(L_6);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7;
		L_7 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_6, NULL);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_8 = __this->___TargetRenderer_4;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_8, NULL);
		NullCheck(L_9);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_9, NULL);
		float L_11 = L_10.___r_0;
		SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE* L_12 = ___0_eventData;
		NullCheck(L_12);
		float L_13;
		L_13 = SliderEventData_get_NewValue_m5E0B8480E8D0AEAEBCB2AC29ADCFAC8C6F14401F_inline(L_12, NULL);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_14 = __this->___TargetRenderer_4;
		NullCheck(L_14);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15;
		L_15 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_14, NULL);
		NullCheck(L_15);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		L_16 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_15, NULL);
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		memset((&L_18), 0, sizeof(L_18));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_18), L_11, L_13, L_17, /*hidden argument*/NULL);
		NullCheck(L_7);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_7, L_18, NULL);
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.SliderChangeColor::OnSliderUpdateBlue(Microsoft.MixedReality.Toolkit.UI.SliderEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderChangeColor_OnSliderUpdateBlue_m9D8144119ADDCBA182B566B61E8B2547567AE11C (SliderChangeColor_t1308C8FB23A2F2F716202E8B4169C7A16BDA9AE7* __this, SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m7CBAFA50AB995C9F53D6140718FCD31D7BEC7CC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TargetRenderer = GetComponentInChildren<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m7CBAFA50AB995C9F53D6140718FCD31D7BEC7CC8(__this, Component_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m7CBAFA50AB995C9F53D6140718FCD31D7BEC7CC8_RuntimeMethod_var);
		__this->___TargetRenderer_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TargetRenderer_4), (void*)L_0);
		// if ((TargetRenderer != null) && (TargetRenderer.material != null))
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1 = __this->___TargetRenderer_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0072;
		}
	}
	{
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3 = __this->___TargetRenderer_4;
		NullCheck(L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0072;
		}
	}
	{
		// TargetRenderer.material.color = new Color(TargetRenderer.sharedMaterial.color.r, TargetRenderer.sharedMaterial.color.g, eventData.NewValue);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_6 = __this->___TargetRenderer_4;
		NullCheck(L_6);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7;
		L_7 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_6, NULL);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_8 = __this->___TargetRenderer_4;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_8, NULL);
		NullCheck(L_9);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_9, NULL);
		float L_11 = L_10.___r_0;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_12 = __this->___TargetRenderer_4;
		NullCheck(L_12);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13;
		L_13 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_12, NULL);
		NullCheck(L_13);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_13, NULL);
		float L_15 = L_14.___g_1;
		SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE* L_16 = ___0_eventData;
		NullCheck(L_16);
		float L_17;
		L_17 = SliderEventData_get_NewValue_m5E0B8480E8D0AEAEBCB2AC29ADCFAC8C6F14401F_inline(L_16, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		memset((&L_18), 0, sizeof(L_18));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_18), L_11, L_15, L_17, /*hidden argument*/NULL);
		NullCheck(L_7);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_7, L_18, NULL);
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.SliderChangeColor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderChangeColor__ctor_m39540311D802104814A2725BD575E6A735B8F5BC (SliderChangeColor_t1308C8FB23A2F2F716202E8B4169C7A16BDA9AE7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride Microsoft.MixedReality.Toolkit.Examples.Demos.ToggleGazeSource::get_GazeProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ToggleGazeSource_get_GazeProvider_mB99F4D67544854BCD85096DEEB3A08588CBA6AEB (ToggleGazeSource_tDF88A7A6ABCBB2E36AFF225CD9818ECF88481BC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGazeProviderHeadOverride_t4AE8C964650D1C4A0D1210EC95667A257ED934D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	ToggleGazeSource_tDF88A7A6ABCBB2E36AFF225CD9818ECF88481BC8* G_B3_1 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	ToggleGazeSource_tDF88A7A6ABCBB2E36AFF225CD9818ECF88481BC8* G_B2_1 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	ToggleGazeSource_tDF88A7A6ABCBB2E36AFF225CD9818ECF88481BC8* G_B4_1 = NULL;
	{
		// private IMixedRealityGazeProviderHeadOverride GazeProvider => gazeProvider ?? (gazeProvider = CoreServices.InputSystem?.GazeProvider as IMixedRealityGazeProviderHeadOverride);
		RuntimeObject* L_0 = __this->___gazeProvider_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B5_0 = L_1;
			goto IL_0029;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = CoreServices_get_InputSystem_m09CC5207090321051B3C092D5BA21F2858DCD607(NULL);
		RuntimeObject* L_3 = L_2;
		G_B2_0 = L_3;
		G_B2_1 = __this;
		if (L_3)
		{
			G_B3_0 = L_3;
			G_B3_1 = __this;
			goto IL_0017;
		}
	}
	{
		G_B4_0 = ((RuntimeObject*)(NULL));
		G_B4_1 = G_B2_1;
		goto IL_001c;
	}

IL_0017:
	{
		NullCheck(G_B3_0);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_GazeProvider() */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, G_B3_0);
		G_B4_0 = L_4;
		G_B4_1 = G_B3_1;
	}

IL_001c:
	{
		RuntimeObject* L_5 = ((RuntimeObject*)IsInst((RuntimeObject*)G_B4_0, IMixedRealityGazeProviderHeadOverride_t4AE8C964650D1C4A0D1210EC95667A257ED934D3_il2cpp_TypeInfo_var));
		V_0 = L_5;
		NullCheck(G_B4_1);
		G_B4_1->___gazeProvider_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___gazeProvider_4), (void*)L_5);
		RuntimeObject* L_6 = V_0;
		G_B5_0 = L_6;
	}

IL_0029:
	{
		return G_B5_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ToggleGazeSource::ToggleGazeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleGazeSource_ToggleGazeOverride_m93E39F00D2703BE4CBC77D586B18A0E6763B8C21 (ToggleGazeSource_tDF88A7A6ABCBB2E36AFF225CD9818ECF88481BC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGazeProviderHeadOverride_t4AE8C964650D1C4A0D1210EC95667A257ED934D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GazeProvider != null)
		RuntimeObject* L_0;
		L_0 = ToggleGazeSource_get_GazeProvider_mB99F4D67544854BCD85096DEEB3A08588CBA6AEB(__this, NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// GazeProvider.UseHeadGazeOverride = !GazeProvider.UseHeadGazeOverride;
		RuntimeObject* L_1;
		L_1 = ToggleGazeSource_get_GazeProvider_mB99F4D67544854BCD85096DEEB3A08588CBA6AEB(__this, NULL);
		RuntimeObject* L_2;
		L_2 = ToggleGazeSource_get_GazeProvider_mB99F4D67544854BCD85096DEEB3A08588CBA6AEB(__this, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride::get_UseHeadGazeOverride() */, IMixedRealityGazeProviderHeadOverride_t4AE8C964650D1C4A0D1210EC95667A257ED934D3_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride::set_UseHeadGazeOverride(System.Boolean) */, IMixedRealityGazeProviderHeadOverride_t4AE8C964650D1C4A0D1210EC95667A257ED934D3_il2cpp_TypeInfo_var, L_1, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0));
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ToggleGazeSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleGazeSource__ctor_m02C2F6763D001D67BD0A5F1B0D7BFA5931CCA21D (ToggleGazeSource_tDF88A7A6ABCBB2E36AFF225CD9818ECF88481BC8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ToggleSpatialMeshObserver::ToggleSpatialMeshVisual(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleSpatialMeshObserver_ToggleSpatialMeshVisual_m094570F2EBC9A8B9890484D7DB99A48BFA237719 (ToggleSpatialMeshObserver_t3855829EDEFA59C5384DA5BD1AE41E8047B22CDD* __this, bool ___0_mode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_GetSpatialAwarenessSystemDataProvider_TisIMixedRealitySpatialAwarenessMeshObserver_t30617C2B51DA8C26C155995B2927A9E30C2C9830_m13B7D6AAA41BE0F54C0CB24BA43123A60A271324_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySpatialAwarenessMeshObserver_t30617C2B51DA8C26C155995B2927A9E30C2C9830_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var observer = CoreServices.GetSpatialAwarenessSystemDataProvider<IMixedRealitySpatialAwarenessMeshObserver>();
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_GetSpatialAwarenessSystemDataProvider_TisIMixedRealitySpatialAwarenessMeshObserver_t30617C2B51DA8C26C155995B2927A9E30C2C9830_m13B7D6AAA41BE0F54C0CB24BA43123A60A271324(CoreServices_GetSpatialAwarenessSystemDataProvider_TisIMixedRealitySpatialAwarenessMeshObserver_t30617C2B51DA8C26C155995B2927A9E30C2C9830_m13B7D6AAA41BE0F54C0CB24BA43123A60A271324_RuntimeMethod_var);
		V_0 = L_0;
		// if (mode == true)
		bool L_1 = ___0_mode;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// observer.Resume();
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(16 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver::Resume() */, IMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_il2cpp_TypeInfo_var, L_2);
		// observer.DisplayOption = SpatialAwarenessMeshDisplayOptions.Visible;
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver::set_DisplayOption(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions) */, IMixedRealitySpatialAwarenessMeshObserver_t30617C2B51DA8C26C155995B2927A9E30C2C9830_il2cpp_TypeInfo_var, L_3, 1);
		return;
	}

IL_0017:
	{
		// observer.DisplayOption = SpatialAwarenessMeshDisplayOptions.None;
		RuntimeObject* L_4 = V_0;
		NullCheck(L_4);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver::set_DisplayOption(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions) */, IMixedRealitySpatialAwarenessMeshObserver_t30617C2B51DA8C26C155995B2927A9E30C2C9830_il2cpp_TypeInfo_var, L_4, 0);
		// observer.Suspend();
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(17 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver::Suspend() */, IMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_il2cpp_TypeInfo_var, L_5);
		// observer.ClearObservations();
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(18 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver::ClearObservations() */, IMixedRealitySpatialAwarenessObserver_t6897374ED60E2BA1C5A4ECAF099C486EF526FF15_il2cpp_TypeInfo_var, L_6);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ToggleSpatialMeshObserver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleSpatialMeshObserver__ctor_m2144498E9382DBCBE5DDFBE95DE65EF40C5F72C6 (ToggleSpatialMeshObserver_t3855829EDEFA59C5384DA5BD1AE41E8047B22CDD* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ToggleSpatialMeshVisualization::ToggleSpatialMeshVisual(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleSpatialMeshVisualization_ToggleSpatialMeshVisual_m75D35DCF934EB53B24FB5A74D608BEEFB27A067B (ToggleSpatialMeshVisualization_t74B773C56D21CE249E5639230A502E584ADA7847* __this, bool ___0_mode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_GetSpatialAwarenessSystemDataProvider_TisIMixedRealitySpatialAwarenessMeshObserver_t30617C2B51DA8C26C155995B2927A9E30C2C9830_m13B7D6AAA41BE0F54C0CB24BA43123A60A271324_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySpatialAwarenessMeshObserver_t30617C2B51DA8C26C155995B2927A9E30C2C9830_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var observer = CoreServices.GetSpatialAwarenessSystemDataProvider<IMixedRealitySpatialAwarenessMeshObserver>();
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_GetSpatialAwarenessSystemDataProvider_TisIMixedRealitySpatialAwarenessMeshObserver_t30617C2B51DA8C26C155995B2927A9E30C2C9830_m13B7D6AAA41BE0F54C0CB24BA43123A60A271324(CoreServices_GetSpatialAwarenessSystemDataProvider_TisIMixedRealitySpatialAwarenessMeshObserver_t30617C2B51DA8C26C155995B2927A9E30C2C9830_m13B7D6AAA41BE0F54C0CB24BA43123A60A271324_RuntimeMethod_var);
		V_0 = L_0;
		// if (mode == true)
		bool L_1 = ___0_mode;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// observer.DisplayOption = SpatialAwarenessMeshDisplayOptions.Visible;
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver::set_DisplayOption(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions) */, IMixedRealitySpatialAwarenessMeshObserver_t30617C2B51DA8C26C155995B2927A9E30C2C9830_il2cpp_TypeInfo_var, L_2, 1);
		return;
	}

IL_0011:
	{
		// observer.DisplayOption = SpatialAwarenessMeshDisplayOptions.None;
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver::set_DisplayOption(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions) */, IMixedRealitySpatialAwarenessMeshObserver_t30617C2B51DA8C26C155995B2927A9E30C2C9830_il2cpp_TypeInfo_var, L_3, 0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ToggleSpatialMeshVisualization::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleSpatialMeshVisualization__ctor_m4A97E90CAC7D53098ED8C80561B0314294E6D565 (ToggleSpatialMeshVisualization_t74B773C56D21CE249E5639230A502E584ADA7847* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialMatrix_Awake_m7C6E24F563DD9AE6E2E7FC918FA2FB327FE47B45 (MaterialMatrix_tA24DA063D198DE17128C737E2C76A175CD09D6FC* __this, const RuntimeMethod* method) 
{
	{
		// BuildMatrix();
		MaterialMatrix_BuildMatrix_m0739D3EC196CBD1772DE7ED45A562EBABCE3CEC2(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::BuildMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialMatrix_BuildMatrix_m0739D3EC196CBD1772DE7ED45A562EBABCE3CEC2 (MaterialMatrix_tA24DA063D198DE17128C737E2C76A175CD09D6FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Cast_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m6A182C168D715CC65604472355C3E0364A97980E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m9AEA33F3B287912A369F86579214A123828BDCC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFE0E36B3C1670C308B04C39EDC76838DD59826B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_mD342F4F06F3848B43732DD183CDDA00AED3EE0A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9932973D4B6AA1AA193C06D8D34B58B677685003);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3ECD8561E7D2C87B06C0D5CD9EC2913C8B766F8);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* V_0 = NULL;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_10 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_11 = NULL;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_12 = NULL;
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* V_13 = NULL;
	int32_t V_14 = 0;
	{
		// List<Transform> children = transform.Cast<Transform>().ToList();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		RuntimeObject* L_1;
		L_1 = Enumerable_Cast_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m6A182C168D715CC65604472355C3E0364A97980E(L_0, Enumerable_Cast_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m6A182C168D715CC65604472355C3E0364A97980E_RuntimeMethod_var);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_2;
		L_2 = Enumerable_ToList_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m9AEA33F3B287912A369F86579214A123828BDCC8(L_1, Enumerable_ToList_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m9AEA33F3B287912A369F86579214A123828BDCC8_RuntimeMethod_var);
		V_0 = L_2;
		// for (int i = 0; i < children.Count; ++i)
		V_7 = 0;
		goto IL_0033;
	}

IL_0016:
	{
		// Transform child = children[i];
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_3 = V_0;
		int32_t L_4 = V_7;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_3, L_4, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		// GameObjectExtensions.DestroyGameObject(child.gameObject);
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		GameObjectExtensions_DestroyGameObject_mC3E53CD869C89F3490E55280372B3D2660AC0298(L_6, (0.0f), NULL);
		// for (int i = 0; i < children.Count; ++i)
		int32_t L_7 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0033:
	{
		// for (int i = 0; i < children.Count; ++i)
		int32_t L_8 = V_7;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_9, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0016;
		}
	}
	{
		// if (material == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = __this->___material_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_0056;
		}
	}
	{
		// Debug.LogError("Failed to build material matrix due to missing material.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralA3ECD8561E7D2C87B06C0D5CD9EC2913C8B766F8, NULL);
		// return;
		return;
	}

IL_0056:
	{
		// float center = (dimension - 1) * positionOffset * -0.5f;
		int32_t L_13 = __this->___dimension_6;
		float L_14 = __this->___positionOffset_7;
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_subtract(L_13, 1))), L_14)), (-0.5f)));
		// Vector3 position = new Vector3(center, 0.0f, center);
		float L_15 = V_1;
		float L_16 = V_1;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), L_15, (0.0f), L_16, NULL);
		// int firstPropertyId = Shader.PropertyToID(firstPropertyName);
		String_t* L_17 = __this->___firstPropertyName_8;
		int32_t L_18;
		L_18 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(L_17, NULL);
		V_3 = L_18;
		// int secondPropertyId = Shader.PropertyToID(secondPropertyName);
		String_t* L_19 = __this->___secondPropertyName_9;
		int32_t L_20;
		L_20 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(L_19, NULL);
		V_4 = L_20;
		// float firstProperty = 0.0f;
		V_5 = (0.0f);
		// float secondProperty = 0.0f;
		V_6 = (0.0f);
		// for (int i = 0; i < dimension; ++i)
		V_8 = 0;
		goto IL_0235;
	}

IL_00aa:
	{
		// for (int j = 0; j < dimension; ++j)
		V_9 = 0;
		goto IL_01ee;
	}

IL_00b2:
	{
		// GameObject element = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B(0, NULL);
		V_10 = L_21;
		// element.name = "Element" + (i * dimension + j);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = V_10;
		int32_t L_23 = V_8;
		int32_t L_24 = __this->___dimension_6;
		int32_t L_25 = V_9;
		V_14 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_23, L_24)), L_25));
		String_t* L_26;
		L_26 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_14), NULL);
		String_t* L_27;
		L_27 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral9932973D4B6AA1AA193C06D8D34B58B677685003, L_26, NULL);
		NullCheck(L_22);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_22, L_27, NULL);
		// element.transform.parent = transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = V_10;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_28, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_29);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_29, L_30, NULL);
		// element.transform.localPosition = position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = V_10;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_2;
		NullCheck(L_32);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_32, L_33, NULL);
		// element.transform.localRotation = Quaternion.Euler(localRotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = V_10;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = __this->___localRotation_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37;
		L_37 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_36, NULL);
		NullCheck(L_35);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_35, L_37, NULL);
		// position.x += positionOffset;
		float* L_38 = (float*)(&(&V_2)->___x_2);
		float* L_39 = L_38;
		float L_40 = *((float*)L_39);
		float L_41 = __this->___positionOffset_7;
		*((float*)L_39) = (float)((float)il2cpp_codegen_add(L_40, L_41));
		// Material newMaterial = new Material(material);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_42 = __this->___material_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_43 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C(L_43, L_42, NULL);
		V_11 = L_43;
		// newMaterial.SetFloat(firstPropertyId, firstProperty);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_44 = V_11;
		int32_t L_45 = V_3;
		float L_46 = V_5;
		NullCheck(L_44);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_44, L_45, L_46, NULL);
		// newMaterial.SetFloat(secondPropertyId, secondProperty);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_47 = V_11;
		int32_t L_48 = V_4;
		float L_49 = V_6;
		NullCheck(L_47);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_47, L_48, L_49, NULL);
		// Renderer _renderer = element.GetComponent<Renderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = V_10;
		NullCheck(L_50);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_51;
		L_51 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_50, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		V_12 = L_51;
		// MeshFilter meshFilter = element.GetComponent<MeshFilter>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = V_10;
		NullCheck(L_52);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_53;
		L_53 = GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8(L_52, GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		V_13 = L_53;
		// if (Application.isPlaying == true)
		bool L_54;
		L_54 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_54)
		{
			goto IL_019c;
		}
	}
	{
		// _renderer.material = newMaterial;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_55 = V_12;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_56 = V_11;
		NullCheck(L_55);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_55, L_56, NULL);
		// if (mesh != null)
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_57 = __this->___mesh_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_58;
		L_58 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_57, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_58)
		{
			goto IL_01d4;
		}
	}
	{
		// meshFilter.mesh = mesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_59 = V_13;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_60 = __this->___mesh_5;
		NullCheck(L_59);
		MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8(L_59, L_60, NULL);
		// Destroy(element.GetComponent<SphereCollider>());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61 = V_10;
		NullCheck(L_61);
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_62;
		L_62 = GameObject_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_mD342F4F06F3848B43732DD183CDDA00AED3EE0A0(L_61, GameObject_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_mD342F4F06F3848B43732DD183CDDA00AED3EE0A0_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_62, NULL);
		// element.AddComponent<MeshCollider>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63 = V_10;
		NullCheck(L_63);
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_64;
		L_64 = GameObject_AddComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFE0E36B3C1670C308B04C39EDC76838DD59826B7(L_63, GameObject_AddComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFE0E36B3C1670C308B04C39EDC76838DD59826B7_RuntimeMethod_var);
		goto IL_01d4;
	}

IL_019c:
	{
		// _renderer.sharedMaterial = newMaterial;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_65 = V_12;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_66 = V_11;
		NullCheck(L_65);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_65, L_66, NULL);
		// if (mesh != null)
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_67 = __this->___mesh_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_68;
		L_68 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_67, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_68)
		{
			goto IL_01d4;
		}
	}
	{
		// meshFilter.mesh = mesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_69 = V_13;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_70 = __this->___mesh_5;
		NullCheck(L_69);
		MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8(L_69, L_70, NULL);
		// DestroyImmediate(element.GetComponent<SphereCollider>());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71 = V_10;
		NullCheck(L_71);
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_72;
		L_72 = GameObject_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_mD342F4F06F3848B43732DD183CDDA00AED3EE0A0(L_71, GameObject_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_mD342F4F06F3848B43732DD183CDDA00AED3EE0A0_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_72, NULL);
		// element.AddComponent<MeshCollider>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_73 = V_10;
		NullCheck(L_73);
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_74;
		L_74 = GameObject_AddComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFE0E36B3C1670C308B04C39EDC76838DD59826B7(L_73, GameObject_AddComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFE0E36B3C1670C308B04C39EDC76838DD59826B7_RuntimeMethod_var);
	}

IL_01d4:
	{
		// firstProperty += 1.0f / (dimension - 1);
		float L_75 = V_5;
		int32_t L_76 = __this->___dimension_6;
		V_5 = ((float)il2cpp_codegen_add(L_75, ((float)((1.0f)/((float)((int32_t)il2cpp_codegen_subtract(L_76, 1)))))));
		// for (int j = 0; j < dimension; ++j)
		int32_t L_77 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_01ee:
	{
		// for (int j = 0; j < dimension; ++j)
		int32_t L_78 = V_9;
		int32_t L_79 = __this->___dimension_6;
		if ((((int32_t)L_78) < ((int32_t)L_79)))
		{
			goto IL_00b2;
		}
	}
	{
		// position.x = center;
		float L_80 = V_1;
		(&V_2)->___x_2 = L_80;
		// position.z += positionOffset;
		float* L_81 = (float*)(&(&V_2)->___z_4);
		float* L_82 = L_81;
		float L_83 = *((float*)L_82);
		float L_84 = __this->___positionOffset_7;
		*((float*)L_82) = (float)((float)il2cpp_codegen_add(L_83, L_84));
		// firstProperty = 0.0f;
		V_5 = (0.0f);
		// secondProperty += 1.0f / (dimension - 1);
		float L_85 = V_6;
		int32_t L_86 = __this->___dimension_6;
		V_6 = ((float)il2cpp_codegen_add(L_85, ((float)((1.0f)/((float)((int32_t)il2cpp_codegen_subtract(L_86, 1)))))));
		// for (int i = 0; i < dimension; ++i)
		int32_t L_87 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_87, 1));
	}

IL_0235:
	{
		// for (int i = 0; i < dimension; ++i)
		int32_t L_88 = V_8;
		int32_t L_89 = __this->___dimension_6;
		if ((((int32_t)L_88) < ((int32_t)L_89)))
		{
			goto IL_00aa;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialMatrix__ctor_mD4B59383590ADE0A0F7D8B20CAEE642B13D388F3 (MaterialMatrix_tA24DA063D198DE17128C737E2C76A175CD09D6FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F94A8E8715AB28B4A3A63F016AFABE058C94FF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2A3DF99788A73C2F0FE7267B988915F72D2C1F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int dimension = 5;
		__this->___dimension_6 = 5;
		// private float positionOffset = 0.1f;
		__this->___positionOffset_7 = (0.100000001f);
		// private string firstPropertyName = "_Metallic";
		__this->___firstPropertyName_8 = _stringLiteral7F94A8E8715AB28B4A3A63F016AFABE058C94FF0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___firstPropertyName_8), (void*)_stringLiteral7F94A8E8715AB28B4A3A63F016AFABE058C94FF0);
		// private string secondPropertyName = "_Glossiness";
		__this->___secondPropertyName_9 = _stringLiteralA2A3DF99788A73C2F0FE7267B988915F72D2C1F1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___secondPropertyName_9), (void*)_stringLiteralA2A3DF99788A73C2F0FE7267B988915F72D2C1F1);
		// private Vector3 localRotation = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___localRotation_10 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.LoadProfilesOnStartup::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadProfilesOnStartup_Update_m398E1CB865AA66B21C56F53BB697CFA0A269D875 (LoadProfilesOnStartup_tE2F36222B03732AC3B951CDC8B182051E17DDDE0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkit_t34094ACADA92B29D4E89DBB9ECBDD3BF74777D9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE75C757AD02FA8901D71BEB1C9171088A9A0D03);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((configProfile != null) && (MixedRealityToolkit.Instance != null))
		MixedRealityToolkitConfigurationProfile_t4B5C622F455F24A9CDF4D3F5C03912E8E33FA414* L_0 = __this->___configProfile_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkit_t34094ACADA92B29D4E89DBB9ECBDD3BF74777D9D_il2cpp_TypeInfo_var);
		MixedRealityToolkit_t34094ACADA92B29D4E89DBB9ECBDD3BF74777D9D* L_2;
		L_2 = MixedRealityToolkit_get_Instance_m4A9C3B3289DED642D7E57B0E0DD5880089E4D89F_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		// MixedRealityToolkit.Instance.ActiveProfile = configProfile;
		il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkit_t34094ACADA92B29D4E89DBB9ECBDD3BF74777D9D_il2cpp_TypeInfo_var);
		MixedRealityToolkit_t34094ACADA92B29D4E89DBB9ECBDD3BF74777D9D* L_4;
		L_4 = MixedRealityToolkit_get_Instance_m4A9C3B3289DED642D7E57B0E0DD5880089E4D89F_inline(NULL);
		MixedRealityToolkitConfigurationProfile_t4B5C622F455F24A9CDF4D3F5C03912E8E33FA414* L_5 = __this->___configProfile_4;
		NullCheck(L_4);
		MixedRealityToolkit_set_ActiveProfile_m937A334B7E26E768E90BAFA78708C5095A0F2BEC(L_4, L_5, NULL);
		// Debug.Log($"Loading new MRTK configuration profile: {configProfile.name}");
		MixedRealityToolkitConfigurationProfile_t4B5C622F455F24A9CDF4D3F5C03912E8E33FA414* L_6 = __this->___configProfile_4;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_6, NULL);
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralBE75C757AD02FA8901D71BEB1C9171088A9A0D03, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
		// configProfile = null;
		__this->___configProfile_4 = (MixedRealityToolkitConfigurationProfile_t4B5C622F455F24A9CDF4D3F5C03912E8E33FA414*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___configProfile_4), (void*)(MixedRealityToolkitConfigurationProfile_t4B5C622F455F24A9CDF4D3F5C03912E8E33FA414*)NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.LoadProfilesOnStartup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadProfilesOnStartup__ctor_mD32E745FD6E78B143C993E2117F20FA5BAEC213F (LoadProfilesOnStartup_tE2F36222B03732AC3B951CDC8B182051E17DDDE0* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.TriggerOnStartup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerOnStartup_Start_mC2FC5ABB26B6290B351D8F3A23F55B06977CAD60 (TriggerOnStartup_tA0F95BE9BAD2D70E4C900ECD09EEEFACE3D296A8* __this, const RuntimeMethod* method) 
{
	{
		// OnSceneStart.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___OnSceneStart_4;
		NullCheck(L_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.TriggerOnStartup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerOnStartup__ctor_mA005409BA75C0F8C06065EF722AAE6EDEC06696D (TriggerOnStartup_tA0F95BE9BAD2D70E4C900ECD09EEEFACE3D296A8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Examples.Experimental.HandMenu.UpdateSliderTrackLine::OnSliderUpdated(Microsoft.MixedReality.Toolkit.UI.SliderEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateSliderTrackLine_OnSliderUpdated_mDCF1BC18C86A883464E965D7F8029223F6053486 (UpdateSliderTrackLine_t16327B23D505E7274FFBB392C1A6E86AC12DE9C6* __this, SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// activeLine.transform.localScale = new Vector3(transform.localScale.x, eventData.NewValue, transform.localScale.z);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___activeLine_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_2, NULL);
		float L_4 = L_3.___x_2;
		SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE* L_5 = ___0_eventData;
		NullCheck(L_5);
		float L_6;
		L_6 = SliderEventData_get_NewValue_m5E0B8480E8D0AEAEBCB2AC29ADCFAC8C6F14401F_inline(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_7, NULL);
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), L_4, L_6, L_9, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_1, L_10, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Experimental.HandMenu.UpdateSliderTrackLine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateSliderTrackLine__ctor_m3CCCED425E567FFBA4FFA830FC3A1AE523851739 (UpdateSliderTrackLine_t16327B23D505E7274FFBB392C1A6E86AC12DE9C6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealitySpatialAwarenessEventData_get_Id_m862270D43158D37BD0CF07EB63839DCD23E374CF_inline (MixedRealitySpatialAwarenessEventData_t665140146CE5C138E399BC73BA5802220AE76341* __this, const RuntimeMethod* method) 
{
	{
		// public int Id { get; private set; }
		int32_t L_0 = __this->___U3CIdU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityToolkit_t34094ACADA92B29D4E89DBB9ECBDD3BF74777D9D* MixedRealityToolkit_get_Instance_m4A9C3B3289DED642D7E57B0E0DD5880089E4D89F_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkit_t34094ACADA92B29D4E89DBB9ECBDD3BF74777D9D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityToolkit Instance => activeInstance;
		il2cpp_codegen_runtime_class_init_inline(MixedRealityToolkit_t34094ACADA92B29D4E89DBB9ECBDD3BF74777D9D_il2cpp_TypeInfo_var);
		MixedRealityToolkit_t34094ACADA92B29D4E89DBB9ECBDD3BF74777D9D* L_0 = ((MixedRealityToolkit_t34094ACADA92B29D4E89DBB9ECBDD3BF74777D9D_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkit_t34094ACADA92B29D4E89DBB9ECBDD3BF74777D9D_il2cpp_TypeInfo_var))->___activeInstance_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SliderEventData_get_NewValue_m5E0B8480E8D0AEAEBCB2AC29ADCFAC8C6F14401F_inline (SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE* __this, const RuntimeMethod* method) 
{
	{
		// public float NewValue { get; private set; }
		float L_0 = __this->___U3CNewValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_euler;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}

﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct Dictionary_2_tB7478EF7A1D56D0534BD9AF224099A735CEFB6E6;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`1<UnityEngine.RectTransform>
struct Func_1_t9C6E028D7DEC6AB52806A10D996C478296C6EAAA;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`3<System.String,UnityEngine.Transform,System.String>
struct Func_3_t25039A52ED82957816F93C2D9CF335791DA6FCFD;
// System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct IDictionary_2_tC070671675C0DBCC796461C79968ECD0F44B968D;
// System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>
struct IEnumerator_1_t008FDB44495F1CB54F661F790A691A6DB39EA506;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct IMixedRealityGestureHandler_1_t5DF827B70911D0697D9F04D69834827B05C29A6F;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>
struct IMixedRealityGestureHandler_1_t9BF2917CA2F6BA90F5B502CE2252E7A71E694327;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>
struct IMixedRealityGestureHandler_1_tAEFE3B6550ED8998523EE7A2AF1FC5341976036E;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>
struct IMixedRealityGestureHandler_1_t61F3CC09AD97599905243CBACDB7B376CD5EF68B;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct IMixedRealityInputHandler_1_t7CF08C0BE2A9217FA74D732ABA5389DA50108493;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Quaternion>
struct IMixedRealityInputHandler_1_tD117904458EAEF36E1A709874C97A7439C13F417;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<System.Single>
struct IMixedRealityInputHandler_1_tBFC269600A0AE45F77486D558FDDB877857D753F;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector2>
struct IMixedRealityInputHandler_1_t3651BC9A97C374E56AE8F10509473D47ED139B97;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector3>
struct IMixedRealityInputHandler_1_t5067BC8376F618E30228C40150CC2560841C2848;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI>
struct IReadOnlyList_1_tAAE1FBCED0052803C43BEBCA555F5107A4B408FC;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct InputEventData_1_t06D41EEA2E71B9C529589C04485505606369BE1C;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo>
struct InputEventData_1_t2D9D7DD999D58E4BCE0A36B14B5C928399CDAE3F;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct InputEventData_1_tA33647F64CCCCF6BC521D4100BE48B24C6BFBD3B;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Quaternion>
struct InputEventData_1_t7F018120437B38470980D7DC0A7FDBA6732ABF30;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single>
struct InputEventData_1_t14738FF3BEDDEC90DB73AC6834680FA99924E98E;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2>
struct InputEventData_1_tE0571359448813352C91BED8440BD824D08412F7;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3>
struct InputEventData_1_t3CC0187E4344201378E113CFC270CB5C4AF36D86;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct KeyCollection_t1C7E6172AC211101030F244ADA5A5C63CF56ED6B;
// System.Lazy`1<System.Object>
struct Lazy_1_t9AEDA4BDE3E10120674776405939013BDFB29948;
// System.Lazy`1<UnityEngine.RectTransform>
struct Lazy_1_t7A2FE75485683BDF384AC4F2E3E706A140DC2628;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI>
struct List_1_t92334C309B2576B7D5B460950F0E56B19CC288A4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct List_1_t009B0B442ADCA0D896E13C9E95AF6336FEF9D851;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct SourcePoseEventData_1_t84A604B2C5FDE7D0F3E4DE6FF23EA9C2773CC565;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion>
struct SourcePoseEventData_1_t311DB5A8EE84E186C29732ED88DB5994EB2CAD1D;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState>
struct SourcePoseEventData_1_t8C83AA36628EFD7CDCC9FCF8AB48C7CDB70B9516;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2>
struct SourcePoseEventData_1_t6035127052FD3413F4B8D698EA70B46DF636B40F;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3>
struct SourcePoseEventData_1_t777563EDBE3D96857FDE0FCE63785C606EBFFCBE;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct ValueCollection_t785392F6FCC7542B349A8D0753166B46003CC299;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>[]
struct EntryU5BU5D_t8C5041A5A1646B504B177D00EEEF42F781A94432;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_tBA705C167A9AA88747F0E71091D027919388F80C;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F;
// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI[]
struct NearInteractionTouchableUnityUIU5BU5D_t18DCADD4D1ADA8D0A457E3B237BAE6A14F119693;
// Microsoft.MixedReality.Toolkit.Physics.RayStep[]
struct RayStepU5BU5D_tCC36F43D996F3D35CC79E15BA0E3B1C10EBF1DC8;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource
struct BaseGenericInputSource_t3BC0CA373CD52DBE59FF183FDE0B2795BC7FBC9E;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D;
// Microsoft.MixedReality.Toolkit.Input.BaseInputEventData
struct BaseInputEventData_t33EF0985CB22B5C3318A0464BDBF0BDF3F9B7411;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924;
// UnityEngine.UI.BaseMeshEffect
struct BaseMeshEffect_tC7D44B0AC6406BAC3E4FC4579A43FC135BDB6FDA;
// Microsoft.MixedReality.Toolkit.Input.BaseNearInteractionTouchable
struct BaseNearInteractionTouchable_tAD56BBE0B1CB3D76C8188DC83B835CAFE7EED346;
// Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer
struct BaseRayStabilizer_tB369E9BC56501D9F365E18B05F69FFA840099E53;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.MixedReality.Toolkit.Input.DictationEventData
struct DictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// System.Exception
struct Exception_t;
// Microsoft.MixedReality.Toolkit.Input.FocusEventData
struct FocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.Input.GazeProvider
struct GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176;
// Microsoft.MixedReality.Toolkit.Physics.GazeStabilizer
struct GazeStabilizer_t6BA0FA272154F3DD33F7052C3ACBBCCFFA5F47E5;
// Microsoft.MixedReality.Toolkit.Input.GenericPointer
struct GenericPointer_tD86AC079044CE9DE5F79A1B579F71953A66658DD;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// Microsoft.MixedReality.Toolkit.Input.HandMeshInfo
struct HandMeshInfo_t4B3F81C233038F537CD46AF23300BB3C6B4B1FFA;
// Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData
struct HandTrackingInputEventData_t17B384EF4D24CF64EF2884AB370CB9066CA564A7;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// Microsoft.MixedReality.Toolkit.Physics.IBaseRayStabilizer
struct IBaseRayStabilizer_t3FA20C145562CFBB51F3BD092BBAAC555E68FF32;
// Microsoft.MixedReality.Toolkit.Input.ICursorModifier
struct ICursorModifier_tE13C1F1A233445C735467F9EF3A014BFFAABF6C2;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler
struct IMixedRealityBaseInputHandler_tAC0368D4DAE9B9F846AB4A45742331431AF90827;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController
struct IMixedRealityController_t4C230882C83B807CD79BFCDC16DAF59843A28FB5;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor
struct IMixedRealityCursor_t88D68C79582AC9AE9BAE4966446158D996342F42;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler
struct IMixedRealityDictationHandler_t98C2EEA038E5E4417458A0FAB56E1DA00AD23F04;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler
struct IMixedRealityFocusChangedHandler_tFA6F0326D6FFAC915E67A23ACA6060B07D3E73AC;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler
struct IMixedRealityFocusHandler_tA1DF1AA80759B602F63D874B1C6D17F0640D0CB6;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler
struct IMixedRealityGestureHandler_t0A5BCFF83D2F8CC4CDCA8E286694151E22C62814;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointHandler
struct IMixedRealityHandJointHandler_t79E63EB39D36735D8E8B803583B19E39029B0231;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandMeshHandler
struct IMixedRealityHandMeshHandler_tB10BDB522B37C512DDA155F5DE7ED54D50650980;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler
struct IMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler
struct IMixedRealityInputHandler_tADE02EB7F7F73A5E6DBC48BA0A5E8D37793D6AC7;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_t923212C7B71ADAD3E3C21B99009C9612530D3FE7;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t6D453243E31F7729D3E9B49623B6B7092296E4C4;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_tF6CC763A793FD3C0F29BBAA0EE6780064868118C;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler
struct IMixedRealityPointerHandler_tBA251119F52C3F34D17B5A225ABAF401B2CF2AA0;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler
struct IMixedRealitySourcePoseHandler_t4CEA8565CC20FDB758B73E4B884F7B6B5E499D0F;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler
struct IMixedRealitySourceStateHandler_tE59DCEC66CBC9E88658C3D5F48927CBE4BBB07F3;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler
struct IMixedRealitySpeechHandler_t5334FAB956513541ADED66C150F22BA8CFE475D5;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler
struct IMixedRealityTouchHandler_tD78DAB5036D5B72077B668CD988CA8A8A276DFCC;
// Microsoft.MixedReality.Toolkit.Input.IPointerResult
struct IPointerResult_t4AA19FA32179497F5542DEC62E3B89B45A8FE995;
// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017;
// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener
struct InputSystemGlobalHandlerListener_tE39526E6E6789D2FA1576A6AB07D1A3F163458B2;
// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener
struct InputSystemGlobalListener_tFD9BB9DFC8D3641330B90871932353F182FDB2C2;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule
struct MixedRealityInputModule_t0492967672F0C01F27AF4273EFFE8CE0EC32C664;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE;
// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableSurface
struct NearInteractionTouchableSurface_tF1A799058D9E1334B3153D037E843CCC0DEB1A16;
// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI
struct NearInteractionTouchableUnityUI_tE516D0C98E3583A7EEBA0E60FA41CBD7844268DF;
// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableVolume
struct NearInteractionTouchableVolume_tDE281E73D1A8AD596232A1443EE49ADE12C31580;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.MixedReality.Toolkit.Input.Utilities.ScaleMeshEffect
struct ScaleMeshEffect_t1E7AC88F6C33ABCF1570F90CFF80419E300A8D4F;
// Microsoft.MixedReality.Toolkit.Input.SourceStateEventData
struct SourceStateEventData_tE68D8C1FF7799BB758CA7436749CAC8052D71D77;
// Microsoft.MixedReality.Toolkit.Input.SpeechEventData
struct SpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21;
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958;
// Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData
struct PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1;
// Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult
struct PointerHitResult_t3D95459BE11F9760912479670FF65B285E5B9D38;
// Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences
struct PointerPreferences_t75E8D925545E01FEB8547C84B2D1F5DAF05D8093;
// Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__77
struct U3CRaiseSourceDetectedU3Ed__77_tE01F382DF1053619EAD0EAAA66A5AF483CF8A74F;
// Microsoft.MixedReality.Toolkit.Input.GazeProvider/<Start>d__63
struct U3CStartU3Ed__63_tFB3170C366FB7914205299BE63614F1F4B0A40C3;
// Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer
struct InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C;
// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c
struct U3CU3Ec_t5A220AA1B09C7BA7AD1E3C87A43A8F65C986B878;
// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4
struct U3CEnsureInputSystemValidU3Ed__4_tDFF204F4A209F39BBED9FF447E84E291A9691B6F;
// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2
struct U3CStartU3Ed__2_tA608AE85547E154DFD08A56D53F5AC78CCE2251D;
// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c
struct U3CU3Ec_t5EA49CAA78D5D4F96D4BC61FCE7479A143530CCE;
// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4
struct U3CEnsureInputSystemValidU3Ed__4_t483A21CE125D456473D51EC11F18208F19416798;
// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2
struct U3CStartU3Ed__2_t27D2FF7C6730C5A76FA7A33B5BCEA7C175F3705A;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16
struct U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData
struct PointerData_t524B70063DAD63AB1B38F1BB8C9EE71E1D04DC1F;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c
struct U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C;
// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c
struct U3CU3Ec_t52E15252849DE7F24C4F1D5FCC1F77B771665B98;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t9C6E028D7DEC6AB52806A10D996C478296C6EAAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityCursor_t88D68C79582AC9AE9BAE4966446158D996342F42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityDictationHandler_t98C2EEA038E5E4417458A0FAB56E1DA00AD23F04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityEventSystem_tC8F1D97D393FBBACAC7729B52669B42461873D27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityFocusChangedHandler_tFA6F0326D6FFAC915E67A23ACA6060B07D3E73AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityFocusHandler_tA1DF1AA80759B602F63D874B1C6D17F0640D0CB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGestureHandler_1_t5DF827B70911D0697D9F04D69834827B05C29A6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGestureHandler_1_t61F3CC09AD97599905243CBACDB7B376CD5EF68B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGestureHandler_1_t9BF2917CA2F6BA90F5B502CE2252E7A71E694327_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGestureHandler_1_tAEFE3B6550ED8998523EE7A2AF1FC5341976036E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGestureHandler_t0A5BCFF83D2F8CC4CDCA8E286694151E22C62814_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityHandJointHandler_t79E63EB39D36735D8E8B803583B19E39029B0231_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityHandMeshHandler_tB10BDB522B37C512DDA155F5DE7ED54D50650980_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_1_t3651BC9A97C374E56AE8F10509473D47ED139B97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_1_t5067BC8376F618E30228C40150CC2560841C2848_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_1_t7CF08C0BE2A9217FA74D732ABA5389DA50108493_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_1_tBFC269600A0AE45F77486D558FDDB877857D753F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_1_tD117904458EAEF36E1A709874C97A7439C13F417_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_tADE02EB7F7F73A5E6DBC48BA0A5E8D37793D6AC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t6D453243E31F7729D3E9B49623B6B7092296E4C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityPointerHandler_tBA251119F52C3F34D17B5A225ABAF401B2CF2AA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityPointer_tF6CC763A793FD3C0F29BBAA0EE6780064868118C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealitySourcePoseHandler_t4CEA8565CC20FDB758B73E4B884F7B6B5E499D0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealitySourceStateHandler_tE59DCEC66CBC9E88658C3D5F48927CBE4BBB07F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealitySpeechHandler_t5334FAB956513541ADED66C150F22BA8CFE475D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityTouchHandler_tD78DAB5036D5B72077B668CD988CA8A8A276DFCC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lazy_1_t7A2FE75485683BDF384AC4F2E3E706A140DC2628_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t92334C309B2576B7D5B460950F0E56B19CC288A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPlayspace_t05C727679F26BB2D77941AA76EA5C96D3E5ABE98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NearInteractionTouchableUnityUI_tE516D0C98E3583A7EEBA0E60FA41CBD7844268DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t52E15252849DE7F24C4F1D5FCC1F77B771665B98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5A220AA1B09C7BA7AD1E3C87A43A8F65C986B878_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5EA49CAA78D5D4F96D4BC61FCE7479A143530CCE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral033695E8FCCB2AD8ED3D6CA47B0D7673411B3701;
IL2CPP_EXTERN_C String_t* _stringLiteral193EAB9F1EC19468783C52A94D9B84DF6D5BEE4F;
IL2CPP_EXTERN_C String_t* _stringLiteral3F670F51C586102E4AD2E77FED417809FF46F3D8;
IL2CPP_EXTERN_C String_t* _stringLiteral8646EE7CB5D6509C0ECF1B9EA3BEB8B77A6CB742;
IL2CPP_EXTERN_C String_t* _stringLiteral8A4B7834144C35546E7F3AA5FB0F9239B88B8B6A;
IL2CPP_EXTERN_C String_t* _stringLiteral9CFDCFFDD9F8EAA25BCF8F12B4E2CF9CE83B9B29;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_TisU3CEnsureInputSystemValidU3Ed__4_t483A21CE125D456473D51EC11F18208F19416798_m389757D93D363A180E5C9FF3AFCB054EB3FCB3C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_TisU3CEnsureInputSystemValidU3Ed__4_tDFF204F4A209F39BBED9FF447E84E291A9691B6F_mEA3DCA64E69C5902EC68FEFA6D9D5B4348A47256_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CRaiseSourceDetectedU3Ed__77_tE01F382DF1053619EAD0EAAA66A5AF483CF8A74F_m09A4368D9D466A554E4F7003937A525CF258D081_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t27D2FF7C6730C5A76FA7A33B5BCEA7C175F3705A_m1205BF0963ED64BE1C325BE0AA742724EA4302AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_tA608AE85547E154DFD08A56D53F5AC78CCE2251D_m318BF45A45E3A53566D557825AE44A159DBA00BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__63_tFB3170C366FB7914205299BE63614F1F4B0A40C3_m3139DE607A08F0411C521BA404E7E37BFE0B3096_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m79D616348A09F5E2973F405F4F9D944744FAD6A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m0F70BE553DF5B805B926E5BA1B1CF6452C41FC93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE4D94E308200C345DEDFD914D3484FD896CE9C66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m979E07653F7545D173CA9A1454D729620EA8BF6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m22BBCEF5FEB5A97F2B8AA9470FEAA0F3093F22FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisDictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9_m10EE75CB04F08262DD52F77BE4AF5514FDCCFE32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisFocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20_m36F130187A4C9793DE99D642B2D730444C71577E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_t17B384EF4D24CF64EF2884AB370CB9066CA564A7_mF3B8DA57E0A2A385185BD4D44E43E8C23801C745_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_t06D41EEA2E71B9C529589C04485505606369BE1C_mB37A0C7E484A4AC177CA18B67A6DA398E5B14B86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_t14738FF3BEDDEC90DB73AC6834680FA99924E98E_m690BB5C662E6F01B7A15040193EBEE96B1EE6641_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_t2D9D7DD999D58E4BCE0A36B14B5C928399CDAE3F_m3F470CC5361D08F213269173D8BCBB1D8D10419A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_t3CC0187E4344201378E113CFC270CB5C4AF36D86_m6202F662B34E3BCA29B88E2C423DB3A66B9A3716_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_t7F018120437B38470980D7DC0A7FDBA6732ABF30_m2129AC3F038C4BEF0B506ECE284ED37D7C7F49A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_tA33647F64CCCCF6BC521D4100BE48B24C6BFBD3B_mFFDCF554C5EC4D10E36C89E06BDCC2F80F7ECC35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_tE0571359448813352C91BED8440BD824D08412F7_m816378C93CF3AD3650AED93D4E5AFCDFBF3D3595_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_t60DF86D63F954673178E2461D27DB8150C84A017_mE0D86703A444865133801F03AD4571D24ED886B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE_m7F978E209D513634A2424B711C46F0E61E874735_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t311DB5A8EE84E186C29732ED88DB5994EB2CAD1D_m239B51D4196B7B12B93591E34FC8E4CE76E7181E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t6035127052FD3413F4B8D698EA70B46DF636B40F_m4D36643A0D7FEBA5141DF96AF7A0336E697AE18A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t777563EDBE3D96857FDE0FCE63785C606EBFFCBE_m10F421CF23A3A400CD4F0DE1893B9BA4B35FE5EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t84A604B2C5FDE7D0F3E4DE6FF23EA9C2773CC565_m5463A4BA667FCE456700102C55ACE54EF0CD5DA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t8C83AA36628EFD7CDCC9FCF8AB48C7CDB70B9516_m0FE7B14F50B377880C5AE271E0C90A9B3F2B59B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourceStateEventData_tE68D8C1FF7799BB758CA7436749CAC8052D71D77_mD647BA67619F8078D2E0AD8D0AE2D34D8B9EFFA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA_m628BC374FB56E5B33E8A4CF9A8DDC5DC110B9B19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m86E416AA060825F6CB17CB373EA14F964C18F131_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mEB783152B3091A6573D44BDD18EDC88DC769C2A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1__ctor_mBA873D19799CE0A3BFD7EAC23B9A0B92FE76EB32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1_get_Value_mAF4DD3A825C2A168053CA6BA55CD1C92397053C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5EBB88B9DA5FD4751FEE067866490E5DCCBC392A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m3B436443D14F421818C16DD9F47A31EA8CDB9E2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m90BBD48A5C6C1F74D976D6A56A2C8ED1CD45017A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_m4ACD2E63406E09CAB23EE4C2A9FF5E9131D29962_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_m611E264F56702CFFD5CAE4C652F38D9D2531C73C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_IEnumerator_Reset_mC269C239FE27C543C5B179CDCB148C23662009C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t0A5BCFF83D2F8CC4CDCA8E286694151E22C62814_mFC83C9A2367A7604F8BD04E0B3F3E28DECB583FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275_m39B0F15B395F1EC250E61D16731737864BBCA282_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_tADE02EB7F7F73A5E6DBC48BA0A5E8D37793D6AC7_mA8D4A6BAC4ED7FA2F418135185C1E1D89F734F9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityObjectExtensions_IsNull_TisIMixedRealitySpeechHandler_t5334FAB956513541ADED66C150F22BA8CFE475D5_m5618D3D9A5B03BA7A5AC61A4F46BF926D2F9647B_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F;
struct RayStepU5BU5D_tCC36F43D996F3D35CC79E15BA0E3B1C10EBF1DC8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct Dictionary_2_tB7478EF7A1D56D0534BD9AF224099A735CEFB6E6  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t8C5041A5A1646B504B177D00EEEF42F781A94432* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t1C7E6172AC211101030F244ADA5A5C63CF56ED6B * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t785392F6FCC7542B349A8D0753166B46003CC299 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tB7478EF7A1D56D0534BD9AF224099A735CEFB6E6, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tB7478EF7A1D56D0534BD9AF224099A735CEFB6E6, ___entries_1)); }
	inline EntryU5BU5D_t8C5041A5A1646B504B177D00EEEF42F781A94432* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t8C5041A5A1646B504B177D00EEEF42F781A94432** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t8C5041A5A1646B504B177D00EEEF42F781A94432* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tB7478EF7A1D56D0534BD9AF224099A735CEFB6E6, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tB7478EF7A1D56D0534BD9AF224099A735CEFB6E6, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tB7478EF7A1D56D0534BD9AF224099A735CEFB6E6, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tB7478EF7A1D56D0534BD9AF224099A735CEFB6E6, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tB7478EF7A1D56D0534BD9AF224099A735CEFB6E6, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tB7478EF7A1D56D0534BD9AF224099A735CEFB6E6, ___keys_7)); }
	inline KeyCollection_t1C7E6172AC211101030F244ADA5A5C63CF56ED6B * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t1C7E6172AC211101030F244ADA5A5C63CF56ED6B ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t1C7E6172AC211101030F244ADA5A5C63CF56ED6B * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tB7478EF7A1D56D0534BD9AF224099A735CEFB6E6, ___values_8)); }
	inline ValueCollection_t785392F6FCC7542B349A8D0753166B46003CC299 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t785392F6FCC7542B349A8D0753166B46003CC299 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t785392F6FCC7542B349A8D0753166B46003CC299 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tB7478EF7A1D56D0534BD9AF224099A735CEFB6E6, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Lazy`1<UnityEngine.RectTransform>
struct Lazy_1_t7A2FE75485683BDF384AC4F2E3E706A140DC2628  : public RuntimeObject
{
public:
	// System.Object System.Lazy`1::m_boxed
	RuntimeObject * ___m_boxed_1;
	// System.Func`1<T> System.Lazy`1::m_valueFactory
	Func_1_t9C6E028D7DEC6AB52806A10D996C478296C6EAAA * ___m_valueFactory_2;
	// System.Object System.Lazy`1::m_threadSafeObj
	RuntimeObject * ___m_threadSafeObj_3;

public:
	inline static int32_t get_offset_of_m_boxed_1() { return static_cast<int32_t>(offsetof(Lazy_1_t7A2FE75485683BDF384AC4F2E3E706A140DC2628, ___m_boxed_1)); }
	inline RuntimeObject * get_m_boxed_1() const { return ___m_boxed_1; }
	inline RuntimeObject ** get_address_of_m_boxed_1() { return &___m_boxed_1; }
	inline void set_m_boxed_1(RuntimeObject * value)
	{
		___m_boxed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_boxed_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_valueFactory_2() { return static_cast<int32_t>(offsetof(Lazy_1_t7A2FE75485683BDF384AC4F2E3E706A140DC2628, ___m_valueFactory_2)); }
	inline Func_1_t9C6E028D7DEC6AB52806A10D996C478296C6EAAA * get_m_valueFactory_2() const { return ___m_valueFactory_2; }
	inline Func_1_t9C6E028D7DEC6AB52806A10D996C478296C6EAAA ** get_address_of_m_valueFactory_2() { return &___m_valueFactory_2; }
	inline void set_m_valueFactory_2(Func_1_t9C6E028D7DEC6AB52806A10D996C478296C6EAAA * value)
	{
		___m_valueFactory_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_valueFactory_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_threadSafeObj_3() { return static_cast<int32_t>(offsetof(Lazy_1_t7A2FE75485683BDF384AC4F2E3E706A140DC2628, ___m_threadSafeObj_3)); }
	inline RuntimeObject * get_m_threadSafeObj_3() const { return ___m_threadSafeObj_3; }
	inline RuntimeObject ** get_address_of_m_threadSafeObj_3() { return &___m_threadSafeObj_3; }
	inline void set_m_threadSafeObj_3(RuntimeObject * value)
	{
		___m_threadSafeObj_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_threadSafeObj_3), (void*)value);
	}
};

struct Lazy_1_t7A2FE75485683BDF384AC4F2E3E706A140DC2628_StaticFields
{
public:
	// System.Func`1<T> System.Lazy`1::ALREADY_INVOKED_SENTINEL
	Func_1_t9C6E028D7DEC6AB52806A10D996C478296C6EAAA * ___ALREADY_INVOKED_SENTINEL_0;

public:
	inline static int32_t get_offset_of_ALREADY_INVOKED_SENTINEL_0() { return static_cast<int32_t>(offsetof(Lazy_1_t7A2FE75485683BDF384AC4F2E3E706A140DC2628_StaticFields, ___ALREADY_INVOKED_SENTINEL_0)); }
	inline Func_1_t9C6E028D7DEC6AB52806A10D996C478296C6EAAA * get_ALREADY_INVOKED_SENTINEL_0() const { return ___ALREADY_INVOKED_SENTINEL_0; }
	inline Func_1_t9C6E028D7DEC6AB52806A10D996C478296C6EAAA ** get_address_of_ALREADY_INVOKED_SENTINEL_0() { return &___ALREADY_INVOKED_SENTINEL_0; }
	inline void set_ALREADY_INVOKED_SENTINEL_0(Func_1_t9C6E028D7DEC6AB52806A10D996C478296C6EAAA * value)
	{
		___ALREADY_INVOKED_SENTINEL_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ALREADY_INVOKED_SENTINEL_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI>
struct List_1_t92334C309B2576B7D5B460950F0E56B19CC288A4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	NearInteractionTouchableUnityUIU5BU5D_t18DCADD4D1ADA8D0A457E3B237BAE6A14F119693* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t92334C309B2576B7D5B460950F0E56B19CC288A4, ____items_1)); }
	inline NearInteractionTouchableUnityUIU5BU5D_t18DCADD4D1ADA8D0A457E3B237BAE6A14F119693* get__items_1() const { return ____items_1; }
	inline NearInteractionTouchableUnityUIU5BU5D_t18DCADD4D1ADA8D0A457E3B237BAE6A14F119693** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(NearInteractionTouchableUnityUIU5BU5D_t18DCADD4D1ADA8D0A457E3B237BAE6A14F119693* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t92334C309B2576B7D5B460950F0E56B19CC288A4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t92334C309B2576B7D5B460950F0E56B19CC288A4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t92334C309B2576B7D5B460950F0E56B19CC288A4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t92334C309B2576B7D5B460950F0E56B19CC288A4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	NearInteractionTouchableUnityUIU5BU5D_t18DCADD4D1ADA8D0A457E3B237BAE6A14F119693* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t92334C309B2576B7D5B460950F0E56B19CC288A4_StaticFields, ____emptyArray_5)); }
	inline NearInteractionTouchableUnityUIU5BU5D_t18DCADD4D1ADA8D0A457E3B237BAE6A14F119693* get__emptyArray_5() const { return ____emptyArray_5; }
	inline NearInteractionTouchableUnityUIU5BU5D_t18DCADD4D1ADA8D0A457E3B237BAE6A14F119693** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(NearInteractionTouchableUnityUIU5BU5D_t18DCADD4D1ADA8D0A457E3B237BAE6A14F119693* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer
struct BaseRayStabilizer_tB369E9BC56501D9F365E18B05F69FFA840099E53  : public RuntimeObject
{
public:

public:
};


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70  : public RuntimeObject
{
public:
	// System.Exception Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::exception
	Exception_t * ___exception_0;
	// System.Action Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::continuation
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_exception_0() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70, ___exception_0)); }
	inline Exception_t * get_exception_0() const { return ___exception_0; }
	inline Exception_t ** get_address_of_exception_0() { return &___exception_0; }
	inline void set_exception_0(Exception_t * value)
	{
		___exception_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exception_0), (void*)value);
	}

	inline static int32_t get_offset_of_continuation_1() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70, ___continuation_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_continuation_1() const { return ___continuation_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_continuation_1() { return &___continuation_1; }
	inline void set_continuation_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___continuation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsCompletedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70, ___U3CIsCompletedU3Ek__BackingField_2)); }
	inline bool get_U3CIsCompletedU3Ek__BackingField_2() const { return ___U3CIsCompletedU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsCompletedU3Ek__BackingField_2() { return &___U3CIsCompletedU3Ek__BackingField_2; }
	inline void set_U3CIsCompletedU3Ek__BackingField_2(bool value)
	{
		___U3CIsCompletedU3Ek__BackingField_2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c
struct U3CU3Ec_t5A220AA1B09C7BA7AD1E3C87A43A8F65C986B878  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t5A220AA1B09C7BA7AD1E3C87A43A8F65C986B878_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c::<>9
	U3CU3Ec_t5A220AA1B09C7BA7AD1E3C87A43A8F65C986B878 * ___U3CU3E9_0;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c::<>9__4_0
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___U3CU3E9__4_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5A220AA1B09C7BA7AD1E3C87A43A8F65C986B878_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t5A220AA1B09C7BA7AD1E3C87A43A8F65C986B878 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t5A220AA1B09C7BA7AD1E3C87A43A8F65C986B878 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t5A220AA1B09C7BA7AD1E3C87A43A8F65C986B878 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5A220AA1B09C7BA7AD1E3C87A43A8F65C986B878_StaticFields, ___U3CU3E9__4_0_1)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_U3CU3E9__4_0_1() const { return ___U3CU3E9__4_0_1; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_U3CU3E9__4_0_1() { return &___U3CU3E9__4_0_1; }
	inline void set_U3CU3E9__4_0_1(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___U3CU3E9__4_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_0_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c
struct U3CU3Ec_t5EA49CAA78D5D4F96D4BC61FCE7479A143530CCE  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t5EA49CAA78D5D4F96D4BC61FCE7479A143530CCE_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c::<>9
	U3CU3Ec_t5EA49CAA78D5D4F96D4BC61FCE7479A143530CCE * ___U3CU3E9_0;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c::<>9__4_0
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___U3CU3E9__4_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5EA49CAA78D5D4F96D4BC61FCE7479A143530CCE_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t5EA49CAA78D5D4F96D4BC61FCE7479A143530CCE * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t5EA49CAA78D5D4F96D4BC61FCE7479A143530CCE ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t5EA49CAA78D5D4F96D4BC61FCE7479A143530CCE * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5EA49CAA78D5D4F96D4BC61FCE7479A143530CCE_StaticFields, ___U3CU3E9__4_0_1)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_U3CU3E9__4_0_1() const { return ___U3CU3E9__4_0_1; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_U3CU3E9__4_0_1() { return &___U3CU3E9__4_0_1; }
	inline void set_U3CU3E9__4_0_1(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___U3CU3E9__4_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_0_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c
struct U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<>9
	U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c
struct U3CU3Ec_t52E15252849DE7F24C4F1D5FCC1F77B771665B98  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t52E15252849DE7F24C4F1D5FCC1F77B771665B98_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::<>9
	U3CU3Ec_t52E15252849DE7F24C4F1D5FCC1F77B771665B98 * ___U3CU3E9_0;
	// System.Func`3<System.String,UnityEngine.Transform,System.String> Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::<>9__25_0
	Func_3_t25039A52ED82957816F93C2D9CF335791DA6FCFD * ___U3CU3E9__25_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t52E15252849DE7F24C4F1D5FCC1F77B771665B98_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t52E15252849DE7F24C4F1D5FCC1F77B771665B98 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t52E15252849DE7F24C4F1D5FCC1F77B771665B98 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t52E15252849DE7F24C4F1D5FCC1F77B771665B98 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t52E15252849DE7F24C4F1D5FCC1F77B771665B98_StaticFields, ___U3CU3E9__25_0_1)); }
	inline Func_3_t25039A52ED82957816F93C2D9CF335791DA6FCFD * get_U3CU3E9__25_0_1() const { return ___U3CU3E9__25_0_1; }
	inline Func_3_t25039A52ED82957816F93C2D9CF335791DA6FCFD ** get_address_of_U3CU3E9__25_0_1() { return &___U3CU3E9__25_0_1; }
	inline void set_U3CU3E9__25_0_1(Func_3_t25039A52ED82957816F93C2D9CF335791DA6FCFD * value)
	{
		___U3CU3E9__25_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_0_1), (void*)value);
	}
};


// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState> UnityEngine.EventSystems.PointerInputModule/MouseState::m_TrackedButtons
	List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E * ___m_TrackedButtons_0;

public:
	inline static int32_t get_offset_of_m_TrackedButtons_0() { return static_cast<int32_t>(offsetof(MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1, ___m_TrackedButtons_0)); }
	inline List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E * get_m_TrackedButtons_0() const { return ___m_TrackedButtons_0; }
	inline List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E ** get_address_of_m_TrackedButtons_0() { return &___m_TrackedButtons_0; }
	inline void set_m_TrackedButtons_0(List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E * value)
	{
		___m_TrackedButtons_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedButtons_0), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct KeyValuePair_2_tB056ADCF48A6392925AFCA43342F5E6483191DE0 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	PointerData_t524B70063DAD63AB1B38F1BB8C9EE71E1D04DC1F * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB056ADCF48A6392925AFCA43342F5E6483191DE0, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB056ADCF48A6392925AFCA43342F5E6483191DE0, ___value_1)); }
	inline PointerData_t524B70063DAD63AB1B38F1BB8C9EE71E1D04DC1F * get_value_1() const { return ___value_1; }
	inline PointerData_t524B70063DAD63AB1B38F1BB8C9EE71E1D04DC1F ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(PointerData_t524B70063DAD63AB1B38F1BB8C9EE71E1D04DC1F * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
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

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};

// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___m_Predicate_0;

public:
	inline static int32_t get_offset_of_m_Predicate_0() { return static_cast<int32_t>(offsetof(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21, ___m_Predicate_0)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_m_Predicate_0() const { return ___m_Predicate_0; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_m_Predicate_0() { return &___m_Predicate_0; }
	inline void set_m_Predicate_0(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___m_Predicate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Predicate_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_task_2)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___dictionary_0)); }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___current_3)); }
	inline KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tB7478EF7A1D56D0534BD9AF224099A735CEFB6E6 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tB056ADCF48A6392925AFCA43342F5E6483191DE0  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337, ___dictionary_0)); }
	inline Dictionary_2_tB7478EF7A1D56D0534BD9AF224099A735CEFB6E6 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tB7478EF7A1D56D0534BD9AF224099A735CEFB6E6 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tB7478EF7A1D56D0534BD9AF224099A735CEFB6E6 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337, ___current_3)); }
	inline KeyValuePair_2_tB056ADCF48A6392925AFCA43342F5E6483191DE0  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tB056ADCF48A6392925AFCA43342F5E6483191DE0 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tB056ADCF48A6392925AFCA43342F5E6483191DE0  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 
{
public:
	// T System.Nullable`1::value
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___value_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_value_0() const { return ___value_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.AdditionalCanvasShaderChannels
struct AdditionalCanvasShaderChannels_t72A9ACBEE2E5AB5834D5F978421028757954396C 
{
public:
	// System.Int32 UnityEngine.AdditionalCanvasShaderChannels::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AdditionalCanvasShaderChannels_t72A9ACBEE2E5AB5834D5F978421028757954396C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_task_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_pinvoke
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_com
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};

// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct AxisType_tB606C85BE8C41F8EDB09DBC39718C91E7CA874D1 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_tB606C85BE8C41F8EDB09DBC39718C91E7CA874D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Bounds
struct Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Microsoft.MixedReality.Toolkit.Input.FocusEventData
struct FocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.FocusEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.FocusEventData::<OldFocusedObject>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3COldFocusedObjectU3Ek__BackingField_3;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.FocusEventData::<NewFocusedObject>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CNewFocusedObjectU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20, ___U3CPointerU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CPointerU3Ek__BackingField_2() const { return ___U3CPointerU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CPointerU3Ek__BackingField_2() { return &___U3CPointerU3Ek__BackingField_2; }
	inline void set_U3CPointerU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CPointerU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointerU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3COldFocusedObjectU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20, ___U3COldFocusedObjectU3Ek__BackingField_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3COldFocusedObjectU3Ek__BackingField_3() const { return ___U3COldFocusedObjectU3Ek__BackingField_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3COldFocusedObjectU3Ek__BackingField_3() { return &___U3COldFocusedObjectU3Ek__BackingField_3; }
	inline void set_U3COldFocusedObjectU3Ek__BackingField_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3COldFocusedObjectU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COldFocusedObjectU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNewFocusedObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20, ___U3CNewFocusedObjectU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CNewFocusedObjectU3Ek__BackingField_4() const { return ___U3CNewFocusedObjectU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CNewFocusedObjectU3Ek__BackingField_4() { return &___U3CNewFocusedObjectU3Ek__BackingField_4; }
	inline void set_U3CNewFocusedObjectU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CNewFocusedObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNewFocusedObjectU3Ek__BackingField_4), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct Handedness_t7DEC811DD30F861923A89CE6011693C3FD00F450 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_t7DEC811DD30F861923A89CE6011693C3FD00F450, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSourceType
struct InputSourceType_t07F0AA4C21CF912137994022185A9CEB0DC0038A 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputSourceType_t07F0AA4C21CF912137994022185A9CEB0DC0038A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.LowLevel.MarkerFlags
struct MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8 
{
public:
	// System.UInt16 Unity.Profiling.LowLevel.MarkerFlags::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF, ___position_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_1() const { return ___position_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF, ___rotation_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::barycentricCoordinate
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___barycentricCoordinate_2;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::distance
	float ___distance_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::triangleIndex
	int32_t ___triangleIndex_4;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::textureCoord
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord_5;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::textureCoord2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord2_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform_7;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::lightmapCoord
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lightmapCoord_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::raycastValid
	bool ___raycastValid_9;
	// UnityEngine.Collider Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collider_10;

public:
	inline static int32_t get_offset_of_point_0() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48, ___point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_point_0() const { return ___point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_point_0() { return &___point_0; }
	inline void set_point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___point_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48, ___normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_normal_1() const { return ___normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_barycentricCoordinate_2() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48, ___barycentricCoordinate_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_barycentricCoordinate_2() const { return ___barycentricCoordinate_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_barycentricCoordinate_2() { return &___barycentricCoordinate_2; }
	inline void set_barycentricCoordinate_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___barycentricCoordinate_2 = value;
	}

	inline static int32_t get_offset_of_distance_3() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48, ___distance_3)); }
	inline float get_distance_3() const { return ___distance_3; }
	inline float* get_address_of_distance_3() { return &___distance_3; }
	inline void set_distance_3(float value)
	{
		___distance_3 = value;
	}

	inline static int32_t get_offset_of_triangleIndex_4() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48, ___triangleIndex_4)); }
	inline int32_t get_triangleIndex_4() const { return ___triangleIndex_4; }
	inline int32_t* get_address_of_triangleIndex_4() { return &___triangleIndex_4; }
	inline void set_triangleIndex_4(int32_t value)
	{
		___triangleIndex_4 = value;
	}

	inline static int32_t get_offset_of_textureCoord_5() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48, ___textureCoord_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_textureCoord_5() const { return ___textureCoord_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_textureCoord_5() { return &___textureCoord_5; }
	inline void set_textureCoord_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___textureCoord_5 = value;
	}

	inline static int32_t get_offset_of_textureCoord2_6() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48, ___textureCoord2_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_textureCoord2_6() const { return ___textureCoord2_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_textureCoord2_6() { return &___textureCoord2_6; }
	inline void set_textureCoord2_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___textureCoord2_6 = value;
	}

	inline static int32_t get_offset_of_transform_7() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48, ___transform_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_transform_7() const { return ___transform_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_transform_7() { return &___transform_7; }
	inline void set_transform_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___transform_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transform_7), (void*)value);
	}

	inline static int32_t get_offset_of_lightmapCoord_8() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48, ___lightmapCoord_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_lightmapCoord_8() const { return ___lightmapCoord_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_lightmapCoord_8() { return &___lightmapCoord_8; }
	inline void set_lightmapCoord_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___lightmapCoord_8 = value;
	}

	inline static int32_t get_offset_of_raycastValid_9() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48, ___raycastValid_9)); }
	inline bool get_raycastValid_9() const { return ___raycastValid_9; }
	inline bool* get_address_of_raycastValid_9() { return &___raycastValid_9; }
	inline void set_raycastValid_9(bool value)
	{
		___raycastValid_9 = value;
	}

	inline static int32_t get_offset_of_collider_10() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48, ___collider_10)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_collider_10() const { return ___collider_10; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_collider_10() { return &___collider_10; }
	inline void set_collider_10(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___collider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collider_10), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___barycentricCoordinate_2;
	float ___distance_3;
	int32_t ___triangleIndex_4;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord_5;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord2_6;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform_7;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lightmapCoord_8;
	int32_t ___raycastValid_9;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collider_10;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___barycentricCoordinate_2;
	float ___distance_3;
	int32_t ___triangleIndex_4;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord_5;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord2_6;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform_7;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lightmapCoord_8;
	int32_t ___raycastValid_9;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collider_10;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Microsoft.MixedReality.Toolkit.Input.PointerBehavior
struct PointerBehavior_tEB5C92E825AD39AEB58A13FA02825550B8237452 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.PointerBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PointerBehavior_tEB5C92E825AD39AEB58A13FA02825550B8237452, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Physics.RayStep
struct RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Origin>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3COriginU3Ek__BackingField_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Terminus>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CTerminusU3Ek__BackingField_4;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Direction>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CDirectionU3Ek__BackingField_5;
	// System.Single Microsoft.MixedReality.Toolkit.Physics.RayStep::<Length>k__BackingField
	float ___U3CLengthU3Ek__BackingField_6;
	// System.Single Microsoft.MixedReality.Toolkit.Physics.RayStep::epsilon
	float ___epsilon_7;

public:
	inline static int32_t get_offset_of_U3COriginU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF, ___U3COriginU3Ek__BackingField_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3COriginU3Ek__BackingField_3() const { return ___U3COriginU3Ek__BackingField_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3COriginU3Ek__BackingField_3() { return &___U3COriginU3Ek__BackingField_3; }
	inline void set_U3COriginU3Ek__BackingField_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3COriginU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTerminusU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF, ___U3CTerminusU3Ek__BackingField_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CTerminusU3Ek__BackingField_4() const { return ___U3CTerminusU3Ek__BackingField_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CTerminusU3Ek__BackingField_4() { return &___U3CTerminusU3Ek__BackingField_4; }
	inline void set_U3CTerminusU3Ek__BackingField_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CTerminusU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CDirectionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF, ___U3CDirectionU3Ek__BackingField_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CDirectionU3Ek__BackingField_5() const { return ___U3CDirectionU3Ek__BackingField_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CDirectionU3Ek__BackingField_5() { return &___U3CDirectionU3Ek__BackingField_5; }
	inline void set_U3CDirectionU3Ek__BackingField_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CDirectionU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CLengthU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF, ___U3CLengthU3Ek__BackingField_6)); }
	inline float get_U3CLengthU3Ek__BackingField_6() const { return ___U3CLengthU3Ek__BackingField_6; }
	inline float* get_address_of_U3CLengthU3Ek__BackingField_6() { return &___U3CLengthU3Ek__BackingField_6; }
	inline void set_U3CLengthU3Ek__BackingField_6(float value)
	{
		___U3CLengthU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_epsilon_7() { return static_cast<int32_t>(offsetof(RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF, ___epsilon_7)); }
	inline float get_epsilon_7() const { return ___epsilon_7; }
	inline float* get_address_of_epsilon_7() { return &___epsilon_7; }
	inline void set_epsilon_7(float value)
	{
		___epsilon_7 = value;
	}
};

struct RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF_StaticFields
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::dist
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dist_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::dir
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dir_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::pos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos_2;

public:
	inline static int32_t get_offset_of_dist_0() { return static_cast<int32_t>(offsetof(RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF_StaticFields, ___dist_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_dist_0() const { return ___dist_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_dist_0() { return &___dist_0; }
	inline void set_dist_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___dist_0 = value;
	}

	inline static int32_t get_offset_of_dir_1() { return static_cast<int32_t>(offsetof(RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF_StaticFields, ___dir_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_dir_1() const { return ___dir_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_dir_1() { return &___dir_1; }
	inline void set_dir_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___dir_1 = value;
	}

	inline static int32_t get_offset_of_pos_2() { return static_cast<int32_t>(offsetof(RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF_StaticFields, ___pos_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_pos_2() const { return ___pos_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_pos_2() { return &___pos_2; }
	inline void set_pos_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___pos_2 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel
struct RecognitionConfidenceLevel_t7355C226968A290D476E9E7314DD9C92C7DC48CF 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RecognitionConfidenceLevel_t7355C226968A290D476E9E7314DD9C92C7DC48CF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType
struct SceneQueryType_t9D3556602D15FDDBCEA26006477115D96A6392C8 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Physics.SceneQueryType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneQueryType_t9D3556602D15FDDBCEA26006477115D96A6392C8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.TouchableEventType
struct TouchableEventType_t2D28ACAA8AD426DB42BD870420477FC6FA86EC08 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.TouchableEventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchableEventType_t2D28ACAA8AD426DB42BD870420477FC6FA86EC08, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.TrackingState
struct TrackingState_t96C3290B2A0194D3BFC33FDBBA047C54CC1F613B 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_t96C3290B2A0194D3BFC33FDBBA047C54CC1F613B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIVertex
struct UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A 
{
public:
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal_1;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___tangent_2;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_3;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv0
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv0_4;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv1
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv1_5;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv2
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv2_6;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv3
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv3_7;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_normal_1() const { return ___normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_tangent_2() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___tangent_2)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_tangent_2() const { return ___tangent_2; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_tangent_2() { return &___tangent_2; }
	inline void set_tangent_2(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___tangent_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___color_3)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_3() const { return ___color_3; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_uv0_4() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv0_4)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv0_4() const { return ___uv0_4; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv0_4() { return &___uv0_4; }
	inline void set_uv0_4(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv0_4 = value;
	}

	inline static int32_t get_offset_of_uv1_5() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv1_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv1_5() const { return ___uv1_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv1_5() { return &___uv1_5; }
	inline void set_uv1_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv1_5 = value;
	}

	inline static int32_t get_offset_of_uv2_6() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv2_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv2_6() const { return ___uv2_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv2_6() { return &___uv2_6; }
	inline void set_uv2_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv2_6 = value;
	}

	inline static int32_t get_offset_of_uv3_7() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv3_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv3_7() const { return ___uv3_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv3_7() { return &___uv3_7; }
	inline void set_uv3_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv3_7 = value;
	}
};

struct UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields
{
public:
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  ___simpleVert_10;

public:
	inline static int32_t get_offset_of_s_DefaultColor_8() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields, ___s_DefaultColor_8)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_s_DefaultColor_8() const { return ___s_DefaultColor_8; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_s_DefaultColor_8() { return &___s_DefaultColor_8; }
	inline void set_s_DefaultColor_8(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___s_DefaultColor_8 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_simpleVert_10() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields, ___simpleVert_10)); }
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  get_simpleVert_10() const { return ___simpleVert_10; }
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A * get_address_of_simpleVert_10() { return &___simpleVert_10; }
	inline void set_simpleVert_10(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  value)
	{
		___simpleVert_10 = value;
	}
};


// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Positions
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___m_Positions_0;
	// System.Collections.Generic.List`1<UnityEngine.Color32> UnityEngine.UI.VertexHelper::m_Colors
	List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * ___m_Colors_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv0S
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Uv0S_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv1S
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Uv1S_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv2S
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Uv2S_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv3S
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Uv3S_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Normals
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___m_Normals_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Tangents
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Tangents_7;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UI.VertexHelper::m_Indices
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___m_Indices_8;
	// System.Boolean UnityEngine.UI.VertexHelper::m_ListsInitalized
	bool ___m_ListsInitalized_11;

public:
	inline static int32_t get_offset_of_m_Positions_0() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Positions_0)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_m_Positions_0() const { return ___m_Positions_0; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_m_Positions_0() { return &___m_Positions_0; }
	inline void set_m_Positions_0(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___m_Positions_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Positions_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Colors_1() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Colors_1)); }
	inline List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * get_m_Colors_1() const { return ___m_Colors_1; }
	inline List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 ** get_address_of_m_Colors_1() { return &___m_Colors_1; }
	inline void set_m_Colors_1(List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * value)
	{
		___m_Colors_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Colors_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv0S_2() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Uv0S_2)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Uv0S_2() const { return ___m_Uv0S_2; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Uv0S_2() { return &___m_Uv0S_2; }
	inline void set_m_Uv0S_2(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Uv0S_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv0S_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv1S_3() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Uv1S_3)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Uv1S_3() const { return ___m_Uv1S_3; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Uv1S_3() { return &___m_Uv1S_3; }
	inline void set_m_Uv1S_3(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Uv1S_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv1S_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv2S_4() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Uv2S_4)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Uv2S_4() const { return ___m_Uv2S_4; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Uv2S_4() { return &___m_Uv2S_4; }
	inline void set_m_Uv2S_4(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Uv2S_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv2S_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv3S_5() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Uv3S_5)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Uv3S_5() const { return ___m_Uv3S_5; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Uv3S_5() { return &___m_Uv3S_5; }
	inline void set_m_Uv3S_5(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Uv3S_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv3S_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Normals_6() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Normals_6)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_m_Normals_6() const { return ___m_Normals_6; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_m_Normals_6() { return &___m_Normals_6; }
	inline void set_m_Normals_6(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___m_Normals_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normals_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tangents_7() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Tangents_7)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Tangents_7() const { return ___m_Tangents_7; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Tangents_7() { return &___m_Tangents_7; }
	inline void set_m_Tangents_7(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Tangents_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tangents_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Indices_8() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Indices_8)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_m_Indices_8() const { return ___m_Indices_8; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_m_Indices_8() { return &___m_Indices_8; }
	inline void set_m_Indices_8(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___m_Indices_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Indices_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_ListsInitalized_11() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_ListsInitalized_11)); }
	inline bool get_m_ListsInitalized_11() const { return ___m_ListsInitalized_11; }
	inline bool* get_address_of_m_ListsInitalized_11() { return &___m_ListsInitalized_11; }
	inline void set_m_ListsInitalized_11(bool value)
	{
		___m_ListsInitalized_11 = value;
	}
};

struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.UI.VertexHelper::s_DefaultTangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___s_DefaultTangent_9;
	// UnityEngine.Vector3 UnityEngine.UI.VertexHelper::s_DefaultNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s_DefaultNormal_10;

public:
	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_s_DefaultNormal_10() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_StaticFields, ___s_DefaultNormal_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_s_DefaultNormal_10() const { return ___s_DefaultNormal_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_s_DefaultNormal_10() { return &___s_DefaultNormal_10; }
	inline void set_s_DefaultNormal_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___s_DefaultNormal_10 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.GazePointerVisibilityStateMachine/GazePointerState
struct GazePointerState_t490802F961B3C1593E72F076E5C6E3A660C0D744 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.GazePointerVisibilityStateMachine/GazePointerState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GazePointerState_t490802F961B3C1593E72F076E5C6E3A660C0D744, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/FramePressState
struct FramePressState_t4BB461B7704D7F72519B36A0C8B3370AB302E7A7 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/FramePressState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FramePressState_t4BB461B7704D7F72519B36A0C8B3370AB302E7A7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  value)
	{
		___m_builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}
};

struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedCompleted_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_com
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};

// Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource
struct BaseGenericInputSource_t3BC0CA373CD52DBE59FF183FDE0B2795BC7FBC9E  : public RuntimeObject
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource::<Pointers>k__BackingField
	IMixedRealityPointerU5BU5D_tBA705C167A9AA88747F0E71091D027919388F80C* ___U3CPointersU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource::<SourceType>k__BackingField
	int32_t ___U3CSourceTypeU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseGenericInputSource_t3BC0CA373CD52DBE59FF183FDE0B2795BC7FBC9E, ___U3CSourceIdU3Ek__BackingField_0)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_0() const { return ___U3CSourceIdU3Ek__BackingField_0; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_0() { return &___U3CSourceIdU3Ek__BackingField_0; }
	inline void set_U3CSourceIdU3Ek__BackingField_0(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseGenericInputSource_t3BC0CA373CD52DBE59FF183FDE0B2795BC7FBC9E, ___U3CSourceNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_1() const { return ___U3CSourceNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_1() { return &___U3CSourceNameU3Ek__BackingField_1; }
	inline void set_U3CSourceNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPointersU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseGenericInputSource_t3BC0CA373CD52DBE59FF183FDE0B2795BC7FBC9E, ___U3CPointersU3Ek__BackingField_2)); }
	inline IMixedRealityPointerU5BU5D_tBA705C167A9AA88747F0E71091D027919388F80C* get_U3CPointersU3Ek__BackingField_2() const { return ___U3CPointersU3Ek__BackingField_2; }
	inline IMixedRealityPointerU5BU5D_tBA705C167A9AA88747F0E71091D027919388F80C** get_address_of_U3CPointersU3Ek__BackingField_2() { return &___U3CPointersU3Ek__BackingField_2; }
	inline void set_U3CPointersU3Ek__BackingField_2(IMixedRealityPointerU5BU5D_tBA705C167A9AA88747F0E71091D027919388F80C* value)
	{
		___U3CPointersU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointersU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseGenericInputSource_t3BC0CA373CD52DBE59FF183FDE0B2795BC7FBC9E, ___U3CSourceTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CSourceTypeU3Ek__BackingField_3() const { return ___U3CSourceTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CSourceTypeU3Ek__BackingField_3() { return &___U3CSourceTypeU3Ek__BackingField_3; }
	inline void set_U3CSourceTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CSourceTypeU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Physics.FocusDetails
struct FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA 
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<RayDistance>k__BackingField
	float ___U3CRayDistanceU3Ek__BackingField_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<Point>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPointU3Ek__BackingField_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<Normal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CNormalU3Ek__BackingField_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<Object>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CObjectU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<LastRaycastHit>k__BackingField
	MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48  ___U3CLastRaycastHitU3Ek__BackingField_4;
	// UnityEngine.EventSystems.RaycastResult Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<LastGraphicsRaycastResult>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<PointLocalSpace>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPointLocalSpaceU3Ek__BackingField_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<NormalLocalSpace>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CNormalLocalSpaceU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CRayDistanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA, ___U3CRayDistanceU3Ek__BackingField_0)); }
	inline float get_U3CRayDistanceU3Ek__BackingField_0() const { return ___U3CRayDistanceU3Ek__BackingField_0; }
	inline float* get_address_of_U3CRayDistanceU3Ek__BackingField_0() { return &___U3CRayDistanceU3Ek__BackingField_0; }
	inline void set_U3CRayDistanceU3Ek__BackingField_0(float value)
	{
		___U3CRayDistanceU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CPointU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA, ___U3CPointU3Ek__BackingField_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CPointU3Ek__BackingField_1() const { return ___U3CPointU3Ek__BackingField_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CPointU3Ek__BackingField_1() { return &___U3CPointU3Ek__BackingField_1; }
	inline void set_U3CPointU3Ek__BackingField_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CPointU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CNormalU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA, ___U3CNormalU3Ek__BackingField_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CNormalU3Ek__BackingField_2() const { return ___U3CNormalU3Ek__BackingField_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CNormalU3Ek__BackingField_2() { return &___U3CNormalU3Ek__BackingField_2; }
	inline void set_U3CNormalU3Ek__BackingField_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CNormalU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CObjectU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA, ___U3CObjectU3Ek__BackingField_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CObjectU3Ek__BackingField_3() const { return ___U3CObjectU3Ek__BackingField_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CObjectU3Ek__BackingField_3() { return &___U3CObjectU3Ek__BackingField_3; }
	inline void set_U3CObjectU3Ek__BackingField_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CObjectU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CObjectU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLastRaycastHitU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA, ___U3CLastRaycastHitU3Ek__BackingField_4)); }
	inline MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48  get_U3CLastRaycastHitU3Ek__BackingField_4() const { return ___U3CLastRaycastHitU3Ek__BackingField_4; }
	inline MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48 * get_address_of_U3CLastRaycastHitU3Ek__BackingField_4() { return &___U3CLastRaycastHitU3Ek__BackingField_4; }
	inline void set_U3CLastRaycastHitU3Ek__BackingField_4(MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48  value)
	{
		___U3CLastRaycastHitU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CLastRaycastHitU3Ek__BackingField_4))->___transform_7), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CLastRaycastHitU3Ek__BackingField_4))->___collider_10), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CLastGraphicsRaycastResultU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA, ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CLastGraphicsRaycastResultU3Ek__BackingField_5() const { return ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CLastGraphicsRaycastResultU3Ek__BackingField_5() { return &___U3CLastGraphicsRaycastResultU3Ek__BackingField_5; }
	inline void set_U3CLastGraphicsRaycastResultU3Ek__BackingField_5(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CLastGraphicsRaycastResultU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CLastGraphicsRaycastResultU3Ek__BackingField_5))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CLastGraphicsRaycastResultU3Ek__BackingField_5))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CPointLocalSpaceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA, ___U3CPointLocalSpaceU3Ek__BackingField_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CPointLocalSpaceU3Ek__BackingField_6() const { return ___U3CPointLocalSpaceU3Ek__BackingField_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CPointLocalSpaceU3Ek__BackingField_6() { return &___U3CPointLocalSpaceU3Ek__BackingField_6; }
	inline void set_U3CPointLocalSpaceU3Ek__BackingField_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CPointLocalSpaceU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CNormalLocalSpaceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA, ___U3CNormalLocalSpaceU3Ek__BackingField_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CNormalLocalSpaceU3Ek__BackingField_7() const { return ___U3CNormalLocalSpaceU3Ek__BackingField_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CNormalLocalSpaceU3Ek__BackingField_7() { return &___U3CNormalLocalSpaceU3Ek__BackingField_7; }
	inline void set_U3CNormalLocalSpaceU3Ek__BackingField_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CNormalLocalSpaceU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Physics.FocusDetails
struct FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA_marshaled_pinvoke
{
	float ___U3CRayDistanceU3Ek__BackingField_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPointU3Ek__BackingField_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CNormalU3Ek__BackingField_2;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CObjectU3Ek__BackingField_3;
	MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48_marshaled_pinvoke ___U3CLastRaycastHitU3Ek__BackingField_4;
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPointLocalSpaceU3Ek__BackingField_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CNormalLocalSpaceU3Ek__BackingField_7;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Physics.FocusDetails
struct FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA_marshaled_com
{
	float ___U3CRayDistanceU3Ek__BackingField_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPointU3Ek__BackingField_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CNormalU3Ek__BackingField_2;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CObjectU3Ek__BackingField_3;
	MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48_marshaled_com ___U3CLastRaycastHitU3Ek__BackingField_4;
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPointLocalSpaceU3Ek__BackingField_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CNormalLocalSpaceU3Ek__BackingField_7;
};

// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.GenericPointer
struct GenericPointer_tD86AC079044CE9DE5F79A1B579F71953A66658DD  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.GenericPointer::controller
	RuntimeObject* ___controller_0;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.GenericPointer::<PointerId>k__BackingField
	uint32_t ___U3CPointerIdU3Ek__BackingField_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.GenericPointer::<PointerName>k__BackingField
	String_t* ___U3CPointerNameU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.GenericPointer::inputSourceParent
	RuntimeObject* ___inputSourceParent_3;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor Microsoft.MixedReality.Toolkit.Input.GenericPointer::<BaseCursor>k__BackingField
	RuntimeObject* ___U3CBaseCursorU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Input.ICursorModifier Microsoft.MixedReality.Toolkit.Input.GenericPointer::<CursorModifier>k__BackingField
	RuntimeObject* ___U3CCursorModifierU3Ek__BackingField_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GenericPointer::isInteractionEnabled
	bool ___isInteractionEnabled_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GenericPointer::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GenericPointer::<IsFocusLocked>k__BackingField
	bool ___U3CIsFocusLockedU3Ek__BackingField_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GenericPointer::<IsTargetPositionLockedOnFocusLock>k__BackingField
	bool ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GenericPointer::<PointerExtent>k__BackingField
	float ___U3CPointerExtentU3Ek__BackingField_10;
	// Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.GenericPointer::<Rays>k__BackingField
	RayStepU5BU5D_tCC36F43D996F3D35CC79E15BA0E3B1C10EBF1DC8* ___U3CRaysU3Ek__BackingField_11;
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Input.GenericPointer::<PrioritizedLayerMasksOverride>k__BackingField
	LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler Microsoft.MixedReality.Toolkit.Input.GenericPointer::<FocusTarget>k__BackingField
	RuntimeObject* ___U3CFocusTargetU3Ek__BackingField_13;
	// Microsoft.MixedReality.Toolkit.Input.IPointerResult Microsoft.MixedReality.Toolkit.Input.GenericPointer::<Result>k__BackingField
	RuntimeObject* ___U3CResultU3Ek__BackingField_14;
	// Microsoft.MixedReality.Toolkit.Physics.IBaseRayStabilizer Microsoft.MixedReality.Toolkit.Input.GenericPointer::<RayStabilizer>k__BackingField
	RuntimeObject* ___U3CRayStabilizerU3Ek__BackingField_15;
	// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType Microsoft.MixedReality.Toolkit.Input.GenericPointer::<SceneQueryType>k__BackingField
	int32_t ___U3CSceneQueryTypeU3Ek__BackingField_16;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GenericPointer::<SphereCastRadius>k__BackingField
	float ___U3CSphereCastRadiusU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_controller_0() { return static_cast<int32_t>(offsetof(GenericPointer_tD86AC079044CE9DE5F79A1B579F71953A66658DD, ___controller_0)); }
	inline RuntimeObject* get_controller_0() const { return ___controller_0; }
	inline RuntimeObject** get_address_of_controller_0() { return &___controller_0; }
	inline void set_controller_0(RuntimeObject* value)
	{
		___controller_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPointerIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GenericPointer_tD86AC079044CE9DE5F79A1B579F71953A66658DD, ___U3CPointerIdU3Ek__BackingField_1)); }
	inline uint32_t get_U3CPointerIdU3Ek__BackingField_1() const { return ___U3CPointerIdU3Ek__BackingField_1; }
	inline uint32_t* get_address_of_U3CPointerIdU3Ek__BackingField_1() { return &___U3CPointerIdU3Ek__BackingField_1; }
	inline void set_U3CPointerIdU3Ek__BackingField_1(uint32_t value)
	{
		___U3CPointerIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CPointerNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GenericPointer_tD86AC079044CE9DE5F79A1B579F71953A66658DD, ___U3CPointerNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CPointerNameU3Ek__BackingField_2() const { return ___U3CPointerNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CPointerNameU3Ek__BackingField_2() { return &___U3CPointerNameU3Ek__BackingField_2; }
	inline void set_U3CPointerNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CPointerNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointerNameU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_inputSourceParent_3() { return static_cast<int32_t>(offsetof(GenericPointer_tD86AC079044CE9DE5F79A1B579F71953A66658DD, ___inputSourceParent_3)); }
	inline RuntimeObject* get_inputSourceParent_3() const { return ___inputSourceParent_3; }
	inline RuntimeObject** get_address_of_inputSourceParent_3() { return &___inputSourceParent_3; }
	inline void set_inputSourceParent_3(RuntimeObject* value)
	{
		___inputSourceParent_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSourceParent_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBaseCursorU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GenericPointer_tD86AC079044CE9DE5F79A1B579F71953A66658DD, ___U3CBaseCursorU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CBaseCursorU3Ek__BackingField_4() const { return ___U3CBaseCursorU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CBaseCursorU3Ek__BackingField_4() { return &___U3CBaseCursorU3Ek__BackingField_4; }
	inline void set_U3CBaseCursorU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CBaseCursorU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBaseCursorU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCursorModifierU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GenericPointer_tD86AC079044CE9DE5F79A1B579F71953A66658DD, ___U3CCursorModifierU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CCursorModifierU3Ek__BackingField_5() const { return ___U3CCursorModifierU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CCursorModifierU3Ek__BackingField_5() { return &___U3CCursorModifierU3Ek__BackingField_5; }
	inline void set_U3CCursorModifierU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CCursorModifierU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCursorModifierU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_isInteractionEnabled_6() { return static_cast<int32_t>(offsetof(GenericPointer_tD86AC079044CE9DE5F79A1B579F71953A66658DD, ___isInteractionEnabled_6)); }
	inline bool get_isInteractionEnabled_6() const { return ___isInteractionEnabled_6; }
	inline bool* get_address_of_isInteractionEnabled_6() { return &___isInteractionEnabled_6; }
	inline void set_isInteractionEnabled_6(bool value)
	{
		___isInteractionEnabled_6 = value;
	}

	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(GenericPointer_tD86AC079044CE9DE5F79A1B579F71953A66658DD, ___U3CIsActiveU3Ek__BackingField_7)); }
	inline bool get_U3CIsActiveU3Ek__BackingField_7() const { return ___U3CIsActiveU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsActiveU3Ek__BackingField_7() { return &___U3CIsActiveU3Ek__BackingField_7; }
	inline void set_U3CIsActiveU3Ek__BackingField_7(bool value)
	{
		___U3CIsActiveU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIsFocusLockedU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(GenericPointer_tD86AC079044CE9DE5F79A1B579F71953A66658DD, ___U3CIsFocusLockedU3Ek__BackingField_8)); }
	inline bool get_U3CIsFocusLockedU3Ek__BackingField_8() const { return ___U3CIsFocusLockedU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsFocusLockedU3Ek__BackingField_8() { return &___U3CIsFocusLockedU3Ek__BackingField_8; }
	inline void set_U3CIsFocusLockedU3Ek__BackingField_8(bool value)
	{
		___U3CIsFocusLockedU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(GenericPointer_tD86AC079044CE9DE5F79A1B579F71953A66658DD, ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9)); }
	inline bool get_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9() const { return ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9() { return &___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9; }
	inline void set_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9(bool value)
	{
		___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CPointerExtentU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(GenericPointer_tD86AC079044CE9DE5F79A1B579F71953A66658DD, ___U3CPointerExtentU3Ek__BackingField_10)); }
	inline float get_U3CPointerExtentU3Ek__BackingField_10() const { return ___U3CPointerExtentU3Ek__BackingField_10; }
	inline float* get_address_of_U3CPointerExtentU3Ek__BackingField_10() { return &___U3CPointerExtentU3Ek__BackingField_10; }
	inline void set_U3CPointerExtentU3Ek__BackingField_10(float value)
	{
		___U3CPointerExtentU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CRaysU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(GenericPointer_tD86AC079044CE9DE5F79A1B579F71953A66658DD, ___U3CRaysU3Ek__BackingField_11)); }
	inline RayStepU5BU5D_tCC36F43D996F3D35CC79E15BA0E3B1C10EBF1DC8* get_U3CRaysU3Ek__BackingField_11() const { return ___U3CRaysU3Ek__BackingField_11; }
	inline RayStepU5BU5D_tCC36F43D996F3D35CC79E15BA0E3B1C10EBF1DC8** get_address_of_U3CRaysU3Ek__BackingField_11() { return &___U3CRaysU3Ek__BackingField_11; }
	inline void set_U3CRaysU3Ek__BackingField_11(RayStepU5BU5D_tCC36F43D996F3D35CC79E15BA0E3B1C10EBF1DC8* value)
	{
		___U3CRaysU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRaysU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(GenericPointer_tD86AC079044CE9DE5F79A1B579F71953A66658DD, ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12)); }
	inline LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* get_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12() const { return ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12; }
	inline LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F** get_address_of_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12() { return &___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12; }
	inline void set_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12(LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* value)
	{
		___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFocusTargetU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(GenericPointer_tD86AC079044CE9DE5F79A1B579F71953A66658DD, ___U3CFocusTargetU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CFocusTargetU3Ek__BackingField_13() const { return ___U3CFocusTargetU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CFocusTargetU3Ek__BackingField_13() { return &___U3CFocusTargetU3Ek__BackingField_13; }
	inline void set_U3CFocusTargetU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CFocusTargetU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFocusTargetU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(GenericPointer_tD86AC079044CE9DE5F79A1B579F71953A66658DD, ___U3CResultU3Ek__BackingField_14)); }
	inline RuntimeObject* get_U3CResultU3Ek__BackingField_14() const { return ___U3CResultU3Ek__BackingField_14; }
	inline RuntimeObject** get_address_of_U3CResultU3Ek__BackingField_14() { return &___U3CResultU3Ek__BackingField_14; }
	inline void set_U3CResultU3Ek__BackingField_14(RuntimeObject* value)
	{
		___U3CResultU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRayStabilizerU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(GenericPointer_tD86AC079044CE9DE5F79A1B579F71953A66658DD, ___U3CRayStabilizerU3Ek__BackingField_15)); }
	inline RuntimeObject* get_U3CRayStabilizerU3Ek__BackingField_15() const { return ___U3CRayStabilizerU3Ek__BackingField_15; }
	inline RuntimeObject** get_address_of_U3CRayStabilizerU3Ek__BackingField_15() { return &___U3CRayStabilizerU3Ek__BackingField_15; }
	inline void set_U3CRayStabilizerU3Ek__BackingField_15(RuntimeObject* value)
	{
		___U3CRayStabilizerU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRayStabilizerU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSceneQueryTypeU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(GenericPointer_tD86AC079044CE9DE5F79A1B579F71953A66658DD, ___U3CSceneQueryTypeU3Ek__BackingField_16)); }
	inline int32_t get_U3CSceneQueryTypeU3Ek__BackingField_16() const { return ___U3CSceneQueryTypeU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CSceneQueryTypeU3Ek__BackingField_16() { return &___U3CSceneQueryTypeU3Ek__BackingField_16; }
	inline void set_U3CSceneQueryTypeU3Ek__BackingField_16(int32_t value)
	{
		___U3CSceneQueryTypeU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CSphereCastRadiusU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(GenericPointer_tD86AC079044CE9DE5F79A1B579F71953A66658DD, ___U3CSphereCastRadiusU3Ek__BackingField_17)); }
	inline float get_U3CSphereCastRadiusU3Ek__BackingField_17() const { return ___U3CSphereCastRadiusU3Ek__BackingField_17; }
	inline float* get_address_of_U3CSphereCastRadiusU3Ek__BackingField_17() { return &___U3CSphereCastRadiusU3Ek__BackingField_17; }
	inline void set_U3CSphereCastRadiusU3Ek__BackingField_17(float value)
	{
		___U3CSphereCastRadiusU3Ek__BackingField_17 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult
struct PointerHitResult_t3D95459BE11F9760912479670FF65B285E5B9D38  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::raycastHit
	MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48  ___raycastHit_0;
	// UnityEngine.EventSystems.RaycastResult Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::graphicsRaycastResult
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___graphicsRaycastResult_1;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::hitObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hitObject_2;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::hitPointOnObject
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hitPointOnObject_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::hitNormalOnObject
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hitNormalOnObject_4;
	// Microsoft.MixedReality.Toolkit.Physics.RayStep Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::ray
	RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF  ___ray_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::rayStepIndex
	int32_t ___rayStepIndex_6;
	// System.Single Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::rayDistance
	float ___rayDistance_7;

public:
	inline static int32_t get_offset_of_raycastHit_0() { return static_cast<int32_t>(offsetof(PointerHitResult_t3D95459BE11F9760912479670FF65B285E5B9D38, ___raycastHit_0)); }
	inline MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48  get_raycastHit_0() const { return ___raycastHit_0; }
	inline MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48 * get_address_of_raycastHit_0() { return &___raycastHit_0; }
	inline void set_raycastHit_0(MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48  value)
	{
		___raycastHit_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___raycastHit_0))->___transform_7), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___raycastHit_0))->___collider_10), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_graphicsRaycastResult_1() { return static_cast<int32_t>(offsetof(PointerHitResult_t3D95459BE11F9760912479670FF65B285E5B9D38, ___graphicsRaycastResult_1)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_graphicsRaycastResult_1() const { return ___graphicsRaycastResult_1; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_graphicsRaycastResult_1() { return &___graphicsRaycastResult_1; }
	inline void set_graphicsRaycastResult_1(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___graphicsRaycastResult_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___graphicsRaycastResult_1))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___graphicsRaycastResult_1))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hitObject_2() { return static_cast<int32_t>(offsetof(PointerHitResult_t3D95459BE11F9760912479670FF65B285E5B9D38, ___hitObject_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hitObject_2() const { return ___hitObject_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hitObject_2() { return &___hitObject_2; }
	inline void set_hitObject_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hitObject_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hitObject_2), (void*)value);
	}

	inline static int32_t get_offset_of_hitPointOnObject_3() { return static_cast<int32_t>(offsetof(PointerHitResult_t3D95459BE11F9760912479670FF65B285E5B9D38, ___hitPointOnObject_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_hitPointOnObject_3() const { return ___hitPointOnObject_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_hitPointOnObject_3() { return &___hitPointOnObject_3; }
	inline void set_hitPointOnObject_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___hitPointOnObject_3 = value;
	}

	inline static int32_t get_offset_of_hitNormalOnObject_4() { return static_cast<int32_t>(offsetof(PointerHitResult_t3D95459BE11F9760912479670FF65B285E5B9D38, ___hitNormalOnObject_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_hitNormalOnObject_4() const { return ___hitNormalOnObject_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_hitNormalOnObject_4() { return &___hitNormalOnObject_4; }
	inline void set_hitNormalOnObject_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___hitNormalOnObject_4 = value;
	}

	inline static int32_t get_offset_of_ray_5() { return static_cast<int32_t>(offsetof(PointerHitResult_t3D95459BE11F9760912479670FF65B285E5B9D38, ___ray_5)); }
	inline RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF  get_ray_5() const { return ___ray_5; }
	inline RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF * get_address_of_ray_5() { return &___ray_5; }
	inline void set_ray_5(RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF  value)
	{
		___ray_5 = value;
	}

	inline static int32_t get_offset_of_rayStepIndex_6() { return static_cast<int32_t>(offsetof(PointerHitResult_t3D95459BE11F9760912479670FF65B285E5B9D38, ___rayStepIndex_6)); }
	inline int32_t get_rayStepIndex_6() const { return ___rayStepIndex_6; }
	inline int32_t* get_address_of_rayStepIndex_6() { return &___rayStepIndex_6; }
	inline void set_rayStepIndex_6(int32_t value)
	{
		___rayStepIndex_6 = value;
	}

	inline static int32_t get_offset_of_rayDistance_7() { return static_cast<int32_t>(offsetof(PointerHitResult_t3D95459BE11F9760912479670FF65B285E5B9D38, ___rayDistance_7)); }
	inline float get_rayDistance_7() const { return ___rayDistance_7; }
	inline float* get_address_of_rayDistance_7() { return &___rayDistance_7; }
	inline void set_rayDistance_7(float value)
	{
		___rayDistance_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences
struct PointerPreferences_t75E8D925545E01FEB8547C84B2D1F5DAF05D8093  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::InputSourceType
	int32_t ___InputSourceType_0;
	// System.Type Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::PointerType
	Type_t * ___PointerType_1;
	// Microsoft.MixedReality.Toolkit.Input.PointerBehavior Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::Left
	int32_t ___Left_2;
	// Microsoft.MixedReality.Toolkit.Input.PointerBehavior Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::Right
	int32_t ___Right_3;
	// Microsoft.MixedReality.Toolkit.Input.PointerBehavior Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::Other
	int32_t ___Other_4;

public:
	inline static int32_t get_offset_of_InputSourceType_0() { return static_cast<int32_t>(offsetof(PointerPreferences_t75E8D925545E01FEB8547C84B2D1F5DAF05D8093, ___InputSourceType_0)); }
	inline int32_t get_InputSourceType_0() const { return ___InputSourceType_0; }
	inline int32_t* get_address_of_InputSourceType_0() { return &___InputSourceType_0; }
	inline void set_InputSourceType_0(int32_t value)
	{
		___InputSourceType_0 = value;
	}

	inline static int32_t get_offset_of_PointerType_1() { return static_cast<int32_t>(offsetof(PointerPreferences_t75E8D925545E01FEB8547C84B2D1F5DAF05D8093, ___PointerType_1)); }
	inline Type_t * get_PointerType_1() const { return ___PointerType_1; }
	inline Type_t ** get_address_of_PointerType_1() { return &___PointerType_1; }
	inline void set_PointerType_1(Type_t * value)
	{
		___PointerType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PointerType_1), (void*)value);
	}

	inline static int32_t get_offset_of_Left_2() { return static_cast<int32_t>(offsetof(PointerPreferences_t75E8D925545E01FEB8547C84B2D1F5DAF05D8093, ___Left_2)); }
	inline int32_t get_Left_2() const { return ___Left_2; }
	inline int32_t* get_address_of_Left_2() { return &___Left_2; }
	inline void set_Left_2(int32_t value)
	{
		___Left_2 = value;
	}

	inline static int32_t get_offset_of_Right_3() { return static_cast<int32_t>(offsetof(PointerPreferences_t75E8D925545E01FEB8547C84B2D1F5DAF05D8093, ___Right_3)); }
	inline int32_t get_Right_3() const { return ___Right_3; }
	inline int32_t* get_address_of_Right_3() { return &___Right_3; }
	inline void set_Right_3(int32_t value)
	{
		___Right_3 = value;
	}

	inline static int32_t get_offset_of_Other_4() { return static_cast<int32_t>(offsetof(PointerPreferences_t75E8D925545E01FEB8547C84B2D1F5DAF05D8093, ___Other_4)); }
	inline int32_t get_Other_4() const { return ___Other_4; }
	inline int32_t* get_address_of_Other_4() { return &___Other_4; }
	inline void set_Other_4(int32_t value)
	{
		___Other_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__77
struct U3CRaiseSourceDetectedU3Ed__77_tE01F382DF1053619EAD0EAAA66A5AF483CF8A74F  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__77::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__77::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Input.GazeProvider Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__77::<>4__this
	GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * ___U3CU3E4__this_2;
	// Unity.Profiling.ProfilerMarker/AutoScope Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__77::<>s__1
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ___U3CU3Es__1_3;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__77::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRaiseSourceDetectedU3Ed__77_tE01F382DF1053619EAD0EAAA66A5AF483CF8A74F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CRaiseSourceDetectedU3Ed__77_tE01F382DF1053619EAD0EAAA66A5AF483CF8A74F, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRaiseSourceDetectedU3Ed__77_tE01F382DF1053619EAD0EAAA66A5AF483CF8A74F, ___U3CU3E4__this_2)); }
	inline GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_3() { return static_cast<int32_t>(offsetof(U3CRaiseSourceDetectedU3Ed__77_tE01F382DF1053619EAD0EAAA66A5AF483CF8A74F, ___U3CU3Es__1_3)); }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  get_U3CU3Es__1_3() const { return ___U3CU3Es__1_3; }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * get_address_of_U3CU3Es__1_3() { return &___U3CU3Es__1_3; }
	inline void set_U3CU3Es__1_3(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  value)
	{
		___U3CU3Es__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CRaiseSourceDetectedU3Ed__77_tE01F382DF1053619EAD0EAAA66A5AF483CF8A74F, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Input.GazeProvider/<Start>d__63
struct U3CStartU3Ed__63_tFB3170C366FB7914205299BE63614F1F4B0A40C3  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.GazeProvider/<Start>d__63::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Input.GazeProvider/<Start>d__63::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Input.GazeProvider Microsoft.MixedReality.Toolkit.Input.GazeProvider/<Start>d__63::<>4__this
	GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Input.GazeProvider/<Start>d__63::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__63_tFB3170C366FB7914205299BE63614F1F4B0A40C3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__63_tFB3170C366FB7914205299BE63614F1F4B0A40C3, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__63_tFB3170C366FB7914205299BE63614F1F4B0A40C3, ___U3CU3E4__this_2)); }
	inline GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__63_tFB3170C366FB7914205299BE63614F1F4B0A40C3, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2
struct U3CStartU3Ed__2_tA608AE85547E154DFD08A56D53F5AC78CCE2251D  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::<>4__this
	InputSystemGlobalHandlerListener_tE39526E6E6789D2FA1576A6AB07D1A3F163458B2 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tA608AE85547E154DFD08A56D53F5AC78CCE2251D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tA608AE85547E154DFD08A56D53F5AC78CCE2251D, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tA608AE85547E154DFD08A56D53F5AC78CCE2251D, ___U3CU3E4__this_2)); }
	inline InputSystemGlobalHandlerListener_tE39526E6E6789D2FA1576A6AB07D1A3F163458B2 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline InputSystemGlobalHandlerListener_tE39526E6E6789D2FA1576A6AB07D1A3F163458B2 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(InputSystemGlobalHandlerListener_tE39526E6E6789D2FA1576A6AB07D1A3F163458B2 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tA608AE85547E154DFD08A56D53F5AC78CCE2251D, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2
struct U3CStartU3Ed__2_t27D2FF7C6730C5A76FA7A33B5BCEA7C175F3705A  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::<>4__this
	InputSystemGlobalListener_tFD9BB9DFC8D3641330B90871932353F182FDB2C2 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t27D2FF7C6730C5A76FA7A33B5BCEA7C175F3705A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t27D2FF7C6730C5A76FA7A33B5BCEA7C175F3705A, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t27D2FF7C6730C5A76FA7A33B5BCEA7C175F3705A, ___U3CU3E4__this_2)); }
	inline InputSystemGlobalListener_tFD9BB9DFC8D3641330B90871932353F182FDB2C2 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline InputSystemGlobalListener_tFD9BB9DFC8D3641330B90871932353F182FDB2C2 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(InputSystemGlobalListener_tFD9BB9DFC8D3641330B90871932353F182FDB2C2 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t27D2FF7C6730C5A76FA7A33B5BCEA7C175F3705A, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16
struct U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>4__this
	MixedRealityInputModule_t0492967672F0C01F27AF4273EFFE8CE0EC32C664 * ___U3CU3E4__this_3;
	// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>s__1
	Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337  ___U3CU3Es__1_4;
	// System.Collections.Generic.KeyValuePair`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<pointerDataEntry>5__2
	KeyValuePair_2_tB056ADCF48A6392925AFCA43342F5E6483191DE0  ___U3CpointerDataEntryU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3, ___U3CU3E2__current_1)); }
	inline RuntimeObject* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3, ___U3CU3E4__this_3)); }
	inline MixedRealityInputModule_t0492967672F0C01F27AF4273EFFE8CE0EC32C664 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline MixedRealityInputModule_t0492967672F0C01F27AF4273EFFE8CE0EC32C664 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(MixedRealityInputModule_t0492967672F0C01F27AF4273EFFE8CE0EC32C664 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_4() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3, ___U3CU3Es__1_4)); }
	inline Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337  get_U3CU3Es__1_4() const { return ___U3CU3Es__1_4; }
	inline Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337 * get_address_of_U3CU3Es__1_4() { return &___U3CU3Es__1_4; }
	inline void set_U3CU3Es__1_4(Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337  value)
	{
		___U3CU3Es__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Es__1_4))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Es__1_4))->___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerDataEntryU3E5__2_5() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3, ___U3CpointerDataEntryU3E5__2_5)); }
	inline KeyValuePair_2_tB056ADCF48A6392925AFCA43342F5E6483191DE0  get_U3CpointerDataEntryU3E5__2_5() const { return ___U3CpointerDataEntryU3E5__2_5; }
	inline KeyValuePair_2_tB056ADCF48A6392925AFCA43342F5E6483191DE0 * get_address_of_U3CpointerDataEntryU3E5__2_5() { return &___U3CpointerDataEntryU3E5__2_5; }
	inline void set_U3CpointerDataEntryU3E5__2_5(KeyValuePair_2_tB056ADCF48A6392925AFCA43342F5E6483191DE0  value)
	{
		___U3CpointerDataEntryU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerDataEntryU3E5__2_5))->___value_1), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData
struct PointerData_t524B70063DAD63AB1B38F1BB8C9EE71E1D04DC1F  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::pointer
	RuntimeObject* ___pointer_0;
	// System.Nullable`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::lastMousePoint3d
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___lastMousePoint3d_1;
	// UnityEngine.EventSystems.PointerEventData/FramePressState Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::nextPressState
	int32_t ___nextPressState_2;
	// UnityEngine.EventSystems.PointerInputModule/MouseState Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::mouseState
	MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * ___mouseState_3;
	// UnityEngine.EventSystems.PointerEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::eventDataLeft
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventDataLeft_4;
	// UnityEngine.EventSystems.PointerEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::eventDataMiddle
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventDataMiddle_5;
	// UnityEngine.EventSystems.PointerEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::eventDataRight
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventDataRight_6;

public:
	inline static int32_t get_offset_of_pointer_0() { return static_cast<int32_t>(offsetof(PointerData_t524B70063DAD63AB1B38F1BB8C9EE71E1D04DC1F, ___pointer_0)); }
	inline RuntimeObject* get_pointer_0() const { return ___pointer_0; }
	inline RuntimeObject** get_address_of_pointer_0() { return &___pointer_0; }
	inline void set_pointer_0(RuntimeObject* value)
	{
		___pointer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointer_0), (void*)value);
	}

	inline static int32_t get_offset_of_lastMousePoint3d_1() { return static_cast<int32_t>(offsetof(PointerData_t524B70063DAD63AB1B38F1BB8C9EE71E1D04DC1F, ___lastMousePoint3d_1)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_lastMousePoint3d_1() const { return ___lastMousePoint3d_1; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_lastMousePoint3d_1() { return &___lastMousePoint3d_1; }
	inline void set_lastMousePoint3d_1(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___lastMousePoint3d_1 = value;
	}

	inline static int32_t get_offset_of_nextPressState_2() { return static_cast<int32_t>(offsetof(PointerData_t524B70063DAD63AB1B38F1BB8C9EE71E1D04DC1F, ___nextPressState_2)); }
	inline int32_t get_nextPressState_2() const { return ___nextPressState_2; }
	inline int32_t* get_address_of_nextPressState_2() { return &___nextPressState_2; }
	inline void set_nextPressState_2(int32_t value)
	{
		___nextPressState_2 = value;
	}

	inline static int32_t get_offset_of_mouseState_3() { return static_cast<int32_t>(offsetof(PointerData_t524B70063DAD63AB1B38F1BB8C9EE71E1D04DC1F, ___mouseState_3)); }
	inline MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * get_mouseState_3() const { return ___mouseState_3; }
	inline MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 ** get_address_of_mouseState_3() { return &___mouseState_3; }
	inline void set_mouseState_3(MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * value)
	{
		___mouseState_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mouseState_3), (void*)value);
	}

	inline static int32_t get_offset_of_eventDataLeft_4() { return static_cast<int32_t>(offsetof(PointerData_t524B70063DAD63AB1B38F1BB8C9EE71E1D04DC1F, ___eventDataLeft_4)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_eventDataLeft_4() const { return ___eventDataLeft_4; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_eventDataLeft_4() { return &___eventDataLeft_4; }
	inline void set_eventDataLeft_4(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___eventDataLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventDataLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_eventDataMiddle_5() { return static_cast<int32_t>(offsetof(PointerData_t524B70063DAD63AB1B38F1BB8C9EE71E1D04DC1F, ___eventDataMiddle_5)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_eventDataMiddle_5() const { return ___eventDataMiddle_5; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_eventDataMiddle_5() { return &___eventDataMiddle_5; }
	inline void set_eventDataMiddle_5(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___eventDataMiddle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventDataMiddle_5), (void*)value);
	}

	inline static int32_t get_offset_of_eventDataRight_6() { return static_cast<int32_t>(offsetof(PointerData_t524B70063DAD63AB1B38F1BB8C9EE71E1D04DC1F, ___eventDataRight_6)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_eventDataRight_6() const { return ___eventDataRight_6; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_eventDataRight_6() { return &___eventDataRight_6; }
	inline void set_eventDataRight_6(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___eventDataRight_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventDataRight_6), (void*)value);
	}
};


// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<UnityEngine.RectTransform>
struct Func_1_t9C6E028D7DEC6AB52806A10D996C478296C6EAAA  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputEventData
struct BaseInputEventData_t33EF0985CB22B5C3318A0464BDBF0BDF3F9B7411  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<EventTime>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CEventTimeU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<MixedRealityInputAction>k__BackingField
	MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  ___U3CMixedRealityInputActionU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CEventTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseInputEventData_t33EF0985CB22B5C3318A0464BDBF0BDF3F9B7411, ___U3CEventTimeU3Ek__BackingField_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CEventTimeU3Ek__BackingField_2() const { return ___U3CEventTimeU3Ek__BackingField_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CEventTimeU3Ek__BackingField_2() { return &___U3CEventTimeU3Ek__BackingField_2; }
	inline void set_U3CEventTimeU3Ek__BackingField_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CEventTimeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseInputEventData_t33EF0985CB22B5C3318A0464BDBF0BDF3F9B7411, ___U3CInputSourceU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_3() const { return ___U3CInputSourceU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_3() { return &___U3CInputSourceU3Ek__BackingField_3; }
	inline void set_U3CInputSourceU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMixedRealityInputActionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseInputEventData_t33EF0985CB22B5C3318A0464BDBF0BDF3F9B7411, ___U3CMixedRealityInputActionU3Ek__BackingField_4)); }
	inline MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  get_U3CMixedRealityInputActionU3Ek__BackingField_4() const { return ___U3CMixedRealityInputActionU3Ek__BackingField_4; }
	inline MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A * get_address_of_U3CMixedRealityInputActionU3Ek__BackingField_4() { return &___U3CMixedRealityInputActionU3Ek__BackingField_4; }
	inline void set_U3CMixedRealityInputActionU3Ek__BackingField_4(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  value)
	{
		___U3CMixedRealityInputActionU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CMixedRealityInputActionU3Ek__BackingField_4))->___description_2), (void*)NULL);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_tB5EB0ECFA6A91657370C348F8F7862ADC9AE44EB 
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::localizationKey
	String_t* ___localizationKey_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::localizedKeyword
	String_t* ___localizedKeyword_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::keyword
	String_t* ___keyword_2;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.SpeechCommands::keyCode
	int32_t ___keyCode_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.SpeechCommands::action
	MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  ___action_4;

public:
	inline static int32_t get_offset_of_localizationKey_0() { return static_cast<int32_t>(offsetof(SpeechCommands_tB5EB0ECFA6A91657370C348F8F7862ADC9AE44EB, ___localizationKey_0)); }
	inline String_t* get_localizationKey_0() const { return ___localizationKey_0; }
	inline String_t** get_address_of_localizationKey_0() { return &___localizationKey_0; }
	inline void set_localizationKey_0(String_t* value)
	{
		___localizationKey_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localizationKey_0), (void*)value);
	}

	inline static int32_t get_offset_of_localizedKeyword_1() { return static_cast<int32_t>(offsetof(SpeechCommands_tB5EB0ECFA6A91657370C348F8F7862ADC9AE44EB, ___localizedKeyword_1)); }
	inline String_t* get_localizedKeyword_1() const { return ___localizedKeyword_1; }
	inline String_t** get_address_of_localizedKeyword_1() { return &___localizedKeyword_1; }
	inline void set_localizedKeyword_1(String_t* value)
	{
		___localizedKeyword_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localizedKeyword_1), (void*)value);
	}

	inline static int32_t get_offset_of_keyword_2() { return static_cast<int32_t>(offsetof(SpeechCommands_tB5EB0ECFA6A91657370C348F8F7862ADC9AE44EB, ___keyword_2)); }
	inline String_t* get_keyword_2() const { return ___keyword_2; }
	inline String_t** get_address_of_keyword_2() { return &___keyword_2; }
	inline void set_keyword_2(String_t* value)
	{
		___keyword_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyword_2), (void*)value);
	}

	inline static int32_t get_offset_of_keyCode_3() { return static_cast<int32_t>(offsetof(SpeechCommands_tB5EB0ECFA6A91657370C348F8F7862ADC9AE44EB, ___keyCode_3)); }
	inline int32_t get_keyCode_3() const { return ___keyCode_3; }
	inline int32_t* get_address_of_keyCode_3() { return &___keyCode_3; }
	inline void set_keyCode_3(int32_t value)
	{
		___keyCode_3 = value;
	}

	inline static int32_t get_offset_of_action_4() { return static_cast<int32_t>(offsetof(SpeechCommands_tB5EB0ECFA6A91657370C348F8F7862ADC9AE44EB, ___action_4)); }
	inline MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  get_action_4() const { return ___action_4; }
	inline MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A * get_address_of_action_4() { return &___action_4; }
	inline void set_action_4(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  value)
	{
		___action_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___action_4))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_tB5EB0ECFA6A91657370C348F8F7862ADC9AE44EB_marshaled_pinvoke
{
	char* ___localizationKey_0;
	char* ___localizedKeyword_1;
	char* ___keyword_2;
	int32_t ___keyCode_3;
	MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_marshaled_pinvoke ___action_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_tB5EB0ECFA6A91657370C348F8F7862ADC9AE44EB_marshaled_com
{
	Il2CppChar* ___localizationKey_0;
	Il2CppChar* ___localizedKeyword_1;
	Il2CppChar* ___keyword_2;
	int32_t ___keyCode_3;
	MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_marshaled_com ___action_4;
};

// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData
struct PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::Pointer
	RuntimeObject* ___Pointer_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::<StartPoint>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CStartPointU3Ek__BackingField_1;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::<PreviousPointerTarget>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CPreviousPointerTargetU3Ek__BackingField_2;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::<RayStepIndex>k__BackingField
	int32_t ___U3CRayStepIndexU3Ek__BackingField_3;
	// UnityEngine.EventSystems.PointerEventData Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::graphicData
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___graphicData_4;
	// Microsoft.MixedReality.Toolkit.Physics.FocusDetails Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::focusDetails
	FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA  ___focusDetails_5;

public:
	inline static int32_t get_offset_of_Pointer_0() { return static_cast<int32_t>(offsetof(PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1, ___Pointer_0)); }
	inline RuntimeObject* get_Pointer_0() const { return ___Pointer_0; }
	inline RuntimeObject** get_address_of_Pointer_0() { return &___Pointer_0; }
	inline void set_Pointer_0(RuntimeObject* value)
	{
		___Pointer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Pointer_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStartPointU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1, ___U3CStartPointU3Ek__BackingField_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CStartPointU3Ek__BackingField_1() const { return ___U3CStartPointU3Ek__BackingField_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CStartPointU3Ek__BackingField_1() { return &___U3CStartPointU3Ek__BackingField_1; }
	inline void set_U3CStartPointU3Ek__BackingField_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CStartPointU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CPreviousPointerTargetU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1, ___U3CPreviousPointerTargetU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CPreviousPointerTargetU3Ek__BackingField_2() const { return ___U3CPreviousPointerTargetU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CPreviousPointerTargetU3Ek__BackingField_2() { return &___U3CPreviousPointerTargetU3Ek__BackingField_2; }
	inline void set_U3CPreviousPointerTargetU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CPreviousPointerTargetU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPreviousPointerTargetU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRayStepIndexU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1, ___U3CRayStepIndexU3Ek__BackingField_3)); }
	inline int32_t get_U3CRayStepIndexU3Ek__BackingField_3() const { return ___U3CRayStepIndexU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CRayStepIndexU3Ek__BackingField_3() { return &___U3CRayStepIndexU3Ek__BackingField_3; }
	inline void set_U3CRayStepIndexU3Ek__BackingField_3(int32_t value)
	{
		___U3CRayStepIndexU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_graphicData_4() { return static_cast<int32_t>(offsetof(PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1, ___graphicData_4)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_graphicData_4() const { return ___graphicData_4; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_graphicData_4() { return &___graphicData_4; }
	inline void set_graphicData_4(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___graphicData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphicData_4), (void*)value);
	}

	inline static int32_t get_offset_of_focusDetails_5() { return static_cast<int32_t>(offsetof(PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1, ___focusDetails_5)); }
	inline FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA  get_focusDetails_5() const { return ___focusDetails_5; }
	inline FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * get_address_of_focusDetails_5() { return &___focusDetails_5; }
	inline void set_focusDetails_5(FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA  value)
	{
		___focusDetails_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___focusDetails_5))->___U3CObjectU3Ek__BackingField_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___focusDetails_5))->___U3CLastRaycastHitU3Ek__BackingField_4))->___transform_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___focusDetails_5))->___U3CLastRaycastHitU3Ek__BackingField_4))->___collider_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___focusDetails_5))->___U3CLastGraphicsRaycastResultU3Ek__BackingField_5))->___m_GameObject_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___focusDetails_5))->___U3CLastGraphicsRaycastResultU3Ek__BackingField_5))->___module_1), (void*)NULL);
		#endif
	}
};

struct PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::UpdateHitPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateHitPerfMarker_6;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::UpdateFocusLockedHitPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateFocusLockedHitPerfMarker_7;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::ResetFocusedObjectPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ResetFocusedObjectPerfMarker_8;

public:
	inline static int32_t get_offset_of_UpdateHitPerfMarker_6() { return static_cast<int32_t>(offsetof(PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1_StaticFields, ___UpdateHitPerfMarker_6)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateHitPerfMarker_6() const { return ___UpdateHitPerfMarker_6; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateHitPerfMarker_6() { return &___UpdateHitPerfMarker_6; }
	inline void set_UpdateHitPerfMarker_6(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateHitPerfMarker_6 = value;
	}

	inline static int32_t get_offset_of_UpdateFocusLockedHitPerfMarker_7() { return static_cast<int32_t>(offsetof(PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1_StaticFields, ___UpdateFocusLockedHitPerfMarker_7)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateFocusLockedHitPerfMarker_7() const { return ___UpdateFocusLockedHitPerfMarker_7; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateFocusLockedHitPerfMarker_7() { return &___UpdateFocusLockedHitPerfMarker_7; }
	inline void set_UpdateFocusLockedHitPerfMarker_7(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateFocusLockedHitPerfMarker_7 = value;
	}

	inline static int32_t get_offset_of_ResetFocusedObjectPerfMarker_8() { return static_cast<int32_t>(offsetof(PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1_StaticFields, ___ResetFocusedObjectPerfMarker_8)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ResetFocusedObjectPerfMarker_8() const { return ___ResetFocusedObjectPerfMarker_8; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ResetFocusedObjectPerfMarker_8() { return &___ResetFocusedObjectPerfMarker_8; }
	inline void set_ResetFocusedObjectPerfMarker_8(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ResetFocusedObjectPerfMarker_8 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer
struct InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C  : public GenericPointer_tD86AC079044CE9DE5F79A1B579F71953A66658DD
{
public:
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::gazeTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___gazeTransform_18;
	// Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::stabilizer
	BaseRayStabilizer_tB369E9BC56501D9F365E18B05F69FFA840099E53 * ___stabilizer_19;
	// Microsoft.MixedReality.Toolkit.Input.GazeProvider Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::gazeProvider
	GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * ___gazeProvider_20;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::<Controller>k__BackingField
	RuntimeObject* ___U3CControllerU3Ek__BackingField_21;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::<InputSourceParent>k__BackingField
	RuntimeObject* ___U3CInputSourceParentU3Ek__BackingField_22;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::pointerExtent
	float ___pointerExtent_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::isDown
	bool ___isDown_24;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::currentInputSource
	RuntimeObject* ___currentInputSource_25;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::currentHandedness
	uint8_t ___currentHandedness_26;

public:
	inline static int32_t get_offset_of_gazeTransform_18() { return static_cast<int32_t>(offsetof(InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C, ___gazeTransform_18)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_gazeTransform_18() const { return ___gazeTransform_18; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_gazeTransform_18() { return &___gazeTransform_18; }
	inline void set_gazeTransform_18(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___gazeTransform_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeTransform_18), (void*)value);
	}

	inline static int32_t get_offset_of_stabilizer_19() { return static_cast<int32_t>(offsetof(InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C, ___stabilizer_19)); }
	inline BaseRayStabilizer_tB369E9BC56501D9F365E18B05F69FFA840099E53 * get_stabilizer_19() const { return ___stabilizer_19; }
	inline BaseRayStabilizer_tB369E9BC56501D9F365E18B05F69FFA840099E53 ** get_address_of_stabilizer_19() { return &___stabilizer_19; }
	inline void set_stabilizer_19(BaseRayStabilizer_tB369E9BC56501D9F365E18B05F69FFA840099E53 * value)
	{
		___stabilizer_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stabilizer_19), (void*)value);
	}

	inline static int32_t get_offset_of_gazeProvider_20() { return static_cast<int32_t>(offsetof(InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C, ___gazeProvider_20)); }
	inline GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * get_gazeProvider_20() const { return ___gazeProvider_20; }
	inline GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 ** get_address_of_gazeProvider_20() { return &___gazeProvider_20; }
	inline void set_gazeProvider_20(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * value)
	{
		___gazeProvider_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeProvider_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CControllerU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C, ___U3CControllerU3Ek__BackingField_21)); }
	inline RuntimeObject* get_U3CControllerU3Ek__BackingField_21() const { return ___U3CControllerU3Ek__BackingField_21; }
	inline RuntimeObject** get_address_of_U3CControllerU3Ek__BackingField_21() { return &___U3CControllerU3Ek__BackingField_21; }
	inline void set_U3CControllerU3Ek__BackingField_21(RuntimeObject* value)
	{
		___U3CControllerU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CControllerU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInputSourceParentU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C, ___U3CInputSourceParentU3Ek__BackingField_22)); }
	inline RuntimeObject* get_U3CInputSourceParentU3Ek__BackingField_22() const { return ___U3CInputSourceParentU3Ek__BackingField_22; }
	inline RuntimeObject** get_address_of_U3CInputSourceParentU3Ek__BackingField_22() { return &___U3CInputSourceParentU3Ek__BackingField_22; }
	inline void set_U3CInputSourceParentU3Ek__BackingField_22(RuntimeObject* value)
	{
		___U3CInputSourceParentU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceParentU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_pointerExtent_23() { return static_cast<int32_t>(offsetof(InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C, ___pointerExtent_23)); }
	inline float get_pointerExtent_23() const { return ___pointerExtent_23; }
	inline float* get_address_of_pointerExtent_23() { return &___pointerExtent_23; }
	inline void set_pointerExtent_23(float value)
	{
		___pointerExtent_23 = value;
	}

	inline static int32_t get_offset_of_isDown_24() { return static_cast<int32_t>(offsetof(InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C, ___isDown_24)); }
	inline bool get_isDown_24() const { return ___isDown_24; }
	inline bool* get_address_of_isDown_24() { return &___isDown_24; }
	inline void set_isDown_24(bool value)
	{
		___isDown_24 = value;
	}

	inline static int32_t get_offset_of_currentInputSource_25() { return static_cast<int32_t>(offsetof(InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C, ___currentInputSource_25)); }
	inline RuntimeObject* get_currentInputSource_25() const { return ___currentInputSource_25; }
	inline RuntimeObject** get_address_of_currentInputSource_25() { return &___currentInputSource_25; }
	inline void set_currentInputSource_25(RuntimeObject* value)
	{
		___currentInputSource_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentInputSource_25), (void*)value);
	}

	inline static int32_t get_offset_of_currentHandedness_26() { return static_cast<int32_t>(offsetof(InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C, ___currentHandedness_26)); }
	inline uint8_t get_currentHandedness_26() const { return ___currentHandedness_26; }
	inline uint8_t* get_address_of_currentHandedness_26() { return &___currentHandedness_26; }
	inline void set_currentHandedness_26(uint8_t value)
	{
		___currentHandedness_26 = value;
	}
};

struct InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::OnPreSceneQueryPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnPreSceneQueryPerfMarker_27;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::OnPostSceneQueryPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnPostSceneQueryPerfMarker_28;

public:
	inline static int32_t get_offset_of_OnPreSceneQueryPerfMarker_27() { return static_cast<int32_t>(offsetof(InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C_StaticFields, ___OnPreSceneQueryPerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnPreSceneQueryPerfMarker_27() const { return ___OnPreSceneQueryPerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnPreSceneQueryPerfMarker_27() { return &___OnPreSceneQueryPerfMarker_27; }
	inline void set_OnPreSceneQueryPerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnPreSceneQueryPerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_OnPostSceneQueryPerfMarker_28() { return static_cast<int32_t>(offsetof(InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C_StaticFields, ___OnPostSceneQueryPerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnPostSceneQueryPerfMarker_28() const { return ___OnPostSceneQueryPerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnPostSceneQueryPerfMarker_28() { return &___OnPostSceneQueryPerfMarker_28; }
	inline void set_OnPostSceneQueryPerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnPostSceneQueryPerfMarker_28 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4
struct U3CEnsureInputSystemValidU3Ed__4_tDFF204F4A209F39BBED9FF447E84E291A9691B6F  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::<>4__this
	InputSystemGlobalHandlerListener_tE39526E6E6789D2FA1576A6AB07D1A3F163458B2 * ___U3CU3E4__this_2;
	// System.Object Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::<>u__1
	RuntimeObject * ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnsureInputSystemValidU3Ed__4_tDFF204F4A209F39BBED9FF447E84E291A9691B6F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CEnsureInputSystemValidU3Ed__4_tDFF204F4A209F39BBED9FF447E84E291A9691B6F, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CEnsureInputSystemValidU3Ed__4_tDFF204F4A209F39BBED9FF447E84E291A9691B6F, ___U3CU3E4__this_2)); }
	inline InputSystemGlobalHandlerListener_tE39526E6E6789D2FA1576A6AB07D1A3F163458B2 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline InputSystemGlobalHandlerListener_tE39526E6E6789D2FA1576A6AB07D1A3F163458B2 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(InputSystemGlobalHandlerListener_tE39526E6E6789D2FA1576A6AB07D1A3F163458B2 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CEnsureInputSystemValidU3Ed__4_tDFF204F4A209F39BBED9FF447E84E291A9691B6F, ___U3CU3Eu__1_3)); }
	inline RuntimeObject * get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(RuntimeObject * value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Eu__1_3), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4
struct U3CEnsureInputSystemValidU3Ed__4_t483A21CE125D456473D51EC11F18208F19416798  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::<>4__this
	InputSystemGlobalListener_tFD9BB9DFC8D3641330B90871932353F182FDB2C2 * ___U3CU3E4__this_2;
	// System.Object Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::<>u__1
	RuntimeObject * ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnsureInputSystemValidU3Ed__4_t483A21CE125D456473D51EC11F18208F19416798, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CEnsureInputSystemValidU3Ed__4_t483A21CE125D456473D51EC11F18208F19416798, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CEnsureInputSystemValidU3Ed__4_t483A21CE125D456473D51EC11F18208F19416798, ___U3CU3E4__this_2)); }
	inline InputSystemGlobalListener_tFD9BB9DFC8D3641330B90871932353F182FDB2C2 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline InputSystemGlobalListener_tFD9BB9DFC8D3641330B90871932353F182FDB2C2 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(InputSystemGlobalListener_tFD9BB9DFC8D3641330B90871932353F182FDB2C2 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CEnsureInputSystemValidU3Ed__4_t483A21CE125D456473D51EC11F18208F19416798, ___U3CU3Eu__1_3)); }
	inline RuntimeObject * get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(RuntimeObject * value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Eu__1_3), (void*)value);
	}
};


// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___willRenderCanvases_5;

public:
	inline static int32_t get_offset_of_preWillRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___preWillRenderCanvases_4)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_preWillRenderCanvases_4() const { return ___preWillRenderCanvases_4; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_preWillRenderCanvases_4() { return &___preWillRenderCanvases_4; }
	inline void set_preWillRenderCanvases_4(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___preWillRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___preWillRenderCanvases_4), (void*)value);
	}

	inline static int32_t get_offset_of_willRenderCanvases_5() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___willRenderCanvases_5)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_willRenderCanvases_5() const { return ___willRenderCanvases_5; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_willRenderCanvases_5() { return &___willRenderCanvases_5; }
	inline void set_willRenderCanvases_5(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___willRenderCanvases_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_5), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.DictationEventData
struct DictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9  : public BaseInputEventData_t33EF0985CB22B5C3318A0464BDBF0BDF3F9B7411
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Input.DictationEventData::<DictationResult>k__BackingField
	String_t* ___U3CDictationResultU3Ek__BackingField_5;
	// UnityEngine.AudioClip Microsoft.MixedReality.Toolkit.Input.DictationEventData::<DictationAudioClip>k__BackingField
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___U3CDictationAudioClipU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CDictationResultU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9, ___U3CDictationResultU3Ek__BackingField_5)); }
	inline String_t* get_U3CDictationResultU3Ek__BackingField_5() const { return ___U3CDictationResultU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CDictationResultU3Ek__BackingField_5() { return &___U3CDictationResultU3Ek__BackingField_5; }
	inline void set_U3CDictationResultU3Ek__BackingField_5(String_t* value)
	{
		___U3CDictationResultU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDictationResultU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDictationAudioClipU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9, ___U3CDictationAudioClipU3Ek__BackingField_6)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_U3CDictationAudioClipU3Ek__BackingField_6() const { return ___U3CDictationAudioClipU3Ek__BackingField_6; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_U3CDictationAudioClipU3Ek__BackingField_6() { return &___U3CDictationAudioClipU3Ek__BackingField_6; }
	inline void set_U3CDictationAudioClipU3Ek__BackingField_6(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___U3CDictationAudioClipU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDictationAudioClipU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017  : public BaseInputEventData_t33EF0985CB22B5C3318A0464BDBF0BDF3F9B7411
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.InputEventData::<Handedness>k__BackingField
	uint8_t ___U3CHandednessU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CHandednessU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017, ___U3CHandednessU3Ek__BackingField_5)); }
	inline uint8_t get_U3CHandednessU3Ek__BackingField_5() const { return ___U3CHandednessU3Ek__BackingField_5; }
	inline uint8_t* get_address_of_U3CHandednessU3Ek__BackingField_5() { return &___U3CHandednessU3Ek__BackingField_5; }
	inline void set_U3CHandednessU3Ek__BackingField_5(uint8_t value)
	{
		___U3CHandednessU3Ek__BackingField_5 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.SourceStateEventData
struct SourceStateEventData_tE68D8C1FF7799BB758CA7436749CAC8052D71D77  : public BaseInputEventData_t33EF0985CB22B5C3318A0464BDBF0BDF3F9B7411
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.SourceStateEventData::<Controller>k__BackingField
	RuntimeObject* ___U3CControllerU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CControllerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SourceStateEventData_tE68D8C1FF7799BB758CA7436749CAC8052D71D77, ___U3CControllerU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CControllerU3Ek__BackingField_5() const { return ___U3CControllerU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CControllerU3Ek__BackingField_5() { return &___U3CControllerU3Ek__BackingField_5; }
	inline void set_U3CControllerU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CControllerU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CControllerU3Ek__BackingField_5), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.SpeechEventData
struct SpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA  : public BaseInputEventData_t33EF0985CB22B5C3318A0464BDBF0BDF3F9B7411
{
public:
	// System.TimeSpan Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<PhraseDuration>k__BackingField
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___U3CPhraseDurationU3Ek__BackingField_5;
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<PhraseStartTime>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CPhraseStartTimeU3Ek__BackingField_6;
	// Microsoft.MixedReality.Toolkit.Input.SpeechCommands Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<Command>k__BackingField
	SpeechCommands_tB5EB0ECFA6A91657370C348F8F7862ADC9AE44EB  ___U3CCommandU3Ek__BackingField_7;
	// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<Confidence>k__BackingField
	int32_t ___U3CConfidenceU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CPhraseDurationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA, ___U3CPhraseDurationU3Ek__BackingField_5)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_U3CPhraseDurationU3Ek__BackingField_5() const { return ___U3CPhraseDurationU3Ek__BackingField_5; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_U3CPhraseDurationU3Ek__BackingField_5() { return &___U3CPhraseDurationU3Ek__BackingField_5; }
	inline void set_U3CPhraseDurationU3Ek__BackingField_5(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___U3CPhraseDurationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CPhraseStartTimeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA, ___U3CPhraseStartTimeU3Ek__BackingField_6)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CPhraseStartTimeU3Ek__BackingField_6() const { return ___U3CPhraseStartTimeU3Ek__BackingField_6; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CPhraseStartTimeU3Ek__BackingField_6() { return &___U3CPhraseStartTimeU3Ek__BackingField_6; }
	inline void set_U3CPhraseStartTimeU3Ek__BackingField_6(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CPhraseStartTimeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CCommandU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA, ___U3CCommandU3Ek__BackingField_7)); }
	inline SpeechCommands_tB5EB0ECFA6A91657370C348F8F7862ADC9AE44EB  get_U3CCommandU3Ek__BackingField_7() const { return ___U3CCommandU3Ek__BackingField_7; }
	inline SpeechCommands_tB5EB0ECFA6A91657370C348F8F7862ADC9AE44EB * get_address_of_U3CCommandU3Ek__BackingField_7() { return &___U3CCommandU3Ek__BackingField_7; }
	inline void set_U3CCommandU3Ek__BackingField_7(SpeechCommands_tB5EB0ECFA6A91657370C348F8F7862ADC9AE44EB  value)
	{
		___U3CCommandU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCommandU3Ek__BackingField_7))->___localizationKey_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCommandU3Ek__BackingField_7))->___localizedKeyword_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCommandU3Ek__BackingField_7))->___keyword_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CCommandU3Ek__BackingField_7))->___action_4))->___description_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CConfidenceU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA, ___U3CConfidenceU3Ek__BackingField_8)); }
	inline int32_t get_U3CConfidenceU3Ek__BackingField_8() const { return ___U3CConfidenceU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CConfidenceU3Ek__BackingField_8() { return &___U3CConfidenceU3Ek__BackingField_8; }
	inline void set_U3CConfidenceU3Ek__BackingField_8(int32_t value)
	{
		___U3CConfidenceU3Ek__BackingField_8 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct InputEventData_1_t06D41EEA2E71B9C529589C04485505606369BE1C  : public InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	RuntimeObject* ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_t06D41EEA2E71B9C529589C04485505606369BE1C, ___U3CInputDataU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputDataU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo>
struct InputEventData_1_t2D9D7DD999D58E4BCE0A36B14B5C928399CDAE3F  : public InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	HandMeshInfo_t4B3F81C233038F537CD46AF23300BB3C6B4B1FFA * ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_t2D9D7DD999D58E4BCE0A36B14B5C928399CDAE3F, ___U3CInputDataU3Ek__BackingField_6)); }
	inline HandMeshInfo_t4B3F81C233038F537CD46AF23300BB3C6B4B1FFA * get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline HandMeshInfo_t4B3F81C233038F537CD46AF23300BB3C6B4B1FFA ** get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(HandMeshInfo_t4B3F81C233038F537CD46AF23300BB3C6B4B1FFA * value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputDataU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct InputEventData_1_tA33647F64CCCCF6BC521D4100BE48B24C6BFBD3B  : public InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_tA33647F64CCCCF6BC521D4100BE48B24C6BFBD3B, ___U3CInputDataU3Ek__BackingField_6)); }
	inline MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF * get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Quaternion>
struct InputEventData_1_t7F018120437B38470980D7DC0A7FDBA6732ABF30  : public InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_t7F018120437B38470980D7DC0A7FDBA6732ABF30, ___U3CInputDataU3Ek__BackingField_6)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single>
struct InputEventData_1_t14738FF3BEDDEC90DB73AC6834680FA99924E98E  : public InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	float ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_t14738FF3BEDDEC90DB73AC6834680FA99924E98E, ___U3CInputDataU3Ek__BackingField_6)); }
	inline float get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline float* get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(float value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2>
struct InputEventData_1_tE0571359448813352C91BED8440BD824D08412F7  : public InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_tE0571359448813352C91BED8440BD824D08412F7, ___U3CInputDataU3Ek__BackingField_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3>
struct InputEventData_1_t3CC0187E4344201378E113CFC270CB5C4AF36D86  : public InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_t3CC0187E4344201378E113CFC270CB5C4AF36D86, ___U3CInputDataU3Ek__BackingField_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct SourcePoseEventData_1_t84A604B2C5FDE7D0F3E4DE6FF23EA9C2773CC565  : public SourceStateEventData_tE68D8C1FF7799BB758CA7436749CAC8052D71D77
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1::<SourceData>k__BackingField
	MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  ___U3CSourceDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CSourceDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourcePoseEventData_1_t84A604B2C5FDE7D0F3E4DE6FF23EA9C2773CC565, ___U3CSourceDataU3Ek__BackingField_6)); }
	inline MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  get_U3CSourceDataU3Ek__BackingField_6() const { return ___U3CSourceDataU3Ek__BackingField_6; }
	inline MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF * get_address_of_U3CSourceDataU3Ek__BackingField_6() { return &___U3CSourceDataU3Ek__BackingField_6; }
	inline void set_U3CSourceDataU3Ek__BackingField_6(MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  value)
	{
		___U3CSourceDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion>
struct SourcePoseEventData_1_t311DB5A8EE84E186C29732ED88DB5994EB2CAD1D  : public SourceStateEventData_tE68D8C1FF7799BB758CA7436749CAC8052D71D77
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1::<SourceData>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CSourceDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CSourceDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourcePoseEventData_1_t311DB5A8EE84E186C29732ED88DB5994EB2CAD1D, ___U3CSourceDataU3Ek__BackingField_6)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CSourceDataU3Ek__BackingField_6() const { return ___U3CSourceDataU3Ek__BackingField_6; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CSourceDataU3Ek__BackingField_6() { return &___U3CSourceDataU3Ek__BackingField_6; }
	inline void set_U3CSourceDataU3Ek__BackingField_6(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CSourceDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState>
struct SourcePoseEventData_1_t8C83AA36628EFD7CDCC9FCF8AB48C7CDB70B9516  : public SourceStateEventData_tE68D8C1FF7799BB758CA7436749CAC8052D71D77
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1::<SourceData>k__BackingField
	int32_t ___U3CSourceDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CSourceDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourcePoseEventData_1_t8C83AA36628EFD7CDCC9FCF8AB48C7CDB70B9516, ___U3CSourceDataU3Ek__BackingField_6)); }
	inline int32_t get_U3CSourceDataU3Ek__BackingField_6() const { return ___U3CSourceDataU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CSourceDataU3Ek__BackingField_6() { return &___U3CSourceDataU3Ek__BackingField_6; }
	inline void set_U3CSourceDataU3Ek__BackingField_6(int32_t value)
	{
		___U3CSourceDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2>
struct SourcePoseEventData_1_t6035127052FD3413F4B8D698EA70B46DF636B40F  : public SourceStateEventData_tE68D8C1FF7799BB758CA7436749CAC8052D71D77
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1::<SourceData>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CSourceDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CSourceDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourcePoseEventData_1_t6035127052FD3413F4B8D698EA70B46DF636B40F, ___U3CSourceDataU3Ek__BackingField_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CSourceDataU3Ek__BackingField_6() const { return ___U3CSourceDataU3Ek__BackingField_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CSourceDataU3Ek__BackingField_6() { return &___U3CSourceDataU3Ek__BackingField_6; }
	inline void set_U3CSourceDataU3Ek__BackingField_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CSourceDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3>
struct SourcePoseEventData_1_t777563EDBE3D96857FDE0FCE63785C606EBFFCBE  : public SourceStateEventData_tE68D8C1FF7799BB758CA7436749CAC8052D71D77
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1::<SourceData>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CSourceDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CSourceDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourcePoseEventData_1_t777563EDBE3D96857FDE0FCE63785C606EBFFCBE, ___U3CSourceDataU3Ek__BackingField_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CSourceDataU3Ek__BackingField_6() const { return ___U3CSourceDataU3Ek__BackingField_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CSourceDataU3Ek__BackingField_6() { return &___U3CSourceDataU3Ek__BackingField_6; }
	inline void set_U3CSourceDataU3Ek__BackingField_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CSourceDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseNearInteractionTouchable
struct BaseNearInteractionTouchable_tAD56BBE0B1CB3D76C8188DC83B835CAFE7EED346  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Microsoft.MixedReality.Toolkit.Input.TouchableEventType Microsoft.MixedReality.Toolkit.Input.BaseNearInteractionTouchable::eventsToReceive
	int32_t ___eventsToReceive_4;
	// System.Single Microsoft.MixedReality.Toolkit.Input.BaseNearInteractionTouchable::debounceThreshold
	float ___debounceThreshold_5;

public:
	inline static int32_t get_offset_of_eventsToReceive_4() { return static_cast<int32_t>(offsetof(BaseNearInteractionTouchable_tAD56BBE0B1CB3D76C8188DC83B835CAFE7EED346, ___eventsToReceive_4)); }
	inline int32_t get_eventsToReceive_4() const { return ___eventsToReceive_4; }
	inline int32_t* get_address_of_eventsToReceive_4() { return &___eventsToReceive_4; }
	inline void set_eventsToReceive_4(int32_t value)
	{
		___eventsToReceive_4 = value;
	}

	inline static int32_t get_offset_of_debounceThreshold_5() { return static_cast<int32_t>(offsetof(BaseNearInteractionTouchable_tAD56BBE0B1CB3D76C8188DC83B835CAFE7EED346, ___debounceThreshold_5)); }
	inline float get_debounceThreshold_5() const { return ___debounceThreshold_5; }
	inline float* get_address_of_debounceThreshold_5() { return &___debounceThreshold_5; }
	inline void set_debounceThreshold_5(float value)
	{
		___debounceThreshold_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener
struct InputSystemGlobalHandlerListener_tE39526E6E6789D2FA1576A6AB07D1A3F163458B2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener::lateInitialize
	bool ___lateInitialize_4;

public:
	inline static int32_t get_offset_of_lateInitialize_4() { return static_cast<int32_t>(offsetof(InputSystemGlobalHandlerListener_tE39526E6E6789D2FA1576A6AB07D1A3F163458B2, ___lateInitialize_4)); }
	inline bool get_lateInitialize_4() const { return ___lateInitialize_4; }
	inline bool* get_address_of_lateInitialize_4() { return &___lateInitialize_4; }
	inline void set_lateInitialize_4(bool value)
	{
		___lateInitialize_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener
struct InputSystemGlobalListener_tFD9BB9DFC8D3641330B90871932353F182FDB2C2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener::lateInitialize
	bool ___lateInitialize_4;

public:
	inline static int32_t get_offset_of_lateInitialize_4() { return static_cast<int32_t>(offsetof(InputSystemGlobalListener_tFD9BB9DFC8D3641330B90871932353F182FDB2C2, ___lateInitialize_4)); }
	inline bool get_lateInitialize_4() const { return ___lateInitialize_4; }
	inline bool* get_address_of_lateInitialize_4() { return &___lateInitialize_4; }
	inline void set_lateInitialize_4(bool value)
	{
		___lateInitialize_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE  : public InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE, ___U3CPointerU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CPointerU3Ek__BackingField_6() const { return ___U3CPointerU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CPointerU3Ek__BackingField_6() { return &___U3CPointerU3Ek__BackingField_6; }
	inline void set_U3CPointerU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CPointerU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointerU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE, ___U3CCountU3Ek__BackingField_7)); }
	inline int32_t get_U3CCountU3Ek__BackingField_7() const { return ___U3CCountU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CCountU3Ek__BackingField_7() { return &___U3CCountU3Ek__BackingField_7; }
	inline void set_U3CCountU3Ek__BackingField_7(int32_t value)
	{
		___U3CCountU3Ek__BackingField_7 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * ___m_RaycastResultCache_4;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * ___m_AxisEventData_5;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_6;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_BaseEventData_7;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * ___m_InputOverride_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * ___m_DefaultInput_9;

public:
	inline static int32_t get_offset_of_m_RaycastResultCache_4() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_RaycastResultCache_4)); }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * get_m_RaycastResultCache_4() const { return ___m_RaycastResultCache_4; }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 ** get_address_of_m_RaycastResultCache_4() { return &___m_RaycastResultCache_4; }
	inline void set_m_RaycastResultCache_4(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * value)
	{
		___m_RaycastResultCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastResultCache_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_AxisEventData_5() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_AxisEventData_5)); }
	inline AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * get_m_AxisEventData_5() const { return ___m_AxisEventData_5; }
	inline AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E ** get_address_of_m_AxisEventData_5() { return &___m_AxisEventData_5; }
	inline void set_m_AxisEventData_5(AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * value)
	{
		___m_AxisEventData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AxisEventData_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_EventSystem_6() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_EventSystem_6)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_6() const { return ___m_EventSystem_6; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_6() { return &___m_EventSystem_6; }
	inline void set_m_EventSystem_6(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_BaseEventData_7() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_BaseEventData_7)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_BaseEventData_7() const { return ___m_BaseEventData_7; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_BaseEventData_7() { return &___m_BaseEventData_7; }
	inline void set_m_BaseEventData_7(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_BaseEventData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BaseEventData_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputOverride_8() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_InputOverride_8)); }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * get_m_InputOverride_8() const { return ___m_InputOverride_8; }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D ** get_address_of_m_InputOverride_8() { return &___m_InputOverride_8; }
	inline void set_m_InputOverride_8(BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * value)
	{
		___m_InputOverride_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputOverride_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultInput_9() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_DefaultInput_9)); }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * get_m_DefaultInput_9() const { return ___m_DefaultInput_9; }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D ** get_address_of_m_DefaultInput_9() { return &___m_DefaultInput_9; }
	inline void set_m_DefaultInput_9(BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * value)
	{
		___m_DefaultInput_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultInput_9), (void*)value);
	}
};


// UnityEngine.UI.BaseMeshEffect
struct BaseMeshEffect_tC7D44B0AC6406BAC3E4FC4579A43FC135BDB6FDA  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.UI.Graphic UnityEngine.UI.BaseMeshEffect::m_Graphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_Graphic_4;

public:
	inline static int32_t get_offset_of_m_Graphic_4() { return static_cast<int32_t>(offsetof(BaseMeshEffect_tC7D44B0AC6406BAC3E4FC4579A43FC135BDB6FDA, ___m_Graphic_4)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_Graphic_4() const { return ___m_Graphic_4; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_Graphic_4() { return &___m_Graphic_4; }
	inline void set_m_Graphic_4(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_Graphic_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Graphic_4), (void*)value);
	}
};


// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SystemInputModules_4)); }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_FirstSelected_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentSelected_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DummyData_13)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___m_EventSystems_6)); }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.GazeProvider
struct GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176  : public InputSystemGlobalHandlerListener_tE39526E6E6789D2FA1576A6AB07D1A3F163458B2
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::lockCursorWhenFocusLocked
	bool ___lockCursorWhenFocusLocked_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::setCursorInvisibleWhenFocusLocked
	bool ___setCursorInvisibleWhenFocusLocked_8;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider::maxGazeCollisionDistance
	float ___maxGazeCollisionDistance_9;
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Input.GazeProvider::raycastLayerMasks
	LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___raycastLayerMasks_10;
	// Microsoft.MixedReality.Toolkit.Physics.GazeStabilizer Microsoft.MixedReality.Toolkit.Input.GazeProvider::stabilizer
	GazeStabilizer_t6BA0FA272154F3DD33F7052C3ACBBCCFFA5F47E5 * ___stabilizer_11;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.GazeProvider::gazeTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___gazeTransform_12;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider::minHeadVelocityThreshold
	float ___minHeadVelocityThreshold_13;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider::maxHeadVelocityThreshold
	float ___maxHeadVelocityThreshold_14;
	// Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource Microsoft.MixedReality.Toolkit.Input.GazeProvider::gazeInputSource
	BaseGenericInputSource_t3BC0CA373CD52DBE59FF183FDE0B2795BC7FBC9E * ___gazeInputSource_15;
	// Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer Microsoft.MixedReality.Toolkit.Input.GazeProvider::gazePointer
	InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C * ___gazePointer_16;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.GazeProvider::<GazeCursorPrefab>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CGazeCursorPrefabU3Ek__BackingField_17;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.GazeProvider::<GazeTarget>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CGazeTargetU3Ek__BackingField_18;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit Microsoft.MixedReality.Toolkit.Input.GazeProvider::<HitInfo>k__BackingField
	MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48  ___U3CHitInfoU3Ek__BackingField_19;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.GazeProvider::<HitPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CHitPositionU3Ek__BackingField_20;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.GazeProvider::<HitNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CHitNormalU3Ek__BackingField_21;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.GazeProvider::<HeadVelocity>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CHeadVelocityU3Ek__BackingField_22;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.GazeProvider::<HeadMovementDirection>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CHeadMovementDirectionU3Ek__BackingField_23;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider::lastHitDistance
	float ___lastHitDistance_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::delayInitialization
	bool ___delayInitialization_25;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.GazeProvider::lastHeadPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lastHeadPosition_26;
	// System.Nullable`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.GazeProvider::overrideHeadPosition
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___overrideHeadPosition_27;
	// System.Nullable`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.GazeProvider::overrideHeadForward
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___overrideHeadForward_28;
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.GazeProvider::latestEyeTrackingUpdate
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___latestEyeTrackingUpdate_33;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.Input.GazeProvider::<IsEyeCalibrationValid>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CIsEyeCalibrationValidU3Ek__BackingField_35;
	// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.GazeProvider::<LatestEyeGaze>k__BackingField
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___U3CLatestEyeGazeU3Ek__BackingField_36;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::<IsEyeTrackingEnabled>k__BackingField
	bool ___U3CIsEyeTrackingEnabledU3Ek__BackingField_37;
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.GazeProvider::<Timestamp>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CTimestampU3Ek__BackingField_38;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::<UseHeadGazeOverride>k__BackingField
	bool ___U3CUseHeadGazeOverrideU3Ek__BackingField_39;

public:
	inline static int32_t get_offset_of_lockCursorWhenFocusLocked_7() { return static_cast<int32_t>(offsetof(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176, ___lockCursorWhenFocusLocked_7)); }
	inline bool get_lockCursorWhenFocusLocked_7() const { return ___lockCursorWhenFocusLocked_7; }
	inline bool* get_address_of_lockCursorWhenFocusLocked_7() { return &___lockCursorWhenFocusLocked_7; }
	inline void set_lockCursorWhenFocusLocked_7(bool value)
	{
		___lockCursorWhenFocusLocked_7 = value;
	}

	inline static int32_t get_offset_of_setCursorInvisibleWhenFocusLocked_8() { return static_cast<int32_t>(offsetof(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176, ___setCursorInvisibleWhenFocusLocked_8)); }
	inline bool get_setCursorInvisibleWhenFocusLocked_8() const { return ___setCursorInvisibleWhenFocusLocked_8; }
	inline bool* get_address_of_setCursorInvisibleWhenFocusLocked_8() { return &___setCursorInvisibleWhenFocusLocked_8; }
	inline void set_setCursorInvisibleWhenFocusLocked_8(bool value)
	{
		___setCursorInvisibleWhenFocusLocked_8 = value;
	}

	inline static int32_t get_offset_of_maxGazeCollisionDistance_9() { return static_cast<int32_t>(offsetof(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176, ___maxGazeCollisionDistance_9)); }
	inline float get_maxGazeCollisionDistance_9() const { return ___maxGazeCollisionDistance_9; }
	inline float* get_address_of_maxGazeCollisionDistance_9() { return &___maxGazeCollisionDistance_9; }
	inline void set_maxGazeCollisionDistance_9(float value)
	{
		___maxGazeCollisionDistance_9 = value;
	}

	inline static int32_t get_offset_of_raycastLayerMasks_10() { return static_cast<int32_t>(offsetof(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176, ___raycastLayerMasks_10)); }
	inline LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* get_raycastLayerMasks_10() const { return ___raycastLayerMasks_10; }
	inline LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F** get_address_of_raycastLayerMasks_10() { return &___raycastLayerMasks_10; }
	inline void set_raycastLayerMasks_10(LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* value)
	{
		___raycastLayerMasks_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raycastLayerMasks_10), (void*)value);
	}

	inline static int32_t get_offset_of_stabilizer_11() { return static_cast<int32_t>(offsetof(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176, ___stabilizer_11)); }
	inline GazeStabilizer_t6BA0FA272154F3DD33F7052C3ACBBCCFFA5F47E5 * get_stabilizer_11() const { return ___stabilizer_11; }
	inline GazeStabilizer_t6BA0FA272154F3DD33F7052C3ACBBCCFFA5F47E5 ** get_address_of_stabilizer_11() { return &___stabilizer_11; }
	inline void set_stabilizer_11(GazeStabilizer_t6BA0FA272154F3DD33F7052C3ACBBCCFFA5F47E5 * value)
	{
		___stabilizer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stabilizer_11), (void*)value);
	}

	inline static int32_t get_offset_of_gazeTransform_12() { return static_cast<int32_t>(offsetof(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176, ___gazeTransform_12)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_gazeTransform_12() const { return ___gazeTransform_12; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_gazeTransform_12() { return &___gazeTransform_12; }
	inline void set_gazeTransform_12(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___gazeTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_minHeadVelocityThreshold_13() { return static_cast<int32_t>(offsetof(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176, ___minHeadVelocityThreshold_13)); }
	inline float get_minHeadVelocityThreshold_13() const { return ___minHeadVelocityThreshold_13; }
	inline float* get_address_of_minHeadVelocityThreshold_13() { return &___minHeadVelocityThreshold_13; }
	inline void set_minHeadVelocityThreshold_13(float value)
	{
		___minHeadVelocityThreshold_13 = value;
	}

	inline static int32_t get_offset_of_maxHeadVelocityThreshold_14() { return static_cast<int32_t>(offsetof(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176, ___maxHeadVelocityThreshold_14)); }
	inline float get_maxHeadVelocityThreshold_14() const { return ___maxHeadVelocityThreshold_14; }
	inline float* get_address_of_maxHeadVelocityThreshold_14() { return &___maxHeadVelocityThreshold_14; }
	inline void set_maxHeadVelocityThreshold_14(float value)
	{
		___maxHeadVelocityThreshold_14 = value;
	}

	inline static int32_t get_offset_of_gazeInputSource_15() { return static_cast<int32_t>(offsetof(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176, ___gazeInputSource_15)); }
	inline BaseGenericInputSource_t3BC0CA373CD52DBE59FF183FDE0B2795BC7FBC9E * get_gazeInputSource_15() const { return ___gazeInputSource_15; }
	inline BaseGenericInputSource_t3BC0CA373CD52DBE59FF183FDE0B2795BC7FBC9E ** get_address_of_gazeInputSource_15() { return &___gazeInputSource_15; }
	inline void set_gazeInputSource_15(BaseGenericInputSource_t3BC0CA373CD52DBE59FF183FDE0B2795BC7FBC9E * value)
	{
		___gazeInputSource_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeInputSource_15), (void*)value);
	}

	inline static int32_t get_offset_of_gazePointer_16() { return static_cast<int32_t>(offsetof(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176, ___gazePointer_16)); }
	inline InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C * get_gazePointer_16() const { return ___gazePointer_16; }
	inline InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C ** get_address_of_gazePointer_16() { return &___gazePointer_16; }
	inline void set_gazePointer_16(InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C * value)
	{
		___gazePointer_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazePointer_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGazeCursorPrefabU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176, ___U3CGazeCursorPrefabU3Ek__BackingField_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CGazeCursorPrefabU3Ek__BackingField_17() const { return ___U3CGazeCursorPrefabU3Ek__BackingField_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CGazeCursorPrefabU3Ek__BackingField_17() { return &___U3CGazeCursorPrefabU3Ek__BackingField_17; }
	inline void set_U3CGazeCursorPrefabU3Ek__BackingField_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CGazeCursorPrefabU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGazeCursorPrefabU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGazeTargetU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176, ___U3CGazeTargetU3Ek__BackingField_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CGazeTargetU3Ek__BackingField_18() const { return ___U3CGazeTargetU3Ek__BackingField_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CGazeTargetU3Ek__BackingField_18() { return &___U3CGazeTargetU3Ek__BackingField_18; }
	inline void set_U3CGazeTargetU3Ek__BackingField_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CGazeTargetU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGazeTargetU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHitInfoU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176, ___U3CHitInfoU3Ek__BackingField_19)); }
	inline MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48  get_U3CHitInfoU3Ek__BackingField_19() const { return ___U3CHitInfoU3Ek__BackingField_19; }
	inline MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48 * get_address_of_U3CHitInfoU3Ek__BackingField_19() { return &___U3CHitInfoU3Ek__BackingField_19; }
	inline void set_U3CHitInfoU3Ek__BackingField_19(MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48  value)
	{
		___U3CHitInfoU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CHitInfoU3Ek__BackingField_19))->___transform_7), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CHitInfoU3Ek__BackingField_19))->___collider_10), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CHitPositionU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176, ___U3CHitPositionU3Ek__BackingField_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CHitPositionU3Ek__BackingField_20() const { return ___U3CHitPositionU3Ek__BackingField_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CHitPositionU3Ek__BackingField_20() { return &___U3CHitPositionU3Ek__BackingField_20; }
	inline void set_U3CHitPositionU3Ek__BackingField_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CHitPositionU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CHitNormalU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176, ___U3CHitNormalU3Ek__BackingField_21)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CHitNormalU3Ek__BackingField_21() const { return ___U3CHitNormalU3Ek__BackingField_21; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CHitNormalU3Ek__BackingField_21() { return &___U3CHitNormalU3Ek__BackingField_21; }
	inline void set_U3CHitNormalU3Ek__BackingField_21(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CHitNormalU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CHeadVelocityU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176, ___U3CHeadVelocityU3Ek__BackingField_22)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CHeadVelocityU3Ek__BackingField_22() const { return ___U3CHeadVelocityU3Ek__BackingField_22; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CHeadVelocityU3Ek__BackingField_22() { return &___U3CHeadVelocityU3Ek__BackingField_22; }
	inline void set_U3CHeadVelocityU3Ek__BackingField_22(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CHeadVelocityU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CHeadMovementDirectionU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176, ___U3CHeadMovementDirectionU3Ek__BackingField_23)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CHeadMovementDirectionU3Ek__BackingField_23() const { return ___U3CHeadMovementDirectionU3Ek__BackingField_23; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CHeadMovementDirectionU3Ek__BackingField_23() { return &___U3CHeadMovementDirectionU3Ek__BackingField_23; }
	inline void set_U3CHeadMovementDirectionU3Ek__BackingField_23(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CHeadMovementDirectionU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_lastHitDistance_24() { return static_cast<int32_t>(offsetof(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176, ___lastHitDistance_24)); }
	inline float get_lastHitDistance_24() const { return ___lastHitDistance_24; }
	inline float* get_address_of_lastHitDistance_24() { return &___lastHitDistance_24; }
	inline void set_lastHitDistance_24(float value)
	{
		___lastHitDistance_24 = value;
	}

	inline static int32_t get_offset_of_delayInitialization_25() { return static_cast<int32_t>(offsetof(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176, ___delayInitialization_25)); }
	inline bool get_delayInitialization_25() const { return ___delayInitialization_25; }
	inline bool* get_address_of_delayInitialization_25() { return &___delayInitialization_25; }
	inline void set_delayInitialization_25(bool value)
	{
		___delayInitialization_25 = value;
	}

	inline static int32_t get_offset_of_lastHeadPosition_26() { return static_cast<int32_t>(offsetof(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176, ___lastHeadPosition_26)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_lastHeadPosition_26() const { return ___lastHeadPosition_26; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_lastHeadPosition_26() { return &___lastHeadPosition_26; }
	inline void set_lastHeadPosition_26(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___lastHeadPosition_26 = value;
	}

	inline static int32_t get_offset_of_overrideHeadPosition_27() { return static_cast<int32_t>(offsetof(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176, ___overrideHeadPosition_27)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_overrideHeadPosition_27() const { return ___overrideHeadPosition_27; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_overrideHeadPosition_27() { return &___overrideHeadPosition_27; }
	inline void set_overrideHeadPosition_27(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___overrideHeadPosition_27 = value;
	}

	inline static int32_t get_offset_of_overrideHeadForward_28() { return static_cast<int32_t>(offsetof(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176, ___overrideHeadForward_28)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_overrideHeadForward_28() const { return ___overrideHeadForward_28; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_overrideHeadForward_28() { return &___overrideHeadForward_28; }
	inline void set_overrideHeadForward_28(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___overrideHeadForward_28 = value;
	}

	inline static int32_t get_offset_of_latestEyeTrackingUpdate_33() { return static_cast<int32_t>(offsetof(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176, ___latestEyeTrackingUpdate_33)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_latestEyeTrackingUpdate_33() const { return ___latestEyeTrackingUpdate_33; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_latestEyeTrackingUpdate_33() { return &___latestEyeTrackingUpdate_33; }
	inline void set_latestEyeTrackingUpdate_33(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___latestEyeTrackingUpdate_33 = value;
	}

	inline static int32_t get_offset_of_U3CIsEyeCalibrationValidU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176, ___U3CIsEyeCalibrationValidU3Ek__BackingField_35)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CIsEyeCalibrationValidU3Ek__BackingField_35() const { return ___U3CIsEyeCalibrationValidU3Ek__BackingField_35; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CIsEyeCalibrationValidU3Ek__BackingField_35() { return &___U3CIsEyeCalibrationValidU3Ek__BackingField_35; }
	inline void set_U3CIsEyeCalibrationValidU3Ek__BackingField_35(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CIsEyeCalibrationValidU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CLatestEyeGazeU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176, ___U3CLatestEyeGazeU3Ek__BackingField_36)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get_U3CLatestEyeGazeU3Ek__BackingField_36() const { return ___U3CLatestEyeGazeU3Ek__BackingField_36; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of_U3CLatestEyeGazeU3Ek__BackingField_36() { return &___U3CLatestEyeGazeU3Ek__BackingField_36; }
	inline void set_U3CLatestEyeGazeU3Ek__BackingField_36(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		___U3CLatestEyeGazeU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_U3CIsEyeTrackingEnabledU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176, ___U3CIsEyeTrackingEnabledU3Ek__BackingField_37)); }
	inline bool get_U3CIsEyeTrackingEnabledU3Ek__BackingField_37() const { return ___U3CIsEyeTrackingEnabledU3Ek__BackingField_37; }
	inline bool* get_address_of_U3CIsEyeTrackingEnabledU3Ek__BackingField_37() { return &___U3CIsEyeTrackingEnabledU3Ek__BackingField_37; }
	inline void set_U3CIsEyeTrackingEnabledU3Ek__BackingField_37(bool value)
	{
		___U3CIsEyeTrackingEnabledU3Ek__BackingField_37 = value;
	}

	inline static int32_t get_offset_of_U3CTimestampU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176, ___U3CTimestampU3Ek__BackingField_38)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CTimestampU3Ek__BackingField_38() const { return ___U3CTimestampU3Ek__BackingField_38; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CTimestampU3Ek__BackingField_38() { return &___U3CTimestampU3Ek__BackingField_38; }
	inline void set_U3CTimestampU3Ek__BackingField_38(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CTimestampU3Ek__BackingField_38 = value;
	}

	inline static int32_t get_offset_of_U3CUseHeadGazeOverrideU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176, ___U3CUseHeadGazeOverrideU3Ek__BackingField_39)); }
	inline bool get_U3CUseHeadGazeOverrideU3Ek__BackingField_39() const { return ___U3CUseHeadGazeOverrideU3Ek__BackingField_39; }
	inline bool* get_address_of_U3CUseHeadGazeOverrideU3Ek__BackingField_39() { return &___U3CUseHeadGazeOverrideU3Ek__BackingField_39; }
	inline void set_U3CUseHeadGazeOverrideU3Ek__BackingField_39(bool value)
	{
		___U3CUseHeadGazeOverrideU3Ek__BackingField_39 = value;
	}
};

struct GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GazeProvider::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_29;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GazeProvider::LateUpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LateUpdatePerfMarker_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GazeProvider::InitializeGazePointerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___InitializeGazePointerPerfMarker_31;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GazeProvider::RaiseSourceDetectedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourceDetectedPerfMarker_32;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider::maxEyeTrackingTimeoutInSeconds
	float ___maxEyeTrackingTimeoutInSeconds_34;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_29() { return static_cast<int32_t>(offsetof(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176_StaticFields, ___UpdatePerfMarker_29)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_29() const { return ___UpdatePerfMarker_29; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_29() { return &___UpdatePerfMarker_29; }
	inline void set_UpdatePerfMarker_29(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_29 = value;
	}

	inline static int32_t get_offset_of_LateUpdatePerfMarker_30() { return static_cast<int32_t>(offsetof(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176_StaticFields, ___LateUpdatePerfMarker_30)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LateUpdatePerfMarker_30() const { return ___LateUpdatePerfMarker_30; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LateUpdatePerfMarker_30() { return &___LateUpdatePerfMarker_30; }
	inline void set_LateUpdatePerfMarker_30(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LateUpdatePerfMarker_30 = value;
	}

	inline static int32_t get_offset_of_InitializeGazePointerPerfMarker_31() { return static_cast<int32_t>(offsetof(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176_StaticFields, ___InitializeGazePointerPerfMarker_31)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_InitializeGazePointerPerfMarker_31() const { return ___InitializeGazePointerPerfMarker_31; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_InitializeGazePointerPerfMarker_31() { return &___InitializeGazePointerPerfMarker_31; }
	inline void set_InitializeGazePointerPerfMarker_31(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___InitializeGazePointerPerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_RaiseSourceDetectedPerfMarker_32() { return static_cast<int32_t>(offsetof(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176_StaticFields, ___RaiseSourceDetectedPerfMarker_32)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourceDetectedPerfMarker_32() const { return ___RaiseSourceDetectedPerfMarker_32; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourceDetectedPerfMarker_32() { return &___RaiseSourceDetectedPerfMarker_32; }
	inline void set_RaiseSourceDetectedPerfMarker_32(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourceDetectedPerfMarker_32 = value;
	}

	inline static int32_t get_offset_of_maxEyeTrackingTimeoutInSeconds_34() { return static_cast<int32_t>(offsetof(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176_StaticFields, ___maxEyeTrackingTimeoutInSeconds_34)); }
	inline float get_maxEyeTrackingTimeoutInSeconds_34() const { return ___maxEyeTrackingTimeoutInSeconds_34; }
	inline float* get_address_of_maxEyeTrackingTimeoutInSeconds_34() { return &___maxEyeTrackingTimeoutInSeconds_34; }
	inline void set_maxEyeTrackingTimeoutInSeconds_34(float value)
	{
		___maxEyeTrackingTimeoutInSeconds_34 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData
struct HandTrackingInputEventData_t17B384EF4D24CF64EF2884AB370CB9066CA564A7  : public InputEventData_1_t3CC0187E4344201378E113CFC270CB5C4AF36D86
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData::<Controller>k__BackingField
	RuntimeObject* ___U3CControllerU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CControllerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(HandTrackingInputEventData_t17B384EF4D24CF64EF2884AB370CB9066CA564A7, ___U3CControllerU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CControllerU3Ek__BackingField_7() const { return ___U3CControllerU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CControllerU3Ek__BackingField_7() { return &___U3CControllerU3Ek__BackingField_7; }
	inline void set_U3CControllerU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CControllerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CControllerU3Ek__BackingField_7), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableSurface
struct NearInteractionTouchableSurface_tF1A799058D9E1334B3153D037E843CCC0DEB1A16  : public BaseNearInteractionTouchable_tAD56BBE0B1CB3D76C8188DC83B835CAFE7EED346
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableVolume
struct NearInteractionTouchableVolume_tDE281E73D1A8AD596232A1443EE49ADE12C31580  : public BaseNearInteractionTouchable_tAD56BBE0B1CB3D76C8188DC83B835CAFE7EED346
{
public:
	// UnityEngine.Collider Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableVolume::touchableCollider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___touchableCollider_6;

public:
	inline static int32_t get_offset_of_touchableCollider_6() { return static_cast<int32_t>(offsetof(NearInteractionTouchableVolume_tDE281E73D1A8AD596232A1443EE49ADE12C31580, ___touchableCollider_6)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_touchableCollider_6() const { return ___touchableCollider_6; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_touchableCollider_6() { return &___touchableCollider_6; }
	inline void set_touchableCollider_6(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___touchableCollider_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___touchableCollider_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI
struct NearInteractionTouchableUnityUI_tE516D0C98E3583A7EEBA0E60FA41CBD7844268DF  : public NearInteractionTouchableSurface_tF1A799058D9E1334B3153D037E843CCC0DEB1A16
{
public:
	// System.Lazy`1<UnityEngine.RectTransform> Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::rectTransform
	Lazy_1_t7A2FE75485683BDF384AC4F2E3E706A140DC2628 * ___rectTransform_6;

public:
	inline static int32_t get_offset_of_rectTransform_6() { return static_cast<int32_t>(offsetof(NearInteractionTouchableUnityUI_tE516D0C98E3583A7EEBA0E60FA41CBD7844268DF, ___rectTransform_6)); }
	inline Lazy_1_t7A2FE75485683BDF384AC4F2E3E706A140DC2628 * get_rectTransform_6() const { return ___rectTransform_6; }
	inline Lazy_1_t7A2FE75485683BDF384AC4F2E3E706A140DC2628 ** get_address_of_rectTransform_6() { return &___rectTransform_6; }
	inline void set_rectTransform_6(Lazy_1_t7A2FE75485683BDF384AC4F2E3E706A140DC2628 * value)
	{
		___rectTransform_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rectTransform_6), (void*)value);
	}
};

struct NearInteractionTouchableUnityUI_tE516D0C98E3583A7EEBA0E60FA41CBD7844268DF_StaticFields
{
public:
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI> Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::instances
	List_1_t92334C309B2576B7D5B460950F0E56B19CC288A4 * ___instances_7;

public:
	inline static int32_t get_offset_of_instances_7() { return static_cast<int32_t>(offsetof(NearInteractionTouchableUnityUI_tE516D0C98E3583A7EEBA0E60FA41CBD7844268DF_StaticFields, ___instances_7)); }
	inline List_1_t92334C309B2576B7D5B460950F0E56B19CC288A4 * get_instances_7() const { return ___instances_7; }
	inline List_1_t92334C309B2576B7D5B460950F0E56B19CC288A4 ** get_address_of_instances_7() { return &___instances_7; }
	inline void set_instances_7(List_1_t92334C309B2576B7D5B460950F0E56B19CC288A4 * value)
	{
		___instances_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instances_7), (void*)value);
	}
};


// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421  : public BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * ___m_PointerData_14;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * ___m_MouseState_15;

public:
	inline static int32_t get_offset_of_m_PointerData_14() { return static_cast<int32_t>(offsetof(PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421, ___m_PointerData_14)); }
	inline Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * get_m_PointerData_14() const { return ___m_PointerData_14; }
	inline Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 ** get_address_of_m_PointerData_14() { return &___m_PointerData_14; }
	inline void set_m_PointerData_14(Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * value)
	{
		___m_PointerData_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerData_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_MouseState_15() { return static_cast<int32_t>(offsetof(PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421, ___m_MouseState_15)); }
	inline MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * get_m_MouseState_15() const { return ___m_MouseState_15; }
	inline MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 ** get_address_of_m_MouseState_15() { return &___m_MouseState_15; }
	inline void set_m_MouseState_15(MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * value)
	{
		___m_MouseState_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MouseState_15), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.Utilities.ScaleMeshEffect
struct ScaleMeshEffect_t1E7AC88F6C33ABCF1570F90CFF80419E300A8D4F  : public BaseMeshEffect_tC7D44B0AC6406BAC3E4FC4579A43FC135BDB6FDA
{
public:

public:
};


// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD  : public PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421
{
public:
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_PrevActionTime
	float ___m_PrevActionTime_16;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMoveVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_LastMoveVector_17;
	// System.Int32 UnityEngine.EventSystems.StandaloneInputModule::m_ConsecutiveMoveCount
	int32_t ___m_ConsecutiveMoveCount_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMousePosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_LastMousePosition_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_MousePosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_MousePosition_20;
	// UnityEngine.GameObject UnityEngine.EventSystems.StandaloneInputModule::m_CurrentFocusedGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentFocusedGameObject_21;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.StandaloneInputModule::m_InputPointerEvent
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___m_InputPointerEvent_22;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_HorizontalAxis
	String_t* ___m_HorizontalAxis_23;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_VerticalAxis
	String_t* ___m_VerticalAxis_24;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_SubmitButton
	String_t* ___m_SubmitButton_25;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_CancelButton
	String_t* ___m_CancelButton_26;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_InputActionsPerSecond
	float ___m_InputActionsPerSecond_27;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_RepeatDelay
	float ___m_RepeatDelay_28;
	// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::m_ForceModuleActive
	bool ___m_ForceModuleActive_29;

public:
	inline static int32_t get_offset_of_m_PrevActionTime_16() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_PrevActionTime_16)); }
	inline float get_m_PrevActionTime_16() const { return ___m_PrevActionTime_16; }
	inline float* get_address_of_m_PrevActionTime_16() { return &___m_PrevActionTime_16; }
	inline void set_m_PrevActionTime_16(float value)
	{
		___m_PrevActionTime_16 = value;
	}

	inline static int32_t get_offset_of_m_LastMoveVector_17() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_LastMoveVector_17)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_LastMoveVector_17() const { return ___m_LastMoveVector_17; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_LastMoveVector_17() { return &___m_LastMoveVector_17; }
	inline void set_m_LastMoveVector_17(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_LastMoveVector_17 = value;
	}

	inline static int32_t get_offset_of_m_ConsecutiveMoveCount_18() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_ConsecutiveMoveCount_18)); }
	inline int32_t get_m_ConsecutiveMoveCount_18() const { return ___m_ConsecutiveMoveCount_18; }
	inline int32_t* get_address_of_m_ConsecutiveMoveCount_18() { return &___m_ConsecutiveMoveCount_18; }
	inline void set_m_ConsecutiveMoveCount_18(int32_t value)
	{
		___m_ConsecutiveMoveCount_18 = value;
	}

	inline static int32_t get_offset_of_m_LastMousePosition_19() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_LastMousePosition_19)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_LastMousePosition_19() const { return ___m_LastMousePosition_19; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_LastMousePosition_19() { return &___m_LastMousePosition_19; }
	inline void set_m_LastMousePosition_19(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_LastMousePosition_19 = value;
	}

	inline static int32_t get_offset_of_m_MousePosition_20() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_MousePosition_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_MousePosition_20() const { return ___m_MousePosition_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_MousePosition_20() { return &___m_MousePosition_20; }
	inline void set_m_MousePosition_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_MousePosition_20 = value;
	}

	inline static int32_t get_offset_of_m_CurrentFocusedGameObject_21() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_CurrentFocusedGameObject_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentFocusedGameObject_21() const { return ___m_CurrentFocusedGameObject_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentFocusedGameObject_21() { return &___m_CurrentFocusedGameObject_21; }
	inline void set_m_CurrentFocusedGameObject_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentFocusedGameObject_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentFocusedGameObject_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputPointerEvent_22() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_InputPointerEvent_22)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_m_InputPointerEvent_22() const { return ___m_InputPointerEvent_22; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_m_InputPointerEvent_22() { return &___m_InputPointerEvent_22; }
	inline void set_m_InputPointerEvent_22(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___m_InputPointerEvent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputPointerEvent_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_HorizontalAxis_23() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_HorizontalAxis_23)); }
	inline String_t* get_m_HorizontalAxis_23() const { return ___m_HorizontalAxis_23; }
	inline String_t** get_address_of_m_HorizontalAxis_23() { return &___m_HorizontalAxis_23; }
	inline void set_m_HorizontalAxis_23(String_t* value)
	{
		___m_HorizontalAxis_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HorizontalAxis_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalAxis_24() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_VerticalAxis_24)); }
	inline String_t* get_m_VerticalAxis_24() const { return ___m_VerticalAxis_24; }
	inline String_t** get_address_of_m_VerticalAxis_24() { return &___m_VerticalAxis_24; }
	inline void set_m_VerticalAxis_24(String_t* value)
	{
		___m_VerticalAxis_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalAxis_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_SubmitButton_25() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_SubmitButton_25)); }
	inline String_t* get_m_SubmitButton_25() const { return ___m_SubmitButton_25; }
	inline String_t** get_address_of_m_SubmitButton_25() { return &___m_SubmitButton_25; }
	inline void set_m_SubmitButton_25(String_t* value)
	{
		___m_SubmitButton_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubmitButton_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_CancelButton_26() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_CancelButton_26)); }
	inline String_t* get_m_CancelButton_26() const { return ___m_CancelButton_26; }
	inline String_t** get_address_of_m_CancelButton_26() { return &___m_CancelButton_26; }
	inline void set_m_CancelButton_26(String_t* value)
	{
		___m_CancelButton_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CancelButton_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputActionsPerSecond_27() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_InputActionsPerSecond_27)); }
	inline float get_m_InputActionsPerSecond_27() const { return ___m_InputActionsPerSecond_27; }
	inline float* get_address_of_m_InputActionsPerSecond_27() { return &___m_InputActionsPerSecond_27; }
	inline void set_m_InputActionsPerSecond_27(float value)
	{
		___m_InputActionsPerSecond_27 = value;
	}

	inline static int32_t get_offset_of_m_RepeatDelay_28() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_RepeatDelay_28)); }
	inline float get_m_RepeatDelay_28() const { return ___m_RepeatDelay_28; }
	inline float* get_address_of_m_RepeatDelay_28() { return &___m_RepeatDelay_28; }
	inline void set_m_RepeatDelay_28(float value)
	{
		___m_RepeatDelay_28 = value;
	}

	inline static int32_t get_offset_of_m_ForceModuleActive_29() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_ForceModuleActive_29)); }
	inline bool get_m_ForceModuleActive_29() const { return ___m_ForceModuleActive_29; }
	inline bool* get_address_of_m_ForceModuleActive_29() { return &___m_ForceModuleActive_29; }
	inline void set_m_ForceModuleActive_29(bool value)
	{
		___m_ForceModuleActive_29 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule
struct MixedRealityInputModule_t0492967672F0C01F27AF4273EFFE8CE0EC32C664  : public StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::pointerDataToUpdate
	Dictionary_2_tB7478EF7A1D56D0534BD9AF224099A735CEFB6E6 * ___pointerDataToUpdate_30;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::pointerDataToRemove
	List_1_t009B0B442ADCA0D896E13C9E95AF6336FEF9D851 * ___pointerDataToRemove_31;
	// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::<RaycastCamera>k__BackingField
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___U3CRaycastCameraU3Ek__BackingField_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::<ManualInitializationRequired>k__BackingField
	bool ___U3CManualInitializationRequiredU3Ek__BackingField_33;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::<ProcessPaused>k__BackingField
	bool ___U3CProcessPausedU3Ek__BackingField_34;

public:
	inline static int32_t get_offset_of_pointerDataToUpdate_30() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t0492967672F0C01F27AF4273EFFE8CE0EC32C664, ___pointerDataToUpdate_30)); }
	inline Dictionary_2_tB7478EF7A1D56D0534BD9AF224099A735CEFB6E6 * get_pointerDataToUpdate_30() const { return ___pointerDataToUpdate_30; }
	inline Dictionary_2_tB7478EF7A1D56D0534BD9AF224099A735CEFB6E6 ** get_address_of_pointerDataToUpdate_30() { return &___pointerDataToUpdate_30; }
	inline void set_pointerDataToUpdate_30(Dictionary_2_tB7478EF7A1D56D0534BD9AF224099A735CEFB6E6 * value)
	{
		___pointerDataToUpdate_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerDataToUpdate_30), (void*)value);
	}

	inline static int32_t get_offset_of_pointerDataToRemove_31() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t0492967672F0C01F27AF4273EFFE8CE0EC32C664, ___pointerDataToRemove_31)); }
	inline List_1_t009B0B442ADCA0D896E13C9E95AF6336FEF9D851 * get_pointerDataToRemove_31() const { return ___pointerDataToRemove_31; }
	inline List_1_t009B0B442ADCA0D896E13C9E95AF6336FEF9D851 ** get_address_of_pointerDataToRemove_31() { return &___pointerDataToRemove_31; }
	inline void set_pointerDataToRemove_31(List_1_t009B0B442ADCA0D896E13C9E95AF6336FEF9D851 * value)
	{
		___pointerDataToRemove_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerDataToRemove_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRaycastCameraU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t0492967672F0C01F27AF4273EFFE8CE0EC32C664, ___U3CRaycastCameraU3Ek__BackingField_32)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_U3CRaycastCameraU3Ek__BackingField_32() const { return ___U3CRaycastCameraU3Ek__BackingField_32; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_U3CRaycastCameraU3Ek__BackingField_32() { return &___U3CRaycastCameraU3Ek__BackingField_32; }
	inline void set_U3CRaycastCameraU3Ek__BackingField_32(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___U3CRaycastCameraU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRaycastCameraU3Ek__BackingField_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3CManualInitializationRequiredU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t0492967672F0C01F27AF4273EFFE8CE0EC32C664, ___U3CManualInitializationRequiredU3Ek__BackingField_33)); }
	inline bool get_U3CManualInitializationRequiredU3Ek__BackingField_33() const { return ___U3CManualInitializationRequiredU3Ek__BackingField_33; }
	inline bool* get_address_of_U3CManualInitializationRequiredU3Ek__BackingField_33() { return &___U3CManualInitializationRequiredU3Ek__BackingField_33; }
	inline void set_U3CManualInitializationRequiredU3Ek__BackingField_33(bool value)
	{
		___U3CManualInitializationRequiredU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CProcessPausedU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t0492967672F0C01F27AF4273EFFE8CE0EC32C664, ___U3CProcessPausedU3Ek__BackingField_34)); }
	inline bool get_U3CProcessPausedU3Ek__BackingField_34() const { return ___U3CProcessPausedU3Ek__BackingField_34; }
	inline bool* get_address_of_U3CProcessPausedU3Ek__BackingField_34() { return &___U3CProcessPausedU3Ek__BackingField_34; }
	inline void set_U3CProcessPausedU3Ek__BackingField_34(bool value)
	{
		___U3CProcessPausedU3Ek__BackingField_34 = value;
	}
};

struct MixedRealityInputModule_t0492967672F0C01F27AF4273EFFE8CE0EC32C664_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::ProcessPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ProcessPerfMarker_35;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::ProcessMrtkPointerLostPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ProcessMrtkPointerLostPerfMarker_36;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::GetMousePointerEventDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetMousePointerEventDataPerfMarker_37;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::UpdateMousePointerEventDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateMousePointerEventDataPerfMarker_38;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::ResetMousePointerEventDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ResetMousePointerEventDataPerfMarker_39;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::OnSourceDetectedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnSourceDetectedPerfMarker_40;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::OnSourceLostPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnSourceLostPerfMarker_41;

public:
	inline static int32_t get_offset_of_ProcessPerfMarker_35() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t0492967672F0C01F27AF4273EFFE8CE0EC32C664_StaticFields, ___ProcessPerfMarker_35)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ProcessPerfMarker_35() const { return ___ProcessPerfMarker_35; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ProcessPerfMarker_35() { return &___ProcessPerfMarker_35; }
	inline void set_ProcessPerfMarker_35(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ProcessPerfMarker_35 = value;
	}

	inline static int32_t get_offset_of_ProcessMrtkPointerLostPerfMarker_36() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t0492967672F0C01F27AF4273EFFE8CE0EC32C664_StaticFields, ___ProcessMrtkPointerLostPerfMarker_36)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ProcessMrtkPointerLostPerfMarker_36() const { return ___ProcessMrtkPointerLostPerfMarker_36; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ProcessMrtkPointerLostPerfMarker_36() { return &___ProcessMrtkPointerLostPerfMarker_36; }
	inline void set_ProcessMrtkPointerLostPerfMarker_36(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ProcessMrtkPointerLostPerfMarker_36 = value;
	}

	inline static int32_t get_offset_of_GetMousePointerEventDataPerfMarker_37() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t0492967672F0C01F27AF4273EFFE8CE0EC32C664_StaticFields, ___GetMousePointerEventDataPerfMarker_37)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetMousePointerEventDataPerfMarker_37() const { return ___GetMousePointerEventDataPerfMarker_37; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetMousePointerEventDataPerfMarker_37() { return &___GetMousePointerEventDataPerfMarker_37; }
	inline void set_GetMousePointerEventDataPerfMarker_37(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetMousePointerEventDataPerfMarker_37 = value;
	}

	inline static int32_t get_offset_of_UpdateMousePointerEventDataPerfMarker_38() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t0492967672F0C01F27AF4273EFFE8CE0EC32C664_StaticFields, ___UpdateMousePointerEventDataPerfMarker_38)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateMousePointerEventDataPerfMarker_38() const { return ___UpdateMousePointerEventDataPerfMarker_38; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateMousePointerEventDataPerfMarker_38() { return &___UpdateMousePointerEventDataPerfMarker_38; }
	inline void set_UpdateMousePointerEventDataPerfMarker_38(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateMousePointerEventDataPerfMarker_38 = value;
	}

	inline static int32_t get_offset_of_ResetMousePointerEventDataPerfMarker_39() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t0492967672F0C01F27AF4273EFFE8CE0EC32C664_StaticFields, ___ResetMousePointerEventDataPerfMarker_39)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ResetMousePointerEventDataPerfMarker_39() const { return ___ResetMousePointerEventDataPerfMarker_39; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ResetMousePointerEventDataPerfMarker_39() { return &___ResetMousePointerEventDataPerfMarker_39; }
	inline void set_ResetMousePointerEventDataPerfMarker_39(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ResetMousePointerEventDataPerfMarker_39 = value;
	}

	inline static int32_t get_offset_of_OnSourceDetectedPerfMarker_40() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t0492967672F0C01F27AF4273EFFE8CE0EC32C664_StaticFields, ___OnSourceDetectedPerfMarker_40)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnSourceDetectedPerfMarker_40() const { return ___OnSourceDetectedPerfMarker_40; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnSourceDetectedPerfMarker_40() { return &___OnSourceDetectedPerfMarker_40; }
	inline void set_OnSourceDetectedPerfMarker_40(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnSourceDetectedPerfMarker_40 = value;
	}

	inline static int32_t get_offset_of_OnSourceLostPerfMarker_41() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t0492967672F0C01F27AF4273EFFE8CE0EC32C664_StaticFields, ___OnSourceLostPerfMarker_41)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnSourceLostPerfMarker_41() const { return ___OnSourceLostPerfMarker_41; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnSourceLostPerfMarker_41() { return &___OnSourceLostPerfMarker_41; }
	inline void set_OnSourceLostPerfMarker_41(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnSourceLostPerfMarker_41 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Physics.RayStep[]
struct RayStepU5BU5D_tCC36F43D996F3D35CC79E15BA0E3B1C10EBF1DC8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF  m_Items[1];

public:
	inline RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  m_Items[1];

public:
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		m_Items[index] = value;
	}
};


// !0 System.Lazy`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Lazy_1_get_Value_mEE280792E3C774C75081BC21911D6224C453E2DB_gshared (Lazy_1_t9AEDA4BDE3E10120674776405939013BDFB29948 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Lazy`1<System.Object>::.ctor(System.Func`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lazy_1__ctor_m779E6079C2AD73539FA39CF6EF5955B40F90F8A3_gshared (Lazy_1_t9AEDA4BDE3E10120674776405939013BDFB29948 * __this, Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___valueFactory0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,System.Object>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_mF3F724FDD4660E37EEA11B37B562AA2EB0FE6220_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_gshared_inline (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Vector3>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_gshared (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<System.Object,System.Object>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisRuntimeObject_m53C73637E160C055CA914211B2B12D384B9A80BD_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject ** ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C  Dictionary_2_GetEnumerator_m17437D82A5AF502166F10DD12B5C5830DDB95444_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mEEAA9A380252BB2F9B2403853F4C00F2F643ADC4_gshared (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m7567E65C01E35A09AD2AD4814D708A8E76469D31_gshared (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<System.Object>(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityObjectExtensions_IsNull_TisRuntimeObject_m383C6FBFC9FEE623F3EDBC2835909238224CB981_gshared (RuntimeObject * ___interface0, const RuntimeMethod* method);

// System.Void Microsoft.MixedReality.Toolkit.Input.BaseNearInteractionTouchable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseNearInteractionTouchable__ctor_m0FAEACA691389F89EBF3CBCFBF30483AF74C82F3 (BaseNearInteractionTouchable_tAD56BBE0B1CB3D76C8188DC83B835CAFE7EED346 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// !0 System.Lazy`1<UnityEngine.RectTransform>::get_Value()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Lazy_1_get_Value_mAF4DD3A825C2A168053CA6BA55CD1C92397053C1 (Lazy_1_t7A2FE75485683BDF384AC4F2E3E706A140DC2628 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (Lazy_1_t7A2FE75485683BDF384AC4F2E3E706A140DC2628 *, const RuntimeMethod*))Lazy_1_get_Value_mEE280792E3C774C75081BC21911D6224C453E2DB_gshared)(__this, method);
}
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rect_get_size_m752B3BB45AE862F6EAE941ED5E5C1B01C0973A00 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableSurface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchableSurface__ctor_mD73551146F62918A26E92EB351B3049F510B931B (NearInteractionTouchableSurface_tF1A799058D9E1334B3153D037E843CCC0DEB1A16 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<UnityEngine.RectTransform>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m86E416AA060825F6CB17CB373EA14F964C18F131 (Func_1_t9C6E028D7DEC6AB52806A10D996C478296C6EAAA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t9C6E028D7DEC6AB52806A10D996C478296C6EAAA *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Lazy`1<UnityEngine.RectTransform>::.ctor(System.Func`1<!0>)
inline void Lazy_1__ctor_mBA873D19799CE0A3BFD7EAC23B9A0B92FE76EB32 (Lazy_1_t7A2FE75485683BDF384AC4F2E3E706A140DC2628 * __this, Func_1_t9C6E028D7DEC6AB52806A10D996C478296C6EAAA * ___valueFactory0, const RuntimeMethod* method)
{
	((  void (*) (Lazy_1_t7A2FE75485683BDF384AC4F2E3E706A140DC2628 *, Func_1_t9C6E028D7DEC6AB52806A10D996C478296C6EAAA *, const RuntimeMethod*))Lazy_1__ctor_m779E6079C2AD73539FA39CF6EF5955B40F90F8A3_gshared)(__this, ___valueFactory0, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformDirection_m6B5E3F0A7C6323159DEC6D9BC035FB53ADD96E91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Contains_m51C65159B1706EB00CC962D7CD1CEC2EBD85BC3A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.TransformExtensions::TransformSize(UnityEngine.Transform,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformExtensions_TransformSize_m86C5C503675ED65DB031066CB46B313D1DDA893B (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localSize1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI>::Add(!0)
inline void List_1_Add_m5EBB88B9DA5FD4751FEE067866490E5DCCBC392A (List_1_t92334C309B2576B7D5B460950F0E56B19CC288A4 * __this, NearInteractionTouchableUnityUI_tE516D0C98E3583A7EEBA0E60FA41CBD7844268DF * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t92334C309B2576B7D5B460950F0E56B19CC288A4 *, NearInteractionTouchableUnityUI_tE516D0C98E3583A7EEBA0E60FA41CBD7844268DF *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI>::Remove(!0)
inline bool List_1_Remove_m3B436443D14F421818C16DD9F47A31EA8CDB9E2A (List_1_t92334C309B2576B7D5B460950F0E56B19CC288A4 * __this, NearInteractionTouchableUnityUI_tE516D0C98E3583A7EEBA0E60FA41CBD7844268DF * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t92334C309B2576B7D5B460950F0E56B19CC288A4 *, NearInteractionTouchableUnityUI_tE516D0C98E3583A7EEBA0E60FA41CBD7844268DF *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI>::.ctor()
inline void List_1__ctor_m90BBD48A5C6C1F74D976D6A56A2C8ED1CD45017A (List_1_t92334C309B2576B7D5B460950F0E56B19CC288A4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t92334C309B2576B7D5B460950F0E56B19CC288A4 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Collider::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_get_enabled_m03B73B5C97033F939387D1785BDF2619CADAEEB0 (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseNearInteractionTouchable::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseNearInteractionTouchable_OnValidate_mE6FCEA0D2B034F19C68468702A743DF797287797 (BaseNearInteractionTouchable_tAD56BBE0B1CB3D76C8188DC83B835CAFE7EED346 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider>()
inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Collider Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableVolume::get_TouchableCollider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * NearInteractionTouchableVolume_get_TouchableCollider_m222868D886C4E6FC0048141DE06B5290582221CC_inline (NearInteractionTouchableVolume_tDE281E73D1A8AD596232A1443EE49ADE12C31580 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Collider::ClosestPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Collider_ClosestPoint_m7777917E298B31796DEE906B54F0102F6ED76676 (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  Collider_get_bounds_mE341D29E1DA184ADD53A474D57D9082A3550EACB (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.UIBehaviour::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_Awake_m0A6FB0A0089B29A53768BFE65D6E06183A1B60BE (UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m79D616348A09F5E2973F405F4F9D944744FAD6A5 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.AdditionalCanvasShaderChannels UnityEngine.Canvas::get_additionalShaderChannels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_additionalShaderChannels_mCAA1006118961EDC76A8A79B084D14768A42F206 (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Canvas::set_additionalShaderChannels(UnityEngine.AdditionalCanvasShaderChannels)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_set_additionalShaderChannels_m857104DC8EA363A2E470CD3B873C60483135C4BD (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.VertexHelper::PopulateUIVertex(UnityEngine.UIVertex&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_PopulateUIVertex_m540F0A80C1A55C7444259CEE118CAC61F198B555 (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A * ___vertex0, int32_t ___i1, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.VertexHelper::SetUIVertex(UnityEngine.UIVertex,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_SetUIVertex_mE6E1BF09DA31C90FA922B6F96123D7C363A71D7E (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  ___vertex0, int32_t ___i1, const RuntimeMethod* method);
// System.Int32 UnityEngine.UI.VertexHelper::get_currentVertCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexHelper_get_currentVertCount_m4E9932F9BBCC9CB9636B3415A03454D6B7A92807 (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.BaseMeshEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMeshEffect__ctor_m7D21D47A3B87CB9B715FCEEE1B955E417FEEF01B (BaseMeshEffect_tC7D44B0AC6406BAC3E4FC4579A43FC135BDB6FDA * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Physics.FocusDetails::get_Object()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * FocusDetails_get_Object_m593562D9DCA8193E20D515DF008EA43CF831537A_inline (FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * __this, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2 (const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2 (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___eventSystem0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Assert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m9AB596E4960380752FD4CB3292D07A86E995938B (bool ___condition0, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::get_CurrentPointerTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PointerData_get_CurrentPointerTarget_m07A8F205B44205D80EAEE3F839396916CD6585A2 (PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::set_PreviousPointerTarget(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerData_set_PreviousPointerTarget_m1C2D34EE516D36A0A25526B9BB9DB79926182809_inline (PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.FocusDetails::set_Object(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_Object_m4E5DD3191067CB1AFC14DA6EFA4C2EF287BA4B18_inline (FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.FocusDetails::set_LastRaycastHit(Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_LastRaycastHit_m397E573F5211354A896C5A2D9C46FC76D85A9BF8_inline (FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * __this, MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.FocusDetails::set_LastGraphicsRaycastResult(UnityEngine.EventSystems.RaycastResult)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_LastGraphicsRaycastResult_m6E15CD20FEE2F7BAD790DC954D515876A28EDF59_inline (FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * __this, RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::set_RayStepIndex(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerData_set_RayStepIndex_mA6EACC6FA5B09A0C629463FFEED2ADED3B8F0D19_inline (PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Origin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayStep_get_Origin_m1D98389A42469C82B409493B72CA4F1B9A163BA6_inline (RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::set_StartPoint(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerData_set_StartPoint_mAC621EF433D9BE1FB288E371E9B6E29B08C355B7_inline (PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.FocusDetails::set_RayDistance(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_RayDistance_m7E4FC55A5E7D40E2EAFBE0F472913CFCA241AE97_inline (FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * __this, float ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.FocusDetails::set_Point(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_Point_mDF42A072098565B3023255F1B01A9289D9949181_inline (FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.FocusDetails::set_Normal(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_Normal_m97D9C7BBBA7B89569060CF5DAC31531D31866578_inline (FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float RayStep_get_Length_m13BE76C9C985DBEAB2B9BE30AA97E54E6B3D7A10_inline (RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Terminus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayStep_get_Terminus_mC3F67EB322BAF98ECD0DF68FC7D60465F89F9A35_inline (RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Direction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayStep_get_Direction_mC869D285E92E1BAA46067A30C6582EB2F910CD8C_inline (RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::get_Point()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FocusDetails_get_Point_m05AF86F597787DFEE128546888C1AD3610AD850B_inline (FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.FocusDetails::set_PointLocalSpace(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_PointLocalSpace_mAD4ED6ACE04168A465A990D8926CA6FB2D49EF3E_inline (FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::get_Normal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FocusDetails_get_Normal_m575D2A62A6B4471C2E0AF27CED93FCC9166F7343_inline (FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_InverseTransformDirection_m9EB6F7A2598FD8D6B52F0A6EBA96A3BAAF68D696 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.FocusDetails::set_NormalLocalSpace(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_NormalLocalSpace_m806F8C0A4CE825416966180EF61F24E53B1CFFDB_inline (FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::get_PointLocalSpace()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FocusDetails_get_PointLocalSpace_mB0230E50082B67D82154120CF74BD7D570136CFC_inline (FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::get_NormalLocalSpace()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FocusDetails_get_NormalLocalSpace_mB18EFA5B0FB1DA4F02B602A949898ED56C6CCC7E_inline (FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Physics.RayStep::Contains(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RayStep_Contains_m81BB4B24EA271ECBFD3D48AADADAF6AEDA71D4B7 (RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Physics.FocusDetails Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::get_Details()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA  PointerData_get_Details_m11BAAD7686702618344900607B1289A8DC9FE7A5 (PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::Equals(Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerData_Equals_m9845486CBD4B62007C45CC77F817ED4F15E8FC10 (PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * __this, PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * ___other0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___v0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * RaycastResult_get_gameObject_mABA10AC828B2E6603A6C088A4CCD40932F6AF5FF (RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::Matches(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerPreferences_Matches_m691F7B27778E9495F76FD5F12A170E6D905F16E6 (PointerPreferences_t75E8D925545E01FEB8547C84B2D1F5DAF05D8093 * __this, Type_t * ___queryType0, const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener::EnsureInputSystemValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * InputSystemGlobalHandlerListener_EnsureInputSystemValid_m6AE5875362DF81B05243E846649F1D11A572B2A1 (InputSystemGlobalHandlerListener_tE39526E6E6789D2FA1576A6AB07D1A3F163458B2 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__77>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CRaiseSourceDetectedU3Ed__77_tE01F382DF1053619EAD0EAAA66A5AF483CF8A74F_m09A4368D9D466A554E4F7003937A525CF258D081 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CRaiseSourceDetectedU3Ed__77_tE01F382DF1053619EAD0EAAA66A5AF483CF8A74F ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CRaiseSourceDetectedU3Ed__77_tE01F382DF1053619EAD0EAAA66A5AF483CF8A74F **, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_mF3F724FDD4660E37EEA11B37B562AA2EB0FE6220_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_mF1BC6A87C71157B2BFDF556079A9B189F3FCFDE9 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.GazeProvider::get_GazeInputSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GazeProvider_get_GazeInputSource_m6D969875917FF0E3B45641F6B4DC86F053340BC1 (GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.GazeProvider::get_GazePointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GazeProvider_get_GazePointer_m9648918C88F08AFB6562C4533B3C99124643A069 (GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider::<>n__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeProvider_U3CU3En__0_m9BDD31BEC8DACA51356AD732E5BA946F3F2524D7 (GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Input.GazeProvider/<Start>d__63>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__63_tFB3170C366FB7914205299BE63614F1F4B0A40C3_m3139DE607A08F0411C521BA404E7E37BFE0B3096 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStartU3Ed__63_tFB3170C366FB7914205299BE63614F1F4B0A40C3 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CStartU3Ed__63_tFB3170C366FB7914205299BE63614F1F4B0A40C3 **, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_mF3F724FDD4660E37EEA11B37B562AA2EB0FE6220_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider::RaiseSourceDetected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeProvider_RaiseSourceDetected_m3B2796254708DA8699D180700134ECB9F7D9E4FA (GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.GenericPointer::.ctor(System.String,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericPointer__ctor_m7B2B3AA8EDE0F361255C9F0DE4085909F6DE33C9 (GenericPointer_tD86AC079044CE9DE5F79A1B579F71953A66658DD * __this, String_t* ___pointerName0, RuntimeObject* ___inputSourceParent1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.GenericPointer::set_PrioritizedLayerMasksOverride(UnityEngine.LayerMask[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GenericPointer_set_PrioritizedLayerMasksOverride_m92A216D38AD36ECCF5DFCD173138A3451F72B432_inline (GenericPointer_tD86AC079044CE9DE5F79A1B579F71953A66658DD * __this, LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.GenericPointer::set_IsInteractionEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericPointer_set_IsInteractionEnabled_m8B0EB278A52F09515028D98B47BF0A8FD6F2021D (GenericPointer_tD86AC079044CE9DE5F79A1B579F71953A66658DD * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::get_IsEyeTrackingEnabledAndValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GazeProvider_get_IsEyeTrackingEnabledAndValid_m06EB6D4A6744B55455DEAC018FAF2A20187BC404 (GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource::set_SourceType(Microsoft.MixedReality.Toolkit.Input.InputSourceType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseGenericInputSource_set_SourceType_m26B2EA545018ABFE84390E15BF84630C46165402_inline (BaseGenericInputSource_t3BC0CA373CD52DBE59FF183FDE0B2795BC7FBC9E * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.GazeProvider::get_LatestEyeGaze()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  GazeProvider_get_LatestEyeGaze_m1130241A6F49BA5F102BB19D998642E77C890CA1_inline (GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::get_UseHeadGazeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GazeProvider_get_UseHeadGazeOverride_mDD27B7E6B59346D78ECE99FE3FEE4BB5FC08E259_inline (GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_inline (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *, const RuntimeMethod*))Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<UnityEngine.Vector3>::get_Value()
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *, const RuntimeMethod*))Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPlayspace_InverseTransformPoint_m02FDC28FED10476D9F16417BF9BE9EAC16FFC797 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::InverseTransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPlayspace_InverseTransformDirection_mC05507805FA15A88C5E37A58F697CC4FCE29A0B2 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldDirection0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPlayspace_TransformPoint_mCC072AE0B50094CE0E7A972B14556AA0EEE36448 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPlayspace_TransformDirection_m926A8371FCD68DBC01B9C7AE7FF661D005D864B2 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localDirection0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.GenericPointer::get_Rays()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RayStepU5BU5D_tCC36F43D996F3D35CC79E15BA0E3B1C10EBF1DC8* GenericPointer_get_Rays_m9E6E23787FA77505D47A43A6113D27447CCC6B13_inline (GenericPointer_tD86AC079044CE9DE5F79A1B579F71953A66658DD * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.RayStep::UpdateRayStep(UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayStep_UpdateRayStep_m854F9ACA9F4147057292DB968B5F56BEC8859A1B (RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___terminus1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::get_None()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  MixedRealityInputAction_get_None_m2699B1F27BCBC764B5BE98CE502466162142914B_inline (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFF947632199F24ACAD7647EDBEC4C250639561D8 (U3CU3Ec_t5A220AA1B09C7BA7AD1E3C87A43A8F65C986B878 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * __this, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___predicate0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions::GetAwaiter(UnityEngine.WaitUntil)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 * AwaiterExtensions_GetAwaiter_mA3AFD1DB345C130BF701BE302DAF7654FA3EEED0 (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * ___instruction0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_mFFFDFC33C8B0031C7531E7CCA4BE13ECAB038EB8_inline (SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_TisU3CEnsureInputSystemValidU3Ed__4_tDFF204F4A209F39BBED9FF447E84E291A9691B6F_mEA3DCA64E69C5902EC68FEFA6D9D5B4348A47256 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 ** ___awaiter0, U3CEnsureInputSystemValidU3Ed__4_tDFF204F4A209F39BBED9FF447E84E291A9691B6F ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 **, U3CEnsureInputSystemValidU3Ed__4_tDFF204F4A209F39BBED9FF447E84E291A9691B6F **, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisRuntimeObject_m53C73637E160C055CA914211B2B12D384B9A80BD_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_GetResult_mF074C7B50AF35EA1BE937F5E5D6E81E125049FD5 (SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_tA608AE85547E154DFD08A56D53F5AC78CCE2251D_m318BF45A45E3A53566D557825AE44A159DBA00BC (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStartU3Ed__2_tA608AE85547E154DFD08A56D53F5AC78CCE2251D ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CStartU3Ed__2_tA608AE85547E154DFD08A56D53F5AC78CCE2251D **, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_mF3F724FDD4660E37EEA11B37B562AA2EB0FE6220_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4A4C842974CF50C8E6D377640BCFE2A1D3988889 (U3CU3Ec_t5EA49CAA78D5D4F96D4BC61FCE7479A143530CCE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_TisU3CEnsureInputSystemValidU3Ed__4_t483A21CE125D456473D51EC11F18208F19416798_m389757D93D363A180E5C9FF3AFCB054EB3FCB3C5 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 ** ___awaiter0, U3CEnsureInputSystemValidU3Ed__4_t483A21CE125D456473D51EC11F18208F19416798 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 **, U3CEnsureInputSystemValidU3Ed__4_t483A21CE125D456473D51EC11F18208F19416798 **, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisRuntimeObject_m53C73637E160C055CA914211B2B12D384B9A80BD_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener::EnsureInputSystemValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * InputSystemGlobalListener_EnsureInputSystemValid_m604F5FFD85AC63C57FBC5A1620693DE49F1D0887 (InputSystemGlobalListener_tFD9BB9DFC8D3641330B90871932353F182FDB2C2 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t27D2FF7C6730C5A76FA7A33B5BCEA7C175F3705A_m1205BF0963ED64BE1C325BE0AA742724EA4302AE (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStartU3Ed__2_t27D2FF7C6730C5A76FA7A33B5BCEA7C175F3705A ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CStartU3Ed__2_t27D2FF7C6730C5A76FA7A33B5BCEA7C175F3705A **, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_mF3F724FDD4660E37EEA11B37B562AA2EB0FE6220_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16_U3CU3Em__Finally1_m6ACE0844EDF4B4F9692CCFB44BD536E4AE50CB7B (U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>::GetEnumerator()
inline Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337  Dictionary_2_GetEnumerator_m0F70BE553DF5B805B926E5BA1B1CF6452C41FC93 (Dictionary_2_tB7478EF7A1D56D0534BD9AF224099A735CEFB6E6 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337  (*) (Dictionary_2_tB7478EF7A1D56D0534BD9AF224099A735CEFB6E6 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m17437D82A5AF502166F10DD12B5C5830DDB95444_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>::get_Current()
inline KeyValuePair_2_tB056ADCF48A6392925AFCA43342F5E6483191DE0  Enumerator_get_Current_m22BBCEF5FEB5A97F2B8AA9470FEAA0F3093F22FC_inline (Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tB056ADCF48A6392925AFCA43342F5E6483191DE0  (*) (Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337 *, const RuntimeMethod*))Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>::get_Value()
inline PointerData_t524B70063DAD63AB1B38F1BB8C9EE71E1D04DC1F * KeyValuePair_2_get_Value_mEB783152B3091A6573D44BDD18EDC88DC769C2A4_inline (KeyValuePair_2_tB056ADCF48A6392925AFCA43342F5E6483191DE0 * __this, const RuntimeMethod* method)
{
	return ((  PointerData_t524B70063DAD63AB1B38F1BB8C9EE71E1D04DC1F * (*) (KeyValuePair_2_tB056ADCF48A6392925AFCA43342F5E6483191DE0 *, const RuntimeMethod*))KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>::MoveNext()
inline bool Enumerator_MoveNext_m979E07653F7545D173CA9A1454D729620EA8BF6E (Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337 *, const RuntimeMethod*))Enumerator_MoveNext_mEEAA9A380252BB2F9B2403853F4C00F2F643ADC4_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16_System_IDisposable_Dispose_mCD47D711BD9E389FA56AC3E46282085A87F03448 (U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>::Dispose()
inline void Enumerator_Dispose_mE4D94E308200C345DEDFD914D3484FD896CE9C66 (Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337 *, const RuntimeMethod*))Enumerator_Dispose_m7567E65C01E35A09AD2AD4814D708A8E76469D31_gshared)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16__ctor_mF8E876F1EFA5FCC1099F44AFE7595A56F18DAC05 (U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.Collections.Generic.IEnumerable<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_Generic_IEnumerableU3CMicrosoft_MixedReality_Toolkit_Input_IMixedRealityPointerU3E_GetEnumerator_mBBE6AF86C5CD4E75520C45D780BDC256C7580754 (U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerInputModule/MouseState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseState__ctor_m16EF8D45AF8A178368547BD1CE4FBF9DBC563605 (MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m71412FA75C39035DDF3452A5FF80BE9814CC3769 (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourceStateEventData>(UnityEngine.EventSystems.BaseEventData)
inline SourceStateEventData_tE68D8C1FF7799BB758CA7436749CAC8052D71D77 * ExecuteEvents_ValidateEventData_TisSourceStateEventData_tE68D8C1FF7799BB758CA7436749CAC8052D71D77_mD647BA67619F8078D2E0AD8D0AE2D34D8B9EFFA0 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourceStateEventData_tE68D8C1FF7799BB758CA7436749CAC8052D71D77 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState>>(UnityEngine.EventSystems.BaseEventData)
inline SourcePoseEventData_1_t8C83AA36628EFD7CDCC9FCF8AB48C7CDB70B9516 * ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t8C83AA36628EFD7CDCC9FCF8AB48C7CDB70B9516_m0FE7B14F50B377880C5AE271E0C90A9B3F2B59B8 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourcePoseEventData_1_t8C83AA36628EFD7CDCC9FCF8AB48C7CDB70B9516 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2>>(UnityEngine.EventSystems.BaseEventData)
inline SourcePoseEventData_1_t6035127052FD3413F4B8D698EA70B46DF636B40F * ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t6035127052FD3413F4B8D698EA70B46DF636B40F_m4D36643A0D7FEBA5141DF96AF7A0336E697AE18A (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourcePoseEventData_1_t6035127052FD3413F4B8D698EA70B46DF636B40F * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3>>(UnityEngine.EventSystems.BaseEventData)
inline SourcePoseEventData_1_t777563EDBE3D96857FDE0FCE63785C606EBFFCBE * ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t777563EDBE3D96857FDE0FCE63785C606EBFFCBE_m10F421CF23A3A400CD4F0DE1893B9BA4B35FE5EC (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourcePoseEventData_1_t777563EDBE3D96857FDE0FCE63785C606EBFFCBE * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion>>(UnityEngine.EventSystems.BaseEventData)
inline SourcePoseEventData_1_t311DB5A8EE84E186C29732ED88DB5994EB2CAD1D * ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t311DB5A8EE84E186C29732ED88DB5994EB2CAD1D_m239B51D4196B7B12B93591E34FC8E4CE76E7181E (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourcePoseEventData_1_t311DB5A8EE84E186C29732ED88DB5994EB2CAD1D * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>(UnityEngine.EventSystems.BaseEventData)
inline SourcePoseEventData_1_t84A604B2C5FDE7D0F3E4DE6FF23EA9C2773CC565 * ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t84A604B2C5FDE7D0F3E4DE6FF23EA9C2773CC565_m5463A4BA667FCE456700102C55ACE54EF0CD5DA6 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourcePoseEventData_1_t84A604B2C5FDE7D0F3E4DE6FF23EA9C2773CC565 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.FocusEventData>(UnityEngine.EventSystems.BaseEventData)
inline FocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20 * ExecuteEvents_ValidateEventData_TisFocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20_m36F130187A4C9793DE99D642B2D730444C71577E (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  FocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData>(UnityEngine.EventSystems.BaseEventData)
inline MixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE * ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE_m7F978E209D513634A2424B711C46F0E61E874735 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  MixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * ExecuteEvents_ValidateEventData_TisInputEventData_t60DF86D63F954673178E2461D27DB8150C84A017_mE0D86703A444865133801F03AD4571D24ED886B6 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::get_MixedRealityInputAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  BaseInputEventData_get_MixedRealityInputAction_mA78E886C78EB21F0E603211E06AAA624B8059CEE_inline (BaseInputEventData_t33EF0985CB22B5C3318A0464BDBF0BDF3F9B7411 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::op_Inequality(Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityInputAction_op_Inequality_m9F5335D0C40F92A7CCD1DF9CE2C058C44F9A787F (MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  ___left0, MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  ___right1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler>(!!0)
inline bool UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_tADE02EB7F7F73A5E6DBC48BA0A5E8D37793D6AC7_mA8D4A6BAC4ED7FA2F418135185C1E1D89F734F9F (RuntimeObject* ___interface0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))UnityObjectExtensions_IsNull_TisRuntimeObject_m383C6FBFC9FEE623F3EDBC2835909238224CB981_gshared)(___interface0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler>(!!0)
inline bool UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275_m39B0F15B395F1EC250E61D16731737864BBCA282 (RuntimeObject* ___interface0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))UnityObjectExtensions_IsNull_TisRuntimeObject_m383C6FBFC9FEE623F3EDBC2835909238224CB981_gshared)(___interface0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_t14738FF3BEDDEC90DB73AC6834680FA99924E98E * ExecuteEvents_ValidateEventData_TisInputEventData_1_t14738FF3BEDDEC90DB73AC6834680FA99924E98E_m690BB5C662E6F01B7A15040193EBEE96B1EE6641 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_t14738FF3BEDDEC90DB73AC6834680FA99924E98E * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_tE0571359448813352C91BED8440BD824D08412F7 * ExecuteEvents_ValidateEventData_TisInputEventData_1_tE0571359448813352C91BED8440BD824D08412F7_m816378C93CF3AD3650AED93D4E5AFCDFBF3D3595 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_tE0571359448813352C91BED8440BD824D08412F7 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_t3CC0187E4344201378E113CFC270CB5C4AF36D86 * ExecuteEvents_ValidateEventData_TisInputEventData_1_t3CC0187E4344201378E113CFC270CB5C4AF36D86_m6202F662B34E3BCA29B88E2C423DB3A66B9A3716 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_t3CC0187E4344201378E113CFC270CB5C4AF36D86 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Quaternion>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_t7F018120437B38470980D7DC0A7FDBA6732ABF30 * ExecuteEvents_ValidateEventData_TisInputEventData_1_t7F018120437B38470980D7DC0A7FDBA6732ABF30_m2129AC3F038C4BEF0B506ECE284ED37D7C7F49A1 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_t7F018120437B38470980D7DC0A7FDBA6732ABF30 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_tA33647F64CCCCF6BC521D4100BE48B24C6BFBD3B * ExecuteEvents_ValidateEventData_TisInputEventData_1_tA33647F64CCCCF6BC521D4100BE48B24C6BFBD3B_mFFDCF554C5EC4D10E36C89E06BDCC2F80F7ECC35 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_tA33647F64CCCCF6BC521D4100BE48B24C6BFBD3B * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler>(!!0)
inline bool UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t0A5BCFF83D2F8CC4CDCA8E286694151E22C62814_mFC83C9A2367A7604F8BD04E0B3F3E28DECB583FD (RuntimeObject* ___interface0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))UnityObjectExtensions_IsNull_TisRuntimeObject_m383C6FBFC9FEE623F3EDBC2835909238224CB981_gshared)(___interface0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SpeechEventData>(UnityEngine.EventSystems.BaseEventData)
inline SpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA * ExecuteEvents_ValidateEventData_TisSpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA_m628BC374FB56E5B33E8A4CF9A8DDC5DC110B9B19 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler>(!!0)
inline bool UnityObjectExtensions_IsNull_TisIMixedRealitySpeechHandler_t5334FAB956513541ADED66C150F22BA8CFE475D5_m5618D3D9A5B03BA7A5AC61A4F46BF926D2F9647B (RuntimeObject* ___interface0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))UnityObjectExtensions_IsNull_TisRuntimeObject_m383C6FBFC9FEE623F3EDBC2835909238224CB981_gshared)(___interface0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.DictationEventData>(UnityEngine.EventSystems.BaseEventData)
inline DictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9 * ExecuteEvents_ValidateEventData_TisDictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9_m10EE75CB04F08262DD52F77BE4AF5514FDCCFE32 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  DictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_t06D41EEA2E71B9C529589C04485505606369BE1C * ExecuteEvents_ValidateEventData_TisInputEventData_1_t06D41EEA2E71B9C529589C04485505606369BE1C_mB37A0C7E484A4AC177CA18B67A6DA398E5B14B86 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_t06D41EEA2E71B9C529589C04485505606369BE1C * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_t2D9D7DD999D58E4BCE0A36B14B5C928399CDAE3F * ExecuteEvents_ValidateEventData_TisInputEventData_1_t2D9D7DD999D58E4BCE0A36B14B5C928399CDAE3F_m3F470CC5361D08F213269173D8BCBB1D8D10419A (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_t2D9D7DD999D58E4BCE0A36B14B5C928399CDAE3F * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData>(UnityEngine.EventSystems.BaseEventData)
inline HandTrackingInputEventData_t17B384EF4D24CF64EF2884AB370CB9066CA564A7 * ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_t17B384EF4D24CF64EF2884AB370CB9066CA564A7_mF3B8DA57E0A2A385185BD4D44E43E8C23801C745 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  HandTrackingInputEventData_t17B384EF4D24CF64EF2884AB370CB9066CA564A7 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC4BB8C9065FB3B872AE78A7C26BD244FAAC64645 (U3CU3Ec_t52E15252849DE7F24C4F1D5FCC1F77B771665B98 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0 (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_m1B2CAD1BC7C7C390514317A8D51FB798D4622AE4 (intptr_t ___markerPtr0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableSurface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchableSurface__ctor_mD73551146F62918A26E92EB351B3049F510B931B (NearInteractionTouchableSurface_tF1A799058D9E1334B3153D037E843CCC0DEB1A16 * __this, const RuntimeMethod* method)
{
	{
		BaseNearInteractionTouchable__ctor_m0FAEACA691389F89EBF3CBCFBF30483AF74C82F3(__this, /*hidden argument*/NULL);
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
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI> Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::get_Instances()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NearInteractionTouchableUnityUI_get_Instances_m1597404DD045F08CE8404DC19131F40EB748ADE5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NearInteractionTouchableUnityUI_tE516D0C98E3583A7EEBA0E60FA41CBD7844268DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IReadOnlyList<NearInteractionTouchableUnityUI> Instances => instances;
		IL2CPP_RUNTIME_CLASS_INIT(NearInteractionTouchableUnityUI_tE516D0C98E3583A7EEBA0E60FA41CBD7844268DF_il2cpp_TypeInfo_var);
		List_1_t92334C309B2576B7D5B460950F0E56B19CC288A4 * L_0 = ((NearInteractionTouchableUnityUI_tE516D0C98E3583A7EEBA0E60FA41CBD7844268DF_StaticFields*)il2cpp_codegen_static_fields_for(NearInteractionTouchableUnityUI_tE516D0C98E3583A7EEBA0E60FA41CBD7844268DF_il2cpp_TypeInfo_var))->get_instances_7();
		return L_0;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::get_LocalCenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  NearInteractionTouchableUnityUI_get_LocalCenter_m7E3F448C61F1570C82B39D950F76F0B7D364A9D2 (NearInteractionTouchableUnityUI_tE516D0C98E3583A7EEBA0E60FA41CBD7844268DF * __this, const RuntimeMethod* method)
{
	{
		// public override Vector3 LocalCenter => Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::get_LocalPressDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  NearInteractionTouchableUnityUI_get_LocalPressDirection_mAFE0C2DBF9256E5C854ABB70C229F7CB73CD7FCD (NearInteractionTouchableUnityUI_tE516D0C98E3583A7EEBA0E60FA41CBD7844268DF * __this, const RuntimeMethod* method)
{
	{
		// public override Vector3 LocalPressDirection => Vector3.forward;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::get_Bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  NearInteractionTouchableUnityUI_get_Bounds_m39876841456E0035018D66138F652EC947A4DE1D (NearInteractionTouchableUnityUI_tE516D0C98E3583A7EEBA0E60FA41CBD7844268DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_get_Value_mAF4DD3A825C2A168053CA6BA55CD1C92397053C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override Vector2 Bounds => rectTransform.Value.rect.size;
		Lazy_1_t7A2FE75485683BDF384AC4F2E3E706A140DC2628 * L_0 = __this->get_rectTransform_6();
		NullCheck(L_0);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1;
		L_1 = Lazy_1_get_Value_mAF4DD3A825C2A168053CA6BA55CD1C92397053C1(L_0, /*hidden argument*/Lazy_1_get_Value_mAF4DD3A825C2A168053CA6BA55CD1C92397053C1_RuntimeMethod_var);
		NullCheck(L_1);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_2;
		L_2 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Rect_get_size_m752B3BB45AE862F6EAE941ED5E5C1B01C0973A00((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchableUnityUI__ctor_mD88F9043676DD0EF183F8916362DCCC3BDC76068 (NearInteractionTouchableUnityUI_tE516D0C98E3583A7EEBA0E60FA41CBD7844268DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m86E416AA060825F6CB17CB373EA14F964C18F131_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t9C6E028D7DEC6AB52806A10D996C478296C6EAAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1__ctor_mBA873D19799CE0A3BFD7EAC23B9A0B92FE76EB32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_t7A2FE75485683BDF384AC4F2E3E706A140DC2628_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NearInteractionTouchableUnityUI()
		NearInteractionTouchableSurface__ctor_mD73551146F62918A26E92EB351B3049F510B931B(__this, /*hidden argument*/NULL);
		// rectTransform = new Lazy<RectTransform>(GetComponent<RectTransform>);
		Func_1_t9C6E028D7DEC6AB52806A10D996C478296C6EAAA * L_0 = (Func_1_t9C6E028D7DEC6AB52806A10D996C478296C6EAAA *)il2cpp_codegen_object_new(Func_1_t9C6E028D7DEC6AB52806A10D996C478296C6EAAA_il2cpp_TypeInfo_var);
		Func_1__ctor_m86E416AA060825F6CB17CB373EA14F964C18F131(L_0, __this, (intptr_t)((intptr_t)Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m86E416AA060825F6CB17CB373EA14F964C18F131_RuntimeMethod_var);
		Lazy_1_t7A2FE75485683BDF384AC4F2E3E706A140DC2628 * L_1 = (Lazy_1_t7A2FE75485683BDF384AC4F2E3E706A140DC2628 *)il2cpp_codegen_object_new(Lazy_1_t7A2FE75485683BDF384AC4F2E3E706A140DC2628_il2cpp_TypeInfo_var);
		Lazy_1__ctor_mBA873D19799CE0A3BFD7EAC23B9A0B92FE76EB32(L_1, L_0, /*hidden argument*/Lazy_1__ctor_mBA873D19799CE0A3BFD7EAC23B9A0B92FE76EB32_RuntimeMethod_var);
		__this->set_rectTransform_6(L_1);
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::DistanceToTouchable(UnityEngine.Vector3,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NearInteractionTouchableUnityUI_DistanceToTouchable_mC4DE6F38A4D4509243E9CDC5B1EE42CBE8BB6374 (NearInteractionTouchableUnityUI_tE516D0C98E3583A7EEBA0E60FA41CBD7844268DF * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___samplePoint0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___normal1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_get_Value_mAF4DD3A825C2A168053CA6BA55CD1C92397053C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		// normal = transform.TransformDirection(-LocalPressDirection);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = ___normal1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = VirtFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(7 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableSurface::get_LocalPressDirection() */, __this);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_TransformDirection_m6B5E3F0A7C6323159DEC6D9BC035FB53ADD96E91(L_1, L_3, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_0 = L_4;
		// Vector3 localPoint = transform.InverseTransformPoint(samplePoint);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___samplePoint0;
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// if (!rectTransform.Value.rect.Contains(localPoint))
		Lazy_1_t7A2FE75485683BDF384AC4F2E3E706A140DC2628 * L_8 = __this->get_rectTransform_6();
		NullCheck(L_8);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_9;
		L_9 = Lazy_1_get_Value_mAF4DD3A825C2A168053CA6BA55CD1C92397053C1(L_8, /*hidden argument*/Lazy_1_get_Value_mAF4DD3A825C2A168053CA6BA55CD1C92397053C1_RuntimeMethod_var);
		NullCheck(L_9);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_10;
		L_10 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_0;
		bool L_12;
		L_12 = Rect_Contains_m51C65159B1706EB00CC962D7CD1CEC2EBD85BC3A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_2), L_11, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_0053;
		}
	}
	{
		// return float.PositiveInfinity;
		V_3 = (std::numeric_limits<float>::infinity());
		goto IL_006e;
	}

IL_0053:
	{
		// localPoint = transform.TransformSize(localPoint);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = TransformExtensions_TransformSize_m86C5C503675ED65DB031066CB46B313D1DDA893B(L_14, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		// return Math.Abs(localPoint.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_0;
		float L_18 = L_17.get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_19;
		L_19 = fabsf(L_18);
		V_3 = L_19;
		goto IL_006e;
	}

IL_006e:
	{
		// }
		float L_20 = V_3;
		return L_20;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchableUnityUI_OnEnable_m8C8391CB3A10A569957829B2E6D09DD949E2F0F0 (NearInteractionTouchableUnityUI_tE516D0C98E3583A7EEBA0E60FA41CBD7844268DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5EBB88B9DA5FD4751FEE067866490E5DCCBC392A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NearInteractionTouchableUnityUI_tE516D0C98E3583A7EEBA0E60FA41CBD7844268DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instances.Add(this);
		IL2CPP_RUNTIME_CLASS_INIT(NearInteractionTouchableUnityUI_tE516D0C98E3583A7EEBA0E60FA41CBD7844268DF_il2cpp_TypeInfo_var);
		List_1_t92334C309B2576B7D5B460950F0E56B19CC288A4 * L_0 = ((NearInteractionTouchableUnityUI_tE516D0C98E3583A7EEBA0E60FA41CBD7844268DF_StaticFields*)il2cpp_codegen_static_fields_for(NearInteractionTouchableUnityUI_tE516D0C98E3583A7EEBA0E60FA41CBD7844268DF_il2cpp_TypeInfo_var))->get_instances_7();
		NullCheck(L_0);
		List_1_Add_m5EBB88B9DA5FD4751FEE067866490E5DCCBC392A(L_0, __this, /*hidden argument*/List_1_Add_m5EBB88B9DA5FD4751FEE067866490E5DCCBC392A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchableUnityUI_OnDisable_m186B66682DC4189B2561D16908EB5F9290B9E5E5 (NearInteractionTouchableUnityUI_tE516D0C98E3583A7EEBA0E60FA41CBD7844268DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m3B436443D14F421818C16DD9F47A31EA8CDB9E2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NearInteractionTouchableUnityUI_tE516D0C98E3583A7EEBA0E60FA41CBD7844268DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instances.Remove(this);
		IL2CPP_RUNTIME_CLASS_INIT(NearInteractionTouchableUnityUI_tE516D0C98E3583A7EEBA0E60FA41CBD7844268DF_il2cpp_TypeInfo_var);
		List_1_t92334C309B2576B7D5B460950F0E56B19CC288A4 * L_0 = ((NearInteractionTouchableUnityUI_tE516D0C98E3583A7EEBA0E60FA41CBD7844268DF_StaticFields*)il2cpp_codegen_static_fields_for(NearInteractionTouchableUnityUI_tE516D0C98E3583A7EEBA0E60FA41CBD7844268DF_il2cpp_TypeInfo_var))->get_instances_7();
		NullCheck(L_0);
		bool L_1;
		L_1 = List_1_Remove_m3B436443D14F421818C16DD9F47A31EA8CDB9E2A(L_0, __this, /*hidden argument*/List_1_Remove_m3B436443D14F421818C16DD9F47A31EA8CDB9E2A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchableUnityUI__cctor_m1D1681828A31A079114F95E9D590F0CB35E7EF14 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m90BBD48A5C6C1F74D976D6A56A2C8ED1CD45017A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t92334C309B2576B7D5B460950F0E56B19CC288A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NearInteractionTouchableUnityUI_tE516D0C98E3583A7EEBA0E60FA41CBD7844268DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly List<NearInteractionTouchableUnityUI> instances = new List<NearInteractionTouchableUnityUI>();
		List_1_t92334C309B2576B7D5B460950F0E56B19CC288A4 * L_0 = (List_1_t92334C309B2576B7D5B460950F0E56B19CC288A4 *)il2cpp_codegen_object_new(List_1_t92334C309B2576B7D5B460950F0E56B19CC288A4_il2cpp_TypeInfo_var);
		List_1__ctor_m90BBD48A5C6C1F74D976D6A56A2C8ED1CD45017A(L_0, /*hidden argument*/List_1__ctor_m90BBD48A5C6C1F74D976D6A56A2C8ED1CD45017A_RuntimeMethod_var);
		((NearInteractionTouchableUnityUI_tE516D0C98E3583A7EEBA0E60FA41CBD7844268DF_StaticFields*)il2cpp_codegen_static_fields_for(NearInteractionTouchableUnityUI_tE516D0C98E3583A7EEBA0E60FA41CBD7844268DF_il2cpp_TypeInfo_var))->set_instances_7(L_0);
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
// System.Boolean Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableVolume::get_ColliderEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NearInteractionTouchableVolume_get_ColliderEnabled_m21843B16C911F44E1AEC582A8EB2C20F01C9D8FF (NearInteractionTouchableVolume_tDE281E73D1A8AD596232A1443EE49ADE12C31580 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		// public bool ColliderEnabled => touchableCollider.enabled && touchableCollider.gameObject.activeInHierarchy;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = __this->get_touchableCollider_6();
		NullCheck(L_0);
		bool L_1;
		L_1 = Collider_get_enabled_m03B73B5C97033F939387D1785BDF2619CADAEEB0(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_2 = __this->get_touchableCollider_6();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_3, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		return (bool)G_B3_0;
	}
}
// UnityEngine.Collider Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableVolume::get_TouchableCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * NearInteractionTouchableVolume_get_TouchableCollider_m222868D886C4E6FC0048141DE06B5290582221CC (NearInteractionTouchableVolume_tDE281E73D1A8AD596232A1443EE49ADE12C31580 * __this, const RuntimeMethod* method)
{
	{
		// public Collider TouchableCollider => touchableCollider;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = __this->get_touchableCollider_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableVolume::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchableVolume_OnValidate_mCE5B339F8413D7931BA14B4CE158D926A65A4A46 (NearInteractionTouchableVolume_tDE281E73D1A8AD596232A1443EE49ADE12C31580 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnValidate();
		BaseNearInteractionTouchable_OnValidate_mE6FCEA0D2B034F19C68468702A743DF797287797(__this, /*hidden argument*/NULL);
		// touchableCollider = GetComponent<Collider>();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0;
		L_0 = Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60(__this, /*hidden argument*/Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60_RuntimeMethod_var);
		__this->set_touchableCollider_6(L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableVolume::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchableVolume_Awake_m351BD16E6290F7651C0ACFDF0A1274CE63179883 (NearInteractionTouchableVolume_tDE281E73D1A8AD596232A1443EE49ADE12C31580 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (touchableCollider == null)
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = __this->get_touchableCollider_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// touchableCollider = GetComponent<Collider>();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_3;
		L_3 = Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60(__this, /*hidden argument*/Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60_RuntimeMethod_var);
		__this->set_touchableCollider_6(L_3);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableVolume::DistanceToTouchable(UnityEngine.Vector3,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NearInteractionTouchableVolume_DistanceToTouchable_mB1C3C9AA192F27EAC6ABBA5D29326FA98EA9F172 (NearInteractionTouchableVolume_tDE281E73D1A8AD596232A1443EE49ADE12C31580 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___samplePoint0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___normal1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		// Vector3 closest = TouchableCollider.ClosestPoint(samplePoint);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0;
		L_0 = NearInteractionTouchableVolume_get_TouchableCollider_m222868D886C4E6FC0048141DE06B5290582221CC_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___samplePoint0;
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Collider_ClosestPoint_m7777917E298B31796DEE906B54F0102F6ED76676(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// normal = (samplePoint - closest);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_3 = ___normal1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___samplePoint0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_4, L_5, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_3 = L_6;
		// if (normal == Vector3.zero)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_7 = ___normal1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		bool L_10;
		L_10 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		// normal = samplePoint - TouchableCollider.bounds.center;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_12 = ___normal1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___samplePoint0;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_14;
		L_14 = NearInteractionTouchableVolume_get_TouchableCollider_m222868D886C4E6FC0048141DE06B5290582221CC_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_15;
		L_15 = Collider_get_bounds_mE341D29E1DA184ADD53A474D57D9082A3550EACB(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_2), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_13, L_16, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_12 = L_17;
		// normal.Normalize();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_18 = ___normal1;
		Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_18, /*hidden argument*/NULL);
		// return -1;
		V_3 = (-1.0f);
		goto IL_0073;
	}

IL_005e:
	{
		// float dist = normal.magnitude;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_19 = ___normal1;
		float L_20;
		L_20 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_19, /*hidden argument*/NULL);
		V_4 = L_20;
		// normal.Normalize();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_21 = ___normal1;
		Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_21, /*hidden argument*/NULL);
		// return dist;
		float L_22 = V_4;
		V_3 = L_22;
		goto IL_0073;
	}

IL_0073:
	{
		// }
		float L_23 = V_3;
		return L_23;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableVolume::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearInteractionTouchableVolume__ctor_m523E5E2F0413D3CB783C569B9E09525569A12762 (NearInteractionTouchableVolume_tDE281E73D1A8AD596232A1443EE49ADE12C31580 * __this, const RuntimeMethod* method)
{
	{
		BaseNearInteractionTouchable__ctor_m0FAEACA691389F89EBF3CBCFBF30483AF74C82F3(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Input.Utilities.ScaleMeshEffect::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleMeshEffect_Awake_mEB56FABAA68EA8F4DB6107A2A5141630698D22D1 (ScaleMeshEffect_t1E7AC88F6C33ABCF1570F90CFF80419E300A8D4F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m79D616348A09F5E2973F405F4F9D944744FAD6A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * V_0 = NULL;
	bool V_1 = false;
	{
		// base.Awake();
		UIBehaviour_Awake_m0A6FB0A0089B29A53768BFE65D6E06183A1B60BE(__this, /*hidden argument*/NULL);
		// var canvas = GetComponentInParent<Canvas>();
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_0;
		L_0 = Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m79D616348A09F5E2973F405F4F9D944744FAD6A5(__this, /*hidden argument*/Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m79D616348A09F5E2973F405F4F9D944744FAD6A5_RuntimeMethod_var);
		V_0 = L_0;
		// if (canvas != null)
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		// canvas.additionalShaderChannels |= AdditionalCanvasShaderChannels.TexCoord2;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_4 = V_0;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_5 = L_4;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Canvas_get_additionalShaderChannels_mCAA1006118961EDC76A8A79B084D14768A42F206(L_5, /*hidden argument*/NULL);
		NullCheck(L_5);
		Canvas_set_additionalShaderChannels_m857104DC8EA363A2E470CD3B873C60483135C4BD(L_5, ((int32_t)((int32_t)L_6|(int32_t)2)), /*hidden argument*/NULL);
		// canvas.additionalShaderChannels |= AdditionalCanvasShaderChannels.TexCoord3;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_7 = V_0;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_8 = L_7;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Canvas_get_additionalShaderChannels_mCAA1006118961EDC76A8A79B084D14768A42F206(L_8, /*hidden argument*/NULL);
		NullCheck(L_8);
		Canvas_set_additionalShaderChannels_m857104DC8EA363A2E470CD3B873C60483135C4BD(L_8, ((int32_t)((int32_t)L_9|(int32_t)4)), /*hidden argument*/NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Utilities.ScaleMeshEffect::ModifyMesh(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleMeshEffect_ModifyMesh_m0704D0867023123F90678D86F5D633BA8010E3BA (ScaleMeshEffect_t1E7AC88F6C33ABCF1570F90CFF80419E300A8D4F * __this, VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___vh0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m79D616348A09F5E2973F405F4F9D944744FAD6A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * V_0 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * V_2 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	bool V_7 = false;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * G_B2_0 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * G_B3_1 = NULL;
	{
		// var rectTransform = transform as RectTransform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		V_0 = ((RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)IsInstSealed((RuntimeObject*)L_0, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var));
		// var scale = new Vector2(rectTransform.rect.width * rectTransform.localScale.x,
		//                         rectTransform.rect.height * rectTransform.localScale.y);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = V_0;
		NullCheck(L_1);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_2;
		L_2 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_1, /*hidden argument*/NULL);
		V_5 = L_2;
		float L_3;
		L_3 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_5), /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_4 = V_0;
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_2();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_7 = V_0;
		NullCheck(L_7);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_8;
		L_8 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_7, /*hidden argument*/NULL);
		V_5 = L_8;
		float L_9;
		L_9 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_5), /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_10 = V_0;
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_y_3();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_1), ((float)il2cpp_codegen_multiply((float)L_3, (float)L_6)), ((float)il2cpp_codegen_multiply((float)L_9, (float)L_12)), /*hidden argument*/NULL);
		// var canvas = GetComponentInParent<Canvas>();
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_13;
		L_13 = Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m79D616348A09F5E2973F405F4F9D944744FAD6A5(__this, /*hidden argument*/Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m79D616348A09F5E2973F405F4F9D944744FAD6A5_RuntimeMethod_var);
		V_2 = L_13;
		// var depth = new Vector2((canvas ? (1.0f / canvas.transform.lossyScale.z) : 1.0f) * rectTransform.localScale.z,
		//                         -1.0f);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_14 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_14, /*hidden argument*/NULL);
		G_B1_0 = (&V_3);
		if (L_15)
		{
			G_B2_0 = (&V_3);
			goto IL_0062;
		}
	}
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B1_0;
		goto IL_0078;
	}

IL_0062:
	{
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_16 = V_2;
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_z_4();
		G_B3_0 = ((float)((float)(1.0f)/(float)L_19));
		G_B3_1 = G_B2_0;
	}

IL_0078:
	{
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_20 = V_0;
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_20, /*hidden argument*/NULL);
		float L_22 = L_21.get_z_4();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)G_B3_1, ((float)il2cpp_codegen_multiply((float)G_B3_0, (float)L_22)), (-1.0f), /*hidden argument*/NULL);
		// var vertex = new UIVertex();
		il2cpp_codegen_initobj((&V_4), sizeof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A ));
		// for (var i = 0; i < vh.currentVertCount; ++i)
		V_6 = 0;
		goto IL_00d3;
	}

IL_009b:
	{
		// vh.PopulateUIVertex(ref vertex, i);
		VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * L_23 = ___vh0;
		int32_t L_24 = V_6;
		NullCheck(L_23);
		VertexHelper_PopulateUIVertex_m540F0A80C1A55C7444259CEE118CAC61F198B555(L_23, (UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A *)(&V_4), L_24, /*hidden argument*/NULL);
		// vertex.uv2 = scale;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25 = V_1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_26;
		L_26 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504(L_25, /*hidden argument*/NULL);
		(&V_4)->set_uv2_6(L_26);
		// vertex.uv3 = depth;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27 = V_3;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_28;
		L_28 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504(L_27, /*hidden argument*/NULL);
		(&V_4)->set_uv3_7(L_28);
		// vh.SetUIVertex(vertex, i);
		VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * L_29 = ___vh0;
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_30 = V_4;
		int32_t L_31 = V_6;
		NullCheck(L_29);
		VertexHelper_SetUIVertex_mE6E1BF09DA31C90FA922B6F96123D7C363A71D7E(L_29, L_30, L_31, /*hidden argument*/NULL);
		// for (var i = 0; i < vh.currentVertCount; ++i)
		int32_t L_32 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00d3:
	{
		// for (var i = 0; i < vh.currentVertCount; ++i)
		int32_t L_33 = V_6;
		VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * L_34 = ___vh0;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = VertexHelper_get_currentVertCount_m4E9932F9BBCC9CB9636B3415A03454D6B7A92807(L_34, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)L_33) < ((int32_t)L_35))? 1 : 0);
		bool L_36 = V_7;
		if (L_36)
		{
			goto IL_009b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.Utilities.ScaleMeshEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleMeshEffect__ctor_m39BD91A36FCF6A0DA8399DA8BB44BA62A4555BCA (ScaleMeshEffect_t1E7AC88F6C33ABCF1570F90CFF80419E300A8D4F * __this, const RuntimeMethod* method)
{
	{
		BaseMeshEffect__ctor_m7D21D47A3B87CB9B715FCEEE1B955E417FEEF01B(__this, /*hidden argument*/NULL);
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
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::get_StartPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PointerData_get_StartPoint_m31060ACD75D4612A21959E3933F42F62D6EC81A0 (PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 StartPoint { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CStartPointU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::set_StartPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerData_set_StartPoint_mAC621EF433D9BE1FB288E371E9B6E29B08C355B7 (PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 StartPoint { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CStartPointU3Ek__BackingField_1(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Physics.FocusDetails Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::get_Details()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA  PointerData_get_Details_m11BAAD7686702618344900607B1289A8DC9FE7A5 (PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * __this, const RuntimeMethod* method)
{
	FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return focusDetails;
		FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA  L_0 = __this->get_focusDetails_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA  L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::set_Details(Microsoft.MixedReality.Toolkit.Physics.FocusDetails)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerData_set_Details_mBD924CBDD36B28915C7921E930D982539BFAEF2D (PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * __this, FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA  ___value0, const RuntimeMethod* method)
{
	{
		// focusDetails = value;
		FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA  L_0 = ___value0;
		__this->set_focusDetails_5(L_0);
		// }
		return;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::get_CurrentPointerTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PointerData_get_CurrentPointerTarget_m07A8F205B44205D80EAEE3F839396916CD6585A2 (PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject CurrentPointerTarget => focusDetails.Object;
		FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_0 = __this->get_address_of_focusDetails_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = FocusDetails_get_Object_m593562D9DCA8193E20D515DF008EA43CF831537A_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::get_PreviousPointerTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PointerData_get_PreviousPointerTarget_m91EDCC021A72355E7A286736AD435D7D58467F4F (PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject PreviousPointerTarget { get; private set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_U3CPreviousPointerTargetU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::set_PreviousPointerTarget(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerData_set_PreviousPointerTarget_m1C2D34EE516D36A0A25526B9BB9DB79926182809 (PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject PreviousPointerTarget { get; private set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_U3CPreviousPointerTargetU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::get_RayStepIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerData_get_RayStepIndex_m8C26DA584352C3F1F50FE68B52047B9D381FFDBC (PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * __this, const RuntimeMethod* method)
{
	{
		// public int RayStepIndex { get; private set; }
		int32_t L_0 = __this->get_U3CRayStepIndexU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::set_RayStepIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerData_set_RayStepIndex_mA6EACC6FA5B09A0C629463FFEED2ADED3B8F0D19 (PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int RayStepIndex { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CRayStepIndexU3Ek__BackingField_3(L_0);
		return;
	}
}
// UnityEngine.EventSystems.PointerEventData Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::get_GraphicEventData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * PointerData_get_GraphicEventData_m072F7BD2862CE92492835539BC366F8F7B6D64EB (PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * V_1 = NULL;
	{
		// if (graphicData == null)
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_0 = __this->get_graphicData_4();
		V_0 = (bool)((((RuntimeObject*)(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// graphicData = new PointerEventData(EventSystem.current);
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_2;
		L_2 = EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2(/*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_3 = (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)il2cpp_codegen_object_new(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2(L_3, L_2, /*hidden argument*/NULL);
		__this->set_graphicData_4(L_3);
	}

IL_0020:
	{
		// Debug.Assert(graphicData != null);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_4 = __this->get_graphicData_4();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Assert_m9AB596E4960380752FD4CB3292D07A86E995938B((bool)((!(((RuntimeObject*)(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0), /*hidden argument*/NULL);
		// return graphicData;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_5 = __this->get_graphicData_4();
		V_1 = L_5;
		goto IL_0038;
	}

IL_0038:
	{
		// }
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_6 = V_1;
		return L_6;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::get_IsCurrentPointerTargetInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerData_get_IsCurrentPointerTargetInvalid_mE13469208FA92229782EE9FE5E496ED07AC3C321 (PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	{
		// public bool IsCurrentPointerTargetInvalid => ((CurrentPointerTarget != null && !CurrentPointerTarget.activeInHierarchy)) ||
		//     (CurrentPointerTarget == null && !ReferenceEquals(CurrentPointerTarget, null));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = PointerData_get_CurrentPointerTarget_m07A8F205B44205D80EAEE3F839396916CD6585A2(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = PointerData_get_CurrentPointerTarget_m07A8F205B44205D80EAEE3F839396916CD6585A2(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}

IL_001b:
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = PointerData_get_CurrentPointerTarget_m07A8F205B44205D80EAEE3F839396916CD6585A2(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = PointerData_get_CurrentPointerTarget_m07A8F205B44205D80EAEE3F839396916CD6585A2(__this, /*hidden argument*/NULL);
		G_B5_0 = ((!(((RuntimeObject*)(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0035;
	}

IL_0034:
	{
		G_B5_0 = 0;
	}

IL_0035:
	{
		G_B7_0 = G_B5_0;
		goto IL_0038;
	}

IL_0037:
	{
		G_B7_0 = 1;
	}

IL_0038:
	{
		return (bool)G_B7_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerData__ctor_mC83C3860231F0B5BE9CE5574458B6294D44ABCF2 (PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * __this, RuntimeObject* ___pointer0, const RuntimeMethod* method)
{
	{
		// private FocusDetails focusDetails = new FocusDetails();
		FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_0 = __this->get_address_of_focusDetails_5();
		il2cpp_codegen_initobj(L_0, sizeof(FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA ));
		// public PointerData(IMixedRealityPointer pointer)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Pointer = pointer;
		RuntimeObject* L_1 = ___pointer0;
		__this->set_Pointer_0(L_1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::UpdateHit(Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerData_UpdateHit_m5A80AC44E206BCAB1E757A3DDD2C91EE57AB0CB1 (PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * __this, PointerHitResult_t3D95459BE11F9760912479670FF65B285E5B9D38 * ___hitResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_tF6CC763A793FD3C0F29BBAA0EE6780064868118C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF  V_4;
	memset((&V_4), 0, sizeof(V_4));
	RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF  V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (UpdateHitPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1_StaticFields*)il2cpp_codegen_static_fields_for(PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1_il2cpp_TypeInfo_var))->get_UpdateHitPerfMarker_6();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// if (hitResult.hitObject != CurrentPointerTarget)
			PointerHitResult_t3D95459BE11F9760912479670FF65B285E5B9D38 * L_2 = ___hitResult0;
			NullCheck(L_2);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = L_2->get_hitObject_2();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
			L_4 = PointerData_get_CurrentPointerTarget_m07A8F205B44205D80EAEE3F839396916CD6585A2(__this, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_5;
			L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, L_4, /*hidden argument*/NULL);
			V_2 = L_5;
			bool L_6 = V_2;
			if (!L_6)
			{
				goto IL_0033;
			}
		}

IL_0025:
		{
			// Pointer.OnPreCurrentPointerTargetChange();
			RuntimeObject* L_7 = __this->get_Pointer_0();
			NullCheck(L_7);
			InterfaceActionInvoker0::Invoke(32 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::OnPreCurrentPointerTargetChange() */, IMixedRealityPointer_tF6CC763A793FD3C0F29BBAA0EE6780064868118C_il2cpp_TypeInfo_var, L_7);
		}

IL_0033:
		{
			// PreviousPointerTarget = CurrentPointerTarget;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
			L_8 = PointerData_get_CurrentPointerTarget_m07A8F205B44205D80EAEE3F839396916CD6585A2(__this, /*hidden argument*/NULL);
			PointerData_set_PreviousPointerTarget_m1C2D34EE516D36A0A25526B9BB9DB79926182809_inline(__this, L_8, /*hidden argument*/NULL);
			// focusDetails.Object = hitResult.hitObject;
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_9 = __this->get_address_of_focusDetails_5();
			PointerHitResult_t3D95459BE11F9760912479670FF65B285E5B9D38 * L_10 = ___hitResult0;
			NullCheck(L_10);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = L_10->get_hitObject_2();
			FocusDetails_set_Object_m4E5DD3191067CB1AFC14DA6EFA4C2EF287BA4B18_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_9, L_11, /*hidden argument*/NULL);
			// focusDetails.LastRaycastHit = hitResult.raycastHit;
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_12 = __this->get_address_of_focusDetails_5();
			PointerHitResult_t3D95459BE11F9760912479670FF65B285E5B9D38 * L_13 = ___hitResult0;
			NullCheck(L_13);
			MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48  L_14 = L_13->get_raycastHit_0();
			FocusDetails_set_LastRaycastHit_m397E573F5211354A896C5A2D9C46FC76D85A9BF8_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_12, L_14, /*hidden argument*/NULL);
			// focusDetails.LastGraphicsRaycastResult = hitResult.graphicsRaycastResult;
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_15 = __this->get_address_of_focusDetails_5();
			PointerHitResult_t3D95459BE11F9760912479670FF65B285E5B9D38 * L_16 = ___hitResult0;
			NullCheck(L_16);
			RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  L_17 = L_16->get_graphicsRaycastResult_1();
			FocusDetails_set_LastGraphicsRaycastResult_m6E15CD20FEE2F7BAD790DC954D515876A28EDF59_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_15, L_17, /*hidden argument*/NULL);
			// if (hitResult.rayStepIndex >= 0)
			PointerHitResult_t3D95459BE11F9760912479670FF65B285E5B9D38 * L_18 = ___hitResult0;
			NullCheck(L_18);
			int32_t L_19 = L_18->get_rayStepIndex_6();
			V_3 = (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_20 = V_3;
			if (!L_20)
			{
				goto IL_00e2;
			}
		}

IL_0086:
		{
			// RayStepIndex = hitResult.rayStepIndex;
			PointerHitResult_t3D95459BE11F9760912479670FF65B285E5B9D38 * L_21 = ___hitResult0;
			NullCheck(L_21);
			int32_t L_22 = L_21->get_rayStepIndex_6();
			PointerData_set_RayStepIndex_mA6EACC6FA5B09A0C629463FFEED2ADED3B8F0D19_inline(__this, L_22, /*hidden argument*/NULL);
			// StartPoint = hitResult.ray.Origin;
			PointerHitResult_t3D95459BE11F9760912479670FF65B285E5B9D38 * L_23 = ___hitResult0;
			NullCheck(L_23);
			RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF * L_24 = L_23->get_address_of_ray_5();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
			L_25 = RayStep_get_Origin_m1D98389A42469C82B409493B72CA4F1B9A163BA6_inline((RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF *)L_24, /*hidden argument*/NULL);
			PointerData_set_StartPoint_mAC621EF433D9BE1FB288E371E9B6E29B08C355B7_inline(__this, L_25, /*hidden argument*/NULL);
			// focusDetails.RayDistance = hitResult.rayDistance;
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_26 = __this->get_address_of_focusDetails_5();
			PointerHitResult_t3D95459BE11F9760912479670FF65B285E5B9D38 * L_27 = ___hitResult0;
			NullCheck(L_27);
			float L_28 = L_27->get_rayDistance_7();
			FocusDetails_set_RayDistance_m7E4FC55A5E7D40E2EAFBE0F472913CFCA241AE97_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_26, L_28, /*hidden argument*/NULL);
			// focusDetails.Point = hitResult.hitPointOnObject;
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_29 = __this->get_address_of_focusDetails_5();
			PointerHitResult_t3D95459BE11F9760912479670FF65B285E5B9D38 * L_30 = ___hitResult0;
			NullCheck(L_30);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = L_30->get_hitPointOnObject_3();
			FocusDetails_set_Point_mDF42A072098565B3023255F1B01A9289D9949181_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_29, L_31, /*hidden argument*/NULL);
			// focusDetails.Normal = hitResult.hitNormalOnObject;
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_32 = __this->get_address_of_focusDetails_5();
			PointerHitResult_t3D95459BE11F9760912479670FF65B285E5B9D38 * L_33 = ___hitResult0;
			NullCheck(L_33);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = L_33->get_hitNormalOnObject_4();
			FocusDetails_set_Normal_m97D9C7BBBA7B89569060CF5DAC31531D31866578_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_32, L_34, /*hidden argument*/NULL);
			goto IL_01ae;
		}

IL_00e2:
		{
			// RayStep firstStep = Pointer.Rays[0];
			RuntimeObject* L_35 = __this->get_Pointer_0();
			NullCheck(L_35);
			RayStepU5BU5D_tCC36F43D996F3D35CC79E15BA0E3B1C10EBF1DC8* L_36;
			L_36 = InterfaceFuncInvoker0< RayStepU5BU5D_tCC36F43D996F3D35CC79E15BA0E3B1C10EBF1DC8* >::Invoke(17 /* Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Rays() */, IMixedRealityPointer_tF6CC763A793FD3C0F29BBAA0EE6780064868118C_il2cpp_TypeInfo_var, L_35);
			NullCheck(L_36);
			int32_t L_37 = 0;
			RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF  L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
			V_4 = L_38;
			// RayStep finalStep = Pointer.Rays[Pointer.Rays.Length - 1];
			RuntimeObject* L_39 = __this->get_Pointer_0();
			NullCheck(L_39);
			RayStepU5BU5D_tCC36F43D996F3D35CC79E15BA0E3B1C10EBF1DC8* L_40;
			L_40 = InterfaceFuncInvoker0< RayStepU5BU5D_tCC36F43D996F3D35CC79E15BA0E3B1C10EBF1DC8* >::Invoke(17 /* Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Rays() */, IMixedRealityPointer_tF6CC763A793FD3C0F29BBAA0EE6780064868118C_il2cpp_TypeInfo_var, L_39);
			RuntimeObject* L_41 = __this->get_Pointer_0();
			NullCheck(L_41);
			RayStepU5BU5D_tCC36F43D996F3D35CC79E15BA0E3B1C10EBF1DC8* L_42;
			L_42 = InterfaceFuncInvoker0< RayStepU5BU5D_tCC36F43D996F3D35CC79E15BA0E3B1C10EBF1DC8* >::Invoke(17 /* Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Rays() */, IMixedRealityPointer_tF6CC763A793FD3C0F29BBAA0EE6780064868118C_il2cpp_TypeInfo_var, L_41);
			NullCheck(L_42);
			NullCheck(L_40);
			int32_t L_43 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length))), (int32_t)1));
			RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF  L_44 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
			V_5 = L_44;
			// RayStepIndex = 0;
			PointerData_set_RayStepIndex_mA6EACC6FA5B09A0C629463FFEED2ADED3B8F0D19_inline(__this, 0, /*hidden argument*/NULL);
			// StartPoint = firstStep.Origin;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
			L_45 = RayStep_get_Origin_m1D98389A42469C82B409493B72CA4F1B9A163BA6_inline((RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF *)(&V_4), /*hidden argument*/NULL);
			PointerData_set_StartPoint_mAC621EF433D9BE1FB288E371E9B6E29B08C355B7_inline(__this, L_45, /*hidden argument*/NULL);
			// float rayDist = 0.0f;
			V_6 = (0.0f);
			// for (int i = 0; i < Pointer.Rays.Length; i++)
			V_7 = 0;
			goto IL_015d;
		}

IL_0139:
		{
			// rayDist += Pointer.Rays[i].Length;
			float L_46 = V_6;
			RuntimeObject* L_47 = __this->get_Pointer_0();
			NullCheck(L_47);
			RayStepU5BU5D_tCC36F43D996F3D35CC79E15BA0E3B1C10EBF1DC8* L_48;
			L_48 = InterfaceFuncInvoker0< RayStepU5BU5D_tCC36F43D996F3D35CC79E15BA0E3B1C10EBF1DC8* >::Invoke(17 /* Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Rays() */, IMixedRealityPointer_tF6CC763A793FD3C0F29BBAA0EE6780064868118C_il2cpp_TypeInfo_var, L_47);
			int32_t L_49 = V_7;
			NullCheck(L_48);
			float L_50;
			L_50 = RayStep_get_Length_m13BE76C9C985DBEAB2B9BE30AA97E54E6B3D7A10_inline((RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF *)((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49))), /*hidden argument*/NULL);
			V_6 = ((float)il2cpp_codegen_add((float)L_46, (float)L_50));
			// for (int i = 0; i < Pointer.Rays.Length; i++)
			int32_t L_51 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
		}

IL_015d:
		{
			// for (int i = 0; i < Pointer.Rays.Length; i++)
			int32_t L_52 = V_7;
			RuntimeObject* L_53 = __this->get_Pointer_0();
			NullCheck(L_53);
			RayStepU5BU5D_tCC36F43D996F3D35CC79E15BA0E3B1C10EBF1DC8* L_54;
			L_54 = InterfaceFuncInvoker0< RayStepU5BU5D_tCC36F43D996F3D35CC79E15BA0E3B1C10EBF1DC8* >::Invoke(17 /* Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Rays() */, IMixedRealityPointer_tF6CC763A793FD3C0F29BBAA0EE6780064868118C_il2cpp_TypeInfo_var, L_53);
			NullCheck(L_54);
			V_8 = (bool)((((int32_t)L_52) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length)))))? 1 : 0);
			bool L_55 = V_8;
			if (L_55)
			{
				goto IL_0139;
			}
		}

IL_0174:
		{
			// focusDetails.RayDistance = rayDist;
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_56 = __this->get_address_of_focusDetails_5();
			float L_57 = V_6;
			FocusDetails_set_RayDistance_m7E4FC55A5E7D40E2EAFBE0F472913CFCA241AE97_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_56, L_57, /*hidden argument*/NULL);
			// focusDetails.Point = finalStep.Terminus;
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_58 = __this->get_address_of_focusDetails_5();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59;
			L_59 = RayStep_get_Terminus_mC3F67EB322BAF98ECD0DF68FC7D60465F89F9A35_inline((RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF *)(&V_5), /*hidden argument*/NULL);
			FocusDetails_set_Point_mDF42A072098565B3023255F1B01A9289D9949181_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_58, L_59, /*hidden argument*/NULL);
			// focusDetails.Normal = -finalStep.Direction;
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_60 = __this->get_address_of_focusDetails_5();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
			L_61 = RayStep_get_Direction_mC869D285E92E1BAA46067A30C6582EB2F910CD8C_inline((RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF *)(&V_5), /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
			L_62 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_61, /*hidden argument*/NULL);
			FocusDetails_set_Normal_m97D9C7BBBA7B89569060CF5DAC31531D31866578_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_60, L_62, /*hidden argument*/NULL);
		}

IL_01ae:
		{
			// if (hitResult.hitObject != null)
			PointerHitResult_t3D95459BE11F9760912479670FF65B285E5B9D38 * L_63 = ___hitResult0;
			NullCheck(L_63);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_64 = L_63->get_hitObject_2();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_65;
			L_65 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_64, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			V_9 = L_65;
			bool L_66 = V_9;
			if (!L_66)
			{
				goto IL_0212;
			}
		}

IL_01c0:
		{
			// focusDetails.PointLocalSpace = hitResult.hitObject.transform.InverseTransformPoint(focusDetails.Point);
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_67 = __this->get_address_of_focusDetails_5();
			PointerHitResult_t3D95459BE11F9760912479670FF65B285E5B9D38 * L_68 = ___hitResult0;
			NullCheck(L_68);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_69 = L_68->get_hitObject_2();
			NullCheck(L_69);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_70;
			L_70 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_69, /*hidden argument*/NULL);
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_71 = __this->get_address_of_focusDetails_5();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72;
			L_72 = FocusDetails_get_Point_m05AF86F597787DFEE128546888C1AD3610AD850B_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_71, /*hidden argument*/NULL);
			NullCheck(L_70);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_73;
			L_73 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_70, L_72, /*hidden argument*/NULL);
			FocusDetails_set_PointLocalSpace_mAD4ED6ACE04168A465A990D8926CA6FB2D49EF3E_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_67, L_73, /*hidden argument*/NULL);
			// focusDetails.NormalLocalSpace = hitResult.hitObject.transform.InverseTransformDirection(focusDetails.Normal);
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_74 = __this->get_address_of_focusDetails_5();
			PointerHitResult_t3D95459BE11F9760912479670FF65B285E5B9D38 * L_75 = ___hitResult0;
			NullCheck(L_75);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_76 = L_75->get_hitObject_2();
			NullCheck(L_76);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_77;
			L_77 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_76, /*hidden argument*/NULL);
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_78 = __this->get_address_of_focusDetails_5();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_79;
			L_79 = FocusDetails_get_Normal_m575D2A62A6B4471C2E0AF27CED93FCC9166F7343_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_78, /*hidden argument*/NULL);
			NullCheck(L_77);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_80;
			L_80 = Transform_InverseTransformDirection_m9EB6F7A2598FD8D6B52F0A6EBA96A3BAAF68D696(L_77, L_79, /*hidden argument*/NULL);
			FocusDetails_set_NormalLocalSpace_m806F8C0A4CE825416966180EF61F24E53B1CFFDB_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_74, L_80, /*hidden argument*/NULL);
			goto IL_0236;
		}

IL_0212:
		{
			// focusDetails.PointLocalSpace = Vector3.zero;
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_81 = __this->get_address_of_focusDetails_5();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82;
			L_82 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
			FocusDetails_set_PointLocalSpace_mAD4ED6ACE04168A465A990D8926CA6FB2D49EF3E_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_81, L_82, /*hidden argument*/NULL);
			// focusDetails.NormalLocalSpace = Vector3.zero;
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_83 = __this->get_address_of_focusDetails_5();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_84;
			L_84 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
			FocusDetails_set_NormalLocalSpace_m806F8C0A4CE825416966180EF61F24E53B1CFFDB_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_83, L_84, /*hidden argument*/NULL);
		}

IL_0236:
		{
			IL2CPP_LEAVE(0x248, FINALLY_0239);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0239;
	}

FINALLY_0239:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(569)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(569)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x248, IL_0248)
	}

IL_0248:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::UpdateFocusLockedHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerData_UpdateFocusLockedHit_m853B46F6489C354CF14D60F48B464F003E6A9BD6 (PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_tF6CC763A793FD3C0F29BBAA0EE6780064868118C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B4_0 = 0;
	{
		// using (UpdateFocusLockedHitPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1_StaticFields*)il2cpp_codegen_static_fields_for(PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1_il2cpp_TypeInfo_var))->get_UpdateFocusLockedHitPerfMarker_7();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// PreviousPointerTarget = focusDetails.Object;
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_2 = __this->get_address_of_focusDetails_5();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
			L_3 = FocusDetails_get_Object_m593562D9DCA8193E20D515DF008EA43CF831537A_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_2, /*hidden argument*/NULL);
			PointerData_set_PreviousPointerTarget_m1C2D34EE516D36A0A25526B9BB9DB79926182809_inline(__this, L_3, /*hidden argument*/NULL);
			// if (focusDetails.Object != null && focusDetails.Object.transform != null)
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_4 = __this->get_address_of_focusDetails_5();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
			L_5 = FocusDetails_get_Object_m593562D9DCA8193E20D515DF008EA43CF831537A_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_4, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_6;
			L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_004d;
			}
		}

IL_0035:
		{
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_7 = __this->get_address_of_focusDetails_5();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
			L_8 = FocusDetails_get_Object_m593562D9DCA8193E20D515DF008EA43CF831537A_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_7, /*hidden argument*/NULL);
			NullCheck(L_8);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
			L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_10;
			L_10 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			G_B4_0 = ((int32_t)(L_10));
			goto IL_004e;
		}

IL_004d:
		{
			G_B4_0 = 0;
		}

IL_004e:
		{
			V_2 = (bool)G_B4_0;
			bool L_11 = V_2;
			if (!L_11)
			{
				goto IL_0107;
			}
		}

IL_0055:
		{
			// focusDetails.Point = focusDetails.Object.transform.TransformPoint(focusDetails.PointLocalSpace);
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_12 = __this->get_address_of_focusDetails_5();
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_13 = __this->get_address_of_focusDetails_5();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
			L_14 = FocusDetails_get_Object_m593562D9DCA8193E20D515DF008EA43CF831537A_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_13, /*hidden argument*/NULL);
			NullCheck(L_14);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
			L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_16 = __this->get_address_of_focusDetails_5();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
			L_17 = FocusDetails_get_PointLocalSpace_mB0230E50082B67D82154120CF74BD7D570136CFC_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_16, /*hidden argument*/NULL);
			NullCheck(L_15);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
			L_18 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_15, L_17, /*hidden argument*/NULL);
			FocusDetails_set_Point_mDF42A072098565B3023255F1B01A9289D9949181_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_12, L_18, /*hidden argument*/NULL);
			// focusDetails.Normal = focusDetails.Object.transform.TransformDirection(focusDetails.NormalLocalSpace);
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_19 = __this->get_address_of_focusDetails_5();
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_20 = __this->get_address_of_focusDetails_5();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
			L_21 = FocusDetails_get_Object_m593562D9DCA8193E20D515DF008EA43CF831537A_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_20, /*hidden argument*/NULL);
			NullCheck(L_21);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
			L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_23 = __this->get_address_of_focusDetails_5();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
			L_24 = FocusDetails_get_NormalLocalSpace_mB18EFA5B0FB1DA4F02B602A949898ED56C6CCC7E_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_23, /*hidden argument*/NULL);
			NullCheck(L_22);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
			L_25 = Transform_TransformDirection_m6B5E3F0A7C6323159DEC6D9BC035FB53ADD96E91(L_22, L_24, /*hidden argument*/NULL);
			FocusDetails_set_Normal_m97D9C7BBBA7B89569060CF5DAC31531D31866578_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_19, L_25, /*hidden argument*/NULL);
			// focusDetails.PointLocalSpace = focusDetails.Object.transform.InverseTransformPoint(focusDetails.Point);
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_26 = __this->get_address_of_focusDetails_5();
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_27 = __this->get_address_of_focusDetails_5();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28;
			L_28 = FocusDetails_get_Object_m593562D9DCA8193E20D515DF008EA43CF831537A_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_27, /*hidden argument*/NULL);
			NullCheck(L_28);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
			L_29 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_28, /*hidden argument*/NULL);
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_30 = __this->get_address_of_focusDetails_5();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
			L_31 = FocusDetails_get_Point_m05AF86F597787DFEE128546888C1AD3610AD850B_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_30, /*hidden argument*/NULL);
			NullCheck(L_29);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
			L_32 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_29, L_31, /*hidden argument*/NULL);
			FocusDetails_set_PointLocalSpace_mAD4ED6ACE04168A465A990D8926CA6FB2D49EF3E_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_26, L_32, /*hidden argument*/NULL);
			// focusDetails.NormalLocalSpace = focusDetails.Object.transform.InverseTransformDirection(focusDetails.Normal);
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_33 = __this->get_address_of_focusDetails_5();
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_34 = __this->get_address_of_focusDetails_5();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35;
			L_35 = FocusDetails_get_Object_m593562D9DCA8193E20D515DF008EA43CF831537A_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_34, /*hidden argument*/NULL);
			NullCheck(L_35);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
			L_36 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_35, /*hidden argument*/NULL);
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_37 = __this->get_address_of_focusDetails_5();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
			L_38 = FocusDetails_get_Normal_m575D2A62A6B4471C2E0AF27CED93FCC9166F7343_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_37, /*hidden argument*/NULL);
			NullCheck(L_36);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
			L_39 = Transform_InverseTransformDirection_m9EB6F7A2598FD8D6B52F0A6EBA96A3BAAF68D696(L_36, L_38, /*hidden argument*/NULL);
			FocusDetails_set_NormalLocalSpace_m806F8C0A4CE825416966180EF61F24E53B1CFFDB_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_33, L_39, /*hidden argument*/NULL);
		}

IL_0107:
		{
			// StartPoint = Pointer.Rays[0].Origin;
			RuntimeObject* L_40 = __this->get_Pointer_0();
			NullCheck(L_40);
			RayStepU5BU5D_tCC36F43D996F3D35CC79E15BA0E3B1C10EBF1DC8* L_41;
			L_41 = InterfaceFuncInvoker0< RayStepU5BU5D_tCC36F43D996F3D35CC79E15BA0E3B1C10EBF1DC8* >::Invoke(17 /* Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Rays() */, IMixedRealityPointer_tF6CC763A793FD3C0F29BBAA0EE6780064868118C_il2cpp_TypeInfo_var, L_40);
			NullCheck(L_41);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
			L_42 = RayStep_get_Origin_m1D98389A42469C82B409493B72CA4F1B9A163BA6_inline((RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF *)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
			PointerData_set_StartPoint_mAC621EF433D9BE1FB288E371E9B6E29B08C355B7_inline(__this, L_42, /*hidden argument*/NULL);
			// for (int i = 0; i < Pointer.Rays.Length; i++)
			V_3 = 0;
			goto IL_0160;
		}

IL_0128:
		{
			// if (Pointer.Rays[i].Contains(focusDetails.Point))
			RuntimeObject* L_43 = __this->get_Pointer_0();
			NullCheck(L_43);
			RayStepU5BU5D_tCC36F43D996F3D35CC79E15BA0E3B1C10EBF1DC8* L_44;
			L_44 = InterfaceFuncInvoker0< RayStepU5BU5D_tCC36F43D996F3D35CC79E15BA0E3B1C10EBF1DC8* >::Invoke(17 /* Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Rays() */, IMixedRealityPointer_tF6CC763A793FD3C0F29BBAA0EE6780064868118C_il2cpp_TypeInfo_var, L_43);
			int32_t L_45 = V_3;
			NullCheck(L_44);
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_46 = __this->get_address_of_focusDetails_5();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
			L_47 = FocusDetails_get_Point_m05AF86F597787DFEE128546888C1AD3610AD850B_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_46, /*hidden argument*/NULL);
			bool L_48;
			L_48 = RayStep_Contains_m81BB4B24EA271ECBFD3D48AADADAF6AEDA71D4B7((RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF *)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45))), L_47, /*hidden argument*/NULL);
			V_4 = L_48;
			bool L_49 = V_4;
			if (!L_49)
			{
				goto IL_015b;
			}
		}

IL_0150:
		{
			// RayStepIndex = i;
			int32_t L_50 = V_3;
			PointerData_set_RayStepIndex_mA6EACC6FA5B09A0C629463FFEED2ADED3B8F0D19_inline(__this, L_50, /*hidden argument*/NULL);
			// break;
			goto IL_0176;
		}

IL_015b:
		{
			// for (int i = 0; i < Pointer.Rays.Length; i++)
			int32_t L_51 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
		}

IL_0160:
		{
			// for (int i = 0; i < Pointer.Rays.Length; i++)
			int32_t L_52 = V_3;
			RuntimeObject* L_53 = __this->get_Pointer_0();
			NullCheck(L_53);
			RayStepU5BU5D_tCC36F43D996F3D35CC79E15BA0E3B1C10EBF1DC8* L_54;
			L_54 = InterfaceFuncInvoker0< RayStepU5BU5D_tCC36F43D996F3D35CC79E15BA0E3B1C10EBF1DC8* >::Invoke(17 /* Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Rays() */, IMixedRealityPointer_tF6CC763A793FD3C0F29BBAA0EE6780064868118C_il2cpp_TypeInfo_var, L_53);
			NullCheck(L_54);
			V_5 = (bool)((((int32_t)L_52) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length)))))? 1 : 0);
			bool L_55 = V_5;
			if (L_55)
			{
				goto IL_0128;
			}
		}

IL_0176:
		{
			IL2CPP_LEAVE(0x188, FINALLY_0179);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0179;
	}

FINALLY_0179:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(377)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(377)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x188, IL_0188)
	}

IL_0188:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::ResetFocusedObjects(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerData_ResetFocusedObjects_m52CB104E7D9FB1E5DC31E88C1AE0BB240B0AFC03 (PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * __this, bool ___clearPreviousObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_tF6CC763A793FD3C0F29BBAA0EE6780064868118C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * G_B5_0 = NULL;
	PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * G_B4_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B6_0 = NULL;
	PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * G_B6_1 = NULL;
	{
		// using (ResetFocusedObjectPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1_StaticFields*)il2cpp_codegen_static_fields_for(PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1_il2cpp_TypeInfo_var))->get_ResetFocusedObjectPerfMarker_8();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// if (CurrentPointerTarget != null)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
			L_2 = PointerData_get_CurrentPointerTarget_m07A8F205B44205D80EAEE3F839396916CD6585A2(__this, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_3;
			L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			V_2 = L_3;
			bool L_4 = V_2;
			if (!L_4)
			{
				goto IL_002e;
			}
		}

IL_0020:
		{
			// Pointer.OnPreCurrentPointerTargetChange();
			RuntimeObject* L_5 = __this->get_Pointer_0();
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(32 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::OnPreCurrentPointerTargetChange() */, IMixedRealityPointer_tF6CC763A793FD3C0F29BBAA0EE6780064868118C_il2cpp_TypeInfo_var, L_5);
		}

IL_002e:
		{
			// PreviousPointerTarget = clearPreviousObject ? null : CurrentPointerTarget;
			bool L_6 = ___clearPreviousObject0;
			G_B4_0 = __this;
			if (L_6)
			{
				G_B5_0 = __this;
				goto IL_003a;
			}
		}

IL_0032:
		{
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
			L_7 = PointerData_get_CurrentPointerTarget_m07A8F205B44205D80EAEE3F839396916CD6585A2(__this, /*hidden argument*/NULL);
			G_B6_0 = L_7;
			G_B6_1 = G_B4_0;
			goto IL_003b;
		}

IL_003a:
		{
			G_B6_0 = ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)(NULL));
			G_B6_1 = G_B5_0;
		}

IL_003b:
		{
			NullCheck(G_B6_1);
			PointerData_set_PreviousPointerTarget_m1C2D34EE516D36A0A25526B9BB9DB79926182809_inline(G_B6_1, G_B6_0, /*hidden argument*/NULL);
			// focusDetails.Point = Details.Point;
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_8 = __this->get_address_of_focusDetails_5();
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA  L_9;
			L_9 = PointerData_get_Details_m11BAAD7686702618344900607B1289A8DC9FE7A5(__this, /*hidden argument*/NULL);
			V_3 = L_9;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
			L_10 = FocusDetails_get_Point_m05AF86F597787DFEE128546888C1AD3610AD850B_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)(&V_3), /*hidden argument*/NULL);
			FocusDetails_set_Point_mDF42A072098565B3023255F1B01A9289D9949181_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_8, L_10, /*hidden argument*/NULL);
			// focusDetails.Normal = Details.Normal;
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_11 = __this->get_address_of_focusDetails_5();
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA  L_12;
			L_12 = PointerData_get_Details_m11BAAD7686702618344900607B1289A8DC9FE7A5(__this, /*hidden argument*/NULL);
			V_3 = L_12;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
			L_13 = FocusDetails_get_Normal_m575D2A62A6B4471C2E0AF27CED93FCC9166F7343_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)(&V_3), /*hidden argument*/NULL);
			FocusDetails_set_Normal_m97D9C7BBBA7B89569060CF5DAC31531D31866578_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_11, L_13, /*hidden argument*/NULL);
			// focusDetails.NormalLocalSpace = Details.NormalLocalSpace;
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_14 = __this->get_address_of_focusDetails_5();
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA  L_15;
			L_15 = PointerData_get_Details_m11BAAD7686702618344900607B1289A8DC9FE7A5(__this, /*hidden argument*/NULL);
			V_3 = L_15;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
			L_16 = FocusDetails_get_NormalLocalSpace_mB18EFA5B0FB1DA4F02B602A949898ED56C6CCC7E_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)(&V_3), /*hidden argument*/NULL);
			FocusDetails_set_NormalLocalSpace_m806F8C0A4CE825416966180EF61F24E53B1CFFDB_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_14, L_16, /*hidden argument*/NULL);
			// focusDetails.PointLocalSpace = Details.PointLocalSpace;
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_17 = __this->get_address_of_focusDetails_5();
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA  L_18;
			L_18 = PointerData_get_Details_m11BAAD7686702618344900607B1289A8DC9FE7A5(__this, /*hidden argument*/NULL);
			V_3 = L_18;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
			L_19 = FocusDetails_get_PointLocalSpace_mB0230E50082B67D82154120CF74BD7D570136CFC_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)(&V_3), /*hidden argument*/NULL);
			FocusDetails_set_PointLocalSpace_mAD4ED6ACE04168A465A990D8926CA6FB2D49EF3E_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_17, L_19, /*hidden argument*/NULL);
			// focusDetails.Object = null;
			FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * L_20 = __this->get_address_of_focusDetails_5();
			FocusDetails_set_Object_m4E5DD3191067CB1AFC14DA6EFA4C2EF287BA4B18_inline((FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA *)L_20, (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0xC8, FINALLY_00b9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b9;
	}

FINALLY_00b9:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(185)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(185)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xC8, IL_00c8)
	}

IL_00c8:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::Equals(Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerData_Equals_m9845486CBD4B62007C45CC77F817ED4F15E8FC10 (PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * __this, PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_tF6CC763A793FD3C0F29BBAA0EE6780064868118C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (ReferenceEquals(null, other))
		PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * L_0 = ___other0;
		V_0 = (bool)((((RuntimeObject*)(PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0036;
	}

IL_000e:
	{
		// if (ReferenceEquals(this, other))
		PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * L_2 = ___other0;
		V_2 = (bool)((((RuntimeObject*)(PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 *)__this) == ((RuntimeObject*)(PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 *)L_2))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0036;
	}

IL_001b:
	{
		// return Pointer.PointerId == other.Pointer.PointerId;
		RuntimeObject* L_4 = __this->get_Pointer_0();
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = InterfaceFuncInvoker0< uint32_t >::Invoke(2 /* System.UInt32 Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_PointerId() */, IMixedRealityPointer_tF6CC763A793FD3C0F29BBAA0EE6780064868118C_il2cpp_TypeInfo_var, L_4);
		PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * L_6 = ___other0;
		NullCheck(L_6);
		RuntimeObject* L_7 = L_6->get_Pointer_0();
		NullCheck(L_7);
		uint32_t L_8;
		L_8 = InterfaceFuncInvoker0< uint32_t >::Invoke(2 /* System.UInt32 Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_PointerId() */, IMixedRealityPointer_tF6CC763A793FD3C0F29BBAA0EE6780064868118C_il2cpp_TypeInfo_var, L_7);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)L_8))? 1 : 0);
		goto IL_0036;
	}

IL_0036:
	{
		// }
		bool L_9 = V_1;
		return L_9;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerData_Equals_m792DA7EFFED1FA4107E0D760745381EE0CAB8E17 (PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (ReferenceEquals(null, obj))
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0044;
	}

IL_000e:
	{
		// if (ReferenceEquals(this, obj))
		RuntimeObject * L_2 = ___obj0;
		V_2 = (bool)((((RuntimeObject*)(PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 *)__this) == ((RuntimeObject*)(RuntimeObject *)L_2))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0044;
	}

IL_001b:
	{
		// if (obj.GetType() != GetType())
		RuntimeObject * L_4 = ___obj0;
		NullCheck(L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_4, /*hidden argument*/NULL);
		Type_t * L_6;
		L_6 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_5, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0035;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0044;
	}

IL_0035:
	{
		// return Equals((PointerData)obj);
		RuntimeObject * L_9 = ___obj0;
		bool L_10;
		L_10 = PointerData_Equals_m9845486CBD4B62007C45CC77F817ED4F15E8FC10(__this, ((PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 *)CastclassClass((RuntimeObject*)L_9, PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_1 = L_10;
		goto IL_0044;
	}

IL_0044:
	{
		// }
		bool L_11 = V_1;
		return L_11;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerData_GetHashCode_m28214217651D11BE2B0347D89E8BA1F48108E0C0 (PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// return Pointer != null ? Pointer.GetHashCode() : 0;
		RuntimeObject* L_0 = __this->get_Pointer_0();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0017;
	}

IL_000c:
	{
		RuntimeObject* L_1 = __this->get_Pointer_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		G_B3_0 = L_2;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerData__cctor_m32128A59FD354635B0E4837A897B876E727F9282 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F670F51C586102E4AD2E77FED417809FF46F3D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A4B7834144C35546E7F3AA5FB0F9239B88B8B6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CFDCFFDD9F8EAA25BCF8F12B4E2CF9CE83B9B29);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdateHitPerfMarker = new ProfilerMarker("[MRTK] PointerData.UpdateHit");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral3F670F51C586102E4AD2E77FED417809FF46F3D8, /*hidden argument*/NULL);
		((PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1_StaticFields*)il2cpp_codegen_static_fields_for(PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1_il2cpp_TypeInfo_var))->set_UpdateHitPerfMarker_6(L_0);
		// private static readonly ProfilerMarker UpdateFocusLockedHitPerfMarker = new ProfilerMarker("[MRTK] PointerData.UpdateFocusLockedHit");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), _stringLiteral9CFDCFFDD9F8EAA25BCF8F12B4E2CF9CE83B9B29, /*hidden argument*/NULL);
		((PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1_StaticFields*)il2cpp_codegen_static_fields_for(PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1_il2cpp_TypeInfo_var))->set_UpdateFocusLockedHitPerfMarker_7(L_1);
		// private static readonly ProfilerMarker ResetFocusedObjectPerfMarker = new ProfilerMarker("[MRTK] PointerData.ResetFocusedObject");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_2), _stringLiteral8A4B7834144C35546E7F3AA5FB0F9239B88B8B6A, /*hidden argument*/NULL);
		((PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1_StaticFields*)il2cpp_codegen_static_fields_for(PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1_il2cpp_TypeInfo_var))->set_ResetFocusedObjectPerfMarker_8(L_2);
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
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerHitResult_Clear_m00E020996ADE85F3520DBE90A7129D610F6B2ADE (PointerHitResult_t3D95459BE11F9760912479670FF65B285E5B9D38 * __this, const RuntimeMethod* method)
{
	{
		// raycastHit = default(MixedRealityRaycastHit);
		MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48 * L_0 = __this->get_address_of_raycastHit_0();
		il2cpp_codegen_initobj(L_0, sizeof(MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48 ));
		// graphicsRaycastResult = default(RaycastResult);
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * L_1 = __this->get_address_of_graphicsRaycastResult_1();
		il2cpp_codegen_initobj(L_1, sizeof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE ));
		// hitObject = null;
		__this->set_hitObject_2((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// hitPointOnObject = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_hitPointOnObject_3(L_2);
		// hitNormalOnObject = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_hitNormalOnObject_4(L_3);
		// ray = default(RayStep);
		RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF * L_4 = __this->get_address_of_ray_5();
		il2cpp_codegen_initobj(L_4, sizeof(RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF ));
		// rayStepIndex = -1;
		__this->set_rayStepIndex_6((-1));
		// rayDistance = 0.0f;
		__this->set_rayDistance_7((0.0f));
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::Set(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Vector4,Microsoft.MixedReality.Toolkit.Physics.RayStep,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerHitResult_Set_m8C0E76D505E0774412EEF1BB88C0EB4D8883D861 (PointerHitResult_t3D95459BE11F9760912479670FF65B285E5B9D38 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hitObject0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hitPointOnObject1, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___hitNormalOnObject2, RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF  ___ray3, int32_t ___rayStepIndex4, float ___rayDistance5, const RuntimeMethod* method)
{
	{
		// raycastHit = default(MixedRealityRaycastHit);
		MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48 * L_0 = __this->get_address_of_raycastHit_0();
		il2cpp_codegen_initobj(L_0, sizeof(MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48 ));
		// graphicsRaycastResult = default(RaycastResult);
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * L_1 = __this->get_address_of_graphicsRaycastResult_1();
		il2cpp_codegen_initobj(L_1, sizeof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE ));
		// this.hitObject = hitObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = ___hitObject0;
		__this->set_hitObject_2(L_2);
		// this.hitPointOnObject = hitPointOnObject;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___hitPointOnObject1;
		__this->set_hitPointOnObject_3(L_3);
		// this.hitNormalOnObject = hitNormalOnObject;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4 = ___hitNormalOnObject2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B(L_4, /*hidden argument*/NULL);
		__this->set_hitNormalOnObject_4(L_5);
		// this.ray = ray;
		RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF  L_6 = ___ray3;
		__this->set_ray_5(L_6);
		// this.rayStepIndex = rayStepIndex;
		int32_t L_7 = ___rayStepIndex4;
		__this->set_rayStepIndex_6(L_7);
		// this.rayDistance = rayDistance;
		float L_8 = ___rayDistance5;
		__this->set_rayDistance_7(L_8);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::Set(Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit,Microsoft.MixedReality.Toolkit.Physics.RayStep,System.Int32,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerHitResult_Set_mACF340E2C3FEADB2404E4EC32EEC38197C23B550 (PointerHitResult_t3D95459BE11F9760912479670FF65B285E5B9D38 * __this, MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48  ___hit0, RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF  ___ray1, int32_t ___rayStepIndex2, float ___rayDistance3, bool ___focusIndividualCompoundCollider4, const RuntimeMethod* method)
{
	PointerHitResult_t3D95459BE11F9760912479670FF65B285E5B9D38 * G_B2_0 = NULL;
	PointerHitResult_t3D95459BE11F9760912479670FF65B285E5B9D38 * G_B1_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B3_0 = NULL;
	PointerHitResult_t3D95459BE11F9760912479670FF65B285E5B9D38 * G_B3_1 = NULL;
	{
		// raycastHit = hit;
		MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48  L_0 = ___hit0;
		__this->set_raycastHit_0(L_0);
		// graphicsRaycastResult = default(RaycastResult);
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * L_1 = __this->get_address_of_graphicsRaycastResult_1();
		il2cpp_codegen_initobj(L_1, sizeof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE ));
		// hitObject = focusIndividualCompoundCollider ? hit.collider.gameObject : hit.transform.gameObject;
		bool L_2 = ___focusIndividualCompoundCollider4;
		G_B1_0 = __this;
		if (L_2)
		{
			G_B2_0 = __this;
			goto IL_0026;
		}
	}
	{
		MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48  L_3 = ___hit0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = L_3.get_transform_7();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0031;
	}

IL_0026:
	{
		MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48  L_6 = ___hit0;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_7 = L_6.get_collider_10();
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		G_B3_0 = L_8;
		G_B3_1 = G_B2_0;
	}

IL_0031:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_hitObject_2(G_B3_0);
		// hitPointOnObject = hit.point;
		MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48  L_9 = ___hit0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = L_9.get_point_0();
		__this->set_hitPointOnObject_3(L_10);
		// hitNormalOnObject = hit.normal;
		MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48  L_11 = ___hit0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = L_11.get_normal_1();
		__this->set_hitNormalOnObject_4(L_12);
		// this.ray = ray;
		RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF  L_13 = ___ray1;
		__this->set_ray_5(L_13);
		// this.rayStepIndex = rayStepIndex;
		int32_t L_14 = ___rayStepIndex2;
		__this->set_rayStepIndex_6(L_14);
		// this.rayDistance = rayDistance;
		float L_15 = ___rayDistance3;
		__this->set_rayDistance_7(L_15);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::Set(UnityEngine.EventSystems.RaycastResult,UnityEngine.Vector3,UnityEngine.Vector4,Microsoft.MixedReality.Toolkit.Physics.RayStep,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerHitResult_Set_mADFFEFD9048555996A2E1EA99CFD302A88FBC870 (PointerHitResult_t3D95459BE11F9760912479670FF65B285E5B9D38 * __this, RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___result0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hitPointOnObject1, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___hitNormalOnObject2, RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF  ___ray3, int32_t ___rayStepIndex4, float ___rayDistance5, const RuntimeMethod* method)
{
	{
		// raycastHit = default(MixedRealityRaycastHit);
		MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48 * L_0 = __this->get_address_of_raycastHit_0();
		il2cpp_codegen_initobj(L_0, sizeof(MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48 ));
		// raycastHit.point = hitPointOnObject;
		MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48 * L_1 = __this->get_address_of_raycastHit_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___hitPointOnObject1;
		L_1->set_point_0(L_2);
		// raycastHit.normal = hitNormalOnObject;
		MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48 * L_3 = __this->get_address_of_raycastHit_0();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4 = ___hitNormalOnObject2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B(L_4, /*hidden argument*/NULL);
		L_3->set_normal_1(L_5);
		// raycastHit.distance = rayDistance;
		MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48 * L_6 = __this->get_address_of_raycastHit_0();
		float L_7 = ___rayDistance5;
		L_6->set_distance_3(L_7);
		// raycastHit.transform = result.gameObject.transform;
		MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48 * L_8 = __this->get_address_of_raycastHit_0();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = RaycastResult_get_gameObject_mABA10AC828B2E6603A6C088A4CCD40932F6AF5FF((RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE *)(&___result0), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		L_8->set_transform_7(L_10);
		// raycastHit.raycastValid = true;
		MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48 * L_11 = __this->get_address_of_raycastHit_0();
		L_11->set_raycastValid_9((bool)1);
		// graphicsRaycastResult = result;
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  L_12 = ___result0;
		__this->set_graphicsRaycastResult_1(L_12);
		// this.hitObject = result.gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = RaycastResult_get_gameObject_mABA10AC828B2E6603A6C088A4CCD40932F6AF5FF((RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE *)(&___result0), /*hidden argument*/NULL);
		__this->set_hitObject_2(L_13);
		// this.hitPointOnObject = hitPointOnObject;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = ___hitPointOnObject1;
		__this->set_hitPointOnObject_3(L_14);
		// this.hitNormalOnObject = hitNormalOnObject;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_15 = ___hitNormalOnObject2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B(L_15, /*hidden argument*/NULL);
		__this->set_hitNormalOnObject_4(L_16);
		// this.ray = ray;
		RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF  L_17 = ___ray3;
		__this->set_ray_5(L_17);
		// this.rayStepIndex = rayStepIndex;
		int32_t L_18 = ___rayStepIndex4;
		__this->set_rayStepIndex_6(L_18);
		// this.rayDistance = rayDistance;
		float L_19 = ___rayDistance5;
		__this->set_rayDistance_7(L_19);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerHitResult__ctor_m87550A65033987B713F2F9571064C8D0B3738666 (PointerHitResult_t3D95459BE11F9760912479670FF65B285E5B9D38 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 hitPointOnObject = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_hitPointOnObject_3(L_0);
		// public Vector3 hitNormalOnObject = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_hitNormalOnObject_4(L_1);
		// public int rayStepIndex = -1;
		__this->set_rayStepIndex_6((-1));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Boolean Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::Matches(System.Type,Microsoft.MixedReality.Toolkit.Input.InputSourceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerPreferences_Matches_mF5B3C7BFBF69EFB9BE9CCD7225AD6E264BF3FE8B (PointerPreferences_t75E8D925545E01FEB8547C84B2D1F5DAF05D8093 * __this, Type_t * ___queryType0, int32_t ___queryInputType1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return Matches(queryType) && queryInputType == InputSourceType;
		Type_t * L_0 = ___queryType0;
		bool L_1;
		L_1 = PointerPreferences_Matches_m691F7B27778E9495F76FD5F12A170E6D905F16E6(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = ___queryInputType1;
		int32_t L_3 = __this->get_InputSourceType_0();
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0019;
	}

IL_0019:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::Matches(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerPreferences_Matches_m691F7B27778E9495F76FD5F12A170E6D905F16E6 (PointerPreferences_t75E8D925545E01FEB8547C84B2D1F5DAF05D8093 * __this, Type_t * ___queryType0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return queryType.IsAssignableFrom(PointerType);
		Type_t * L_0 = ___queryType0;
		Type_t * L_1 = __this->get_PointerType_1();
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtFuncInvoker1< bool, Type_t * >::Invoke(117 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_0, L_1);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// Microsoft.MixedReality.Toolkit.Input.PointerBehavior Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::GetBehaviorForHandedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerPreferences_GetBehaviorForHandedness_m1FB850B467983DABE895C031D710F052E1C4057E (PointerPreferences_t75E8D925545E01FEB8547C84B2D1F5DAF05D8093 * __this, uint8_t ___h0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if ((h & Handedness.Right) != 0)
		uint8_t L_0 = ___h0;
		V_0 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)2))) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return Right;
		int32_t L_2 = __this->get_Right_3();
		V_1 = L_2;
		goto IL_0041;
	}

IL_0015:
	{
		// if ((h & Handedness.Left) != 0)
		uint8_t L_3 = ___h0;
		V_2 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&(int32_t)1))) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// return Left;
		int32_t L_5 = __this->get_Left_2();
		V_1 = L_5;
		goto IL_0041;
	}

IL_0029:
	{
		// if ((h & Handedness.Other) != 0)
		uint8_t L_6 = ___h0;
		V_3 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_6&(int32_t)4))) <= ((uint32_t)0)))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		// return Other;
		int32_t L_8 = __this->get_Other_4();
		V_1 = L_8;
		goto IL_0041;
	}

IL_003d:
	{
		// return PointerBehavior.Default;
		V_1 = 0;
		goto IL_0041;
	}

IL_0041:
	{
		// }
		int32_t L_9 = V_1;
		return L_9;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::SetBehaviorForHandedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.PointerBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerPreferences_SetBehaviorForHandedness_m1B73039E52BAE3426440E1614BCD6747236EF75D (PointerPreferences_t75E8D925545E01FEB8547C84B2D1F5DAF05D8093 * __this, uint8_t ___h0, int32_t ___b1, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if ((h & Handedness.Right) != 0)
		uint8_t L_0 = ___h0;
		V_0 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)2))) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Right = b;
		int32_t L_2 = ___b1;
		__this->set_Right_3(L_2);
	}

IL_0014:
	{
		// if ((h & Handedness.Left) != 0)
		uint8_t L_3 = ___h0;
		V_1 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&(int32_t)1))) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// Left = b;
		int32_t L_5 = ___b1;
		__this->set_Left_2(L_5);
	}

IL_0027:
	{
		// if ((h & Handedness.Other) != 0)
		uint8_t L_6 = ___h0;
		V_2 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_6&(int32_t)4))) <= ((uint32_t)0)))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		// Other = b;
		int32_t L_8 = ___b1;
		__this->set_Other_4(L_8);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::.ctor(System.Type,Microsoft.MixedReality.Toolkit.Input.InputSourceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerPreferences__ctor_mCF77172362B6E03596FC777B293E7D2007074A37 (PointerPreferences_t75E8D925545E01FEB8547C84B2D1F5DAF05D8093 * __this, Type_t * ___pointerType0, int32_t ___inputType1, const RuntimeMethod* method)
{
	{
		// public PointerPreferences(Type pointerType, InputSourceType inputType)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Left = PointerBehavior.Default;
		__this->set_Left_2(0);
		// Right = PointerBehavior.Default;
		__this->set_Right_3(0);
		// Other = PointerBehavior.Default;
		__this->set_Other_4(0);
		// InputSourceType = inputType;
		int32_t L_0 = ___inputType1;
		__this->set_InputSourceType_0(L_0);
		// PointerType = pointerType;
		Type_t * L_1 = ___pointerType0;
		__this->set_PointerType_1(L_1);
		// }
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__77::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRaiseSourceDetectedU3Ed__77__ctor_m62C353DD804D65E8780B40D33A7ED97827A74860 (U3CRaiseSourceDetectedU3Ed__77_tE01F382DF1053619EAD0EAAA66A5AF483CF8A74F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__77::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRaiseSourceDetectedU3Ed__77_MoveNext_m4940EAA4A1BA08F5BEC1634A2687D9E5C9F6AE92 (U3CRaiseSourceDetectedU3Ed__77_tE01F382DF1053619EAD0EAAA66A5AF483CF8A74F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CRaiseSourceDetectedU3Ed__77_tE01F382DF1053619EAD0EAAA66A5AF483CF8A74F_m09A4368D9D466A554E4F7003937A525CF258D081_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityCursor_t88D68C79582AC9AE9BAE4966446158D996342F42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t6D453243E31F7729D3E9B49623B6B7092296E4C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_tF6CC763A793FD3C0F29BBAA0EE6780064868118C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CRaiseSourceDetectedU3Ed__77_tE01F382DF1053619EAD0EAAA66A5AF483CF8A74F * V_3 = NULL;
	bool V_4 = false;
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	RuntimeObject* G_B16_0 = NULL;
	RuntimeObject* G_B15_0 = NULL;
	RuntimeObject* G_B19_0 = NULL;
	RuntimeObject* G_B18_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c;
			}
		}

IL_000a:
		{
			goto IL_000e;
		}

IL_000c:
		{
			goto IL_0022;
		}

IL_000e:
		{
			// using (RaiseSourceDetectedPerfMarker.Auto())
			IL2CPP_RUNTIME_CLASS_INIT(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176_il2cpp_TypeInfo_var);
			ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_2 = ((GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176_StaticFields*)il2cpp_codegen_static_fields_for(GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176_il2cpp_TypeInfo_var))->get_RaiseSourceDetectedPerfMarker_32();
			V_1 = L_2;
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_3;
			L_3 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
			__this->set_U3CU3Es__1_3(L_3);
		}

IL_0022:
		{
		}

IL_0023:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_4 = V_0;
				if (!L_4)
				{
					goto IL_0028;
				}
			}

IL_0026:
			{
				goto IL_002a;
			}

IL_0028:
			{
				goto IL_006c;
			}

IL_002a:
			{
				// await EnsureInputSystemValid();
				GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * L_5 = __this->get_U3CU3E4__this_2();
				NullCheck(L_5);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6;
				L_6 = InputSystemGlobalHandlerListener_EnsureInputSystemValid_m6AE5875362DF81B05243E846649F1D11A572B2A1(L_5, /*hidden argument*/NULL);
				NullCheck(L_6);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_7;
				L_7 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_6, /*hidden argument*/NULL);
				V_2 = L_7;
				bool L_8;
				L_8 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
				if (L_8)
				{
					goto IL_0088;
				}
			}

IL_0045:
			{
				int32_t L_9 = 0;
				V_0 = L_9;
				__this->set_U3CU3E1__state_0(L_9);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_10 = V_2;
				__this->set_U3CU3Eu__1_4(L_10);
				V_3 = __this;
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_11 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CRaiseSourceDetectedU3Ed__77_tE01F382DF1053619EAD0EAAA66A5AF483CF8A74F_m09A4368D9D466A554E4F7003937A525CF258D081((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_11, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CRaiseSourceDetectedU3Ed__77_tE01F382DF1053619EAD0EAAA66A5AF483CF8A74F **)(&V_3), /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CRaiseSourceDetectedU3Ed__77_tE01F382DF1053619EAD0EAAA66A5AF483CF8A74F_m09A4368D9D466A554E4F7003937A525CF258D081_RuntimeMethod_var);
				IL2CPP_LEAVE(0x135, FINALLY_00e2);
			}

IL_006c:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_12 = __this->get_U3CU3Eu__1_4();
				V_2 = L_12;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_13 = __this->get_address_of_U3CU3Eu__1_4();
				il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_14 = (-1);
				V_0 = L_14;
				__this->set_U3CU3E1__state_0(L_14);
			}

IL_0088:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
				// if (this == null)
				GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * L_15 = __this->get_U3CU3E4__this_2();
				IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
				bool L_16;
				L_16 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
				V_4 = L_16;
				bool L_17 = V_4;
				if (!L_17)
				{
					goto IL_00a5;
				}
			}

IL_00a2:
			{
				// return;
				IL2CPP_LEAVE(0x121, FINALLY_00e2);
			}

IL_00a5:
			{
				// CoreServices.InputSystem?.RaiseSourceDetected(GazeInputSource);
				IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
				RuntimeObject* L_18;
				L_18 = CoreServices_get_InputSystem_mF1BC6A87C71157B2BFDF556079A9B189F3FCFDE9(/*hidden argument*/NULL);
				RuntimeObject* L_19 = L_18;
				G_B15_0 = L_19;
				if (L_19)
				{
					G_B16_0 = L_19;
					goto IL_00b0;
				}
			}

IL_00ad:
			{
				goto IL_00c2;
			}

IL_00b0:
			{
				GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * L_20 = __this->get_U3CU3E4__this_2();
				NullCheck(L_20);
				RuntimeObject* L_21;
				L_21 = GazeProvider_get_GazeInputSource_m6D969875917FF0E3B45641F6B4DC86F053340BC1(L_20, /*hidden argument*/NULL);
				NullCheck(G_B16_0);
				InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(24 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourceDetected(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, IMixedRealityInputSystem_t6D453243E31F7729D3E9B49623B6B7092296E4C4_il2cpp_TypeInfo_var, G_B16_0, L_21, (RuntimeObject*)NULL);
			}

IL_00c2:
			{
				// GazePointer.BaseCursor?.SetVisibility(true);
				GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * L_22 = __this->get_U3CU3E4__this_2();
				NullCheck(L_22);
				RuntimeObject* L_23;
				L_23 = GazeProvider_get_GazePointer_m9648918C88F08AFB6562C4533B3C99124643A069(L_22, /*hidden argument*/NULL);
				NullCheck(L_23);
				RuntimeObject* L_24;
				L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_BaseCursor() */, IMixedRealityPointer_tF6CC763A793FD3C0F29BBAA0EE6780064868118C_il2cpp_TypeInfo_var, L_23);
				RuntimeObject* L_25 = L_24;
				G_B18_0 = L_25;
				if (L_25)
				{
					G_B19_0 = L_25;
					goto IL_00d8;
				}
			}

IL_00d5:
			{
				goto IL_00df;
			}

IL_00d8:
			{
				NullCheck(G_B19_0);
				InterfaceActionInvoker1< bool >::Invoke(8 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor::SetVisibility(System.Boolean) */, IMixedRealityCursor_t88D68C79582AC9AE9BAE4966446158D996342F42_il2cpp_TypeInfo_var, G_B19_0, (bool)1);
			}

IL_00df:
			{
				IL2CPP_LEAVE(0xF9, FINALLY_00e2);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00e2;
		}

FINALLY_00e2:
		{ // begin finally (depth: 2)
			{
				int32_t L_26 = V_0;
				if ((((int32_t)L_26) >= ((int32_t)0)))
				{
					goto IL_00f8;
				}
			}

IL_00e6:
			{
				AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_27 = __this->get_address_of_U3CU3Es__1_3();
				AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)L_27, /*hidden argument*/NULL);
			}

IL_00f8:
			{
				IL2CPP_END_FINALLY(226)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(226)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x135, IL_0135)
			IL2CPP_JUMP_TBL(0x121, IL_0121)
			IL2CPP_JUMP_TBL(0xF9, IL_00f9)
		}

IL_00f9:
		{
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_28 = __this->get_address_of_U3CU3Es__1_3();
			il2cpp_codegen_initobj(L_28, sizeof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D ));
			goto IL_0121;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0107;
		}
		throw e;
	}

CATCH_0107:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_29 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_30 = V_5;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_29, L_30, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0135;
	} // end catch (depth: 1)

IL_0121:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_31 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_31, /*hidden argument*/NULL);
	}

IL_0135:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__77::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRaiseSourceDetectedU3Ed__77_SetStateMachine_mE5FF7649475F558F2566CC6E44342EB899597EBE (U3CRaiseSourceDetectedU3Ed__77_tE01F382DF1053619EAD0EAAA66A5AF483CF8A74F * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
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
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/<Start>d__63::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__63__ctor_m23A831ADF68480950063E2A890EB667BDEB53DF9 (U3CStartU3Ed__63_tFB3170C366FB7914205299BE63614F1F4B0A40C3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/<Start>d__63::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__63_MoveNext_m13E9D50D7597ECC38DCA5CADC45035C8BF42D094 (U3CStartU3Ed__63_tFB3170C366FB7914205299BE63614F1F4B0A40C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__63_tFB3170C366FB7914205299BE63614F1F4B0A40C3_m3139DE607A08F0411C521BA404E7E37BFE0B3096_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityCursor_t88D68C79582AC9AE9BAE4966446158D996342F42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_tF6CC763A793FD3C0F29BBAA0EE6780064868118C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CStartU3Ed__63_tFB3170C366FB7914205299BE63614F1F4B0A40C3 * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c;
			}
		}

IL_000a:
		{
			goto IL_000e;
		}

IL_000c:
		{
			goto IL_005c;
		}

IL_000e:
		{
			// base.Start();
			GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * L_2 = __this->get_U3CU3E4__this_2();
			NullCheck(L_2);
			GazeProvider_U3CU3En__0_m9BDD31BEC8DACA51356AD732E5BA946F3F2524D7(L_2, /*hidden argument*/NULL);
			// await EnsureInputSystemValid();
			GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * L_3 = __this->get_U3CU3E4__this_2();
			NullCheck(L_3);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4;
			L_4 = InputSystemGlobalHandlerListener_EnsureInputSystemValid_m6AE5875362DF81B05243E846649F1D11A572B2A1(L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_5;
			L_5 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_4, /*hidden argument*/NULL);
			V_1 = L_5;
			bool L_6;
			L_6 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_0078;
			}
		}

IL_0035:
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->set_U3CU3E1__state_0(L_7);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_8 = V_1;
			__this->set_U3CU3Eu__1_3(L_8);
			V_2 = __this;
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_9 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__63_tFB3170C366FB7914205299BE63614F1F4B0A40C3_m3139DE607A08F0411C521BA404E7E37BFE0B3096((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_9, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), (U3CStartU3Ed__63_tFB3170C366FB7914205299BE63614F1F4B0A40C3 **)(&V_2), /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__63_tFB3170C366FB7914205299BE63614F1F4B0A40C3_m3139DE607A08F0411C521BA404E7E37BFE0B3096_RuntimeMethod_var);
			goto IL_010b;
		}

IL_005c:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_10 = __this->get_U3CU3Eu__1_3();
			V_1 = L_10;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_11 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
		}

IL_0078:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
			// if (this == null)
			GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * L_13 = __this->get_U3CU3E4__this_2();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_14;
			L_14 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			V_3 = L_14;
			bool L_15 = V_3;
			if (!L_15)
			{
				goto IL_0093;
			}
		}

IL_0090:
		{
			// return;
			goto IL_00f7;
		}

IL_0093:
		{
			// GazePointer.BaseCursor?.SetVisibility(true);
			GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * L_16 = __this->get_U3CU3E4__this_2();
			NullCheck(L_16);
			RuntimeObject* L_17;
			L_17 = GazeProvider_get_GazePointer_m9648918C88F08AFB6562C4533B3C99124643A069(L_16, /*hidden argument*/NULL);
			NullCheck(L_17);
			RuntimeObject* L_18;
			L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_BaseCursor() */, IMixedRealityPointer_tF6CC763A793FD3C0F29BBAA0EE6780064868118C_il2cpp_TypeInfo_var, L_17);
			RuntimeObject* L_19 = L_18;
			G_B10_0 = L_19;
			if (L_19)
			{
				G_B11_0 = L_19;
				goto IL_00a9;
			}
		}

IL_00a6:
		{
			goto IL_00b0;
		}

IL_00a9:
		{
			NullCheck(G_B11_0);
			InterfaceActionInvoker1< bool >::Invoke(8 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor::SetVisibility(System.Boolean) */, IMixedRealityCursor_t88D68C79582AC9AE9BAE4966446158D996342F42_il2cpp_TypeInfo_var, G_B11_0, (bool)1);
		}

IL_00b0:
		{
			// if (delayInitialization)
			GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * L_20 = __this->get_U3CU3E4__this_2();
			NullCheck(L_20);
			bool L_21 = L_20->get_delayInitialization_25();
			V_4 = L_21;
			bool L_22 = V_4;
			if (!L_22)
			{
				goto IL_00db;
			}
		}

IL_00c1:
		{
			// delayInitialization = false;
			GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * L_23 = __this->get_U3CU3E4__this_2();
			NullCheck(L_23);
			L_23->set_delayInitialization_25((bool)0);
			// RaiseSourceDetected();
			GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * L_24 = __this->get_U3CU3E4__this_2();
			NullCheck(L_24);
			GazeProvider_RaiseSourceDetected_m3B2796254708DA8699D180700134ECB9F7D9E4FA(L_24, /*hidden argument*/NULL);
		}

IL_00db:
		{
			goto IL_00f7;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00dd;
		}
		throw e;
	}

CATCH_00dd:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_25 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_26 = V_5;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_25, L_26, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_010b;
	} // end catch (depth: 1)

IL_00f7:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_27 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_27, /*hidden argument*/NULL);
	}

IL_010b:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/<Start>d__63::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__63_SetStateMachine_m03232C3FB20B6C7167247ECBB1338AFC0057030C (U3CStartU3Ed__63_tFB3170C366FB7914205299BE63614F1F4B0A40C3 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
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
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::.ctor(Microsoft.MixedReality.Toolkit.Input.GazeProvider,System.String,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,UnityEngine.LayerMask[],System.Single,UnityEngine.Transform,Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer__ctor_m3B155F17383EA3A8CC102051CA0DB320707BE12B (InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C * __this, GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * ___gazeProvider0, String_t* ___pointerName1, RuntimeObject* ___inputSourceParent2, LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___raycastLayerMasks3, float ___pointerExtent4, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___gazeTransform5, BaseRayStabilizer_tB369E9BC56501D9F365E18B05F69FFA840099E53 * ___stabilizer6, const RuntimeMethod* method)
{
	{
		// private bool isDown = false;
		__this->set_isDown_24((bool)0);
		// private Handedness currentHandedness = Handedness.None;
		__this->set_currentHandedness_26(0);
		// : base(pointerName, inputSourceParent)
		String_t* L_0 = ___pointerName1;
		RuntimeObject* L_1 = ___inputSourceParent2;
		GenericPointer__ctor_m7B2B3AA8EDE0F361255C9F0DE4085909F6DE33C9(__this, L_0, L_1, /*hidden argument*/NULL);
		// this.gazeProvider = gazeProvider;
		GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * L_2 = ___gazeProvider0;
		__this->set_gazeProvider_20(L_2);
		// PrioritizedLayerMasksOverride = raycastLayerMasks;
		LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* L_3 = ___raycastLayerMasks3;
		GenericPointer_set_PrioritizedLayerMasksOverride_m92A216D38AD36ECCF5DFCD173138A3451F72B432_inline(__this, L_3, /*hidden argument*/NULL);
		// this.pointerExtent = pointerExtent;
		float L_4 = ___pointerExtent4;
		__this->set_pointerExtent_23(L_4);
		// this.gazeTransform = gazeTransform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = ___gazeTransform5;
		__this->set_gazeTransform_18(L_5);
		// this.stabilizer = stabilizer;
		BaseRayStabilizer_tB369E9BC56501D9F365E18B05F69FFA840099E53 * L_6 = ___stabilizer6;
		__this->set_stabilizer_19(L_6);
		// IsInteractionEnabled = true;
		GenericPointer_set_IsInteractionEnabled_m8B0EB278A52F09515028D98B47BF0A8FD6F2021D(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::get_Controller()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InternalGazePointer_get_Controller_m1333B751C3A86E298182740DF16A44B3DBB414C9 (InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C * __this, const RuntimeMethod* method)
{
	{
		// public override IMixedRealityController Controller { get; set; }
		RuntimeObject* L_0 = __this->get_U3CControllerU3Ek__BackingField_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::set_Controller(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_set_Controller_m991ED37364B3DE0F9CF5FCBFCE46B9255D6C6687 (InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public override IMixedRealityController Controller { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CControllerU3Ek__BackingField_21(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::get_InputSourceParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InternalGazePointer_get_InputSourceParent_m1518E9742C835CA327ED3D3ECB9308450F98436E (InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C * __this, const RuntimeMethod* method)
{
	{
		// public override IMixedRealityInputSource InputSourceParent { get; protected set; }
		RuntimeObject* L_0 = __this->get_U3CInputSourceParentU3Ek__BackingField_22();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::set_InputSourceParent(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_set_InputSourceParent_m16E74404E4D32328B6FBA1EE753D94C62C572598 (InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public override IMixedRealityInputSource InputSourceParent { get; protected set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CInputSourceParentU3Ek__BackingField_22(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::get_PointerExtent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InternalGazePointer_get_PointerExtent_m1D67F9CBDB1207A68398E477C460E4C6F8B6FD93 (InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C * __this, const RuntimeMethod* method)
{
	{
		// get => pointerExtent;
		float L_0 = __this->get_pointerExtent_23();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::set_PointerExtent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_set_PointerExtent_mFF7637E96201685508D7E46BA0C1A9AA478C86C5 (InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => pointerExtent = value;
		float L_0 = ___value0;
		__this->set_pointerExtent_23(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::SetGazeInputSourceParent(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_SetGazeInputSourceParent_m23FF4DF5204920A3C9802CB0049D263317354ED8 (InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C * __this, RuntimeObject* ___gazeInputSource0, const RuntimeMethod* method)
{
	{
		// InputSourceParent = gazeInputSource;
		RuntimeObject* L_0 = ___gazeInputSource0;
		VirtActionInvoker1< RuntimeObject* >::Invoke(43 /* System.Void Microsoft.MixedReality.Toolkit.Input.GenericPointer::set_InputSourceParent(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource) */, __this, L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::OnPreSceneQuery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_OnPreSceneQuery_mB1CF326F131D49D8D094B2FFBEEC5C778AE6D470 (InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPlayspace_t05C727679F26BB2D77941AA76EA5C96D3E5ABE98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	bool V_8 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B7_0 = 0;
	{
		// using (OnPreSceneQueryPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C_StaticFields*)il2cpp_codegen_static_fields_for(InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C_il2cpp_TypeInfo_var))->get_OnPreSceneQueryPerfMarker_27();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// if (gazeProvider.IsEyeTrackingEnabledAndValid)
			GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * L_2 = __this->get_gazeProvider_20();
			NullCheck(L_2);
			bool L_3;
			L_3 = GazeProvider_get_IsEyeTrackingEnabledAndValid_m06EB6D4A6744B55455DEAC018FAF2A20187BC404(L_2, /*hidden argument*/NULL);
			V_5 = L_3;
			bool L_4 = V_5;
			if (!L_4)
			{
				goto IL_0064;
			}
		}

IL_0021:
		{
			// gazeProvider.gazeInputSource.SourceType = InputSourceType.Eyes;
			GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * L_5 = __this->get_gazeProvider_20();
			NullCheck(L_5);
			BaseGenericInputSource_t3BC0CA373CD52DBE59FF183FDE0B2795BC7FBC9E * L_6 = L_5->get_gazeInputSource_15();
			NullCheck(L_6);
			BaseGenericInputSource_set_SourceType_m26B2EA545018ABFE84390E15BF84630C46165402_inline(L_6, 5, /*hidden argument*/NULL);
			// newGazeOrigin = gazeProvider.LatestEyeGaze.origin;
			GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * L_7 = __this->get_gazeProvider_20();
			NullCheck(L_7);
			Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_8;
			L_8 = GazeProvider_get_LatestEyeGaze_m1130241A6F49BA5F102BB19D998642E77C890CA1_inline(L_7, /*hidden argument*/NULL);
			V_6 = L_8;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
			L_9 = Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_6), /*hidden argument*/NULL);
			V_2 = L_9;
			// newGazeNormal = gazeProvider.LatestEyeGaze.direction;
			GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * L_10 = __this->get_gazeProvider_20();
			NullCheck(L_10);
			Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_11;
			L_11 = GazeProvider_get_LatestEyeGaze_m1130241A6F49BA5F102BB19D998642E77C890CA1_inline(L_10, /*hidden argument*/NULL);
			V_6 = L_11;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
			L_12 = Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_6), /*hidden argument*/NULL);
			V_3 = L_12;
			goto IL_0166;
		}

IL_0064:
		{
			// gazeProvider.gazeInputSource.SourceType = InputSourceType.Head;
			GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * L_13 = __this->get_gazeProvider_20();
			NullCheck(L_13);
			BaseGenericInputSource_t3BC0CA373CD52DBE59FF183FDE0B2795BC7FBC9E * L_14 = L_13->get_gazeInputSource_15();
			NullCheck(L_14);
			BaseGenericInputSource_set_SourceType_m26B2EA545018ABFE84390E15BF84630C46165402_inline(L_14, 4, /*hidden argument*/NULL);
			// if (gazeProvider.UseHeadGazeOverride && gazeProvider.overrideHeadPosition.HasValue && gazeProvider.overrideHeadForward.HasValue)
			GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * L_15 = __this->get_gazeProvider_20();
			NullCheck(L_15);
			bool L_16;
			L_16 = GazeProvider_get_UseHeadGazeOverride_mDD27B7E6B59346D78ECE99FE3FEE4BB5FC08E259_inline(L_15, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_00a8;
			}
		}

IL_0084:
		{
			GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * L_17 = __this->get_gazeProvider_20();
			NullCheck(L_17);
			Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_18 = L_17->get_address_of_overrideHeadPosition_27();
			bool L_19;
			L_19 = Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_inline((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)L_18, /*hidden argument*/Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var);
			if (!L_19)
			{
				goto IL_00a8;
			}
		}

IL_0096:
		{
			GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * L_20 = __this->get_gazeProvider_20();
			NullCheck(L_20);
			Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_21 = L_20->get_address_of_overrideHeadForward_28();
			bool L_22;
			L_22 = Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_inline((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)L_21, /*hidden argument*/Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var);
			G_B7_0 = ((int32_t)(L_22));
			goto IL_00a9;
		}

IL_00a8:
		{
			G_B7_0 = 0;
		}

IL_00a9:
		{
			V_7 = (bool)G_B7_0;
			bool L_23 = V_7;
			if (!L_23)
			{
				goto IL_00f7;
			}
		}

IL_00af:
		{
			// newGazeOrigin = gazeProvider.overrideHeadPosition.Value;
			GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * L_24 = __this->get_gazeProvider_20();
			NullCheck(L_24);
			Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_25 = L_24->get_address_of_overrideHeadPosition_27();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
			L_26 = Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)L_25, /*hidden argument*/Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_RuntimeMethod_var);
			V_2 = L_26;
			// newGazeNormal = gazeProvider.overrideHeadForward.Value;
			GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * L_27 = __this->get_gazeProvider_20();
			NullCheck(L_27);
			Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_28 = L_27->get_address_of_overrideHeadForward_28();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
			L_29 = Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)L_28, /*hidden argument*/Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_RuntimeMethod_var);
			V_3 = L_29;
			// gazeProvider.overrideHeadPosition = null;
			GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * L_30 = __this->get_gazeProvider_20();
			NullCheck(L_30);
			Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_31 = L_30->get_address_of_overrideHeadPosition_27();
			il2cpp_codegen_initobj(L_31, sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
			// gazeProvider.overrideHeadForward = null;
			GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * L_32 = __this->get_gazeProvider_20();
			NullCheck(L_32);
			Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_33 = L_32->get_address_of_overrideHeadForward_28();
			il2cpp_codegen_initobj(L_33, sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
			goto IL_0111;
		}

IL_00f7:
		{
			// newGazeOrigin = gazeTransform.position;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34 = __this->get_gazeTransform_18();
			NullCheck(L_34);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
			L_35 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_34, /*hidden argument*/NULL);
			V_2 = L_35;
			// newGazeNormal = gazeTransform.forward;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36 = __this->get_gazeTransform_18();
			NullCheck(L_36);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
			L_37 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_36, /*hidden argument*/NULL);
			V_3 = L_37;
		}

IL_0111:
		{
			// if (stabilizer != null)
			BaseRayStabilizer_tB369E9BC56501D9F365E18B05F69FFA840099E53 * L_38 = __this->get_stabilizer_19();
			V_8 = (bool)((!(((RuntimeObject*)(BaseRayStabilizer_tB369E9BC56501D9F365E18B05F69FFA840099E53 *)L_38) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_39 = V_8;
			if (!L_39)
			{
				goto IL_0165;
			}
		}

IL_0120:
		{
			// stabilizer.UpdateStability(MixedRealityPlayspace.InverseTransformPoint(newGazeOrigin), MixedRealityPlayspace.InverseTransformDirection(newGazeNormal));
			BaseRayStabilizer_tB369E9BC56501D9F365E18B05F69FFA840099E53 * L_40 = __this->get_stabilizer_19();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_t05C727679F26BB2D77941AA76EA5C96D3E5ABE98_il2cpp_TypeInfo_var);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
			L_42 = MixedRealityPlayspace_InverseTransformPoint_m02FDC28FED10476D9F16417BF9BE9EAC16FFC797(L_41, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43 = V_3;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
			L_44 = MixedRealityPlayspace_InverseTransformDirection_mC05507805FA15A88C5E37A58F697CC4FCE29A0B2(L_43, /*hidden argument*/NULL);
			NullCheck(L_40);
			VirtActionInvoker2< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(13 /* System.Void Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer::UpdateStability(UnityEngine.Vector3,UnityEngine.Vector3) */, L_40, L_42, L_44);
			// newGazeOrigin = MixedRealityPlayspace.TransformPoint(stabilizer.StablePosition);
			BaseRayStabilizer_tB369E9BC56501D9F365E18B05F69FFA840099E53 * L_45 = __this->get_stabilizer_19();
			NullCheck(L_45);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
			L_46 = VirtFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(9 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer::get_StablePosition() */, L_45);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
			L_47 = MixedRealityPlayspace_TransformPoint_mCC072AE0B50094CE0E7A972B14556AA0EEE36448(L_46, /*hidden argument*/NULL);
			V_2 = L_47;
			// newGazeNormal = MixedRealityPlayspace.TransformDirection(stabilizer.StableRay.direction);
			BaseRayStabilizer_tB369E9BC56501D9F365E18B05F69FFA840099E53 * L_48 = __this->get_stabilizer_19();
			NullCheck(L_48);
			Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_49;
			L_49 = VirtFuncInvoker0< Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(11 /* UnityEngine.Ray Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer::get_StableRay() */, L_48);
			V_6 = L_49;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
			L_50 = Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_6), /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
			L_51 = MixedRealityPlayspace_TransformDirection_m926A8371FCD68DBC01B9C7AE7FF661D005D864B2(L_50, /*hidden argument*/NULL);
			V_3 = L_51;
		}

IL_0165:
		{
		}

IL_0166:
		{
			// Vector3 endPoint = newGazeOrigin + (newGazeNormal * pointerExtent);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52 = V_2;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53 = V_3;
			float L_54 = __this->get_pointerExtent_23();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
			L_55 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_53, L_54, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56;
			L_56 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_52, L_55, /*hidden argument*/NULL);
			V_4 = L_56;
			// Rays[0].UpdateRayStep(ref newGazeOrigin, ref endPoint);
			RayStepU5BU5D_tCC36F43D996F3D35CC79E15BA0E3B1C10EBF1DC8* L_57;
			L_57 = GenericPointer_get_Rays_m9E6E23787FA77505D47A43A6113D27447CCC6B13_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_57);
			RayStep_UpdateRayStep_m854F9ACA9F4147057292DB968B5F56BEC8859A1B((RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF *)((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x1A2, FINALLY_0193);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0193;
	}

FINALLY_0193:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(403)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(403)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A2, IL_01a2)
	}

IL_01a2:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::OnPostSceneQuery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_OnPostSceneQuery_mBF88BAF9B5FC1E9A0A8977EDB56F545483D9B514 (InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t6D453243E31F7729D3E9B49623B6B7092296E4C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (OnPostSceneQueryPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C_StaticFields*)il2cpp_codegen_static_fields_for(InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C_il2cpp_TypeInfo_var))->get_OnPostSceneQueryPerfMarker_28();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// if (isDown)
			bool L_2 = __this->get_isDown_24();
			V_2 = L_2;
			bool L_3 = V_2;
			if (!L_3)
			{
				goto IL_0039;
			}
		}

IL_001a:
		{
			// CoreServices.InputSystem.RaisePointerDragged(this, MixedRealityInputAction.None, currentHandedness, currentInputSource);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
			RuntimeObject* L_4;
			L_4 = CoreServices_get_InputSystem_mF1BC6A87C71157B2BFDF556079A9B189F3FCFDE9(/*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_il2cpp_TypeInfo_var);
			MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  L_5;
			L_5 = MixedRealityInputAction_get_None_m2699B1F27BCBC764B5BE98CE502466162142914B_inline(/*hidden argument*/NULL);
			uint8_t L_6 = __this->get_currentHandedness_26();
			RuntimeObject* L_7 = __this->get_currentInputSource_25();
			NullCheck(L_4);
			InterfaceActionInvoker4< RuntimeObject*, MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A , uint8_t, RuntimeObject* >::Invoke(36 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePointerDragged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource) */, IMixedRealityInputSystem_t6D453243E31F7729D3E9B49623B6B7092296E4C4_il2cpp_TypeInfo_var, L_4, __this, L_5, L_6, L_7);
		}

IL_0039:
		{
			IL2CPP_LEAVE(0x4B, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4B, IL_004b)
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::OnPreCurrentPointerTargetChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_OnPreCurrentPointerTargetChange_mD7A0DCAD1CA2AC6632F7F32C6990BBA12A36DEE3 (InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C * __this, const RuntimeMethod* method)
{
	{
		// public override void OnPreCurrentPointerTargetChange() { }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  InternalGazePointer_get_Position_mC8903C16EAB82194B2385ABB7A1F7DB904DBAAC8 (InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C * __this, const RuntimeMethod* method)
{
	{
		// public override Vector3 Position => gazeTransform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_gazeTransform_18();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  InternalGazePointer_get_Rotation_m0EEE61410E8E6AE8134FCA8239E8CAEE303171A1 (InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C * __this, const RuntimeMethod* method)
{
	{
		// public override Quaternion Rotation => gazeTransform.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_gazeTransform_18();
		NullCheck(L_0);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_Reset_m6EBDE52C556CE7E30E1E40F8E57D5EA612B3EED1 (InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C * __this, const RuntimeMethod* method)
{
	{
		// Controller = null;
		VirtActionInvoker1< RuntimeObject* >::Invoke(41 /* System.Void Microsoft.MixedReality.Toolkit.Input.GenericPointer::set_Controller(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, __this, (RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::RaisePointerDown(Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_RaisePointerDown_m3FD357DFE6F19D650B33A84549A6BBE78B84F3EF (InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C * __this, MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  ___mixedRealityInputAction0, uint8_t ___handedness1, RuntimeObject* ___inputSource2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t6D453243E31F7729D3E9B49623B6B7092296E4C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// isDown = true;
		__this->set_isDown_24((bool)1);
		// currentHandedness = handedness;
		uint8_t L_0 = ___handedness1;
		__this->set_currentHandedness_26(L_0);
		// currentInputSource = inputSource;
		RuntimeObject* L_1 = ___inputSource2;
		__this->set_currentInputSource_25(L_1);
		// CoreServices.InputSystem?.RaisePointerDown(this, mixedRealityInputAction, handedness, inputSource);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = CoreServices_get_InputSystem_mF1BC6A87C71157B2BFDF556079A9B189F3FCFDE9(/*hidden argument*/NULL);
		RuntimeObject* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0021;
		}
	}
	{
		goto IL_002b;
	}

IL_0021:
	{
		MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  L_4 = ___mixedRealityInputAction0;
		uint8_t L_5 = ___handedness1;
		RuntimeObject* L_6 = ___inputSource2;
		NullCheck(G_B2_0);
		InterfaceActionInvoker4< RuntimeObject*, MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A , uint8_t, RuntimeObject* >::Invoke(35 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePointerDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource) */, IMixedRealityInputSystem_t6D453243E31F7729D3E9B49623B6B7092296E4C4_il2cpp_TypeInfo_var, G_B2_0, __this, L_4, L_5, L_6);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::RaisePointerUp(Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_RaisePointerUp_m51E568B70552DEBE0A76450BCF7551FC2BF1C994 (InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C * __this, MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  ___mixedRealityInputAction0, uint8_t ___handedness1, RuntimeObject* ___inputSource2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t6D453243E31F7729D3E9B49623B6B7092296E4C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		// isDown = false;
		__this->set_isDown_24((bool)0);
		// currentHandedness = Handedness.None;
		__this->set_currentHandedness_26(0);
		// currentInputSource = null;
		__this->set_currentInputSource_25((RuntimeObject*)NULL);
		// CoreServices.InputSystem?.RaisePointerClicked(this, mixedRealityInputAction, 0, handedness, inputSource);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_mF1BC6A87C71157B2BFDF556079A9B189F3FCFDE9(/*hidden argument*/NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0021;
		}
	}
	{
		goto IL_002c;
	}

IL_0021:
	{
		MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  L_2 = ___mixedRealityInputAction0;
		uint8_t L_3 = ___handedness1;
		RuntimeObject* L_4 = ___inputSource2;
		NullCheck(G_B2_0);
		InterfaceActionInvoker5< RuntimeObject*, MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A , int32_t, uint8_t, RuntimeObject* >::Invoke(37 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePointerClicked(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,System.Int32,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource) */, IMixedRealityInputSystem_t6D453243E31F7729D3E9B49623B6B7092296E4C4_il2cpp_TypeInfo_var, G_B2_0, __this, L_2, 0, L_3, L_4);
	}

IL_002c:
	{
		// CoreServices.InputSystem?.RaisePointerUp(this, mixedRealityInputAction, handedness, inputSource);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		RuntimeObject* L_5;
		L_5 = CoreServices_get_InputSystem_mF1BC6A87C71157B2BFDF556079A9B189F3FCFDE9(/*hidden argument*/NULL);
		RuntimeObject* L_6 = L_5;
		G_B4_0 = L_6;
		if (L_6)
		{
			G_B5_0 = L_6;
			goto IL_0037;
		}
	}
	{
		goto IL_0041;
	}

IL_0037:
	{
		MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  L_7 = ___mixedRealityInputAction0;
		uint8_t L_8 = ___handedness1;
		RuntimeObject* L_9 = ___inputSource2;
		NullCheck(G_B5_0);
		InterfaceActionInvoker4< RuntimeObject*, MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A , uint8_t, RuntimeObject* >::Invoke(38 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePointerUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource) */, IMixedRealityInputSystem_t6D453243E31F7729D3E9B49623B6B7092296E4C4_il2cpp_TypeInfo_var, G_B5_0, __this, L_7, L_8, L_9);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer__cctor_mE74FCCEBF6C27D8813297F23B261000ABACEC92F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral033695E8FCCB2AD8ED3D6CA47B0D7673411B3701);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8646EE7CB5D6509C0ECF1B9EA3BEB8B77A6CB742);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker OnPreSceneQueryPerfMarker = new ProfilerMarker("[MRTK] InternalGazePointer.OnPreSceneQuery");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral033695E8FCCB2AD8ED3D6CA47B0D7673411B3701, /*hidden argument*/NULL);
		((InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C_StaticFields*)il2cpp_codegen_static_fields_for(InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C_il2cpp_TypeInfo_var))->set_OnPreSceneQueryPerfMarker_27(L_0);
		// private static readonly ProfilerMarker OnPostSceneQueryPerfMarker = new ProfilerMarker("[MRTK] InternalGazePointer.OnPostSceneQuery");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), _stringLiteral8646EE7CB5D6509C0ECF1B9EA3BEB8B77A6CB742, /*hidden argument*/NULL);
		((InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C_StaticFields*)il2cpp_codegen_static_fields_for(InternalGazePointer_t4A849B850C1C955DBABE83CF3DF166DDBE52658C_il2cpp_TypeInfo_var))->set_OnPostSceneQueryPerfMarker_28(L_1);
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
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mEACDEF716F938DBCF1B7CC4478A6D38763010582 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5A220AA1B09C7BA7AD1E3C87A43A8F65C986B878_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5A220AA1B09C7BA7AD1E3C87A43A8F65C986B878 * L_0 = (U3CU3Ec_t5A220AA1B09C7BA7AD1E3C87A43A8F65C986B878 *)il2cpp_codegen_object_new(U3CU3Ec_t5A220AA1B09C7BA7AD1E3C87A43A8F65C986B878_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mFF947632199F24ACAD7647EDBEC4C250639561D8(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t5A220AA1B09C7BA7AD1E3C87A43A8F65C986B878_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5A220AA1B09C7BA7AD1E3C87A43A8F65C986B878_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFF947632199F24ACAD7647EDBEC4C250639561D8 (U3CU3Ec_t5A220AA1B09C7BA7AD1E3C87A43A8F65C986B878 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c::<EnsureInputSystemValid>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_m4ACD2E63406E09CAB23EE4C2A9FF5E9131D29962 (U3CU3Ec_t5A220AA1B09C7BA7AD1E3C87A43A8F65C986B878 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// await new WaitUntil(() => CoreServices.InputSystem != null);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_mF1BC6A87C71157B2BFDF556079A9B189F3FCFDE9(/*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
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
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4__ctor_m37C0605766DB554214C38F46407AA2B5553FBE1F (U3CEnsureInputSystemValidU3Ed__4_tDFF204F4A209F39BBED9FF447E84E291A9691B6F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_MoveNext_m07AAF95375BDE7F7D057BE1E075A76C86878027E (U3CEnsureInputSystemValidU3Ed__4_tDFF204F4A209F39BBED9FF447E84E291A9691B6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_TisU3CEnsureInputSystemValidU3Ed__4_tDFF204F4A209F39BBED9FF447E84E291A9691B6F_mEA3DCA64E69C5902EC68FEFA6D9D5B4348A47256_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_m4ACD2E63406E09CAB23EE4C2A9FF5E9131D29962_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5A220AA1B09C7BA7AD1E3C87A43A8F65C986B878_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 * V_2 = NULL;
	U3CEnsureInputSystemValidU3Ed__4_tDFF204F4A209F39BBED9FF447E84E291A9691B6F * V_3 = NULL;
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B7_0 = NULL;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B6_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c;
			}
		}

IL_000a:
		{
			goto IL_000e;
		}

IL_000c:
		{
			goto IL_0072;
		}

IL_000e:
		{
			// if (CoreServices.InputSystem == null)
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
			RuntimeObject* L_2;
			L_2 = CoreServices_get_InputSystem_mF1BC6A87C71157B2BFDF556079A9B189F3FCFDE9(/*hidden argument*/NULL);
			V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_3 = V_1;
			if (!L_3)
			{
				goto IL_0096;
			}
		}

IL_001b:
		{
			// await new WaitUntil(() => CoreServices.InputSystem != null);
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t5A220AA1B09C7BA7AD1E3C87A43A8F65C986B878_il2cpp_TypeInfo_var);
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_4 = ((U3CU3Ec_t5A220AA1B09C7BA7AD1E3C87A43A8F65C986B878_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5A220AA1B09C7BA7AD1E3C87A43A8F65C986B878_il2cpp_TypeInfo_var))->get_U3CU3E9__4_0_1();
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_5 = L_4;
			G_B6_0 = L_5;
			if (L_5)
			{
				G_B7_0 = L_5;
				goto IL_003b;
			}
		}

IL_0024:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t5A220AA1B09C7BA7AD1E3C87A43A8F65C986B878_il2cpp_TypeInfo_var);
			U3CU3Ec_t5A220AA1B09C7BA7AD1E3C87A43A8F65C986B878 * L_6 = ((U3CU3Ec_t5A220AA1B09C7BA7AD1E3C87A43A8F65C986B878_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5A220AA1B09C7BA7AD1E3C87A43A8F65C986B878_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_7 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
			Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_m4ACD2E63406E09CAB23EE4C2A9FF5E9131D29962_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_8 = L_7;
			((U3CU3Ec_t5A220AA1B09C7BA7AD1E3C87A43A8F65C986B878_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5A220AA1B09C7BA7AD1E3C87A43A8F65C986B878_il2cpp_TypeInfo_var))->set_U3CU3E9__4_0_1(L_8);
			G_B7_0 = L_8;
		}

IL_003b:
		{
			WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_9 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
			WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_9, G_B7_0, /*hidden argument*/NULL);
			SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 * L_10;
			L_10 = AwaiterExtensions_GetAwaiter_mA3AFD1DB345C130BF701BE302DAF7654FA3EEED0(L_9, /*hidden argument*/NULL);
			V_2 = L_10;
			SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 * L_11 = V_2;
			NullCheck(L_11);
			bool L_12;
			L_12 = SimpleCoroutineAwaiter_get_IsCompleted_mFFFDFC33C8B0031C7531E7CCA4BE13ECAB038EB8_inline(L_11, /*hidden argument*/NULL);
			if (L_12)
			{
				goto IL_008e;
			}
		}

IL_004e:
		{
			int32_t L_13 = 0;
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
			SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 * L_14 = V_2;
			__this->set_U3CU3Eu__1_3(L_14);
			V_3 = __this;
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_15 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_TisU3CEnsureInputSystemValidU3Ed__4_tDFF204F4A209F39BBED9FF447E84E291A9691B6F_mEA3DCA64E69C5902EC68FEFA6D9D5B4348A47256((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_15, (SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 **)(&V_2), (U3CEnsureInputSystemValidU3Ed__4_tDFF204F4A209F39BBED9FF447E84E291A9691B6F **)(&V_3), /*hidden argument*/AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_TisU3CEnsureInputSystemValidU3Ed__4_tDFF204F4A209F39BBED9FF447E84E291A9691B6F_mEA3DCA64E69C5902EC68FEFA6D9D5B4348A47256_RuntimeMethod_var);
			goto IL_00c6;
		}

IL_0072:
		{
			RuntimeObject * L_16 = __this->get_U3CU3Eu__1_3();
			V_2 = ((SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 *)CastclassClass((RuntimeObject*)L_16, SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_3(NULL);
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->set_U3CU3E1__state_0(L_17);
		}

IL_008e:
		{
			SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 * L_18 = V_2;
			NullCheck(L_18);
			SimpleCoroutineAwaiter_GetResult_mF074C7B50AF35EA1BE937F5E5D6E81E125049FD5(L_18, /*hidden argument*/NULL);
		}

IL_0096:
		{
			goto IL_00b2;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0098;
		}
		throw e;
	}

CATCH_0098:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_20 = V_4;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_19, L_20, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c6;
	} // end catch (depth: 1)

IL_00b2:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_21 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_21, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_SetStateMachine_m31377D27DE072A2927146E632422021D446931AC (U3CEnsureInputSystemValidU3Ed__4_tDFF204F4A209F39BBED9FF447E84E291A9691B6F * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
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
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2__ctor_mE17A067CCB20E33742BF531190564EEBF200EA7A (U3CStartU3Ed__2_tA608AE85547E154DFD08A56D53F5AC78CCE2251D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_MoveNext_m07063783B48DA1B9D583DE1B98ECF235CCB32749 (U3CStartU3Ed__2_tA608AE85547E154DFD08A56D53F5AC78CCE2251D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_tA608AE85547E154DFD08A56D53F5AC78CCE2251D_m318BF45A45E3A53566D557825AE44A159DBA00BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CStartU3Ed__2_tA608AE85547E154DFD08A56D53F5AC78CCE2251D * V_3 = NULL;
	bool V_4 = false;
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c;
			}
		}

IL_000a:
		{
			goto IL_000e;
		}

IL_000c:
		{
			goto IL_0063;
		}

IL_000e:
		{
			// if (lateInitialize)
			InputSystemGlobalHandlerListener_tE39526E6E6789D2FA1576A6AB07D1A3F163458B2 * L_2 = __this->get_U3CU3E4__this_2();
			NullCheck(L_2);
			bool L_3 = L_2->get_lateInitialize_4();
			V_1 = L_3;
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_00b5;
			}
		}

IL_0021:
		{
			// await EnsureInputSystemValid();
			InputSystemGlobalHandlerListener_tE39526E6E6789D2FA1576A6AB07D1A3F163458B2 * L_5 = __this->get_U3CU3E4__this_2();
			NullCheck(L_5);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6;
			L_6 = InputSystemGlobalHandlerListener_EnsureInputSystemValid_m6AE5875362DF81B05243E846649F1D11A572B2A1(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_7;
			L_7 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			bool L_8;
			L_8 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_007f;
			}
		}

IL_003c:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_10 = V_2;
			__this->set_U3CU3Eu__1_3(L_10);
			V_3 = __this;
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_tA608AE85547E154DFD08A56D53F5AC78CCE2251D_m318BF45A45E3A53566D557825AE44A159DBA00BC((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_11, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CStartU3Ed__2_tA608AE85547E154DFD08A56D53F5AC78CCE2251D **)(&V_3), /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_tA608AE85547E154DFD08A56D53F5AC78CCE2251D_m318BF45A45E3A53566D557825AE44A159DBA00BC_RuntimeMethod_var);
			goto IL_00e5;
		}

IL_0063:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_12 = __this->get_U3CU3Eu__1_3();
			V_2 = L_12;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_13 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
		}

IL_007f:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			// if (this == null)
			InputSystemGlobalHandlerListener_tE39526E6E6789D2FA1576A6AB07D1A3F163458B2 * L_15 = __this->get_U3CU3E4__this_2();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_16;
			L_16 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			V_4 = L_16;
			bool L_17 = V_4;
			if (!L_17)
			{
				goto IL_009c;
			}
		}

IL_0099:
		{
			// return;
			goto IL_00d1;
		}

IL_009c:
		{
			// lateInitialize = false;
			InputSystemGlobalHandlerListener_tE39526E6E6789D2FA1576A6AB07D1A3F163458B2 * L_18 = __this->get_U3CU3E4__this_2();
			NullCheck(L_18);
			L_18->set_lateInitialize_4((bool)0);
			// RegisterHandlers();
			InputSystemGlobalHandlerListener_tE39526E6E6789D2FA1576A6AB07D1A3F163458B2 * L_19 = __this->get_U3CU3E4__this_2();
			NullCheck(L_19);
			VirtActionInvoker0::Invoke(7 /* System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener::RegisterHandlers() */, L_19);
		}

IL_00b5:
		{
			goto IL_00d1;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00b7;
		}
		throw e;
	}

CATCH_00b7:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_21 = V_5;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_20, L_21, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00e5;
	} // end catch (depth: 1)

IL_00d1:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_22 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_22, /*hidden argument*/NULL);
	}

IL_00e5:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_SetStateMachine_mC65FEC0C04DB9AB1F0A12DDB4E43AE11BF4DE6AF (U3CStartU3Ed__2_tA608AE85547E154DFD08A56D53F5AC78CCE2251D * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
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
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m07C75CD2A966EEE23E3DBADAF9597C64279004E9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5EA49CAA78D5D4F96D4BC61FCE7479A143530CCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5EA49CAA78D5D4F96D4BC61FCE7479A143530CCE * L_0 = (U3CU3Ec_t5EA49CAA78D5D4F96D4BC61FCE7479A143530CCE *)il2cpp_codegen_object_new(U3CU3Ec_t5EA49CAA78D5D4F96D4BC61FCE7479A143530CCE_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m4A4C842974CF50C8E6D377640BCFE2A1D3988889(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t5EA49CAA78D5D4F96D4BC61FCE7479A143530CCE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5EA49CAA78D5D4F96D4BC61FCE7479A143530CCE_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4A4C842974CF50C8E6D377640BCFE2A1D3988889 (U3CU3Ec_t5EA49CAA78D5D4F96D4BC61FCE7479A143530CCE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c::<EnsureInputSystemValid>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_m611E264F56702CFFD5CAE4C652F38D9D2531C73C (U3CU3Ec_t5EA49CAA78D5D4F96D4BC61FCE7479A143530CCE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// await new WaitUntil(() => CoreServices.InputSystem != null);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_mF1BC6A87C71157B2BFDF556079A9B189F3FCFDE9(/*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
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
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4__ctor_mCB127790E7719836A1B5F2920D75697E4AE8EBF1 (U3CEnsureInputSystemValidU3Ed__4_t483A21CE125D456473D51EC11F18208F19416798 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_MoveNext_m929CE009E33D3979DE9B5B1033C281D06A4A276B (U3CEnsureInputSystemValidU3Ed__4_t483A21CE125D456473D51EC11F18208F19416798 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_TisU3CEnsureInputSystemValidU3Ed__4_t483A21CE125D456473D51EC11F18208F19416798_m389757D93D363A180E5C9FF3AFCB054EB3FCB3C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_m611E264F56702CFFD5CAE4C652F38D9D2531C73C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5EA49CAA78D5D4F96D4BC61FCE7479A143530CCE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 * V_2 = NULL;
	U3CEnsureInputSystemValidU3Ed__4_t483A21CE125D456473D51EC11F18208F19416798 * V_3 = NULL;
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B7_0 = NULL;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B6_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c;
			}
		}

IL_000a:
		{
			goto IL_000e;
		}

IL_000c:
		{
			goto IL_0072;
		}

IL_000e:
		{
			// if (CoreServices.InputSystem == null)
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
			RuntimeObject* L_2;
			L_2 = CoreServices_get_InputSystem_mF1BC6A87C71157B2BFDF556079A9B189F3FCFDE9(/*hidden argument*/NULL);
			V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_3 = V_1;
			if (!L_3)
			{
				goto IL_0096;
			}
		}

IL_001b:
		{
			// await new WaitUntil(() => CoreServices.InputSystem != null);
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t5EA49CAA78D5D4F96D4BC61FCE7479A143530CCE_il2cpp_TypeInfo_var);
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_4 = ((U3CU3Ec_t5EA49CAA78D5D4F96D4BC61FCE7479A143530CCE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5EA49CAA78D5D4F96D4BC61FCE7479A143530CCE_il2cpp_TypeInfo_var))->get_U3CU3E9__4_0_1();
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_5 = L_4;
			G_B6_0 = L_5;
			if (L_5)
			{
				G_B7_0 = L_5;
				goto IL_003b;
			}
		}

IL_0024:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t5EA49CAA78D5D4F96D4BC61FCE7479A143530CCE_il2cpp_TypeInfo_var);
			U3CU3Ec_t5EA49CAA78D5D4F96D4BC61FCE7479A143530CCE * L_6 = ((U3CU3Ec_t5EA49CAA78D5D4F96D4BC61FCE7479A143530CCE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5EA49CAA78D5D4F96D4BC61FCE7479A143530CCE_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_7 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
			Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_m611E264F56702CFFD5CAE4C652F38D9D2531C73C_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_8 = L_7;
			((U3CU3Ec_t5EA49CAA78D5D4F96D4BC61FCE7479A143530CCE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5EA49CAA78D5D4F96D4BC61FCE7479A143530CCE_il2cpp_TypeInfo_var))->set_U3CU3E9__4_0_1(L_8);
			G_B7_0 = L_8;
		}

IL_003b:
		{
			WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_9 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
			WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_9, G_B7_0, /*hidden argument*/NULL);
			SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 * L_10;
			L_10 = AwaiterExtensions_GetAwaiter_mA3AFD1DB345C130BF701BE302DAF7654FA3EEED0(L_9, /*hidden argument*/NULL);
			V_2 = L_10;
			SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 * L_11 = V_2;
			NullCheck(L_11);
			bool L_12;
			L_12 = SimpleCoroutineAwaiter_get_IsCompleted_mFFFDFC33C8B0031C7531E7CCA4BE13ECAB038EB8_inline(L_11, /*hidden argument*/NULL);
			if (L_12)
			{
				goto IL_008e;
			}
		}

IL_004e:
		{
			int32_t L_13 = 0;
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
			SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 * L_14 = V_2;
			__this->set_U3CU3Eu__1_3(L_14);
			V_3 = __this;
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_15 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_TisU3CEnsureInputSystemValidU3Ed__4_t483A21CE125D456473D51EC11F18208F19416798_m389757D93D363A180E5C9FF3AFCB054EB3FCB3C5((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_15, (SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 **)(&V_2), (U3CEnsureInputSystemValidU3Ed__4_t483A21CE125D456473D51EC11F18208F19416798 **)(&V_3), /*hidden argument*/AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_TisU3CEnsureInputSystemValidU3Ed__4_t483A21CE125D456473D51EC11F18208F19416798_m389757D93D363A180E5C9FF3AFCB054EB3FCB3C5_RuntimeMethod_var);
			goto IL_00c6;
		}

IL_0072:
		{
			RuntimeObject * L_16 = __this->get_U3CU3Eu__1_3();
			V_2 = ((SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 *)CastclassClass((RuntimeObject*)L_16, SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_3(NULL);
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->set_U3CU3E1__state_0(L_17);
		}

IL_008e:
		{
			SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 * L_18 = V_2;
			NullCheck(L_18);
			SimpleCoroutineAwaiter_GetResult_mF074C7B50AF35EA1BE937F5E5D6E81E125049FD5(L_18, /*hidden argument*/NULL);
		}

IL_0096:
		{
			goto IL_00b2;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0098;
		}
		throw e;
	}

CATCH_0098:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_20 = V_4;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_19, L_20, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c6;
	} // end catch (depth: 1)

IL_00b2:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_21 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_21, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_SetStateMachine_m72AFF051AFAEBDB43569A535EF015B7E07A65A95 (U3CEnsureInputSystemValidU3Ed__4_t483A21CE125D456473D51EC11F18208F19416798 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
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
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2__ctor_m5349BF5090BAD14A9E2F78F35A9C9B4CFA49B1FD (U3CStartU3Ed__2_t27D2FF7C6730C5A76FA7A33B5BCEA7C175F3705A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_MoveNext_m20E36BD10DD41B445F81600A857206643C5E9B7C (U3CStartU3Ed__2_t27D2FF7C6730C5A76FA7A33B5BCEA7C175F3705A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t27D2FF7C6730C5A76FA7A33B5BCEA7C175F3705A_m1205BF0963ED64BE1C325BE0AA742724EA4302AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSystem_tC8F1D97D393FBBACAC7729B52669B42461873D27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CStartU3Ed__2_t27D2FF7C6730C5A76FA7A33B5BCEA7C175F3705A * V_3 = NULL;
	bool V_4 = false;
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c;
			}
		}

IL_000a:
		{
			goto IL_000e;
		}

IL_000c:
		{
			goto IL_0063;
		}

IL_000e:
		{
			// if (lateInitialize)
			InputSystemGlobalListener_tFD9BB9DFC8D3641330B90871932353F182FDB2C2 * L_2 = __this->get_U3CU3E4__this_2();
			NullCheck(L_2);
			bool L_3 = L_2->get_lateInitialize_4();
			V_1 = L_3;
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_00bf;
			}
		}

IL_0021:
		{
			// await EnsureInputSystemValid();
			InputSystemGlobalListener_tFD9BB9DFC8D3641330B90871932353F182FDB2C2 * L_5 = __this->get_U3CU3E4__this_2();
			NullCheck(L_5);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6;
			L_6 = InputSystemGlobalListener_EnsureInputSystemValid_m604F5FFD85AC63C57FBC5A1620693DE49F1D0887(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_7;
			L_7 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			bool L_8;
			L_8 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_007f;
			}
		}

IL_003c:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_10 = V_2;
			__this->set_U3CU3Eu__1_3(L_10);
			V_3 = __this;
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t27D2FF7C6730C5A76FA7A33B5BCEA7C175F3705A_m1205BF0963ED64BE1C325BE0AA742724EA4302AE((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_11, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CStartU3Ed__2_t27D2FF7C6730C5A76FA7A33B5BCEA7C175F3705A **)(&V_3), /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t27D2FF7C6730C5A76FA7A33B5BCEA7C175F3705A_m1205BF0963ED64BE1C325BE0AA742724EA4302AE_RuntimeMethod_var);
			goto IL_00ef;
		}

IL_0063:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_12 = __this->get_U3CU3Eu__1_3();
			V_2 = L_12;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_13 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
		}

IL_007f:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			// if (this == null)
			InputSystemGlobalListener_tFD9BB9DFC8D3641330B90871932353F182FDB2C2 * L_15 = __this->get_U3CU3E4__this_2();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_16;
			L_16 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			V_4 = L_16;
			bool L_17 = V_4;
			if (!L_17)
			{
				goto IL_009c;
			}
		}

IL_0099:
		{
			// return;
			goto IL_00db;
		}

IL_009c:
		{
			// lateInitialize = false;
			InputSystemGlobalListener_tFD9BB9DFC8D3641330B90871932353F182FDB2C2 * L_18 = __this->get_U3CU3E4__this_2();
			NullCheck(L_18);
			L_18->set_lateInitialize_4((bool)0);
			// CoreServices.InputSystem.Register(gameObject);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
			RuntimeObject* L_19;
			L_19 = CoreServices_get_InputSystem_mF1BC6A87C71157B2BFDF556079A9B189F3FCFDE9(/*hidden argument*/NULL);
			InputSystemGlobalListener_tFD9BB9DFC8D3641330B90871932353F182FDB2C2 * L_20 = __this->get_U3CU3E4__this_2();
			NullCheck(L_20);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
			L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_20, /*hidden argument*/NULL);
			NullCheck(L_19);
			InterfaceActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.IMixedRealityEventSystem::Register(UnityEngine.GameObject) */, IMixedRealityEventSystem_tC8F1D97D393FBBACAC7729B52669B42461873D27_il2cpp_TypeInfo_var, L_19, L_21);
		}

IL_00bf:
		{
			goto IL_00db;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c1;
		}
		throw e;
	}

CATCH_00c1:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_22 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_23 = V_5;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_22, L_23, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ef;
	} // end catch (depth: 1)

IL_00db:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_24 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_24, /*hidden argument*/NULL);
	}

IL_00ef:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_SetStateMachine_mDAF370DF2F6C5AB9E94ECAF4AB99AA86E6DA2C0C (U3CStartU3Ed__2_t27D2FF7C6730C5A76FA7A33B5BCEA7C175F3705A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
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
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16__ctor_mF8E876F1EFA5FCC1099F44AFE7595A56F18DAC05 (U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16_System_IDisposable_Dispose_mCD47D711BD9E389FA56AC3E46282085A87F03448 (U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1E, FINALLY_0017);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0017;
	}

FINALLY_0017:
	{ // begin finally (depth: 1)
		U3Cget_ActiveMixedRealityPointersU3Ed__16_U3CU3Em__Finally1_m6ACE0844EDF4B4F9692CCFB44BD536E4AE50CB7B(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(23)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(23)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1E, IL_001e)
	}

IL_001e:
	{
		goto IL_0020;
	}

IL_0020:
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_ActiveMixedRealityPointersU3Ed__16_MoveNext_m2074BB6670EC02A8F2B3845EBBE755FA551FF3EA (U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m0F70BE553DF5B805B926E5BA1B1CF6452C41FC93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m979E07653F7545D173CA9A1454D729620EA8BF6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m22BBCEF5FEB5A97F2B8AA9470FEAA0F3093F22FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mEB783152B3091A6573D44BDD18EDC88DC769C2A4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0012;
			}
		}

IL_000a:
		{
			goto IL_000c;
		}

IL_000c:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014;
			}
		}

IL_0010:
		{
			goto IL_0016;
		}

IL_0012:
		{
			goto IL_001d;
		}

IL_0014:
		{
			goto IL_0079;
		}

IL_0016:
		{
			V_0 = (bool)0;
			goto IL_00ba;
		}

IL_001d:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (var pointerDataEntry in pointerDataToUpdate)
			MixedRealityInputModule_t0492967672F0C01F27AF4273EFFE8CE0EC32C664 * L_3 = __this->get_U3CU3E4__this_3();
			NullCheck(L_3);
			Dictionary_2_tB7478EF7A1D56D0534BD9AF224099A735CEFB6E6 * L_4 = L_3->get_pointerDataToUpdate_30();
			NullCheck(L_4);
			Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337  L_5;
			L_5 = Dictionary_2_GetEnumerator_m0F70BE553DF5B805B926E5BA1B1CF6452C41FC93(L_4, /*hidden argument*/Dictionary_2_GetEnumerator_m0F70BE553DF5B805B926E5BA1B1CF6452C41FC93_RuntimeMethod_var);
			__this->set_U3CU3Es__1_4(L_5);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_008e;
		}

IL_0046:
		{
			// foreach (var pointerDataEntry in pointerDataToUpdate)
			Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337 * L_6 = __this->get_address_of_U3CU3Es__1_4();
			KeyValuePair_2_tB056ADCF48A6392925AFCA43342F5E6483191DE0  L_7;
			L_7 = Enumerator_get_Current_m22BBCEF5FEB5A97F2B8AA9470FEAA0F3093F22FC_inline((Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337 *)L_6, /*hidden argument*/Enumerator_get_Current_m22BBCEF5FEB5A97F2B8AA9470FEAA0F3093F22FC_RuntimeMethod_var);
			__this->set_U3CpointerDataEntryU3E5__2_5(L_7);
			// yield return pointerDataEntry.Value.pointer;
			KeyValuePair_2_tB056ADCF48A6392925AFCA43342F5E6483191DE0 * L_8 = __this->get_address_of_U3CpointerDataEntryU3E5__2_5();
			PointerData_t524B70063DAD63AB1B38F1BB8C9EE71E1D04DC1F * L_9;
			L_9 = KeyValuePair_2_get_Value_mEB783152B3091A6573D44BDD18EDC88DC769C2A4_inline((KeyValuePair_2_tB056ADCF48A6392925AFCA43342F5E6483191DE0 *)L_8, /*hidden argument*/KeyValuePair_2_get_Value_mEB783152B3091A6573D44BDD18EDC88DC769C2A4_RuntimeMethod_var);
			NullCheck(L_9);
			RuntimeObject* L_10 = L_9->get_pointer_0();
			__this->set_U3CU3E2__current_1(L_10);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00ba;
		}

IL_0079:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			KeyValuePair_2_tB056ADCF48A6392925AFCA43342F5E6483191DE0 * L_11 = __this->get_address_of_U3CpointerDataEntryU3E5__2_5();
			il2cpp_codegen_initobj(L_11, sizeof(KeyValuePair_2_tB056ADCF48A6392925AFCA43342F5E6483191DE0 ));
		}

IL_008e:
		{
			// foreach (var pointerDataEntry in pointerDataToUpdate)
			Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337 * L_12 = __this->get_address_of_U3CU3Es__1_4();
			bool L_13;
			L_13 = Enumerator_MoveNext_m979E07653F7545D173CA9A1454D729620EA8BF6E((Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337 *)L_12, /*hidden argument*/Enumerator_MoveNext_m979E07653F7545D173CA9A1454D729620EA8BF6E_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0046;
			}
		}

IL_009b:
		{
			U3Cget_ActiveMixedRealityPointersU3Ed__16_U3CU3Em__Finally1_m6ACE0844EDF4B4F9692CCFB44BD536E4AE50CB7B(__this, /*hidden argument*/NULL);
			Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337 * L_14 = __this->get_address_of_U3CU3Es__1_4();
			il2cpp_codegen_initobj(L_14, sizeof(Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337 ));
			// }
			V_0 = (bool)0;
			goto IL_00ba;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00b2;
	}

FAULT_00b2:
	{ // begin fault (depth: 1)
		U3Cget_ActiveMixedRealityPointersU3Ed__16_System_IDisposable_Dispose_mCD47D711BD9E389FA56AC3E46282085A87F03448(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(178)
	} // end fault
	IL2CPP_CLEANUP(178)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ba:
	{
		bool L_15 = V_0;
		return L_15;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16_U3CU3Em__Finally1_m6ACE0844EDF4B4F9692CCFB44BD536E4AE50CB7B (U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE4D94E308200C345DEDFD914D3484FD896CE9C66_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337 * L_0 = __this->get_address_of_U3CU3Es__1_4();
		Enumerator_Dispose_mE4D94E308200C345DEDFD914D3484FD896CE9C66((Enumerator_t51A618F16834DA9B2CA1B6D78BB058D4E6CCD337 *)L_0, /*hidden argument*/Enumerator_Dispose_mE4D94E308200C345DEDFD914D3484FD896CE9C66_RuntimeMethod_var);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.Collections.Generic.IEnumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_Generic_IEnumeratorU3CMicrosoft_MixedReality_Toolkit_Input_IMixedRealityPointerU3E_get_Current_mF64AB0B0D8DE95C7FE04BA2658D506AE4D79E06F (U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_IEnumerator_Reset_mC269C239FE27C543C5B179CDCB148C23662009C1 (U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_IEnumerator_Reset_mC269C239FE27C543C5B179CDCB148C23662009C1_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_IEnumerator_get_Current_mFB53209535BA739022DFF2F4CD00C3CF83BC9C6A (U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.Collections.Generic.IEnumerable<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_Generic_IEnumerableU3CMicrosoft_MixedReality_Toolkit_Input_IMixedRealityPointerU3E_GetEnumerator_mBBE6AF86C5CD4E75520C45D780BDC256C7580754 (U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3 * L_3 = (U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3 *)il2cpp_codegen_object_new(U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3_il2cpp_TypeInfo_var);
		U3Cget_ActiveMixedRealityPointersU3Ed__16__ctor_mF8E876F1EFA5FCC1099F44AFE7595A56F18DAC05(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3 * L_4 = V_0;
		MixedRealityInputModule_t0492967672F0C01F27AF4273EFFE8CE0EC32C664 * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_IEnumerable_GetEnumerator_mF623C21C8DA0A2AC1704DDC5D3EA5FA880BEA307 (U3Cget_ActiveMixedRealityPointersU3Ed__16_t74023A2D469577EF4C9EDA17D6303F15805FBDE3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_Generic_IEnumerableU3CMicrosoft_MixedReality_Toolkit_Input_IMixedRealityPointerU3E_GetEnumerator_mBBE6AF86C5CD4E75520C45D780BDC256C7580754(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerData__ctor_m8404D66B3331BABADE0DEF3F0269D960E1F97D44 (PointerData_t524B70063DAD63AB1B38F1BB8C9EE71E1D04DC1F * __this, RuntimeObject* ___pointer0, EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___eventSystem1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector3? lastMousePoint3d = null; // Last position of the pointer for the input in 3D.
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_0 = __this->get_address_of_lastMousePoint3d_1();
		il2cpp_codegen_initobj(L_0, sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
		// public PointerEventData.FramePressState nextPressState = PointerEventData.FramePressState.NotChanged;
		__this->set_nextPressState_2(3);
		// public MouseState mouseState = new MouseState();
		MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * L_1 = (MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 *)il2cpp_codegen_object_new(MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1_il2cpp_TypeInfo_var);
		MouseState__ctor_m16EF8D45AF8A178368547BD1CE4FBF9DBC563605(L_1, /*hidden argument*/NULL);
		__this->set_mouseState_3(L_1);
		// public PointerData(IMixedRealityPointer pointer, EventSystem eventSystem)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.pointer = pointer;
		RuntimeObject* L_2 = ___pointer0;
		__this->set_pointer_0(L_2);
		// eventDataLeft = new PointerEventData(eventSystem);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_3 = ___eventSystem1;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_4 = (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)il2cpp_codegen_object_new(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2(L_4, L_3, /*hidden argument*/NULL);
		__this->set_eventDataLeft_4(L_4);
		// eventDataMiddle = new PointerEventData(eventSystem);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_5 = ___eventSystem1;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_6 = (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)il2cpp_codegen_object_new(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2(L_6, L_5, /*hidden argument*/NULL);
		__this->set_eventDataMiddle_5(L_6);
		// eventDataRight = new PointerEventData(eventSystem);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_7 = ___eventSystem1;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_8 = (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)il2cpp_codegen_object_new(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2(L_8, L_7, /*hidden argument*/NULL);
		__this->set_eventDataRight_6(L_8);
		// }
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
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1265A8D2EB85EDA10DADE4E35E82ACA1EC5E7F51 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * L_0 = (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C *)il2cpp_codegen_object_new(U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m71412FA75C39035DDF3452A5FF80BE9814CC3769(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m71412FA75C39035DDF3452A5FF80BE9814CC3769 (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_0(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_0_mE08C586BC0AFA5FB7B2FAB76BA70BF34E57911C2 (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourceStateEventData_tE68D8C1FF7799BB758CA7436749CAC8052D71D77_mD647BA67619F8078D2E0AD8D0AE2D34D8B9EFFA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourceStateHandler_tE59DCEC66CBC9E88658C3D5F48927CBE4BBB07F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourceStateEventData_tE68D8C1FF7799BB758CA7436749CAC8052D71D77 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourceStateEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourceStateEventData_tE68D8C1FF7799BB758CA7436749CAC8052D71D77 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourceStateEventData_tE68D8C1FF7799BB758CA7436749CAC8052D71D77_mD647BA67619F8078D2E0AD8D0AE2D34D8B9EFFA0(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourceStateEventData_tE68D8C1FF7799BB758CA7436749CAC8052D71D77_mD647BA67619F8078D2E0AD8D0AE2D34D8B9EFFA0_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourceDetected(casted);
		RuntimeObject* L_2 = ___handler0;
		SourceStateEventData_tE68D8C1FF7799BB758CA7436749CAC8052D71D77 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourceStateEventData_tE68D8C1FF7799BB758CA7436749CAC8052D71D77 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler::OnSourceDetected(Microsoft.MixedReality.Toolkit.Input.SourceStateEventData) */, IMixedRealitySourceStateHandler_tE59DCEC66CBC9E88658C3D5F48927CBE4BBB07F3_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_1(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_1_m47DE215D5FBB9DD5BC13B9342967DB4AC002294C (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourceStateEventData_tE68D8C1FF7799BB758CA7436749CAC8052D71D77_mD647BA67619F8078D2E0AD8D0AE2D34D8B9EFFA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourceStateHandler_tE59DCEC66CBC9E88658C3D5F48927CBE4BBB07F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourceStateEventData_tE68D8C1FF7799BB758CA7436749CAC8052D71D77 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourceStateEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourceStateEventData_tE68D8C1FF7799BB758CA7436749CAC8052D71D77 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourceStateEventData_tE68D8C1FF7799BB758CA7436749CAC8052D71D77_mD647BA67619F8078D2E0AD8D0AE2D34D8B9EFFA0(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourceStateEventData_tE68D8C1FF7799BB758CA7436749CAC8052D71D77_mD647BA67619F8078D2E0AD8D0AE2D34D8B9EFFA0_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourceLost(casted);
		RuntimeObject* L_2 = ___handler0;
		SourceStateEventData_tE68D8C1FF7799BB758CA7436749CAC8052D71D77 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourceStateEventData_tE68D8C1FF7799BB758CA7436749CAC8052D71D77 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler::OnSourceLost(Microsoft.MixedReality.Toolkit.Input.SourceStateEventData) */, IMixedRealitySourceStateHandler_tE59DCEC66CBC9E88658C3D5F48927CBE4BBB07F3_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_2(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_2_mB6EB7553DAB05148246AC9BA109DC2D279AF9196 (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t8C83AA36628EFD7CDCC9FCF8AB48C7CDB70B9516_m0FE7B14F50B377880C5AE271E0C90A9B3F2B59B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourcePoseHandler_t4CEA8565CC20FDB758B73E4B884F7B6B5E499D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourcePoseEventData_1_t8C83AA36628EFD7CDCC9FCF8AB48C7CDB70B9516 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourcePoseEventData<TrackingState>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourcePoseEventData_1_t8C83AA36628EFD7CDCC9FCF8AB48C7CDB70B9516 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t8C83AA36628EFD7CDCC9FCF8AB48C7CDB70B9516_m0FE7B14F50B377880C5AE271E0C90A9B3F2B59B8(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t8C83AA36628EFD7CDCC9FCF8AB48C7CDB70B9516_m0FE7B14F50B377880C5AE271E0C90A9B3F2B59B8_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourcePoseChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		SourcePoseEventData_1_t8C83AA36628EFD7CDCC9FCF8AB48C7CDB70B9516 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourcePoseEventData_1_t8C83AA36628EFD7CDCC9FCF8AB48C7CDB70B9516 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler::OnSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState>) */, IMixedRealitySourcePoseHandler_t4CEA8565CC20FDB758B73E4B884F7B6B5E499D0F_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_3(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_3_m4BDDC3CA9659D000CBE06774B6DB77CE0E82E30C (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t6035127052FD3413F4B8D698EA70B46DF636B40F_m4D36643A0D7FEBA5141DF96AF7A0336E697AE18A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourcePoseHandler_t4CEA8565CC20FDB758B73E4B884F7B6B5E499D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourcePoseEventData_1_t6035127052FD3413F4B8D698EA70B46DF636B40F * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourcePoseEventData<Vector2>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourcePoseEventData_1_t6035127052FD3413F4B8D698EA70B46DF636B40F * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t6035127052FD3413F4B8D698EA70B46DF636B40F_m4D36643A0D7FEBA5141DF96AF7A0336E697AE18A(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t6035127052FD3413F4B8D698EA70B46DF636B40F_m4D36643A0D7FEBA5141DF96AF7A0336E697AE18A_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourcePoseChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		SourcePoseEventData_1_t6035127052FD3413F4B8D698EA70B46DF636B40F * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourcePoseEventData_1_t6035127052FD3413F4B8D698EA70B46DF636B40F * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler::OnSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2>) */, IMixedRealitySourcePoseHandler_t4CEA8565CC20FDB758B73E4B884F7B6B5E499D0F_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_4(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_4_m628C7979144460AA647F13BDBB2320BDCAC18B47 (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t777563EDBE3D96857FDE0FCE63785C606EBFFCBE_m10F421CF23A3A400CD4F0DE1893B9BA4B35FE5EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourcePoseHandler_t4CEA8565CC20FDB758B73E4B884F7B6B5E499D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourcePoseEventData_1_t777563EDBE3D96857FDE0FCE63785C606EBFFCBE * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourcePoseEventData<Vector3>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourcePoseEventData_1_t777563EDBE3D96857FDE0FCE63785C606EBFFCBE * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t777563EDBE3D96857FDE0FCE63785C606EBFFCBE_m10F421CF23A3A400CD4F0DE1893B9BA4B35FE5EC(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t777563EDBE3D96857FDE0FCE63785C606EBFFCBE_m10F421CF23A3A400CD4F0DE1893B9BA4B35FE5EC_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourcePoseChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		SourcePoseEventData_1_t777563EDBE3D96857FDE0FCE63785C606EBFFCBE * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourcePoseEventData_1_t777563EDBE3D96857FDE0FCE63785C606EBFFCBE * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler::OnSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3>) */, IMixedRealitySourcePoseHandler_t4CEA8565CC20FDB758B73E4B884F7B6B5E499D0F_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_5(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_5_m96ECE04E6D92E05A92370B73B8CCC302BD775C25 (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t311DB5A8EE84E186C29732ED88DB5994EB2CAD1D_m239B51D4196B7B12B93591E34FC8E4CE76E7181E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourcePoseHandler_t4CEA8565CC20FDB758B73E4B884F7B6B5E499D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourcePoseEventData_1_t311DB5A8EE84E186C29732ED88DB5994EB2CAD1D * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourcePoseEventData<Quaternion>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourcePoseEventData_1_t311DB5A8EE84E186C29732ED88DB5994EB2CAD1D * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t311DB5A8EE84E186C29732ED88DB5994EB2CAD1D_m239B51D4196B7B12B93591E34FC8E4CE76E7181E(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t311DB5A8EE84E186C29732ED88DB5994EB2CAD1D_m239B51D4196B7B12B93591E34FC8E4CE76E7181E_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourcePoseChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		SourcePoseEventData_1_t311DB5A8EE84E186C29732ED88DB5994EB2CAD1D * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourcePoseEventData_1_t311DB5A8EE84E186C29732ED88DB5994EB2CAD1D * >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler::OnSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion>) */, IMixedRealitySourcePoseHandler_t4CEA8565CC20FDB758B73E4B884F7B6B5E499D0F_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_6(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_6_mEB591C773BB9B2D0EE8D1F07D16A545502F0FE19 (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t84A604B2C5FDE7D0F3E4DE6FF23EA9C2773CC565_m5463A4BA667FCE456700102C55ACE54EF0CD5DA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourcePoseHandler_t4CEA8565CC20FDB758B73E4B884F7B6B5E499D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourcePoseEventData_1_t84A604B2C5FDE7D0F3E4DE6FF23EA9C2773CC565 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourcePoseEventData<MixedRealityPose>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourcePoseEventData_1_t84A604B2C5FDE7D0F3E4DE6FF23EA9C2773CC565 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t84A604B2C5FDE7D0F3E4DE6FF23EA9C2773CC565_m5463A4BA667FCE456700102C55ACE54EF0CD5DA6(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t84A604B2C5FDE7D0F3E4DE6FF23EA9C2773CC565_m5463A4BA667FCE456700102C55ACE54EF0CD5DA6_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourcePoseChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		SourcePoseEventData_1_t84A604B2C5FDE7D0F3E4DE6FF23EA9C2773CC565 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourcePoseEventData_1_t84A604B2C5FDE7D0F3E4DE6FF23EA9C2773CC565 * >::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler::OnSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>) */, IMixedRealitySourcePoseHandler_t4CEA8565CC20FDB758B73E4B884F7B6B5E499D0F_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_7(Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_7_m5F4E2FA4A40EA10A2A3BA3E66287CDD8A16F1483 (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisFocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20_m36F130187A4C9793DE99D642B2D730444C71577E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityFocusChangedHandler_tFA6F0326D6FFAC915E67A23ACA6060B07D3E73AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<FocusEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		FocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisFocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20_m36F130187A4C9793DE99D642B2D730444C71577E(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisFocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20_m36F130187A4C9793DE99D642B2D730444C71577E_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnBeforeFocusChange(casted);
		RuntimeObject* L_2 = ___handler0;
		FocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< FocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler::OnBeforeFocusChange(Microsoft.MixedReality.Toolkit.Input.FocusEventData) */, IMixedRealityFocusChangedHandler_tFA6F0326D6FFAC915E67A23ACA6060B07D3E73AC_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_8(Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_8_mE3A68BF35EE5E2B6FBBCB7AC52850157B5DC5F1C (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisFocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20_m36F130187A4C9793DE99D642B2D730444C71577E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityFocusChangedHandler_tFA6F0326D6FFAC915E67A23ACA6060B07D3E73AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<FocusEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		FocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisFocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20_m36F130187A4C9793DE99D642B2D730444C71577E(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisFocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20_m36F130187A4C9793DE99D642B2D730444C71577E_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnFocusChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		FocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< FocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler::OnFocusChanged(Microsoft.MixedReality.Toolkit.Input.FocusEventData) */, IMixedRealityFocusChangedHandler_tFA6F0326D6FFAC915E67A23ACA6060B07D3E73AC_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_9(Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_9_m1F3D980418F455CC0608FD8812D27CB753EC51DC (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisFocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20_m36F130187A4C9793DE99D642B2D730444C71577E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityFocusHandler_tA1DF1AA80759B602F63D874B1C6D17F0640D0CB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<FocusEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		FocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisFocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20_m36F130187A4C9793DE99D642B2D730444C71577E(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisFocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20_m36F130187A4C9793DE99D642B2D730444C71577E_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnFocusEnter(casted);
		RuntimeObject* L_2 = ___handler0;
		FocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< FocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler::OnFocusEnter(Microsoft.MixedReality.Toolkit.Input.FocusEventData) */, IMixedRealityFocusHandler_tA1DF1AA80759B602F63D874B1C6D17F0640D0CB6_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_10(Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_10_mACC3D88AB9167A7032257777EE971C0209FF7F8E (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisFocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20_m36F130187A4C9793DE99D642B2D730444C71577E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityFocusHandler_tA1DF1AA80759B602F63D874B1C6D17F0640D0CB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<FocusEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		FocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisFocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20_m36F130187A4C9793DE99D642B2D730444C71577E(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisFocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20_m36F130187A4C9793DE99D642B2D730444C71577E_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnFocusExit(casted);
		RuntimeObject* L_2 = ___handler0;
		FocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< FocusEventData_t8D01F771326D8F9E48FD79DF344C8C6C82F49E20 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler::OnFocusExit(Microsoft.MixedReality.Toolkit.Input.FocusEventData) */, IMixedRealityFocusHandler_tA1DF1AA80759B602F63D874B1C6D17F0640D0CB6_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_11(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_11_m90DBD41A516549C73FB40410AEE6633739D230C6 (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE_m7F978E209D513634A2424B711C46F0E61E874735_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointerHandler_tBA251119F52C3F34D17B5A225ABAF401B2CF2AA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<MixedRealityPointerEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		MixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE_m7F978E209D513634A2424B711C46F0E61E874735(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE_m7F978E209D513634A2424B711C46F0E61E874735_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnPointerDown(casted);
		RuntimeObject* L_2 = ___handler0;
		MixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< MixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler::OnPointerDown(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData) */, IMixedRealityPointerHandler_tBA251119F52C3F34D17B5A225ABAF401B2CF2AA0_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_12(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_12_mAC9369249DFB5E993DF3A23F0148F35166029545 (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE_m7F978E209D513634A2424B711C46F0E61E874735_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointerHandler_tBA251119F52C3F34D17B5A225ABAF401B2CF2AA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<MixedRealityPointerEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		MixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE_m7F978E209D513634A2424B711C46F0E61E874735(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE_m7F978E209D513634A2424B711C46F0E61E874735_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnPointerDragged(casted);
		RuntimeObject* L_2 = ___handler0;
		MixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< MixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler::OnPointerDragged(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData) */, IMixedRealityPointerHandler_tBA251119F52C3F34D17B5A225ABAF401B2CF2AA0_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_13(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_13_m19A67B58C7AA428119F3D2638DB22881D683FDB9 (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE_m7F978E209D513634A2424B711C46F0E61E874735_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointerHandler_tBA251119F52C3F34D17B5A225ABAF401B2CF2AA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<MixedRealityPointerEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		MixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE_m7F978E209D513634A2424B711C46F0E61E874735(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE_m7F978E209D513634A2424B711C46F0E61E874735_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnPointerClicked(casted);
		RuntimeObject* L_2 = ___handler0;
		MixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< MixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE * >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler::OnPointerClicked(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData) */, IMixedRealityPointerHandler_tBA251119F52C3F34D17B5A225ABAF401B2CF2AA0_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_14(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_14_m7571C601E906850BCAA67D03A576918F2F22D23C (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE_m7F978E209D513634A2424B711C46F0E61E874735_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointerHandler_tBA251119F52C3F34D17B5A225ABAF401B2CF2AA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<MixedRealityPointerEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		MixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE_m7F978E209D513634A2424B711C46F0E61E874735(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE_m7F978E209D513634A2424B711C46F0E61E874735_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnPointerUp(casted);
		RuntimeObject* L_2 = ___handler0;
		MixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< MixedRealityPointerEventData_t4171F6F9E8A858A2F4DD8B1CEE445E2CA81D7BFE * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler::OnPointerUp(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData) */, IMixedRealityPointerHandler_tBA251119F52C3F34D17B5A225ABAF401B2CF2AA0_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_15(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_15_mF7414C8FDF79D159FBBAD8A80E3D797BACE79EA9 (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t60DF86D63F954673178E2461D27DB8150C84A017_mE0D86703A444865133801F03AD4571D24ED886B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_tADE02EB7F7F73A5E6DBC48BA0A5E8D37793D6AC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t60DF86D63F954673178E2461D27DB8150C84A017_mE0D86703A444865133801F03AD4571D24ED886B6(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t60DF86D63F954673178E2461D27DB8150C84A017_mE0D86703A444865133801F03AD4571D24ED886B6_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputDown(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler::OnInputDown(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityInputHandler_tADE02EB7F7F73A5E6DBC48BA0A5E8D37793D6AC7_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_16(Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_16_m01FEB850A5121A127D8E03DC5389279FCCCA8C63 (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t60DF86D63F954673178E2461D27DB8150C84A017_mE0D86703A444865133801F03AD4571D24ED886B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_tADE02EB7F7F73A5E6DBC48BA0A5E8D37793D6AC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275_m39B0F15B395F1EC250E61D16731737864BBCA282_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_tADE02EB7F7F73A5E6DBC48BA0A5E8D37793D6AC7_mA8D4A6BAC4ED7FA2F418135185C1E1D89F734F9F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// var inputData = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t60DF86D63F954673178E2461D27DB8150C84A017_mE0D86703A444865133801F03AD4571D24ED886B6(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t60DF86D63F954673178E2461D27DB8150C84A017_mE0D86703A444865133801F03AD4571D24ED886B6_RuntimeMethod_var);
		V_0 = L_1;
		// Debug.Assert(inputData.MixedRealityInputAction != MixedRealityInputAction.None);
		InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * L_2 = V_0;
		NullCheck(L_2);
		MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  L_3;
		L_3 = BaseInputEventData_get_MixedRealityInputAction_mA78E886C78EB21F0E603211E06AAA624B8059CEE_inline(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_il2cpp_TypeInfo_var);
		MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  L_4;
		L_4 = MixedRealityInputAction_get_None_m2699B1F27BCBC764B5BE98CE502466162142914B_inline(/*hidden argument*/NULL);
		bool L_5;
		L_5 = MixedRealityInputAction_op_Inequality_m9F5335D0C40F92A7CCD1DF9CE2C058C44F9A787F(L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Assert_m9AB596E4960380752FD4CB3292D07A86E995938B(L_5, /*hidden argument*/NULL);
		// if (handler is IMixedRealityInputHandler inputHandler && !inputHandler.IsNull())
		RuntimeObject* L_6 = ___handler0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IMixedRealityInputHandler_tADE02EB7F7F73A5E6DBC48BA0A5E8D37793D6AC7_il2cpp_TypeInfo_var));
		RuntimeObject* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject* L_8 = V_1;
		bool L_9;
		L_9 = UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_tADE02EB7F7F73A5E6DBC48BA0A5E8D37793D6AC7_mA8D4A6BAC4ED7FA2F418135185C1E1D89F734F9F(L_8, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_tADE02EB7F7F73A5E6DBC48BA0A5E8D37793D6AC7_mA8D4A6BAC4ED7FA2F418135185C1E1D89F734F9F_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B3_0 = 0;
	}

IL_0034:
	{
		V_3 = (bool)G_B3_0;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0042;
		}
	}
	{
		// inputHandler.OnInputDown(inputData);
		RuntimeObject* L_11 = V_1;
		InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * L_12 = V_0;
		NullCheck(L_11);
		InterfaceActionInvoker1< InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler::OnInputDown(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityInputHandler_tADE02EB7F7F73A5E6DBC48BA0A5E8D37793D6AC7_il2cpp_TypeInfo_var, L_11, L_12);
	}

IL_0042:
	{
		// if (handler is IMixedRealityInputActionHandler actionHandler && !actionHandler.IsNull())
		RuntimeObject* L_13 = ___handler0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_13, IMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275_il2cpp_TypeInfo_var));
		RuntimeObject* L_14 = V_2;
		if (!L_14)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_15 = V_2;
		bool L_16;
		L_16 = UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275_m39B0F15B395F1EC250E61D16731737864BBCA282(L_15, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275_m39B0F15B395F1EC250E61D16731737864BBCA282_RuntimeMethod_var);
		G_B8_0 = ((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		goto IL_0058;
	}

IL_0057:
	{
		G_B8_0 = 0;
	}

IL_0058:
	{
		V_4 = (bool)G_B8_0;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_0068;
		}
	}
	{
		// actionHandler.OnActionStarted(inputData);
		RuntimeObject* L_18 = V_2;
		InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * L_19 = V_0;
		NullCheck(L_18);
		InterfaceActionInvoker1< BaseInputEventData_t33EF0985CB22B5C3318A0464BDBF0BDF3F9B7411 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionStarted(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275_il2cpp_TypeInfo_var, L_18, L_19);
	}

IL_0068:
	{
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_17(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_17_m4530E3C6B97EEA1D63A671CA7C65E793C9C664C8 (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t60DF86D63F954673178E2461D27DB8150C84A017_mE0D86703A444865133801F03AD4571D24ED886B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_tADE02EB7F7F73A5E6DBC48BA0A5E8D37793D6AC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t60DF86D63F954673178E2461D27DB8150C84A017_mE0D86703A444865133801F03AD4571D24ED886B6(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t60DF86D63F954673178E2461D27DB8150C84A017_mE0D86703A444865133801F03AD4571D24ED886B6_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputUp(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler::OnInputUp(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityInputHandler_tADE02EB7F7F73A5E6DBC48BA0A5E8D37793D6AC7_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_18(Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_18_m5C2813AFE84F8A2577F8B28AB3A9468C3C7DF175 (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t60DF86D63F954673178E2461D27DB8150C84A017_mE0D86703A444865133801F03AD4571D24ED886B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_tADE02EB7F7F73A5E6DBC48BA0A5E8D37793D6AC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275_m39B0F15B395F1EC250E61D16731737864BBCA282_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_tADE02EB7F7F73A5E6DBC48BA0A5E8D37793D6AC7_mA8D4A6BAC4ED7FA2F418135185C1E1D89F734F9F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// var inputData = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t60DF86D63F954673178E2461D27DB8150C84A017_mE0D86703A444865133801F03AD4571D24ED886B6(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t60DF86D63F954673178E2461D27DB8150C84A017_mE0D86703A444865133801F03AD4571D24ED886B6_RuntimeMethod_var);
		V_0 = L_1;
		// Debug.Assert(inputData.MixedRealityInputAction != MixedRealityInputAction.None);
		InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * L_2 = V_0;
		NullCheck(L_2);
		MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  L_3;
		L_3 = BaseInputEventData_get_MixedRealityInputAction_mA78E886C78EB21F0E603211E06AAA624B8059CEE_inline(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_il2cpp_TypeInfo_var);
		MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  L_4;
		L_4 = MixedRealityInputAction_get_None_m2699B1F27BCBC764B5BE98CE502466162142914B_inline(/*hidden argument*/NULL);
		bool L_5;
		L_5 = MixedRealityInputAction_op_Inequality_m9F5335D0C40F92A7CCD1DF9CE2C058C44F9A787F(L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Assert_m9AB596E4960380752FD4CB3292D07A86E995938B(L_5, /*hidden argument*/NULL);
		// if (handler is IMixedRealityInputHandler inputHandler && !inputHandler.IsNull())
		RuntimeObject* L_6 = ___handler0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IMixedRealityInputHandler_tADE02EB7F7F73A5E6DBC48BA0A5E8D37793D6AC7_il2cpp_TypeInfo_var));
		RuntimeObject* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject* L_8 = V_1;
		bool L_9;
		L_9 = UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_tADE02EB7F7F73A5E6DBC48BA0A5E8D37793D6AC7_mA8D4A6BAC4ED7FA2F418135185C1E1D89F734F9F(L_8, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_tADE02EB7F7F73A5E6DBC48BA0A5E8D37793D6AC7_mA8D4A6BAC4ED7FA2F418135185C1E1D89F734F9F_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B3_0 = 0;
	}

IL_0034:
	{
		V_3 = (bool)G_B3_0;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0042;
		}
	}
	{
		// inputHandler.OnInputUp(inputData);
		RuntimeObject* L_11 = V_1;
		InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * L_12 = V_0;
		NullCheck(L_11);
		InterfaceActionInvoker1< InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler::OnInputUp(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityInputHandler_tADE02EB7F7F73A5E6DBC48BA0A5E8D37793D6AC7_il2cpp_TypeInfo_var, L_11, L_12);
	}

IL_0042:
	{
		// if (handler is IMixedRealityInputActionHandler actionHandler && !actionHandler.IsNull())
		RuntimeObject* L_13 = ___handler0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_13, IMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275_il2cpp_TypeInfo_var));
		RuntimeObject* L_14 = V_2;
		if (!L_14)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_15 = V_2;
		bool L_16;
		L_16 = UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275_m39B0F15B395F1EC250E61D16731737864BBCA282(L_15, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275_m39B0F15B395F1EC250E61D16731737864BBCA282_RuntimeMethod_var);
		G_B8_0 = ((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		goto IL_0058;
	}

IL_0057:
	{
		G_B8_0 = 0;
	}

IL_0058:
	{
		V_4 = (bool)G_B8_0;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_0068;
		}
	}
	{
		// actionHandler.OnActionEnded(inputData);
		RuntimeObject* L_18 = V_2;
		InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * L_19 = V_0;
		NullCheck(L_18);
		InterfaceActionInvoker1< BaseInputEventData_t33EF0985CB22B5C3318A0464BDBF0BDF3F9B7411 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionEnded(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275_il2cpp_TypeInfo_var, L_18, L_19);
	}

IL_0068:
	{
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_19(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<System.Single>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_19_mE434C9686D2E1180BB39A68C3588683995BA37D9 (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t14738FF3BEDDEC90DB73AC6834680FA99924E98E_m690BB5C662E6F01B7A15040193EBEE96B1EE6641_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_1_tBFC269600A0AE45F77486D558FDDB877857D753F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t14738FF3BEDDEC90DB73AC6834680FA99924E98E * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<float>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t14738FF3BEDDEC90DB73AC6834680FA99924E98E * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t14738FF3BEDDEC90DB73AC6834680FA99924E98E_m690BB5C662E6F01B7A15040193EBEE96B1EE6641(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t14738FF3BEDDEC90DB73AC6834680FA99924E98E_m690BB5C662E6F01B7A15040193EBEE96B1EE6641_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t14738FF3BEDDEC90DB73AC6834680FA99924E98E * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t14738FF3BEDDEC90DB73AC6834680FA99924E98E * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<System.Single>::OnInputChanged(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityInputHandler_1_tBFC269600A0AE45F77486D558FDDB877857D753F_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_20(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector2>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_20_m11CC6695E610425A48F93FE4BCCF06DB56E94C91 (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_tE0571359448813352C91BED8440BD824D08412F7_m816378C93CF3AD3650AED93D4E5AFCDFBF3D3595_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_1_t3651BC9A97C374E56AE8F10509473D47ED139B97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tE0571359448813352C91BED8440BD824D08412F7 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector2>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tE0571359448813352C91BED8440BD824D08412F7 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tE0571359448813352C91BED8440BD824D08412F7_m816378C93CF3AD3650AED93D4E5AFCDFBF3D3595(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tE0571359448813352C91BED8440BD824D08412F7_m816378C93CF3AD3650AED93D4E5AFCDFBF3D3595_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tE0571359448813352C91BED8440BD824D08412F7 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tE0571359448813352C91BED8440BD824D08412F7 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector2>::OnInputChanged(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityInputHandler_1_t3651BC9A97C374E56AE8F10509473D47ED139B97_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_21(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector3>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_21_m0A3C2D0FD08B28FCCFAF31197F2017203AB12C37 (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t3CC0187E4344201378E113CFC270CB5C4AF36D86_m6202F662B34E3BCA29B88E2C423DB3A66B9A3716_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_1_t5067BC8376F618E30228C40150CC2560841C2848_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t3CC0187E4344201378E113CFC270CB5C4AF36D86 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector3>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t3CC0187E4344201378E113CFC270CB5C4AF36D86 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t3CC0187E4344201378E113CFC270CB5C4AF36D86_m6202F662B34E3BCA29B88E2C423DB3A66B9A3716(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t3CC0187E4344201378E113CFC270CB5C4AF36D86_m6202F662B34E3BCA29B88E2C423DB3A66B9A3716_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t3CC0187E4344201378E113CFC270CB5C4AF36D86 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t3CC0187E4344201378E113CFC270CB5C4AF36D86 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector3>::OnInputChanged(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityInputHandler_1_t5067BC8376F618E30228C40150CC2560841C2848_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_22(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Quaternion>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_22_mC560C1FD07D8B7EF637C9420B4D098F8E8893227 (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t7F018120437B38470980D7DC0A7FDBA6732ABF30_m2129AC3F038C4BEF0B506ECE284ED37D7C7F49A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_1_tD117904458EAEF36E1A709874C97A7439C13F417_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t7F018120437B38470980D7DC0A7FDBA6732ABF30 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Quaternion>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t7F018120437B38470980D7DC0A7FDBA6732ABF30 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t7F018120437B38470980D7DC0A7FDBA6732ABF30_m2129AC3F038C4BEF0B506ECE284ED37D7C7F49A1(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t7F018120437B38470980D7DC0A7FDBA6732ABF30_m2129AC3F038C4BEF0B506ECE284ED37D7C7F49A1_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t7F018120437B38470980D7DC0A7FDBA6732ABF30 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t7F018120437B38470980D7DC0A7FDBA6732ABF30 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Quaternion>::OnInputChanged(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityInputHandler_1_tD117904458EAEF36E1A709874C97A7439C13F417_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_23(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_23_mFD59402D90C5D6D6B713959354CF4B83CF969085 (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_tA33647F64CCCCF6BC521D4100BE48B24C6BFBD3B_mFFDCF554C5EC4D10E36C89E06BDCC2F80F7ECC35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_1_t7CF08C0BE2A9217FA74D732ABA5389DA50108493_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tA33647F64CCCCF6BC521D4100BE48B24C6BFBD3B * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<MixedRealityPose>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tA33647F64CCCCF6BC521D4100BE48B24C6BFBD3B * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tA33647F64CCCCF6BC521D4100BE48B24C6BFBD3B_mFFDCF554C5EC4D10E36C89E06BDCC2F80F7ECC35(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tA33647F64CCCCF6BC521D4100BE48B24C6BFBD3B_mFFDCF554C5EC4D10E36C89E06BDCC2F80F7ECC35_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tA33647F64CCCCF6BC521D4100BE48B24C6BFBD3B * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tA33647F64CCCCF6BC521D4100BE48B24C6BFBD3B * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::OnInputChanged(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityInputHandler_1_t7CF08C0BE2A9217FA74D732ABA5389DA50108493_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_24(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_24_m42CFDAC43210BCAFFF4082AC8565843B657B1BD6 (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t60DF86D63F954673178E2461D27DB8150C84A017_mE0D86703A444865133801F03AD4571D24ED886B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_t0A5BCFF83D2F8CC4CDCA8E286694151E22C62814_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t60DF86D63F954673178E2461D27DB8150C84A017_mE0D86703A444865133801F03AD4571D24ED886B6(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t60DF86D63F954673178E2461D27DB8150C84A017_mE0D86703A444865133801F03AD4571D24ED886B6_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureStarted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureStarted(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_t0A5BCFF83D2F8CC4CDCA8E286694151E22C62814_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_25(Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_25_m89701788749EE2D29A673BF3EFC8CA180E4A1DE5 (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t60DF86D63F954673178E2461D27DB8150C84A017_mE0D86703A444865133801F03AD4571D24ED886B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_t0A5BCFF83D2F8CC4CDCA8E286694151E22C62814_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t0A5BCFF83D2F8CC4CDCA8E286694151E22C62814_mFC83C9A2367A7604F8BD04E0B3F3E28DECB583FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275_m39B0F15B395F1EC250E61D16731737864BBCA282_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// var inputData = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t60DF86D63F954673178E2461D27DB8150C84A017_mE0D86703A444865133801F03AD4571D24ED886B6(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t60DF86D63F954673178E2461D27DB8150C84A017_mE0D86703A444865133801F03AD4571D24ED886B6_RuntimeMethod_var);
		V_0 = L_1;
		// Debug.Assert(inputData.MixedRealityInputAction != MixedRealityInputAction.None);
		InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * L_2 = V_0;
		NullCheck(L_2);
		MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  L_3;
		L_3 = BaseInputEventData_get_MixedRealityInputAction_mA78E886C78EB21F0E603211E06AAA624B8059CEE_inline(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_il2cpp_TypeInfo_var);
		MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  L_4;
		L_4 = MixedRealityInputAction_get_None_m2699B1F27BCBC764B5BE98CE502466162142914B_inline(/*hidden argument*/NULL);
		bool L_5;
		L_5 = MixedRealityInputAction_op_Inequality_m9F5335D0C40F92A7CCD1DF9CE2C058C44F9A787F(L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Assert_m9AB596E4960380752FD4CB3292D07A86E995938B(L_5, /*hidden argument*/NULL);
		// if (handler is IMixedRealityGestureHandler gestureHandler && !gestureHandler.IsNull())
		RuntimeObject* L_6 = ___handler0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IMixedRealityGestureHandler_t0A5BCFF83D2F8CC4CDCA8E286694151E22C62814_il2cpp_TypeInfo_var));
		RuntimeObject* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject* L_8 = V_1;
		bool L_9;
		L_9 = UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t0A5BCFF83D2F8CC4CDCA8E286694151E22C62814_mFC83C9A2367A7604F8BD04E0B3F3E28DECB583FD(L_8, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t0A5BCFF83D2F8CC4CDCA8E286694151E22C62814_mFC83C9A2367A7604F8BD04E0B3F3E28DECB583FD_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B3_0 = 0;
	}

IL_0034:
	{
		V_3 = (bool)G_B3_0;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0042;
		}
	}
	{
		// gestureHandler.OnGestureStarted(inputData);
		RuntimeObject* L_11 = V_1;
		InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * L_12 = V_0;
		NullCheck(L_11);
		InterfaceActionInvoker1< InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureStarted(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_t0A5BCFF83D2F8CC4CDCA8E286694151E22C62814_il2cpp_TypeInfo_var, L_11, L_12);
	}

IL_0042:
	{
		// if (handler is IMixedRealityInputActionHandler actionHandler && !actionHandler.IsNull())
		RuntimeObject* L_13 = ___handler0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_13, IMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275_il2cpp_TypeInfo_var));
		RuntimeObject* L_14 = V_2;
		if (!L_14)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_15 = V_2;
		bool L_16;
		L_16 = UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275_m39B0F15B395F1EC250E61D16731737864BBCA282(L_15, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275_m39B0F15B395F1EC250E61D16731737864BBCA282_RuntimeMethod_var);
		G_B8_0 = ((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		goto IL_0058;
	}

IL_0057:
	{
		G_B8_0 = 0;
	}

IL_0058:
	{
		V_4 = (bool)G_B8_0;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_0068;
		}
	}
	{
		// actionHandler.OnActionStarted(inputData);
		RuntimeObject* L_18 = V_2;
		InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * L_19 = V_0;
		NullCheck(L_18);
		InterfaceActionInvoker1< BaseInputEventData_t33EF0985CB22B5C3318A0464BDBF0BDF3F9B7411 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionStarted(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275_il2cpp_TypeInfo_var, L_18, L_19);
	}

IL_0068:
	{
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_26(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_26_mB4B139C17DC255C5939B12FA44F72C4FFDADDD9B (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t60DF86D63F954673178E2461D27DB8150C84A017_mE0D86703A444865133801F03AD4571D24ED886B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_t0A5BCFF83D2F8CC4CDCA8E286694151E22C62814_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t60DF86D63F954673178E2461D27DB8150C84A017_mE0D86703A444865133801F03AD4571D24ED886B6(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t60DF86D63F954673178E2461D27DB8150C84A017_mE0D86703A444865133801F03AD4571D24ED886B6_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_t0A5BCFF83D2F8CC4CDCA8E286694151E22C62814_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_27(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_27_mF9EC19CB09ACC070FD8AE3E102C2A0548E3AFDD6 (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_tE0571359448813352C91BED8440BD824D08412F7_m816378C93CF3AD3650AED93D4E5AFCDFBF3D3595_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_tAEFE3B6550ED8998523EE7A2AF1FC5341976036E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tE0571359448813352C91BED8440BD824D08412F7 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector2>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tE0571359448813352C91BED8440BD824D08412F7 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tE0571359448813352C91BED8440BD824D08412F7_m816378C93CF3AD3650AED93D4E5AFCDFBF3D3595(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tE0571359448813352C91BED8440BD824D08412F7_m816378C93CF3AD3650AED93D4E5AFCDFBF3D3595_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tE0571359448813352C91BED8440BD824D08412F7 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tE0571359448813352C91BED8440BD824D08412F7 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>::OnGestureUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_tAEFE3B6550ED8998523EE7A2AF1FC5341976036E_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_28(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_28_m42BB35844B08C03EEF2586A7E7FB5A2E873BBB4C (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t3CC0187E4344201378E113CFC270CB5C4AF36D86_m6202F662B34E3BCA29B88E2C423DB3A66B9A3716_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_t61F3CC09AD97599905243CBACDB7B376CD5EF68B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t3CC0187E4344201378E113CFC270CB5C4AF36D86 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector3>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t3CC0187E4344201378E113CFC270CB5C4AF36D86 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t3CC0187E4344201378E113CFC270CB5C4AF36D86_m6202F662B34E3BCA29B88E2C423DB3A66B9A3716(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t3CC0187E4344201378E113CFC270CB5C4AF36D86_m6202F662B34E3BCA29B88E2C423DB3A66B9A3716_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t3CC0187E4344201378E113CFC270CB5C4AF36D86 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t3CC0187E4344201378E113CFC270CB5C4AF36D86 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>::OnGestureUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_t61F3CC09AD97599905243CBACDB7B376CD5EF68B_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_29(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_29_mD9C2D8438B1287E484D81F83DF691E9A654D3FE9 (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t7F018120437B38470980D7DC0A7FDBA6732ABF30_m2129AC3F038C4BEF0B506ECE284ED37D7C7F49A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_t9BF2917CA2F6BA90F5B502CE2252E7A71E694327_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t7F018120437B38470980D7DC0A7FDBA6732ABF30 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Quaternion>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t7F018120437B38470980D7DC0A7FDBA6732ABF30 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t7F018120437B38470980D7DC0A7FDBA6732ABF30_m2129AC3F038C4BEF0B506ECE284ED37D7C7F49A1(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t7F018120437B38470980D7DC0A7FDBA6732ABF30_m2129AC3F038C4BEF0B506ECE284ED37D7C7F49A1_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t7F018120437B38470980D7DC0A7FDBA6732ABF30 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t7F018120437B38470980D7DC0A7FDBA6732ABF30 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>::OnGestureUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_t9BF2917CA2F6BA90F5B502CE2252E7A71E694327_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_30(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_30_m6F3426694F840EB9346DAF00B4AAB7647630D241 (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_tA33647F64CCCCF6BC521D4100BE48B24C6BFBD3B_mFFDCF554C5EC4D10E36C89E06BDCC2F80F7ECC35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_t5DF827B70911D0697D9F04D69834827B05C29A6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tA33647F64CCCCF6BC521D4100BE48B24C6BFBD3B * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<MixedRealityPose>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tA33647F64CCCCF6BC521D4100BE48B24C6BFBD3B * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tA33647F64CCCCF6BC521D4100BE48B24C6BFBD3B_mFFDCF554C5EC4D10E36C89E06BDCC2F80F7ECC35(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tA33647F64CCCCF6BC521D4100BE48B24C6BFBD3B_mFFDCF554C5EC4D10E36C89E06BDCC2F80F7ECC35_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tA33647F64CCCCF6BC521D4100BE48B24C6BFBD3B * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tA33647F64CCCCF6BC521D4100BE48B24C6BFBD3B * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::OnGestureUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_t5DF827B70911D0697D9F04D69834827B05C29A6F_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_31(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_31_m2C515944AAE448A7D4B78277DEE322C112799D3E (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t60DF86D63F954673178E2461D27DB8150C84A017_mE0D86703A444865133801F03AD4571D24ED886B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_t0A5BCFF83D2F8CC4CDCA8E286694151E22C62814_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t60DF86D63F954673178E2461D27DB8150C84A017_mE0D86703A444865133801F03AD4571D24ED886B6(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t60DF86D63F954673178E2461D27DB8150C84A017_mE0D86703A444865133801F03AD4571D24ED886B6_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_t0A5BCFF83D2F8CC4CDCA8E286694151E22C62814_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_32(Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_32_m323D876E29DE34242B3C2A2F13F7476A9AA511E0 (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t60DF86D63F954673178E2461D27DB8150C84A017_mE0D86703A444865133801F03AD4571D24ED886B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_t0A5BCFF83D2F8CC4CDCA8E286694151E22C62814_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t0A5BCFF83D2F8CC4CDCA8E286694151E22C62814_mFC83C9A2367A7604F8BD04E0B3F3E28DECB583FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275_m39B0F15B395F1EC250E61D16731737864BBCA282_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// var inputData = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t60DF86D63F954673178E2461D27DB8150C84A017_mE0D86703A444865133801F03AD4571D24ED886B6(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t60DF86D63F954673178E2461D27DB8150C84A017_mE0D86703A444865133801F03AD4571D24ED886B6_RuntimeMethod_var);
		V_0 = L_1;
		// Debug.Assert(inputData.MixedRealityInputAction != MixedRealityInputAction.None);
		InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * L_2 = V_0;
		NullCheck(L_2);
		MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  L_3;
		L_3 = BaseInputEventData_get_MixedRealityInputAction_mA78E886C78EB21F0E603211E06AAA624B8059CEE_inline(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_il2cpp_TypeInfo_var);
		MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  L_4;
		L_4 = MixedRealityInputAction_get_None_m2699B1F27BCBC764B5BE98CE502466162142914B_inline(/*hidden argument*/NULL);
		bool L_5;
		L_5 = MixedRealityInputAction_op_Inequality_m9F5335D0C40F92A7CCD1DF9CE2C058C44F9A787F(L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Assert_m9AB596E4960380752FD4CB3292D07A86E995938B(L_5, /*hidden argument*/NULL);
		// if (handler is IMixedRealityGestureHandler gestureHandler && !gestureHandler.IsNull())
		RuntimeObject* L_6 = ___handler0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IMixedRealityGestureHandler_t0A5BCFF83D2F8CC4CDCA8E286694151E22C62814_il2cpp_TypeInfo_var));
		RuntimeObject* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject* L_8 = V_1;
		bool L_9;
		L_9 = UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t0A5BCFF83D2F8CC4CDCA8E286694151E22C62814_mFC83C9A2367A7604F8BD04E0B3F3E28DECB583FD(L_8, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t0A5BCFF83D2F8CC4CDCA8E286694151E22C62814_mFC83C9A2367A7604F8BD04E0B3F3E28DECB583FD_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B3_0 = 0;
	}

IL_0034:
	{
		V_3 = (bool)G_B3_0;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0042;
		}
	}
	{
		// gestureHandler.OnGestureCompleted(inputData);
		RuntimeObject* L_11 = V_1;
		InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * L_12 = V_0;
		NullCheck(L_11);
		InterfaceActionInvoker1< InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_t0A5BCFF83D2F8CC4CDCA8E286694151E22C62814_il2cpp_TypeInfo_var, L_11, L_12);
	}

IL_0042:
	{
		// if (handler is IMixedRealityInputActionHandler actionHandler && !actionHandler.IsNull())
		RuntimeObject* L_13 = ___handler0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_13, IMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275_il2cpp_TypeInfo_var));
		RuntimeObject* L_14 = V_2;
		if (!L_14)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_15 = V_2;
		bool L_16;
		L_16 = UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275_m39B0F15B395F1EC250E61D16731737864BBCA282(L_15, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275_m39B0F15B395F1EC250E61D16731737864BBCA282_RuntimeMethod_var);
		G_B8_0 = ((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		goto IL_0058;
	}

IL_0057:
	{
		G_B8_0 = 0;
	}

IL_0058:
	{
		V_4 = (bool)G_B8_0;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_0068;
		}
	}
	{
		// actionHandler.OnActionEnded(inputData);
		RuntimeObject* L_18 = V_2;
		InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * L_19 = V_0;
		NullCheck(L_18);
		InterfaceActionInvoker1< BaseInputEventData_t33EF0985CB22B5C3318A0464BDBF0BDF3F9B7411 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionEnded(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275_il2cpp_TypeInfo_var, L_18, L_19);
	}

IL_0068:
	{
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_33(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_33_mA3899B6CB7801953B569A2669131CF323ABA245E (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_tE0571359448813352C91BED8440BD824D08412F7_m816378C93CF3AD3650AED93D4E5AFCDFBF3D3595_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_tAEFE3B6550ED8998523EE7A2AF1FC5341976036E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tE0571359448813352C91BED8440BD824D08412F7 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector2>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tE0571359448813352C91BED8440BD824D08412F7 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tE0571359448813352C91BED8440BD824D08412F7_m816378C93CF3AD3650AED93D4E5AFCDFBF3D3595(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tE0571359448813352C91BED8440BD824D08412F7_m816378C93CF3AD3650AED93D4E5AFCDFBF3D3595_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tE0571359448813352C91BED8440BD824D08412F7 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tE0571359448813352C91BED8440BD824D08412F7 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_tAEFE3B6550ED8998523EE7A2AF1FC5341976036E_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_34(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_34_m1CEAB9C5629E1F3EDE314098710BE0C1BAB74191 (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t3CC0187E4344201378E113CFC270CB5C4AF36D86_m6202F662B34E3BCA29B88E2C423DB3A66B9A3716_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_t61F3CC09AD97599905243CBACDB7B376CD5EF68B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t3CC0187E4344201378E113CFC270CB5C4AF36D86 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector3>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t3CC0187E4344201378E113CFC270CB5C4AF36D86 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t3CC0187E4344201378E113CFC270CB5C4AF36D86_m6202F662B34E3BCA29B88E2C423DB3A66B9A3716(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t3CC0187E4344201378E113CFC270CB5C4AF36D86_m6202F662B34E3BCA29B88E2C423DB3A66B9A3716_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t3CC0187E4344201378E113CFC270CB5C4AF36D86 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t3CC0187E4344201378E113CFC270CB5C4AF36D86 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_t61F3CC09AD97599905243CBACDB7B376CD5EF68B_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_35(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_35_mB821EF225E7419D05718CAAB563E5039524D7533 (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t7F018120437B38470980D7DC0A7FDBA6732ABF30_m2129AC3F038C4BEF0B506ECE284ED37D7C7F49A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_t9BF2917CA2F6BA90F5B502CE2252E7A71E694327_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t7F018120437B38470980D7DC0A7FDBA6732ABF30 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Quaternion>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t7F018120437B38470980D7DC0A7FDBA6732ABF30 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t7F018120437B38470980D7DC0A7FDBA6732ABF30_m2129AC3F038C4BEF0B506ECE284ED37D7C7F49A1(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t7F018120437B38470980D7DC0A7FDBA6732ABF30_m2129AC3F038C4BEF0B506ECE284ED37D7C7F49A1_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t7F018120437B38470980D7DC0A7FDBA6732ABF30 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t7F018120437B38470980D7DC0A7FDBA6732ABF30 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_t9BF2917CA2F6BA90F5B502CE2252E7A71E694327_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_36(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_36_mA033DBAC4D17A753C7654116D09D80868F79C465 (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_tA33647F64CCCCF6BC521D4100BE48B24C6BFBD3B_mFFDCF554C5EC4D10E36C89E06BDCC2F80F7ECC35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_t5DF827B70911D0697D9F04D69834827B05C29A6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tA33647F64CCCCF6BC521D4100BE48B24C6BFBD3B * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<MixedRealityPose>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tA33647F64CCCCF6BC521D4100BE48B24C6BFBD3B * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tA33647F64CCCCF6BC521D4100BE48B24C6BFBD3B_mFFDCF554C5EC4D10E36C89E06BDCC2F80F7ECC35(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tA33647F64CCCCF6BC521D4100BE48B24C6BFBD3B_mFFDCF554C5EC4D10E36C89E06BDCC2F80F7ECC35_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tA33647F64CCCCF6BC521D4100BE48B24C6BFBD3B * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tA33647F64CCCCF6BC521D4100BE48B24C6BFBD3B * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_t5DF827B70911D0697D9F04D69834827B05C29A6F_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_37(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_37_m98D09F854BD32D32115745D1085C6B6755BAC26A (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t60DF86D63F954673178E2461D27DB8150C84A017_mE0D86703A444865133801F03AD4571D24ED886B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_t0A5BCFF83D2F8CC4CDCA8E286694151E22C62814_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t60DF86D63F954673178E2461D27DB8150C84A017_mE0D86703A444865133801F03AD4571D24ED886B6(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t60DF86D63F954673178E2461D27DB8150C84A017_mE0D86703A444865133801F03AD4571D24ED886B6_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCanceled(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_t60DF86D63F954673178E2461D27DB8150C84A017 * >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureCanceled(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_t0A5BCFF83D2F8CC4CDCA8E286694151E22C62814_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_38(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_38_mAAE37C997B481928CDF27897E3FD2BB0690C015F (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA_m628BC374FB56E5B33E8A4CF9A8DDC5DC110B9B19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySpeechHandler_t5334FAB956513541ADED66C150F22BA8CFE475D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SpeechEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA_m628BC374FB56E5B33E8A4CF9A8DDC5DC110B9B19(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA_m628BC374FB56E5B33E8A4CF9A8DDC5DC110B9B19_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSpeechKeywordRecognized(casted);
		RuntimeObject* L_2 = ___handler0;
		SpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler::OnSpeechKeywordRecognized(Microsoft.MixedReality.Toolkit.Input.SpeechEventData) */, IMixedRealitySpeechHandler_t5334FAB956513541ADED66C150F22BA8CFE475D5_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_39(Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_39_mF6B88A43866F952284F8B3BAF309FB654BD58087 (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA_m628BC374FB56E5B33E8A4CF9A8DDC5DC110B9B19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySpeechHandler_t5334FAB956513541ADED66C150F22BA8CFE475D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275_m39B0F15B395F1EC250E61D16731737864BBCA282_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealitySpeechHandler_t5334FAB956513541ADED66C150F22BA8CFE475D5_m5618D3D9A5B03BA7A5AC61A4F46BF926D2F9647B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// var speechData = ExecuteEvents.ValidateEventData<SpeechEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA_m628BC374FB56E5B33E8A4CF9A8DDC5DC110B9B19(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA_m628BC374FB56E5B33E8A4CF9A8DDC5DC110B9B19_RuntimeMethod_var);
		V_0 = L_1;
		// Debug.Assert(speechData.MixedRealityInputAction != MixedRealityInputAction.None);
		SpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA * L_2 = V_0;
		NullCheck(L_2);
		MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  L_3;
		L_3 = BaseInputEventData_get_MixedRealityInputAction_mA78E886C78EB21F0E603211E06AAA624B8059CEE_inline(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_il2cpp_TypeInfo_var);
		MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  L_4;
		L_4 = MixedRealityInputAction_get_None_m2699B1F27BCBC764B5BE98CE502466162142914B_inline(/*hidden argument*/NULL);
		bool L_5;
		L_5 = MixedRealityInputAction_op_Inequality_m9F5335D0C40F92A7CCD1DF9CE2C058C44F9A787F(L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Assert_m9AB596E4960380752FD4CB3292D07A86E995938B(L_5, /*hidden argument*/NULL);
		// if (handler is IMixedRealitySpeechHandler speechHandler && !speechHandler.IsNull())
		RuntimeObject* L_6 = ___handler0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IMixedRealitySpeechHandler_t5334FAB956513541ADED66C150F22BA8CFE475D5_il2cpp_TypeInfo_var));
		RuntimeObject* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject* L_8 = V_1;
		bool L_9;
		L_9 = UnityObjectExtensions_IsNull_TisIMixedRealitySpeechHandler_t5334FAB956513541ADED66C150F22BA8CFE475D5_m5618D3D9A5B03BA7A5AC61A4F46BF926D2F9647B(L_8, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealitySpeechHandler_t5334FAB956513541ADED66C150F22BA8CFE475D5_m5618D3D9A5B03BA7A5AC61A4F46BF926D2F9647B_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B3_0 = 0;
	}

IL_0034:
	{
		V_3 = (bool)G_B3_0;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0042;
		}
	}
	{
		// speechHandler.OnSpeechKeywordRecognized(speechData);
		RuntimeObject* L_11 = V_1;
		SpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA * L_12 = V_0;
		NullCheck(L_11);
		InterfaceActionInvoker1< SpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler::OnSpeechKeywordRecognized(Microsoft.MixedReality.Toolkit.Input.SpeechEventData) */, IMixedRealitySpeechHandler_t5334FAB956513541ADED66C150F22BA8CFE475D5_il2cpp_TypeInfo_var, L_11, L_12);
	}

IL_0042:
	{
		// if (handler is IMixedRealityInputActionHandler actionHandler && !actionHandler.IsNull())
		RuntimeObject* L_13 = ___handler0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_13, IMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275_il2cpp_TypeInfo_var));
		RuntimeObject* L_14 = V_2;
		if (!L_14)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_15 = V_2;
		bool L_16;
		L_16 = UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275_m39B0F15B395F1EC250E61D16731737864BBCA282(L_15, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275_m39B0F15B395F1EC250E61D16731737864BBCA282_RuntimeMethod_var);
		G_B8_0 = ((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		goto IL_0058;
	}

IL_0057:
	{
		G_B8_0 = 0;
	}

IL_0058:
	{
		V_4 = (bool)G_B8_0;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		// actionHandler.OnActionStarted(speechData);
		RuntimeObject* L_18 = V_2;
		SpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA * L_19 = V_0;
		NullCheck(L_18);
		InterfaceActionInvoker1< BaseInputEventData_t33EF0985CB22B5C3318A0464BDBF0BDF3F9B7411 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionStarted(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275_il2cpp_TypeInfo_var, L_18, L_19);
		// actionHandler.OnActionEnded(speechData);
		RuntimeObject* L_20 = V_2;
		SpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA * L_21 = V_0;
		NullCheck(L_20);
		InterfaceActionInvoker1< BaseInputEventData_t33EF0985CB22B5C3318A0464BDBF0BDF3F9B7411 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionEnded(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_t6AB1C7A0A346124CBF641145BBECC157A05EB275_il2cpp_TypeInfo_var, L_20, L_21);
	}

IL_0070:
	{
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_40(Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_40_m02CBD6F178E95521559C70411F14AFCBB71E81E1 (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisDictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9_m10EE75CB04F08262DD52F77BE4AF5514FDCCFE32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDictationHandler_t98C2EEA038E5E4417458A0FAB56E1DA00AD23F04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<DictationEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		DictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisDictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9_m10EE75CB04F08262DD52F77BE4AF5514FDCCFE32(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisDictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9_m10EE75CB04F08262DD52F77BE4AF5514FDCCFE32_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnDictationHypothesis(casted);
		RuntimeObject* L_2 = ___handler0;
		DictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< DictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler::OnDictationHypothesis(Microsoft.MixedReality.Toolkit.Input.DictationEventData) */, IMixedRealityDictationHandler_t98C2EEA038E5E4417458A0FAB56E1DA00AD23F04_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_41(Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_41_mC6CFA54C49DA475B43D35A7D3CD7A0E6B3E4AAAA (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisDictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9_m10EE75CB04F08262DD52F77BE4AF5514FDCCFE32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDictationHandler_t98C2EEA038E5E4417458A0FAB56E1DA00AD23F04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<DictationEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		DictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisDictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9_m10EE75CB04F08262DD52F77BE4AF5514FDCCFE32(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisDictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9_m10EE75CB04F08262DD52F77BE4AF5514FDCCFE32_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnDictationResult(casted);
		RuntimeObject* L_2 = ___handler0;
		DictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< DictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler::OnDictationResult(Microsoft.MixedReality.Toolkit.Input.DictationEventData) */, IMixedRealityDictationHandler_t98C2EEA038E5E4417458A0FAB56E1DA00AD23F04_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_42(Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_42_m8C4F0DAABC25402637F625634C6FC4A5F760B2B8 (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisDictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9_m10EE75CB04F08262DD52F77BE4AF5514FDCCFE32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDictationHandler_t98C2EEA038E5E4417458A0FAB56E1DA00AD23F04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<DictationEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		DictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisDictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9_m10EE75CB04F08262DD52F77BE4AF5514FDCCFE32(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisDictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9_m10EE75CB04F08262DD52F77BE4AF5514FDCCFE32_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnDictationComplete(casted);
		RuntimeObject* L_2 = ___handler0;
		DictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< DictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler::OnDictationComplete(Microsoft.MixedReality.Toolkit.Input.DictationEventData) */, IMixedRealityDictationHandler_t98C2EEA038E5E4417458A0FAB56E1DA00AD23F04_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_43(Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_43_m35D34BFFCF4E5E0AA91E38BDA85DFEE346C49686 (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisDictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9_m10EE75CB04F08262DD52F77BE4AF5514FDCCFE32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDictationHandler_t98C2EEA038E5E4417458A0FAB56E1DA00AD23F04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<DictationEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		DictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisDictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9_m10EE75CB04F08262DD52F77BE4AF5514FDCCFE32(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisDictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9_m10EE75CB04F08262DD52F77BE4AF5514FDCCFE32_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnDictationError(casted);
		RuntimeObject* L_2 = ___handler0;
		DictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< DictationEventData_tE0D4A134FE310255AE5CB032B2A426AB363421C9 * >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler::OnDictationError(Microsoft.MixedReality.Toolkit.Input.DictationEventData) */, IMixedRealityDictationHandler_t98C2EEA038E5E4417458A0FAB56E1DA00AD23F04_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_44(Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_44_m9803E0A7ACFBDFBD358537473C1D58C64343AA7B (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t06D41EEA2E71B9C529589C04485505606369BE1C_mB37A0C7E484A4AC177CA18B67A6DA398E5B14B86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityHandJointHandler_t79E63EB39D36735D8E8B803583B19E39029B0231_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t06D41EEA2E71B9C529589C04485505606369BE1C * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<IDictionary<TrackedHandJoint, MixedRealityPose>>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t06D41EEA2E71B9C529589C04485505606369BE1C * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t06D41EEA2E71B9C529589C04485505606369BE1C_mB37A0C7E484A4AC177CA18B67A6DA398E5B14B86(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t06D41EEA2E71B9C529589C04485505606369BE1C_mB37A0C7E484A4AC177CA18B67A6DA398E5B14B86_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnHandJointsUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t06D41EEA2E71B9C529589C04485505606369BE1C * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t06D41EEA2E71B9C529589C04485505606369BE1C * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointHandler::OnHandJointsUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>) */, IMixedRealityHandJointHandler_t79E63EB39D36735D8E8B803583B19E39029B0231_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_45(Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandMeshHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_45_mB77867FB5890BCAAECFCDC8DD474C93CD517EB5F (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t2D9D7DD999D58E4BCE0A36B14B5C928399CDAE3F_m3F470CC5361D08F213269173D8BCBB1D8D10419A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityHandMeshHandler_tB10BDB522B37C512DDA155F5DE7ED54D50650980_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t2D9D7DD999D58E4BCE0A36B14B5C928399CDAE3F * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<HandMeshInfo>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t2D9D7DD999D58E4BCE0A36B14B5C928399CDAE3F * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t2D9D7DD999D58E4BCE0A36B14B5C928399CDAE3F_m3F470CC5361D08F213269173D8BCBB1D8D10419A(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t2D9D7DD999D58E4BCE0A36B14B5C928399CDAE3F_m3F470CC5361D08F213269173D8BCBB1D8D10419A_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnHandMeshUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t2D9D7DD999D58E4BCE0A36B14B5C928399CDAE3F * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t2D9D7DD999D58E4BCE0A36B14B5C928399CDAE3F * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandMeshHandler::OnHandMeshUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo>) */, IMixedRealityHandMeshHandler_tB10BDB522B37C512DDA155F5DE7ED54D50650980_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_46(Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_46_m00383A6A11D0DD803C5C64F8C67476F5C24A8D5D (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_t17B384EF4D24CF64EF2884AB370CB9066CA564A7_mF3B8DA57E0A2A385185BD4D44E43E8C23801C745_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityTouchHandler_tD78DAB5036D5B72077B668CD988CA8A8A276DFCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandTrackingInputEventData_t17B384EF4D24CF64EF2884AB370CB9066CA564A7 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<HandTrackingInputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		HandTrackingInputEventData_t17B384EF4D24CF64EF2884AB370CB9066CA564A7 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_t17B384EF4D24CF64EF2884AB370CB9066CA564A7_mF3B8DA57E0A2A385185BD4D44E43E8C23801C745(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_t17B384EF4D24CF64EF2884AB370CB9066CA564A7_mF3B8DA57E0A2A385185BD4D44E43E8C23801C745_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTouchStarted(casted);
		RuntimeObject* L_2 = ___handler0;
		HandTrackingInputEventData_t17B384EF4D24CF64EF2884AB370CB9066CA564A7 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< HandTrackingInputEventData_t17B384EF4D24CF64EF2884AB370CB9066CA564A7 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler::OnTouchStarted(Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData) */, IMixedRealityTouchHandler_tD78DAB5036D5B72077B668CD988CA8A8A276DFCC_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_47(Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_47_m1E7D43B71EEF1D1336C6BFECDA358A1270E1C711 (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_t17B384EF4D24CF64EF2884AB370CB9066CA564A7_mF3B8DA57E0A2A385185BD4D44E43E8C23801C745_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityTouchHandler_tD78DAB5036D5B72077B668CD988CA8A8A276DFCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandTrackingInputEventData_t17B384EF4D24CF64EF2884AB370CB9066CA564A7 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<HandTrackingInputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		HandTrackingInputEventData_t17B384EF4D24CF64EF2884AB370CB9066CA564A7 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_t17B384EF4D24CF64EF2884AB370CB9066CA564A7_mF3B8DA57E0A2A385185BD4D44E43E8C23801C745(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_t17B384EF4D24CF64EF2884AB370CB9066CA564A7_mF3B8DA57E0A2A385185BD4D44E43E8C23801C745_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTouchCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		HandTrackingInputEventData_t17B384EF4D24CF64EF2884AB370CB9066CA564A7 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< HandTrackingInputEventData_t17B384EF4D24CF64EF2884AB370CB9066CA564A7 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler::OnTouchCompleted(Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData) */, IMixedRealityTouchHandler_tD78DAB5036D5B72077B668CD988CA8A8A276DFCC_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__244_48(Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__244_48_mA931EDDEC65A5DF63AC61D75E1FA1125DC18788A (U3CU3Ec_t4E9059AD73DAADCADDE555E8C12F316EA48DC41C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_t17B384EF4D24CF64EF2884AB370CB9066CA564A7_mF3B8DA57E0A2A385185BD4D44E43E8C23801C745_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityTouchHandler_tD78DAB5036D5B72077B668CD988CA8A8A276DFCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandTrackingInputEventData_t17B384EF4D24CF64EF2884AB370CB9066CA564A7 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<HandTrackingInputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		HandTrackingInputEventData_t17B384EF4D24CF64EF2884AB370CB9066CA564A7 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_t17B384EF4D24CF64EF2884AB370CB9066CA564A7_mF3B8DA57E0A2A385185BD4D44E43E8C23801C745(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_t17B384EF4D24CF64EF2884AB370CB9066CA564A7_mF3B8DA57E0A2A385185BD4D44E43E8C23801C745_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTouchUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		HandTrackingInputEventData_t17B384EF4D24CF64EF2884AB370CB9066CA564A7 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< HandTrackingInputEventData_t17B384EF4D24CF64EF2884AB370CB9066CA564A7 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler::OnTouchUpdated(Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData) */, IMixedRealityTouchHandler_tD78DAB5036D5B72077B668CD988CA8A8A276DFCC_il2cpp_TypeInfo_var, L_2, L_3);
		// };
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
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m14A65B8CB6599B15D56082DFACD7AAD95D830336 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t52E15252849DE7F24C4F1D5FCC1F77B771665B98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t52E15252849DE7F24C4F1D5FCC1F77B771665B98 * L_0 = (U3CU3Ec_t52E15252849DE7F24C4F1D5FCC1F77B771665B98 *)il2cpp_codegen_object_new(U3CU3Ec_t52E15252849DE7F24C4F1D5FCC1F77B771665B98_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mC4BB8C9065FB3B872AE78A7C26BD244FAAC64645(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t52E15252849DE7F24C4F1D5FCC1F77B771665B98_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t52E15252849DE7F24C4F1D5FCC1F77B771665B98_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC4BB8C9065FB3B872AE78A7C26BD244FAAC64645 (U3CU3Ec_t52E15252849DE7F24C4F1D5FCC1F77B771665B98 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::<OnValidate>b__25_0(System.String,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3COnValidateU3Eb__25_0_mFFA1E33BC7C321BAB67E9AFA38DF7306699DE41E (U3CU3Ec_t52E15252849DE7F24C4F1D5FCC1F77B771665B98 * __this, String_t* ___result0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___next1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral193EAB9F1EC19468783C52A94D9B84DF6D5BEE4F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string hierarchy = gameObject.transform.EnumerateAncestors(true).Aggregate("", (result, next) => next.gameObject.name + "=>" + result);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___next1;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___result0;
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_2, _stringLiteral193EAB9F1EC19468783C52A94D9B84DF6D5BEE4F, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * NearInteractionTouchableVolume_get_TouchableCollider_m222868D886C4E6FC0048141DE06B5290582221CC_inline (NearInteractionTouchableVolume_tDE281E73D1A8AD596232A1443EE49ADE12C31580 * __this, const RuntimeMethod* method)
{
	{
		// public Collider TouchableCollider => touchableCollider;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = __this->get_touchableCollider_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * FocusDetails_get_Object_m593562D9DCA8193E20D515DF008EA43CF831537A_inline (FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * __this, const RuntimeMethod* method)
{
	{
		// public GameObject Object { get; set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_U3CObjectU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method)
{
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline((&L_1), (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerData_set_PreviousPointerTarget_m1C2D34EE516D36A0A25526B9BB9DB79926182809_inline (PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject PreviousPointerTarget { get; private set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_U3CPreviousPointerTargetU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_Object_m4E5DD3191067CB1AFC14DA6EFA4C2EF287BA4B18_inline (FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject Object { get; set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_U3CObjectU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_LastRaycastHit_m397E573F5211354A896C5A2D9C46FC76D85A9BF8_inline (FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * __this, MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48  ___value0, const RuntimeMethod* method)
{
	{
		// public MixedRealityRaycastHit LastRaycastHit { get; set; }
		MixedRealityRaycastHit_tD69CF29AE572AB1F40DCAA41425AC72EC4031E48  L_0 = ___value0;
		__this->set_U3CLastRaycastHitU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_LastGraphicsRaycastResult_m6E15CD20FEE2F7BAD790DC954D515876A28EDF59_inline (FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * __this, RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___value0, const RuntimeMethod* method)
{
	{
		// public RaycastResult LastGraphicsRaycastResult { get; set; }
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  L_0 = ___value0;
		__this->set_U3CLastGraphicsRaycastResultU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerData_set_RayStepIndex_mA6EACC6FA5B09A0C629463FFEED2ADED3B8F0D19_inline (PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int RayStepIndex { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CRayStepIndexU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayStep_get_Origin_m1D98389A42469C82B409493B72CA4F1B9A163BA6_inline (RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Origin { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3COriginU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerData_set_StartPoint_mAC621EF433D9BE1FB288E371E9B6E29B08C355B7_inline (PointerData_tA3076EC116C170B7F728BB63E9BFCF9F213ECDF1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 StartPoint { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CStartPointU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_RayDistance_m7E4FC55A5E7D40E2EAFBE0F472913CFCA241AE97_inline (FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float RayDistance { get; set; }
		float L_0 = ___value0;
		__this->set_U3CRayDistanceU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_Point_mDF42A072098565B3023255F1B01A9289D9949181_inline (FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 Point { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CPointU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_Normal_m97D9C7BBBA7B89569060CF5DAC31531D31866578_inline (FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 Normal { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CNormalU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float RayStep_get_Length_m13BE76C9C985DBEAB2B9BE30AA97E54E6B3D7A10_inline (RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF * __this, const RuntimeMethod* method)
{
	{
		// public float Length { get; private set; }
		float L_0 = __this->get_U3CLengthU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayStep_get_Terminus_mC3F67EB322BAF98ECD0DF68FC7D60465F89F9A35_inline (RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Terminus { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CTerminusU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayStep_get_Direction_mC869D285E92E1BAA46067A30C6582EB2F910CD8C_inline (RayStep_t1BDD462CBD5B96D20141BF5AF5E2F93D60E317BF * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Direction { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CDirectionU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FocusDetails_get_Point_m05AF86F597787DFEE128546888C1AD3610AD850B_inline (FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Point { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CPointU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_PointLocalSpace_mAD4ED6ACE04168A465A990D8926CA6FB2D49EF3E_inline (FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 PointLocalSpace { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CPointLocalSpaceU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FocusDetails_get_Normal_m575D2A62A6B4471C2E0AF27CED93FCC9166F7343_inline (FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Normal { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CNormalU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_NormalLocalSpace_m806F8C0A4CE825416966180EF61F24E53B1CFFDB_inline (FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 NormalLocalSpace { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CNormalLocalSpaceU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FocusDetails_get_PointLocalSpace_mB0230E50082B67D82154120CF74BD7D570136CFC_inline (FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 PointLocalSpace { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CPointLocalSpaceU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FocusDetails_get_NormalLocalSpace_mB18EFA5B0FB1DA4F02B602A949898ED56C6CCC7E_inline (FocusDetails_t9D9111B483D3807234CD405067A29099A79620DA * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 NormalLocalSpace { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CNormalLocalSpaceU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1;
		L_1 = ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD(L_0, (uint16_t)1, 0, 0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GenericPointer_set_PrioritizedLayerMasksOverride_m92A216D38AD36ECCF5DFCD173138A3451F72B432_inline (GenericPointer_tD86AC079044CE9DE5F79A1B579F71953A66658DD * __this, LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___value0, const RuntimeMethod* method)
{
	{
		// public LayerMask[] PrioritizedLayerMasksOverride { get; set; }
		LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* L_0 = ___value0;
		__this->set_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseGenericInputSource_set_SourceType_m26B2EA545018ABFE84390E15BF84630C46165402_inline (BaseGenericInputSource_t3BC0CA373CD52DBE59FF183FDE0B2795BC7FBC9E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public InputSourceType SourceType { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CSourceTypeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  GazeProvider_get_LatestEyeGaze_m1130241A6F49BA5F102BB19D998642E77C890CA1_inline (GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * __this, const RuntimeMethod* method)
{
	{
		// public Ray LatestEyeGaze { get; private set; } = default(Ray);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_0 = __this->get_U3CLatestEyeGazeU3Ek__BackingField_36();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GazeProvider_get_UseHeadGazeOverride_mDD27B7E6B59346D78ECE99FE3FEE4BB5FC08E259_inline (GazeProvider_t09B2789A898B7EF3968B32E9BF1FAB17C2383176 * __this, const RuntimeMethod* method)
{
	{
		// public bool UseHeadGazeOverride { get; set; }
		bool L_0 = __this->get_U3CUseHeadGazeOverrideU3Ek__BackingField_39();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RayStepU5BU5D_tCC36F43D996F3D35CC79E15BA0E3B1C10EBF1DC8* GenericPointer_get_Rays_m9E6E23787FA77505D47A43A6113D27447CCC6B13_inline (GenericPointer_tD86AC079044CE9DE5F79A1B579F71953A66658DD * __this, const RuntimeMethod* method)
{
	{
		// public RayStep[] Rays { get; protected set; } = { new RayStep(Vector3.zero, Vector3.forward) };
		RayStepU5BU5D_tCC36F43D996F3D35CC79E15BA0E3B1C10EBF1DC8* L_0 = __this->get_U3CRaysU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  MixedRealityInputAction_get_None_m2699B1F27BCBC764B5BE98CE502466162142914B_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityInputAction None { get; } = new MixedRealityInputAction(0, "None");
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_il2cpp_TypeInfo_var);
		MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  L_0 = ((MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_il2cpp_TypeInfo_var))->get_U3CNoneU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_mFFFDFC33C8B0031C7531E7CCA4BE13ECAB038EB8_inline (SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsCompleted { get; private set; }
		bool L_0 = __this->get_U3CIsCompletedU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  BaseInputEventData_get_MixedRealityInputAction_mA78E886C78EB21F0E603211E06AAA624B8059CEE_inline (BaseInputEventData_t33EF0985CB22B5C3318A0464BDBF0BDF3F9B7411 * __this, const RuntimeMethod* method)
{
	{
		// public MixedRealityInputAction MixedRealityInputAction { get; private set; }
		MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  L_0 = __this->get_U3CMixedRealityInputActionU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_gshared_inline (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  L_0 = (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 )__this->get_current_3();
		return (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->set_m_Ptr_0((intptr_t)L_0);
		intptr_t L_1 = ___markerPtr0;
		ProfilerUnsafeUtility_BeginSample_m1B2CAD1BC7C7C390514317A8D51FB798D4622AE4((intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}

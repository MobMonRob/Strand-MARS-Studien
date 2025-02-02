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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>
struct Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Object,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>
struct Dictionary_2_t5CFA76C62610306283A54361AF47F0EE44449A82;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.Dictionary`2<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService>
struct Dictionary_2_tCB3C5C94E20F0D63D33459A30E3AE46C7EEE8D7B;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Collections.Generic.IEnumerable`1<System.Func`1<System.Threading.Tasks.Task>>
struct IEnumerable_1_t7D3CE49DEF7BDC88D95900E58AB06872FDE59009;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Camera>
struct IEnumerable_1_t1CEFC4032D36100FE58999A10DFB02F5139BC4AF;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerator`1<System.Func`1<System.Threading.Tasks.Task>>
struct IEnumerator_1_tD259C605C945E5BABB034B4C2221351E85AFF5F6;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Camera>
struct IEnumerator_1_tCF7FF5B0C2C3C1ED84EA8B53C00513836CEE6A9B;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Camera>
struct IEqualityComparer_1_t0D2AD10C2920FAFDD8B691EB7E2FEC462AE564C6;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>
struct KeyCollection_t0E6DB6453209EEA93BB345941633B5FA8AC88EC9;
// System.Collections.Generic.List`1<System.Tuple`2<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService>>
struct List_1_t0C354ED500841E35CE1441CF408913ADD7AA9577;
// System.Collections.Generic.List`1<UnityEngine.Camera>
struct List_1_t653022B4EDCE73F282430E1A396635798D309409;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.MixedRealityToolkit>
struct List_1_tB6E1533880E3D2A11B3AECFC7327150F57C8AED3;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>
struct ValueCollection_t322749FF0E4948F4FD8A3F1178C601A0AEF155CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>
struct ValueCollection_tB8C814489F2B63CB416623645CEE1F576F6F3403;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>[]
struct EntryU5BU5D_t0F200805C9362213B4A847204C43603D0BB66532;
// UnityEngine.Camera[]
struct CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001;
// UnityEngine.Canvas[]
struct CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Microsoft.MixedReality.Toolkit.BaseExtensionService
struct BaseExtensionService_t4B2A1112509F645C2FA38479075967B1918EAC97;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad
struct CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.ICameraFader
struct ICameraFader_t5A340FB234F3C91DE810CFB0542DC48F56506F0A;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Microsoft.MixedReality.Toolkit.SceneSystem.IMixedRealitySceneSystem
struct IMixedRealitySceneSystem_t7FC3A27BA1BF40BA292F5F611E7740528D5235DD;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t96040EB1E30984BEEE1B1302381393D337FD6ABC;
// Microsoft.MixedReality.Toolkit.UI.IProgressIndicator
struct IProgressIndicator_t9C6F896C9D44D4078E294EF6E62471A3B5E1F3F9;
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.ISceneTransitionService
struct ISceneTransitionService_t3F85B75F410F440B69A5EADD980909265AB1659A;
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.LoadContentScene
struct LoadContentScene_t31D5670B45B173146A60D77829CA8B3FAED7824F;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.MixedRealityToolkit
struct MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736;
// Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile
struct MixedRealityToolkitConfigurationProfile_tB77A32ADEFB58771FB0BC8DA7B8B9333C1065082;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService
struct SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312;
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile
struct SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E;
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
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Threading.WaitCallback
struct WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeInAsync>d__17
struct U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2;
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15
struct U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958;
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__48
struct U3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F;
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__49
struct U3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7;
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__50
struct U3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309;
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52
struct U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2;
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__55
struct U3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB;
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59
struct U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490;
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__54
struct U3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A;
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57
struct U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761;
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<HideProgressIndicator>d__63
struct U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraFaderState_t8B99D77E75F45B24C223E5E6A065F52B4B704470_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1U5BU5D_tC8C836685B57D98A62C1CAB8F14A1261EB3E4922_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICameraFader_t5A340FB234F3C91DE810CFB0542DC48F56506F0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t1CEFC4032D36100FE58999A10DFB02F5139BC4AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t7D3CE49DEF7BDC88D95900E58AB06872FDE59009_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tCF7FF5B0C2C3C1ED84EA8B53C00513836CEE6A9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tD259C605C945E5BABB034B4C2221351E85AFF5F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealitySceneSystem_t7FC3A27BA1BF40BA292F5F611E7740528D5235DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProgressIndicator_t9C6F896C9D44D4078E294EF6E62471A3B5E1F3F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISceneTransitionService_t3F85B75F410F440B69A5EADD980909265AB1659A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t653022B4EDCE73F282430E1A396635798D309409_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadContentScene_t31D5670B45B173146A60D77829CA8B3FAED7824F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral31458AD0C0AF1F61C0D182621815EEB4ACF048D6;
IL2CPP_EXTERN_C String_t* _stringLiteral36EE8A5FF4009B845B66EC1D63E1466DC691A26E;
IL2CPP_EXTERN_C String_t* _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F;
IL2CPP_EXTERN_C String_t* _stringLiteral4455AB79907F48883B90E43E3480CC3C4C7EF749;
IL2CPP_EXTERN_C String_t* _stringLiteral4543A8A600AAF621D5B283482F0136C2F216FF62;
IL2CPP_EXTERN_C String_t* _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
IL2CPP_EXTERN_C String_t* _stringLiteral52C2722348A269EDA43E9964574EB943B39E2844;
IL2CPP_EXTERN_C String_t* _stringLiteral52CBE4A5A42509939BB9DB58A4B9A2C9BBA81C1C;
IL2CPP_EXTERN_C String_t* _stringLiteral5DBBB5B60942F49C9A9831F4529E22F250F35879;
IL2CPP_EXTERN_C String_t* _stringLiteral61304A4D1A7F7C3C856F975F251F1F79885933C8;
IL2CPP_EXTERN_C String_t* _stringLiteral6188E7230D6EC2CB653C4B636C9EB4E43FA23E5B;
IL2CPP_EXTERN_C String_t* _stringLiteral6724DF02A625A1E61DB0254B283AEA48BABAA8FC;
IL2CPP_EXTERN_C String_t* _stringLiteral6BD6FA6FBD0F285B5107F463210EB588E48F051A;
IL2CPP_EXTERN_C String_t* _stringLiteral6C57382736310A2BDC33273D5EF4504D36B34FA7;
IL2CPP_EXTERN_C String_t* _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A;
IL2CPP_EXTERN_C String_t* _stringLiteral7D61FA9D9BE7581D7E2EE28C775ABE0D4B8C3D69;
IL2CPP_EXTERN_C String_t* _stringLiteral7D9D651ABAA01519787B90DCB20837985F76598E;
IL2CPP_EXTERN_C String_t* _stringLiteral812B93C972F83E269C898CB9FEF20AD1ADA64217;
IL2CPP_EXTERN_C String_t* _stringLiteral81852CEFB8E88AEF06AD93EFD4AD80348EDED312;
IL2CPP_EXTERN_C String_t* _stringLiteral8828DDA20B74971CEC31D21BD2E54441F8B587BE;
IL2CPP_EXTERN_C String_t* _stringLiteral8EB26CEBCA8FFC34185115D39A399721D995EB25;
IL2CPP_EXTERN_C String_t* _stringLiteral940FB1761904743E250EFA2AF7552DF6EB59FE94;
IL2CPP_EXTERN_C String_t* _stringLiteral9DC2BD27F33C54867CE2E685D22F354136FB41AD;
IL2CPP_EXTERN_C String_t* _stringLiteralA2003866100759F536E30A6F22A78916CFC09236;
IL2CPP_EXTERN_C String_t* _stringLiteralA646770488C9DBF9573CE4990692B59630579657;
IL2CPP_EXTERN_C String_t* _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C;
IL2CPP_EXTERN_C String_t* _stringLiteralB85BD2A90D444EDBD4F18BEBB782A0CA3E1B6F7A;
IL2CPP_EXTERN_C String_t* _stringLiteralB9A37D35927E80BED3DDCD4E0A2C8E638956590F;
IL2CPP_EXTERN_C String_t* _stringLiteralBE3AB133E10294E2E9B74FE908DA018B2506B0F2;
IL2CPP_EXTERN_C String_t* _stringLiteralCBCD3D866AF896F9B010A0FEE7F961DBC91A08C5;
IL2CPP_EXTERN_C String_t* _stringLiteralD334F0506ACE2EC5CCBC7E868FCA093C85B446A2;
IL2CPP_EXTERN_C String_t* _stringLiteralD7A3B911B8B657663E66DA058B2F981A6805D3F1;
IL2CPP_EXTERN_C String_t* _stringLiteralE5121B082D242C1BD514B12BF0C187A5993C5215;
IL2CPP_EXTERN_C String_t* _stringLiteralF85263F579BDEEADCEC89CFCDB0C3F6C51D186BF;
IL2CPP_EXTERN_C String_t* _stringLiteralF9B85756D83C9C00267EE9160CB7C68B84C2F439;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F_m21C031146A6494AFA33E9AA58184259663F6BEB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7_m12D834F8A63DBAFF88C5960752D39C0820CC162C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309_mB2E014B649B2587291B515A73948299F1289F4E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2_m406A3E6563C8186C07C522BB281EEFB1B0A471EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB_m8666591E7B4BC1523BA34BBB7C1F93F19C41ECEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490_m51905B3992525E5B17106707F77A2E16FFFC16B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A_m507CCC317D9641C9C10FA44765270924458A149C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761_m54CDB1FF53709EE0AD454A3E238736BD4695C90E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB_m7CD5D8D47E160A14F45B1895C4A5382A80C2A5F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2_m7A01A59229B55422C40965CA995D59F96C21437D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490_m43B08F7493D3007229AD078D50EC3FF3DDC0FAFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E_mAD4A057725AF6709B33254E97AAAA60CA17F2BED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761_m8D9A7206DCAB6123F05F671324D453A3B6B01F2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB_m437AC1C6EDBD1D56FE5CC3A4D3803713AC8E04D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F_m605D9897511B8494C8ED9714AC6857B49302FDDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7_m573B87BAA148786338FE447E6F773D641D8436A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309_mF5931D1290576F8AA883EFAED6DC52D07C76D865_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2_m33AA74366F1C0FCADAAA098024850E2EA68D41F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2_mF000D98C534537EDAAE43D2B5DC3ACBA2AFD79CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB_m506BB205CF14CD8731C066A43D6E2945A22BBDC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490_m4AF638634411EC5599708CD519724EC06C095EF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E_m99244AE52764BB4B44A3FC24FD205D3BB33CEE21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A_m336F2AFCEABD26C593A7EE9EF663C19D308E1786_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761_mB01CCE141C9C702E21D76207C447914F22605288_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB_mEAFDEFD63984C5D00C6E196CB5D657ED6C2F5849_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mFE0EA4F836998691EBE2F3A6A37E1BFD4BB4266B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m23D917694A168EF94AE8B422A45E3D8133D4AA46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m6E41CCC27C41F32DB3C184D0DF645BDC6CFB16EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m49A75A973109D722B8A66BE033BE50D7E420BFA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m97D16075250F846C37CD35767442D30FD8A83DD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_mD7022774F2E85B56A1BB9804D8224A177CDE4CED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m655EF1545A276DD44E5D0A55B9834663DCC319FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m882DE164C46D6F8CA2FE5A4863466F9B7A34609E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9D9525836F35F6A686BBEFFB173325279E3F0FD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_m3B5AC943F23CE7225ACF20C2B4B5E2D3FF1EBDDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m1D5A4EA26730C44D2B031D9B88C5CD68A24F3562_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m28392D52AC9E4C794A9712D1693D07F29A633DAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5B457832A4D4C94E86A39767276F999140B677B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m639FF66F3E16E132E6B323366123C4DEAFBB548B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m74EEF198C737FDFCED8769ABFD739ABBC9116070_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m8FB149686794063D5004BAB8D71F1C150777F04D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoadContentScene_U3CLoadContentU3Eb__5_0_m71CEBBE6EE377406E1F25ADB3B5AE27FFDA7E4A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityToolkit_GetService_TisISceneTransitionService_t3F85B75F410F440B69A5EADD980909265AB1659A_m4D05F27AB7B80746A60AFE9367DBC866A084D225_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mC55BE8C73A55B2398CB2C20AA96459DFB6F1FCE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mE367AB133A26DA125A1E60158473C8DF02581A38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SceneTransitionService_CreateCameraFader_m2F10F6975B011F99747AA30E5533D10C3CFF67AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SceneTransitionService_CreateDefaultProgressIndicator_m66C1E1419E72B6CCBD497A5A760282B28E8C6A60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SceneTransitionService_GatherFadeTargetCameras_m05A7148CAE208F02964171818D8B8000F4D93234_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDoSceneTransitionU3Ed__52_MoveNext_m5066365B16ED3D15A0D4C060EB43EEE3104D5291_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_mA3416DE65266E497FA954656F23D9A9591C17A8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* IProgressIndicator_t9C6F896C9D44D4078E294EF6E62471A3B5E1F3F9_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com;

struct Func_1U5BU5D_tC8C836685B57D98A62C1CAB8F14A1261EB3E4922;
struct CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001;
struct CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t9FEDCEEC99068C2054DCB0DE39E66B04F74DF53F 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>
struct Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t0F200805C9362213B4A847204C43603D0BB66532* ___entries_1;
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
	KeyCollection_t0E6DB6453209EEA93BB345941633B5FA8AC88EC9 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t322749FF0E4948F4FD8A3F1178C601A0AEF155CD * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4, ___entries_1)); }
	inline EntryU5BU5D_t0F200805C9362213B4A847204C43603D0BB66532* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t0F200805C9362213B4A847204C43603D0BB66532** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t0F200805C9362213B4A847204C43603D0BB66532* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4, ___keys_7)); }
	inline KeyCollection_t0E6DB6453209EEA93BB345941633B5FA8AC88EC9 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0E6DB6453209EEA93BB345941633B5FA8AC88EC9 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0E6DB6453209EEA93BB345941633B5FA8AC88EC9 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4, ___values_8)); }
	inline ValueCollection_t322749FF0E4948F4FD8A3F1178C601A0AEF155CD * get_values_8() const { return ___values_8; }
	inline ValueCollection_t322749FF0E4948F4FD8A3F1178C601A0AEF155CD ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t322749FF0E4948F4FD8A3F1178C601A0AEF155CD * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Camera>
struct List_1_t653022B4EDCE73F282430E1A396635798D309409  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t653022B4EDCE73F282430E1A396635798D309409, ____items_1)); }
	inline CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* get__items_1() const { return ____items_1; }
	inline CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t653022B4EDCE73F282430E1A396635798D309409, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t653022B4EDCE73F282430E1A396635798D309409, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t653022B4EDCE73F282430E1A396635798D309409, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t653022B4EDCE73F282430E1A396635798D309409_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t653022B4EDCE73F282430E1A396635798D309409_StaticFields, ____emptyArray_5)); }
	inline CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* get__emptyArray_5() const { return ____emptyArray_5; }
	inline CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>
struct ValueCollection_t322749FF0E4948F4FD8A3F1178C601A0AEF155CD  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t322749FF0E4948F4FD8A3F1178C601A0AEF155CD, ___dictionary_0)); }
	inline Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.SceneSystem.SceneActivationToken
struct SceneActivationToken_t753C7C552C56457A4A52CF963C968B40A923BAFF  : public RuntimeObject
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.SceneActivationToken::<ReadyToProceed>k__BackingField
	bool ___U3CReadyToProceedU3Ek__BackingField_0;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.SceneActivationToken::<AllowSceneActivation>k__BackingField
	bool ___U3CAllowSceneActivationU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CReadyToProceedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SceneActivationToken_t753C7C552C56457A4A52CF963C968B40A923BAFF, ___U3CReadyToProceedU3Ek__BackingField_0)); }
	inline bool get_U3CReadyToProceedU3Ek__BackingField_0() const { return ___U3CReadyToProceedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CReadyToProceedU3Ek__BackingField_0() { return &___U3CReadyToProceedU3Ek__BackingField_0; }
	inline void set_U3CReadyToProceedU3Ek__BackingField_0(bool value)
	{
		___U3CReadyToProceedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CAllowSceneActivationU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SceneActivationToken_t753C7C552C56457A4A52CF963C968B40A923BAFF, ___U3CAllowSceneActivationU3Ek__BackingField_1)); }
	inline bool get_U3CAllowSceneActivationU3Ek__BackingField_1() const { return ___U3CAllowSceneActivationU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CAllowSceneActivationU3Ek__BackingField_1() { return &___U3CAllowSceneActivationU3Ek__BackingField_1; }
	inline void set_U3CAllowSceneActivationU3Ek__BackingField_1(bool value)
	{
		___U3CAllowSceneActivationU3Ek__BackingField_1 = value;
	}
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


// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Utilities.SystemType::reference
	String_t* ___reference_0;
	// System.Type Microsoft.MixedReality.Toolkit.Utilities.SystemType::type
	Type_t * ___type_1;

public:
	inline static int32_t get_offset_of_reference_0() { return static_cast<int32_t>(offsetof(SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E, ___reference_0)); }
	inline String_t* get_reference_0() const { return ___reference_0; }
	inline String_t** get_address_of_reference_0() { return &___reference_0; }
	inline void set_reference_0(String_t* value)
	{
		___reference_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reference_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_1), (void*)value);
	}
};

struct SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.MixedReality.Toolkit.Utilities.SystemType::ReferenceMappings
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___ReferenceMappings_2;

public:
	inline static int32_t get_offset_of_ReferenceMappings_2() { return static_cast<int32_t>(offsetof(SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E_StaticFields, ___ReferenceMappings_2)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_ReferenceMappings_2() const { return ___ReferenceMappings_2; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_ReferenceMappings_2() { return &___ReferenceMappings_2; }
	inline void set_ReferenceMappings_2(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___ReferenceMappings_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReferenceMappings_2), (void*)value);
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
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


// System.Runtime.CompilerServices.YieldAwaitable
struct YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA 
{
public:
	union
	{
		struct
		{
		};
		uint8_t YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA__padding[1];
	};

public:
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad
struct Quad_t5B5564685E1EC46AF269743F2349796C7724911B 
{
public:
	// UnityEngine.Renderer Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad::Renderer
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___Renderer_0;
	// UnityEngine.MaterialPropertyBlock Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad::PropertyBlock
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___PropertyBlock_1;

public:
	inline static int32_t get_offset_of_Renderer_0() { return static_cast<int32_t>(offsetof(Quad_t5B5564685E1EC46AF269743F2349796C7724911B, ___Renderer_0)); }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * get_Renderer_0() const { return ___Renderer_0; }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** get_address_of_Renderer_0() { return &___Renderer_0; }
	inline void set_Renderer_0(Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		___Renderer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Renderer_0), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyBlock_1() { return static_cast<int32_t>(offsetof(Quad_t5B5564685E1EC46AF269743F2349796C7724911B, ___PropertyBlock_1)); }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * get_PropertyBlock_1() const { return ___PropertyBlock_1; }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 ** get_address_of_PropertyBlock_1() { return &___PropertyBlock_1; }
	inline void set_PropertyBlock_1(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * value)
	{
		___PropertyBlock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyBlock_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad
struct Quad_t5B5564685E1EC46AF269743F2349796C7724911B_marshaled_pinvoke
{
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___Renderer_0;
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___PropertyBlock_1;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad
struct Quad_t5B5564685E1EC46AF269743F2349796C7724911B_marshaled_com
{
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___Renderer_0;
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___PropertyBlock_1;
};

// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter
struct YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE 
{
public:
	union
	{
		struct
		{
		};
		uint8_t YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE__padding[1];
	};

public:
};

struct YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_StaticFields
{
public:
	// System.Threading.WaitCallback System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::s_waitCallbackRunAction
	WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * ___s_waitCallbackRunAction_0;
	// System.Threading.SendOrPostCallback System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::s_sendOrPostCallbackRunAction
	SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___s_sendOrPostCallbackRunAction_1;

public:
	inline static int32_t get_offset_of_s_waitCallbackRunAction_0() { return static_cast<int32_t>(offsetof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_StaticFields, ___s_waitCallbackRunAction_0)); }
	inline WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * get_s_waitCallbackRunAction_0() const { return ___s_waitCallbackRunAction_0; }
	inline WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 ** get_address_of_s_waitCallbackRunAction_0() { return &___s_waitCallbackRunAction_0; }
	inline void set_s_waitCallbackRunAction_0(WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * value)
	{
		___s_waitCallbackRunAction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_waitCallbackRunAction_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_sendOrPostCallbackRunAction_1() { return static_cast<int32_t>(offsetof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_StaticFields, ___s_sendOrPostCallbackRunAction_1)); }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * get_s_sendOrPostCallbackRunAction_1() const { return ___s_sendOrPostCallbackRunAction_1; }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C ** get_address_of_s_sendOrPostCallbackRunAction_1() { return &___s_sendOrPostCallbackRunAction_1; }
	inline void set_s_sendOrPostCallbackRunAction_1(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * value)
	{
		___s_sendOrPostCallbackRunAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_sendOrPostCallbackRunAction_1), (void*)value);
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


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>
struct Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	Quad_t5B5564685E1EC46AF269743F2349796C7724911B  ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000, ___dictionary_0)); }
	inline Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000, ___currentValue_3)); }
	inline Quad_t5B5564685E1EC46AF269743F2349796C7724911B  get_currentValue_3() const { return ___currentValue_3; }
	inline Quad_t5B5564685E1EC46AF269743F2349796C7724911B * get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(Quad_t5B5564685E1EC46AF269743F2349796C7724911B  value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___currentValue_3))->___Renderer_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___currentValue_3))->___PropertyBlock_1), (void*)NULL);
		#endif
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>
struct Enumerator_t4EE24AD225DE453ACAF75CFA6E793F1ED9F5497B 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_t5CFA76C62610306283A54361AF47F0EE44449A82 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	Quad_t5B5564685E1EC46AF269743F2349796C7724911B  ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t4EE24AD225DE453ACAF75CFA6E793F1ED9F5497B, ___dictionary_0)); }
	inline Dictionary_2_t5CFA76C62610306283A54361AF47F0EE44449A82 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t5CFA76C62610306283A54361AF47F0EE44449A82 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t5CFA76C62610306283A54361AF47F0EE44449A82 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t4EE24AD225DE453ACAF75CFA6E793F1ED9F5497B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t4EE24AD225DE453ACAF75CFA6E793F1ED9F5497B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_t4EE24AD225DE453ACAF75CFA6E793F1ED9F5497B, ___currentValue_3)); }
	inline Quad_t5B5564685E1EC46AF269743F2349796C7724911B  get_currentValue_3() const { return ___currentValue_3; }
	inline Quad_t5B5564685E1EC46AF269743F2349796C7724911B * get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(Quad_t5B5564685E1EC46AF269743F2349796C7724911B  value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___currentValue_3))->___Renderer_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___currentValue_3))->___PropertyBlock_1), (void*)NULL);
		#endif
	}
};


// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isInitialized_4;
	// System.String[] Microsoft.MixedReality.Toolkit.BaseService::typeName
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___typeName_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isEnabled_9;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isMarkedDestroyed_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_11;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_4() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___isInitialized_4)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isInitialized_4() const { return ___isInitialized_4; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isInitialized_4() { return &___isInitialized_4; }
	inline void set_isInitialized_4(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isInitialized_4 = value;
	}

	inline static int32_t get_offset_of_typeName_5() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___typeName_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_typeName_5() const { return ___typeName_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_typeName_5() { return &___typeName_5; }
	inline void set_typeName_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___typeName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeName_5), (void*)value);
	}

	inline static int32_t get_offset_of_isEnabled_9() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___isEnabled_9)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isEnabled_9() const { return ___isEnabled_9; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isEnabled_9() { return &___isEnabled_9; }
	inline void set_isEnabled_9(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isEnabled_9 = value;
	}

	inline static int32_t get_offset_of_isMarkedDestroyed_10() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___isMarkedDestroyed_10)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isMarkedDestroyed_10() const { return ___isMarkedDestroyed_10; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isMarkedDestroyed_10() { return &___isMarkedDestroyed_10; }
	inline void set_isMarkedDestroyed_10(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isMarkedDestroyed_10 = value;
	}

	inline static int32_t get_offset_of_disposed_11() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___disposed_11)); }
	inline bool get_disposed_11() const { return ___disposed_11; }
	inline bool* get_address_of_disposed_11() { return &___disposed_11; }
	inline void set_disposed_11(bool value)
	{
		___disposed_11 = value;
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


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderState
struct CameraFaderState_t8B99D77E75F45B24C223E5E6A065F52B4B704470 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraFaderState_t8B99D77E75F45B24C223E5E6A065F52B4B704470, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderTargets
struct CameraFaderTargets_tE48BB4CBFBF51E8983C0BB45CCA3CD47152F9170 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderTargets::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraFaderTargets_tE48BB4CBFBF51E8983C0BB45CCA3CD47152F9170, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// UnityEngine.SceneManagement.LoadSceneMode
struct LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC, ___value___2)); }
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


// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
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

// UnityEngine.PrimitiveType
struct PrimitiveType_t0E20B7B2F4ABBD14BAE02F0444EE003C6479E93E 
{
public:
	// System.Int32 UnityEngine.PrimitiveType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PrimitiveType_t0E20B7B2F4ABBD14BAE02F0444EE003C6479E93E, ___value___2)); }
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


// Microsoft.MixedReality.Toolkit.UI.ProgressIndicatorState
struct ProgressIndicatorState_tEBEFA92CBF739A88CB9BE237D817F995B543E285 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.ProgressIndicatorState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProgressIndicatorState_tEBEFA92CBF739A88CB9BE237D817F995B543E285, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderMode
struct RenderMode_tFF8E9ABC771ACEBD5ACC2D9DFB02264E0EA6CDBF 
{
public:
	// System.Int32 UnityEngine.RenderMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderMode_tFF8E9ABC771ACEBD5ACC2D9DFB02264E0EA6CDBF, ___value___2)); }
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

// Microsoft.MixedReality.Toolkit.BaseExtensionService
struct BaseExtensionService_t4B2A1112509F645C2FA38479075967B1918EAC97  : public BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseExtensionService::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseExtensionService_t4B2A1112509F645C2FA38479075967B1918EAC97, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad
struct CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderState Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad> Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::quads
	Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4 * ___quads_3;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::fadeOutColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___fadeOutColor_4;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::fadeInColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___fadeInColor_5;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::currentColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___currentColor_6;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::quadMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___quadMaterial_7;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::quadMaterialTemplate
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___quadMaterialTemplate_8;

public:
	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409, ___U3CStateU3Ek__BackingField_2)); }
	inline int32_t get_U3CStateU3Ek__BackingField_2() const { return ___U3CStateU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_2() { return &___U3CStateU3Ek__BackingField_2; }
	inline void set_U3CStateU3Ek__BackingField_2(int32_t value)
	{
		___U3CStateU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_quads_3() { return static_cast<int32_t>(offsetof(CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409, ___quads_3)); }
	inline Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4 * get_quads_3() const { return ___quads_3; }
	inline Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4 ** get_address_of_quads_3() { return &___quads_3; }
	inline void set_quads_3(Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4 * value)
	{
		___quads_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___quads_3), (void*)value);
	}

	inline static int32_t get_offset_of_fadeOutColor_4() { return static_cast<int32_t>(offsetof(CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409, ___fadeOutColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_fadeOutColor_4() const { return ___fadeOutColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_fadeOutColor_4() { return &___fadeOutColor_4; }
	inline void set_fadeOutColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___fadeOutColor_4 = value;
	}

	inline static int32_t get_offset_of_fadeInColor_5() { return static_cast<int32_t>(offsetof(CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409, ___fadeInColor_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_fadeInColor_5() const { return ___fadeInColor_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_fadeInColor_5() { return &___fadeInColor_5; }
	inline void set_fadeInColor_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___fadeInColor_5 = value;
	}

	inline static int32_t get_offset_of_currentColor_6() { return static_cast<int32_t>(offsetof(CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409, ___currentColor_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_currentColor_6() const { return ___currentColor_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_currentColor_6() { return &___currentColor_6; }
	inline void set_currentColor_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___currentColor_6 = value;
	}

	inline static int32_t get_offset_of_quadMaterial_7() { return static_cast<int32_t>(offsetof(CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409, ___quadMaterial_7)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_quadMaterial_7() const { return ___quadMaterial_7; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_quadMaterial_7() { return &___quadMaterial_7; }
	inline void set_quadMaterial_7(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___quadMaterial_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___quadMaterial_7), (void*)value);
	}

	inline static int32_t get_offset_of_quadMaterialTemplate_8() { return static_cast<int32_t>(offsetof(CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409, ___quadMaterialTemplate_8)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_quadMaterialTemplate_8() const { return ___quadMaterialTemplate_8; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_quadMaterialTemplate_8() { return &___quadMaterialTemplate_8; }
	inline void set_quadMaterialTemplate_8(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___quadMaterialTemplate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___quadMaterialTemplate_8), (void*)value);
	}
};

struct CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::FadeOutAsyncPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___FadeOutAsyncPerfMarker_9;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::FadeInAsyncPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___FadeInAsyncPerfMarker_10;

public:
	inline static int32_t get_offset_of_FadeOutAsyncPerfMarker_9() { return static_cast<int32_t>(offsetof(CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409_StaticFields, ___FadeOutAsyncPerfMarker_9)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_FadeOutAsyncPerfMarker_9() const { return ___FadeOutAsyncPerfMarker_9; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_FadeOutAsyncPerfMarker_9() { return &___FadeOutAsyncPerfMarker_9; }
	inline void set_FadeOutAsyncPerfMarker_9(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___FadeOutAsyncPerfMarker_9 = value;
	}

	inline static int32_t get_offset_of_FadeInAsyncPerfMarker_10() { return static_cast<int32_t>(offsetof(CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409_StaticFields, ___FadeInAsyncPerfMarker_10)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_FadeInAsyncPerfMarker_10() const { return ___FadeInAsyncPerfMarker_10; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_FadeInAsyncPerfMarker_10() { return &___FadeInAsyncPerfMarker_10; }
	inline void set_FadeInAsyncPerfMarker_10(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___FadeInAsyncPerfMarker_10 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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

// Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo
struct SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD 
{
public:
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Name
	String_t* ___Name_1;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Path
	String_t* ___Path_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Included
	bool ___Included_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::BuildIndex
	int32_t ___BuildIndex_4;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Tag
	String_t* ___Tag_5;
	// UnityEngine.Object Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Asset
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___Asset_6;

public:
	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_1), (void*)value);
	}

	inline static int32_t get_offset_of_Path_2() { return static_cast<int32_t>(offsetof(SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD, ___Path_2)); }
	inline String_t* get_Path_2() const { return ___Path_2; }
	inline String_t** get_address_of_Path_2() { return &___Path_2; }
	inline void set_Path_2(String_t* value)
	{
		___Path_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Path_2), (void*)value);
	}

	inline static int32_t get_offset_of_Included_3() { return static_cast<int32_t>(offsetof(SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD, ___Included_3)); }
	inline bool get_Included_3() const { return ___Included_3; }
	inline bool* get_address_of_Included_3() { return &___Included_3; }
	inline void set_Included_3(bool value)
	{
		___Included_3 = value;
	}

	inline static int32_t get_offset_of_BuildIndex_4() { return static_cast<int32_t>(offsetof(SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD, ___BuildIndex_4)); }
	inline int32_t get_BuildIndex_4() const { return ___BuildIndex_4; }
	inline int32_t* get_address_of_BuildIndex_4() { return &___BuildIndex_4; }
	inline void set_BuildIndex_4(int32_t value)
	{
		___BuildIndex_4 = value;
	}

	inline static int32_t get_offset_of_Tag_5() { return static_cast<int32_t>(offsetof(SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD, ___Tag_5)); }
	inline String_t* get_Tag_5() const { return ___Tag_5; }
	inline String_t** get_address_of_Tag_5() { return &___Tag_5; }
	inline void set_Tag_5(String_t* value)
	{
		___Tag_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tag_5), (void*)value);
	}

	inline static int32_t get_offset_of_Asset_6() { return static_cast<int32_t>(offsetof(SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD, ___Asset_6)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_Asset_6() const { return ___Asset_6; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_Asset_6() { return &___Asset_6; }
	inline void set_Asset_6(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___Asset_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Asset_6), (void*)value);
	}
};

struct SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::empty
	SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD  ___empty_0;

public:
	inline static int32_t get_offset_of_empty_0() { return static_cast<int32_t>(offsetof(SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD_StaticFields, ___empty_0)); }
	inline SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD  get_empty_0() const { return ___empty_0; }
	inline SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD * get_address_of_empty_0() { return &___empty_0; }
	inline void set_empty_0(SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD  value)
	{
		___empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___empty_0))->___Name_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___empty_0))->___Path_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___empty_0))->___Tag_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___empty_0))->___Asset_6), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo
struct SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD_marshaled_pinvoke
{
	char* ___Name_1;
	char* ___Path_2;
	int32_t ___Included_3;
	int32_t ___BuildIndex_4;
	char* ___Tag_5;
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke ___Asset_6;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo
struct SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD_marshaled_com
{
	Il2CppChar* ___Name_1;
	Il2CppChar* ___Path_2;
	int32_t ___Included_3;
	int32_t ___BuildIndex_4;
	Il2CppChar* ___Tag_5;
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com* ___Asset_6;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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


// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService
struct SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312  : public BaseExtensionService_t4B2A1112509F645C2FA38479075967B1918EAC97
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::<UseFadeColor>k__BackingField
	bool ___U3CUseFadeColorU3Ek__BackingField_15;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::<FadeColor>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CFadeColorU3Ek__BackingField_16;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::<FadeInTime>k__BackingField
	float ___U3CFadeInTimeU3Ek__BackingField_17;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::<FadeOutTime>k__BackingField
	float ___U3CFadeOutTimeU3Ek__BackingField_18;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderTargets Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::<FadeTargets>k__BackingField
	int32_t ___U3CFadeTargetsU3Ek__BackingField_19;
	// System.Action Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::<OnTransitionStarted>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3COnTransitionStartedU3Ek__BackingField_20;
	// System.Action Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::<OnTransitionCompleted>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3COnTransitionCompletedU3Ek__BackingField_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::<TransitionInProgress>k__BackingField
	bool ___U3CTransitionInProgressU3Ek__BackingField_22;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::<TransitionProgress>k__BackingField
	float ___U3CTransitionProgressU3Ek__BackingField_23;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::sceneTransitionServiceProfile
	SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * ___sceneTransitionServiceProfile_24;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::progressIndicatorObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___progressIndicatorObject_25;
	// Microsoft.MixedReality.Toolkit.UI.IProgressIndicator Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::defaultProgressIndicator
	RuntimeObject* ___defaultProgressIndicator_26;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.ICameraFader Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::cameraFader
	RuntimeObject* ___cameraFader_27;
	// System.Collections.Generic.List`1<UnityEngine.Camera> Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::customFadeTargetCameras
	List_1_t653022B4EDCE73F282430E1A396635798D309409 * ___customFadeTargetCameras_28;

public:
	inline static int32_t get_offset_of_U3CUseFadeColorU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312, ___U3CUseFadeColorU3Ek__BackingField_15)); }
	inline bool get_U3CUseFadeColorU3Ek__BackingField_15() const { return ___U3CUseFadeColorU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CUseFadeColorU3Ek__BackingField_15() { return &___U3CUseFadeColorU3Ek__BackingField_15; }
	inline void set_U3CUseFadeColorU3Ek__BackingField_15(bool value)
	{
		___U3CUseFadeColorU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CFadeColorU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312, ___U3CFadeColorU3Ek__BackingField_16)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CFadeColorU3Ek__BackingField_16() const { return ___U3CFadeColorU3Ek__BackingField_16; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CFadeColorU3Ek__BackingField_16() { return &___U3CFadeColorU3Ek__BackingField_16; }
	inline void set_U3CFadeColorU3Ek__BackingField_16(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CFadeColorU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CFadeInTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312, ___U3CFadeInTimeU3Ek__BackingField_17)); }
	inline float get_U3CFadeInTimeU3Ek__BackingField_17() const { return ___U3CFadeInTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CFadeInTimeU3Ek__BackingField_17() { return &___U3CFadeInTimeU3Ek__BackingField_17; }
	inline void set_U3CFadeInTimeU3Ek__BackingField_17(float value)
	{
		___U3CFadeInTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CFadeOutTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312, ___U3CFadeOutTimeU3Ek__BackingField_18)); }
	inline float get_U3CFadeOutTimeU3Ek__BackingField_18() const { return ___U3CFadeOutTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CFadeOutTimeU3Ek__BackingField_18() { return &___U3CFadeOutTimeU3Ek__BackingField_18; }
	inline void set_U3CFadeOutTimeU3Ek__BackingField_18(float value)
	{
		___U3CFadeOutTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CFadeTargetsU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312, ___U3CFadeTargetsU3Ek__BackingField_19)); }
	inline int32_t get_U3CFadeTargetsU3Ek__BackingField_19() const { return ___U3CFadeTargetsU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CFadeTargetsU3Ek__BackingField_19() { return &___U3CFadeTargetsU3Ek__BackingField_19; }
	inline void set_U3CFadeTargetsU3Ek__BackingField_19(int32_t value)
	{
		___U3CFadeTargetsU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3COnTransitionStartedU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312, ___U3COnTransitionStartedU3Ek__BackingField_20)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3COnTransitionStartedU3Ek__BackingField_20() const { return ___U3COnTransitionStartedU3Ek__BackingField_20; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3COnTransitionStartedU3Ek__BackingField_20() { return &___U3COnTransitionStartedU3Ek__BackingField_20; }
	inline void set_U3COnTransitionStartedU3Ek__BackingField_20(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3COnTransitionStartedU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnTransitionStartedU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnTransitionCompletedU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312, ___U3COnTransitionCompletedU3Ek__BackingField_21)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3COnTransitionCompletedU3Ek__BackingField_21() const { return ___U3COnTransitionCompletedU3Ek__BackingField_21; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3COnTransitionCompletedU3Ek__BackingField_21() { return &___U3COnTransitionCompletedU3Ek__BackingField_21; }
	inline void set_U3COnTransitionCompletedU3Ek__BackingField_21(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3COnTransitionCompletedU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnTransitionCompletedU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTransitionInProgressU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312, ___U3CTransitionInProgressU3Ek__BackingField_22)); }
	inline bool get_U3CTransitionInProgressU3Ek__BackingField_22() const { return ___U3CTransitionInProgressU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CTransitionInProgressU3Ek__BackingField_22() { return &___U3CTransitionInProgressU3Ek__BackingField_22; }
	inline void set_U3CTransitionInProgressU3Ek__BackingField_22(bool value)
	{
		___U3CTransitionInProgressU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CTransitionProgressU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312, ___U3CTransitionProgressU3Ek__BackingField_23)); }
	inline float get_U3CTransitionProgressU3Ek__BackingField_23() const { return ___U3CTransitionProgressU3Ek__BackingField_23; }
	inline float* get_address_of_U3CTransitionProgressU3Ek__BackingField_23() { return &___U3CTransitionProgressU3Ek__BackingField_23; }
	inline void set_U3CTransitionProgressU3Ek__BackingField_23(float value)
	{
		___U3CTransitionProgressU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_sceneTransitionServiceProfile_24() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312, ___sceneTransitionServiceProfile_24)); }
	inline SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * get_sceneTransitionServiceProfile_24() const { return ___sceneTransitionServiceProfile_24; }
	inline SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 ** get_address_of_sceneTransitionServiceProfile_24() { return &___sceneTransitionServiceProfile_24; }
	inline void set_sceneTransitionServiceProfile_24(SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * value)
	{
		___sceneTransitionServiceProfile_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneTransitionServiceProfile_24), (void*)value);
	}

	inline static int32_t get_offset_of_progressIndicatorObject_25() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312, ___progressIndicatorObject_25)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_progressIndicatorObject_25() const { return ___progressIndicatorObject_25; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_progressIndicatorObject_25() { return &___progressIndicatorObject_25; }
	inline void set_progressIndicatorObject_25(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___progressIndicatorObject_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progressIndicatorObject_25), (void*)value);
	}

	inline static int32_t get_offset_of_defaultProgressIndicator_26() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312, ___defaultProgressIndicator_26)); }
	inline RuntimeObject* get_defaultProgressIndicator_26() const { return ___defaultProgressIndicator_26; }
	inline RuntimeObject** get_address_of_defaultProgressIndicator_26() { return &___defaultProgressIndicator_26; }
	inline void set_defaultProgressIndicator_26(RuntimeObject* value)
	{
		___defaultProgressIndicator_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultProgressIndicator_26), (void*)value);
	}

	inline static int32_t get_offset_of_cameraFader_27() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312, ___cameraFader_27)); }
	inline RuntimeObject* get_cameraFader_27() const { return ___cameraFader_27; }
	inline RuntimeObject** get_address_of_cameraFader_27() { return &___cameraFader_27; }
	inline void set_cameraFader_27(RuntimeObject* value)
	{
		___cameraFader_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraFader_27), (void*)value);
	}

	inline static int32_t get_offset_of_customFadeTargetCameras_28() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312, ___customFadeTargetCameras_28)); }
	inline List_1_t653022B4EDCE73F282430E1A396635798D309409 * get_customFadeTargetCameras_28() const { return ___customFadeTargetCameras_28; }
	inline List_1_t653022B4EDCE73F282430E1A396635798D309409 ** get_address_of_customFadeTargetCameras_28() { return &___customFadeTargetCameras_28; }
	inline void set_customFadeTargetCameras_28(List_1_t653022B4EDCE73F282430E1A396635798D309409 * value)
	{
		___customFadeTargetCameras_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customFadeTargetCameras_28), (void*)value);
	}
};

struct SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::DoSceneTransitionPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DoSceneTransitionPerfMarker_29;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::FadeOutPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___FadeOutPerfMarker_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::FadeInPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___FadeInPerfMarker_31;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::ShowDefaultProgressIndicatorPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ShowDefaultProgressIndicatorPerfMarker_32;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::HideProgressIndicatorPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HideProgressIndicatorPerfMarker_33;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::GatherFadeTargetCamerasPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GatherFadeTargetCamerasPerfMarker_34;

public:
	inline static int32_t get_offset_of_DoSceneTransitionPerfMarker_29() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_StaticFields, ___DoSceneTransitionPerfMarker_29)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DoSceneTransitionPerfMarker_29() const { return ___DoSceneTransitionPerfMarker_29; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DoSceneTransitionPerfMarker_29() { return &___DoSceneTransitionPerfMarker_29; }
	inline void set_DoSceneTransitionPerfMarker_29(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DoSceneTransitionPerfMarker_29 = value;
	}

	inline static int32_t get_offset_of_FadeOutPerfMarker_30() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_StaticFields, ___FadeOutPerfMarker_30)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_FadeOutPerfMarker_30() const { return ___FadeOutPerfMarker_30; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_FadeOutPerfMarker_30() { return &___FadeOutPerfMarker_30; }
	inline void set_FadeOutPerfMarker_30(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___FadeOutPerfMarker_30 = value;
	}

	inline static int32_t get_offset_of_FadeInPerfMarker_31() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_StaticFields, ___FadeInPerfMarker_31)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_FadeInPerfMarker_31() const { return ___FadeInPerfMarker_31; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_FadeInPerfMarker_31() { return &___FadeInPerfMarker_31; }
	inline void set_FadeInPerfMarker_31(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___FadeInPerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_ShowDefaultProgressIndicatorPerfMarker_32() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_StaticFields, ___ShowDefaultProgressIndicatorPerfMarker_32)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ShowDefaultProgressIndicatorPerfMarker_32() const { return ___ShowDefaultProgressIndicatorPerfMarker_32; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ShowDefaultProgressIndicatorPerfMarker_32() { return &___ShowDefaultProgressIndicatorPerfMarker_32; }
	inline void set_ShowDefaultProgressIndicatorPerfMarker_32(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ShowDefaultProgressIndicatorPerfMarker_32 = value;
	}

	inline static int32_t get_offset_of_HideProgressIndicatorPerfMarker_33() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_StaticFields, ___HideProgressIndicatorPerfMarker_33)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HideProgressIndicatorPerfMarker_33() const { return ___HideProgressIndicatorPerfMarker_33; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HideProgressIndicatorPerfMarker_33() { return &___HideProgressIndicatorPerfMarker_33; }
	inline void set_HideProgressIndicatorPerfMarker_33(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HideProgressIndicatorPerfMarker_33 = value;
	}

	inline static int32_t get_offset_of_GatherFadeTargetCamerasPerfMarker_34() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_StaticFields, ___GatherFadeTargetCamerasPerfMarker_34)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GatherFadeTargetCamerasPerfMarker_34() const { return ___GatherFadeTargetCamerasPerfMarker_34; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GatherFadeTargetCamerasPerfMarker_34() { return &___GatherFadeTargetCamerasPerfMarker_34; }
	inline void set_GatherFadeTargetCamerasPerfMarker_34(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GatherFadeTargetCamerasPerfMarker_34 = value;
	}
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeInAsync>d__17
struct U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeInAsync>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeInAsync>d__17::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeInAsync>d__17::fadeInTime
	float ___fadeInTime_2;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeInAsync>d__17::<>4__this
	CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * ___U3CU3E4__this_3;
	// Unity.Profiling.ProfilerMarker/AutoScope Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeInAsync>d__17::<>s__1
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ___U3CU3Es__1_4;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeInAsync>d__17::<fadeAmount>5__2
	float ___U3CfadeAmountU3E5__2_5;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderState Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeInAsync>d__17::<>s__3
	int32_t ___U3CU3Es__3_6;
	// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad> Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeInAsync>d__17::<>s__4
	Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000  ___U3CU3Es__4_7;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeInAsync>d__17::<quad>5__5
	Quad_t5B5564685E1EC46AF269743F2349796C7724911B  ___U3CquadU3E5__5_8;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeInAsync>d__17::<>u__1
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  ___U3CU3Eu__1_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_fadeInTime_2() { return static_cast<int32_t>(offsetof(U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2, ___fadeInTime_2)); }
	inline float get_fadeInTime_2() const { return ___fadeInTime_2; }
	inline float* get_address_of_fadeInTime_2() { return &___fadeInTime_2; }
	inline void set_fadeInTime_2(float value)
	{
		___fadeInTime_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2, ___U3CU3E4__this_3)); }
	inline CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_4() { return static_cast<int32_t>(offsetof(U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2, ___U3CU3Es__1_4)); }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  get_U3CU3Es__1_4() const { return ___U3CU3Es__1_4; }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * get_address_of_U3CU3Es__1_4() { return &___U3CU3Es__1_4; }
	inline void set_U3CU3Es__1_4(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  value)
	{
		___U3CU3Es__1_4 = value;
	}

	inline static int32_t get_offset_of_U3CfadeAmountU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2, ___U3CfadeAmountU3E5__2_5)); }
	inline float get_U3CfadeAmountU3E5__2_5() const { return ___U3CfadeAmountU3E5__2_5; }
	inline float* get_address_of_U3CfadeAmountU3E5__2_5() { return &___U3CfadeAmountU3E5__2_5; }
	inline void set_U3CfadeAmountU3E5__2_5(float value)
	{
		___U3CfadeAmountU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3Es__3_6() { return static_cast<int32_t>(offsetof(U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2, ___U3CU3Es__3_6)); }
	inline int32_t get_U3CU3Es__3_6() const { return ___U3CU3Es__3_6; }
	inline int32_t* get_address_of_U3CU3Es__3_6() { return &___U3CU3Es__3_6; }
	inline void set_U3CU3Es__3_6(int32_t value)
	{
		___U3CU3Es__3_6 = value;
	}

	inline static int32_t get_offset_of_U3CU3Es__4_7() { return static_cast<int32_t>(offsetof(U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2, ___U3CU3Es__4_7)); }
	inline Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000  get_U3CU3Es__4_7() const { return ___U3CU3Es__4_7; }
	inline Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000 * get_address_of_U3CU3Es__4_7() { return &___U3CU3Es__4_7; }
	inline void set_U3CU3Es__4_7(Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000  value)
	{
		___U3CU3Es__4_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Es__4_7))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Es__4_7))->___currentValue_3))->___Renderer_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Es__4_7))->___currentValue_3))->___PropertyBlock_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CquadU3E5__5_8() { return static_cast<int32_t>(offsetof(U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2, ___U3CquadU3E5__5_8)); }
	inline Quad_t5B5564685E1EC46AF269743F2349796C7724911B  get_U3CquadU3E5__5_8() const { return ___U3CquadU3E5__5_8; }
	inline Quad_t5B5564685E1EC46AF269743F2349796C7724911B * get_address_of_U3CquadU3E5__5_8() { return &___U3CquadU3E5__5_8; }
	inline void set_U3CquadU3E5__5_8(Quad_t5B5564685E1EC46AF269743F2349796C7724911B  value)
	{
		___U3CquadU3E5__5_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CquadU3E5__5_8))->___Renderer_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CquadU3E5__5_8))->___PropertyBlock_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_9() { return static_cast<int32_t>(offsetof(U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2, ___U3CU3Eu__1_9)); }
	inline YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  get_U3CU3Eu__1_9() const { return ___U3CU3Eu__1_9; }
	inline YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * get_address_of_U3CU3Eu__1_9() { return &___U3CU3Eu__1_9; }
	inline void set_U3CU3Eu__1_9(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  value)
	{
		___U3CU3Eu__1_9 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15
struct U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15::fadeOutTime
	float ___fadeOutTime_2;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_3;
	// System.Collections.Generic.IEnumerable`1<UnityEngine.Camera> Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15::targets
	RuntimeObject* ___targets_4;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15::<>4__this
	CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * ___U3CU3E4__this_5;
	// Unity.Profiling.ProfilerMarker/AutoScope Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15::<>s__1
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ___U3CU3Es__1_6;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15::<fadeAmount>5__2
	float ___U3CfadeAmountU3E5__2_7;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderState Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15::<>s__3
	int32_t ___U3CU3Es__3_8;
	// System.Exception Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15::<e>5__4
	Exception_t * ___U3CeU3E5__4_9;
	// System.Collections.Generic.IEnumerator`1<UnityEngine.Camera> Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15::<>s__5
	RuntimeObject* ___U3CU3Es__5_10;
	// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15::<camera>5__6
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___U3CcameraU3E5__6_11;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15::<quad>5__7
	Quad_t5B5564685E1EC46AF269743F2349796C7724911B  ___U3CquadU3E5__7_12;
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15::<layer>5__8
	int32_t ___U3ClayerU3E5__8_13;
	// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad> Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15::<>s__9
	Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000  ___U3CU3Es__9_14;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15::<quad>5__10
	Quad_t5B5564685E1EC46AF269743F2349796C7724911B  ___U3CquadU3E5__10_15;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15::<>u__1
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  ___U3CU3Eu__1_16;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_fadeOutTime_2() { return static_cast<int32_t>(offsetof(U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E, ___fadeOutTime_2)); }
	inline float get_fadeOutTime_2() const { return ___fadeOutTime_2; }
	inline float* get_address_of_fadeOutTime_2() { return &___fadeOutTime_2; }
	inline void set_fadeOutTime_2(float value)
	{
		___fadeOutTime_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E, ___color_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_3() const { return ___color_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_targets_4() { return static_cast<int32_t>(offsetof(U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E, ___targets_4)); }
	inline RuntimeObject* get_targets_4() const { return ___targets_4; }
	inline RuntimeObject** get_address_of_targets_4() { return &___targets_4; }
	inline void set_targets_4(RuntimeObject* value)
	{
		___targets_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targets_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E, ___U3CU3E4__this_5)); }
	inline CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_6() { return static_cast<int32_t>(offsetof(U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E, ___U3CU3Es__1_6)); }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  get_U3CU3Es__1_6() const { return ___U3CU3Es__1_6; }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * get_address_of_U3CU3Es__1_6() { return &___U3CU3Es__1_6; }
	inline void set_U3CU3Es__1_6(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  value)
	{
		___U3CU3Es__1_6 = value;
	}

	inline static int32_t get_offset_of_U3CfadeAmountU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E, ___U3CfadeAmountU3E5__2_7)); }
	inline float get_U3CfadeAmountU3E5__2_7() const { return ___U3CfadeAmountU3E5__2_7; }
	inline float* get_address_of_U3CfadeAmountU3E5__2_7() { return &___U3CfadeAmountU3E5__2_7; }
	inline void set_U3CfadeAmountU3E5__2_7(float value)
	{
		___U3CfadeAmountU3E5__2_7 = value;
	}

	inline static int32_t get_offset_of_U3CU3Es__3_8() { return static_cast<int32_t>(offsetof(U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E, ___U3CU3Es__3_8)); }
	inline int32_t get_U3CU3Es__3_8() const { return ___U3CU3Es__3_8; }
	inline int32_t* get_address_of_U3CU3Es__3_8() { return &___U3CU3Es__3_8; }
	inline void set_U3CU3Es__3_8(int32_t value)
	{
		___U3CU3Es__3_8 = value;
	}

	inline static int32_t get_offset_of_U3CeU3E5__4_9() { return static_cast<int32_t>(offsetof(U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E, ___U3CeU3E5__4_9)); }
	inline Exception_t * get_U3CeU3E5__4_9() const { return ___U3CeU3E5__4_9; }
	inline Exception_t ** get_address_of_U3CeU3E5__4_9() { return &___U3CeU3E5__4_9; }
	inline void set_U3CeU3E5__4_9(Exception_t * value)
	{
		___U3CeU3E5__4_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CeU3E5__4_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__5_10() { return static_cast<int32_t>(offsetof(U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E, ___U3CU3Es__5_10)); }
	inline RuntimeObject* get_U3CU3Es__5_10() const { return ___U3CU3Es__5_10; }
	inline RuntimeObject** get_address_of_U3CU3Es__5_10() { return &___U3CU3Es__5_10; }
	inline void set_U3CU3Es__5_10(RuntimeObject* value)
	{
		___U3CU3Es__5_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__5_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcameraU3E5__6_11() { return static_cast<int32_t>(offsetof(U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E, ___U3CcameraU3E5__6_11)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_U3CcameraU3E5__6_11() const { return ___U3CcameraU3E5__6_11; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_U3CcameraU3E5__6_11() { return &___U3CcameraU3E5__6_11; }
	inline void set_U3CcameraU3E5__6_11(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___U3CcameraU3E5__6_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcameraU3E5__6_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CquadU3E5__7_12() { return static_cast<int32_t>(offsetof(U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E, ___U3CquadU3E5__7_12)); }
	inline Quad_t5B5564685E1EC46AF269743F2349796C7724911B  get_U3CquadU3E5__7_12() const { return ___U3CquadU3E5__7_12; }
	inline Quad_t5B5564685E1EC46AF269743F2349796C7724911B * get_address_of_U3CquadU3E5__7_12() { return &___U3CquadU3E5__7_12; }
	inline void set_U3CquadU3E5__7_12(Quad_t5B5564685E1EC46AF269743F2349796C7724911B  value)
	{
		___U3CquadU3E5__7_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CquadU3E5__7_12))->___Renderer_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CquadU3E5__7_12))->___PropertyBlock_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3ClayerU3E5__8_13() { return static_cast<int32_t>(offsetof(U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E, ___U3ClayerU3E5__8_13)); }
	inline int32_t get_U3ClayerU3E5__8_13() const { return ___U3ClayerU3E5__8_13; }
	inline int32_t* get_address_of_U3ClayerU3E5__8_13() { return &___U3ClayerU3E5__8_13; }
	inline void set_U3ClayerU3E5__8_13(int32_t value)
	{
		___U3ClayerU3E5__8_13 = value;
	}

	inline static int32_t get_offset_of_U3CU3Es__9_14() { return static_cast<int32_t>(offsetof(U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E, ___U3CU3Es__9_14)); }
	inline Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000  get_U3CU3Es__9_14() const { return ___U3CU3Es__9_14; }
	inline Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000 * get_address_of_U3CU3Es__9_14() { return &___U3CU3Es__9_14; }
	inline void set_U3CU3Es__9_14(Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000  value)
	{
		___U3CU3Es__9_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Es__9_14))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Es__9_14))->___currentValue_3))->___Renderer_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Es__9_14))->___currentValue_3))->___PropertyBlock_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CquadU3E5__10_15() { return static_cast<int32_t>(offsetof(U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E, ___U3CquadU3E5__10_15)); }
	inline Quad_t5B5564685E1EC46AF269743F2349796C7724911B  get_U3CquadU3E5__10_15() const { return ___U3CquadU3E5__10_15; }
	inline Quad_t5B5564685E1EC46AF269743F2349796C7724911B * get_address_of_U3CquadU3E5__10_15() { return &___U3CquadU3E5__10_15; }
	inline void set_U3CquadU3E5__10_15(Quad_t5B5564685E1EC46AF269743F2349796C7724911B  value)
	{
		___U3CquadU3E5__10_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CquadU3E5__10_15))->___Renderer_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CquadU3E5__10_15))->___PropertyBlock_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_16() { return static_cast<int32_t>(offsetof(U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E, ___U3CU3Eu__1_16)); }
	inline YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  get_U3CU3Eu__1_16() const { return ___U3CU3Eu__1_16; }
	inline YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * get_address_of_U3CU3Eu__1_16() { return &___U3CU3Eu__1_16; }
	inline void set_U3CU3Eu__1_16(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  value)
	{
		___U3CU3Eu__1_16 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__48
struct U3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__48::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__48::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.Func`1<System.Threading.Tasks.Task> Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__48::sceneOperation
	Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * ___sceneOperation_2;
	// Microsoft.MixedReality.Toolkit.UI.IProgressIndicator Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__48::progressIndicator
	RuntimeObject* ___progressIndicator_3;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__48::<>4__this
	SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * ___U3CU3E4__this_4;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__48::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_sceneOperation_2() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F, ___sceneOperation_2)); }
	inline Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * get_sceneOperation_2() const { return ___sceneOperation_2; }
	inline Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 ** get_address_of_sceneOperation_2() { return &___sceneOperation_2; }
	inline void set_sceneOperation_2(Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * value)
	{
		___sceneOperation_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneOperation_2), (void*)value);
	}

	inline static int32_t get_offset_of_progressIndicator_3() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F, ___progressIndicator_3)); }
	inline RuntimeObject* get_progressIndicator_3() const { return ___progressIndicator_3; }
	inline RuntimeObject** get_address_of_progressIndicator_3() { return &___progressIndicator_3; }
	inline void set_progressIndicator_3(RuntimeObject* value)
	{
		___progressIndicator_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progressIndicator_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F, ___U3CU3E4__this_4)); }
	inline SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F, ___U3CU3Eu__1_5)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__49
struct U3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__49::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__49::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.Func`1<System.Threading.Tasks.Task> Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__49::sceneOp1
	Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * ___sceneOp1_2;
	// System.Func`1<System.Threading.Tasks.Task> Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__49::sceneOp2
	Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * ___sceneOp2_3;
	// Microsoft.MixedReality.Toolkit.UI.IProgressIndicator Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__49::progressIndicator
	RuntimeObject* ___progressIndicator_4;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__49::<>4__this
	SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * ___U3CU3E4__this_5;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__49::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_sceneOp1_2() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7, ___sceneOp1_2)); }
	inline Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * get_sceneOp1_2() const { return ___sceneOp1_2; }
	inline Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 ** get_address_of_sceneOp1_2() { return &___sceneOp1_2; }
	inline void set_sceneOp1_2(Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * value)
	{
		___sceneOp1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneOp1_2), (void*)value);
	}

	inline static int32_t get_offset_of_sceneOp2_3() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7, ___sceneOp2_3)); }
	inline Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * get_sceneOp2_3() const { return ___sceneOp2_3; }
	inline Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 ** get_address_of_sceneOp2_3() { return &___sceneOp2_3; }
	inline void set_sceneOp2_3(Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * value)
	{
		___sceneOp2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneOp2_3), (void*)value);
	}

	inline static int32_t get_offset_of_progressIndicator_4() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7, ___progressIndicator_4)); }
	inline RuntimeObject* get_progressIndicator_4() const { return ___progressIndicator_4; }
	inline RuntimeObject** get_address_of_progressIndicator_4() { return &___progressIndicator_4; }
	inline void set_progressIndicator_4(RuntimeObject* value)
	{
		___progressIndicator_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progressIndicator_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7, ___U3CU3E4__this_5)); }
	inline SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7, ___U3CU3Eu__1_6)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__50
struct U3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__50::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__50::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.Collections.Generic.IEnumerable`1<System.Func`1<System.Threading.Tasks.Task>> Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__50::sceneOperations
	RuntimeObject* ___sceneOperations_2;
	// Microsoft.MixedReality.Toolkit.UI.IProgressIndicator Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__50::progressIndicator
	RuntimeObject* ___progressIndicator_3;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__50::<>4__this
	SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * ___U3CU3E4__this_4;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__50::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_sceneOperations_2() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309, ___sceneOperations_2)); }
	inline RuntimeObject* get_sceneOperations_2() const { return ___sceneOperations_2; }
	inline RuntimeObject** get_address_of_sceneOperations_2() { return &___sceneOperations_2; }
	inline void set_sceneOperations_2(RuntimeObject* value)
	{
		___sceneOperations_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneOperations_2), (void*)value);
	}

	inline static int32_t get_offset_of_progressIndicator_3() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309, ___progressIndicator_3)); }
	inline RuntimeObject* get_progressIndicator_3() const { return ___progressIndicator_3; }
	inline RuntimeObject** get_address_of_progressIndicator_3() { return &___progressIndicator_3; }
	inline void set_progressIndicator_3(RuntimeObject* value)
	{
		___progressIndicator_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progressIndicator_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309, ___U3CU3E4__this_4)); }
	inline SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309, ___U3CU3Eu__1_5)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52
struct U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.Collections.Generic.IEnumerable`1<System.Func`1<System.Threading.Tasks.Task>> Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52::sceneOperations
	RuntimeObject* ___sceneOperations_2;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52::fadeOutTime
	float ___fadeOutTime_3;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52::fadeInTime
	float ___fadeInTime_4;
	// Microsoft.MixedReality.Toolkit.UI.IProgressIndicator Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52::progressIndicator
	RuntimeObject* ___progressIndicator_5;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52::<>4__this
	SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * ___U3CU3E4__this_6;
	// Unity.Profiling.ProfilerMarker/AutoScope Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52::<>s__1
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ___U3CU3Es__1_7;
	// System.Collections.Generic.IEnumerator`1<System.Func`1<System.Threading.Tasks.Task>> Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52::<>s__2
	RuntimeObject* ___U3CU3Es__2_8;
	// System.Func`1<System.Threading.Tasks.Task> Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52::<sceneOperation>5__3
	Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * ___U3CsceneOperationU3E5__3_9;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_10;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_sceneOperations_2() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2, ___sceneOperations_2)); }
	inline RuntimeObject* get_sceneOperations_2() const { return ___sceneOperations_2; }
	inline RuntimeObject** get_address_of_sceneOperations_2() { return &___sceneOperations_2; }
	inline void set_sceneOperations_2(RuntimeObject* value)
	{
		___sceneOperations_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneOperations_2), (void*)value);
	}

	inline static int32_t get_offset_of_fadeOutTime_3() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2, ___fadeOutTime_3)); }
	inline float get_fadeOutTime_3() const { return ___fadeOutTime_3; }
	inline float* get_address_of_fadeOutTime_3() { return &___fadeOutTime_3; }
	inline void set_fadeOutTime_3(float value)
	{
		___fadeOutTime_3 = value;
	}

	inline static int32_t get_offset_of_fadeInTime_4() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2, ___fadeInTime_4)); }
	inline float get_fadeInTime_4() const { return ___fadeInTime_4; }
	inline float* get_address_of_fadeInTime_4() { return &___fadeInTime_4; }
	inline void set_fadeInTime_4(float value)
	{
		___fadeInTime_4 = value;
	}

	inline static int32_t get_offset_of_progressIndicator_5() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2, ___progressIndicator_5)); }
	inline RuntimeObject* get_progressIndicator_5() const { return ___progressIndicator_5; }
	inline RuntimeObject** get_address_of_progressIndicator_5() { return &___progressIndicator_5; }
	inline void set_progressIndicator_5(RuntimeObject* value)
	{
		___progressIndicator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progressIndicator_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_6() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2, ___U3CU3E4__this_6)); }
	inline SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * get_U3CU3E4__this_6() const { return ___U3CU3E4__this_6; }
	inline SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 ** get_address_of_U3CU3E4__this_6() { return &___U3CU3E4__this_6; }
	inline void set_U3CU3E4__this_6(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * value)
	{
		___U3CU3E4__this_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_7() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2, ___U3CU3Es__1_7)); }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  get_U3CU3Es__1_7() const { return ___U3CU3Es__1_7; }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * get_address_of_U3CU3Es__1_7() { return &___U3CU3Es__1_7; }
	inline void set_U3CU3Es__1_7(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  value)
	{
		___U3CU3Es__1_7 = value;
	}

	inline static int32_t get_offset_of_U3CU3Es__2_8() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2, ___U3CU3Es__2_8)); }
	inline RuntimeObject* get_U3CU3Es__2_8() const { return ___U3CU3Es__2_8; }
	inline RuntimeObject** get_address_of_U3CU3Es__2_8() { return &___U3CU3Es__2_8; }
	inline void set_U3CU3Es__2_8(RuntimeObject* value)
	{
		___U3CU3Es__2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__2_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsceneOperationU3E5__3_9() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2, ___U3CsceneOperationU3E5__3_9)); }
	inline Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * get_U3CsceneOperationU3E5__3_9() const { return ___U3CsceneOperationU3E5__3_9; }
	inline Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 ** get_address_of_U3CsceneOperationU3E5__3_9() { return &___U3CsceneOperationU3E5__3_9; }
	inline void set_U3CsceneOperationU3E5__3_9(Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * value)
	{
		___U3CsceneOperationU3E5__3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsceneOperationU3E5__3_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_10() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2, ___U3CU3Eu__1_10)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_10() const { return ___U3CU3Eu__1_10; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_10() { return &___U3CU3Eu__1_10; }
	inline void set_U3CU3Eu__1_10(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_10))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__55
struct U3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__55::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__55::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__55::<>4__this
	SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__55::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB, ___U3CU3E4__this_2)); }
	inline SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59
struct U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59::fadeInTime
	float ___fadeInTime_2;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59::<>4__this
	SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * ___U3CU3E4__this_3;
	// Unity.Profiling.ProfilerMarker/AutoScope Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59::<>s__1
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ___U3CU3Es__1_4;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderState Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59::<>s__2
	int32_t ___U3CU3Es__2_5;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59::<>u__1
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  ___U3CU3Eu__1_6;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59::<>u__2
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_fadeInTime_2() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490, ___fadeInTime_2)); }
	inline float get_fadeInTime_2() const { return ___fadeInTime_2; }
	inline float* get_address_of_fadeInTime_2() { return &___fadeInTime_2; }
	inline void set_fadeInTime_2(float value)
	{
		___fadeInTime_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490, ___U3CU3E4__this_3)); }
	inline SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_4() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490, ___U3CU3Es__1_4)); }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  get_U3CU3Es__1_4() const { return ___U3CU3Es__1_4; }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * get_address_of_U3CU3Es__1_4() { return &___U3CU3Es__1_4; }
	inline void set_U3CU3Es__1_4(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  value)
	{
		___U3CU3Es__1_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3Es__2_5() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490, ___U3CU3Es__2_5)); }
	inline int32_t get_U3CU3Es__2_5() const { return ___U3CU3Es__2_5; }
	inline int32_t* get_address_of_U3CU3Es__2_5() { return &___U3CU3Es__2_5; }
	inline void set_U3CU3Es__2_5(int32_t value)
	{
		___U3CU3Es__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490, ___U3CU3Eu__1_6)); }
	inline YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  value)
	{
		___U3CU3Eu__1_6 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_7() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490, ___U3CU3Eu__2_7)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__2_7() const { return ___U3CU3Eu__2_7; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__2_7() { return &___U3CU3Eu__2_7; }
	inline void set_U3CU3Eu__2_7(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_7))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__54
struct U3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__54::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__54::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__54::<>4__this
	SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__54::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A, ___U3CU3E4__this_2)); }
	inline SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57
struct U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57::fadeOutTime
	float ___fadeOutTime_2;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57::<>4__this
	SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * ___U3CU3E4__this_3;
	// Unity.Profiling.ProfilerMarker/AutoScope Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57::<>s__1
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ___U3CU3Es__1_4;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderState Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57::<>s__2
	int32_t ___U3CU3Es__2_5;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57::<>u__1
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  ___U3CU3Eu__1_6;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57::<>u__2
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_fadeOutTime_2() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761, ___fadeOutTime_2)); }
	inline float get_fadeOutTime_2() const { return ___fadeOutTime_2; }
	inline float* get_address_of_fadeOutTime_2() { return &___fadeOutTime_2; }
	inline void set_fadeOutTime_2(float value)
	{
		___fadeOutTime_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761, ___U3CU3E4__this_3)); }
	inline SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_4() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761, ___U3CU3Es__1_4)); }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  get_U3CU3Es__1_4() const { return ___U3CU3Es__1_4; }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * get_address_of_U3CU3Es__1_4() { return &___U3CU3Es__1_4; }
	inline void set_U3CU3Es__1_4(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  value)
	{
		___U3CU3Es__1_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3Es__2_5() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761, ___U3CU3Es__2_5)); }
	inline int32_t get_U3CU3Es__2_5() const { return ___U3CU3Es__2_5; }
	inline int32_t* get_address_of_U3CU3Es__2_5() { return &___U3CU3Es__2_5; }
	inline void set_U3CU3Es__2_5(int32_t value)
	{
		___U3CU3Es__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761, ___U3CU3Eu__1_6)); }
	inline YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  value)
	{
		___U3CU3Eu__1_6 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_7() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761, ___U3CU3Eu__2_7)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__2_7() const { return ___U3CU3Eu__2_7; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__2_7() { return &___U3CU3Eu__2_7; }
	inline void set_U3CU3Eu__2_7(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_7))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<HideProgressIndicator>d__63
struct U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<HideProgressIndicator>d__63::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<HideProgressIndicator>d__63::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<HideProgressIndicator>d__63::<>4__this
	SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * ___U3CU3E4__this_2;
	// Unity.Profiling.ProfilerMarker/AutoScope Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<HideProgressIndicator>d__63::<>s__1
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ___U3CU3Es__1_3;
	// Microsoft.MixedReality.Toolkit.UI.ProgressIndicatorState Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<HideProgressIndicator>d__63::<>s__2
	int32_t ___U3CU3Es__2_4;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<HideProgressIndicator>d__63::<>u__1
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  ___U3CU3Eu__1_5;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<HideProgressIndicator>d__63::<>u__2
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__2_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB, ___U3CU3E4__this_2)); }
	inline SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_3() { return static_cast<int32_t>(offsetof(U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB, ___U3CU3Es__1_3)); }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  get_U3CU3Es__1_3() const { return ___U3CU3Es__1_3; }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * get_address_of_U3CU3Es__1_3() { return &___U3CU3Es__1_3; }
	inline void set_U3CU3Es__1_3(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  value)
	{
		___U3CU3Es__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3Es__2_4() { return static_cast<int32_t>(offsetof(U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB, ___U3CU3Es__2_4)); }
	inline int32_t get_U3CU3Es__2_4() const { return ___U3CU3Es__2_4; }
	inline int32_t* get_address_of_U3CU3Es__2_4() { return &___U3CU3Es__2_4; }
	inline void set_U3CU3Es__2_4(int32_t value)
	{
		___U3CU3Es__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB, ___U3CU3Eu__1_5)); }
	inline YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  value)
	{
		___U3CU3Eu__1_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_6() { return static_cast<int32_t>(offsetof(U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB, ___U3CU3Eu__2_6)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__2_6() const { return ___U3CU3Eu__2_6; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__2_6() { return &___U3CU3Eu__2_6; }
	inline void set_U3CU3Eu__2_6(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_6))->___m_task_0), (void*)NULL);
	}
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
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


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile
struct SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49  : public BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::useDefaultProgressIndicator
	bool ___useDefaultProgressIndicator_5;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::defaultProgressIndicatorPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___defaultProgressIndicatorPrefab_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::useFadeColor
	bool ___useFadeColor_7;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::fadeColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___fadeColor_8;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::fadeOutTime
	float ___fadeOutTime_9;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::fadeInTime
	float ___fadeInTime_10;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderTargets Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::fadeTargets
	int32_t ___fadeTargets_11;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::cameraFaderType
	SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E * ___cameraFaderType_12;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::cameraFaderMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___cameraFaderMaterial_13;

public:
	inline static int32_t get_offset_of_useDefaultProgressIndicator_5() { return static_cast<int32_t>(offsetof(SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49, ___useDefaultProgressIndicator_5)); }
	inline bool get_useDefaultProgressIndicator_5() const { return ___useDefaultProgressIndicator_5; }
	inline bool* get_address_of_useDefaultProgressIndicator_5() { return &___useDefaultProgressIndicator_5; }
	inline void set_useDefaultProgressIndicator_5(bool value)
	{
		___useDefaultProgressIndicator_5 = value;
	}

	inline static int32_t get_offset_of_defaultProgressIndicatorPrefab_6() { return static_cast<int32_t>(offsetof(SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49, ___defaultProgressIndicatorPrefab_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_defaultProgressIndicatorPrefab_6() const { return ___defaultProgressIndicatorPrefab_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_defaultProgressIndicatorPrefab_6() { return &___defaultProgressIndicatorPrefab_6; }
	inline void set_defaultProgressIndicatorPrefab_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___defaultProgressIndicatorPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultProgressIndicatorPrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_useFadeColor_7() { return static_cast<int32_t>(offsetof(SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49, ___useFadeColor_7)); }
	inline bool get_useFadeColor_7() const { return ___useFadeColor_7; }
	inline bool* get_address_of_useFadeColor_7() { return &___useFadeColor_7; }
	inline void set_useFadeColor_7(bool value)
	{
		___useFadeColor_7 = value;
	}

	inline static int32_t get_offset_of_fadeColor_8() { return static_cast<int32_t>(offsetof(SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49, ___fadeColor_8)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_fadeColor_8() const { return ___fadeColor_8; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_fadeColor_8() { return &___fadeColor_8; }
	inline void set_fadeColor_8(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___fadeColor_8 = value;
	}

	inline static int32_t get_offset_of_fadeOutTime_9() { return static_cast<int32_t>(offsetof(SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49, ___fadeOutTime_9)); }
	inline float get_fadeOutTime_9() const { return ___fadeOutTime_9; }
	inline float* get_address_of_fadeOutTime_9() { return &___fadeOutTime_9; }
	inline void set_fadeOutTime_9(float value)
	{
		___fadeOutTime_9 = value;
	}

	inline static int32_t get_offset_of_fadeInTime_10() { return static_cast<int32_t>(offsetof(SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49, ___fadeInTime_10)); }
	inline float get_fadeInTime_10() const { return ___fadeInTime_10; }
	inline float* get_address_of_fadeInTime_10() { return &___fadeInTime_10; }
	inline void set_fadeInTime_10(float value)
	{
		___fadeInTime_10 = value;
	}

	inline static int32_t get_offset_of_fadeTargets_11() { return static_cast<int32_t>(offsetof(SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49, ___fadeTargets_11)); }
	inline int32_t get_fadeTargets_11() const { return ___fadeTargets_11; }
	inline int32_t* get_address_of_fadeTargets_11() { return &___fadeTargets_11; }
	inline void set_fadeTargets_11(int32_t value)
	{
		___fadeTargets_11 = value;
	}

	inline static int32_t get_offset_of_cameraFaderType_12() { return static_cast<int32_t>(offsetof(SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49, ___cameraFaderType_12)); }
	inline SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E * get_cameraFaderType_12() const { return ___cameraFaderType_12; }
	inline SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E ** get_address_of_cameraFaderType_12() { return &___cameraFaderType_12; }
	inline void set_cameraFaderType_12(SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E * value)
	{
		___cameraFaderType_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraFaderType_12), (void*)value);
	}

	inline static int32_t get_offset_of_cameraFaderMaterial_13() { return static_cast<int32_t>(offsetof(SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49, ___cameraFaderMaterial_13)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_cameraFaderMaterial_13() const { return ___cameraFaderMaterial_13; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_cameraFaderMaterial_13() { return &___cameraFaderMaterial_13; }
	inline void set_cameraFaderMaterial_13(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___cameraFaderMaterial_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraFaderMaterial_13), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.LoadContentScene
struct LoadContentScene_t31D5670B45B173146A60D77829CA8B3FAED7824F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.SceneManagement.LoadSceneMode Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.LoadContentScene::loadSceneMode
	int32_t ___loadSceneMode_4;
	// Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.LoadContentScene::contentScene
	SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD  ___contentScene_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.LoadContentScene::loadOnStartup
	bool ___loadOnStartup_6;

public:
	inline static int32_t get_offset_of_loadSceneMode_4() { return static_cast<int32_t>(offsetof(LoadContentScene_t31D5670B45B173146A60D77829CA8B3FAED7824F, ___loadSceneMode_4)); }
	inline int32_t get_loadSceneMode_4() const { return ___loadSceneMode_4; }
	inline int32_t* get_address_of_loadSceneMode_4() { return &___loadSceneMode_4; }
	inline void set_loadSceneMode_4(int32_t value)
	{
		___loadSceneMode_4 = value;
	}

	inline static int32_t get_offset_of_contentScene_5() { return static_cast<int32_t>(offsetof(LoadContentScene_t31D5670B45B173146A60D77829CA8B3FAED7824F, ___contentScene_5)); }
	inline SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD  get_contentScene_5() const { return ___contentScene_5; }
	inline SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD * get_address_of_contentScene_5() { return &___contentScene_5; }
	inline void set_contentScene_5(SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD  value)
	{
		___contentScene_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___contentScene_5))->___Name_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___contentScene_5))->___Path_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___contentScene_5))->___Tag_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___contentScene_5))->___Asset_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_loadOnStartup_6() { return static_cast<int32_t>(offsetof(LoadContentScene_t31D5670B45B173146A60D77829CA8B3FAED7824F, ___loadOnStartup_6)); }
	inline bool get_loadOnStartup_6() const { return ___loadOnStartup_6; }
	inline bool* get_address_of_loadOnStartup_6() { return &___loadOnStartup_6; }
	inline void set_loadOnStartup_6(bool value)
	{
		___loadOnStartup_6 = value;
	}
};

struct LoadContentScene_t31D5670B45B173146A60D77829CA8B3FAED7824F_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.LoadContentScene::LoadContentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LoadContentPerfMarker_7;

public:
	inline static int32_t get_offset_of_LoadContentPerfMarker_7() { return static_cast<int32_t>(offsetof(LoadContentScene_t31D5670B45B173146A60D77829CA8B3FAED7824F_StaticFields, ___LoadContentPerfMarker_7)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LoadContentPerfMarker_7() const { return ___LoadContentPerfMarker_7; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LoadContentPerfMarker_7() { return &___LoadContentPerfMarker_7; }
	inline void set_LoadContentPerfMarker_7(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LoadContentPerfMarker_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.MixedRealityToolkit
struct MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::<IsProfileSwitching>k__BackingField
	bool ___U3CIsProfileSwitchingU3Ek__BackingField_8;
	// Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkit::activeProfile
	MixedRealityToolkitConfigurationProfile_tB77A32ADEFB58771FB0BC8DA7B8B9333C1065082 * ___activeProfile_9;
	// Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkit::newProfile
	MixedRealityToolkitConfigurationProfile_tB77A32ADEFB58771FB0BC8DA7B8B9333C1065082 * ___newProfile_10;

public:
	inline static int32_t get_offset_of_U3CIsProfileSwitchingU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736, ___U3CIsProfileSwitchingU3Ek__BackingField_8)); }
	inline bool get_U3CIsProfileSwitchingU3Ek__BackingField_8() const { return ___U3CIsProfileSwitchingU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsProfileSwitchingU3Ek__BackingField_8() { return &___U3CIsProfileSwitchingU3Ek__BackingField_8; }
	inline void set_U3CIsProfileSwitchingU3Ek__BackingField_8(bool value)
	{
		___U3CIsProfileSwitchingU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_activeProfile_9() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736, ___activeProfile_9)); }
	inline MixedRealityToolkitConfigurationProfile_tB77A32ADEFB58771FB0BC8DA7B8B9333C1065082 * get_activeProfile_9() const { return ___activeProfile_9; }
	inline MixedRealityToolkitConfigurationProfile_tB77A32ADEFB58771FB0BC8DA7B8B9333C1065082 ** get_address_of_activeProfile_9() { return &___activeProfile_9; }
	inline void set_activeProfile_9(MixedRealityToolkitConfigurationProfile_tB77A32ADEFB58771FB0BC8DA7B8B9333C1065082 * value)
	{
		___activeProfile_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeProfile_9), (void*)value);
	}

	inline static int32_t get_offset_of_newProfile_10() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736, ___newProfile_10)); }
	inline MixedRealityToolkitConfigurationProfile_tB77A32ADEFB58771FB0BC8DA7B8B9333C1065082 * get_newProfile_10() const { return ___newProfile_10; }
	inline MixedRealityToolkitConfigurationProfile_tB77A32ADEFB58771FB0BC8DA7B8B9333C1065082 ** get_address_of_newProfile_10() { return &___newProfile_10; }
	inline void set_newProfile_10(MixedRealityToolkitConfigurationProfile_tB77A32ADEFB58771FB0BC8DA7B8B9333C1065082 * value)
	{
		___newProfile_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newProfile_10), (void*)value);
	}
};

struct MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::isInitializing
	bool ___isInitializing_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::isApplicationQuitting
	bool ___isApplicationQuitting_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::internalShutdown
	bool ___internalShutdown_6;
	// System.Collections.Generic.Dictionary`2<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService> Microsoft.MixedReality.Toolkit.MixedRealityToolkit::activeSystems
	Dictionary_2_tCB3C5C94E20F0D63D33459A30E3AE46C7EEE8D7B * ___activeSystems_11;
	// System.Collections.Generic.List`1<System.Tuple`2<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService>> Microsoft.MixedReality.Toolkit.MixedRealityToolkit::registeredMixedRealityServices
	List_1_t0C354ED500841E35CE1441CF408913ADD7AA9577 * ___registeredMixedRealityServices_12;
	// Microsoft.MixedReality.Toolkit.MixedRealityToolkit Microsoft.MixedReality.Toolkit.MixedRealityToolkit::activeInstance
	MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736 * ___activeInstance_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::newInstanceBeingInitialized
	bool ___newInstanceBeingInitialized_14;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.MixedRealityToolkit> Microsoft.MixedReality.Toolkit.MixedRealityToolkit::toolkitInstances
	List_1_tB6E1533880E3D2A11B3AECFC7327150F57C8AED3 * ___toolkitInstances_17;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.MixedRealityToolkit::UpdateAllServicesPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateAllServicesPerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.MixedRealityToolkit::LateUpdateAllServicesPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LateUpdateAllServicesPerfMarker_19;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.MixedRealityToolkit::ExecuteOnAllServicesInOrderPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ExecuteOnAllServicesInOrderPerfMarker_20;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.MixedRealityToolkit::ExecuteOnAllServicesReverseOrderPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ExecuteOnAllServicesReverseOrderPerfMarker_21;

public:
	inline static int32_t get_offset_of_isInitializing_4() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736_StaticFields, ___isInitializing_4)); }
	inline bool get_isInitializing_4() const { return ___isInitializing_4; }
	inline bool* get_address_of_isInitializing_4() { return &___isInitializing_4; }
	inline void set_isInitializing_4(bool value)
	{
		___isInitializing_4 = value;
	}

	inline static int32_t get_offset_of_isApplicationQuitting_5() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736_StaticFields, ___isApplicationQuitting_5)); }
	inline bool get_isApplicationQuitting_5() const { return ___isApplicationQuitting_5; }
	inline bool* get_address_of_isApplicationQuitting_5() { return &___isApplicationQuitting_5; }
	inline void set_isApplicationQuitting_5(bool value)
	{
		___isApplicationQuitting_5 = value;
	}

	inline static int32_t get_offset_of_internalShutdown_6() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736_StaticFields, ___internalShutdown_6)); }
	inline bool get_internalShutdown_6() const { return ___internalShutdown_6; }
	inline bool* get_address_of_internalShutdown_6() { return &___internalShutdown_6; }
	inline void set_internalShutdown_6(bool value)
	{
		___internalShutdown_6 = value;
	}

	inline static int32_t get_offset_of_activeSystems_11() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736_StaticFields, ___activeSystems_11)); }
	inline Dictionary_2_tCB3C5C94E20F0D63D33459A30E3AE46C7EEE8D7B * get_activeSystems_11() const { return ___activeSystems_11; }
	inline Dictionary_2_tCB3C5C94E20F0D63D33459A30E3AE46C7EEE8D7B ** get_address_of_activeSystems_11() { return &___activeSystems_11; }
	inline void set_activeSystems_11(Dictionary_2_tCB3C5C94E20F0D63D33459A30E3AE46C7EEE8D7B * value)
	{
		___activeSystems_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeSystems_11), (void*)value);
	}

	inline static int32_t get_offset_of_registeredMixedRealityServices_12() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736_StaticFields, ___registeredMixedRealityServices_12)); }
	inline List_1_t0C354ED500841E35CE1441CF408913ADD7AA9577 * get_registeredMixedRealityServices_12() const { return ___registeredMixedRealityServices_12; }
	inline List_1_t0C354ED500841E35CE1441CF408913ADD7AA9577 ** get_address_of_registeredMixedRealityServices_12() { return &___registeredMixedRealityServices_12; }
	inline void set_registeredMixedRealityServices_12(List_1_t0C354ED500841E35CE1441CF408913ADD7AA9577 * value)
	{
		___registeredMixedRealityServices_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___registeredMixedRealityServices_12), (void*)value);
	}

	inline static int32_t get_offset_of_activeInstance_13() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736_StaticFields, ___activeInstance_13)); }
	inline MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736 * get_activeInstance_13() const { return ___activeInstance_13; }
	inline MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736 ** get_address_of_activeInstance_13() { return &___activeInstance_13; }
	inline void set_activeInstance_13(MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736 * value)
	{
		___activeInstance_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeInstance_13), (void*)value);
	}

	inline static int32_t get_offset_of_newInstanceBeingInitialized_14() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736_StaticFields, ___newInstanceBeingInitialized_14)); }
	inline bool get_newInstanceBeingInitialized_14() const { return ___newInstanceBeingInitialized_14; }
	inline bool* get_address_of_newInstanceBeingInitialized_14() { return &___newInstanceBeingInitialized_14; }
	inline void set_newInstanceBeingInitialized_14(bool value)
	{
		___newInstanceBeingInitialized_14 = value;
	}

	inline static int32_t get_offset_of_toolkitInstances_17() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736_StaticFields, ___toolkitInstances_17)); }
	inline List_1_tB6E1533880E3D2A11B3AECFC7327150F57C8AED3 * get_toolkitInstances_17() const { return ___toolkitInstances_17; }
	inline List_1_tB6E1533880E3D2A11B3AECFC7327150F57C8AED3 ** get_address_of_toolkitInstances_17() { return &___toolkitInstances_17; }
	inline void set_toolkitInstances_17(List_1_tB6E1533880E3D2A11B3AECFC7327150F57C8AED3 * value)
	{
		___toolkitInstances_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toolkitInstances_17), (void*)value);
	}

	inline static int32_t get_offset_of_UpdateAllServicesPerfMarker_18() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736_StaticFields, ___UpdateAllServicesPerfMarker_18)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateAllServicesPerfMarker_18() const { return ___UpdateAllServicesPerfMarker_18; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateAllServicesPerfMarker_18() { return &___UpdateAllServicesPerfMarker_18; }
	inline void set_UpdateAllServicesPerfMarker_18(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateAllServicesPerfMarker_18 = value;
	}

	inline static int32_t get_offset_of_LateUpdateAllServicesPerfMarker_19() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736_StaticFields, ___LateUpdateAllServicesPerfMarker_19)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LateUpdateAllServicesPerfMarker_19() const { return ___LateUpdateAllServicesPerfMarker_19; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LateUpdateAllServicesPerfMarker_19() { return &___LateUpdateAllServicesPerfMarker_19; }
	inline void set_LateUpdateAllServicesPerfMarker_19(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LateUpdateAllServicesPerfMarker_19 = value;
	}

	inline static int32_t get_offset_of_ExecuteOnAllServicesInOrderPerfMarker_20() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736_StaticFields, ___ExecuteOnAllServicesInOrderPerfMarker_20)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ExecuteOnAllServicesInOrderPerfMarker_20() const { return ___ExecuteOnAllServicesInOrderPerfMarker_20; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ExecuteOnAllServicesInOrderPerfMarker_20() { return &___ExecuteOnAllServicesInOrderPerfMarker_20; }
	inline void set_ExecuteOnAllServicesInOrderPerfMarker_20(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ExecuteOnAllServicesInOrderPerfMarker_20 = value;
	}

	inline static int32_t get_offset_of_ExecuteOnAllServicesReverseOrderPerfMarker_21() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736_StaticFields, ___ExecuteOnAllServicesReverseOrderPerfMarker_21)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ExecuteOnAllServicesReverseOrderPerfMarker_21() const { return ___ExecuteOnAllServicesReverseOrderPerfMarker_21; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ExecuteOnAllServicesReverseOrderPerfMarker_21() { return &___ExecuteOnAllServicesReverseOrderPerfMarker_21; }
	inline void set_ExecuteOnAllServicesReverseOrderPerfMarker_21(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ExecuteOnAllServicesReverseOrderPerfMarker_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Canvas[]
struct CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * m_Items[1];

public:
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Camera[]
struct CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * m_Items[1];

public:
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Func`1<System.Threading.Tasks.Task>[]
struct Func_1U5BU5D_tC8C836685B57D98A62C1CAB8F14A1261EB3E4922  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * m_Items[1];

public:
	inline Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<System.Object>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisRuntimeObject_mF158763EE84651A2D09034FFFE4818D703544376_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject ** ___stateMachine0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tB8C814489F2B63CB416623645CEE1F576F6F3403 * Dictionary_2_get_Values_m0BACCC1AAB56068BF57300CFE11CD25295189B9E_gshared (Dictionary_2_t5CFA76C62610306283A54361AF47F0EE44449A82 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4EE24AD225DE453ACAF75CFA6E793F1ED9F5497B  ValueCollection_GetEnumerator_m802A79BD7A095DBBF02A490097CF9452C52CDE0B_gshared (ValueCollection_tB8C814489F2B63CB416623645CEE1F576F6F3403 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quad_t5B5564685E1EC46AF269743F2349796C7724911B  Enumerator_get_Current_mB5ACBBA48ECBE67F0996BD616085C04D3C4A012B_gshared_inline (Enumerator_t4EE24AD225DE453ACAF75CFA6E793F1ED9F5497B * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mADE5FFA932D793831E2E69D754E27353BCBC8685_gshared (Enumerator_t4EE24AD225DE453ACAF75CFA6E793F1ED9F5497B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mDA53C783F8E7E0C69CC24D816239B2E776DED50E_gshared (Enumerator_t4EE24AD225DE453ACAF75CFA6E793F1ED9F5497B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mDACB79E9BEA064B40EEA02791C69DE4956756A4F_gshared (Dictionary_2_t5CFA76C62610306283A54361AF47F0EE44449A82 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5A53EC065B331697FC79577F3D94D01978BDAC81_gshared (Dictionary_2_t5CFA76C62610306283A54361AF47F0EE44449A82 * __this, const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.MixedRealityToolkit::GetService<System.Object>(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MixedRealityToolkit_GetService_TisRuntimeObject_m829B65389245024991EB3F7940971A0588FAB73E_gshared (MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736 * __this, String_t* ___name0, bool ___showLogs1, const RuntimeMethod* method);
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m0C0271071DCB7D4CB1EE1B409D4C3E6D32576D1E_gshared (Dictionary_2_t5CFA76C62610306283A54361AF47F0EE44449A82 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,System.Object>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisRuntimeObject_mEEA5D72A96A1C647A9C78806E1665EA0DA515F71_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m69C083BB82BC957509362722C93C4D442AA5FD60_gshared (Dictionary_2_t5CFA76C62610306283A54361AF47F0EE44449A82 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m72FDAB4730F6B57578982077CB6192D62DEA8E4C_gshared (Dictionary_2_t5CFA76C62610306283A54361AF47F0EE44449A82 * __this, RuntimeObject * ___key0, Quad_t5B5564685E1EC46AF269743F2349796C7724911B  ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,System.Object>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_mF6714829CDDDF820DD9BD6DDC69002FDE2E551EF_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// !0 System.Func`1<System.Object>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, const RuntimeMethod* method);

// UnityEngine.Material Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_CameraFaderMaterial()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * SceneTransitionServiceProfile_get_CameraFaderMaterial_m2157AAE0604004A29A3A45CBF2025A0228E44E52_inline (SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutAsyncU3Ed__15__ctor_m4A5C40D23FA016F870FB6A444A321ADE00780FA5 (U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E_m99244AE52764BB4B44A3FC24FD205D3BB33CEE21 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E ** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E **, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisRuntimeObject_mF158763EE84651A2D09034FFFE4818D703544376_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeInAsync>d__17::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInAsyncU3Ed__17__ctor_mB51A36978E8596544E02E2D793734ACF14E8F686 (U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeInAsync>d__17>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2_mF000D98C534537EDAAE43D2B5DC3ACBA2AFD79CB (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2 ** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2 **, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisRuntimeObject_mF158763EE84651A2D09034FFFE4818D703544376_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::DestroyQuads()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFaderQuad_DestroyQuads_mA578AB99CD4BA21839166C8E8DBFFB2E4BDB8133 (CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::get_Values()
inline ValueCollection_t322749FF0E4948F4FD8A3F1178C601A0AEF155CD * Dictionary_2_get_Values_mD7022774F2E85B56A1BB9804D8224A177CDE4CED (Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4 * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t322749FF0E4948F4FD8A3F1178C601A0AEF155CD * (*) (Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4 *, const RuntimeMethod*))Dictionary_2_get_Values_m0BACCC1AAB56068BF57300CFE11CD25295189B9E_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::GetEnumerator()
inline Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000  ValueCollection_GetEnumerator_mA3416DE65266E497FA954656F23D9A9591C17A8B (ValueCollection_t322749FF0E4948F4FD8A3F1178C601A0AEF155CD * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000  (*) (ValueCollection_t322749FF0E4948F4FD8A3F1178C601A0AEF155CD *, const RuntimeMethod*))ValueCollection_GetEnumerator_m802A79BD7A095DBBF02A490097CF9452C52CDE0B_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::get_Current()
inline Quad_t5B5564685E1EC46AF269743F2349796C7724911B  Enumerator_get_Current_m9D9525836F35F6A686BBEFFB173325279E3F0FD4_inline (Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000 * __this, const RuntimeMethod* method)
{
	return ((  Quad_t5B5564685E1EC46AF269743F2349796C7724911B  (*) (Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000 *, const RuntimeMethod*))Enumerator_get_Current_mB5ACBBA48ECBE67F0996BD616085C04D3C4A012B_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.GameObjectExtensions::DestroyGameObject(UnityEngine.GameObject,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectExtensions_DestroyGameObject_m471FAF8D3086DCA59F432CC13171D3B1E9EA3AD7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, float ___t1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::MoveNext()
inline bool Enumerator_MoveNext_m882DE164C46D6F8CA2FE5A4863466F9B7A34609E (Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000 *, const RuntimeMethod*))Enumerator_MoveNext_mADE5FFA932D793831E2E69D754E27353BCBC8685_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::Dispose()
inline void Enumerator_Dispose_m655EF1545A276DD44E5D0A55B9834663DCC319FF (Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000 *, const RuntimeMethod*))Enumerator_Dispose_mDA53C783F8E7E0C69CC24D816239B2E776DED50E_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::Clear()
inline void Dictionary_2_Clear_m23D917694A168EF94AE8B422A45E3D8133D4AA46 (Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4 *, const RuntimeMethod*))Dictionary_2_Clear_mDACB79E9BEA064B40EEA02791C69DE4956756A4F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::.ctor()
inline void Dictionary_2__ctor_m49A75A973109D722B8A66BE033BE50D7E420BFA8 (Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4 *, const RuntimeMethod*))Dictionary_2__ctor_m5A53EC065B331697FC79577F3D94D01978BDAC81_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.LoadContentScene::LoadContent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadContentScene_LoadContent_mE62F5AAA2AA30E02C4D2DC8459998565E1C7DB4B (LoadContentScene_t31D5670B45B173146A60D77829CA8B3FAED7824F * __this, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.MixedRealityToolkit Microsoft.MixedReality.Toolkit.MixedRealityToolkit::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736 * MixedRealityToolkit_get_Instance_mE6D76247E654294CE0C95EED06C63E6584104D18_inline (const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.MixedRealityToolkit::GetService<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.ISceneTransitionService>(System.String,System.Boolean)
inline RuntimeObject* MixedRealityToolkit_GetService_TisISceneTransitionService_t3F85B75F410F440B69A5EADD980909265AB1659A_m4D05F27AB7B80746A60AFE9367DBC866A084D225 (MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736 * __this, String_t* ___name0, bool ___showLogs1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736 *, String_t*, bool, const RuntimeMethod*))MixedRealityToolkit_GetService_TisRuntimeObject_m829B65389245024991EB3F7940971A0588FAB73E_gshared)(__this, ___name0, ___showLogs1, method);
}
// System.Void System.Func`1<System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m1D5A4EA26730C44D2B031D9B88C5CD68A24F3562 (Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD  SceneInfo_get_Empty_m9935F01034D1694B999007E63F88A5917C3AA66D (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SceneSystem.IMixedRealitySceneSystem Microsoft.MixedReality.Toolkit.CoreServices::get_SceneSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_SceneSystem_m169AF29CD09C2876B1F27DBEC126F7F947F6CAC3 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::.ctor(System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService__ctor_mCAE5C3681C669825A225A09FAA24E065E5235D28 (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, String_t* ___name0, uint32_t ___priority1, BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * ___profile2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseExtensionService::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseExtensionService_set_Registrar_m3086F1E779B722C1076567F4235D06359EF9D9C6_inline (BaseExtensionService_t4B2A1112509F645C2FA38479075967B1918EAC97 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Camera>::.ctor()
inline void List_1__ctor_m74EEF198C737FDFCED8769ABFD739ABBC9116070 (List_1_t653022B4EDCE73F282430E1A396635798D309409 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t653022B4EDCE73F282430E1A396635798D309409 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.BaseExtensionService::.ctor(System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseExtensionService__ctor_mE5BEDAB6E4EEDFD95EAEA284A179A145126CFD10 (BaseExtensionService_t4B2A1112509F645C2FA38479075967B1918EAC97 * __this, String_t* ___name0, uint32_t ___priority1, BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * ___profile2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Initialize_m468213D350A8820AF2D976385A740D38ADA538B4 (BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_UseFadeColor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneTransitionServiceProfile_get_UseFadeColor_mA53E961E9DF1E837C7A0EF8DA533E5DA864D9DA4_inline (SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::set_UseFadeColor(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SceneTransitionService_set_UseFadeColor_mD6A7366B07E6FB2A8B065110CD042A438B114300_inline (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Color Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_FadeColor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  SceneTransitionServiceProfile_get_FadeColor_m433B9C9C485391AD442793ABF78661FE0AA8078C_inline (SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::set_FadeColor(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SceneTransitionService_set_FadeColor_mE2C5CEE2784425D8A416E46C96D13451F0DFAD20_inline (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_FadeInTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SceneTransitionServiceProfile_get_FadeInTime_mFC2028AFF917D14FC94536ED5D4950CEABEC7615_inline (SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::set_FadeInTime(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SceneTransitionService_set_FadeInTime_mA80222964B3B15EB73EF387C3A3BA33D40BEDB9A_inline (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, float ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_FadeOutTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SceneTransitionServiceProfile_get_FadeOutTime_mC2225A195CA1B12297146F4C0FE28B3C2A27E6DB_inline (SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::set_FadeOutTime(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SceneTransitionService_set_FadeOutTime_mF5875EE829683C07F323B646EB912141265E5E34_inline (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, float ___value0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderTargets Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_FadeTargets()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SceneTransitionServiceProfile_get_FadeTargets_mF9801D8E36093E5883D476F61786D828D1970608_inline (SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::set_FadeTargets(Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderTargets)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SceneTransitionService_set_FadeTargets_mBAB759F0750BD7FF03A6D05DB7693F7F07F49160_inline (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::get_IsSceneSystemEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityToolkit_get_IsSceneSystemEnabled_mA93E9DAFC97256CE3A7212134E72746639E8E02B (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Enable_m8519B781AC05519D6A0F3C6E160254302FC73EDF (BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::CleanUpDefaultProgressIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_CleanUpDefaultProgressIndicator_mE7F5DC5D9F425CD0B6C77887DD6D185AA3028399 (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::CleanUpCameraFader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_CleanUpCameraFader_m935218966EC663E8EFBCA9139601C2993A51ECA2 (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Destroy_mD584388A6C0D195C8EDE89F589132F71042503B2 (BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__48::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSceneTransitionU3Ed__48__ctor_m501DA73781B862E451C74655DC989991C4DEF1AB (U3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__48>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F_m605D9897511B8494C8ED9714AC6857B49302FDDB (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F ** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F **, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisRuntimeObject_mF158763EE84651A2D09034FFFE4818D703544376_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__49::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSceneTransitionU3Ed__49__ctor_m7667293809D9745D88612A39D617B7220E7E9509 (U3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__49>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7_m573B87BAA148786338FE447E6F773D641D8436A8 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7 ** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7 **, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisRuntimeObject_mF158763EE84651A2D09034FFFE4818D703544376_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__50::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSceneTransitionU3Ed__50__ctor_mFC0C114504A8E17363A0ED998F37729402B229DD (U3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__50>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309_mF5931D1290576F8AA883EFAED6DC52D07C76D865 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309 ** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309 **, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisRuntimeObject_mF158763EE84651A2D09034FFFE4818D703544376_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSceneTransitionU3Ed__52__ctor_m74B6475F2C40B802A7D500224E8BFE7315CFBDF0 (U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2_m33AA74366F1C0FCADAAA098024850E2EA68D41F0 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2 ** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2 **, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisRuntimeObject_mF158763EE84651A2D09034FFFE4818D703544376_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Camera>::Clear()
inline void List_1_Clear_m639FF66F3E16E132E6B323366123C4DEAFBB548B (List_1_t653022B4EDCE73F282430E1A396635798D309409 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t653022B4EDCE73F282430E1A396635798D309409 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Camera>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m28392D52AC9E4C794A9712D1693D07F29A633DAF (List_1_t653022B4EDCE73F282430E1A396635798D309409 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t653022B4EDCE73F282430E1A396635798D309409 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__54::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__54__ctor_m91FDEFFA8058399F9EE40D7A69034C4470C692DB (U3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__54>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A_m336F2AFCEABD26C593A7EE9EF663C19D308E1786 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A ** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A **, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisRuntimeObject_mF158763EE84651A2D09034FFFE4818D703544376_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__55::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__55__ctor_mF3B7B6CCC87226AA5525F52F982F58B8B673A075 (U3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__55>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB_m506BB205CF14CD8731C066A43D6E2945A22BBDC4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB ** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB **, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisRuntimeObject_mF158763EE84651A2D09034FFFE4818D703544376_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__57__ctor_mD2C4DE55A2A4F40152AD271E82950D021E9B55D0 (U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761_mB01CCE141C9C702E21D76207C447914F22605288 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761 ** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761 **, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisRuntimeObject_mF158763EE84651A2D09034FFFE4818D703544376_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__59__ctor_m0A72F0E4B03BC75E8BE5DF81963E47127D165046 (U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490_m4AF638634411EC5599708CD519724EC06C095EF8 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490 ** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490 **, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisRuntimeObject_mF158763EE84651A2D09034FFFE4818D703544376_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::CreateDefaultProgressIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_CreateDefaultProgressIndicator_m66C1E1419E72B6CCBD497A5A760282B28E8C6A60 (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<HideProgressIndicator>d__63::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHideProgressIndicatorU3Ed__63__ctor_mFB63A8219C8E58BC3DDAD9B34A0E76CDB1170640 (U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<HideProgressIndicator>d__63>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB_mEAFDEFD63984C5D00C6E196CB5D657ED6C2F5849 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB ** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB **, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisRuntimeObject_mF158763EE84651A2D09034FFFE4818D703544376_gshared)(__this, ___stateMachine0, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderTargets Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::get_FadeTargets()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SceneTransitionService_get_FadeTargets_mE941417F78028883964FA95FDE71E19AAF85B8A4_inline (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<UnityEngine.Camera>()
inline CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* Object_FindObjectsOfType_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mC55BE8C73A55B2398CB2C20AA96459DFB6F1FCE1 (const RuntimeMethod* method)
{
	return ((  CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * CameraCache_get_Main_m23DFE991C3A937306115E7BAA6ECF6F27D2B57A1 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Camera>::Add(!0)
inline void List_1_Add_m5B457832A4D4C94E86A39767276F999140B677B7 (List_1_t653022B4EDCE73F282430E1A396635798D309409 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t653022B4EDCE73F282430E1A396635798D309409 *, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !!0[] UnityEngine.Object::FindObjectsOfType<UnityEngine.Canvas>()
inline CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF* Object_FindObjectsOfType_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mE367AB133A26DA125A1E60158473C8DF02581A38 (const RuntimeMethod* method)
{
	return ((  CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_renderMode_mAEC8A341577CC74EC89D5890E6D6E4A82B03574D (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Canvas_get_worldCamera_mFE4C9FDA7996FE20AC5CA3CB45B4190C40122D51 (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Camera>::get_Count()
inline int32_t List_1_get_Count_m8FB149686794063D5004BAB8D71F1C150777F04D_inline (List_1_t653022B4EDCE73F282430E1A396635798D309409 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t653022B4EDCE73F282430E1A396635798D309409 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_DefaultProgressIndicatorPrefab()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * SceneTransitionServiceProfile_get_DefaultProgressIndicatorPrefab_mC5EA938C85BD421AA81DB7A792594A6E8CB876D4_inline (SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * GameObject_GetComponent_mDF0C55D6EE63B6CA0DD45D627AD267004D6EC473 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, Type_t * ___type0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_CameraFaderType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E * SceneTransitionServiceProfile_get_CameraFaderType_mC2D04FEBFCA35EE0104D9398417AC2FD76511122_inline (SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * __this, const RuntimeMethod* method);
// System.Type Microsoft.MixedReality.Toolkit.Utilities.SystemType::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * SystemType_get_Type_mD7B7EEF3C5ED6B16E2DFB9F89FCE9A8B58895E23_inline (SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E * __this, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295 (Type_t * ___type0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMixedRealityProfile__ctor_m94327F072D922C989496EAE60928EA2395079B2C (BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::get_Count()
inline int32_t Dictionary_2_get_Count_m97D16075250F846C37CD35767442D30FD8A83DD9 (Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4 *, const RuntimeMethod*))Dictionary_2_get_Count_m0C0271071DCB7D4CB1EE1B409D4C3E6D32576D1E_gshared)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderState Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CameraFaderQuad_get_State_mB0F8535BD5C67BACCBA17DF523792859E6F659A5_inline (CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::set_State(Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraFaderQuad_set_State_m54FCB1AA568BD19715397FBC68E5C96FA38AC778_inline (CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetColor_m640E72ABA9086F3F9278C114C1072AD2BED89F48 (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * __this, String_t* ___name0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::SetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_SetPropertyBlock_m3F0E4E98D8274A1396AEBA8456AFA4036DCA7B7A (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___properties0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.YieldAwaitable System.Threading.Tasks.Task::Yield()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  Task_Yield_m1E79F65972D82906B8BBE9980C57E29538D3E94B (const RuntimeMethod* method);
// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter System.Runtime.CompilerServices.YieldAwaitable::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  YieldAwaitable_GetAwaiter_m8AA7D8DCF790EB9BDBDD5F0D8BBA0404C6F7DCD8 (YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeInAsync>d__17>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2_m7A01A59229B55422C40965CA995D59F96C21437D (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * ___awaiter0, U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *, U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2 **, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisRuntimeObject_mEEA5D72A96A1C647A9C78806E1665EA0DA515F71_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mD0C3D9CFAFE0FB858D864092467387D7FA178245 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___source0, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___shader0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::DisableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___keyword0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::EnableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_EnableKeyword_mBD03896F11814C3EF67F73A414DC66D5B577171D (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___keyword0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_renderQueue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_renderQueue_m239F950307B3B71DC41AF02F9030DD0A80A3A201 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA (Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_enableInstancing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_enableInstancing_m508CAE1A82C2688E92491BBDEE4F5A00089BCD4B (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m6E41CCC27C41F32DB3C184D0DF645BDC6CFB16EE (Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4 *, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, const RuntimeMethod*))Dictionary_2_ContainsKey_m69C083BB82BC957509362722C93C4D442AA5FD60_gshared)(__this, ___key0, method);
}
// System.Void UnityEngine.MaterialPropertyBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock__ctor_m8EB29E415C68427B841A0C68A902A8368B9228E8 (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_CreatePrimitive_mB1E03B8D373EBECCD93444A277316A53EC7812AC (int32_t ___type0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Camera::get_orthographic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Camera_get_orthographic_m3DE9A7705E2B4926BBFD2D6798D97B931B5B5550 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_mA9BA910800B2E33B572929CDA9A12CE596353920 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m970DC87D428A71EDF30F9ED7D0E76E08B1BE4EFE (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_nearClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_m75A7270074A35D95B05F25EBF8CE392ECA6517DC (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Camera::get_cullingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_cullingMask_m63492ED3AFA8F571FBED0B1729264A2E3BB64236 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::Add(!0,!1)
inline void Dictionary_2_Add_mFE0EA4F836998691EBE2F3A6A37E1BFD4BB4266B (Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___key0, Quad_t5B5564685E1EC46AF269743F2349796C7724911B  ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4 *, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, Quad_t5B5564685E1EC46AF269743F2349796C7724911B , const RuntimeMethod*))Dictionary_2_Add_m72FDAB4730F6B57578982077CB6192D62DEA8E4C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E_mAD4A057725AF6709B33254E97AAAA60CA17F2BED (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * ___awaiter0, U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *, U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E **, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisRuntimeObject_mEEA5D72A96A1C647A9C78806E1665EA0DA515F71_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::get_FadeOutTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SceneTransitionService_get_FadeOutTime_m3ED9369249E772C3E36B16D6CA397421A75105BA_inline (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::get_FadeInTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SceneTransitionService_get_FadeInTime_m15E938D71B45AAB8102B26D140A0B020451FCECB_inline (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::DoSceneTransition(System.Collections.Generic.IEnumerable`1<System.Func`1<System.Threading.Tasks.Task>>,System.Single,System.Single,Microsoft.MixedReality.Toolkit.UI.IProgressIndicator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SceneTransitionService_DoSceneTransition_m4DB41055B7EE65708B43A7DE6D7731C5A69D5D26 (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, RuntimeObject* ___sceneOperations0, float ___fadeOutTime1, float ___fadeInTime2, RuntimeObject* ___progressIndicator3, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__48>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F_m21C031146A6494AFA33E9AA58184259663F6BEB4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F **, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_mF6714829CDDDF820DD9BD6DDC69002FDE2E551EF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__49>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7_m12D834F8A63DBAFF88C5960752D39C0820CC162C (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7 **, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_mF6714829CDDDF820DD9BD6DDC69002FDE2E551EF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__50>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309_mB2E014B649B2587291B515A73948299F1289F4E9 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309 **, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_mF6714829CDDDF820DD9BD6DDC69002FDE2E551EF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::get_TransitionInProgress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneTransitionService_get_TransitionInProgress_mE88E1AFDC8306745B7B0469BC5D976B0B61A2977_inline (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::set_TransitionInProgress(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SceneTransitionService_set_TransitionInProgress_mDE23061208518F3BB45ACDD1A651DB0078E9A58B_inline (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, bool ___value0, const RuntimeMethod* method);
// System.Action Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::get_OnTransitionStarted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * SceneTransitionService_get_OnTransitionStarted_m79FE4E48928E3474EC96CD4EDA1D4D37E4395EA9_inline (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_UseDefaultProgressIndicator()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneTransitionServiceProfile_get_UseDefaultProgressIndicator_mAA156F923F259F32C85571D58510DE29E5AE1DFA_inline (SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::get_UseFadeColor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneTransitionService_get_UseFadeColor_mFF9317A7AF3F0AFD19ADE209B4FB2A3C8E0959B3_inline (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::FadeOut(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SceneTransitionService_FadeOut_m3572A602877F506CE83D7759824DA66D96BA6A4B (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, float ___fadeOutTime0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2_m406A3E6563C8186C07C522BB281EEFB1B0A471EA (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2 **, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_mF6714829CDDDF820DD9BD6DDC69002FDE2E551EF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Func`1<System.Threading.Tasks.Task>::Invoke()
inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Func_1_Invoke_m3B5AC943F23CE7225ACF20C2B4B5E2D3FF1EBDDF (Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * __this, const RuntimeMethod* method)
{
	return ((  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*) (Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 *, const RuntimeMethod*))Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared)(__this, method);
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::FadeIn(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SceneTransitionService_FadeIn_mD91CE8759A1F0EABE73EA23CDF7002821F0B615A (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, float ___fadeInTime0, const RuntimeMethod* method);
// System.Action Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::get_OnTransitionCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * SceneTransitionService_get_OnTransitionCompleted_mF6867F8F71EBA04AE051171723E9DAB6E488A272_inline (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__55>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB_m8666591E7B4BC1523BA34BBB7C1F93F19C41ECEE (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB **, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_mF6714829CDDDF820DD9BD6DDC69002FDE2E551EF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::CreateCameraFader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_CreateCameraFader_m2F10F6975B011F99747AA30E5533D10C3CFF67AF (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490_m43B08F7493D3007229AD078D50EC3FF3DDC0FAFB (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * ___awaiter0, U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *, U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490 **, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisRuntimeObject_mEEA5D72A96A1C647A9C78806E1665EA0DA515F71_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// UnityEngine.Color Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::get_FadeColor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  SceneTransitionService_get_FadeColor_m471A2DAD627E3B635A2042AFB82A33248E5DB6F5_inline (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Camera> Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::GatherFadeTargetCameras()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t653022B4EDCE73F282430E1A396635798D309409 * SceneTransitionService_GatherFadeTargetCameras_m05A7148CAE208F02964171818D8B8000F4D93234 (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490_m51905B3992525E5B17106707F77A2E16FFFC16B7 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490 **, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_mF6714829CDDDF820DD9BD6DDC69002FDE2E551EF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__54>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A_m507CCC317D9641C9C10FA44765270924458A149C (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A **, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_mF6714829CDDDF820DD9BD6DDC69002FDE2E551EF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761_m8D9A7206DCAB6123F05F671324D453A3B6B01F2B (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * ___awaiter0, U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *, U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761 **, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisRuntimeObject_mEEA5D72A96A1C647A9C78806E1665EA0DA515F71_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761_m54CDB1FF53709EE0AD454A3E238736BD4695C90E (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761 **, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_mF6714829CDDDF820DD9BD6DDC69002FDE2E551EF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<HideProgressIndicator>d__63>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB_m437AC1C6EDBD1D56FE5CC3A4D3803713AC8E04D8 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * ___awaiter0, U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *, U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB **, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisRuntimeObject_mEEA5D72A96A1C647A9C78806E1665EA0DA515F71_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<HideProgressIndicator>d__63>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB_m7CD5D8D47E160A14F45B1895C4A5382A80C2A5F9 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB **, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_mF6714829CDDDF820DD9BD6DDC69002FDE2E551EF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0 (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_m1B2CAD1BC7C7C390514317A8D51FB798D4622AE4 (intptr_t ___markerPtr0, const RuntimeMethod* method);
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
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderState Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraFaderQuad_get_State_mB0F8535BD5C67BACCBA17DF523792859E6F659A5 (CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * __this, const RuntimeMethod* method)
{
	{
		// public CameraFaderState State { get; private set; }
		int32_t L_0 = __this->get_U3CStateU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::set_State(Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFaderQuad_set_State_m54FCB1AA568BD19715397FBC68E5C96FA38AC778 (CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public CameraFaderState State { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::Initialize(Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFaderQuad_Initialize_mA121345D551C0B66D53BF3543B55F0E3850B5A2E (CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * __this, SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * ___profile0, const RuntimeMethod* method)
{
	{
		// quadMaterialTemplate = profile.CameraFaderMaterial;
		SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * L_0 = ___profile0;
		NullCheck(L_0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1;
		L_1 = SceneTransitionServiceProfile_get_CameraFaderMaterial_m2157AAE0604004A29A3A45CBF2025A0228E44E52_inline(L_0, /*hidden argument*/NULL);
		__this->set_quadMaterialTemplate_8(L_1);
		// }
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::FadeOutAsync(System.Single,UnityEngine.Color,System.Collections.Generic.IEnumerable`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * CameraFaderQuad_FadeOutAsync_m8808854BE794BDBE8EA2D3B3055827C1552B6380 (CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * __this, float ___fadeOutTime0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1, RuntimeObject* ___targets2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E_m99244AE52764BB4B44A3FC24FD205D3BB33CEE21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E * V_0 = NULL;
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E * L_0 = (U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E *)il2cpp_codegen_object_new(U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E_il2cpp_TypeInfo_var);
		U3CFadeOutAsyncU3Ed__15__ctor_m4A5C40D23FA016F870FB6A444A321ADE00780FA5(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_5(__this);
		U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E * L_2 = V_0;
		float L_3 = ___fadeOutTime0;
		NullCheck(L_2);
		L_2->set_fadeOutTime_2(L_3);
		U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E * L_4 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = ___color1;
		NullCheck(L_4);
		L_4->set_color_3(L_5);
		U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E * L_6 = V_0;
		RuntimeObject* L_7 = ___targets2;
		NullCheck(L_6);
		L_6->set_targets_4(L_7);
		U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_9;
		L_9 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		NullCheck(L_8);
		L_8->set_U3CU3Et__builder_1(L_9);
		U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E * L_10 = V_0;
		NullCheck(L_10);
		L_10->set_U3CU3E1__state_0((-1));
		U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E * L_11 = V_0;
		NullCheck(L_11);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_12 = L_11->get_U3CU3Et__builder_1();
		V_1 = L_12;
		AsyncTaskMethodBuilder_Start_TisU3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E_m99244AE52764BB4B44A3FC24FD205D3BB33CEE21((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E **)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E_m99244AE52764BB4B44A3FC24FD205D3BB33CEE21_RuntimeMethod_var);
		U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E * L_13 = V_0;
		NullCheck(L_13);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_14 = L_13->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_15;
		L_15 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::FadeInAsync(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * CameraFaderQuad_FadeInAsync_mA856651D4F5A5D49CA51464606AF32E2CFA57082 (CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * __this, float ___fadeInTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2_mF000D98C534537EDAAE43D2B5DC3ACBA2AFD79CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2 * V_0 = NULL;
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2 * L_0 = (U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2 *)il2cpp_codegen_object_new(U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2_il2cpp_TypeInfo_var);
		U3CFadeInAsyncU3Ed__17__ctor_mB51A36978E8596544E02E2D793734ACF14E8F686(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2 * L_2 = V_0;
		float L_3 = ___fadeInTime0;
		NullCheck(L_2);
		L_2->set_fadeInTime_2(L_3);
		U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_5;
		L_5 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_U3CU3Et__builder_1(L_5);
		U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2 * L_6 = V_0;
		NullCheck(L_6);
		L_6->set_U3CU3E1__state_0((-1));
		U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2 * L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_8 = L_7->get_U3CU3Et__builder_1();
		V_1 = L_8;
		AsyncTaskMethodBuilder_Start_TisU3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2_mF000D98C534537EDAAE43D2B5DC3ACBA2AFD79CB((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2 **)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2_mF000D98C534537EDAAE43D2B5DC3ACBA2AFD79CB_RuntimeMethod_var);
		U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2 * L_9 = V_0;
		NullCheck(L_9);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_10 = L_9->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_11;
		L_11 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFaderQuad_OnDestroy_m17E065F770857500EB45C2731A66C077A5EDBA28 (CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * __this, const RuntimeMethod* method)
{
	{
		// DestroyQuads();
		CameraFaderQuad_DestroyQuads_mA578AB99CD4BA21839166C8E8DBFFB2E4BDB8133(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::DestroyQuads()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFaderQuad_DestroyQuads_mA578AB99CD4BA21839166C8E8DBFFB2E4BDB8133 (CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m23D917694A168EF94AE8B422A45E3D8133D4AA46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mD7022774F2E85B56A1BB9804D8224A177CDE4CED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m655EF1545A276DD44E5D0A55B9834663DCC319FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m882DE164C46D6F8CA2FE5A4863466F9B7A34609E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9D9525836F35F6A686BBEFFB173325279E3F0FD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_mA3416DE65266E497FA954656F23D9A9591C17A8B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quad_t5B5564685E1EC46AF269743F2349796C7724911B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (Quad quad in quads.Values)
		Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4 * L_0 = __this->get_quads_3();
		NullCheck(L_0);
		ValueCollection_t322749FF0E4948F4FD8A3F1178C601A0AEF155CD * L_1;
		L_1 = Dictionary_2_get_Values_mD7022774F2E85B56A1BB9804D8224A177CDE4CED(L_0, /*hidden argument*/Dictionary_2_get_Values_mD7022774F2E85B56A1BB9804D8224A177CDE4CED_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000  L_2;
		L_2 = ValueCollection_GetEnumerator_mA3416DE65266E497FA954656F23D9A9591C17A8B(L_1, /*hidden argument*/ValueCollection_GetEnumerator_mA3416DE65266E497FA954656F23D9A9591C17A8B_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0047;
		}

IL_0015:
		{
			// foreach (Quad quad in quads.Values)
			Quad_t5B5564685E1EC46AF269743F2349796C7724911B  L_3;
			L_3 = Enumerator_get_Current_m9D9525836F35F6A686BBEFFB173325279E3F0FD4_inline((Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m9D9525836F35F6A686BBEFFB173325279E3F0FD4_RuntimeMethod_var);
			V_1 = L_3;
			// if (quad.Renderer != null)
			Quad_t5B5564685E1EC46AF269743F2349796C7724911B  L_4 = V_1;
			Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_5 = L_4.get_Renderer_0();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_6;
			L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			V_2 = L_6;
			bool L_7 = V_2;
			if (!L_7)
			{
				goto IL_0046;
			}
		}

IL_002e:
		{
			// GameObjectExtensions.DestroyGameObject(quad.Renderer.gameObject);
			Quad_t5B5564685E1EC46AF269743F2349796C7724911B  L_8 = V_1;
			Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_9 = L_8.get_Renderer_0();
			NullCheck(L_9);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
			L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_9, /*hidden argument*/NULL);
			GameObjectExtensions_DestroyGameObject_m471FAF8D3086DCA59F432CC13171D3B1E9EA3AD7(L_10, (0.0f), /*hidden argument*/NULL);
		}

IL_0046:
		{
		}

IL_0047:
		{
			// foreach (Quad quad in quads.Values)
			bool L_11;
			L_11 = Enumerator_MoveNext_m882DE164C46D6F8CA2FE5A4863466F9B7A34609E((Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m882DE164C46D6F8CA2FE5A4863466F9B7A34609E_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0015;
			}
		}

IL_0050:
		{
			IL2CPP_LEAVE(0x61, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m655EF1545A276DD44E5D0A55B9834663DCC319FF((Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m655EF1545A276DD44E5D0A55B9834663DCC319FF_RuntimeMethod_var);
		IL2CPP_END_FINALLY(82)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x61, IL_0061)
	}

IL_0061:
	{
		// quads.Clear();
		Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4 * L_12 = __this->get_quads_3();
		NullCheck(L_12);
		Dictionary_2_Clear_m23D917694A168EF94AE8B422A45E3D8133D4AA46(L_12, /*hidden argument*/Dictionary_2_Clear_m23D917694A168EF94AE8B422A45E3D8133D4AA46_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFaderQuad__ctor_mED265EC691516AA1839A3483DF4D6B02CD86658B (CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m49A75A973109D722B8A66BE033BE50D7E420BFA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<Camera, Quad> quads = new Dictionary<Camera, Quad>();
		Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4 * L_0 = (Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4 *)il2cpp_codegen_object_new(Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m49A75A973109D722B8A66BE033BE50D7E420BFA8(L_0, /*hidden argument*/Dictionary_2__ctor_m49A75A973109D722B8A66BE033BE50D7E420BFA8_RuntimeMethod_var);
		__this->set_quads_3(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFaderQuad__cctor_mDC4CB8AD2279BFAF607B4DBADBD1F29E2A514FA8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DBBB5B60942F49C9A9831F4529E22F250F35879);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE3AB133E10294E2E9B74FE908DA018B2506B0F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker FadeOutAsyncPerfMarker = new ProfilerMarker("[MRTK] CameraFaderQuad.FadeOutAsync");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral5DBBB5B60942F49C9A9831F4529E22F250F35879, /*hidden argument*/NULL);
		((CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409_StaticFields*)il2cpp_codegen_static_fields_for(CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409_il2cpp_TypeInfo_var))->set_FadeOutAsyncPerfMarker_9(L_0);
		// private static readonly ProfilerMarker FadeInAsyncPerfMarker = new ProfilerMarker("[MRTK] CameraFaderQuad.FadeInAsync");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), _stringLiteralBE3AB133E10294E2E9B74FE908DA018B2506B0F2, /*hidden argument*/NULL);
		((CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409_StaticFields*)il2cpp_codegen_static_fields_for(CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409_il2cpp_TypeInfo_var))->set_FadeInAsyncPerfMarker_10(L_1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.LoadContentScene::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadContentScene_Start_mA961FA4917C9FF554CAF647206AE4F0673D5B451 (LoadContentScene_t31D5670B45B173146A60D77829CA8B3FAED7824F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (loadOnStartup)
		bool L_0 = __this->get_loadOnStartup_6();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// LoadContent();
		LoadContentScene_LoadContent_mE62F5AAA2AA30E02C4D2DC8459998565E1C7DB4B(__this, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.LoadContentScene::LoadContent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadContentScene_LoadContent_mE62F5AAA2AA30E02C4D2DC8459998565E1C7DB4B (LoadContentScene_t31D5670B45B173146A60D77829CA8B3FAED7824F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m1D5A4EA26730C44D2B031D9B88C5CD68A24F3562_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISceneTransitionService_t3F85B75F410F440B69A5EADD980909265AB1659A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadContentScene_U3CLoadContentU3Eb__5_0_m71CEBBE6EE377406E1F25ADB3B5AE27FFDA7E4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadContentScene_t31D5670B45B173146A60D77829CA8B3FAED7824F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkit_GetService_TisISceneTransitionService_t3F85B75F410F440B69A5EADD980909265AB1659A_m4D05F27AB7B80746A60AFE9367DBC866A084D225_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// using (LoadContentPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(LoadContentScene_t31D5670B45B173146A60D77829CA8B3FAED7824F_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((LoadContentScene_t31D5670B45B173146A60D77829CA8B3FAED7824F_StaticFields*)il2cpp_codegen_static_fields_for(LoadContentScene_t31D5670B45B173146A60D77829CA8B3FAED7824F_il2cpp_TypeInfo_var))->get_LoadContentPerfMarker_7();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// ISceneTransitionService transitions = MixedRealityToolkit.Instance.GetService<ISceneTransitionService>();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736_il2cpp_TypeInfo_var);
			MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736 * L_2;
			L_2 = MixedRealityToolkit_get_Instance_mE6D76247E654294CE0C95EED06C63E6584104D18_inline(/*hidden argument*/NULL);
			NullCheck(L_2);
			RuntimeObject* L_3;
			L_3 = MixedRealityToolkit_GetService_TisISceneTransitionService_t3F85B75F410F440B69A5EADD980909265AB1659A_m4D05F27AB7B80746A60AFE9367DBC866A084D225(L_2, (String_t*)NULL, (bool)1, /*hidden argument*/MixedRealityToolkit_GetService_TisISceneTransitionService_t3F85B75F410F440B69A5EADD980909265AB1659A_m4D05F27AB7B80746A60AFE9367DBC866A084D225_RuntimeMethod_var);
			V_2 = L_3;
			// if (transitions.TransitionInProgress)
			RuntimeObject* L_4 = V_2;
			NullCheck(L_4);
			bool L_5;
			L_5 = InterfaceFuncInvoker0< bool >::Invoke(14 /* System.Boolean Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.ISceneTransitionService::get_TransitionInProgress() */, ISceneTransitionService_t3F85B75F410F440B69A5EADD980909265AB1659A_il2cpp_TypeInfo_var, L_4);
			V_3 = L_5;
			bool L_6 = V_3;
			if (!L_6)
			{
				goto IL_002a;
			}
		}

IL_0027:
		{
			// return;
			IL2CPP_LEAVE(0x50, FINALLY_0041);
		}

IL_002a:
		{
			// transitions.DoSceneTransition(() => CoreServices.SceneSystem.LoadContent(contentScene.Name, loadSceneMode));
			RuntimeObject* L_7 = V_2;
			Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * L_8 = (Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 *)il2cpp_codegen_object_new(Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3_il2cpp_TypeInfo_var);
			Func_1__ctor_m1D5A4EA26730C44D2B031D9B88C5CD68A24F3562(L_8, __this, (intptr_t)((intptr_t)LoadContentScene_U3CLoadContentU3Eb__5_0_m71CEBBE6EE377406E1F25ADB3B5AE27FFDA7E4A1_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m1D5A4EA26730C44D2B031D9B88C5CD68A24F3562_RuntimeMethod_var);
			NullCheck(L_7);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_9;
			L_9 = InterfaceFuncInvoker2< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 *, RuntimeObject* >::Invoke(19 /* System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.ISceneTransitionService::DoSceneTransition(System.Func`1<System.Threading.Tasks.Task>,Microsoft.MixedReality.Toolkit.UI.IProgressIndicator) */, ISceneTransitionService_t3F85B75F410F440B69A5EADD980909265AB1659A_il2cpp_TypeInfo_var, L_7, L_8, (RuntimeObject*)NULL);
			IL2CPP_LEAVE(0x50, FINALLY_0041);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0041;
	}

FINALLY_0041:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(65)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(65)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x50, IL_0050)
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.LoadContentScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadContentScene__ctor_m017682E552F3473677F772D517F9B2E82C243D56 (LoadContentScene_t31D5670B45B173146A60D77829CA8B3FAED7824F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private LoadSceneMode loadSceneMode = LoadSceneMode.Single;
		__this->set_loadSceneMode_4(0);
		// private SceneInfo contentScene = SceneInfo.Empty;
		IL2CPP_RUNTIME_CLASS_INIT(SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD_il2cpp_TypeInfo_var);
		SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD  L_0;
		L_0 = SceneInfo_get_Empty_m9935F01034D1694B999007E63F88A5917C3AA66D(/*hidden argument*/NULL);
		__this->set_contentScene_5(L_0);
		// private bool loadOnStartup = false;
		__this->set_loadOnStartup_6((bool)0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.LoadContentScene::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadContentScene__cctor_mA6DFE3FDE199FE8203044D832BFA1DD93210F10D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadContentScene_t31D5670B45B173146A60D77829CA8B3FAED7824F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EB26CEBCA8FFC34185115D39A399721D995EB25);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker LoadContentPerfMarker = new ProfilerMarker("[MRTK] LoadContentScene.LoadContent");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral8EB26CEBCA8FFC34185115D39A399721D995EB25, /*hidden argument*/NULL);
		((LoadContentScene_t31D5670B45B173146A60D77829CA8B3FAED7824F_StaticFields*)il2cpp_codegen_static_fields_for(LoadContentScene_t31D5670B45B173146A60D77829CA8B3FAED7824F_il2cpp_TypeInfo_var))->set_LoadContentPerfMarker_7(L_0);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.LoadContentScene::<LoadContent>b__5_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * LoadContentScene_U3CLoadContentU3Eb__5_0_m71CEBBE6EE377406E1F25ADB3B5AE27FFDA7E4A1 (LoadContentScene_t31D5670B45B173146A60D77829CA8B3FAED7824F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySceneSystem_t7FC3A27BA1BF40BA292F5F611E7740528D5235DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transitions.DoSceneTransition(() => CoreServices.SceneSystem.LoadContent(contentScene.Name, loadSceneMode));
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_SceneSystem_m169AF29CD09C2876B1F27DBEC126F7F947F6CAC3(/*hidden argument*/NULL);
		SceneInfo_t12CFA6F7D90C190B2C869FD43C885339A250C3FD * L_1 = __this->get_address_of_contentScene_5();
		String_t* L_2 = L_1->get_Name_1();
		int32_t L_3 = __this->get_loadSceneMode_4();
		NullCheck(L_0);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4;
		L_4 = InterfaceFuncInvoker3< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, String_t*, int32_t, SceneActivationToken_t753C7C552C56457A4A52CF963C968B40A923BAFF * >::Invoke(35 /* System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.SceneSystem.IMixedRealitySceneSystem::LoadContent(System.String,UnityEngine.SceneManagement.LoadSceneMode,Microsoft.MixedReality.Toolkit.SceneSystem.SceneActivationToken) */, IMixedRealitySceneSystem_t7FC3A27BA1BF40BA292F5F611E7740528D5235DD_il2cpp_TypeInfo_var, L_0, L_2, L_3, (SceneActivationToken_t753C7C552C56457A4A52CF963C968B40A923BAFF *)NULL);
		return L_4;
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
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService__ctor_mD35DA7A01A328303EEFDAF47723B4ABCB9E6D06F (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, RuntimeObject* ___registrar0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * ___profile3, const RuntimeMethod* method)
{
	{
		// BaseMixedRealityProfile profile) : this(name, priority, profile)
		String_t* L_0 = ___name1;
		uint32_t L_1 = ___priority2;
		BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * L_2 = ___profile3;
		SceneTransitionService__ctor_mCAE5C3681C669825A225A09FAA24E065E5235D28(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// Registrar = registrar;
		RuntimeObject* L_3 = ___registrar0;
		BaseExtensionService_set_Registrar_m3086F1E779B722C1076567F4235D06359EF9D9C6_inline(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::.ctor(System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService__ctor_mCAE5C3681C669825A225A09FAA24E065E5235D28 (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, String_t* ___name0, uint32_t ___priority1, BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * ___profile2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m74EEF198C737FDFCED8769ABFD739ABBC9116070_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t653022B4EDCE73F282430E1A396635798D309409_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<Camera> customFadeTargetCameras = new List<Camera>();
		List_1_t653022B4EDCE73F282430E1A396635798D309409 * L_0 = (List_1_t653022B4EDCE73F282430E1A396635798D309409 *)il2cpp_codegen_object_new(List_1_t653022B4EDCE73F282430E1A396635798D309409_il2cpp_TypeInfo_var);
		List_1__ctor_m74EEF198C737FDFCED8769ABFD739ABBC9116070(L_0, /*hidden argument*/List_1__ctor_m74EEF198C737FDFCED8769ABFD739ABBC9116070_RuntimeMethod_var);
		__this->set_customFadeTargetCameras_28(L_0);
		// BaseMixedRealityProfile profile) : base(name, priority, profile)
		String_t* L_1 = ___name0;
		uint32_t L_2 = ___priority1;
		BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * L_3 = ___profile2;
		BaseExtensionService__ctor_mE5BEDAB6E4EEDFD95EAEA284A179A145126CFD10(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		// sceneTransitionServiceProfile = profile as SceneTransitionServiceProfile;
		BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * L_4 = ___profile2;
		__this->set_sceneTransitionServiceProfile_24(((SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 *)IsInstClass((RuntimeObject*)L_4, SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::get_UseFadeColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneTransitionService_get_UseFadeColor_mFF9317A7AF3F0AFD19ADE209B4FB2A3C8E0959B3 (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method)
{
	{
		// public bool UseFadeColor { get; set; }
		bool L_0 = __this->get_U3CUseFadeColorU3Ek__BackingField_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::set_UseFadeColor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_set_UseFadeColor_mD6A7366B07E6FB2A8B065110CD042A438B114300 (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool UseFadeColor { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CUseFadeColorU3Ek__BackingField_15(L_0);
		return;
	}
}
// UnityEngine.Color Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::get_FadeColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  SceneTransitionService_get_FadeColor_m471A2DAD627E3B635A2042AFB82A33248E5DB6F5 (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method)
{
	{
		// public Color FadeColor { get; set; }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_U3CFadeColorU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::set_FadeColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_set_FadeColor_mE2C5CEE2784425D8A416E46C96D13451F0DFAD20 (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method)
{
	{
		// public Color FadeColor { get; set; }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___value0;
		__this->set_U3CFadeColorU3Ek__BackingField_16(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::get_FadeInTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SceneTransitionService_get_FadeInTime_m15E938D71B45AAB8102B26D140A0B020451FCECB (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method)
{
	{
		// public float FadeInTime { get; set; }
		float L_0 = __this->get_U3CFadeInTimeU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::set_FadeInTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_set_FadeInTime_mA80222964B3B15EB73EF387C3A3BA33D40BEDB9A (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float FadeInTime { get; set; }
		float L_0 = ___value0;
		__this->set_U3CFadeInTimeU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::get_FadeOutTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SceneTransitionService_get_FadeOutTime_m3ED9369249E772C3E36B16D6CA397421A75105BA (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method)
{
	{
		// public float FadeOutTime { get; set; }
		float L_0 = __this->get_U3CFadeOutTimeU3Ek__BackingField_18();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::set_FadeOutTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_set_FadeOutTime_mF5875EE829683C07F323B646EB912141265E5E34 (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float FadeOutTime { get; set; }
		float L_0 = ___value0;
		__this->set_U3CFadeOutTimeU3Ek__BackingField_18(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderTargets Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::get_FadeTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneTransitionService_get_FadeTargets_mE941417F78028883964FA95FDE71E19AAF85B8A4 (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method)
{
	{
		// public CameraFaderTargets FadeTargets { get; set; }
		int32_t L_0 = __this->get_U3CFadeTargetsU3Ek__BackingField_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::set_FadeTargets(Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderTargets)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_set_FadeTargets_mBAB759F0750BD7FF03A6D05DB7693F7F07F49160 (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public CameraFaderTargets FadeTargets { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CFadeTargetsU3Ek__BackingField_19(L_0);
		return;
	}
}
// System.Action Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::get_OnTransitionStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * SceneTransitionService_get_OnTransitionStarted_m79FE4E48928E3474EC96CD4EDA1D4D37E4395EA9 (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method)
{
	{
		// public Action OnTransitionStarted { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_U3COnTransitionStartedU3Ek__BackingField_20();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::set_OnTransitionStarted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_set_OnTransitionStarted_m16482F5FB53418A35161497D512543C1A29A5D2B (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action OnTransitionStarted { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___value0;
		__this->set_U3COnTransitionStartedU3Ek__BackingField_20(L_0);
		return;
	}
}
// System.Action Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::get_OnTransitionCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * SceneTransitionService_get_OnTransitionCompleted_mF6867F8F71EBA04AE051171723E9DAB6E488A272 (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method)
{
	{
		// public Action OnTransitionCompleted { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_U3COnTransitionCompletedU3Ek__BackingField_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::set_OnTransitionCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_set_OnTransitionCompleted_m38C2CE9F14CE9952773E7A59CBF5EDCEB22AEA56 (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action OnTransitionCompleted { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___value0;
		__this->set_U3COnTransitionCompletedU3Ek__BackingField_21(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::get_TransitionInProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneTransitionService_get_TransitionInProgress_mE88E1AFDC8306745B7B0469BC5D976B0B61A2977 (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method)
{
	{
		// public bool TransitionInProgress { get; set; }
		bool L_0 = __this->get_U3CTransitionInProgressU3Ek__BackingField_22();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::set_TransitionInProgress(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_set_TransitionInProgress_mDE23061208518F3BB45ACDD1A651DB0078E9A58B (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool TransitionInProgress { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CTransitionInProgressU3Ek__BackingField_22(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::get_TransitionProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SceneTransitionService_get_TransitionProgress_m96B6ED815088DBF5100BA6483DDBDFBB87A90179 (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method)
{
	{
		// public float TransitionProgress { get; set; }
		float L_0 = __this->get_U3CTransitionProgressU3Ek__BackingField_23();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::set_TransitionProgress(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_set_TransitionProgress_mC05727FF5587A3E64538F2C51579626D6F84562E (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float TransitionProgress { get; set; }
		float L_0 = ___value0;
		__this->set_U3CTransitionProgressU3Ek__BackingField_23(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_Initialize_m44976C1689583B7D3160F011D522F0C522868A07 (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method)
{
	{
		// base.Initialize();
		BaseService_Initialize_m468213D350A8820AF2D976385A740D38ADA538B4(__this, /*hidden argument*/NULL);
		// UseFadeColor = sceneTransitionServiceProfile.UseFadeColor;
		SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * L_0 = __this->get_sceneTransitionServiceProfile_24();
		NullCheck(L_0);
		bool L_1;
		L_1 = SceneTransitionServiceProfile_get_UseFadeColor_mA53E961E9DF1E837C7A0EF8DA533E5DA864D9DA4_inline(L_0, /*hidden argument*/NULL);
		SceneTransitionService_set_UseFadeColor_mD6A7366B07E6FB2A8B065110CD042A438B114300_inline(__this, L_1, /*hidden argument*/NULL);
		// FadeColor = sceneTransitionServiceProfile.FadeColor;
		SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * L_2 = __this->get_sceneTransitionServiceProfile_24();
		NullCheck(L_2);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = SceneTransitionServiceProfile_get_FadeColor_m433B9C9C485391AD442793ABF78661FE0AA8078C_inline(L_2, /*hidden argument*/NULL);
		SceneTransitionService_set_FadeColor_mE2C5CEE2784425D8A416E46C96D13451F0DFAD20_inline(__this, L_3, /*hidden argument*/NULL);
		// FadeInTime = sceneTransitionServiceProfile.FadeInTime;
		SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * L_4 = __this->get_sceneTransitionServiceProfile_24();
		NullCheck(L_4);
		float L_5;
		L_5 = SceneTransitionServiceProfile_get_FadeInTime_mFC2028AFF917D14FC94536ED5D4950CEABEC7615_inline(L_4, /*hidden argument*/NULL);
		SceneTransitionService_set_FadeInTime_mA80222964B3B15EB73EF387C3A3BA33D40BEDB9A_inline(__this, L_5, /*hidden argument*/NULL);
		// FadeOutTime = sceneTransitionServiceProfile.FadeOutTime;
		SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * L_6 = __this->get_sceneTransitionServiceProfile_24();
		NullCheck(L_6);
		float L_7;
		L_7 = SceneTransitionServiceProfile_get_FadeOutTime_mC2225A195CA1B12297146F4C0FE28B3C2A27E6DB_inline(L_6, /*hidden argument*/NULL);
		SceneTransitionService_set_FadeOutTime_mF5875EE829683C07F323B646EB912141265E5E34_inline(__this, L_7, /*hidden argument*/NULL);
		// FadeTargets = sceneTransitionServiceProfile.FadeTargets;
		SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * L_8 = __this->get_sceneTransitionServiceProfile_24();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = SceneTransitionServiceProfile_get_FadeTargets_mF9801D8E36093E5883D476F61786D828D1970608_inline(L_8, /*hidden argument*/NULL);
		SceneTransitionService_set_FadeTargets_mBAB759F0750BD7FF03A6D05DB7693F7F07F49160_inline(__this, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_Enable_m7CB00E605F695B469D7E0A70F101A9F0758B53E7 (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2003866100759F536E30A6F22A78916CFC09236);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!MixedRealityToolkit.IsSceneSystemEnabled)
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = MixedRealityToolkit_get_IsSceneSystemEnabled_mA93E9DAFC97256CE3A7212134E72746639E8E02B(/*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// Debug.LogError("This extension requires an active IMixedRealitySceneService.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralA2003866100759F536E30A6F22A78916CFC09236, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// base.Enable();
		BaseService_Enable_m8519B781AC05519D6A0F3C6E160254302FC73EDF(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_Destroy_m00187EE14F37CBBB4392E5069C52161C9B348F39 (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method)
{
	{
		// CleanUpDefaultProgressIndicator();
		SceneTransitionService_CleanUpDefaultProgressIndicator_mE7F5DC5D9F425CD0B6C77887DD6D185AA3028399(__this, /*hidden argument*/NULL);
		// CleanUpCameraFader();
		SceneTransitionService_CleanUpCameraFader_m935218966EC663E8EFBCA9139601C2993A51ECA2(__this, /*hidden argument*/NULL);
		// base.Destroy();
		BaseService_Destroy_mD584388A6C0D195C8EDE89F589132F71042503B2(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::DoSceneTransition(System.Func`1<System.Threading.Tasks.Task>,Microsoft.MixedReality.Toolkit.UI.IProgressIndicator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SceneTransitionService_DoSceneTransition_m42D0E72B36D149076CCA036DD6B01CF5592503DA (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * ___sceneOperation0, RuntimeObject* ___progressIndicator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F_m605D9897511B8494C8ED9714AC6857B49302FDDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F * V_0 = NULL;
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F * L_0 = (U3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F *)il2cpp_codegen_object_new(U3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F_il2cpp_TypeInfo_var);
		U3CDoSceneTransitionU3Ed__48__ctor_m501DA73781B862E451C74655DC989991C4DEF1AB(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_4(__this);
		U3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F * L_2 = V_0;
		Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * L_3 = ___sceneOperation0;
		NullCheck(L_2);
		L_2->set_sceneOperation_2(L_3);
		U3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F * L_4 = V_0;
		RuntimeObject* L_5 = ___progressIndicator1;
		NullCheck(L_4);
		L_4->set_progressIndicator_3(L_5);
		U3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_7;
		L_7 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_U3CU3Et__builder_1(L_7);
		U3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F * L_8 = V_0;
		NullCheck(L_8);
		L_8->set_U3CU3E1__state_0((-1));
		U3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F * L_9 = V_0;
		NullCheck(L_9);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_10 = L_9->get_U3CU3Et__builder_1();
		V_1 = L_10;
		AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F_m605D9897511B8494C8ED9714AC6857B49302FDDB((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F **)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F_m605D9897511B8494C8ED9714AC6857B49302FDDB_RuntimeMethod_var);
		U3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F * L_11 = V_0;
		NullCheck(L_11);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_12 = L_11->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_13;
		L_13 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::DoSceneTransition(System.Func`1<System.Threading.Tasks.Task>,System.Func`1<System.Threading.Tasks.Task>,Microsoft.MixedReality.Toolkit.UI.IProgressIndicator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SceneTransitionService_DoSceneTransition_m926A23065629906A3BD7C39531075C6F9BB8901C (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * ___sceneOp10, Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * ___sceneOp21, RuntimeObject* ___progressIndicator2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7_m573B87BAA148786338FE447E6F773D641D8436A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7 * V_0 = NULL;
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7 * L_0 = (U3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7 *)il2cpp_codegen_object_new(U3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7_il2cpp_TypeInfo_var);
		U3CDoSceneTransitionU3Ed__49__ctor_m7667293809D9745D88612A39D617B7220E7E9509(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_5(__this);
		U3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7 * L_2 = V_0;
		Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * L_3 = ___sceneOp10;
		NullCheck(L_2);
		L_2->set_sceneOp1_2(L_3);
		U3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7 * L_4 = V_0;
		Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * L_5 = ___sceneOp21;
		NullCheck(L_4);
		L_4->set_sceneOp2_3(L_5);
		U3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7 * L_6 = V_0;
		RuntimeObject* L_7 = ___progressIndicator2;
		NullCheck(L_6);
		L_6->set_progressIndicator_4(L_7);
		U3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7 * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_9;
		L_9 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		NullCheck(L_8);
		L_8->set_U3CU3Et__builder_1(L_9);
		U3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7 * L_10 = V_0;
		NullCheck(L_10);
		L_10->set_U3CU3E1__state_0((-1));
		U3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7 * L_11 = V_0;
		NullCheck(L_11);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_12 = L_11->get_U3CU3Et__builder_1();
		V_1 = L_12;
		AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7_m573B87BAA148786338FE447E6F773D641D8436A8((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7 **)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7_m573B87BAA148786338FE447E6F773D641D8436A8_RuntimeMethod_var);
		U3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7 * L_13 = V_0;
		NullCheck(L_13);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_14 = L_13->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_15;
		L_15 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::DoSceneTransition(System.Collections.Generic.IEnumerable`1<System.Func`1<System.Threading.Tasks.Task>>,Microsoft.MixedReality.Toolkit.UI.IProgressIndicator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SceneTransitionService_DoSceneTransition_mB5933D3D6E221C8F93412EFB71E9B6F060CBB558 (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, RuntimeObject* ___sceneOperations0, RuntimeObject* ___progressIndicator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309_mF5931D1290576F8AA883EFAED6DC52D07C76D865_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309 * V_0 = NULL;
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309 * L_0 = (U3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309 *)il2cpp_codegen_object_new(U3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309_il2cpp_TypeInfo_var);
		U3CDoSceneTransitionU3Ed__50__ctor_mFC0C114504A8E17363A0ED998F37729402B229DD(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_4(__this);
		U3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309 * L_2 = V_0;
		RuntimeObject* L_3 = ___sceneOperations0;
		NullCheck(L_2);
		L_2->set_sceneOperations_2(L_3);
		U3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309 * L_4 = V_0;
		RuntimeObject* L_5 = ___progressIndicator1;
		NullCheck(L_4);
		L_4->set_progressIndicator_3(L_5);
		U3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_7;
		L_7 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_U3CU3Et__builder_1(L_7);
		U3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309 * L_8 = V_0;
		NullCheck(L_8);
		L_8->set_U3CU3E1__state_0((-1));
		U3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309 * L_9 = V_0;
		NullCheck(L_9);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_10 = L_9->get_U3CU3Et__builder_1();
		V_1 = L_10;
		AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309_mF5931D1290576F8AA883EFAED6DC52D07C76D865((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309 **)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309_mF5931D1290576F8AA883EFAED6DC52D07C76D865_RuntimeMethod_var);
		U3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309 * L_11 = V_0;
		NullCheck(L_11);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_12 = L_11->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_13;
		L_13 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::DoSceneTransition(System.Collections.Generic.IEnumerable`1<System.Func`1<System.Threading.Tasks.Task>>,System.Single,System.Single,Microsoft.MixedReality.Toolkit.UI.IProgressIndicator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SceneTransitionService_DoSceneTransition_m4DB41055B7EE65708B43A7DE6D7731C5A69D5D26 (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, RuntimeObject* ___sceneOperations0, float ___fadeOutTime1, float ___fadeInTime2, RuntimeObject* ___progressIndicator3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2_m33AA74366F1C0FCADAAA098024850E2EA68D41F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2 * V_0 = NULL;
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2 * L_0 = (U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2 *)il2cpp_codegen_object_new(U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2_il2cpp_TypeInfo_var);
		U3CDoSceneTransitionU3Ed__52__ctor_m74B6475F2C40B802A7D500224E8BFE7315CFBDF0(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_6(__this);
		U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2 * L_2 = V_0;
		RuntimeObject* L_3 = ___sceneOperations0;
		NullCheck(L_2);
		L_2->set_sceneOperations_2(L_3);
		U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2 * L_4 = V_0;
		float L_5 = ___fadeOutTime1;
		NullCheck(L_4);
		L_4->set_fadeOutTime_3(L_5);
		U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2 * L_6 = V_0;
		float L_7 = ___fadeInTime2;
		NullCheck(L_6);
		L_6->set_fadeInTime_4(L_7);
		U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2 * L_8 = V_0;
		RuntimeObject* L_9 = ___progressIndicator3;
		NullCheck(L_8);
		L_8->set_progressIndicator_5(L_9);
		U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_11;
		L_11 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		NullCheck(L_10);
		L_10->set_U3CU3Et__builder_1(L_11);
		U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2 * L_12 = V_0;
		NullCheck(L_12);
		L_12->set_U3CU3E1__state_0((-1));
		U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2 * L_13 = V_0;
		NullCheck(L_13);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_14 = L_13->get_U3CU3Et__builder_1();
		V_1 = L_14;
		AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2_m33AA74366F1C0FCADAAA098024850E2EA68D41F0((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2 **)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2_m33AA74366F1C0FCADAAA098024850E2EA68D41F0_RuntimeMethod_var);
		U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2 * L_15 = V_0;
		NullCheck(L_15);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_16 = L_15->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_17;
		L_17 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::SetCustomFadeTargetCameras(System.Collections.Generic.IEnumerable`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_SetCustomFadeTargetCameras_m3CC0DCB8AE0E1433925FD95C44103B44F1589B4B (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, RuntimeObject* ___customFadeTargetCameras0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m28392D52AC9E4C794A9712D1693D07F29A633DAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m639FF66F3E16E132E6B323366123C4DEAFBB548B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.customFadeTargetCameras.Clear();
		List_1_t653022B4EDCE73F282430E1A396635798D309409 * L_0 = __this->get_customFadeTargetCameras_28();
		NullCheck(L_0);
		List_1_Clear_m639FF66F3E16E132E6B323366123C4DEAFBB548B(L_0, /*hidden argument*/List_1_Clear_m639FF66F3E16E132E6B323366123C4DEAFBB548B_RuntimeMethod_var);
		// this.customFadeTargetCameras.AddRange(customFadeTargetCameras);
		List_1_t653022B4EDCE73F282430E1A396635798D309409 * L_1 = __this->get_customFadeTargetCameras_28();
		RuntimeObject* L_2 = ___customFadeTargetCameras0;
		NullCheck(L_1);
		List_1_AddRange_m28392D52AC9E4C794A9712D1693D07F29A633DAF(L_1, L_2, /*hidden argument*/List_1_AddRange_m28392D52AC9E4C794A9712D1693D07F29A633DAF_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::FadeOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SceneTransitionService_FadeOut_m1E5E9E4A3D15B631557B624ADF34950B3B892771 (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A_m336F2AFCEABD26C593A7EE9EF663C19D308E1786_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A * V_0 = NULL;
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A * L_0 = (U3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A *)il2cpp_codegen_object_new(U3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A_il2cpp_TypeInfo_var);
		U3CFadeOutU3Ed__54__ctor_m91FDEFFA8058399F9EE40D7A69034C4470C692DB(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_3;
		L_3 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_U3CU3Et__builder_1(L_3);
		U3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A * L_4 = V_0;
		NullCheck(L_4);
		L_4->set_U3CU3E1__state_0((-1));
		U3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A * L_5 = V_0;
		NullCheck(L_5);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_6 = L_5->get_U3CU3Et__builder_1();
		V_1 = L_6;
		AsyncTaskMethodBuilder_Start_TisU3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A_m336F2AFCEABD26C593A7EE9EF663C19D308E1786((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A **)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A_m336F2AFCEABD26C593A7EE9EF663C19D308E1786_RuntimeMethod_var);
		U3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A * L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_8 = L_7->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_9;
		L_9 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::FadeIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SceneTransitionService_FadeIn_m1D7F87CB440EFCEED6199BEE468E8D745D5A7C3D (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB_m506BB205CF14CD8731C066A43D6E2945A22BBDC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB * V_0 = NULL;
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB * L_0 = (U3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB *)il2cpp_codegen_object_new(U3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB_il2cpp_TypeInfo_var);
		U3CFadeInU3Ed__55__ctor_mF3B7B6CCC87226AA5525F52F982F58B8B673A075(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_3;
		L_3 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_U3CU3Et__builder_1(L_3);
		U3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB * L_4 = V_0;
		NullCheck(L_4);
		L_4->set_U3CU3E1__state_0((-1));
		U3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB * L_5 = V_0;
		NullCheck(L_5);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_6 = L_5->get_U3CU3Et__builder_1();
		V_1 = L_6;
		AsyncTaskMethodBuilder_Start_TisU3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB_m506BB205CF14CD8731C066A43D6E2945A22BBDC4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB **)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB_m506BB205CF14CD8731C066A43D6E2945A22BBDC4_RuntimeMethod_var);
		U3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB * L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_8 = L_7->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_9;
		L_9 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::FadeOut(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SceneTransitionService_FadeOut_m3572A602877F506CE83D7759824DA66D96BA6A4B (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, float ___fadeOutTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761_mB01CCE141C9C702E21D76207C447914F22605288_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761 * V_0 = NULL;
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761 * L_0 = (U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761 *)il2cpp_codegen_object_new(U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761_il2cpp_TypeInfo_var);
		U3CFadeOutU3Ed__57__ctor_mD2C4DE55A2A4F40152AD271E82950D021E9B55D0(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761 * L_2 = V_0;
		float L_3 = ___fadeOutTime0;
		NullCheck(L_2);
		L_2->set_fadeOutTime_2(L_3);
		U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_5;
		L_5 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_U3CU3Et__builder_1(L_5);
		U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761 * L_6 = V_0;
		NullCheck(L_6);
		L_6->set_U3CU3E1__state_0((-1));
		U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761 * L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_8 = L_7->get_U3CU3Et__builder_1();
		V_1 = L_8;
		AsyncTaskMethodBuilder_Start_TisU3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761_mB01CCE141C9C702E21D76207C447914F22605288((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761 **)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761_mB01CCE141C9C702E21D76207C447914F22605288_RuntimeMethod_var);
		U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761 * L_9 = V_0;
		NullCheck(L_9);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_10 = L_9->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_11;
		L_11 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::FadeIn(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SceneTransitionService_FadeIn_mD91CE8759A1F0EABE73EA23CDF7002821F0B615A (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, float ___fadeInTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490_m4AF638634411EC5599708CD519724EC06C095EF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490 * V_0 = NULL;
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490 * L_0 = (U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490 *)il2cpp_codegen_object_new(U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490_il2cpp_TypeInfo_var);
		U3CFadeInU3Ed__59__ctor_m0A72F0E4B03BC75E8BE5DF81963E47127D165046(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490 * L_2 = V_0;
		float L_3 = ___fadeInTime0;
		NullCheck(L_2);
		L_2->set_fadeInTime_2(L_3);
		U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_5;
		L_5 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_U3CU3Et__builder_1(L_5);
		U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490 * L_6 = V_0;
		NullCheck(L_6);
		L_6->set_U3CU3E1__state_0((-1));
		U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490 * L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_8 = L_7->get_U3CU3Et__builder_1();
		V_1 = L_8;
		AsyncTaskMethodBuilder_Start_TisU3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490_m4AF638634411EC5599708CD519724EC06C095EF8((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490 **)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490_m4AF638634411EC5599708CD519724EC06C095EF8_RuntimeMethod_var);
		U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490 * L_9 = V_0;
		NullCheck(L_9);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_10 = L_9->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_11;
		L_11 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::ShowDefaultProgressIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * SceneTransitionService_ShowDefaultProgressIndicator_m8FBB1E6A7084C2E03BD58F58E19683FB2589C098 (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProgressIndicator_t9C6F896C9D44D4078E294EF6E62471A3B5E1F3F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (ShowDefaultProgressIndicatorPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_il2cpp_TypeInfo_var))->get_ShowDefaultProgressIndicatorPerfMarker_32();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// CreateDefaultProgressIndicator();
			SceneTransitionService_CreateDefaultProgressIndicator_m66C1E1419E72B6CCBD497A5A760282B28E8C6A60(__this, /*hidden argument*/NULL);
			// switch (defaultProgressIndicator.State)
			RuntimeObject* L_2 = __this->get_defaultProgressIndicator_26();
			NullCheck(L_2);
			int32_t L_3;
			L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Microsoft.MixedReality.Toolkit.UI.ProgressIndicatorState Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::get_State() */, IProgressIndicator_t9C6F896C9D44D4078E294EF6E62471A3B5E1F3F9_il2cpp_TypeInfo_var, L_2);
			V_3 = L_3;
			int32_t L_4 = V_3;
			V_2 = L_4;
			int32_t L_5 = V_2;
			switch (L_5)
			{
				case 0:
				{
					goto IL_003f;
				}
				case 1:
				{
					goto IL_003d;
				}
				case 2:
				{
					goto IL_003d;
				}
				case 3:
				{
					goto IL_004d;
				}
			}
		}

IL_003b:
		{
			goto IL_004d;
		}

IL_003d:
		{
			// break;
			goto IL_005b;
		}

IL_003f:
		{
			// defaultProgressIndicator.OpenAsync();
			RuntimeObject* L_6 = __this->get_defaultProgressIndicator_26();
			NullCheck(L_6);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_7;
			L_7 = InterfaceFuncInvoker0< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * >::Invoke(4 /* System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::OpenAsync() */, IProgressIndicator_t9C6F896C9D44D4078E294EF6E62471A3B5E1F3F9_il2cpp_TypeInfo_var, L_6);
			// break;
			goto IL_005b;
		}

IL_004d:
		{
			// defaultProgressIndicator.OpenAsync();
			RuntimeObject* L_8 = __this->get_defaultProgressIndicator_26();
			NullCheck(L_8);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_9;
			L_9 = InterfaceFuncInvoker0< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * >::Invoke(4 /* System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::OpenAsync() */, IProgressIndicator_t9C6F896C9D44D4078E294EF6E62471A3B5E1F3F9_il2cpp_TypeInfo_var, L_8);
			// break;
			goto IL_005b;
		}

IL_005b:
		{
			// return defaultProgressIndicator.MainTransform;
			RuntimeObject* L_10 = __this->get_defaultProgressIndicator_26();
			NullCheck(L_10);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
			L_11 = InterfaceFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(0 /* UnityEngine.Transform Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::get_MainTransform() */, IProgressIndicator_t9C6F896C9D44D4078E294EF6E62471A3B5E1F3F9_il2cpp_TypeInfo_var, L_10);
			V_4 = L_11;
			IL2CPP_LEAVE(0x79, FINALLY_006a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006a;
	}

FINALLY_006a:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(106)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(106)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x79, IL_0079)
	}

IL_0079:
	{
		// }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = V_4;
		return L_12;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::HideProgressIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SceneTransitionService_HideProgressIndicator_m904FA4FF0D801CE69BC3779837B46714B4099EF7 (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB_mEAFDEFD63984C5D00C6E196CB5D657ED6C2F5849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB * V_0 = NULL;
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB * L_0 = (U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB *)il2cpp_codegen_object_new(U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB_il2cpp_TypeInfo_var);
		U3CHideProgressIndicatorU3Ed__63__ctor_mFB63A8219C8E58BC3DDAD9B34A0E76CDB1170640(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_3;
		L_3 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_U3CU3Et__builder_1(L_3);
		U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB * L_4 = V_0;
		NullCheck(L_4);
		L_4->set_U3CU3E1__state_0((-1));
		U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB * L_5 = V_0;
		NullCheck(L_5);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_6 = L_5->get_U3CU3Et__builder_1();
		V_1 = L_6;
		AsyncTaskMethodBuilder_Start_TisU3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB_mEAFDEFD63984C5D00C6E196CB5D657ED6C2F5849((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB **)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB_mEAFDEFD63984C5D00C6E196CB5D657ED6C2F5849_RuntimeMethod_var);
		U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB * L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_8 = L_7->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_9;
		L_9 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::SetProgressMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_SetProgressMessage_mC106E7A65FA3ACBC59C37395440C73E6916A152A (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProgressIndicator_t9C6F896C9D44D4078E294EF6E62471A3B5E1F3F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81852CEFB8E88AEF06AD93EFD4AD80348EDED312);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (defaultProgressIndicator == null)
		RuntimeObject* L_0 = __this->get_defaultProgressIndicator_26();
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// Debug.LogWarning("Progress Indicator has not been launched. Taking no action.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral81852CEFB8E88AEF06AD93EFD4AD80348EDED312, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// defaultProgressIndicator.Message = message;
		RuntimeObject* L_2 = __this->get_defaultProgressIndicator_26();
		String_t* L_3 = ___message0;
		NullCheck(L_2);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::set_Message(System.String) */, IProgressIndicator_t9C6F896C9D44D4078E294EF6E62471A3B5E1F3F9_il2cpp_TypeInfo_var, L_2, L_3);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::SetProgressValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_SetProgressValue_mD64E196D27522C36EBB6981466CE2947BDC36CD5 (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, float ___progress0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProgressIndicator_t9C6F896C9D44D4078E294EF6E62471A3B5E1F3F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81852CEFB8E88AEF06AD93EFD4AD80348EDED312);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (defaultProgressIndicator == null)
		RuntimeObject* L_0 = __this->get_defaultProgressIndicator_26();
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// Debug.LogWarning("Progress Indicator has not been launched. Taking no action.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral81852CEFB8E88AEF06AD93EFD4AD80348EDED312, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// defaultProgressIndicator.Progress = progress;
		RuntimeObject* L_2 = __this->get_defaultProgressIndicator_26();
		float L_3 = ___progress0;
		NullCheck(L_2);
		InterfaceActionInvoker1< float >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::set_Progress(System.Single) */, IProgressIndicator_t9C6F896C9D44D4078E294EF6E62471A3B5E1F3F9_il2cpp_TypeInfo_var, L_2, L_3);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Camera> Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::GatherFadeTargetCameras()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t653022B4EDCE73F282430E1A396635798D309409 * SceneTransitionService_GatherFadeTargetCameras_m05A7148CAE208F02964171818D8B8000F4D93234 (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m28392D52AC9E4C794A9712D1693D07F29A633DAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5B457832A4D4C94E86A39767276F999140B677B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m74EEF198C737FDFCED8769ABFD739ABBC9116070_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8FB149686794063D5004BAB8D71F1C150777F04D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t653022B4EDCE73F282430E1A396635798D309409_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mC55BE8C73A55B2398CB2C20AA96459DFB6F1FCE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mE367AB133A26DA125A1E60158473C8DF02581A38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	List_1_t653022B4EDCE73F282430E1A396635798D309409 * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF* V_5 = NULL;
	int32_t V_6 = 0;
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	List_1_t653022B4EDCE73F282430E1A396635798D309409 * V_12 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (GatherFadeTargetCamerasPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_il2cpp_TypeInfo_var))->get_GatherFadeTargetCamerasPerfMarker_34();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// List<Camera> targetCameras = new List<Camera>();
			List_1_t653022B4EDCE73F282430E1A396635798D309409 * L_2 = (List_1_t653022B4EDCE73F282430E1A396635798D309409 *)il2cpp_codegen_object_new(List_1_t653022B4EDCE73F282430E1A396635798D309409_il2cpp_TypeInfo_var);
			List_1__ctor_m74EEF198C737FDFCED8769ABFD739ABBC9116070(L_2, /*hidden argument*/List_1__ctor_m74EEF198C737FDFCED8769ABFD739ABBC9116070_RuntimeMethod_var);
			V_2 = L_2;
			// switch (FadeTargets)
			int32_t L_3;
			L_3 = SceneTransitionService_get_FadeTargets_mE941417F78028883964FA95FDE71E19AAF85B8A4_inline(__this, /*hidden argument*/NULL);
			V_4 = L_3;
			int32_t L_4 = V_4;
			V_3 = L_4;
			int32_t L_5 = V_3;
			switch (L_5)
			{
				case 0:
				{
					goto IL_004d;
				}
				case 1:
				{
					goto IL_005e;
				}
				case 2:
				{
					goto IL_003c;
				}
				case 3:
				{
					goto IL_00c7;
				}
			}
		}

IL_0037:
		{
			goto IL_00f5;
		}

IL_003c:
		{
			// targetCameras.AddRange(GameObject.FindObjectsOfType<Camera>());
			List_1_t653022B4EDCE73F282430E1A396635798D309409 * L_6 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* L_7;
			L_7 = Object_FindObjectsOfType_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mC55BE8C73A55B2398CB2C20AA96459DFB6F1FCE1(/*hidden argument*/Object_FindObjectsOfType_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mC55BE8C73A55B2398CB2C20AA96459DFB6F1FCE1_RuntimeMethod_var);
			NullCheck(L_6);
			List_1_AddRange_m28392D52AC9E4C794A9712D1693D07F29A633DAF(L_6, (RuntimeObject*)(RuntimeObject*)L_7, /*hidden argument*/List_1_AddRange_m28392D52AC9E4C794A9712D1693D07F29A633DAF_RuntimeMethod_var);
			// break;
			goto IL_00f5;
		}

IL_004d:
		{
			// targetCameras.Add(CameraCache.Main);
			List_1_t653022B4EDCE73F282430E1A396635798D309409 * L_8 = V_2;
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_9;
			L_9 = CameraCache_get_Main_m23DFE991C3A937306115E7BAA6ECF6F27D2B57A1(/*hidden argument*/NULL);
			NullCheck(L_8);
			List_1_Add_m5B457832A4D4C94E86A39767276F999140B677B7(L_8, L_9, /*hidden argument*/List_1_Add_m5B457832A4D4C94E86A39767276F999140B677B7_RuntimeMethod_var);
			// break;
			goto IL_00f5;
		}

IL_005e:
		{
			// foreach (Canvas canvas in GameObject.FindObjectsOfType<Canvas>())
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF* L_10;
			L_10 = Object_FindObjectsOfType_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mE367AB133A26DA125A1E60158473C8DF02581A38(/*hidden argument*/Object_FindObjectsOfType_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mE367AB133A26DA125A1E60158473C8DF02581A38_RuntimeMethod_var);
			V_5 = L_10;
			V_6 = 0;
			goto IL_00bd;
		}

IL_006b:
		{
			// foreach (Canvas canvas in GameObject.FindObjectsOfType<Canvas>())
			CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF* L_11 = V_5;
			int32_t L_12 = V_6;
			NullCheck(L_11);
			int32_t L_13 = L_12;
			Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
			V_7 = L_14;
			// switch (canvas.renderMode)
			Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_15 = V_7;
			NullCheck(L_15);
			int32_t L_16;
			L_16 = Canvas_get_renderMode_mAEC8A341577CC74EC89D5890E6D6E4A82B03574D(L_15, /*hidden argument*/NULL);
			V_9 = L_16;
			int32_t L_17 = V_9;
			V_8 = L_17;
			int32_t L_18 = V_8;
			if (!L_18)
			{
				goto IL_00b4;
			}
		}

IL_0084:
		{
			goto IL_0086;
		}

IL_0086:
		{
			int32_t L_19 = V_8;
			if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1))) > ((uint32_t)1))))
			{
				goto IL_008f;
			}
		}

IL_008d:
		{
			goto IL_00b4;
		}

IL_008f:
		{
			// if (canvas.worldCamera != null)
			Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_20 = V_7;
			NullCheck(L_20);
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_21;
			L_21 = Canvas_get_worldCamera_mFE4C9FDA7996FE20AC5CA3CB45B4190C40122D51(L_20, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_22;
			L_22 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_21, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			V_10 = L_22;
			bool L_23 = V_10;
			if (!L_23)
			{
				goto IL_00b2;
			}
		}

IL_00a2:
		{
			// targetCameras.Add(canvas.worldCamera);
			List_1_t653022B4EDCE73F282430E1A396635798D309409 * L_24 = V_2;
			Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_25 = V_7;
			NullCheck(L_25);
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_26;
			L_26 = Canvas_get_worldCamera_mFE4C9FDA7996FE20AC5CA3CB45B4190C40122D51(L_25, /*hidden argument*/NULL);
			NullCheck(L_24);
			List_1_Add_m5B457832A4D4C94E86A39767276F999140B677B7(L_24, L_26, /*hidden argument*/List_1_Add_m5B457832A4D4C94E86A39767276F999140B677B7_RuntimeMethod_var);
		}

IL_00b2:
		{
			// break;
			goto IL_00b6;
		}

IL_00b4:
		{
			// break;
			goto IL_00b6;
		}

IL_00b6:
		{
			int32_t L_27 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		}

IL_00bd:
		{
			// foreach (Canvas canvas in GameObject.FindObjectsOfType<Canvas>())
			int32_t L_28 = V_6;
			CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF* L_29 = V_5;
			NullCheck(L_29);
			if ((((int32_t)L_28) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))))))
			{
				goto IL_006b;
			}
		}

IL_00c5:
		{
			// break;
			goto IL_00f5;
		}

IL_00c7:
		{
			// if (customFadeTargetCameras.Count == 0)
			List_1_t653022B4EDCE73F282430E1A396635798D309409 * L_30 = __this->get_customFadeTargetCameras_28();
			NullCheck(L_30);
			int32_t L_31;
			L_31 = List_1_get_Count_m8FB149686794063D5004BAB8D71F1C150777F04D_inline(L_30, /*hidden argument*/List_1_get_Count_m8FB149686794063D5004BAB8D71F1C150777F04D_RuntimeMethod_var);
			V_11 = (bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
			bool L_32 = V_11;
			if (!L_32)
			{
				goto IL_00e6;
			}
		}

IL_00db:
		{
			// throw new Exception("Attempting to fade custom target cameras but none were supplied. Use SetCustomFadeCameras prior to calling TransitionToScene.");
			Exception_t * L_33 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
			Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_33, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6188E7230D6EC2CB653C4B636C9EB4E43FA23E5B)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SceneTransitionService_GatherFadeTargetCameras_m05A7148CAE208F02964171818D8B8000F4D93234_RuntimeMethod_var)));
		}

IL_00e6:
		{
			// targetCameras.AddRange(customFadeTargetCameras);
			List_1_t653022B4EDCE73F282430E1A396635798D309409 * L_34 = V_2;
			List_1_t653022B4EDCE73F282430E1A396635798D309409 * L_35 = __this->get_customFadeTargetCameras_28();
			NullCheck(L_34);
			List_1_AddRange_m28392D52AC9E4C794A9712D1693D07F29A633DAF(L_34, L_35, /*hidden argument*/List_1_AddRange_m28392D52AC9E4C794A9712D1693D07F29A633DAF_RuntimeMethod_var);
			// break;
			goto IL_00f5;
		}

IL_00f5:
		{
			// return targetCameras;
			List_1_t653022B4EDCE73F282430E1A396635798D309409 * L_36 = V_2;
			V_12 = L_36;
			IL2CPP_LEAVE(0x109, FINALLY_00fa);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00fa;
	}

FINALLY_00fa:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(250)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(250)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x109, IL_0109)
	}

IL_0109:
	{
		// }
		List_1_t653022B4EDCE73F282430E1A396635798D309409 * L_37 = V_12;
		return L_37;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::CreateDefaultProgressIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_CreateDefaultProgressIndicator_m66C1E1419E72B6CCBD497A5A760282B28E8C6A60 (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProgressIndicator_t9C6F896C9D44D4078E294EF6E62471A3B5E1F3F9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProgressIndicator_t9C6F896C9D44D4078E294EF6E62471A3B5E1F3F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (defaultProgressIndicator != null)
		RuntimeObject* L_0 = __this->get_defaultProgressIndicator_26();
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		goto IL_0081;
	}

IL_0011:
	{
		// if (sceneTransitionServiceProfile.DefaultProgressIndicatorPrefab == null)
		SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * L_2 = __this->get_sceneTransitionServiceProfile_24();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = SceneTransitionServiceProfile_get_DefaultProgressIndicatorPrefab_mC5EA938C85BD421AA81DB7A792594A6E8CB876D4_inline(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		// throw new Exception("No progress indicator prefab found in profile.");
		Exception_t * L_6 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6BD6FA6FBD0F285B5107F463210EB588E48F051A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SceneTransitionService_CreateDefaultProgressIndicator_m66C1E1419E72B6CCBD497A5A760282B28E8C6A60_RuntimeMethod_var)));
	}

IL_0032:
	{
		// progressIndicatorObject = GameObject.Instantiate(sceneTransitionServiceProfile.DefaultProgressIndicatorPrefab);
		SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * L_7 = __this->get_sceneTransitionServiceProfile_24();
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = SceneTransitionServiceProfile_get_DefaultProgressIndicatorPrefab_mC5EA938C85BD421AA81DB7A792594A6E8CB876D4_inline(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_8, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		__this->set_progressIndicatorObject_25(L_9);
		// defaultProgressIndicator = (IProgressIndicator)progressIndicatorObject.GetComponent(typeof(IProgressIndicator));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_progressIndicatorObject_25();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (IProgressIndicator_t9C6F896C9D44D4078E294EF6E62471A3B5E1F3F9_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_13;
		L_13 = GameObject_GetComponent_mDF0C55D6EE63B6CA0DD45D627AD267004D6EC473(L_10, L_12, /*hidden argument*/NULL);
		__this->set_defaultProgressIndicator_26(((RuntimeObject*)Castclass((RuntimeObject*)L_13, IProgressIndicator_t9C6F896C9D44D4078E294EF6E62471A3B5E1F3F9_il2cpp_TypeInfo_var)));
		// if (defaultProgressIndicator == null)
		RuntimeObject* L_14 = __this->get_defaultProgressIndicator_26();
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_14) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_0081;
		}
	}
	{
		// throw new Exception("Progress indicator prefab doesn't have a script implementing IProgressIndicator.");
		Exception_t * L_16 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral812B93C972F83E269C898CB9FEF20AD1ADA64217)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SceneTransitionService_CreateDefaultProgressIndicator_m66C1E1419E72B6CCBD497A5A760282B28E8C6A60_RuntimeMethod_var)));
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::CleanUpDefaultProgressIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_CleanUpDefaultProgressIndicator_mE7F5DC5D9F425CD0B6C77887DD6D185AA3028399 (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (progressIndicatorObject != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_progressIndicatorObject_25();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// GameObjectExtensions.DestroyGameObject(progressIndicatorObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_progressIndicatorObject_25();
		GameObjectExtensions_DestroyGameObject_m471FAF8D3086DCA59F432CC13171D3B1E9EA3AD7(L_3, (0.0f), /*hidden argument*/NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::CreateCameraFader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_CreateCameraFader_m2F10F6975B011F99747AA30E5533D10C3CFF67AF (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICameraFader_t5A340FB234F3C91DE810CFB0542DC48F56506F0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Type_t * G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	Type_t * G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	{
		// if (cameraFader != null)
		RuntimeObject* L_0 = __this->get_cameraFader_27();
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		goto IL_007d;
	}

IL_0011:
	{
		// cameraFader = (ICameraFader)Activator.CreateInstance(sceneTransitionServiceProfile.CameraFaderType.Type);
		SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * L_2 = __this->get_sceneTransitionServiceProfile_24();
		NullCheck(L_2);
		SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E * L_3;
		L_3 = SceneTransitionServiceProfile_get_CameraFaderType_mC2D04FEBFCA35EE0104D9398417AC2FD76511122_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Type_t * L_4;
		L_4 = SystemType_get_Type_mD7B7EEF3C5ED6B16E2DFB9F89FCE9A8B58895E23_inline(L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5;
		L_5 = Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295(L_4, /*hidden argument*/NULL);
		__this->set_cameraFader_27(((RuntimeObject*)Castclass((RuntimeObject*)L_5, ICameraFader_t5A340FB234F3C91DE810CFB0542DC48F56506F0A_il2cpp_TypeInfo_var)));
		// cameraFader.Initialize(sceneTransitionServiceProfile);
		RuntimeObject* L_6 = __this->get_cameraFader_27();
		SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * L_7 = __this->get_sceneTransitionServiceProfile_24();
		NullCheck(L_6);
		InterfaceActionInvoker1< SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.ICameraFader::Initialize(Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile) */, ICameraFader_t5A340FB234F3C91DE810CFB0542DC48F56506F0A_il2cpp_TypeInfo_var, L_6, L_7);
		// if (cameraFader == null)
		RuntimeObject* L_8 = __this->get_cameraFader_27();
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_007d;
		}
	}
	{
		// throw new Exception("Couldn't create camera fader of type " + sceneTransitionServiceProfile.CameraFaderType.Type);
		SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * L_10 = __this->get_sceneTransitionServiceProfile_24();
		NullCheck(L_10);
		SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E * L_11;
		L_11 = SceneTransitionServiceProfile_get_CameraFaderType_mC2D04FEBFCA35EE0104D9398417AC2FD76511122_inline(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Type_t * L_12;
		L_12 = SystemType_get_Type_mD7B7EEF3C5ED6B16E2DFB9F89FCE9A8B58895E23_inline(L_11, /*hidden argument*/NULL);
		Type_t * L_13 = L_12;
		G_B4_0 = L_13;
		G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB85BD2A90D444EDBD4F18BEBB782A0CA3E1B6F7A));
		if (L_13)
		{
			G_B5_0 = L_13;
			G_B5_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB85BD2A90D444EDBD4F18BEBB782A0CA3E1B6F7A));
			goto IL_006d;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		goto IL_0072;
	}

IL_006d:
	{
		NullCheck(G_B5_0);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B5_0);
		G_B6_0 = L_14;
		G_B6_1 = G_B5_1;
	}

IL_0072:
	{
		String_t* L_15;
		L_15 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B6_1, G_B6_0, /*hidden argument*/NULL);
		Exception_t * L_16 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_16, L_15, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SceneTransitionService_CreateCameraFader_m2F10F6975B011F99747AA30E5533D10C3CFF67AF_RuntimeMethod_var)));
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::CleanUpCameraFader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_CleanUpCameraFader_m935218966EC663E8EFBCA9139601C2993A51ECA2 (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICameraFader_t5A340FB234F3C91DE810CFB0542DC48F56506F0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (cameraFader != null)
		RuntimeObject* L_0 = __this->get_cameraFader_27();
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// cameraFader.OnDestroy();
		RuntimeObject* L_2 = __this->get_cameraFader_27();
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.ICameraFader::OnDestroy() */, ICameraFader_t5A340FB234F3C91DE810CFB0542DC48F56506F0A_il2cpp_TypeInfo_var, L_2);
		// cameraFader = null;
		__this->set_cameraFader_27((RuntimeObject*)NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService__cctor_m0958076ED0BC259B7C75DD87A035E054294F034F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31458AD0C0AF1F61C0D182621815EEB4ACF048D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4455AB79907F48883B90E43E3480CC3C4C7EF749);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4543A8A600AAF621D5B283482F0136C2F216FF62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8828DDA20B74971CEC31D21BD2E54441F8B587BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7A3B911B8B657663E66DA058B2F981A6805D3F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5121B082D242C1BD514B12BF0C187A5993C5215);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker DoSceneTransitionPerfMarker = new ProfilerMarker("[MRTK] SceneTransitionService.DoSceneTransition");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral31458AD0C0AF1F61C0D182621815EEB4ACF048D6, /*hidden argument*/NULL);
		((SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_il2cpp_TypeInfo_var))->set_DoSceneTransitionPerfMarker_29(L_0);
		// private static readonly ProfilerMarker FadeOutPerfMarker = new ProfilerMarker("[MRTK] SceneTransitionService.FadeOut");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), _stringLiteral4455AB79907F48883B90E43E3480CC3C4C7EF749, /*hidden argument*/NULL);
		((SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_il2cpp_TypeInfo_var))->set_FadeOutPerfMarker_30(L_1);
		// private static readonly ProfilerMarker FadeInPerfMarker = new ProfilerMarker("[MRTK] SceneTransitionService.FadeIn");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_2), _stringLiteralE5121B082D242C1BD514B12BF0C187A5993C5215, /*hidden argument*/NULL);
		((SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_il2cpp_TypeInfo_var))->set_FadeInPerfMarker_31(L_2);
		// private static readonly ProfilerMarker ShowDefaultProgressIndicatorPerfMarker = new ProfilerMarker("[MRTK] SceneTransitionService.ShowDefaultProgressIndicator");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_3), _stringLiteral4543A8A600AAF621D5B283482F0136C2F216FF62, /*hidden argument*/NULL);
		((SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_il2cpp_TypeInfo_var))->set_ShowDefaultProgressIndicatorPerfMarker_32(L_3);
		// private static readonly ProfilerMarker HideProgressIndicatorPerfMarker = new ProfilerMarker("[MRTK] SceneTransitionService.HideProgressIndicator");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_4), _stringLiteral8828DDA20B74971CEC31D21BD2E54441F8B587BE, /*hidden argument*/NULL);
		((SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_il2cpp_TypeInfo_var))->set_HideProgressIndicatorPerfMarker_33(L_4);
		// private static readonly ProfilerMarker GatherFadeTargetCamerasPerfMarker = new ProfilerMarker("[MRTK] SceneTransitionService.GatherFrameTargetCameras");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_5;
		memset((&L_5), 0, sizeof(L_5));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_5), _stringLiteralD7A3B911B8B657663E66DA058B2F981A6805D3F1, /*hidden argument*/NULL);
		((SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_il2cpp_TypeInfo_var))->set_GatherFadeTargetCamerasPerfMarker_34(L_5);
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
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_UseDefaultProgressIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneTransitionServiceProfile_get_UseDefaultProgressIndicator_mAA156F923F259F32C85571D58510DE29E5AE1DFA (SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * __this, const RuntimeMethod* method)
{
	{
		// public bool UseDefaultProgressIndicator => useDefaultProgressIndicator;
		bool L_0 = __this->get_useDefaultProgressIndicator_5();
		return L_0;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_DefaultProgressIndicatorPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * SceneTransitionServiceProfile_get_DefaultProgressIndicatorPrefab_mC5EA938C85BD421AA81DB7A792594A6E8CB876D4 (SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject DefaultProgressIndicatorPrefab => defaultProgressIndicatorPrefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_defaultProgressIndicatorPrefab_6();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_CameraFaderType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E * SceneTransitionServiceProfile_get_CameraFaderType_mC2D04FEBFCA35EE0104D9398417AC2FD76511122 (SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * __this, const RuntimeMethod* method)
{
	{
		// public SystemType CameraFaderType => cameraFaderType;
		SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E * L_0 = __this->get_cameraFaderType_12();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_UseFadeColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneTransitionServiceProfile_get_UseFadeColor_mA53E961E9DF1E837C7A0EF8DA533E5DA864D9DA4 (SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * __this, const RuntimeMethod* method)
{
	{
		// public bool UseFadeColor => useFadeColor;
		bool L_0 = __this->get_useFadeColor_7();
		return L_0;
	}
}
// UnityEngine.Color Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_FadeColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  SceneTransitionServiceProfile_get_FadeColor_m433B9C9C485391AD442793ABF78661FE0AA8078C (SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * __this, const RuntimeMethod* method)
{
	{
		// public Color FadeColor => fadeColor;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_fadeColor_8();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_FadeOutTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SceneTransitionServiceProfile_get_FadeOutTime_mC2225A195CA1B12297146F4C0FE28B3C2A27E6DB (SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * __this, const RuntimeMethod* method)
{
	{
		// public float FadeOutTime => fadeOutTime;
		float L_0 = __this->get_fadeOutTime_9();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_FadeInTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SceneTransitionServiceProfile_get_FadeInTime_mFC2028AFF917D14FC94536ED5D4950CEABEC7615 (SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * __this, const RuntimeMethod* method)
{
	{
		// public float FadeInTime => fadeInTime;
		float L_0 = __this->get_fadeInTime_10();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderTargets Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_FadeTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneTransitionServiceProfile_get_FadeTargets_mF9801D8E36093E5883D476F61786D828D1970608 (SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * __this, const RuntimeMethod* method)
{
	{
		// public CameraFaderTargets FadeTargets => fadeTargets;
		int32_t L_0 = __this->get_fadeTargets_11();
		return L_0;
	}
}
// UnityEngine.Material Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_CameraFaderMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * SceneTransitionServiceProfile_get_CameraFaderMaterial_m2157AAE0604004A29A3A45CBF2025A0228E44E52 (SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * __this, const RuntimeMethod* method)
{
	{
		// public Material CameraFaderMaterial => cameraFaderMaterial;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_cameraFaderMaterial_13();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionServiceProfile__ctor_m76EBE7EF0CFE9D7CF4C05AAE287EA2612DBBA707 (SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * __this, const RuntimeMethod* method)
{
	{
		// private bool useDefaultProgressIndicator = true;
		__this->set_useDefaultProgressIndicator_5((bool)1);
		// private GameObject defaultProgressIndicatorPrefab = null;
		__this->set_defaultProgressIndicatorPrefab_6((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// private bool useFadeColor = true;
		__this->set_useFadeColor_7((bool)1);
		// private Color fadeColor = Color.black;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		__this->set_fadeColor_8(L_0);
		// private float fadeOutTime = 1f;
		__this->set_fadeOutTime_9((1.0f));
		// private float fadeInTime = 0.5f;
		__this->set_fadeInTime_10((0.5f));
		// private CameraFaderTargets fadeTargets = CameraFaderTargets.Main;
		__this->set_fadeTargets_11(0);
		// private SystemType cameraFaderType = default(SystemType);
		__this->set_cameraFaderType_12((SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E *)NULL);
		// private Material cameraFaderMaterial = null;
		__this->set_cameraFaderMaterial_13((Material_t8927C00353A72755313F046D0CE85178AE8218EE *)NULL);
		BaseMixedRealityProfile__ctor_m94327F072D922C989496EAE60928EA2395079B2C(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeInAsync>d__17::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInAsyncU3Ed__17__ctor_mB51A36978E8596544E02E2D793734ACF14E8F686 (U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeInAsync>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInAsyncU3Ed__17_MoveNext_mC5C58E44B8307C02FD8C3E9E64C5DA9A5E254EAD (U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2_m7A01A59229B55422C40965CA995D59F96C21437D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFaderState_t8B99D77E75F45B24C223E5E6A065F52B4B704470_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m97D16075250F846C37CD35767442D30FD8A83DD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mD7022774F2E85B56A1BB9804D8224A177CDE4CED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m655EF1545A276DD44E5D0A55B9834663DCC319FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m882DE164C46D6F8CA2FE5A4863466F9B7A34609E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9D9525836F35F6A686BBEFFB173325279E3F0FD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_mA3416DE65266E497FA954656F23D9A9591C17A8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36EE8A5FF4009B845B66EC1D63E1466DC691A26E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6724DF02A625A1E61DB0254B283AEA48BABAA8FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9B85756D83C9C00267EE9160CB7C68B84C2F439);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  V_6;
	memset((&V_6), 0, sizeof(V_6));
	YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  V_7;
	memset((&V_7), 0, sizeof(V_7));
	U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2 * V_8 = NULL;
	bool V_9 = false;
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Exception_t * V_11 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 7> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_000d;
			}
		}

IL_000b:
		{
			goto IL_000f;
		}

IL_000d:
		{
			goto IL_0023;
		}

IL_000f:
		{
			// using (FadeInAsyncPerfMarker.Auto())
			IL2CPP_RUNTIME_CLASS_INIT(CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409_il2cpp_TypeInfo_var);
			ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_2 = ((CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409_StaticFields*)il2cpp_codegen_static_fields_for(CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409_il2cpp_TypeInfo_var))->get_FadeInAsyncPerfMarker_10();
			V_1 = L_2;
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_3;
			L_3 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
			__this->set_U3CU3Es__1_4(L_3);
		}

IL_0023:
		{
		}

IL_0024:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_4 = V_0;
				if (!L_4)
				{
					goto IL_002f;
				}
			}

IL_0027:
			{
				goto IL_0029;
			}

IL_0029:
			{
				int32_t L_5 = V_0;
				if ((((int32_t)L_5) == ((int32_t)1)))
				{
					goto IL_0034;
				}
			}

IL_002d:
			{
				goto IL_0039;
			}

IL_002f:
			{
				goto IL_0219;
			}

IL_0034:
			{
				goto IL_0297;
			}

IL_0039:
			{
				// if (quads.Count == 0)
				CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_6 = __this->get_U3CU3E4__this_3();
				NullCheck(L_6);
				Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4 * L_7 = L_6->get_quads_3();
				NullCheck(L_7);
				int32_t L_8;
				L_8 = Dictionary_2_get_Count_m97D16075250F846C37CD35767442D30FD8A83DD9(L_7, /*hidden argument*/Dictionary_2_get_Count_m97D16075250F846C37CD35767442D30FD8A83DD9_RuntimeMethod_var);
				V_2 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
				bool L_9 = V_2;
				if (!L_9)
				{
					goto IL_0062;
				}
			}

IL_0051:
			{
				// Debug.LogError("No camera targets found - are you trying to fade in before you've faded out?");
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral36EE8A5FF4009B845B66EC1D63E1466DC691A26E, /*hidden argument*/NULL);
				// return;
				IL2CPP_LEAVE(0x317, FINALLY_02d8);
			}

IL_0062:
			{
				// switch (State)
				CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_10 = __this->get_U3CU3E4__this_3();
				NullCheck(L_10);
				int32_t L_11;
				L_11 = CameraFaderQuad_get_State_mB0F8535BD5C67BACCBA17DF523792859E6F659A5_inline(L_10, /*hidden argument*/NULL);
				V_3 = L_11;
				int32_t L_12 = V_3;
				__this->set_U3CU3Es__3_6(L_12);
				int32_t L_13 = __this->get_U3CU3Es__3_6();
				if ((((int32_t)L_13) == ((int32_t)2)))
				{
					goto IL_0080;
				}
			}

IL_007e:
			{
				goto IL_0082;
			}

IL_0080:
			{
				// break;
				goto IL_00b3;
			}

IL_0082:
			{
				// Debug.LogWarning("Can't fade in in state " + State + " - not proceeding.");
				CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_14 = __this->get_U3CU3E4__this_3();
				NullCheck(L_14);
				int32_t L_15;
				L_15 = CameraFaderQuad_get_State_mB0F8535BD5C67BACCBA17DF523792859E6F659A5_inline(L_14, /*hidden argument*/NULL);
				V_4 = L_15;
				RuntimeObject * L_16 = Box(CameraFaderState_t8B99D77E75F45B24C223E5E6A065F52B4B704470_il2cpp_TypeInfo_var, (&V_4));
				NullCheck(L_16);
				String_t* L_17;
				L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
				V_4 = *(int32_t*)UnBox(L_16);
				String_t* L_18;
				L_18 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral6724DF02A625A1E61DB0254B283AEA48BABAA8FC, L_17, _stringLiteralF9B85756D83C9C00267EE9160CB7C68B84C2F439, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_18, /*hidden argument*/NULL);
				// break;
				goto IL_00b3;
			}

IL_00b3:
			{
				// State = CameraFaderState.FadingIn;
				CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_19 = __this->get_U3CU3E4__this_3();
				NullCheck(L_19);
				CameraFaderQuad_set_State_m54FCB1AA568BD19715397FBC68E5C96FA38AC778_inline(L_19, 1, /*hidden argument*/NULL);
				// float fadeAmount = 0;
				__this->set_U3CfadeAmountU3E5__2_5((0.0f));
				goto IL_023f;
			}

IL_00d0:
			{
				// fadeAmount += Time.unscaledDeltaTime;
				float L_20 = __this->get_U3CfadeAmountU3E5__2_5();
				float L_21;
				L_21 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84(/*hidden argument*/NULL);
				__this->set_U3CfadeAmountU3E5__2_5(((float)il2cpp_codegen_add((float)L_20, (float)L_21)));
				// currentColor = Color.Lerp(fadeOutColor, fadeInColor, fadeAmount);
				CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_22 = __this->get_U3CU3E4__this_3();
				CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_23 = __this->get_U3CU3E4__this_3();
				NullCheck(L_23);
				Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_24 = L_23->get_fadeOutColor_4();
				CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_25 = __this->get_U3CU3E4__this_3();
				NullCheck(L_25);
				Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_26 = L_25->get_fadeInColor_5();
				float L_27 = __this->get_U3CfadeAmountU3E5__2_5();
				Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_28;
				L_28 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_24, L_26, L_27, /*hidden argument*/NULL);
				NullCheck(L_22);
				L_22->set_currentColor_6(L_28);
				// foreach (Quad quad in quads.Values)
				CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_29 = __this->get_U3CU3E4__this_3();
				NullCheck(L_29);
				Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4 * L_30 = L_29->get_quads_3();
				NullCheck(L_30);
				ValueCollection_t322749FF0E4948F4FD8A3F1178C601A0AEF155CD * L_31;
				L_31 = Dictionary_2_get_Values_mD7022774F2E85B56A1BB9804D8224A177CDE4CED(L_30, /*hidden argument*/Dictionary_2_get_Values_mD7022774F2E85B56A1BB9804D8224A177CDE4CED_RuntimeMethod_var);
				NullCheck(L_31);
				Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000  L_32;
				L_32 = ValueCollection_GetEnumerator_mA3416DE65266E497FA954656F23D9A9591C17A8B(L_31, /*hidden argument*/ValueCollection_GetEnumerator_mA3416DE65266E497FA954656F23D9A9591C17A8B_RuntimeMethod_var);
				__this->set_U3CU3Es__4_7(L_32);
			}

IL_012b:
			try
			{ // begin try (depth: 3)
				{
					goto IL_01a2;
				}

IL_012d:
				{
					// foreach (Quad quad in quads.Values)
					Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000 * L_33 = __this->get_address_of_U3CU3Es__4_7();
					Quad_t5B5564685E1EC46AF269743F2349796C7724911B  L_34;
					L_34 = Enumerator_get_Current_m9D9525836F35F6A686BBEFFB173325279E3F0FD4_inline((Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000 *)L_33, /*hidden argument*/Enumerator_get_Current_m9D9525836F35F6A686BBEFFB173325279E3F0FD4_RuntimeMethod_var);
					__this->set_U3CquadU3E5__5_8(L_34);
					// if (quad.Renderer == null)
					Quad_t5B5564685E1EC46AF269743F2349796C7724911B * L_35 = __this->get_address_of_U3CquadU3E5__5_8();
					Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_36 = L_35->get_Renderer_0();
					IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
					bool L_37;
					L_37 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_36, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
					V_5 = L_37;
					bool L_38 = V_5;
					if (!L_38)
					{
						goto IL_0158;
					}
				}

IL_0156:
				{
					// continue;
					goto IL_01a2;
				}

IL_0158:
				{
					// quad.PropertyBlock.SetColor(QuadMaterialColorName, currentColor);
					Quad_t5B5564685E1EC46AF269743F2349796C7724911B * L_39 = __this->get_address_of_U3CquadU3E5__5_8();
					MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_40 = L_39->get_PropertyBlock_1();
					CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_41 = __this->get_U3CU3E4__this_3();
					NullCheck(L_41);
					Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_42 = L_41->get_currentColor_6();
					NullCheck(L_40);
					MaterialPropertyBlock_SetColor_m640E72ABA9086F3F9278C114C1072AD2BED89F48(L_40, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_42, /*hidden argument*/NULL);
					// quad.Renderer.SetPropertyBlock(quad.PropertyBlock);
					Quad_t5B5564685E1EC46AF269743F2349796C7724911B * L_43 = __this->get_address_of_U3CquadU3E5__5_8();
					Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_44 = L_43->get_Renderer_0();
					Quad_t5B5564685E1EC46AF269743F2349796C7724911B * L_45 = __this->get_address_of_U3CquadU3E5__5_8();
					MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_46 = L_45->get_PropertyBlock_1();
					NullCheck(L_44);
					Renderer_SetPropertyBlock_m3F0E4E98D8274A1396AEBA8456AFA4036DCA7B7A(L_44, L_46, /*hidden argument*/NULL);
					Quad_t5B5564685E1EC46AF269743F2349796C7724911B * L_47 = __this->get_address_of_U3CquadU3E5__5_8();
					il2cpp_codegen_initobj(L_47, sizeof(Quad_t5B5564685E1EC46AF269743F2349796C7724911B ));
				}

IL_01a2:
				{
					// foreach (Quad quad in quads.Values)
					Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000 * L_48 = __this->get_address_of_U3CU3Es__4_7();
					bool L_49;
					L_49 = Enumerator_MoveNext_m882DE164C46D6F8CA2FE5A4863466F9B7A34609E((Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000 *)L_48, /*hidden argument*/Enumerator_MoveNext_m882DE164C46D6F8CA2FE5A4863466F9B7A34609E_RuntimeMethod_var);
					if (L_49)
					{
						goto IL_012d;
					}
				}

IL_01b2:
				{
					IL2CPP_LEAVE(0x1CB, FINALLY_01b4);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_01b4;
			}

FINALLY_01b4:
			{ // begin finally (depth: 3)
				{
					int32_t L_50 = V_0;
					if ((((int32_t)L_50) >= ((int32_t)0)))
					{
						goto IL_01ca;
					}
				}

IL_01b8:
				{
					Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000 * L_51 = __this->get_address_of_U3CU3Es__4_7();
					Enumerator_Dispose_m655EF1545A276DD44E5D0A55B9834663DCC319FF((Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000 *)L_51, /*hidden argument*/Enumerator_Dispose_m655EF1545A276DD44E5D0A55B9834663DCC319FF_RuntimeMethod_var);
				}

IL_01ca:
				{
					IL2CPP_END_FINALLY(436)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(436)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x1CB, IL_01cb)
			}

IL_01cb:
			{
				Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000 * L_52 = __this->get_address_of_U3CU3Es__4_7();
				il2cpp_codegen_initobj(L_52, sizeof(Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000 ));
				// await Task.Yield();
				IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
				YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  L_53;
				L_53 = Task_Yield_m1E79F65972D82906B8BBE9980C57E29538D3E94B(/*hidden argument*/NULL);
				V_7 = L_53;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_54;
				L_54 = YieldAwaitable_GetAwaiter_m8AA7D8DCF790EB9BDBDD5F0D8BBA0404C6F7DCD8((YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA *)(&V_7), /*hidden argument*/NULL);
				V_6 = L_54;
				bool L_55;
				L_55 = YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_6), /*hidden argument*/NULL);
				if (L_55)
				{
					goto IL_0236;
				}
			}

IL_01f0:
			{
				int32_t L_56 = 0;
				V_0 = L_56;
				__this->set_U3CU3E1__state_0(L_56);
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_57 = V_6;
				__this->set_U3CU3Eu__1_9(L_57);
				V_8 = __this;
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_58 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2_m7A01A59229B55422C40965CA995D59F96C21437D((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_58, (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_6), (U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2 **)(&V_8), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2_m7A01A59229B55422C40965CA995D59F96C21437D_RuntimeMethod_var);
				IL2CPP_LEAVE(0x32B, FINALLY_02d8);
			}

IL_0219:
			{
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_59 = __this->get_U3CU3Eu__1_9();
				V_6 = L_59;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * L_60 = __this->get_address_of_U3CU3Eu__1_9();
				il2cpp_codegen_initobj(L_60, sizeof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE ));
				int32_t L_61 = (-1);
				V_0 = L_61;
				__this->set_U3CU3E1__state_0(L_61);
			}

IL_0236:
			{
				YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_6), /*hidden argument*/NULL);
			}

IL_023f:
			{
				// while (fadeAmount < 1)
				float L_62 = __this->get_U3CfadeAmountU3E5__2_5();
				V_9 = (bool)((((float)L_62) < ((float)(1.0f)))? 1 : 0);
				bool L_63 = V_9;
				if (L_63)
				{
					goto IL_00d0;
				}
			}

IL_0255:
			{
				// await Task.Yield();
				IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
				YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  L_64;
				L_64 = Task_Yield_m1E79F65972D82906B8BBE9980C57E29538D3E94B(/*hidden argument*/NULL);
				V_7 = L_64;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_65;
				L_65 = YieldAwaitable_GetAwaiter_m8AA7D8DCF790EB9BDBDD5F0D8BBA0404C6F7DCD8((YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA *)(&V_7), /*hidden argument*/NULL);
				V_10 = L_65;
				bool L_66;
				L_66 = YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_10), /*hidden argument*/NULL);
				if (L_66)
				{
					goto IL_02b4;
				}
			}

IL_026e:
			{
				int32_t L_67 = 1;
				V_0 = L_67;
				__this->set_U3CU3E1__state_0(L_67);
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_68 = V_10;
				__this->set_U3CU3Eu__1_9(L_68);
				V_8 = __this;
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_69 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2_m7A01A59229B55422C40965CA995D59F96C21437D((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_69, (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_10), (U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2 **)(&V_8), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2_m7A01A59229B55422C40965CA995D59F96C21437D_RuntimeMethod_var);
				IL2CPP_LEAVE(0x32B, FINALLY_02d8);
			}

IL_0297:
			{
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_70 = __this->get_U3CU3Eu__1_9();
				V_10 = L_70;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * L_71 = __this->get_address_of_U3CU3Eu__1_9();
				il2cpp_codegen_initobj(L_71, sizeof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE ));
				int32_t L_72 = (-1);
				V_0 = L_72;
				__this->set_U3CU3E1__state_0(L_72);
			}

IL_02b4:
			{
				YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_10), /*hidden argument*/NULL);
				// DestroyQuads();
				CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_73 = __this->get_U3CU3E4__this_3();
				NullCheck(L_73);
				CameraFaderQuad_DestroyQuads_mA578AB99CD4BA21839166C8E8DBFFB2E4BDB8133(L_73, /*hidden argument*/NULL);
				// State = CameraFaderState.Clear;
				CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_74 = __this->get_U3CU3E4__this_3();
				NullCheck(L_74);
				CameraFaderQuad_set_State_m54FCB1AA568BD19715397FBC68E5C96FA38AC778_inline(L_74, 0, /*hidden argument*/NULL);
				IL2CPP_LEAVE(0x2EF, FINALLY_02d8);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_02d8;
		}

FINALLY_02d8:
		{ // begin finally (depth: 2)
			{
				int32_t L_75 = V_0;
				if ((((int32_t)L_75) >= ((int32_t)0)))
				{
					goto IL_02ee;
				}
			}

IL_02dc:
			{
				AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_76 = __this->get_address_of_U3CU3Es__1_4();
				AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)L_76, /*hidden argument*/NULL);
			}

IL_02ee:
			{
				IL2CPP_END_FINALLY(728)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(728)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x317, IL_0317)
			IL2CPP_JUMP_TBL(0x32B, IL_032b)
			IL2CPP_JUMP_TBL(0x2EF, IL_02ef)
		}

IL_02ef:
		{
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_77 = __this->get_address_of_U3CU3Es__1_4();
			il2cpp_codegen_initobj(L_77, sizeof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D ));
			goto IL_0317;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02fd;
		}
		throw e;
	}

CATCH_02fd:
	{ // begin catch(System.Exception)
		V_11 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_78 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_79 = V_11;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_78, L_79, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_032b;
	} // end catch (depth: 1)

IL_0317:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_80 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_80, /*hidden argument*/NULL);
	}

IL_032b:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeInAsync>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInAsyncU3Ed__17_SetStateMachine_m2E7A22D1A456F328E6D1536B0BED8D2E2503B2A1 (U3CFadeInAsyncU3Ed__17_t2309579B82C6000AF4BCB495244F118E59342AC2 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutAsyncU3Ed__15__ctor_m4A5C40D23FA016F870FB6A444A321ADE00780FA5 (U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutAsyncU3Ed__15_MoveNext_m98ABBB2B502800AA36E48127C12F3C284906252B (U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E_mAD4A057725AF6709B33254E97AAAA60CA17F2BED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFaderState_t8B99D77E75F45B24C223E5E6A065F52B4B704470_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFE0EA4F836998691EBE2F3A6A37E1BFD4BB4266B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m6E41CCC27C41F32DB3C184D0DF645BDC6CFB16EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mD7022774F2E85B56A1BB9804D8224A177CDE4CED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m655EF1545A276DD44E5D0A55B9834663DCC319FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m882DE164C46D6F8CA2FE5A4863466F9B7A34609E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9D9525836F35F6A686BBEFFB173325279E3F0FD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t1CEFC4032D36100FE58999A10DFB02F5139BC4AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tCF7FF5B0C2C3C1ED84EA8B53C00513836CEE6A9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_mA3416DE65266E497FA954656F23D9A9591C17A8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52CBE4A5A42509939BB9DB58A4B9A2C9BBA81C1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61304A4D1A7F7C3C856F975F251F1F79885933C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D61FA9D9BE7581D7E2EE28C775ABE0D4B8C3D69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA646770488C9DBF9573CE4990692B59630579657);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBCD3D866AF896F9B010A0FEE7F961DBC91A08C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD334F0506ACE2EC5CCBC7E868FCA093C85B446A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF85263F579BDEEADCEC89CFCDB0C3F6C51D186BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9B85756D83C9C00267EE9160CB7C68B84C2F439);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Exception_t * V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  V_13;
	memset((&V_13), 0, sizeof(V_13));
	YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  V_14;
	memset((&V_14), 0, sizeof(V_14));
	U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E * V_15 = NULL;
	bool V_16 = false;
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  V_17;
	memset((&V_17), 0, sizeof(V_17));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 10> __leave_targets;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B32_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B31_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B33_0;
	memset((&G_B33_0), 0, sizeof(G_B33_0));
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B33_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_000d;
			}
		}

IL_000b:
		{
			goto IL_000f;
		}

IL_000d:
		{
			goto IL_0023;
		}

IL_000f:
		{
			// using (FadeOutAsyncPerfMarker.Auto())
			IL2CPP_RUNTIME_CLASS_INIT(CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409_il2cpp_TypeInfo_var);
			ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_2 = ((CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409_StaticFields*)il2cpp_codegen_static_fields_for(CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409_il2cpp_TypeInfo_var))->get_FadeOutAsyncPerfMarker_9();
			V_1 = L_2;
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_3;
			L_3 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
			__this->set_U3CU3Es__1_6(L_3);
		}

IL_0023:
		{
		}

IL_0024:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_4 = V_0;
				if (!L_4)
				{
					goto IL_002f;
				}
			}

IL_0027:
			{
				goto IL_0029;
			}

IL_0029:
			{
				int32_t L_5 = V_0;
				if ((((int32_t)L_5) == ((int32_t)1)))
				{
					goto IL_0034;
				}
			}

IL_002d:
			{
				goto IL_0039;
			}

IL_002f:
			{
				goto IL_060d;
			}

IL_0034:
			{
				goto IL_068b;
			}

IL_0039:
			{
				// switch (State)
				CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_6 = __this->get_U3CU3E4__this_5();
				NullCheck(L_6);
				int32_t L_7;
				L_7 = CameraFaderQuad_get_State_mB0F8535BD5C67BACCBA17DF523792859E6F659A5_inline(L_6, /*hidden argument*/NULL);
				V_2 = L_7;
				int32_t L_8 = V_2;
				__this->set_U3CU3Es__3_8(L_8);
				int32_t L_9 = __this->get_U3CU3Es__3_8();
				if (!L_9)
				{
					goto IL_0057;
				}
			}

IL_0055:
			{
				goto IL_0059;
			}

IL_0057:
			{
				// break;
				goto IL_008c;
			}

IL_0059:
			{
				// Debug.LogWarning("Can't fade out in state " + State + " - not proceeding.");
				CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_10 = __this->get_U3CU3E4__this_5();
				NullCheck(L_10);
				int32_t L_11;
				L_11 = CameraFaderQuad_get_State_mB0F8535BD5C67BACCBA17DF523792859E6F659A5_inline(L_10, /*hidden argument*/NULL);
				V_3 = L_11;
				RuntimeObject * L_12 = Box(CameraFaderState_t8B99D77E75F45B24C223E5E6A065F52B4B704470_il2cpp_TypeInfo_var, (&V_3));
				NullCheck(L_12);
				String_t* L_13;
				L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
				V_3 = *(int32_t*)UnBox(L_12);
				String_t* L_14;
				L_14 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralD334F0506ACE2EC5CCBC7E868FCA093C85B446A2, L_13, _stringLiteralF9B85756D83C9C00267EE9160CB7C68B84C2F439, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_14, /*hidden argument*/NULL);
				// return;
				IL2CPP_LEAVE(0x6FF, FINALLY_06c0);
			}

IL_008c:
			{
				// State = CameraFaderState.FadingOut;
				CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_15 = __this->get_U3CU3E4__this_5();
				NullCheck(L_15);
				CameraFaderQuad_set_State_m54FCB1AA568BD19715397FBC68E5C96FA38AC778_inline(L_15, 3, /*hidden argument*/NULL);
				// fadeOutColor = color;
				CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_16 = __this->get_U3CU3E4__this_5();
				Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_17 = __this->get_color_3();
				NullCheck(L_16);
				L_16->set_fadeOutColor_4(L_17);
				// fadeInColor = fadeOutColor;
				CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_18 = __this->get_U3CU3E4__this_5();
				CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_19 = __this->get_U3CU3E4__this_5();
				NullCheck(L_19);
				Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_20 = L_19->get_fadeOutColor_4();
				NullCheck(L_18);
				L_18->set_fadeInColor_5(L_20);
				// fadeInColor.a = 0;
				CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_21 = __this->get_U3CU3E4__this_5();
				NullCheck(L_21);
				Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_22 = L_21->get_address_of_fadeInColor_5();
				L_22->set_a_3((0.0f));
				// if (fadeOutColor.a < 1)
				CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_23 = __this->get_U3CU3E4__this_5();
				NullCheck(L_23);
				Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_24 = L_23->get_address_of_fadeOutColor_4();
				float L_25 = L_24->get_a_3();
				V_4 = (bool)((((float)L_25) < ((float)(1.0f)))? 1 : 0);
				bool L_26 = V_4;
				if (!L_26)
				{
					goto IL_00ff;
				}
			}

IL_00f2:
			{
				// Debug.LogWarning("Target color is not fully opaque.");
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralA646770488C9DBF9573CE4990692B59630579657, /*hidden argument*/NULL);
			}

IL_00ff:
			{
				// if (quadMaterial == null)
				CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_27 = __this->get_U3CU3E4__this_5();
				NullCheck(L_27);
				Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28 = L_27->get_quadMaterial_7();
				IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
				bool L_29;
				L_29 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_28, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
				V_5 = L_29;
				bool L_30 = V_5;
				if (!L_30)
				{
					goto IL_0250;
				}
			}

IL_0119:
			{
			}

IL_011a:
			try
			{ // begin try (depth: 3)
				{
					// if (quadMaterialTemplate != null)
					CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_31 = __this->get_U3CU3E4__this_5();
					NullCheck(L_31);
					Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_32 = L_31->get_quadMaterialTemplate_8();
					IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
					bool L_33;
					L_33 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_32, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
					V_6 = L_33;
					bool L_34 = V_6;
					if (!L_34)
					{
						goto IL_0154;
					}
				}

IL_0132:
				{
					// quadMaterial = new Material(quadMaterialTemplate);
					CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_35 = __this->get_U3CU3E4__this_5();
					CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_36 = __this->get_U3CU3E4__this_5();
					NullCheck(L_36);
					Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_37 = L_36->get_quadMaterialTemplate_8();
					Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_38 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
					Material__ctor_mD0C3D9CFAFE0FB858D864092467387D7FA178245(L_38, L_37, /*hidden argument*/NULL);
					NullCheck(L_35);
					L_35->set_quadMaterial_7(L_38);
					goto IL_0225;
				}

IL_0154:
				{
					// quadMaterial = new Material(Shader.Find(QuadMaterialShaderName));
					CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_39 = __this->get_U3CU3E4__this_5();
					Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_40;
					L_40 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(_stringLiteralF85263F579BDEEADCEC89CFCDB0C3F6C51D186BF, /*hidden argument*/NULL);
					Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_41 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
					Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_41, L_40, /*hidden argument*/NULL);
					NullCheck(L_39);
					L_39->set_quadMaterial_7(L_41);
					// quadMaterial.SetInt("_Mode", 2);
					CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_42 = __this->get_U3CU3E4__this_5();
					NullCheck(L_42);
					Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_43 = L_42->get_quadMaterial_7();
					NullCheck(L_43);
					Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87(L_43, _stringLiteral7D61FA9D9BE7581D7E2EE28C775ABE0D4B8C3D69, 2, /*hidden argument*/NULL);
					// quadMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
					CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_44 = __this->get_U3CU3E4__this_5();
					NullCheck(L_44);
					Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_45 = L_44->get_quadMaterial_7();
					NullCheck(L_45);
					Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87(L_45, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 5, /*hidden argument*/NULL);
					// quadMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
					CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_46 = __this->get_U3CU3E4__this_5();
					NullCheck(L_46);
					Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_47 = L_46->get_quadMaterial_7();
					NullCheck(L_47);
					Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87(L_47, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), /*hidden argument*/NULL);
					// quadMaterial.SetInt("_ZWrite", 0);
					CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_48 = __this->get_U3CU3E4__this_5();
					NullCheck(L_48);
					Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_49 = L_48->get_quadMaterial_7();
					NullCheck(L_49);
					Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87(L_49, _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C, 0, /*hidden argument*/NULL);
					// quadMaterial.DisableKeyword("_ALPHATEST_ON");
					CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_50 = __this->get_U3CU3E4__this_5();
					NullCheck(L_50);
					Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_51 = L_50->get_quadMaterial_7();
					NullCheck(L_51);
					Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18(L_51, _stringLiteralCBCD3D866AF896F9B010A0FEE7F961DBC91A08C5, /*hidden argument*/NULL);
					// quadMaterial.EnableKeyword("_ALPHABLEND_ON");
					CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_52 = __this->get_U3CU3E4__this_5();
					NullCheck(L_52);
					Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_53 = L_52->get_quadMaterial_7();
					NullCheck(L_53);
					Material_EnableKeyword_mBD03896F11814C3EF67F73A414DC66D5B577171D(L_53, _stringLiteral52CBE4A5A42509939BB9DB58A4B9A2C9BBA81C1C, /*hidden argument*/NULL);
					// quadMaterial.DisableKeyword("_ALPHAPREMULTIPLY_ON");
					CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_54 = __this->get_U3CU3E4__this_5();
					NullCheck(L_54);
					Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_55 = L_54->get_quadMaterial_7();
					NullCheck(L_55);
					Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18(L_55, _stringLiteral61304A4D1A7F7C3C856F975F251F1F79885933C8, /*hidden argument*/NULL);
					// quadMaterial.renderQueue = 3000;
					CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_56 = __this->get_U3CU3E4__this_5();
					NullCheck(L_56);
					Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_57 = L_56->get_quadMaterial_7();
					NullCheck(L_57);
					Material_set_renderQueue_m239F950307B3B71DC41AF02F9030DD0A80A3A201(L_57, ((int32_t)3000), /*hidden argument*/NULL);
				}

IL_0225:
				{
					goto IL_024f;
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0228;
				}
				throw e;
			}

CATCH_0228:
			{ // begin catch(System.Exception)
				// catch (Exception e)
				V_7 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
				Exception_t * L_58 = V_7;
				__this->set_U3CeU3E5__4_9(L_58);
				// Debug.LogError("Error when trying to create quad material in CameraFaderQuad");
				IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
				Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7D9D651ABAA01519787B90DCB20837985F76598E)), /*hidden argument*/NULL);
				// Debug.LogException(e);
				Exception_t * L_59 = __this->get_U3CeU3E5__4_9();
				Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(L_59, /*hidden argument*/NULL);
				// return;
				IL2CPP_POP_ACTIVE_EXCEPTION();
				IL2CPP_LEAVE(0x6FF, FINALLY_06c0);
			} // end catch (depth: 3)

IL_024f:
			{
			}

IL_0250:
			{
				// quadMaterial.enableInstancing = true;
				CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_60 = __this->get_U3CU3E4__this_5();
				NullCheck(L_60);
				Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_61 = L_60->get_quadMaterial_7();
				NullCheck(L_61);
				Material_set_enableInstancing_m508CAE1A82C2688E92491BBDEE4F5A00089BCD4B(L_61, (bool)1, /*hidden argument*/NULL);
				// quadMaterial.SetColor(QuadMaterialColorName, currentColor);
				CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_62 = __this->get_U3CU3E4__this_5();
				NullCheck(L_62);
				Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_63 = L_62->get_quadMaterial_7();
				CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_64 = __this->get_U3CU3E4__this_5();
				NullCheck(L_64);
				Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_65 = L_64->get_currentColor_6();
				NullCheck(L_63);
				Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_63, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_65, /*hidden argument*/NULL);
				// foreach (Camera camera in targets)
				RuntimeObject* L_66 = __this->get_targets_4();
				NullCheck(L_66);
				RuntimeObject* L_67;
				L_67 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Camera>::GetEnumerator() */, IEnumerable_1_t1CEFC4032D36100FE58999A10DFB02F5139BC4AF_il2cpp_TypeInfo_var, L_66);
				__this->set_U3CU3Es__5_10(L_67);
			}

IL_0295:
			try
			{ // begin try (depth: 3)
				{
					goto IL_0482;
				}

IL_029a:
				{
					// foreach (Camera camera in targets)
					RuntimeObject* L_68 = __this->get_U3CU3Es__5_10();
					NullCheck(L_68);
					Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_69;
					L_69 = InterfaceFuncInvoker0< Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Camera>::get_Current() */, IEnumerator_1_tCF7FF5B0C2C3C1ED84EA8B53C00513836CEE6A9B_il2cpp_TypeInfo_var, L_68);
					__this->set_U3CcameraU3E5__6_11(L_69);
					// if (quads.ContainsKey(camera))
					CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_70 = __this->get_U3CU3E4__this_5();
					NullCheck(L_70);
					Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4 * L_71 = L_70->get_quads_3();
					Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_72 = __this->get_U3CcameraU3E5__6_11();
					NullCheck(L_71);
					bool L_73;
					L_73 = Dictionary_2_ContainsKey_m6E41CCC27C41F32DB3C184D0DF645BDC6CFB16EE(L_71, L_72, /*hidden argument*/Dictionary_2_ContainsKey_m6E41CCC27C41F32DB3C184D0DF645BDC6CFB16EE_RuntimeMethod_var);
					V_8 = L_73;
					bool L_74 = V_8;
					if (!L_74)
					{
						goto IL_02cd;
					}
				}

IL_02c8:
				{
					// continue;
					goto IL_0482;
				}

IL_02cd:
				{
					// Quad quad = new Quad();
					Quad_t5B5564685E1EC46AF269743F2349796C7724911B * L_75 = __this->get_address_of_U3CquadU3E5__7_12();
					il2cpp_codegen_initobj(L_75, sizeof(Quad_t5B5564685E1EC46AF269743F2349796C7724911B ));
					// quad.PropertyBlock = new MaterialPropertyBlock();
					Quad_t5B5564685E1EC46AF269743F2349796C7724911B * L_76 = __this->get_address_of_U3CquadU3E5__7_12();
					MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_77 = (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 *)il2cpp_codegen_object_new(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0_il2cpp_TypeInfo_var);
					MaterialPropertyBlock__ctor_m8EB29E415C68427B841A0C68A902A8368B9228E8(L_77, /*hidden argument*/NULL);
					L_76->set_PropertyBlock_1(L_77);
					// quad.Renderer = GameObject.CreatePrimitive(PrimitiveType.Quad).GetComponent<Renderer>();
					Quad_t5B5564685E1EC46AF269743F2349796C7724911B * L_78 = __this->get_address_of_U3CquadU3E5__7_12();
					GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_79;
					L_79 = GameObject_CreatePrimitive_mB1E03B8D373EBECCD93444A277316A53EC7812AC(5, /*hidden argument*/NULL);
					NullCheck(L_79);
					Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_80;
					L_80 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_79, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
					L_78->set_Renderer_0(L_80);
					// quad.Renderer.sharedMaterial = quadMaterial;
					Quad_t5B5564685E1EC46AF269743F2349796C7724911B * L_81 = __this->get_address_of_U3CquadU3E5__7_12();
					Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_82 = L_81->get_Renderer_0();
					CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_83 = __this->get_U3CU3E4__this_5();
					NullCheck(L_83);
					Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_84 = L_83->get_quadMaterial_7();
					NullCheck(L_82);
					Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_82, L_84, /*hidden argument*/NULL);
					// quad.Renderer.transform.parent = camera.transform;
					Quad_t5B5564685E1EC46AF269743F2349796C7724911B * L_85 = __this->get_address_of_U3CquadU3E5__7_12();
					Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_86 = L_85->get_Renderer_0();
					NullCheck(L_86);
					Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_87;
					L_87 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_86, /*hidden argument*/NULL);
					Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_88 = __this->get_U3CcameraU3E5__6_11();
					NullCheck(L_88);
					Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_89;
					L_89 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_88, /*hidden argument*/NULL);
					NullCheck(L_87);
					Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_87, L_89, /*hidden argument*/NULL);
					// quad.Renderer.transform.localScale = camera.orthographic ? Vector3.one * camera.orthographicSize : Vector3.one * camera.fieldOfView;
					Quad_t5B5564685E1EC46AF269743F2349796C7724911B * L_90 = __this->get_address_of_U3CquadU3E5__7_12();
					Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_91 = L_90->get_Renderer_0();
					NullCheck(L_91);
					Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_92;
					L_92 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_91, /*hidden argument*/NULL);
					Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_93 = __this->get_U3CcameraU3E5__6_11();
					NullCheck(L_93);
					bool L_94;
					L_94 = Camera_get_orthographic_m3DE9A7705E2B4926BBFD2D6798D97B931B5B5550(L_93, /*hidden argument*/NULL);
					G_B31_0 = L_92;
					if (L_94)
					{
						G_B32_0 = L_92;
						goto IL_0370;
					}
				}

IL_0359:
				{
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_95;
					L_95 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
					Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_96 = __this->get_U3CcameraU3E5__6_11();
					NullCheck(L_96);
					float L_97;
					L_97 = Camera_get_fieldOfView_mA9BA910800B2E33B572929CDA9A12CE596353920(L_96, /*hidden argument*/NULL);
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_98;
					L_98 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_95, L_97, /*hidden argument*/NULL);
					G_B33_0 = L_98;
					G_B33_1 = G_B31_0;
					goto IL_0385;
				}

IL_0370:
				{
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_99;
					L_99 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
					Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_100 = __this->get_U3CcameraU3E5__6_11();
					NullCheck(L_100);
					float L_101;
					L_101 = Camera_get_orthographicSize_m970DC87D428A71EDF30F9ED7D0E76E08B1BE4EFE(L_100, /*hidden argument*/NULL);
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_102;
					L_102 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_99, L_101, /*hidden argument*/NULL);
					G_B33_0 = L_102;
					G_B33_1 = G_B32_0;
				}

IL_0385:
				{
					NullCheck(G_B33_1);
					Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(G_B33_1, G_B33_0, /*hidden argument*/NULL);
					// quad.Renderer.transform.localPosition = Vector3.forward * camera.nearClipPlane * 1.01f;
					Quad_t5B5564685E1EC46AF269743F2349796C7724911B * L_103 = __this->get_address_of_U3CquadU3E5__7_12();
					Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_104 = L_103->get_Renderer_0();
					NullCheck(L_104);
					Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_105;
					L_105 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_104, /*hidden argument*/NULL);
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_106;
					L_106 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
					Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_107 = __this->get_U3CcameraU3E5__6_11();
					NullCheck(L_107);
					float L_108;
					L_108 = Camera_get_nearClipPlane_m75A7270074A35D95B05F25EBF8CE392ECA6517DC(L_107, /*hidden argument*/NULL);
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_109;
					L_109 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_106, L_108, /*hidden argument*/NULL);
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_110;
					L_110 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_109, (1.00999999f), /*hidden argument*/NULL);
					NullCheck(L_105);
					Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_105, L_110, /*hidden argument*/NULL);
					// quad.Renderer.transform.localRotation = Quaternion.identity;
					Quad_t5B5564685E1EC46AF269743F2349796C7724911B * L_111 = __this->get_address_of_U3CquadU3E5__7_12();
					Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_112 = L_111->get_Renderer_0();
					NullCheck(L_112);
					Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_113;
					L_113 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_112, /*hidden argument*/NULL);
					Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_114;
					L_114 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
					NullCheck(L_113);
					Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_113, L_114, /*hidden argument*/NULL);
					// for (int layer = 0; layer < 32; layer++)
					__this->set_U3ClayerU3E5__8_13(0);
					goto IL_0441;
				}

IL_03e4:
				{
					// if (camera.cullingMask == (camera.cullingMask | (1 << layer)))
					Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_115 = __this->get_U3CcameraU3E5__6_11();
					NullCheck(L_115);
					int32_t L_116;
					L_116 = Camera_get_cullingMask_m63492ED3AFA8F571FBED0B1729264A2E3BB64236(L_115, /*hidden argument*/NULL);
					Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_117 = __this->get_U3CcameraU3E5__6_11();
					NullCheck(L_117);
					int32_t L_118;
					L_118 = Camera_get_cullingMask_m63492ED3AFA8F571FBED0B1729264A2E3BB64236(L_117, /*hidden argument*/NULL);
					int32_t L_119 = __this->get_U3ClayerU3E5__8_13();
					V_9 = (bool)((((int32_t)L_116) == ((int32_t)((int32_t)((int32_t)L_118|(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_119&(int32_t)((int32_t)31)))))))))? 1 : 0);
					bool L_120 = V_9;
					if (!L_120)
					{
						goto IL_042e;
					}
				}

IL_040f:
				{
					// quad.Renderer.gameObject.layer = layer;
					Quad_t5B5564685E1EC46AF269743F2349796C7724911B * L_121 = __this->get_address_of_U3CquadU3E5__7_12();
					Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_122 = L_121->get_Renderer_0();
					NullCheck(L_122);
					GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_123;
					L_123 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_122, /*hidden argument*/NULL);
					int32_t L_124 = __this->get_U3ClayerU3E5__8_13();
					NullCheck(L_123);
					GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6(L_123, L_124, /*hidden argument*/NULL);
					// break;
					goto IL_0451;
				}

IL_042e:
				{
					// for (int layer = 0; layer < 32; layer++)
					int32_t L_125 = __this->get_U3ClayerU3E5__8_13();
					V_10 = L_125;
					int32_t L_126 = V_10;
					__this->set_U3ClayerU3E5__8_13(((int32_t)il2cpp_codegen_add((int32_t)L_126, (int32_t)1)));
				}

IL_0441:
				{
					// for (int layer = 0; layer < 32; layer++)
					int32_t L_127 = __this->get_U3ClayerU3E5__8_13();
					V_11 = (bool)((((int32_t)L_127) < ((int32_t)((int32_t)32)))? 1 : 0);
					bool L_128 = V_11;
					if (L_128)
					{
						goto IL_03e4;
					}
				}

IL_0451:
				{
					// quads.Add(camera, quad);
					CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_129 = __this->get_U3CU3E4__this_5();
					NullCheck(L_129);
					Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4 * L_130 = L_129->get_quads_3();
					Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_131 = __this->get_U3CcameraU3E5__6_11();
					Quad_t5B5564685E1EC46AF269743F2349796C7724911B  L_132 = __this->get_U3CquadU3E5__7_12();
					NullCheck(L_130);
					Dictionary_2_Add_mFE0EA4F836998691EBE2F3A6A37E1BFD4BB4266B(L_130, L_131, L_132, /*hidden argument*/Dictionary_2_Add_mFE0EA4F836998691EBE2F3A6A37E1BFD4BB4266B_RuntimeMethod_var);
					Quad_t5B5564685E1EC46AF269743F2349796C7724911B * L_133 = __this->get_address_of_U3CquadU3E5__7_12();
					il2cpp_codegen_initobj(L_133, sizeof(Quad_t5B5564685E1EC46AF269743F2349796C7724911B ));
					__this->set_U3CcameraU3E5__6_11((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)NULL);
				}

IL_0482:
				{
					// foreach (Camera camera in targets)
					RuntimeObject* L_134 = __this->get_U3CU3Es__5_10();
					NullCheck(L_134);
					bool L_135;
					L_135 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_134);
					if (L_135)
					{
						goto IL_029a;
					}
				}

IL_0492:
				{
					IL2CPP_LEAVE(0x4AD, FINALLY_0494);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0494;
			}

FINALLY_0494:
			{ // begin finally (depth: 3)
				{
					int32_t L_136 = V_0;
					if ((((int32_t)L_136) >= ((int32_t)0)))
					{
						goto IL_04ac;
					}
				}

IL_0498:
				{
					RuntimeObject* L_137 = __this->get_U3CU3Es__5_10();
					if (!L_137)
					{
						goto IL_04ac;
					}
				}

IL_04a0:
				{
					RuntimeObject* L_138 = __this->get_U3CU3Es__5_10();
					NullCheck(L_138);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_138);
				}

IL_04ac:
				{
					IL2CPP_END_FINALLY(1172)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(1172)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x4AD, IL_04ad)
			}

IL_04ad:
			{
				__this->set_U3CU3Es__5_10((RuntimeObject*)NULL);
				// float fadeAmount = 0;
				__this->set_U3CfadeAmountU3E5__2_7((0.0f));
				goto IL_0633;
			}

IL_04c4:
			{
				// fadeAmount += Time.unscaledDeltaTime;
				float L_139 = __this->get_U3CfadeAmountU3E5__2_7();
				float L_140;
				L_140 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84(/*hidden argument*/NULL);
				__this->set_U3CfadeAmountU3E5__2_7(((float)il2cpp_codegen_add((float)L_139, (float)L_140)));
				// currentColor = Color.Lerp(fadeInColor, fadeOutColor, fadeAmount);
				CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_141 = __this->get_U3CU3E4__this_5();
				CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_142 = __this->get_U3CU3E4__this_5();
				NullCheck(L_142);
				Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_143 = L_142->get_fadeInColor_5();
				CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_144 = __this->get_U3CU3E4__this_5();
				NullCheck(L_144);
				Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_145 = L_144->get_fadeOutColor_4();
				float L_146 = __this->get_U3CfadeAmountU3E5__2_7();
				Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_147;
				L_147 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_143, L_145, L_146, /*hidden argument*/NULL);
				NullCheck(L_141);
				L_141->set_currentColor_6(L_147);
				// foreach (Quad quad in quads.Values)
				CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_148 = __this->get_U3CU3E4__this_5();
				NullCheck(L_148);
				Dictionary_2_t3BD2F2F1AC0030B9DFE5A24D3F9337F7204892F4 * L_149 = L_148->get_quads_3();
				NullCheck(L_149);
				ValueCollection_t322749FF0E4948F4FD8A3F1178C601A0AEF155CD * L_150;
				L_150 = Dictionary_2_get_Values_mD7022774F2E85B56A1BB9804D8224A177CDE4CED(L_149, /*hidden argument*/Dictionary_2_get_Values_mD7022774F2E85B56A1BB9804D8224A177CDE4CED_RuntimeMethod_var);
				NullCheck(L_150);
				Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000  L_151;
				L_151 = ValueCollection_GetEnumerator_mA3416DE65266E497FA954656F23D9A9591C17A8B(L_150, /*hidden argument*/ValueCollection_GetEnumerator_mA3416DE65266E497FA954656F23D9A9591C17A8B_RuntimeMethod_var);
				__this->set_U3CU3Es__9_14(L_151);
			}

IL_051f:
			try
			{ // begin try (depth: 3)
				{
					goto IL_0596;
				}

IL_0521:
				{
					// foreach (Quad quad in quads.Values)
					Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000 * L_152 = __this->get_address_of_U3CU3Es__9_14();
					Quad_t5B5564685E1EC46AF269743F2349796C7724911B  L_153;
					L_153 = Enumerator_get_Current_m9D9525836F35F6A686BBEFFB173325279E3F0FD4_inline((Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000 *)L_152, /*hidden argument*/Enumerator_get_Current_m9D9525836F35F6A686BBEFFB173325279E3F0FD4_RuntimeMethod_var);
					__this->set_U3CquadU3E5__10_15(L_153);
					// if (quad.Renderer == null)
					Quad_t5B5564685E1EC46AF269743F2349796C7724911B * L_154 = __this->get_address_of_U3CquadU3E5__10_15();
					Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_155 = L_154->get_Renderer_0();
					IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
					bool L_156;
					L_156 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_155, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
					V_12 = L_156;
					bool L_157 = V_12;
					if (!L_157)
					{
						goto IL_054c;
					}
				}

IL_054a:
				{
					// continue;
					goto IL_0596;
				}

IL_054c:
				{
					// quad.PropertyBlock.SetColor(QuadMaterialColorName, currentColor);
					Quad_t5B5564685E1EC46AF269743F2349796C7724911B * L_158 = __this->get_address_of_U3CquadU3E5__10_15();
					MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_159 = L_158->get_PropertyBlock_1();
					CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_160 = __this->get_U3CU3E4__this_5();
					NullCheck(L_160);
					Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_161 = L_160->get_currentColor_6();
					NullCheck(L_159);
					MaterialPropertyBlock_SetColor_m640E72ABA9086F3F9278C114C1072AD2BED89F48(L_159, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_161, /*hidden argument*/NULL);
					// quad.Renderer.SetPropertyBlock(quad.PropertyBlock);
					Quad_t5B5564685E1EC46AF269743F2349796C7724911B * L_162 = __this->get_address_of_U3CquadU3E5__10_15();
					Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_163 = L_162->get_Renderer_0();
					Quad_t5B5564685E1EC46AF269743F2349796C7724911B * L_164 = __this->get_address_of_U3CquadU3E5__10_15();
					MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_165 = L_164->get_PropertyBlock_1();
					NullCheck(L_163);
					Renderer_SetPropertyBlock_m3F0E4E98D8274A1396AEBA8456AFA4036DCA7B7A(L_163, L_165, /*hidden argument*/NULL);
					Quad_t5B5564685E1EC46AF269743F2349796C7724911B * L_166 = __this->get_address_of_U3CquadU3E5__10_15();
					il2cpp_codegen_initobj(L_166, sizeof(Quad_t5B5564685E1EC46AF269743F2349796C7724911B ));
				}

IL_0596:
				{
					// foreach (Quad quad in quads.Values)
					Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000 * L_167 = __this->get_address_of_U3CU3Es__9_14();
					bool L_168;
					L_168 = Enumerator_MoveNext_m882DE164C46D6F8CA2FE5A4863466F9B7A34609E((Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000 *)L_167, /*hidden argument*/Enumerator_MoveNext_m882DE164C46D6F8CA2FE5A4863466F9B7A34609E_RuntimeMethod_var);
					if (L_168)
					{
						goto IL_0521;
					}
				}

IL_05a6:
				{
					IL2CPP_LEAVE(0x5BF, FINALLY_05a8);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_05a8;
			}

FINALLY_05a8:
			{ // begin finally (depth: 3)
				{
					int32_t L_169 = V_0;
					if ((((int32_t)L_169) >= ((int32_t)0)))
					{
						goto IL_05be;
					}
				}

IL_05ac:
				{
					Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000 * L_170 = __this->get_address_of_U3CU3Es__9_14();
					Enumerator_Dispose_m655EF1545A276DD44E5D0A55B9834663DCC319FF((Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000 *)L_170, /*hidden argument*/Enumerator_Dispose_m655EF1545A276DD44E5D0A55B9834663DCC319FF_RuntimeMethod_var);
				}

IL_05be:
				{
					IL2CPP_END_FINALLY(1448)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(1448)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x5BF, IL_05bf)
			}

IL_05bf:
			{
				Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000 * L_171 = __this->get_address_of_U3CU3Es__9_14();
				il2cpp_codegen_initobj(L_171, sizeof(Enumerator_t36D0C7DE7D86510EEA3F4FEA2A8E95E4B2C95000 ));
				// await Task.Yield();
				IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
				YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  L_172;
				L_172 = Task_Yield_m1E79F65972D82906B8BBE9980C57E29538D3E94B(/*hidden argument*/NULL);
				V_14 = L_172;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_173;
				L_173 = YieldAwaitable_GetAwaiter_m8AA7D8DCF790EB9BDBDD5F0D8BBA0404C6F7DCD8((YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA *)(&V_14), /*hidden argument*/NULL);
				V_13 = L_173;
				bool L_174;
				L_174 = YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_13), /*hidden argument*/NULL);
				if (L_174)
				{
					goto IL_062a;
				}
			}

IL_05e4:
			{
				int32_t L_175 = 0;
				V_0 = L_175;
				__this->set_U3CU3E1__state_0(L_175);
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_176 = V_13;
				__this->set_U3CU3Eu__1_16(L_176);
				V_15 = __this;
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_177 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E_mAD4A057725AF6709B33254E97AAAA60CA17F2BED((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_177, (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_13), (U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E **)(&V_15), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E_mAD4A057725AF6709B33254E97AAAA60CA17F2BED_RuntimeMethod_var);
				IL2CPP_LEAVE(0x713, FINALLY_06c0);
			}

IL_060d:
			{
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_178 = __this->get_U3CU3Eu__1_16();
				V_13 = L_178;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * L_179 = __this->get_address_of_U3CU3Eu__1_16();
				il2cpp_codegen_initobj(L_179, sizeof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE ));
				int32_t L_180 = (-1);
				V_0 = L_180;
				__this->set_U3CU3E1__state_0(L_180);
			}

IL_062a:
			{
				YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_13), /*hidden argument*/NULL);
			}

IL_0633:
			{
				// while (fadeAmount < 1)
				float L_181 = __this->get_U3CfadeAmountU3E5__2_7();
				V_16 = (bool)((((float)L_181) < ((float)(1.0f)))? 1 : 0);
				bool L_182 = V_16;
				if (L_182)
				{
					goto IL_04c4;
				}
			}

IL_0649:
			{
				// await Task.Yield();
				IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
				YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  L_183;
				L_183 = Task_Yield_m1E79F65972D82906B8BBE9980C57E29538D3E94B(/*hidden argument*/NULL);
				V_14 = L_183;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_184;
				L_184 = YieldAwaitable_GetAwaiter_m8AA7D8DCF790EB9BDBDD5F0D8BBA0404C6F7DCD8((YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA *)(&V_14), /*hidden argument*/NULL);
				V_17 = L_184;
				bool L_185;
				L_185 = YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_17), /*hidden argument*/NULL);
				if (L_185)
				{
					goto IL_06a8;
				}
			}

IL_0662:
			{
				int32_t L_186 = 1;
				V_0 = L_186;
				__this->set_U3CU3E1__state_0(L_186);
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_187 = V_17;
				__this->set_U3CU3Eu__1_16(L_187);
				V_15 = __this;
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_188 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E_mAD4A057725AF6709B33254E97AAAA60CA17F2BED((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_188, (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_17), (U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E **)(&V_15), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E_mAD4A057725AF6709B33254E97AAAA60CA17F2BED_RuntimeMethod_var);
				IL2CPP_LEAVE(0x713, FINALLY_06c0);
			}

IL_068b:
			{
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_189 = __this->get_U3CU3Eu__1_16();
				V_17 = L_189;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * L_190 = __this->get_address_of_U3CU3Eu__1_16();
				il2cpp_codegen_initobj(L_190, sizeof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE ));
				int32_t L_191 = (-1);
				V_0 = L_191;
				__this->set_U3CU3E1__state_0(L_191);
			}

IL_06a8:
			{
				YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_17), /*hidden argument*/NULL);
				// State = CameraFaderState.Opaque;
				CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * L_192 = __this->get_U3CU3E4__this_5();
				NullCheck(L_192);
				CameraFaderQuad_set_State_m54FCB1AA568BD19715397FBC68E5C96FA38AC778_inline(L_192, 2, /*hidden argument*/NULL);
				IL2CPP_LEAVE(0x6D7, FINALLY_06c0);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_06c0;
		}

FINALLY_06c0:
		{ // begin finally (depth: 2)
			{
				int32_t L_193 = V_0;
				if ((((int32_t)L_193) >= ((int32_t)0)))
				{
					goto IL_06d6;
				}
			}

IL_06c4:
			{
				AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_194 = __this->get_address_of_U3CU3Es__1_6();
				AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)L_194, /*hidden argument*/NULL);
			}

IL_06d6:
			{
				IL2CPP_END_FINALLY(1728)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(1728)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x6FF, IL_06ff)
			IL2CPP_JUMP_TBL(0x713, IL_0713)
			IL2CPP_JUMP_TBL(0x6D7, IL_06d7)
		}

IL_06d7:
		{
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_195 = __this->get_address_of_U3CU3Es__1_6();
			il2cpp_codegen_initobj(L_195, sizeof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D ));
			goto IL_06ff;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_06e5;
		}
		throw e;
	}

CATCH_06e5:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_196 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_197 = V_7;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_196, L_197, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0713;
	} // end catch (depth: 1)

IL_06ff:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_198 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_198, /*hidden argument*/NULL);
	}

IL_0713:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutAsyncU3Ed__15_SetStateMachine_m249AC19636E0F595C1D2FF6DB1C0ACF5DFC86A4E (U3CFadeOutAsyncU3Ed__15_t5D379577106121068F2650695823964E4EA3CF4E * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad
IL2CPP_EXTERN_C void Quad_t5B5564685E1EC46AF269743F2349796C7724911B_marshal_pinvoke(const Quad_t5B5564685E1EC46AF269743F2349796C7724911B& unmarshaled, Quad_t5B5564685E1EC46AF269743F2349796C7724911B_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Renderer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Renderer' of type 'Quad': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Renderer_0Exception, NULL);
}
IL2CPP_EXTERN_C void Quad_t5B5564685E1EC46AF269743F2349796C7724911B_marshal_pinvoke_back(const Quad_t5B5564685E1EC46AF269743F2349796C7724911B_marshaled_pinvoke& marshaled, Quad_t5B5564685E1EC46AF269743F2349796C7724911B& unmarshaled)
{
	Exception_t* ___Renderer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Renderer' of type 'Quad': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Renderer_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad
IL2CPP_EXTERN_C void Quad_t5B5564685E1EC46AF269743F2349796C7724911B_marshal_pinvoke_cleanup(Quad_t5B5564685E1EC46AF269743F2349796C7724911B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad
IL2CPP_EXTERN_C void Quad_t5B5564685E1EC46AF269743F2349796C7724911B_marshal_com(const Quad_t5B5564685E1EC46AF269743F2349796C7724911B& unmarshaled, Quad_t5B5564685E1EC46AF269743F2349796C7724911B_marshaled_com& marshaled)
{
	Exception_t* ___Renderer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Renderer' of type 'Quad': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Renderer_0Exception, NULL);
}
IL2CPP_EXTERN_C void Quad_t5B5564685E1EC46AF269743F2349796C7724911B_marshal_com_back(const Quad_t5B5564685E1EC46AF269743F2349796C7724911B_marshaled_com& marshaled, Quad_t5B5564685E1EC46AF269743F2349796C7724911B& unmarshaled)
{
	Exception_t* ___Renderer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Renderer' of type 'Quad': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Renderer_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad
IL2CPP_EXTERN_C void Quad_t5B5564685E1EC46AF269743F2349796C7724911B_marshal_com_cleanup(Quad_t5B5564685E1EC46AF269743F2349796C7724911B_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__48::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSceneTransitionU3Ed__48__ctor_m501DA73781B862E451C74655DC989991C4DEF1AB (U3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__48::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSceneTransitionU3Ed__48_MoveNext_m84CF5029FE3EE3EC072348638E9227FAA660D417 (U3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F_m21C031146A6494AFA33E9AA58184259663F6BEB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1U5BU5D_tC8C836685B57D98A62C1CAB8F14A1261EB3E4922_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F * V_2 = NULL;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
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
			goto IL_0078;
		}

IL_000e:
		{
			// await DoSceneTransition(new Func<Task>[] { sceneOperation }, FadeOutTime, FadeInTime, progressIndicator);
			SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_2 = __this->get_U3CU3E4__this_4();
			Func_1U5BU5D_tC8C836685B57D98A62C1CAB8F14A1261EB3E4922* L_3 = (Func_1U5BU5D_tC8C836685B57D98A62C1CAB8F14A1261EB3E4922*)(Func_1U5BU5D_tC8C836685B57D98A62C1CAB8F14A1261EB3E4922*)SZArrayNew(Func_1U5BU5D_tC8C836685B57D98A62C1CAB8F14A1261EB3E4922_il2cpp_TypeInfo_var, (uint32_t)1);
			Func_1U5BU5D_tC8C836685B57D98A62C1CAB8F14A1261EB3E4922* L_4 = L_3;
			Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * L_5 = __this->get_sceneOperation_2();
			NullCheck(L_4);
			ArrayElementTypeCheck (L_4, L_5);
			(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 *)L_5);
			SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_6 = __this->get_U3CU3E4__this_4();
			NullCheck(L_6);
			float L_7;
			L_7 = SceneTransitionService_get_FadeOutTime_m3ED9369249E772C3E36B16D6CA397421A75105BA_inline(L_6, /*hidden argument*/NULL);
			SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_8 = __this->get_U3CU3E4__this_4();
			NullCheck(L_8);
			float L_9;
			L_9 = SceneTransitionService_get_FadeInTime_m15E938D71B45AAB8102B26D140A0B020451FCECB_inline(L_8, /*hidden argument*/NULL);
			RuntimeObject* L_10 = __this->get_progressIndicator_3();
			NullCheck(L_2);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_11;
			L_11 = SceneTransitionService_DoSceneTransition_m4DB41055B7EE65708B43A7DE6D7731C5A69D5D26(L_2, (RuntimeObject*)(RuntimeObject*)L_4, L_7, L_9, L_10, /*hidden argument*/NULL);
			NullCheck(L_11);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_12;
			L_12 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_11, /*hidden argument*/NULL);
			V_1 = L_12;
			bool L_13;
			L_13 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
			if (L_13)
			{
				goto IL_0094;
			}
		}

IL_0054:
		{
			int32_t L_14 = 0;
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_15 = V_1;
			__this->set_U3CU3Eu__1_5(L_15);
			V_2 = __this;
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_16 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F_m21C031146A6494AFA33E9AA58184259663F6BEB4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_16, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), (U3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F **)(&V_2), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F_m21C031146A6494AFA33E9AA58184259663F6BEB4_RuntimeMethod_var);
			goto IL_00ca;
		}

IL_0078:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_17 = __this->get_U3CU3Eu__1_5();
			V_1 = L_17;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_18 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_18, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_19 = (-1);
			V_0 = L_19;
			__this->set_U3CU3E1__state_0(L_19);
		}

IL_0094:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
			goto IL_00b6;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_009e;
		}
		throw e;
	}

CATCH_009e:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_21 = V_3;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_20, L_21, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ca;
	} // end catch (depth: 1)

IL_00b6:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_22 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_22, /*hidden argument*/NULL);
	}

IL_00ca:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__48::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSceneTransitionU3Ed__48_SetStateMachine_mD62B5ED631EFCF5B566632B89408CE98E2B28C5C (U3CDoSceneTransitionU3Ed__48_t88B736EB074080E1D443F8EF0B96A2646309468F * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__49::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSceneTransitionU3Ed__49__ctor_m7667293809D9745D88612A39D617B7220E7E9509 (U3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__49::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSceneTransitionU3Ed__49_MoveNext_m60D7EF68D479B0A7D99F8E62EB91284365FC61DD (U3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7_m12D834F8A63DBAFF88C5960752D39C0820CC162C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1U5BU5D_tC8C836685B57D98A62C1CAB8F14A1261EB3E4922_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7 * V_2 = NULL;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
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
			goto IL_0081;
		}

IL_000e:
		{
			// await DoSceneTransition(new Func<Task>[] { sceneOp1, sceneOp2 }, FadeOutTime, FadeInTime, progressIndicator);
			SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_2 = __this->get_U3CU3E4__this_5();
			Func_1U5BU5D_tC8C836685B57D98A62C1CAB8F14A1261EB3E4922* L_3 = (Func_1U5BU5D_tC8C836685B57D98A62C1CAB8F14A1261EB3E4922*)(Func_1U5BU5D_tC8C836685B57D98A62C1CAB8F14A1261EB3E4922*)SZArrayNew(Func_1U5BU5D_tC8C836685B57D98A62C1CAB8F14A1261EB3E4922_il2cpp_TypeInfo_var, (uint32_t)2);
			Func_1U5BU5D_tC8C836685B57D98A62C1CAB8F14A1261EB3E4922* L_4 = L_3;
			Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * L_5 = __this->get_sceneOp1_2();
			NullCheck(L_4);
			ArrayElementTypeCheck (L_4, L_5);
			(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 *)L_5);
			Func_1U5BU5D_tC8C836685B57D98A62C1CAB8F14A1261EB3E4922* L_6 = L_4;
			Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * L_7 = __this->get_sceneOp2_3();
			NullCheck(L_6);
			ArrayElementTypeCheck (L_6, L_7);
			(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 *)L_7);
			SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_8 = __this->get_U3CU3E4__this_5();
			NullCheck(L_8);
			float L_9;
			L_9 = SceneTransitionService_get_FadeOutTime_m3ED9369249E772C3E36B16D6CA397421A75105BA_inline(L_8, /*hidden argument*/NULL);
			SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_10 = __this->get_U3CU3E4__this_5();
			NullCheck(L_10);
			float L_11;
			L_11 = SceneTransitionService_get_FadeInTime_m15E938D71B45AAB8102B26D140A0B020451FCECB_inline(L_10, /*hidden argument*/NULL);
			RuntimeObject* L_12 = __this->get_progressIndicator_4();
			NullCheck(L_2);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_13;
			L_13 = SceneTransitionService_DoSceneTransition_m4DB41055B7EE65708B43A7DE6D7731C5A69D5D26(L_2, (RuntimeObject*)(RuntimeObject*)L_6, L_9, L_11, L_12, /*hidden argument*/NULL);
			NullCheck(L_13);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_14;
			L_14 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_13, /*hidden argument*/NULL);
			V_1 = L_14;
			bool L_15;
			L_15 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
			if (L_15)
			{
				goto IL_009d;
			}
		}

IL_005d:
		{
			int32_t L_16 = 0;
			V_0 = L_16;
			__this->set_U3CU3E1__state_0(L_16);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_17 = V_1;
			__this->set_U3CU3Eu__1_6(L_17);
			V_2 = __this;
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_18 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7_m12D834F8A63DBAFF88C5960752D39C0820CC162C((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_18, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), (U3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7 **)(&V_2), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7_m12D834F8A63DBAFF88C5960752D39C0820CC162C_RuntimeMethod_var);
			goto IL_00d3;
		}

IL_0081:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_19 = __this->get_U3CU3Eu__1_6();
			V_1 = L_19;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_20 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_20, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_21 = (-1);
			V_0 = L_21;
			__this->set_U3CU3E1__state_0(L_21);
		}

IL_009d:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
			goto IL_00bf;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a7;
		}
		throw e;
	}

CATCH_00a7:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_22 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_23 = V_3;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_22, L_23, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d3;
	} // end catch (depth: 1)

IL_00bf:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_24 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_24, /*hidden argument*/NULL);
	}

IL_00d3:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__49::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSceneTransitionU3Ed__49_SetStateMachine_m34CCFFAC1ABB391CB007C0845E5A6922583050AE (U3CDoSceneTransitionU3Ed__49_t9086E74825E9EF5E9FC3E3820AF25BA0094871C7 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__50::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSceneTransitionU3Ed__50__ctor_mFC0C114504A8E17363A0ED998F37729402B229DD (U3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__50::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSceneTransitionU3Ed__50_MoveNext_mA0EB8EFBDDA414C26FE9A097D43B4146C2A527F5 (U3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309_mB2E014B649B2587291B515A73948299F1289F4E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309 * V_2 = NULL;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
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
			goto IL_006f;
		}

IL_000e:
		{
			// await DoSceneTransition(sceneOperations, FadeOutTime, FadeInTime, progressIndicator);
			SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_2 = __this->get_U3CU3E4__this_4();
			RuntimeObject* L_3 = __this->get_sceneOperations_2();
			SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_4 = __this->get_U3CU3E4__this_4();
			NullCheck(L_4);
			float L_5;
			L_5 = SceneTransitionService_get_FadeOutTime_m3ED9369249E772C3E36B16D6CA397421A75105BA_inline(L_4, /*hidden argument*/NULL);
			SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_6 = __this->get_U3CU3E4__this_4();
			NullCheck(L_6);
			float L_7;
			L_7 = SceneTransitionService_get_FadeInTime_m15E938D71B45AAB8102B26D140A0B020451FCECB_inline(L_6, /*hidden argument*/NULL);
			RuntimeObject* L_8 = __this->get_progressIndicator_3();
			NullCheck(L_2);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_9;
			L_9 = SceneTransitionService_DoSceneTransition_m4DB41055B7EE65708B43A7DE6D7731C5A69D5D26(L_2, L_3, L_5, L_7, L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_10;
			L_10 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_9, /*hidden argument*/NULL);
			V_1 = L_10;
			bool L_11;
			L_11 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_008b;
			}
		}

IL_004b:
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_13 = V_1;
			__this->set_U3CU3Eu__1_5(L_13);
			V_2 = __this;
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_14 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309_mB2E014B649B2587291B515A73948299F1289F4E9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_14, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), (U3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309 **)(&V_2), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309_mB2E014B649B2587291B515A73948299F1289F4E9_RuntimeMethod_var);
			goto IL_00c1;
		}

IL_006f:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_15 = __this->get_U3CU3Eu__1_5();
			V_1 = L_15;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_16 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_16, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->set_U3CU3E1__state_0(L_17);
		}

IL_008b:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
			goto IL_00ad;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0095;
		}
		throw e;
	}

CATCH_0095:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_19 = V_3;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_18, L_19, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c1;
	} // end catch (depth: 1)

IL_00ad:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_20, /*hidden argument*/NULL);
	}

IL_00c1:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__50::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSceneTransitionU3Ed__50_SetStateMachine_m968DA9E8155AAB436ABA32FECC821C910B099AB5 (U3CDoSceneTransitionU3Ed__50_t04F161FB95A0417F42D4147E2D5202E6BA301309 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSceneTransitionU3Ed__52__ctor_m74B6475F2C40B802A7D500224E8BFE7315CFBDF0 (U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSceneTransitionU3Ed__52_MoveNext_m5066365B16ED3D15A0D4C060EB43EEE3104D5291 (U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2_m406A3E6563C8186C07C522BB281EEFB1B0A471EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_m3B5AC943F23CE7225ACF20C2B4B5E2D3FF1EBDDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t7D3CE49DEF7BDC88D95900E58AB06872FDE59009_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD259C605C945E5BABB034B4C2221351E85AFF5F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProgressIndicator_t9C6F896C9D44D4078E294EF6E62471A3B5E1F3F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2 * V_6 = NULL;
	bool V_7 = false;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_8;
	memset((&V_8), 0, sizeof(V_8));
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_11;
	memset((&V_11), 0, sizeof(V_11));
	bool V_12 = false;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_13;
	memset((&V_13), 0, sizeof(V_13));
	Exception_t * V_14 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 9> __leave_targets;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B17_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B16_0 = NULL;
	int32_t G_B21_0 = 0;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B61_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B60_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)4))))
			{
				goto IL_000d;
			}
		}

IL_000b:
		{
			goto IL_000f;
		}

IL_000d:
		{
			goto IL_0023;
		}

IL_000f:
		{
			// using (DoSceneTransitionPerfMarker.Auto())
			IL2CPP_RUNTIME_CLASS_INIT(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_il2cpp_TypeInfo_var);
			ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_2 = ((SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_il2cpp_TypeInfo_var))->get_DoSceneTransitionPerfMarker_29();
			V_1 = L_2;
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_3;
			L_3 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
			__this->set_U3CU3Es__1_7(L_3);
		}

IL_0023:
		{
		}

IL_0024:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_4 = V_0;
				switch (L_4)
				{
					case 0:
					{
						goto IL_0040;
					}
					case 1:
					{
						goto IL_0045;
					}
					case 2:
					{
						goto IL_004a;
					}
					case 3:
					{
						goto IL_004f;
					}
					case 4:
					{
						goto IL_0054;
					}
				}
			}

IL_003e:
			{
				goto IL_0059;
			}

IL_0040:
			{
				goto IL_0169;
			}

IL_0045:
			{
				goto IL_01e3;
			}

IL_004a:
			{
				goto IL_021b;
			}

IL_004f:
			{
				goto IL_0332;
			}

IL_0054:
			{
				goto IL_03b4;
			}

IL_0059:
			{
				// fadeOutTime = Mathf.Clamp(fadeOutTime, 0, maxFadeOutTime);
				float L_5 = __this->get_fadeOutTime_3();
				float L_6;
				L_6 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_5, (0.0f), (30.0f), /*hidden argument*/NULL);
				__this->set_fadeOutTime_3(L_6);
				// fadeInTime = Mathf.Clamp(fadeInTime, 0, maxFadeInTime);
				float L_7 = __this->get_fadeInTime_4();
				float L_8;
				L_8 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_7, (0.0f), (30.0f), /*hidden argument*/NULL);
				__this->set_fadeInTime_4(L_8);
				// if (TransitionInProgress)
				SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_9 = __this->get_U3CU3E4__this_6();
				NullCheck(L_9);
				bool L_10;
				L_10 = SceneTransitionService_get_TransitionInProgress_mE88E1AFDC8306745B7B0469BC5D976B0B61A2977_inline(L_9, /*hidden argument*/NULL);
				V_2 = L_10;
				bool L_11 = V_2;
				if (!L_11)
				{
					goto IL_00ab;
				}
			}

IL_009f:
			{
				// throw new Exception("Attempting to do a transition while one is already in progress.");
				Exception_t * L_12 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral940FB1761904743E250EFA2AF7552DF6EB59FE94)), /*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDoSceneTransitionU3Ed__52_MoveNext_m5066365B16ED3D15A0D4C060EB43EEE3104D5291_RuntimeMethod_var)));
			}

IL_00ab:
			{
				// TransitionInProgress = true;
				SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_13 = __this->get_U3CU3E4__this_6();
				NullCheck(L_13);
				SceneTransitionService_set_TransitionInProgress_mDE23061208518F3BB45ACDD1A651DB0078E9A58B_inline(L_13, (bool)1, /*hidden argument*/NULL);
				// OnTransitionStarted?.Invoke();
				SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_14 = __this->get_U3CU3E4__this_6();
				NullCheck(L_14);
				Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_15;
				L_15 = SceneTransitionService_get_OnTransitionStarted_m79FE4E48928E3474EC96CD4EDA1D4D37E4395EA9_inline(L_14, /*hidden argument*/NULL);
				Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_16 = L_15;
				G_B16_0 = L_16;
				if (L_16)
				{
					G_B17_0 = L_16;
					goto IL_00c9;
				}
			}

IL_00c6:
			{
				goto IL_00cf;
			}

IL_00c9:
			{
				NullCheck(G_B17_0);
				Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B17_0, /*hidden argument*/NULL);
			}

IL_00cf:
			{
				// if (progressIndicator == null && sceneTransitionServiceProfile.UseDefaultProgressIndicator)
				RuntimeObject* L_17 = __this->get_progressIndicator_5();
				if (L_17)
				{
					goto IL_00e9;
				}
			}

IL_00d7:
			{
				SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_18 = __this->get_U3CU3E4__this_6();
				NullCheck(L_18);
				SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * L_19 = L_18->get_sceneTransitionServiceProfile_24();
				NullCheck(L_19);
				bool L_20;
				L_20 = SceneTransitionServiceProfile_get_UseDefaultProgressIndicator_mAA156F923F259F32C85571D58510DE29E5AE1DFA_inline(L_19, /*hidden argument*/NULL);
				G_B21_0 = ((int32_t)(L_20));
				goto IL_00ea;
			}

IL_00e9:
			{
				G_B21_0 = 0;
			}

IL_00ea:
			{
				V_3 = (bool)G_B21_0;
				bool L_21 = V_3;
				if (!L_21)
				{
					goto IL_010d;
				}
			}

IL_00ee:
			{
				// CreateDefaultProgressIndicator();
				SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_22 = __this->get_U3CU3E4__this_6();
				NullCheck(L_22);
				SceneTransitionService_CreateDefaultProgressIndicator_m66C1E1419E72B6CCBD497A5A760282B28E8C6A60(L_22, /*hidden argument*/NULL);
				// progressIndicator = defaultProgressIndicator;
				SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_23 = __this->get_U3CU3E4__this_6();
				NullCheck(L_23);
				RuntimeObject* L_24 = L_23->get_defaultProgressIndicator_26();
				__this->set_progressIndicator_5(L_24);
			}

IL_010d:
			{
				// if (UseFadeColor)
				SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_25 = __this->get_U3CU3E4__this_6();
				NullCheck(L_25);
				bool L_26;
				L_26 = SceneTransitionService_get_UseFadeColor_mFF9317A7AF3F0AFD19ADE209B4FB2A3C8E0959B3_inline(L_25, /*hidden argument*/NULL);
				V_4 = L_26;
				bool L_27 = V_4;
				if (!L_27)
				{
					goto IL_018f;
				}
			}

IL_011e:
			{
				// await FadeOut(fadeOutTime);
				SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_28 = __this->get_U3CU3E4__this_6();
				float L_29 = __this->get_fadeOutTime_3();
				NullCheck(L_28);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_30;
				L_30 = SceneTransitionService_FadeOut_m3572A602877F506CE83D7759824DA66D96BA6A4B(L_28, L_29, /*hidden argument*/NULL);
				NullCheck(L_30);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_31;
				L_31 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_30, /*hidden argument*/NULL);
				V_5 = L_31;
				bool L_32;
				L_32 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_5), /*hidden argument*/NULL);
				if (L_32)
				{
					goto IL_0186;
				}
			}

IL_0140:
			{
				int32_t L_33 = 0;
				V_0 = L_33;
				__this->set_U3CU3E1__state_0(L_33);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_34 = V_5;
				__this->set_U3CU3Eu__1_10(L_34);
				V_6 = __this;
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_35 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2_m406A3E6563C8186C07C522BB281EEFB1B0A471EA((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_35, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_5), (U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2 **)(&V_6), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2_m406A3E6563C8186C07C522BB281EEFB1B0A471EA_RuntimeMethod_var);
				IL2CPP_LEAVE(0x454, FINALLY_0401);
			}

IL_0169:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_36 = __this->get_U3CU3Eu__1_10();
				V_5 = L_36;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_37 = __this->get_address_of_U3CU3Eu__1_10();
				il2cpp_codegen_initobj(L_37, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_38 = (-1);
				V_0 = L_38;
				__this->set_U3CU3E1__state_0(L_38);
			}

IL_0186:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_5), /*hidden argument*/NULL);
			}

IL_018f:
			{
				// if (progressIndicator != null)
				RuntimeObject* L_39 = __this->get_progressIndicator_5();
				V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_39) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
				bool L_40 = V_7;
				if (!L_40)
				{
					goto IL_0209;
				}
			}

IL_019e:
			{
				// await progressIndicator.OpenAsync();
				RuntimeObject* L_41 = __this->get_progressIndicator_5();
				NullCheck(L_41);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_42;
				L_42 = InterfaceFuncInvoker0< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * >::Invoke(4 /* System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::OpenAsync() */, IProgressIndicator_t9C6F896C9D44D4078E294EF6E62471A3B5E1F3F9_il2cpp_TypeInfo_var, L_41);
				NullCheck(L_42);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_43;
				L_43 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_42, /*hidden argument*/NULL);
				V_8 = L_43;
				bool L_44;
				L_44 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_8), /*hidden argument*/NULL);
				if (L_44)
				{
					goto IL_0200;
				}
			}

IL_01ba:
			{
				int32_t L_45 = 1;
				V_0 = L_45;
				__this->set_U3CU3E1__state_0(L_45);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_46 = V_8;
				__this->set_U3CU3Eu__1_10(L_46);
				V_6 = __this;
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_47 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2_m406A3E6563C8186C07C522BB281EEFB1B0A471EA((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_47, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_8), (U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2 **)(&V_6), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2_m406A3E6563C8186C07C522BB281EEFB1B0A471EA_RuntimeMethod_var);
				IL2CPP_LEAVE(0x454, FINALLY_0401);
			}

IL_01e3:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_48 = __this->get_U3CU3Eu__1_10();
				V_8 = L_48;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_49 = __this->get_address_of_U3CU3Eu__1_10();
				il2cpp_codegen_initobj(L_49, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_50 = (-1);
				V_0 = L_50;
				__this->set_U3CU3E1__state_0(L_50);
			}

IL_0200:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_8), /*hidden argument*/NULL);
			}

IL_0209:
			{
				// foreach (Func<Task> sceneOperation in sceneOperations)
				RuntimeObject* L_51 = __this->get_sceneOperations_2();
				NullCheck(L_51);
				RuntimeObject* L_52;
				L_52 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Func`1<System.Threading.Tasks.Task>>::GetEnumerator() */, IEnumerable_1_t7D3CE49DEF7BDC88D95900E58AB06872FDE59009_il2cpp_TypeInfo_var, L_51);
				__this->set_U3CU3Es__2_8(L_52);
			}

IL_021b:
			{
			}

IL_021c:
			try
			{ // begin try (depth: 3)
				{
					int32_t L_53 = V_0;
					if ((((int32_t)L_53) == ((int32_t)2)))
					{
						goto IL_0222;
					}
				}

IL_0220:
				{
					goto IL_0224;
				}

IL_0222:
				{
					goto IL_027f;
				}

IL_0224:
				{
					goto IL_02ac;
				}

IL_0229:
				{
					// foreach (Func<Task> sceneOperation in sceneOperations)
					RuntimeObject* L_54 = __this->get_U3CU3Es__2_8();
					NullCheck(L_54);
					Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * L_55;
					L_55 = InterfaceFuncInvoker0< Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Func`1<System.Threading.Tasks.Task>>::get_Current() */, IEnumerator_1_tD259C605C945E5BABB034B4C2221351E85AFF5F6_il2cpp_TypeInfo_var, L_54);
					__this->set_U3CsceneOperationU3E5__3_9(L_55);
					// await sceneOperation();
					Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * L_56 = __this->get_U3CsceneOperationU3E5__3_9();
					NullCheck(L_56);
					Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_57;
					L_57 = Func_1_Invoke_m3B5AC943F23CE7225ACF20C2B4B5E2D3FF1EBDDF(L_56, /*hidden argument*/Func_1_Invoke_m3B5AC943F23CE7225ACF20C2B4B5E2D3FF1EBDDF_RuntimeMethod_var);
					NullCheck(L_57);
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_58;
					L_58 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_57, /*hidden argument*/NULL);
					V_9 = L_58;
					bool L_59;
					L_59 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_9), /*hidden argument*/NULL);
					if (L_59)
					{
						goto IL_029c;
					}
				}

IL_0256:
				{
					int32_t L_60 = 2;
					V_0 = L_60;
					__this->set_U3CU3E1__state_0(L_60);
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_61 = V_9;
					__this->set_U3CU3Eu__1_10(L_61);
					V_6 = __this;
					AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_62 = __this->get_address_of_U3CU3Et__builder_1();
					AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2_m406A3E6563C8186C07C522BB281EEFB1B0A471EA((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_62, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_9), (U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2 **)(&V_6), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2_m406A3E6563C8186C07C522BB281EEFB1B0A471EA_RuntimeMethod_var);
					IL2CPP_LEAVE(0x454, FINALLY_02be);
				}

IL_027f:
				{
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_63 = __this->get_U3CU3Eu__1_10();
					V_9 = L_63;
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_64 = __this->get_address_of_U3CU3Eu__1_10();
					il2cpp_codegen_initobj(L_64, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
					int32_t L_65 = (-1);
					V_0 = L_65;
					__this->set_U3CU3E1__state_0(L_65);
				}

IL_029c:
				{
					TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_9), /*hidden argument*/NULL);
					__this->set_U3CsceneOperationU3E5__3_9((Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 *)NULL);
				}

IL_02ac:
				{
					// foreach (Func<Task> sceneOperation in sceneOperations)
					RuntimeObject* L_66 = __this->get_U3CU3Es__2_8();
					NullCheck(L_66);
					bool L_67;
					L_67 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_66);
					if (L_67)
					{
						goto IL_0229;
					}
				}

IL_02bc:
				{
					IL2CPP_LEAVE(0x2D7, FINALLY_02be);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_02be;
			}

FINALLY_02be:
			{ // begin finally (depth: 3)
				{
					int32_t L_68 = V_0;
					if ((((int32_t)L_68) >= ((int32_t)0)))
					{
						goto IL_02d6;
					}
				}

IL_02c2:
				{
					RuntimeObject* L_69 = __this->get_U3CU3Es__2_8();
					if (!L_69)
					{
						goto IL_02d6;
					}
				}

IL_02ca:
				{
					RuntimeObject* L_70 = __this->get_U3CU3Es__2_8();
					NullCheck(L_70);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_70);
				}

IL_02d6:
				{
					IL2CPP_END_FINALLY(702)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(702)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_END_CLEANUP(0x454, FINALLY_0401);
				IL2CPP_JUMP_TBL(0x2D7, IL_02d7)
			}

IL_02d7:
			{
				__this->set_U3CU3Es__2_8((RuntimeObject*)NULL);
				// if (progressIndicator != null)
				RuntimeObject* L_71 = __this->get_progressIndicator_5();
				V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_71) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
				bool L_72 = V_10;
				if (!L_72)
				{
					goto IL_0358;
				}
			}

IL_02ed:
			{
				// await progressIndicator.CloseAsync();
				RuntimeObject* L_73 = __this->get_progressIndicator_5();
				NullCheck(L_73);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_74;
				L_74 = InterfaceFuncInvoker0< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * >::Invoke(6 /* System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::CloseAsync() */, IProgressIndicator_t9C6F896C9D44D4078E294EF6E62471A3B5E1F3F9_il2cpp_TypeInfo_var, L_73);
				NullCheck(L_74);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_75;
				L_75 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_74, /*hidden argument*/NULL);
				V_11 = L_75;
				bool L_76;
				L_76 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_11), /*hidden argument*/NULL);
				if (L_76)
				{
					goto IL_034f;
				}
			}

IL_0309:
			{
				int32_t L_77 = 3;
				V_0 = L_77;
				__this->set_U3CU3E1__state_0(L_77);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_78 = V_11;
				__this->set_U3CU3Eu__1_10(L_78);
				V_6 = __this;
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_79 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2_m406A3E6563C8186C07C522BB281EEFB1B0A471EA((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_79, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_11), (U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2 **)(&V_6), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2_m406A3E6563C8186C07C522BB281EEFB1B0A471EA_RuntimeMethod_var);
				IL2CPP_LEAVE(0x454, FINALLY_0401);
			}

IL_0332:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_80 = __this->get_U3CU3Eu__1_10();
				V_11 = L_80;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_81 = __this->get_address_of_U3CU3Eu__1_10();
				il2cpp_codegen_initobj(L_81, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_82 = (-1);
				V_0 = L_82;
				__this->set_U3CU3E1__state_0(L_82);
			}

IL_034f:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_11), /*hidden argument*/NULL);
			}

IL_0358:
			{
				// if (UseFadeColor)
				SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_83 = __this->get_U3CU3E4__this_6();
				NullCheck(L_83);
				bool L_84;
				L_84 = SceneTransitionService_get_UseFadeColor_mFF9317A7AF3F0AFD19ADE209B4FB2A3C8E0959B3_inline(L_83, /*hidden argument*/NULL);
				V_12 = L_84;
				bool L_85 = V_12;
				if (!L_85)
				{
					goto IL_03da;
				}
			}

IL_0369:
			{
				// await FadeIn(fadeInTime);
				SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_86 = __this->get_U3CU3E4__this_6();
				float L_87 = __this->get_fadeInTime_4();
				NullCheck(L_86);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_88;
				L_88 = SceneTransitionService_FadeIn_mD91CE8759A1F0EABE73EA23CDF7002821F0B615A(L_86, L_87, /*hidden argument*/NULL);
				NullCheck(L_88);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_89;
				L_89 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_88, /*hidden argument*/NULL);
				V_13 = L_89;
				bool L_90;
				L_90 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_13), /*hidden argument*/NULL);
				if (L_90)
				{
					goto IL_03d1;
				}
			}

IL_038b:
			{
				int32_t L_91 = 4;
				V_0 = L_91;
				__this->set_U3CU3E1__state_0(L_91);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_92 = V_13;
				__this->set_U3CU3Eu__1_10(L_92);
				V_6 = __this;
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_93 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2_m406A3E6563C8186C07C522BB281EEFB1B0A471EA((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_93, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_13), (U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2 **)(&V_6), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2_m406A3E6563C8186C07C522BB281EEFB1B0A471EA_RuntimeMethod_var);
				IL2CPP_LEAVE(0x454, FINALLY_0401);
			}

IL_03b4:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_94 = __this->get_U3CU3Eu__1_10();
				V_13 = L_94;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_95 = __this->get_address_of_U3CU3Eu__1_10();
				il2cpp_codegen_initobj(L_95, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_96 = (-1);
				V_0 = L_96;
				__this->set_U3CU3E1__state_0(L_96);
			}

IL_03d1:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_13), /*hidden argument*/NULL);
			}

IL_03da:
			{
				// TransitionInProgress = false;
				SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_97 = __this->get_U3CU3E4__this_6();
				NullCheck(L_97);
				SceneTransitionService_set_TransitionInProgress_mDE23061208518F3BB45ACDD1A651DB0078E9A58B_inline(L_97, (bool)0, /*hidden argument*/NULL);
				// OnTransitionCompleted?.Invoke();
				SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_98 = __this->get_U3CU3E4__this_6();
				NullCheck(L_98);
				Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_99;
				L_99 = SceneTransitionService_get_OnTransitionCompleted_mF6867F8F71EBA04AE051171723E9DAB6E488A272_inline(L_98, /*hidden argument*/NULL);
				Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_100 = L_99;
				G_B60_0 = L_100;
				if (L_100)
				{
					G_B61_0 = L_100;
					goto IL_03f8;
				}
			}

IL_03f5:
			{
				goto IL_03fe;
			}

IL_03f8:
			{
				NullCheck(G_B61_0);
				Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B61_0, /*hidden argument*/NULL);
			}

IL_03fe:
			{
				IL2CPP_LEAVE(0x418, FINALLY_0401);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0401;
		}

FINALLY_0401:
		{ // begin finally (depth: 2)
			{
				int32_t L_101 = V_0;
				if ((((int32_t)L_101) >= ((int32_t)0)))
				{
					goto IL_0417;
				}
			}

IL_0405:
			{
				AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_102 = __this->get_address_of_U3CU3Es__1_7();
				AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)L_102, /*hidden argument*/NULL);
			}

IL_0417:
			{
				IL2CPP_END_FINALLY(1025)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(1025)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x454, IL_0454)
			IL2CPP_JUMP_TBL(0x418, IL_0418)
		}

IL_0418:
		{
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_103 = __this->get_address_of_U3CU3Es__1_7();
			il2cpp_codegen_initobj(L_103, sizeof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D ));
			goto IL_0440;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0426;
		}
		throw e;
	}

CATCH_0426:
	{ // begin catch(System.Exception)
		V_14 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_104 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_105 = V_14;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_104, L_105, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0454;
	} // end catch (depth: 1)

IL_0440:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_106 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_106, /*hidden argument*/NULL);
	}

IL_0454:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSceneTransitionU3Ed__52_SetStateMachine_m40FB65875882EAD1EE521C7CD5794124F0C4ECB6 (U3CDoSceneTransitionU3Ed__52_tE6AD027FC807A6F5A20A9D17BA606C867202E2E2 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__55::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__55__ctor_mF3B7B6CCC87226AA5525F52F982F58B8B673A075 (U3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__55::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__55_MoveNext_m8D2D75F904A52C3D45D5F5F57C9E17B5D9D361AC (U3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB_m8666591E7B4BC1523BA34BBB7C1F93F19C41ECEE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB * V_2 = NULL;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
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
			goto IL_0058;
		}

IL_000e:
		{
			// await FadeIn(FadeInTime);
			SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_2 = __this->get_U3CU3E4__this_2();
			SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_3 = __this->get_U3CU3E4__this_2();
			NullCheck(L_3);
			float L_4;
			L_4 = SceneTransitionService_get_FadeInTime_m15E938D71B45AAB8102B26D140A0B020451FCECB_inline(L_3, /*hidden argument*/NULL);
			NullCheck(L_2);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
			L_5 = SceneTransitionService_FadeIn_mD91CE8759A1F0EABE73EA23CDF7002821F0B615A(L_2, L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_6;
			L_6 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			bool L_7;
			L_7 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_0074;
			}
		}

IL_0034:
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->set_U3CU3E1__state_0(L_8);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_9 = V_1;
			__this->set_U3CU3Eu__1_3(L_9);
			V_2 = __this;
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_10 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB_m8666591E7B4BC1523BA34BBB7C1F93F19C41ECEE((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_10, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), (U3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB **)(&V_2), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB_m8666591E7B4BC1523BA34BBB7C1F93F19C41ECEE_RuntimeMethod_var);
			goto IL_00aa;
		}

IL_0058:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_11 = __this->get_U3CU3Eu__1_3();
			V_1 = L_11;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_12 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_0074:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
			goto IL_0096;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007e;
		}
		throw e;
	}

CATCH_007e:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_14 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_15 = V_3;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_14, L_15, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00aa;
	} // end catch (depth: 1)

IL_0096:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_16 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_16, /*hidden argument*/NULL);
	}

IL_00aa:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__55::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__55_SetStateMachine_m1299C188BF5C75D998C29B7DF0E088292A3966BB (U3CFadeInU3Ed__55_t67F03184FAA01C2EC33A731617ABD1C3C0E9DEBB * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__59__ctor_m0A72F0E4B03BC75E8BE5DF81963E47127D165046 (U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__59_MoveNext_m88D92043635467B5E337EA9BF2B0C359D8691197 (U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490_m51905B3992525E5B17106707F77A2E16FFFC16B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490_m43B08F7493D3007229AD078D50EC3FF3DDC0FAFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICameraFader_t5A340FB234F3C91DE810CFB0542DC48F56506F0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9A37D35927E80BED3DDCD4E0A2C8E638956590F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  V_4;
	memset((&V_4), 0, sizeof(V_4));
	YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490 * V_6 = NULL;
	bool V_7 = false;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_8;
	memset((&V_8), 0, sizeof(V_8));
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t * V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 7> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)2))))
			{
				goto IL_000d;
			}
		}

IL_000b:
		{
			goto IL_000f;
		}

IL_000d:
		{
			goto IL_0023;
		}

IL_000f:
		{
			// using (FadeInPerfMarker.Auto())
			IL2CPP_RUNTIME_CLASS_INIT(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_il2cpp_TypeInfo_var);
			ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_2 = ((SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_il2cpp_TypeInfo_var))->get_FadeInPerfMarker_31();
			V_1 = L_2;
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_3;
			L_3 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
			__this->set_U3CU3Es__1_4(L_3);
		}

IL_0023:
		{
		}

IL_0024:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_4 = V_0;
				switch (L_4)
				{
					case 0:
					{
						goto IL_0038;
					}
					case 1:
					{
						goto IL_003d;
					}
					case 2:
					{
						goto IL_0042;
					}
				}
			}

IL_0036:
			{
				goto IL_0047;
			}

IL_0038:
			{
				goto IL_00d8;
			}

IL_003d:
			{
				goto IL_0193;
			}

IL_0042:
			{
				goto IL_0206;
			}

IL_0047:
			{
				// CreateCameraFader();
				SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_5 = __this->get_U3CU3E4__this_3();
				NullCheck(L_5);
				SceneTransitionService_CreateCameraFader_m2F10F6975B011F99747AA30E5533D10C3CFF67AF(L_5, /*hidden argument*/NULL);
				// switch (cameraFader.State)
				SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_6 = __this->get_U3CU3E4__this_3();
				NullCheck(L_6);
				RuntimeObject* L_7 = L_6->get_cameraFader_27();
				NullCheck(L_7);
				int32_t L_8;
				L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderState Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.ICameraFader::get_State() */, ICameraFader_t5A340FB234F3C91DE810CFB0542DC48F56506F0A_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				int32_t L_9 = V_2;
				__this->set_U3CU3Es__2_5(L_9);
				int32_t L_10 = __this->get_U3CU3Es__2_5();
				V_3 = L_10;
				int32_t L_11 = V_3;
				switch (L_11)
				{
					case 0:
					{
						goto IL_012f;
					}
					case 1:
					{
						goto IL_011f;
					}
					case 2:
					{
						goto IL_008e;
					}
					case 3:
					{
						goto IL_0093;
					}
				}
			}

IL_0089:
			{
				goto IL_01ba;
			}

IL_008e:
			{
				// break;
				goto IL_01ba;
			}

IL_0093:
			{
				goto IL_00fe;
			}

IL_0095:
			{
				// await Task.Yield();
				IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
				YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  L_12;
				L_12 = Task_Yield_m1E79F65972D82906B8BBE9980C57E29538D3E94B(/*hidden argument*/NULL);
				V_5 = L_12;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_13;
				L_13 = YieldAwaitable_GetAwaiter_m8AA7D8DCF790EB9BDBDD5F0D8BBA0404C6F7DCD8((YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA *)(&V_5), /*hidden argument*/NULL);
				V_4 = L_13;
				bool L_14;
				L_14 = YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_4), /*hidden argument*/NULL);
				if (L_14)
				{
					goto IL_00f5;
				}
			}

IL_00af:
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->set_U3CU3E1__state_0(L_15);
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_16 = V_4;
				__this->set_U3CU3Eu__1_6(L_16);
				V_6 = __this;
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_17 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490_m43B08F7493D3007229AD078D50EC3FF3DDC0FAFB((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_17, (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_4), (U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490 **)(&V_6), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490_m43B08F7493D3007229AD078D50EC3FF3DDC0FAFB_RuntimeMethod_var);
				IL2CPP_LEAVE(0x281, FINALLY_022e);
			}

IL_00d8:
			{
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_18 = __this->get_U3CU3Eu__1_6();
				V_4 = L_18;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * L_19 = __this->get_address_of_U3CU3Eu__1_6();
				il2cpp_codegen_initobj(L_19, sizeof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE ));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->set_U3CU3E1__state_0(L_20);
			}

IL_00f5:
			{
				YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_4), /*hidden argument*/NULL);
			}

IL_00fe:
			{
				// while (cameraFader.State == CameraFaderState.FadingOut)
				SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_21 = __this->get_U3CU3E4__this_3();
				NullCheck(L_21);
				RuntimeObject* L_22 = L_21->get_cameraFader_27();
				NullCheck(L_22);
				int32_t L_23;
				L_23 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderState Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.ICameraFader::get_State() */, ICameraFader_t5A340FB234F3C91DE810CFB0542DC48F56506F0A_il2cpp_TypeInfo_var, L_22);
				V_7 = (bool)((((int32_t)L_23) == ((int32_t)3))? 1 : 0);
				bool L_24 = V_7;
				if (L_24)
				{
					goto IL_0095;
				}
			}

IL_011a:
			{
				// break;
				goto IL_01ba;
			}

IL_011f:
			{
				// Debug.LogWarning("Already fading in. Taking no action.");
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralB9A37D35927E80BED3DDCD4E0A2C8E638956590F, /*hidden argument*/NULL);
				// return;
				IL2CPP_LEAVE(0x26D, FINALLY_022e);
			}

IL_012f:
			{
				// await cameraFader.FadeOutAsync(0, FadeColor, GatherFadeTargetCameras());
				SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_25 = __this->get_U3CU3E4__this_3();
				NullCheck(L_25);
				RuntimeObject* L_26 = L_25->get_cameraFader_27();
				SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_27 = __this->get_U3CU3E4__this_3();
				NullCheck(L_27);
				Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_28;
				L_28 = SceneTransitionService_get_FadeColor_m471A2DAD627E3B635A2042AFB82A33248E5DB6F5_inline(L_27, /*hidden argument*/NULL);
				SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_29 = __this->get_U3CU3E4__this_3();
				NullCheck(L_29);
				List_1_t653022B4EDCE73F282430E1A396635798D309409 * L_30;
				L_30 = SceneTransitionService_GatherFadeTargetCameras_m05A7148CAE208F02964171818D8B8000F4D93234(L_29, /*hidden argument*/NULL);
				NullCheck(L_26);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_31;
				L_31 = InterfaceFuncInvoker3< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, float, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , RuntimeObject* >::Invoke(2 /* System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.ICameraFader::FadeOutAsync(System.Single,UnityEngine.Color,System.Collections.Generic.IEnumerable`1<UnityEngine.Camera>) */, ICameraFader_t5A340FB234F3C91DE810CFB0542DC48F56506F0A_il2cpp_TypeInfo_var, L_26, (0.0f), L_28, L_30);
				NullCheck(L_31);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_32;
				L_32 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_31, /*hidden argument*/NULL);
				V_8 = L_32;
				bool L_33;
				L_33 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_8), /*hidden argument*/NULL);
				if (L_33)
				{
					goto IL_01b0;
				}
			}

IL_016a:
			{
				int32_t L_34 = 1;
				V_0 = L_34;
				__this->set_U3CU3E1__state_0(L_34);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_35 = V_8;
				__this->set_U3CU3Eu__2_7(L_35);
				V_6 = __this;
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_36 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490_m51905B3992525E5B17106707F77A2E16FFFC16B7((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_36, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_8), (U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490 **)(&V_6), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490_m51905B3992525E5B17106707F77A2E16FFFC16B7_RuntimeMethod_var);
				IL2CPP_LEAVE(0x281, FINALLY_022e);
			}

IL_0193:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_37 = __this->get_U3CU3Eu__2_7();
				V_8 = L_37;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_38 = __this->get_address_of_U3CU3Eu__2_7();
				il2cpp_codegen_initobj(L_38, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_39 = (-1);
				V_0 = L_39;
				__this->set_U3CU3E1__state_0(L_39);
			}

IL_01b0:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_8), /*hidden argument*/NULL);
				// break;
				goto IL_01ba;
			}

IL_01ba:
			{
				// await cameraFader.FadeInAsync(fadeInTime);
				SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_40 = __this->get_U3CU3E4__this_3();
				NullCheck(L_40);
				RuntimeObject* L_41 = L_40->get_cameraFader_27();
				float L_42 = __this->get_fadeInTime_2();
				NullCheck(L_41);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_43;
				L_43 = InterfaceFuncInvoker1< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, float >::Invoke(3 /* System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.ICameraFader::FadeInAsync(System.Single) */, ICameraFader_t5A340FB234F3C91DE810CFB0542DC48F56506F0A_il2cpp_TypeInfo_var, L_41, L_42);
				NullCheck(L_43);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_44;
				L_44 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_43, /*hidden argument*/NULL);
				V_9 = L_44;
				bool L_45;
				L_45 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_9), /*hidden argument*/NULL);
				if (L_45)
				{
					goto IL_0223;
				}
			}

IL_01e0:
			{
				int32_t L_46 = 2;
				V_0 = L_46;
				__this->set_U3CU3E1__state_0(L_46);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_47 = V_9;
				__this->set_U3CU3Eu__2_7(L_47);
				V_6 = __this;
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_48 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490_m51905B3992525E5B17106707F77A2E16FFFC16B7((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_48, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_9), (U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490 **)(&V_6), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490_m51905B3992525E5B17106707F77A2E16FFFC16B7_RuntimeMethod_var);
				IL2CPP_LEAVE(0x281, FINALLY_022e);
			}

IL_0206:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_49 = __this->get_U3CU3Eu__2_7();
				V_9 = L_49;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_50 = __this->get_address_of_U3CU3Eu__2_7();
				il2cpp_codegen_initobj(L_50, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_51 = (-1);
				V_0 = L_51;
				__this->set_U3CU3E1__state_0(L_51);
			}

IL_0223:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_9), /*hidden argument*/NULL);
				IL2CPP_LEAVE(0x245, FINALLY_022e);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_022e;
		}

FINALLY_022e:
		{ // begin finally (depth: 2)
			{
				int32_t L_52 = V_0;
				if ((((int32_t)L_52) >= ((int32_t)0)))
				{
					goto IL_0244;
				}
			}

IL_0232:
			{
				AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_53 = __this->get_address_of_U3CU3Es__1_4();
				AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)L_53, /*hidden argument*/NULL);
			}

IL_0244:
			{
				IL2CPP_END_FINALLY(558)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(558)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x281, IL_0281)
			IL2CPP_JUMP_TBL(0x26D, IL_026d)
			IL2CPP_JUMP_TBL(0x245, IL_0245)
		}

IL_0245:
		{
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_54 = __this->get_address_of_U3CU3Es__1_4();
			il2cpp_codegen_initobj(L_54, sizeof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D ));
			goto IL_026d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0253;
		}
		throw e;
	}

CATCH_0253:
	{ // begin catch(System.Exception)
		V_10 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_55 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_56 = V_10;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_55, L_56, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0281;
	} // end catch (depth: 1)

IL_026d:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_57 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_57, /*hidden argument*/NULL);
	}

IL_0281:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__59_SetStateMachine_m416594B9822EEFCB9D80B657416787643F0296EB (U3CFadeInU3Ed__59_t9B987E095B92A2F40817C157B3730D38D63B4490 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__54::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__54__ctor_m91FDEFFA8058399F9EE40D7A69034C4470C692DB (U3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__54::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__54_MoveNext_m4E312E31A08CBAF21692049E669131AC409355C7 (U3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A_m507CCC317D9641C9C10FA44765270924458A149C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A * V_2 = NULL;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
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
			goto IL_0058;
		}

IL_000e:
		{
			// await FadeOut(FadeOutTime);
			SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_2 = __this->get_U3CU3E4__this_2();
			SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_3 = __this->get_U3CU3E4__this_2();
			NullCheck(L_3);
			float L_4;
			L_4 = SceneTransitionService_get_FadeOutTime_m3ED9369249E772C3E36B16D6CA397421A75105BA_inline(L_3, /*hidden argument*/NULL);
			NullCheck(L_2);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
			L_5 = SceneTransitionService_FadeOut_m3572A602877F506CE83D7759824DA66D96BA6A4B(L_2, L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_6;
			L_6 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			bool L_7;
			L_7 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_0074;
			}
		}

IL_0034:
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->set_U3CU3E1__state_0(L_8);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_9 = V_1;
			__this->set_U3CU3Eu__1_3(L_9);
			V_2 = __this;
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_10 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A_m507CCC317D9641C9C10FA44765270924458A149C((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_10, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), (U3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A **)(&V_2), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A_m507CCC317D9641C9C10FA44765270924458A149C_RuntimeMethod_var);
			goto IL_00aa;
		}

IL_0058:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_11 = __this->get_U3CU3Eu__1_3();
			V_1 = L_11;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_12 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_0074:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
			goto IL_0096;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007e;
		}
		throw e;
	}

CATCH_007e:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_14 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_15 = V_3;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_14, L_15, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00aa;
	} // end catch (depth: 1)

IL_0096:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_16 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_16, /*hidden argument*/NULL);
	}

IL_00aa:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__54::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__54_SetStateMachine_m2CA82D03A31E6337123D4001BFAE667D00D5490E (U3CFadeOutU3Ed__54_tBAE3D928B7D76F7522223C5559332B7CF9B3A39A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__57__ctor_mD2C4DE55A2A4F40152AD271E82950D021E9B55D0 (U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__57_MoveNext_mFCA5FD19FD6244980C3C23921091C7A7FCF812A8 (U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761_m54CDB1FF53709EE0AD454A3E238736BD4695C90E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761_m8D9A7206DCAB6123F05F671324D453A3B6B01F2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICameraFader_t5A340FB234F3C91DE810CFB0542DC48F56506F0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52C2722348A269EDA43E9964574EB943B39E2844);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C57382736310A2BDC33273D5EF4504D36B34FA7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  V_4;
	memset((&V_4), 0, sizeof(V_4));
	YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761 * V_6 = NULL;
	bool V_7 = false;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t * V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_000d;
			}
		}

IL_000b:
		{
			goto IL_000f;
		}

IL_000d:
		{
			goto IL_0023;
		}

IL_000f:
		{
			// using (FadeOutPerfMarker.Auto())
			IL2CPP_RUNTIME_CLASS_INIT(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_il2cpp_TypeInfo_var);
			ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_2 = ((SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_il2cpp_TypeInfo_var))->get_FadeOutPerfMarker_30();
			V_1 = L_2;
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_3;
			L_3 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
			__this->set_U3CU3Es__1_4(L_3);
		}

IL_0023:
		{
		}

IL_0024:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_4 = V_0;
				if (!L_4)
				{
					goto IL_002f;
				}
			}

IL_0027:
			{
				goto IL_0029;
			}

IL_0029:
			{
				int32_t L_5 = V_0;
				if ((((int32_t)L_5) == ((int32_t)1)))
				{
					goto IL_0034;
				}
			}

IL_002d:
			{
				goto IL_0039;
			}

IL_002f:
			{
				goto IL_00ea;
			}

IL_0034:
			{
				goto IL_0190;
			}

IL_0039:
			{
				// CreateCameraFader();
				SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_6 = __this->get_U3CU3E4__this_3();
				NullCheck(L_6);
				SceneTransitionService_CreateCameraFader_m2F10F6975B011F99747AA30E5533D10C3CFF67AF(L_6, /*hidden argument*/NULL);
				// switch (cameraFader.State)
				SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_7 = __this->get_U3CU3E4__this_3();
				NullCheck(L_7);
				RuntimeObject* L_8 = L_7->get_cameraFader_27();
				NullCheck(L_8);
				int32_t L_9;
				L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderState Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.ICameraFader::get_State() */, ICameraFader_t5A340FB234F3C91DE810CFB0542DC48F56506F0A_il2cpp_TypeInfo_var, L_8);
				V_2 = L_9;
				int32_t L_10 = V_2;
				__this->set_U3CU3Es__2_5(L_10);
				int32_t L_11 = __this->get_U3CU3Es__2_5();
				V_3 = L_11;
				int32_t L_12 = V_3;
				switch (L_12)
				{
					case 0:
					{
						goto IL_0080;
					}
					case 1:
					{
						goto IL_00a5;
					}
					case 2:
					{
						goto IL_0095;
					}
					case 3:
					{
						goto IL_0085;
					}
				}
			}

IL_007b:
			{
				goto IL_012e;
			}

IL_0080:
			{
				// break;
				goto IL_012e;
			}

IL_0085:
			{
				// Debug.LogWarning("Already fading out. Taking no action.");
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral6C57382736310A2BDC33273D5EF4504D36B34FA7, /*hidden argument*/NULL);
				// break;
				goto IL_012e;
			}

IL_0095:
			{
				// Debug.LogWarning("Already faded out. Taking no action.");
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral52C2722348A269EDA43E9964574EB943B39E2844, /*hidden argument*/NULL);
				// break;
				goto IL_012e;
			}

IL_00a5:
			{
				goto IL_0110;
			}

IL_00a7:
			{
				// await Task.Yield();
				IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
				YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  L_13;
				L_13 = Task_Yield_m1E79F65972D82906B8BBE9980C57E29538D3E94B(/*hidden argument*/NULL);
				V_5 = L_13;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_14;
				L_14 = YieldAwaitable_GetAwaiter_m8AA7D8DCF790EB9BDBDD5F0D8BBA0404C6F7DCD8((YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA *)(&V_5), /*hidden argument*/NULL);
				V_4 = L_14;
				bool L_15;
				L_15 = YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_4), /*hidden argument*/NULL);
				if (L_15)
				{
					goto IL_0107;
				}
			}

IL_00c1:
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->set_U3CU3E1__state_0(L_16);
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_17 = V_4;
				__this->set_U3CU3Eu__1_6(L_17);
				V_6 = __this;
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_18 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761_m8D9A7206DCAB6123F05F671324D453A3B6B01F2B((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_18, (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_4), (U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761 **)(&V_6), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761_m8D9A7206DCAB6123F05F671324D453A3B6B01F2B_RuntimeMethod_var);
				IL2CPP_LEAVE(0x20B, FINALLY_01b8);
			}

IL_00ea:
			{
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_19 = __this->get_U3CU3Eu__1_6();
				V_4 = L_19;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * L_20 = __this->get_address_of_U3CU3Eu__1_6();
				il2cpp_codegen_initobj(L_20, sizeof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE ));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->set_U3CU3E1__state_0(L_21);
			}

IL_0107:
			{
				YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_4), /*hidden argument*/NULL);
			}

IL_0110:
			{
				// while (cameraFader.State == CameraFaderState.FadingIn)
				SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_22 = __this->get_U3CU3E4__this_3();
				NullCheck(L_22);
				RuntimeObject* L_23 = L_22->get_cameraFader_27();
				NullCheck(L_23);
				int32_t L_24;
				L_24 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderState Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.ICameraFader::get_State() */, ICameraFader_t5A340FB234F3C91DE810CFB0542DC48F56506F0A_il2cpp_TypeInfo_var, L_23);
				V_7 = (bool)((((int32_t)L_24) == ((int32_t)1))? 1 : 0);
				bool L_25 = V_7;
				if (L_25)
				{
					goto IL_00a7;
				}
			}

IL_012c:
			{
				// break;
				goto IL_012e;
			}

IL_012e:
			{
				// await cameraFader.FadeOutAsync(fadeOutTime, FadeColor, GatherFadeTargetCameras());
				SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_26 = __this->get_U3CU3E4__this_3();
				NullCheck(L_26);
				RuntimeObject* L_27 = L_26->get_cameraFader_27();
				float L_28 = __this->get_fadeOutTime_2();
				SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_29 = __this->get_U3CU3E4__this_3();
				NullCheck(L_29);
				Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_30;
				L_30 = SceneTransitionService_get_FadeColor_m471A2DAD627E3B635A2042AFB82A33248E5DB6F5_inline(L_29, /*hidden argument*/NULL);
				SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_31 = __this->get_U3CU3E4__this_3();
				NullCheck(L_31);
				List_1_t653022B4EDCE73F282430E1A396635798D309409 * L_32;
				L_32 = SceneTransitionService_GatherFadeTargetCameras_m05A7148CAE208F02964171818D8B8000F4D93234(L_31, /*hidden argument*/NULL);
				NullCheck(L_27);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_33;
				L_33 = InterfaceFuncInvoker3< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, float, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , RuntimeObject* >::Invoke(2 /* System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.ICameraFader::FadeOutAsync(System.Single,UnityEngine.Color,System.Collections.Generic.IEnumerable`1<UnityEngine.Camera>) */, ICameraFader_t5A340FB234F3C91DE810CFB0542DC48F56506F0A_il2cpp_TypeInfo_var, L_27, L_28, L_30, L_32);
				NullCheck(L_33);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_34;
				L_34 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_33, /*hidden argument*/NULL);
				V_8 = L_34;
				bool L_35;
				L_35 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_8), /*hidden argument*/NULL);
				if (L_35)
				{
					goto IL_01ad;
				}
			}

IL_016a:
			{
				int32_t L_36 = 1;
				V_0 = L_36;
				__this->set_U3CU3E1__state_0(L_36);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_37 = V_8;
				__this->set_U3CU3Eu__2_7(L_37);
				V_6 = __this;
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_38 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761_m54CDB1FF53709EE0AD454A3E238736BD4695C90E((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_38, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_8), (U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761 **)(&V_6), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761_m54CDB1FF53709EE0AD454A3E238736BD4695C90E_RuntimeMethod_var);
				IL2CPP_LEAVE(0x20B, FINALLY_01b8);
			}

IL_0190:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_39 = __this->get_U3CU3Eu__2_7();
				V_8 = L_39;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_40 = __this->get_address_of_U3CU3Eu__2_7();
				il2cpp_codegen_initobj(L_40, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_41 = (-1);
				V_0 = L_41;
				__this->set_U3CU3E1__state_0(L_41);
			}

IL_01ad:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_8), /*hidden argument*/NULL);
				IL2CPP_LEAVE(0x1CF, FINALLY_01b8);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_01b8;
		}

FINALLY_01b8:
		{ // begin finally (depth: 2)
			{
				int32_t L_42 = V_0;
				if ((((int32_t)L_42) >= ((int32_t)0)))
				{
					goto IL_01ce;
				}
			}

IL_01bc:
			{
				AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_43 = __this->get_address_of_U3CU3Es__1_4();
				AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)L_43, /*hidden argument*/NULL);
			}

IL_01ce:
			{
				IL2CPP_END_FINALLY(440)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(440)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x20B, IL_020b)
			IL2CPP_JUMP_TBL(0x1CF, IL_01cf)
		}

IL_01cf:
		{
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_44 = __this->get_address_of_U3CU3Es__1_4();
			il2cpp_codegen_initobj(L_44, sizeof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D ));
			goto IL_01f7;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01dd;
		}
		throw e;
	}

CATCH_01dd:
	{ // begin catch(System.Exception)
		V_9 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_45 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_46 = V_9;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_45, L_46, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_020b;
	} // end catch (depth: 1)

IL_01f7:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_47 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_47, /*hidden argument*/NULL);
	}

IL_020b:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__57_SetStateMachine_m6AA726A2110B34918162E5ECA9A448084C4FFD2E (U3CFadeOutU3Ed__57_t89CD214C20327410C8CB9441970FCA4562B6D761 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<HideProgressIndicator>d__63::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHideProgressIndicatorU3Ed__63__ctor_mFB63A8219C8E58BC3DDAD9B34A0E76CDB1170640 (U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<HideProgressIndicator>d__63::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHideProgressIndicatorU3Ed__63_MoveNext_m4B94809EAE596EA63BBAEE01BF9A5AECBBF1772E (U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB_m7CD5D8D47E160A14F45B1895C4A5382A80C2A5F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB_m437AC1C6EDBD1D56FE5CC3A4D3803713AC8E04D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProgressIndicator_t9C6F896C9D44D4078E294EF6E62471A3B5E1F3F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DC2BD27F33C54867CE2E685D22F354136FB41AD);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  V_6;
	memset((&V_6), 0, sizeof(V_6));
	YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  V_7;
	memset((&V_7), 0, sizeof(V_7));
	U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB * V_8 = NULL;
	bool V_9 = false;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_10;
	memset((&V_10), 0, sizeof(V_10));
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  V_11;
	memset((&V_11), 0, sizeof(V_11));
	bool V_12 = false;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_13;
	memset((&V_13), 0, sizeof(V_13));
	Exception_t * V_14 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 13> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
			{
				goto IL_000d;
			}
		}

IL_000b:
		{
			goto IL_000f;
		}

IL_000d:
		{
			goto IL_005b;
		}

IL_000f:
		{
			// if (TransitionInProgress)
			SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_2 = __this->get_U3CU3E4__this_2();
			NullCheck(L_2);
			bool L_3;
			L_3 = SceneTransitionService_get_TransitionInProgress_mE88E1AFDC8306745B7B0469BC5D976B0B61A2977_inline(L_2, /*hidden argument*/NULL);
			V_1 = L_3;
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0030;
			}
		}

IL_001f:
		{
			// Debug.LogWarning("A scene transition is already in progress. This would interrupt that transition. Taking no action.");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral9DC2BD27F33C54867CE2E685D22F354136FB41AD, /*hidden argument*/NULL);
			// return;
			goto IL_0301;
		}

IL_0030:
		{
			// if (defaultProgressIndicator == null)
			SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_5 = __this->get_U3CU3E4__this_2();
			NullCheck(L_5);
			RuntimeObject* L_6 = L_5->get_defaultProgressIndicator_26();
			V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_6) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_7 = V_2;
			if (!L_7)
			{
				goto IL_0048;
			}
		}

IL_0042:
		{
			// return;
			goto IL_0301;
		}

IL_0048:
		{
			// using (HideProgressIndicatorPerfMarker.Auto())
			IL2CPP_RUNTIME_CLASS_INIT(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_il2cpp_TypeInfo_var);
			ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_8 = ((SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_il2cpp_TypeInfo_var))->get_HideProgressIndicatorPerfMarker_33();
			V_3 = L_8;
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_9;
			L_9 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_3), /*hidden argument*/NULL);
			__this->set_U3CU3Es__1_3(L_9);
		}

IL_005b:
		{
		}

IL_005c:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_10 = V_0;
				switch (L_10)
				{
					case 0:
					{
						goto IL_0074;
					}
					case 1:
					{
						goto IL_0079;
					}
					case 2:
					{
						goto IL_007e;
					}
					case 3:
					{
						goto IL_0083;
					}
				}
			}

IL_0072:
			{
				goto IL_0088;
			}

IL_0074:
			{
				goto IL_0111;
			}

IL_0079:
			{
				goto IL_01a1;
			}

IL_007e:
			{
				goto IL_0210;
			}

IL_0083:
			{
				goto IL_0298;
			}

IL_0088:
			{
				// switch (defaultProgressIndicator.State)
				SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_11 = __this->get_U3CU3E4__this_2();
				NullCheck(L_11);
				RuntimeObject* L_12 = L_11->get_defaultProgressIndicator_26();
				NullCheck(L_12);
				int32_t L_13;
				L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Microsoft.MixedReality.Toolkit.UI.ProgressIndicatorState Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::get_State() */, IProgressIndicator_t9C6F896C9D44D4078E294EF6E62471A3B5E1F3F9_il2cpp_TypeInfo_var, L_12);
				V_4 = L_13;
				int32_t L_14 = V_4;
				__this->set_U3CU3Es__2_4(L_14);
				int32_t L_15 = __this->get_U3CU3Es__2_4();
				V_5 = L_15;
				int32_t L_16 = V_5;
				switch (L_16)
				{
					case 0:
					{
						goto IL_00c7;
					}
					case 1:
					{
						goto IL_01cb;
					}
					case 2:
					{
						goto IL_0158;
					}
					case 3:
					{
						goto IL_00cc;
					}
				}
			}

IL_00c2:
			{
				goto IL_02bf;
			}

IL_00c7:
			{
				// return;
				IL2CPP_LEAVE(0x301, FINALLY_02c2);
			}

IL_00cc:
			{
				goto IL_0137;
			}

IL_00ce:
			{
				// await Task.Yield();
				IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
				YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  L_17;
				L_17 = Task_Yield_m1E79F65972D82906B8BBE9980C57E29538D3E94B(/*hidden argument*/NULL);
				V_7 = L_17;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_18;
				L_18 = YieldAwaitable_GetAwaiter_m8AA7D8DCF790EB9BDBDD5F0D8BBA0404C6F7DCD8((YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA *)(&V_7), /*hidden argument*/NULL);
				V_6 = L_18;
				bool L_19;
				L_19 = YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_6), /*hidden argument*/NULL);
				if (L_19)
				{
					goto IL_012e;
				}
			}

IL_00e8:
			{
				int32_t L_20 = 0;
				V_0 = L_20;
				__this->set_U3CU3E1__state_0(L_20);
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_21 = V_6;
				__this->set_U3CU3Eu__1_5(L_21);
				V_8 = __this;
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_22 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB_m437AC1C6EDBD1D56FE5CC3A4D3803713AC8E04D8((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_22, (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_6), (U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB **)(&V_8), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB_m437AC1C6EDBD1D56FE5CC3A4D3803713AC8E04D8_RuntimeMethod_var);
				IL2CPP_LEAVE(0x315, FINALLY_02c2);
			}

IL_0111:
			{
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_23 = __this->get_U3CU3Eu__1_5();
				V_6 = L_23;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * L_24 = __this->get_address_of_U3CU3Eu__1_5();
				il2cpp_codegen_initobj(L_24, sizeof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE ));
				int32_t L_25 = (-1);
				V_0 = L_25;
				__this->set_U3CU3E1__state_0(L_25);
			}

IL_012e:
			{
				YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_6), /*hidden argument*/NULL);
			}

IL_0137:
			{
				// while (defaultProgressIndicator.State == ProgressIndicatorState.Closing)
				SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_26 = __this->get_U3CU3E4__this_2();
				NullCheck(L_26);
				RuntimeObject* L_27 = L_26->get_defaultProgressIndicator_26();
				NullCheck(L_27);
				int32_t L_28;
				L_28 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Microsoft.MixedReality.Toolkit.UI.ProgressIndicatorState Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::get_State() */, IProgressIndicator_t9C6F896C9D44D4078E294EF6E62471A3B5E1F3F9_il2cpp_TypeInfo_var, L_27);
				V_9 = (bool)((((int32_t)L_28) == ((int32_t)3))? 1 : 0);
				bool L_29 = V_9;
				if (L_29)
				{
					goto IL_00ce;
				}
			}

IL_0153:
			{
				// return;
				IL2CPP_LEAVE(0x301, FINALLY_02c2);
			}

IL_0158:
			{
				// await defaultProgressIndicator.CloseAsync();
				SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_30 = __this->get_U3CU3E4__this_2();
				NullCheck(L_30);
				RuntimeObject* L_31 = L_30->get_defaultProgressIndicator_26();
				NullCheck(L_31);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_32;
				L_32 = InterfaceFuncInvoker0< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * >::Invoke(6 /* System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::CloseAsync() */, IProgressIndicator_t9C6F896C9D44D4078E294EF6E62471A3B5E1F3F9_il2cpp_TypeInfo_var, L_31);
				NullCheck(L_32);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_33;
				L_33 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_32, /*hidden argument*/NULL);
				V_10 = L_33;
				bool L_34;
				L_34 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_10), /*hidden argument*/NULL);
				if (L_34)
				{
					goto IL_01be;
				}
			}

IL_0178:
			{
				int32_t L_35 = 1;
				V_0 = L_35;
				__this->set_U3CU3E1__state_0(L_35);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_36 = V_10;
				__this->set_U3CU3Eu__2_6(L_36);
				V_8 = __this;
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_37 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB_m7CD5D8D47E160A14F45B1895C4A5382A80C2A5F9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_37, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_10), (U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB **)(&V_8), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB_m7CD5D8D47E160A14F45B1895C4A5382A80C2A5F9_RuntimeMethod_var);
				IL2CPP_LEAVE(0x315, FINALLY_02c2);
			}

IL_01a1:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_38 = __this->get_U3CU3Eu__2_6();
				V_10 = L_38;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_39 = __this->get_address_of_U3CU3Eu__2_6();
				il2cpp_codegen_initobj(L_39, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_40 = (-1);
				V_0 = L_40;
				__this->set_U3CU3E1__state_0(L_40);
			}

IL_01be:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_10), /*hidden argument*/NULL);
				// return;
				IL2CPP_LEAVE(0x301, FINALLY_02c2);
			}

IL_01cb:
			{
				goto IL_0236;
			}

IL_01cd:
			{
				// await Task.Yield();
				IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
				YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  L_41;
				L_41 = Task_Yield_m1E79F65972D82906B8BBE9980C57E29538D3E94B(/*hidden argument*/NULL);
				V_7 = L_41;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_42;
				L_42 = YieldAwaitable_GetAwaiter_m8AA7D8DCF790EB9BDBDD5F0D8BBA0404C6F7DCD8((YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA *)(&V_7), /*hidden argument*/NULL);
				V_11 = L_42;
				bool L_43;
				L_43 = YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_11), /*hidden argument*/NULL);
				if (L_43)
				{
					goto IL_022d;
				}
			}

IL_01e7:
			{
				int32_t L_44 = 2;
				V_0 = L_44;
				__this->set_U3CU3E1__state_0(L_44);
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_45 = V_11;
				__this->set_U3CU3Eu__1_5(L_45);
				V_8 = __this;
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_46 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB_m437AC1C6EDBD1D56FE5CC3A4D3803713AC8E04D8((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_46, (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_11), (U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB **)(&V_8), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB_m437AC1C6EDBD1D56FE5CC3A4D3803713AC8E04D8_RuntimeMethod_var);
				IL2CPP_LEAVE(0x315, FINALLY_02c2);
			}

IL_0210:
			{
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_47 = __this->get_U3CU3Eu__1_5();
				V_11 = L_47;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * L_48 = __this->get_address_of_U3CU3Eu__1_5();
				il2cpp_codegen_initobj(L_48, sizeof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE ));
				int32_t L_49 = (-1);
				V_0 = L_49;
				__this->set_U3CU3E1__state_0(L_49);
			}

IL_022d:
			{
				YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_11), /*hidden argument*/NULL);
			}

IL_0236:
			{
				// while (defaultProgressIndicator.State == ProgressIndicatorState.Opening)
				SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_50 = __this->get_U3CU3E4__this_2();
				NullCheck(L_50);
				RuntimeObject* L_51 = L_50->get_defaultProgressIndicator_26();
				NullCheck(L_51);
				int32_t L_52;
				L_52 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Microsoft.MixedReality.Toolkit.UI.ProgressIndicatorState Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::get_State() */, IProgressIndicator_t9C6F896C9D44D4078E294EF6E62471A3B5E1F3F9_il2cpp_TypeInfo_var, L_51);
				V_12 = (bool)((((int32_t)L_52) == ((int32_t)1))? 1 : 0);
				bool L_53 = V_12;
				if (L_53)
				{
					goto IL_01cd;
				}
			}

IL_0252:
			{
				// await defaultProgressIndicator.CloseAsync();
				SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * L_54 = __this->get_U3CU3E4__this_2();
				NullCheck(L_54);
				RuntimeObject* L_55 = L_54->get_defaultProgressIndicator_26();
				NullCheck(L_55);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_56;
				L_56 = InterfaceFuncInvoker0< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * >::Invoke(6 /* System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::CloseAsync() */, IProgressIndicator_t9C6F896C9D44D4078E294EF6E62471A3B5E1F3F9_il2cpp_TypeInfo_var, L_55);
				NullCheck(L_56);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_57;
				L_57 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_56, /*hidden argument*/NULL);
				V_13 = L_57;
				bool L_58;
				L_58 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_13), /*hidden argument*/NULL);
				if (L_58)
				{
					goto IL_02b5;
				}
			}

IL_0272:
			{
				int32_t L_59 = 3;
				V_0 = L_59;
				__this->set_U3CU3E1__state_0(L_59);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_60 = V_13;
				__this->set_U3CU3Eu__2_6(L_60);
				V_8 = __this;
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_61 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB_m7CD5D8D47E160A14F45B1895C4A5382A80C2A5F9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_61, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_13), (U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB **)(&V_8), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB_m7CD5D8D47E160A14F45B1895C4A5382A80C2A5F9_RuntimeMethod_var);
				IL2CPP_LEAVE(0x315, FINALLY_02c2);
			}

IL_0298:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_62 = __this->get_U3CU3Eu__2_6();
				V_13 = L_62;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_63 = __this->get_address_of_U3CU3Eu__2_6();
				il2cpp_codegen_initobj(L_63, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_64 = (-1);
				V_0 = L_64;
				__this->set_U3CU3E1__state_0(L_64);
			}

IL_02b5:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_13), /*hidden argument*/NULL);
				// return;
				IL2CPP_LEAVE(0x301, FINALLY_02c2);
			}

IL_02bf:
			{
				IL2CPP_LEAVE(0x2D9, FINALLY_02c2);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_02c2;
		}

FINALLY_02c2:
		{ // begin finally (depth: 2)
			{
				int32_t L_65 = V_0;
				if ((((int32_t)L_65) >= ((int32_t)0)))
				{
					goto IL_02d8;
				}
			}

IL_02c6:
			{
				AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_66 = __this->get_address_of_U3CU3Es__1_3();
				AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)L_66, /*hidden argument*/NULL);
			}

IL_02d8:
			{
				IL2CPP_END_FINALLY(706)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(706)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x301, IL_0301)
			IL2CPP_JUMP_TBL(0x315, IL_0315)
			IL2CPP_JUMP_TBL(0x2D9, IL_02d9)
		}

IL_02d9:
		{
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_67 = __this->get_address_of_U3CU3Es__1_3();
			il2cpp_codegen_initobj(L_67, sizeof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D ));
			goto IL_0301;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02e7;
		}
		throw e;
	}

CATCH_02e7:
	{ // begin catch(System.Exception)
		V_14 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_68 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_69 = V_14;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_68, L_69, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0315;
	} // end catch (depth: 1)

IL_0301:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_70 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_70, /*hidden argument*/NULL);
	}

IL_0315:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<HideProgressIndicator>d__63::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHideProgressIndicatorU3Ed__63_SetStateMachine_m1BB691A0A68B630BFFF573AE45651F3062EF992D (U3CHideProgressIndicatorU3Ed__63_t8A095CA5B8FAFF03AD64AB3FA711901C9820A2AB * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * SceneTransitionServiceProfile_get_CameraFaderMaterial_m2157AAE0604004A29A3A45CBF2025A0228E44E52_inline (SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * __this, const RuntimeMethod* method)
{
	{
		// public Material CameraFaderMaterial => cameraFaderMaterial;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_cameraFaderMaterial_13();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736 * MixedRealityToolkit_get_Instance_mE6D76247E654294CE0C95EED06C63E6584104D18_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityToolkit Instance => activeInstance;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736_il2cpp_TypeInfo_var);
		MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736 * L_0 = ((MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkit_tD459C8995C8A785B038BD826047B1C3797966736_il2cpp_TypeInfo_var))->get_activeInstance_13();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseExtensionService_set_Registrar_m3086F1E779B722C1076567F4235D06359EF9D9C6_inline (BaseExtensionService_t4B2A1112509F645C2FA38479075967B1918EAC97 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// protected IMixedRealityServiceRegistrar Registrar { get; set; } = null;
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CRegistrarU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneTransitionServiceProfile_get_UseFadeColor_mA53E961E9DF1E837C7A0EF8DA533E5DA864D9DA4_inline (SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * __this, const RuntimeMethod* method)
{
	{
		// public bool UseFadeColor => useFadeColor;
		bool L_0 = __this->get_useFadeColor_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SceneTransitionService_set_UseFadeColor_mD6A7366B07E6FB2A8B065110CD042A438B114300_inline (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool UseFadeColor { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CUseFadeColorU3Ek__BackingField_15(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  SceneTransitionServiceProfile_get_FadeColor_m433B9C9C485391AD442793ABF78661FE0AA8078C_inline (SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * __this, const RuntimeMethod* method)
{
	{
		// public Color FadeColor => fadeColor;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_fadeColor_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SceneTransitionService_set_FadeColor_mE2C5CEE2784425D8A416E46C96D13451F0DFAD20_inline (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method)
{
	{
		// public Color FadeColor { get; set; }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___value0;
		__this->set_U3CFadeColorU3Ek__BackingField_16(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SceneTransitionServiceProfile_get_FadeInTime_mFC2028AFF917D14FC94536ED5D4950CEABEC7615_inline (SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * __this, const RuntimeMethod* method)
{
	{
		// public float FadeInTime => fadeInTime;
		float L_0 = __this->get_fadeInTime_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SceneTransitionService_set_FadeInTime_mA80222964B3B15EB73EF387C3A3BA33D40BEDB9A_inline (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float FadeInTime { get; set; }
		float L_0 = ___value0;
		__this->set_U3CFadeInTimeU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SceneTransitionServiceProfile_get_FadeOutTime_mC2225A195CA1B12297146F4C0FE28B3C2A27E6DB_inline (SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * __this, const RuntimeMethod* method)
{
	{
		// public float FadeOutTime => fadeOutTime;
		float L_0 = __this->get_fadeOutTime_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SceneTransitionService_set_FadeOutTime_mF5875EE829683C07F323B646EB912141265E5E34_inline (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float FadeOutTime { get; set; }
		float L_0 = ___value0;
		__this->set_U3CFadeOutTimeU3Ek__BackingField_18(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SceneTransitionServiceProfile_get_FadeTargets_mF9801D8E36093E5883D476F61786D828D1970608_inline (SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * __this, const RuntimeMethod* method)
{
	{
		// public CameraFaderTargets FadeTargets => fadeTargets;
		int32_t L_0 = __this->get_fadeTargets_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SceneTransitionService_set_FadeTargets_mBAB759F0750BD7FF03A6D05DB7693F7F07F49160_inline (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public CameraFaderTargets FadeTargets { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CFadeTargetsU3Ek__BackingField_19(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SceneTransitionService_get_FadeTargets_mE941417F78028883964FA95FDE71E19AAF85B8A4_inline (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method)
{
	{
		// public CameraFaderTargets FadeTargets { get; set; }
		int32_t L_0 = __this->get_U3CFadeTargetsU3Ek__BackingField_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * SceneTransitionServiceProfile_get_DefaultProgressIndicatorPrefab_mC5EA938C85BD421AA81DB7A792594A6E8CB876D4_inline (SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject DefaultProgressIndicatorPrefab => defaultProgressIndicatorPrefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_defaultProgressIndicatorPrefab_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E * SceneTransitionServiceProfile_get_CameraFaderType_mC2D04FEBFCA35EE0104D9398417AC2FD76511122_inline (SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * __this, const RuntimeMethod* method)
{
	{
		// public SystemType CameraFaderType => cameraFaderType;
		SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E * L_0 = __this->get_cameraFaderType_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * SystemType_get_Type_mD7B7EEF3C5ED6B16E2DFB9F89FCE9A8B58895E23_inline (SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E * __this, const RuntimeMethod* method)
{
	{
		// get => type;
		Type_t * L_0 = __this->get_type_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CameraFaderQuad_get_State_mB0F8535BD5C67BACCBA17DF523792859E6F659A5_inline (CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * __this, const RuntimeMethod* method)
{
	{
		// public CameraFaderState State { get; private set; }
		int32_t L_0 = __this->get_U3CStateU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraFaderQuad_set_State_m54FCB1AA568BD19715397FBC68E5C96FA38AC778_inline (CameraFaderQuad_tF83753B4F51E28251E8258DEEC59D0C9BE0CF409 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public CameraFaderState State { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_2(L_0);
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SceneTransitionService_get_FadeOutTime_m3ED9369249E772C3E36B16D6CA397421A75105BA_inline (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method)
{
	{
		// public float FadeOutTime { get; set; }
		float L_0 = __this->get_U3CFadeOutTimeU3Ek__BackingField_18();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SceneTransitionService_get_FadeInTime_m15E938D71B45AAB8102B26D140A0B020451FCECB_inline (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method)
{
	{
		// public float FadeInTime { get; set; }
		float L_0 = __this->get_U3CFadeInTimeU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneTransitionService_get_TransitionInProgress_mE88E1AFDC8306745B7B0469BC5D976B0B61A2977_inline (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method)
{
	{
		// public bool TransitionInProgress { get; set; }
		bool L_0 = __this->get_U3CTransitionInProgressU3Ek__BackingField_22();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SceneTransitionService_set_TransitionInProgress_mDE23061208518F3BB45ACDD1A651DB0078E9A58B_inline (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool TransitionInProgress { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CTransitionInProgressU3Ek__BackingField_22(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * SceneTransitionService_get_OnTransitionStarted_m79FE4E48928E3474EC96CD4EDA1D4D37E4395EA9_inline (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method)
{
	{
		// public Action OnTransitionStarted { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_U3COnTransitionStartedU3Ek__BackingField_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneTransitionServiceProfile_get_UseDefaultProgressIndicator_mAA156F923F259F32C85571D58510DE29E5AE1DFA_inline (SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * __this, const RuntimeMethod* method)
{
	{
		// public bool UseDefaultProgressIndicator => useDefaultProgressIndicator;
		bool L_0 = __this->get_useDefaultProgressIndicator_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneTransitionService_get_UseFadeColor_mFF9317A7AF3F0AFD19ADE209B4FB2A3C8E0959B3_inline (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method)
{
	{
		// public bool UseFadeColor { get; set; }
		bool L_0 = __this->get_U3CUseFadeColorU3Ek__BackingField_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * SceneTransitionService_get_OnTransitionCompleted_mF6867F8F71EBA04AE051171723E9DAB6E488A272_inline (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method)
{
	{
		// public Action OnTransitionCompleted { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_U3COnTransitionCompletedU3Ek__BackingField_21();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  SceneTransitionService_get_FadeColor_m471A2DAD627E3B635A2042AFB82A33248E5DB6F5_inline (SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312 * __this, const RuntimeMethod* method)
{
	{
		// public Color FadeColor { get; set; }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_U3CFadeColorU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quad_t5B5564685E1EC46AF269743F2349796C7724911B  Enumerator_get_Current_mB5ACBBA48ECBE67F0996BD616085C04D3C4A012B_gshared_inline (Enumerator_t4EE24AD225DE453ACAF75CFA6E793F1ED9F5497B * __this, const RuntimeMethod* method)
{
	{
		Quad_t5B5564685E1EC46AF269743F2349796C7724911B  L_0 = (Quad_t5B5564685E1EC46AF269743F2349796C7724911B )__this->get_currentValue_3();
		return (Quad_t5B5564685E1EC46AF269743F2349796C7724911B )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
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

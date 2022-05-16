#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.ObjectModel.Collection`1<System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim>>
struct Collection_1_t4B9DAC2FCC5C07ECB15672BA2775EBAAC1A9ACA5;
// System.Collections.Concurrent.ConcurrentQueue`1<Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject>
struct ConcurrentQueue_1_tA6D925C7D9B5461E41C08314EA9AE5C2CE493CB7;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32>
struct Dictionary_2_t40AD0E25A9C651DF2D10B7C03EE5D87856C2A72D;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct Dictionary_2_tA0FD2AFAAFE4AEDFD84AEE2B7DA1E4180E174DBF;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Tuple`2<Microsoft.MixedReality.SceneUnderstanding.SceneQuad,Microsoft.MixedReality.SceneUnderstanding.SceneObject>>
struct Dictionary_2_t877A02A3DCED84372E8F6CA424353CD00CD1EF45;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Guid>
struct Dictionary_2_t6129019525B6065C5CB178570DE87B8155840619;
// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct Dictionary_2_tBFEF92C709D6CF5C8220E4553DF6064FCB30A49B;
// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject>
struct Dictionary_2_t90E0DC17995431E62A89609E53E52FDDD331CC34;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>>
struct EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject>>
struct EventFunction_1_t09C3552D0E392433F9E1730706B3D5BC8B3B43FE;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver>
struct IReadOnlyList_1_t8E7D506555C39BDC847A5B62DB9413C0E19F9C8A;
// System.Collections.Generic.List`1<System.Security.Claims.Claim>
struct List_1_t8BAF47F89605F5DE54C67557D63C291478F11812;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics>
struct List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D;
// System.Collections.Generic.List`1<Microsoft.MixedReality.SceneUnderstanding.SceneObject>
struct List_1_t884C040642DCB159A123549C8F62D3860DCC52FF;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject>
struct List_1_tAE037B58DD2A07B4BE1C2953C5736358AD7C3BAD;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct MixedRealitySpatialAwarenessEventData_1_tF7D69DC7933E29CC1550C477DDCEBB80CBDF9A9E;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject>
struct MixedRealitySpatialAwarenessEventData_1_tFFFE9C796D7933A1A6252E5F34D692980EC69DD3;
// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>
struct Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.SByte[]
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[]
struct PointerConfigU5BU5D_tAB402AEBBC6B3D1142E9E6CB11F242801DC4574C;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190;
// System.Net.WebHeaderCollection/RfcChar[]
struct RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// Microsoft.MixedReality.Toolkit.Input.BaseGlobalInputSource
struct BaseGlobalInputSource_tE9B93B834C51342F071089F6B2AB580A0219AEF2;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF;
// System.Net.BufferOffsetSize
struct BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// UnityEngine.Windows.Speech.DictationRecognizer
struct DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B;
// Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother
struct EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Net.HeaderInfoTable
struct HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4;
// System.Net.HttpWebRequest
struct HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A;
// System.Collections.ICollection
struct ICollection_tC1E1DED86C0A66845675392606B302452210D5DA;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// System.Runtime.InteropServices.IMarshal
struct IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F;
// Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem
struct IMixedRealityCameraSystem_t168F62A5236518B8EDAD06AFD6E258EF8B5C0457;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride
struct IMixedRealityGazeProviderHeadOverride_t639443EF48CEE257BA4C6391C7112B7390F665FC;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_t923212C7B71ADAD3E3C21B99009C9612530D3FE7;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t6D453243E31F7729D3E9B49623B6B7092296E4C4;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t96040EB1E30984BEEE1B1302381393D337FD6ABC;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem
struct IMixedRealitySpatialAwarenessSystem_t68AB7D55F0DA754D6C02996CE17A595FF5B6A34F;
// UnityEngine.Windows.Speech.KeywordRecognizer
struct KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Net.MonoChunkStream
struct MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7;
// Mono.Net.Security.MonoTlsStream
struct MonoTlsStream_t1CBBE92DE7BA1B432289982184305AF431C01233;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D;
// System.Net.NetworkCredential
struct NetworkCredential_t263CA6068540C6DA0E1CDE919BD7A15C28D55686;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2;
// Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride
struct ProjectionOverride_t4DF569F4323CCAE299E1DF0A1EAC2D923195FFC4;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.Net.ServicePoint
struct ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0;
// System.Net.Sockets.Socket
struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct SpatialAwarenessMeshObject_t714D18632EDCC5238156A908F5F8132BF0291944;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// System.Timers.Timer
struct Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE;
// System.Version
struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C;
// UnityEngine.VFX.VisualEffectAsset
struct VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21;
// System.Net.WebCompletionSource
struct WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E;
// System.Net.WebConnection
struct WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88;
// System.Net.WebConnectionTunnel
struct WebConnectionTunnel_t0DEDF9AB5FFB065A77FAAA0F72C6C4763CDBC925;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4;
// System.Net.WebOperation
struct WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00;
// System.Net.WebRequestStream
struct WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater
struct WindowsMixedRealityReprojectionUpdater_t88EA6DECA4D02D71B2C00B02938FEED0ABB37434;
// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer
struct WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129;
// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63;
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t3F50A00BF980B1193E44D4EBE470C34903F4631E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_il2cpp_TypeInfo_var;
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ;
struct Guid_t ;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ;
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 ;
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ;
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Runtime.InteropServices.IAgileObject
struct NOVTABLE IAgileObject_t6F1702BEB08256952B124A9982A893DF328C2434 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.Storage.Streams.IBuffer
struct NOVTABLE IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Capacity_m4FBAA7520F46F3CC6D15DCA72AE6DE7682A9A470(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Length_m5433B1C2AADBE9CE086F6DAE6E300C687A17DB19(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_put_Length_mF6D33616BBEEBF636AA7AF9EFA8525C3F721FE01(uint32_t ___value0) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() = 0;
};

// System.Object


// System.Security.Claims.ClaimsIdentity
struct ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Claims.ClaimsIdentity::m_userSerializationData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_userSerializationData_0;
	// System.Collections.Generic.List`1<System.Security.Claims.Claim> System.Security.Claims.ClaimsIdentity::m_instanceClaims
	List_1_t8BAF47F89605F5DE54C67557D63C291478F11812 * ___m_instanceClaims_1;
	// System.Collections.ObjectModel.Collection`1<System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim>> System.Security.Claims.ClaimsIdentity::m_externalClaims
	Collection_1_t4B9DAC2FCC5C07ECB15672BA2775EBAAC1A9ACA5 * ___m_externalClaims_2;
	// System.String System.Security.Claims.ClaimsIdentity::m_nameType
	String_t* ___m_nameType_3;
	// System.String System.Security.Claims.ClaimsIdentity::m_roleType
	String_t* ___m_roleType_4;
	// System.String System.Security.Claims.ClaimsIdentity::m_version
	String_t* ___m_version_5;
	// System.Security.Claims.ClaimsIdentity System.Security.Claims.ClaimsIdentity::m_actor
	ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6 * ___m_actor_6;
	// System.String System.Security.Claims.ClaimsIdentity::m_authenticationType
	String_t* ___m_authenticationType_7;
	// System.Object System.Security.Claims.ClaimsIdentity::m_bootstrapContext
	RuntimeObject * ___m_bootstrapContext_8;
	// System.String System.Security.Claims.ClaimsIdentity::m_label
	String_t* ___m_label_9;
	// System.String System.Security.Claims.ClaimsIdentity::m_serializedNameType
	String_t* ___m_serializedNameType_10;
	// System.String System.Security.Claims.ClaimsIdentity::m_serializedRoleType
	String_t* ___m_serializedRoleType_11;
	// System.String System.Security.Claims.ClaimsIdentity::m_serializedClaims
	String_t* ___m_serializedClaims_12;

public:
	inline static int32_t get_offset_of_m_userSerializationData_0() { return static_cast<int32_t>(offsetof(ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6, ___m_userSerializationData_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_userSerializationData_0() const { return ___m_userSerializationData_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_userSerializationData_0() { return &___m_userSerializationData_0; }
	inline void set_m_userSerializationData_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_userSerializationData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_userSerializationData_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_instanceClaims_1() { return static_cast<int32_t>(offsetof(ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6, ___m_instanceClaims_1)); }
	inline List_1_t8BAF47F89605F5DE54C67557D63C291478F11812 * get_m_instanceClaims_1() const { return ___m_instanceClaims_1; }
	inline List_1_t8BAF47F89605F5DE54C67557D63C291478F11812 ** get_address_of_m_instanceClaims_1() { return &___m_instanceClaims_1; }
	inline void set_m_instanceClaims_1(List_1_t8BAF47F89605F5DE54C67557D63C291478F11812 * value)
	{
		___m_instanceClaims_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_instanceClaims_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_externalClaims_2() { return static_cast<int32_t>(offsetof(ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6, ___m_externalClaims_2)); }
	inline Collection_1_t4B9DAC2FCC5C07ECB15672BA2775EBAAC1A9ACA5 * get_m_externalClaims_2() const { return ___m_externalClaims_2; }
	inline Collection_1_t4B9DAC2FCC5C07ECB15672BA2775EBAAC1A9ACA5 ** get_address_of_m_externalClaims_2() { return &___m_externalClaims_2; }
	inline void set_m_externalClaims_2(Collection_1_t4B9DAC2FCC5C07ECB15672BA2775EBAAC1A9ACA5 * value)
	{
		___m_externalClaims_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_externalClaims_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_nameType_3() { return static_cast<int32_t>(offsetof(ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6, ___m_nameType_3)); }
	inline String_t* get_m_nameType_3() const { return ___m_nameType_3; }
	inline String_t** get_address_of_m_nameType_3() { return &___m_nameType_3; }
	inline void set_m_nameType_3(String_t* value)
	{
		___m_nameType_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_nameType_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_roleType_4() { return static_cast<int32_t>(offsetof(ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6, ___m_roleType_4)); }
	inline String_t* get_m_roleType_4() const { return ___m_roleType_4; }
	inline String_t** get_address_of_m_roleType_4() { return &___m_roleType_4; }
	inline void set_m_roleType_4(String_t* value)
	{
		___m_roleType_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_roleType_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_version_5() { return static_cast<int32_t>(offsetof(ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6, ___m_version_5)); }
	inline String_t* get_m_version_5() const { return ___m_version_5; }
	inline String_t** get_address_of_m_version_5() { return &___m_version_5; }
	inline void set_m_version_5(String_t* value)
	{
		___m_version_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_version_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_actor_6() { return static_cast<int32_t>(offsetof(ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6, ___m_actor_6)); }
	inline ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6 * get_m_actor_6() const { return ___m_actor_6; }
	inline ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6 ** get_address_of_m_actor_6() { return &___m_actor_6; }
	inline void set_m_actor_6(ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6 * value)
	{
		___m_actor_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actor_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_authenticationType_7() { return static_cast<int32_t>(offsetof(ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6, ___m_authenticationType_7)); }
	inline String_t* get_m_authenticationType_7() const { return ___m_authenticationType_7; }
	inline String_t** get_address_of_m_authenticationType_7() { return &___m_authenticationType_7; }
	inline void set_m_authenticationType_7(String_t* value)
	{
		___m_authenticationType_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_authenticationType_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_bootstrapContext_8() { return static_cast<int32_t>(offsetof(ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6, ___m_bootstrapContext_8)); }
	inline RuntimeObject * get_m_bootstrapContext_8() const { return ___m_bootstrapContext_8; }
	inline RuntimeObject ** get_address_of_m_bootstrapContext_8() { return &___m_bootstrapContext_8; }
	inline void set_m_bootstrapContext_8(RuntimeObject * value)
	{
		___m_bootstrapContext_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_bootstrapContext_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_label_9() { return static_cast<int32_t>(offsetof(ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6, ___m_label_9)); }
	inline String_t* get_m_label_9() const { return ___m_label_9; }
	inline String_t** get_address_of_m_label_9() { return &___m_label_9; }
	inline void set_m_label_9(String_t* value)
	{
		___m_label_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_label_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_serializedNameType_10() { return static_cast<int32_t>(offsetof(ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6, ___m_serializedNameType_10)); }
	inline String_t* get_m_serializedNameType_10() const { return ___m_serializedNameType_10; }
	inline String_t** get_address_of_m_serializedNameType_10() { return &___m_serializedNameType_10; }
	inline void set_m_serializedNameType_10(String_t* value)
	{
		___m_serializedNameType_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_serializedNameType_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_serializedRoleType_11() { return static_cast<int32_t>(offsetof(ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6, ___m_serializedRoleType_11)); }
	inline String_t* get_m_serializedRoleType_11() const { return ___m_serializedRoleType_11; }
	inline String_t** get_address_of_m_serializedRoleType_11() { return &___m_serializedRoleType_11; }
	inline void set_m_serializedRoleType_11(String_t* value)
	{
		___m_serializedRoleType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_serializedRoleType_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_serializedClaims_12() { return static_cast<int32_t>(offsetof(ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6, ___m_serializedClaims_12)); }
	inline String_t* get_m_serializedClaims_12() const { return ___m_serializedClaims_12; }
	inline String_t** get_address_of_m_serializedClaims_12() { return &___m_serializedClaims_12; }
	inline void set_m_serializedClaims_12(String_t* value)
	{
		___m_serializedClaims_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_serializedClaims_12), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29  : public RuntimeObject
{
public:
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::_readOnly
	bool ____readOnly_0;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::_entriesArray
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____entriesArray_1;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::_keyComparer
	RuntimeObject* ____keyComparer_2;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_entriesTable
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____entriesTable_3;
	// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_nullKeyEntry
	NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 * ____nullKeyEntry_4;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::_serializationInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____serializationInfo_5;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::_version
	int32_t ____version_6;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase::_syncRoot
	RuntimeObject * ____syncRoot_7;

public:
	inline static int32_t get_offset_of__readOnly_0() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____readOnly_0)); }
	inline bool get__readOnly_0() const { return ____readOnly_0; }
	inline bool* get_address_of__readOnly_0() { return &____readOnly_0; }
	inline void set__readOnly_0(bool value)
	{
		____readOnly_0 = value;
	}

	inline static int32_t get_offset_of__entriesArray_1() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____entriesArray_1)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__entriesArray_1() const { return ____entriesArray_1; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__entriesArray_1() { return &____entriesArray_1; }
	inline void set__entriesArray_1(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____entriesArray_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entriesArray_1), (void*)value);
	}

	inline static int32_t get_offset_of__keyComparer_2() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____keyComparer_2)); }
	inline RuntimeObject* get__keyComparer_2() const { return ____keyComparer_2; }
	inline RuntimeObject** get_address_of__keyComparer_2() { return &____keyComparer_2; }
	inline void set__keyComparer_2(RuntimeObject* value)
	{
		____keyComparer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keyComparer_2), (void*)value);
	}

	inline static int32_t get_offset_of__entriesTable_3() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____entriesTable_3)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__entriesTable_3() const { return ____entriesTable_3; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__entriesTable_3() { return &____entriesTable_3; }
	inline void set__entriesTable_3(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____entriesTable_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entriesTable_3), (void*)value);
	}

	inline static int32_t get_offset_of__nullKeyEntry_4() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____nullKeyEntry_4)); }
	inline NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 * get__nullKeyEntry_4() const { return ____nullKeyEntry_4; }
	inline NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 ** get_address_of__nullKeyEntry_4() { return &____nullKeyEntry_4; }
	inline void set__nullKeyEntry_4(NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 * value)
	{
		____nullKeyEntry_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nullKeyEntry_4), (void*)value);
	}

	inline static int32_t get_offset_of__serializationInfo_5() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____serializationInfo_5)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__serializationInfo_5() const { return ____serializationInfo_5; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__serializationInfo_5() { return &____serializationInfo_5; }
	inline void set__serializationInfo_5(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____serializationInfo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____serializationInfo_5), (void*)value);
	}

	inline static int32_t get_offset_of__version_6() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____version_6)); }
	inline int32_t get__version_6() const { return ____version_6; }
	inline int32_t* get_address_of__version_6() { return &____version_6; }
	inline void set__version_6(int32_t value)
	{
		____version_6 = value;
	}

	inline static int32_t get_offset_of__syncRoot_7() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____syncRoot_7)); }
	inline RuntimeObject * get__syncRoot_7() const { return ____syncRoot_7; }
	inline RuntimeObject ** get_address_of__syncRoot_7() { return &____syncRoot_7; }
	inline void set__syncRoot_7(RuntimeObject * value)
	{
		____syncRoot_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_7), (void*)value);
	}
};

struct NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29_StaticFields
{
public:
	// System.StringComparer System.Collections.Specialized.NameObjectCollectionBase::defaultComparer
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ___defaultComparer_8;

public:
	inline static int32_t get_offset_of_defaultComparer_8() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29_StaticFields, ___defaultComparer_8)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get_defaultComparer_8() const { return ___defaultComparer_8; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of_defaultComparer_8() { return &___defaultComparer_8; }
	inline void set_defaultComparer_8(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		___defaultComparer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_8), (void*)value);
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


// System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
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


// Windows.Foundation.DateTime
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C 
{
public:
	// System.Int64 Windows.Foundation.DateTime::UniversalTime
	int64_t ___UniversalTime_0;

public:
	inline static int32_t get_offset_of_UniversalTime_0() { return static_cast<int32_t>(offsetof(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C, ___UniversalTime_0)); }
	inline int64_t get_UniversalTime_0() const { return ___UniversalTime_0; }
	inline int64_t* get_address_of_UniversalTime_0() { return &___UniversalTime_0; }
	inline void set_UniversalTime_0(int64_t value)
	{
		___UniversalTime_0 = value;
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
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


// System.Numerics.Matrix4x4
struct Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 
{
public:
	// System.Single System.Numerics.Matrix4x4::M11
	float ___M11_0;
	// System.Single System.Numerics.Matrix4x4::M12
	float ___M12_1;
	// System.Single System.Numerics.Matrix4x4::M13
	float ___M13_2;
	// System.Single System.Numerics.Matrix4x4::M14
	float ___M14_3;
	// System.Single System.Numerics.Matrix4x4::M21
	float ___M21_4;
	// System.Single System.Numerics.Matrix4x4::M22
	float ___M22_5;
	// System.Single System.Numerics.Matrix4x4::M23
	float ___M23_6;
	// System.Single System.Numerics.Matrix4x4::M24
	float ___M24_7;
	// System.Single System.Numerics.Matrix4x4::M31
	float ___M31_8;
	// System.Single System.Numerics.Matrix4x4::M32
	float ___M32_9;
	// System.Single System.Numerics.Matrix4x4::M33
	float ___M33_10;
	// System.Single System.Numerics.Matrix4x4::M34
	float ___M34_11;
	// System.Single System.Numerics.Matrix4x4::M41
	float ___M41_12;
	// System.Single System.Numerics.Matrix4x4::M42
	float ___M42_13;
	// System.Single System.Numerics.Matrix4x4::M43
	float ___M43_14;
	// System.Single System.Numerics.Matrix4x4::M44
	float ___M44_15;

public:
	inline static int32_t get_offset_of_M11_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M11_0)); }
	inline float get_M11_0() const { return ___M11_0; }
	inline float* get_address_of_M11_0() { return &___M11_0; }
	inline void set_M11_0(float value)
	{
		___M11_0 = value;
	}

	inline static int32_t get_offset_of_M12_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M12_1)); }
	inline float get_M12_1() const { return ___M12_1; }
	inline float* get_address_of_M12_1() { return &___M12_1; }
	inline void set_M12_1(float value)
	{
		___M12_1 = value;
	}

	inline static int32_t get_offset_of_M13_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M13_2)); }
	inline float get_M13_2() const { return ___M13_2; }
	inline float* get_address_of_M13_2() { return &___M13_2; }
	inline void set_M13_2(float value)
	{
		___M13_2 = value;
	}

	inline static int32_t get_offset_of_M14_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M14_3)); }
	inline float get_M14_3() const { return ___M14_3; }
	inline float* get_address_of_M14_3() { return &___M14_3; }
	inline void set_M14_3(float value)
	{
		___M14_3 = value;
	}

	inline static int32_t get_offset_of_M21_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M21_4)); }
	inline float get_M21_4() const { return ___M21_4; }
	inline float* get_address_of_M21_4() { return &___M21_4; }
	inline void set_M21_4(float value)
	{
		___M21_4 = value;
	}

	inline static int32_t get_offset_of_M22_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M22_5)); }
	inline float get_M22_5() const { return ___M22_5; }
	inline float* get_address_of_M22_5() { return &___M22_5; }
	inline void set_M22_5(float value)
	{
		___M22_5 = value;
	}

	inline static int32_t get_offset_of_M23_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M23_6)); }
	inline float get_M23_6() const { return ___M23_6; }
	inline float* get_address_of_M23_6() { return &___M23_6; }
	inline void set_M23_6(float value)
	{
		___M23_6 = value;
	}

	inline static int32_t get_offset_of_M24_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M24_7)); }
	inline float get_M24_7() const { return ___M24_7; }
	inline float* get_address_of_M24_7() { return &___M24_7; }
	inline void set_M24_7(float value)
	{
		___M24_7 = value;
	}

	inline static int32_t get_offset_of_M31_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M31_8)); }
	inline float get_M31_8() const { return ___M31_8; }
	inline float* get_address_of_M31_8() { return &___M31_8; }
	inline void set_M31_8(float value)
	{
		___M31_8 = value;
	}

	inline static int32_t get_offset_of_M32_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M32_9)); }
	inline float get_M32_9() const { return ___M32_9; }
	inline float* get_address_of_M32_9() { return &___M32_9; }
	inline void set_M32_9(float value)
	{
		___M32_9 = value;
	}

	inline static int32_t get_offset_of_M33_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M33_10)); }
	inline float get_M33_10() const { return ___M33_10; }
	inline float* get_address_of_M33_10() { return &___M33_10; }
	inline void set_M33_10(float value)
	{
		___M33_10 = value;
	}

	inline static int32_t get_offset_of_M34_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M34_11)); }
	inline float get_M34_11() const { return ___M34_11; }
	inline float* get_address_of_M34_11() { return &___M34_11; }
	inline void set_M34_11(float value)
	{
		___M34_11 = value;
	}

	inline static int32_t get_offset_of_M41_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M41_12)); }
	inline float get_M41_12() const { return ___M41_12; }
	inline float* get_address_of_M41_12() { return &___M41_12; }
	inline void set_M41_12(float value)
	{
		___M41_12 = value;
	}

	inline static int32_t get_offset_of_M42_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M42_13)); }
	inline float get_M42_13() const { return ___M42_13; }
	inline float* get_address_of_M42_13() { return &___M42_13; }
	inline void set_M42_13(float value)
	{
		___M42_13 = value;
	}

	inline static int32_t get_offset_of_M43_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M43_14)); }
	inline float get_M43_14() const { return ___M43_14; }
	inline float* get_address_of_M43_14() { return &___M43_14; }
	inline void set_M43_14(float value)
	{
		___M43_14 = value;
	}

	inline static int32_t get_offset_of_M44_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M44_15)); }
	inline float get_M44_15() const { return ___M44_15; }
	inline float* get_address_of_M44_15() { return &___M44_15; }
	inline void set_M44_15(float value)
	{
		___M44_15 = value;
	}
};

struct Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_StaticFields
{
public:
	// System.Numerics.Matrix4x4 System.Numerics.Matrix4x4::_identity
	Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  ____identity_16;

public:
	inline static int32_t get_offset_of__identity_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_StaticFields, ____identity_16)); }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  get__identity_16() const { return ____identity_16; }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * get_address_of__identity_16() { return &____identity_16; }
	inline void set__identity_16(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  value)
	{
		____identity_16 = value;
	}
};


// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D  : public NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29
{
public:
	// System.String[] System.Collections.Specialized.NameValueCollection::_all
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____all_9;
	// System.String[] System.Collections.Specialized.NameValueCollection::_allKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____allKeys_10;

public:
	inline static int32_t get_offset_of__all_9() { return static_cast<int32_t>(offsetof(NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D, ____all_9)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__all_9() const { return ____all_9; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__all_9() { return &____all_9; }
	inline void set__all_9(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____all_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____all_9), (void*)value);
	}

	inline static int32_t get_offset_of__allKeys_10() { return static_cast<int32_t>(offsetof(NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D, ____allKeys_10)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__allKeys_10() const { return ____allKeys_10; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__allKeys_10() { return &____allKeys_10; }
	inline void set__allKeys_10(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____allKeys_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____allKeys_10), (void*)value);
	}
};


// Windows.Foundation.Point
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
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


// Windows.Foundation.Rect
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 
{
public:
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____height_3)); }
	inline float get__height_3() const { return ____height_3; }
	inline float* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(float value)
	{
		____height_3 = value;
	}
};


// Windows.Foundation.Size
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 
{
public:
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____width_0)); }
	inline float get__width_0() const { return ____width_0; }
	inline float* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(float value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____height_1)); }
	inline float get__height_1() const { return ____height_1; }
	inline float* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(float value)
	{
		____height_1 = value;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
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


// System.Numerics.Vector2
struct Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B 
{
public:
	// System.Single System.Numerics.Vector2::X
	float ___X_0;
	// System.Single System.Numerics.Vector2::Y
	float ___Y_1;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}
};


// Windows.Foundation.Numerics.Vector2
struct Vector2_t3F50A00BF980B1193E44D4EBE470C34903F4631E 
{
public:
	// System.Single Windows.Foundation.Numerics.Vector2::X
	float ___X_0;
	// System.Single Windows.Foundation.Numerics.Vector2::Y
	float ___Y_1;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Vector2_t3F50A00BF980B1193E44D4EBE470C34903F4631E, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Vector2_t3F50A00BF980B1193E44D4EBE470C34903F4631E, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}
};


// UnityEngine.Vector2Int
struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_One_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Up_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Down_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Left_6)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Right_7)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Right_7 = value;
	}
};


// System.Numerics.Vector3
struct Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 
{
public:
	// System.Single System.Numerics.Vector3::X
	float ___X_0;
	// System.Single System.Numerics.Vector3::Y
	float ___Y_1;
	// System.Single System.Numerics.Vector3::Z
	float ___Z_2;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
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


// Windows.Foundation.Numerics.Vector3
struct Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F 
{
public:
	// System.Single Windows.Foundation.Numerics.Vector3::X
	float ___X_0;
	// System.Single Windows.Foundation.Numerics.Vector3::Y
	float ___Y_1;
	// System.Single Windows.Foundation.Numerics.Vector3::Z
	float ___Z_2;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
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

// Windows.Foundation.IReference`1<System.Numerics.Vector2>
struct NOVTABLE IReference_1_t3C8A36C7276B7158A344146F353F2DCA871E4630 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m4255473F2FF2083F7A9A0B6E89C6B9532942FA5C(Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Vector2>
struct NOVTABLE IReference_1_tEAE3A44604921CCE36FBE3986D4AA48786A02DCF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB9D7D66ED2B28C2740BAFD26B96ED89E73383B5F(Vector2_t3F50A00BF980B1193E44D4EBE470C34903F4631E * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Numerics.Vector3>
struct NOVTABLE IReference_1_t82C05BA472430109829B64EEB0BA4AA8DA57EF70 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m41BE14B78D883205B1AB0B0F28DB78816768D26D(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Vector3>
struct NOVTABLE IReference_1_t2E90AA27DAF67A0C5212F008ED5019775E438EAF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mEFF123E1BD76AEDAED0313C6AC9D05313CBA7487(Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F * comReturnValue) = 0;
};

// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior
struct AutoStartBehavior_tCDA70490F61E73EABB1C3E2CD2E916418C018443 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoStartBehavior_tCDA70490F61E73EABB1C3E2CD2E916418C018443, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC  : public RuntimeObject
{
public:
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::buckets
	bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* ___buckets_10;
	// System.Int32 System.Collections.Hashtable::count
	int32_t ___count_11;
	// System.Int32 System.Collections.Hashtable::occupancy
	int32_t ___occupancy_12;
	// System.Int32 System.Collections.Hashtable::loadsize
	int32_t ___loadsize_13;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::version
	int32_t ___version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::isWriterInProgress
	bool ___isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::keys
	RuntimeObject* ___keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::values
	RuntimeObject* ___values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject * ____syncRoot_20;

public:
	inline static int32_t get_offset_of_buckets_10() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___buckets_10)); }
	inline bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* get_buckets_10() const { return ___buckets_10; }
	inline bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190** get_address_of_buckets_10() { return &___buckets_10; }
	inline void set_buckets_10(bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* value)
	{
		___buckets_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_10), (void*)value);
	}

	inline static int32_t get_offset_of_count_11() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___count_11)); }
	inline int32_t get_count_11() const { return ___count_11; }
	inline int32_t* get_address_of_count_11() { return &___count_11; }
	inline void set_count_11(int32_t value)
	{
		___count_11 = value;
	}

	inline static int32_t get_offset_of_occupancy_12() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___occupancy_12)); }
	inline int32_t get_occupancy_12() const { return ___occupancy_12; }
	inline int32_t* get_address_of_occupancy_12() { return &___occupancy_12; }
	inline void set_occupancy_12(int32_t value)
	{
		___occupancy_12 = value;
	}

	inline static int32_t get_offset_of_loadsize_13() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___loadsize_13)); }
	inline int32_t get_loadsize_13() const { return ___loadsize_13; }
	inline int32_t* get_address_of_loadsize_13() { return &___loadsize_13; }
	inline void set_loadsize_13(int32_t value)
	{
		___loadsize_13 = value;
	}

	inline static int32_t get_offset_of_loadFactor_14() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___loadFactor_14)); }
	inline float get_loadFactor_14() const { return ___loadFactor_14; }
	inline float* get_address_of_loadFactor_14() { return &___loadFactor_14; }
	inline void set_loadFactor_14(float value)
	{
		___loadFactor_14 = value;
	}

	inline static int32_t get_offset_of_version_15() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___version_15)); }
	inline int32_t get_version_15() const { return ___version_15; }
	inline int32_t* get_address_of_version_15() { return &___version_15; }
	inline void set_version_15(int32_t value)
	{
		___version_15 = value;
	}

	inline static int32_t get_offset_of_isWriterInProgress_16() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___isWriterInProgress_16)); }
	inline bool get_isWriterInProgress_16() const { return ___isWriterInProgress_16; }
	inline bool* get_address_of_isWriterInProgress_16() { return &___isWriterInProgress_16; }
	inline void set_isWriterInProgress_16(bool value)
	{
		___isWriterInProgress_16 = value;
	}

	inline static int32_t get_offset_of_keys_17() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___keys_17)); }
	inline RuntimeObject* get_keys_17() const { return ___keys_17; }
	inline RuntimeObject** get_address_of_keys_17() { return &___keys_17; }
	inline void set_keys_17(RuntimeObject* value)
	{
		___keys_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_17), (void*)value);
	}

	inline static int32_t get_offset_of_values_18() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___values_18)); }
	inline RuntimeObject* get_values_18() const { return ___values_18; }
	inline RuntimeObject** get_address_of_values_18() { return &___values_18; }
	inline void set_values_18(RuntimeObject* value)
	{
		___values_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_18), (void*)value);
	}

	inline static int32_t get_offset_of__keycomparer_19() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ____keycomparer_19)); }
	inline RuntimeObject* get__keycomparer_19() const { return ____keycomparer_19; }
	inline RuntimeObject** get_address_of__keycomparer_19() { return &____keycomparer_19; }
	inline void set__keycomparer_19(RuntimeObject* value)
	{
		____keycomparer_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keycomparer_19), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_20() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ____syncRoot_20)); }
	inline RuntimeObject * get__syncRoot_20() const { return ____syncRoot_20; }
	inline RuntimeObject ** get_address_of__syncRoot_20() { return &____syncRoot_20; }
	inline void set__syncRoot_20(RuntimeObject * value)
	{
		____syncRoot_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_20), (void*)value);
	}
};


// System.Net.HttpStatusCode
struct HttpStatusCode_tFCB1BA96A101857DA7C390345DE43B77F9567D98 
{
public:
	// System.Int32 System.Net.HttpStatusCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HttpStatusCode_tFCB1BA96A101857DA7C390345DE43B77F9567D98, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

// System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess
struct NOVTABLE IBufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBufferByteAccess_GetBuffer_m8F6F0F782B7EA90FC90602224E5817AF96A568A9(intptr_t* comReturnValue) = 0;
};
// System.Runtime.InteropServices.IMarshal
struct NOVTABLE IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMarshal_GetUnmarshalClass_m8E46B958BDAD31CAB4469F61769C4A43CEE851B0(Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlFlags4, Guid_t * ___pCid5) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_GetMarshalSizeMax_mF0954EED35E28BBA1CE5D782B9468FAFA2794CE7(Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlflags4, uint32_t* ___pSize5) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_MarshalInterface_mA481A30479B4E39647B608B7ED40FB7AEB302A68(intptr_t ___pStm0, Guid_t * ___riid1, intptr_t ___pv2, uint32_t ___dwDestContext3, intptr_t ___pvDestContext4, uint32_t ___mshlflags5) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_UnmarshalInterface_m535C6AE1A1625CCBEE16A8AADD6FA0228668B5AF(intptr_t ___pStm0, Guid_t * ___riid1, intptr_t* ___ppv2) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_ReleaseMarshalData_m99BFE51BA91305E8BDDBAE578DE0DE99A1FA626F(intptr_t ___pStm0) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_DisconnectObject_m7B4B9C315995DCCA208E1681D8747ED4005BAC30(uint32_t ___dwReserved0) = 0;
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


// Windows.Foundation.PropertyType
struct PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808 
{
public:
	// System.Int32 Windows.Foundation.PropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions
struct SpatialAwarenessMeshDisplayOptions_tBD5EECA158921324285270FA4CA73335FACC1408 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshDisplayOptions_tBD5EECA158921324285270FA4CA73335FACC1408, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail
struct SpatialAwarenessMeshLevelOfDetail_t0B1402043885182FD1DE0C0A6135B1D00002F5CA 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshLevelOfDetail_t0B1402043885182FD1DE0C0A6135B1D00002F5CA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessSurfaceTypes
struct SpatialAwarenessSurfaceTypes_t3DF77B136CD5A653DBE4AA6EB9C4CEC26401B150 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessSurfaceTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessSurfaceTypes_t3DF77B136CD5A653DBE4AA6EB9C4CEC26401B150, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// UnityEngine.VFX.VFXEventAttribute
struct VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.VFX.VFXEventAttribute::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Boolean UnityEngine.VFX.VFXEventAttribute::m_Owner
	bool ___m_Owner_1;
	// UnityEngine.VFX.VisualEffectAsset UnityEngine.VFX.VFXEventAttribute::m_VfxAsset
	VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50 * ___m_VfxAsset_2;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Owner_1() { return static_cast<int32_t>(offsetof(VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF, ___m_Owner_1)); }
	inline bool get_m_Owner_1() const { return ___m_Owner_1; }
	inline bool* get_address_of_m_Owner_1() { return &___m_Owner_1; }
	inline void set_m_Owner_1(bool value)
	{
		___m_Owner_1 = value;
	}

	inline static int32_t get_offset_of_m_VfxAsset_2() { return static_cast<int32_t>(offsetof(VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF, ___m_VfxAsset_2)); }
	inline VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50 * get_m_VfxAsset_2() const { return ___m_VfxAsset_2; }
	inline VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50 ** get_address_of_m_VfxAsset_2() { return &___m_VfxAsset_2; }
	inline void set_m_VfxAsset_2(VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50 * value)
	{
		___m_VfxAsset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VfxAsset_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.VFX.VFXEventAttribute
struct VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	int32_t ___m_Owner_1;
	VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50 * ___m_VfxAsset_2;
};
// Native definition for COM marshalling of UnityEngine.VFX.VFXEventAttribute
struct VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	int32_t ___m_Owner_1;
	VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50 * ___m_VfxAsset_2;
};

// UnityEngine.VFX.VFXSpawnerState
struct VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.VFX.VFXSpawnerState::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Boolean UnityEngine.VFX.VFXSpawnerState::m_Owner
	bool ___m_Owner_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Owner_1() { return static_cast<int32_t>(offsetof(VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD, ___m_Owner_1)); }
	inline bool get_m_Owner_1() const { return ___m_Owner_1; }
	inline bool* get_address_of_m_Owner_1() { return &___m_Owner_1; }
	inline void set_m_Owner_1(bool value)
	{
		___m_Owner_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.VFX.VFXSpawnerState
struct VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	int32_t ___m_Owner_1;
};
// Native definition for COM marshalling of UnityEngine.VFX.VFXSpawnerState
struct VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_marshaled_com
{
	intptr_t ___m_Ptr_0;
	int32_t ___m_Owner_1;
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


// UnityEngine.Windows.WebCam.VideoCapture
struct VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.WebCam.VideoCapture::m_NativePtr
	intptr_t ___m_NativePtr_0;

public:
	inline static int32_t get_offset_of_m_NativePtr_0() { return static_cast<int32_t>(offsetof(VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91, ___m_NativePtr_0)); }
	inline intptr_t get_m_NativePtr_0() const { return ___m_NativePtr_0; }
	inline intptr_t* get_address_of_m_NativePtr_0() { return &___m_NativePtr_0; }
	inline void set_m_NativePtr_0(intptr_t value)
	{
		___m_NativePtr_0 = value;
	}
};

struct VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_StaticFields
{
public:
	// System.Int64 UnityEngine.Windows.WebCam.VideoCapture::HR_SUCCESS
	int64_t ___HR_SUCCESS_1;

public:
	inline static int32_t get_offset_of_HR_SUCCESS_1() { return static_cast<int32_t>(offsetof(VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_StaticFields, ___HR_SUCCESS_1)); }
	inline int64_t get_HR_SUCCESS_1() const { return ___HR_SUCCESS_1; }
	inline int64_t* get_address_of_HR_SUCCESS_1() { return &___HR_SUCCESS_1; }
	inline void set_HR_SUCCESS_1(int64_t value)
	{
		___HR_SUCCESS_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Windows.WebCam.VideoCapture
struct VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_marshaled_pinvoke
{
	intptr_t ___m_NativePtr_0;
};
// Native definition for COM marshalling of UnityEngine.Windows.WebCam.VideoCapture
struct VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_marshaled_com
{
	intptr_t ___m_NativePtr_0;
};

// Microsoft.MixedReality.Toolkit.Utilities.VolumeType
struct VolumeType_t2CE84905D8382BA624C83B196C7071951FB80866 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.VolumeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VolumeType_t2CE84905D8382BA624C83B196C7071951FB80866, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.WebConnection
struct WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88  : public RuntimeObject
{
public:
	// System.Net.NetworkCredential System.Net.WebConnection::ntlm_credentials
	NetworkCredential_t263CA6068540C6DA0E1CDE919BD7A15C28D55686 * ___ntlm_credentials_0;
	// System.Boolean System.Net.WebConnection::ntlm_authenticated
	bool ___ntlm_authenticated_1;
	// System.Boolean System.Net.WebConnection::unsafe_sharing
	bool ___unsafe_sharing_2;
	// System.IO.Stream System.Net.WebConnection::networkStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___networkStream_3;
	// System.Net.Sockets.Socket System.Net.WebConnection::socket
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___socket_4;
	// Mono.Net.Security.MonoTlsStream System.Net.WebConnection::monoTlsStream
	MonoTlsStream_t1CBBE92DE7BA1B432289982184305AF431C01233 * ___monoTlsStream_5;
	// System.Net.WebConnectionTunnel System.Net.WebConnection::tunnel
	WebConnectionTunnel_t0DEDF9AB5FFB065A77FAAA0F72C6C4763CDBC925 * ___tunnel_6;
	// System.Int32 System.Net.WebConnection::disposed
	int32_t ___disposed_7;
	// System.Net.ServicePoint System.Net.WebConnection::<ServicePoint>k__BackingField
	ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 * ___U3CServicePointU3Ek__BackingField_8;
	// System.DateTime System.Net.WebConnection::idleSince
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___idleSince_9;
	// System.Net.WebOperation System.Net.WebConnection::currentOperation
	WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * ___currentOperation_10;

public:
	inline static int32_t get_offset_of_ntlm_credentials_0() { return static_cast<int32_t>(offsetof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88, ___ntlm_credentials_0)); }
	inline NetworkCredential_t263CA6068540C6DA0E1CDE919BD7A15C28D55686 * get_ntlm_credentials_0() const { return ___ntlm_credentials_0; }
	inline NetworkCredential_t263CA6068540C6DA0E1CDE919BD7A15C28D55686 ** get_address_of_ntlm_credentials_0() { return &___ntlm_credentials_0; }
	inline void set_ntlm_credentials_0(NetworkCredential_t263CA6068540C6DA0E1CDE919BD7A15C28D55686 * value)
	{
		___ntlm_credentials_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ntlm_credentials_0), (void*)value);
	}

	inline static int32_t get_offset_of_ntlm_authenticated_1() { return static_cast<int32_t>(offsetof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88, ___ntlm_authenticated_1)); }
	inline bool get_ntlm_authenticated_1() const { return ___ntlm_authenticated_1; }
	inline bool* get_address_of_ntlm_authenticated_1() { return &___ntlm_authenticated_1; }
	inline void set_ntlm_authenticated_1(bool value)
	{
		___ntlm_authenticated_1 = value;
	}

	inline static int32_t get_offset_of_unsafe_sharing_2() { return static_cast<int32_t>(offsetof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88, ___unsafe_sharing_2)); }
	inline bool get_unsafe_sharing_2() const { return ___unsafe_sharing_2; }
	inline bool* get_address_of_unsafe_sharing_2() { return &___unsafe_sharing_2; }
	inline void set_unsafe_sharing_2(bool value)
	{
		___unsafe_sharing_2 = value;
	}

	inline static int32_t get_offset_of_networkStream_3() { return static_cast<int32_t>(offsetof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88, ___networkStream_3)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_networkStream_3() const { return ___networkStream_3; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_networkStream_3() { return &___networkStream_3; }
	inline void set_networkStream_3(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___networkStream_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___networkStream_3), (void*)value);
	}

	inline static int32_t get_offset_of_socket_4() { return static_cast<int32_t>(offsetof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88, ___socket_4)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_socket_4() const { return ___socket_4; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_socket_4() { return &___socket_4; }
	inline void set_socket_4(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___socket_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___socket_4), (void*)value);
	}

	inline static int32_t get_offset_of_monoTlsStream_5() { return static_cast<int32_t>(offsetof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88, ___monoTlsStream_5)); }
	inline MonoTlsStream_t1CBBE92DE7BA1B432289982184305AF431C01233 * get_monoTlsStream_5() const { return ___monoTlsStream_5; }
	inline MonoTlsStream_t1CBBE92DE7BA1B432289982184305AF431C01233 ** get_address_of_monoTlsStream_5() { return &___monoTlsStream_5; }
	inline void set_monoTlsStream_5(MonoTlsStream_t1CBBE92DE7BA1B432289982184305AF431C01233 * value)
	{
		___monoTlsStream_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monoTlsStream_5), (void*)value);
	}

	inline static int32_t get_offset_of_tunnel_6() { return static_cast<int32_t>(offsetof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88, ___tunnel_6)); }
	inline WebConnectionTunnel_t0DEDF9AB5FFB065A77FAAA0F72C6C4763CDBC925 * get_tunnel_6() const { return ___tunnel_6; }
	inline WebConnectionTunnel_t0DEDF9AB5FFB065A77FAAA0F72C6C4763CDBC925 ** get_address_of_tunnel_6() { return &___tunnel_6; }
	inline void set_tunnel_6(WebConnectionTunnel_t0DEDF9AB5FFB065A77FAAA0F72C6C4763CDBC925 * value)
	{
		___tunnel_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tunnel_6), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88, ___disposed_7)); }
	inline int32_t get_disposed_7() const { return ___disposed_7; }
	inline int32_t* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(int32_t value)
	{
		___disposed_7 = value;
	}

	inline static int32_t get_offset_of_U3CServicePointU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88, ___U3CServicePointU3Ek__BackingField_8)); }
	inline ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 * get_U3CServicePointU3Ek__BackingField_8() const { return ___U3CServicePointU3Ek__BackingField_8; }
	inline ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 ** get_address_of_U3CServicePointU3Ek__BackingField_8() { return &___U3CServicePointU3Ek__BackingField_8; }
	inline void set_U3CServicePointU3Ek__BackingField_8(ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 * value)
	{
		___U3CServicePointU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServicePointU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_idleSince_9() { return static_cast<int32_t>(offsetof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88, ___idleSince_9)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_idleSince_9() const { return ___idleSince_9; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_idleSince_9() { return &___idleSince_9; }
	inline void set_idleSince_9(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___idleSince_9 = value;
	}

	inline static int32_t get_offset_of_currentOperation_10() { return static_cast<int32_t>(offsetof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88, ___currentOperation_10)); }
	inline WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * get_currentOperation_10() const { return ___currentOperation_10; }
	inline WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 ** get_address_of_currentOperation_10() { return &___currentOperation_10; }
	inline void set_currentOperation_10(WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * value)
	{
		___currentOperation_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentOperation_10), (void*)value);
	}
};


// System.Net.WebConnectionStream
struct WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Boolean System.Net.WebConnectionStream::closed
	bool ___closed_4;
	// System.Boolean System.Net.WebConnectionStream::disposed
	bool ___disposed_5;
	// System.Object System.Net.WebConnectionStream::locker
	RuntimeObject * ___locker_6;
	// System.Int32 System.Net.WebConnectionStream::read_timeout
	int32_t ___read_timeout_7;
	// System.Int32 System.Net.WebConnectionStream::write_timeout
	int32_t ___write_timeout_8;
	// System.Boolean System.Net.WebConnectionStream::IgnoreIOErrors
	bool ___IgnoreIOErrors_9;
	// System.Net.HttpWebRequest System.Net.WebConnectionStream::<Request>k__BackingField
	HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * ___U3CRequestU3Ek__BackingField_10;
	// System.Net.WebConnection System.Net.WebConnectionStream::<Connection>k__BackingField
	WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88 * ___U3CConnectionU3Ek__BackingField_11;
	// System.Net.WebOperation System.Net.WebConnectionStream::<Operation>k__BackingField
	WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * ___U3COperationU3Ek__BackingField_12;
	// System.IO.Stream System.Net.WebConnectionStream::<InnerStream>k__BackingField
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___U3CInnerStreamU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_closed_4() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___closed_4)); }
	inline bool get_closed_4() const { return ___closed_4; }
	inline bool* get_address_of_closed_4() { return &___closed_4; }
	inline void set_closed_4(bool value)
	{
		___closed_4 = value;
	}

	inline static int32_t get_offset_of_disposed_5() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___disposed_5)); }
	inline bool get_disposed_5() const { return ___disposed_5; }
	inline bool* get_address_of_disposed_5() { return &___disposed_5; }
	inline void set_disposed_5(bool value)
	{
		___disposed_5 = value;
	}

	inline static int32_t get_offset_of_locker_6() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___locker_6)); }
	inline RuntimeObject * get_locker_6() const { return ___locker_6; }
	inline RuntimeObject ** get_address_of_locker_6() { return &___locker_6; }
	inline void set_locker_6(RuntimeObject * value)
	{
		___locker_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___locker_6), (void*)value);
	}

	inline static int32_t get_offset_of_read_timeout_7() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___read_timeout_7)); }
	inline int32_t get_read_timeout_7() const { return ___read_timeout_7; }
	inline int32_t* get_address_of_read_timeout_7() { return &___read_timeout_7; }
	inline void set_read_timeout_7(int32_t value)
	{
		___read_timeout_7 = value;
	}

	inline static int32_t get_offset_of_write_timeout_8() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___write_timeout_8)); }
	inline int32_t get_write_timeout_8() const { return ___write_timeout_8; }
	inline int32_t* get_address_of_write_timeout_8() { return &___write_timeout_8; }
	inline void set_write_timeout_8(int32_t value)
	{
		___write_timeout_8 = value;
	}

	inline static int32_t get_offset_of_IgnoreIOErrors_9() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___IgnoreIOErrors_9)); }
	inline bool get_IgnoreIOErrors_9() const { return ___IgnoreIOErrors_9; }
	inline bool* get_address_of_IgnoreIOErrors_9() { return &___IgnoreIOErrors_9; }
	inline void set_IgnoreIOErrors_9(bool value)
	{
		___IgnoreIOErrors_9 = value;
	}

	inline static int32_t get_offset_of_U3CRequestU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___U3CRequestU3Ek__BackingField_10)); }
	inline HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * get_U3CRequestU3Ek__BackingField_10() const { return ___U3CRequestU3Ek__BackingField_10; }
	inline HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A ** get_address_of_U3CRequestU3Ek__BackingField_10() { return &___U3CRequestU3Ek__BackingField_10; }
	inline void set_U3CRequestU3Ek__BackingField_10(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * value)
	{
		___U3CRequestU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRequestU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConnectionU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___U3CConnectionU3Ek__BackingField_11)); }
	inline WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88 * get_U3CConnectionU3Ek__BackingField_11() const { return ___U3CConnectionU3Ek__BackingField_11; }
	inline WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88 ** get_address_of_U3CConnectionU3Ek__BackingField_11() { return &___U3CConnectionU3Ek__BackingField_11; }
	inline void set_U3CConnectionU3Ek__BackingField_11(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88 * value)
	{
		___U3CConnectionU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConnectionU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3COperationU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___U3COperationU3Ek__BackingField_12)); }
	inline WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * get_U3COperationU3Ek__BackingField_12() const { return ___U3COperationU3Ek__BackingField_12; }
	inline WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 ** get_address_of_U3COperationU3Ek__BackingField_12() { return &___U3COperationU3Ek__BackingField_12; }
	inline void set_U3COperationU3Ek__BackingField_12(WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * value)
	{
		___U3COperationU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COperationU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInnerStreamU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___U3CInnerStreamU3Ek__BackingField_13)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_U3CInnerStreamU3Ek__BackingField_13() const { return ___U3CInnerStreamU3Ek__BackingField_13; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_U3CInnerStreamU3Ek__BackingField_13() { return &___U3CInnerStreamU3Ek__BackingField_13; }
	inline void set_U3CInnerStreamU3Ek__BackingField_13(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___U3CInnerStreamU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInnerStreamU3Ek__BackingField_13), (void*)value);
	}
};


// System.Net.WebHeaderCollectionType
struct WebHeaderCollectionType_t07786FA148E21DD3628FCEA5DAE961CAC9202736 
{
public:
	// System.UInt16 System.Net.WebHeaderCollectionType::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebHeaderCollectionType_t07786FA148E21DD3628FCEA5DAE961CAC9202736, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// System.IO.WinRtToNetFxStreamAdapter
struct WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Object System.IO.WinRtToNetFxStreamAdapter::_winRtStream
	RuntimeObject * ____winRtStream_4;
	// System.Boolean System.IO.WinRtToNetFxStreamAdapter::_canRead
	bool ____canRead_5;
	// System.Boolean System.IO.WinRtToNetFxStreamAdapter::_canWrite
	bool ____canWrite_6;
	// System.Boolean System.IO.WinRtToNetFxStreamAdapter::_canSeek
	bool ____canSeek_7;

public:
	inline static int32_t get_offset_of__winRtStream_4() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D, ____winRtStream_4)); }
	inline RuntimeObject * get__winRtStream_4() const { return ____winRtStream_4; }
	inline RuntimeObject ** get_address_of__winRtStream_4() { return &____winRtStream_4; }
	inline void set__winRtStream_4(RuntimeObject * value)
	{
		____winRtStream_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____winRtStream_4), (void*)value);
	}

	inline static int32_t get_offset_of__canRead_5() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D, ____canRead_5)); }
	inline bool get__canRead_5() const { return ____canRead_5; }
	inline bool* get_address_of__canRead_5() { return &____canRead_5; }
	inline void set__canRead_5(bool value)
	{
		____canRead_5 = value;
	}

	inline static int32_t get_offset_of__canWrite_6() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D, ____canWrite_6)); }
	inline bool get__canWrite_6() const { return ____canWrite_6; }
	inline bool* get_address_of__canWrite_6() { return &____canWrite_6; }
	inline void set__canWrite_6(bool value)
	{
		____canWrite_6 = value;
	}

	inline static int32_t get_offset_of__canSeek_7() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D, ____canSeek_7)); }
	inline bool get__canSeek_7() const { return ____canSeek_7; }
	inline bool* get_address_of__canSeek_7() { return &____canSeek_7; }
	inline void set__canSeek_7(bool value)
	{
		____canSeek_7 = value;
	}
};


// System.Security.Principal.WindowsAccountType
struct WindowsAccountType_tDDEC69E12A03FDCB70435F956344B17F7F63B0EE 
{
public:
	// System.Int32 System.Security.Principal.WindowsAccountType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WindowsAccountType_tDDEC69E12A03FDCB70435F956344B17F7F63B0EE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Security.Principal.WindowsImpersonationContext
struct WindowsImpersonationContext_t2CA00990AF3A35087357A783D8D5C708A67293E1  : public RuntimeObject
{
public:
	// System.IntPtr System.Security.Principal.WindowsImpersonationContext::_token
	intptr_t ____token_0;
	// System.Boolean System.Security.Principal.WindowsImpersonationContext::undo
	bool ___undo_1;

public:
	inline static int32_t get_offset_of__token_0() { return static_cast<int32_t>(offsetof(WindowsImpersonationContext_t2CA00990AF3A35087357A783D8D5C708A67293E1, ____token_0)); }
	inline intptr_t get__token_0() const { return ____token_0; }
	inline intptr_t* get_address_of__token_0() { return &____token_0; }
	inline void set__token_0(intptr_t value)
	{
		____token_0 = value;
	}

	inline static int32_t get_offset_of_undo_1() { return static_cast<int32_t>(offsetof(WindowsImpersonationContext_t2CA00990AF3A35087357A783D8D5C708A67293E1, ___undo_1)); }
	inline bool get_undo_1() const { return ___undo_1; }
	inline bool* get_address_of_undo_1() { return &___undo_1; }
	inline void set_undo_1(bool value)
	{
		___undo_1 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer
struct WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129  : public RuntimeObject
{
public:
	// System.Byte[] System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____data_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_dataStartOffs
	int32_t ____dataStartOffs_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_usefulDataLength
	int32_t ____usefulDataLength_3;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_maxDataCapacity
	int32_t ____maxDataCapacity_4;
	// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_pinHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ____pinHandle_5;
	// System.IntPtr System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_dataPtr
	intptr_t ____dataPtr_6;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129, ____data_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__data_1() const { return ____data_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_1), (void*)value);
	}

	inline static int32_t get_offset_of__dataStartOffs_2() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129, ____dataStartOffs_2)); }
	inline int32_t get__dataStartOffs_2() const { return ____dataStartOffs_2; }
	inline int32_t* get_address_of__dataStartOffs_2() { return &____dataStartOffs_2; }
	inline void set__dataStartOffs_2(int32_t value)
	{
		____dataStartOffs_2 = value;
	}

	inline static int32_t get_offset_of__usefulDataLength_3() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129, ____usefulDataLength_3)); }
	inline int32_t get__usefulDataLength_3() const { return ____usefulDataLength_3; }
	inline int32_t* get_address_of__usefulDataLength_3() { return &____usefulDataLength_3; }
	inline void set__usefulDataLength_3(int32_t value)
	{
		____usefulDataLength_3 = value;
	}

	inline static int32_t get_offset_of__maxDataCapacity_4() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129, ____maxDataCapacity_4)); }
	inline int32_t get__maxDataCapacity_4() const { return ____maxDataCapacity_4; }
	inline int32_t* get_address_of__maxDataCapacity_4() { return &____maxDataCapacity_4; }
	inline void set__maxDataCapacity_4(int32_t value)
	{
		____maxDataCapacity_4 = value;
	}

	inline static int32_t get_offset_of__pinHandle_5() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129, ____pinHandle_5)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get__pinHandle_5() const { return ____pinHandle_5; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of__pinHandle_5() { return &____pinHandle_5; }
	inline void set__pinHandle_5(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		____pinHandle_5 = value;
	}

	inline static int32_t get_offset_of__dataPtr_6() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129, ____dataPtr_6)); }
	inline intptr_t get__dataPtr_6() const { return ____dataPtr_6; }
	inline intptr_t* get_address_of__dataPtr_6() { return &____dataPtr_6; }
	inline void set__dataPtr_6(intptr_t value)
	{
		____dataPtr_6 = value;
	}
};

struct WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ThreadStaticFields
{
public:
	// System.Runtime.InteropServices.IMarshal System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::s_winRtMarshalProxy
	RuntimeObject* ___s_winRtMarshalProxy_0;

public:
	inline static int32_t get_offset_of_s_winRtMarshalProxy_0() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ThreadStaticFields, ___s_winRtMarshalProxy_0)); }
	inline RuntimeObject* get_s_winRtMarshalProxy_0() const { return ___s_winRtMarshalProxy_0; }
	inline RuntimeObject** get_address_of_s_winRtMarshalProxy_0() { return &___s_winRtMarshalProxy_0; }
	inline void set_s_winRtMarshalProxy_0(RuntimeObject* value)
	{
		___s_winRtMarshalProxy_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_winRtMarshalProxy_0), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver/ObserverState
struct ObserverState_t86038BE67C109C89BB6875378F7EA9D60AA4133F 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver/ObserverState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ObserverState_t86038BE67C109C89BB6875378F7EA9D60AA4133F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem>
struct BaseDataProvider_1_tC0017357CA75C522AD4D10BECAF035491FA45934  : public BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tC0017357CA75C522AD4D10BECAF035491FA45934, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tC0017357CA75C522AD4D10BECAF035491FA45934, ___U3CServiceU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_13() const { return ___U3CServiceU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_13() { return &___U3CServiceU3Ek__BackingField_13; }
	inline void set_U3CServiceU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_13), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_tEC3109DD7330EBFBD10659E4D839217213171929  : public BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tEC3109DD7330EBFBD10659E4D839217213171929, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tEC3109DD7330EBFBD10659E4D839217213171929, ___U3CServiceU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_13() const { return ___U3CServiceU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_13() { return &___U3CServiceU3Ek__BackingField_13; }
	inline void set_U3CServiceU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_13), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem>
struct BaseDataProvider_1_t7E9A9AAEB867FA4FD304C47C3F2A4F4540D82FBA  : public BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t7E9A9AAEB867FA4FD304C47C3F2A4F4540D82FBA, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t7E9A9AAEB867FA4FD304C47C3F2A4F4540D82FBA, ___U3CServiceU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_13() const { return ___U3CServiceU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_13() { return &___U3CServiceU3Ek__BackingField_13; }
	inline void set_U3CServiceU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_13), (void*)value);
	}
};

// Windows.Foundation.IPropertyValue
struct NOVTABLE IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) = 0;
};

// System.ComponentModel.WeakHashtable
struct WeakHashtable_t1B4A0D2CAF0D8746A66413400617B2F9428E0EBA  : public Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC
{
public:

public:
};

struct WeakHashtable_t1B4A0D2CAF0D8746A66413400617B2F9428E0EBA_StaticFields
{
public:
	// System.Collections.IEqualityComparer System.ComponentModel.WeakHashtable::_comparer
	RuntimeObject* ____comparer_21;

public:
	inline static int32_t get_offset_of__comparer_21() { return static_cast<int32_t>(offsetof(WeakHashtable_t1B4A0D2CAF0D8746A66413400617B2F9428E0EBA_StaticFields, ____comparer_21)); }
	inline RuntimeObject* get__comparer_21() const { return ____comparer_21; }
	inline RuntimeObject** get_address_of__comparer_21() { return &____comparer_21; }
	inline void set__comparer_21(RuntimeObject* value)
	{
		____comparer_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_21), (void*)value);
	}
};


// System.Net.WebHeaderCollection
struct WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4  : public NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D
{
public:
	// System.String[] System.Net.WebHeaderCollection::m_CommonHeaders
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_CommonHeaders_12;
	// System.Int32 System.Net.WebHeaderCollection::m_NumCommonHeaders
	int32_t ___m_NumCommonHeaders_13;
	// System.Collections.Specialized.NameValueCollection System.Net.WebHeaderCollection::m_InnerCollection
	NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D * ___m_InnerCollection_16;
	// System.Net.WebHeaderCollectionType System.Net.WebHeaderCollection::m_Type
	uint16_t ___m_Type_17;

public:
	inline static int32_t get_offset_of_m_CommonHeaders_12() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4, ___m_CommonHeaders_12)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_CommonHeaders_12() const { return ___m_CommonHeaders_12; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_CommonHeaders_12() { return &___m_CommonHeaders_12; }
	inline void set_m_CommonHeaders_12(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_CommonHeaders_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CommonHeaders_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_NumCommonHeaders_13() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4, ___m_NumCommonHeaders_13)); }
	inline int32_t get_m_NumCommonHeaders_13() const { return ___m_NumCommonHeaders_13; }
	inline int32_t* get_address_of_m_NumCommonHeaders_13() { return &___m_NumCommonHeaders_13; }
	inline void set_m_NumCommonHeaders_13(int32_t value)
	{
		___m_NumCommonHeaders_13 = value;
	}

	inline static int32_t get_offset_of_m_InnerCollection_16() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4, ___m_InnerCollection_16)); }
	inline NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D * get_m_InnerCollection_16() const { return ___m_InnerCollection_16; }
	inline NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D ** get_address_of_m_InnerCollection_16() { return &___m_InnerCollection_16; }
	inline void set_m_InnerCollection_16(NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D * value)
	{
		___m_InnerCollection_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InnerCollection_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_17() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4, ___m_Type_17)); }
	inline uint16_t get_m_Type_17() const { return ___m_Type_17; }
	inline uint16_t* get_address_of_m_Type_17() { return &___m_Type_17; }
	inline void set_m_Type_17(uint16_t value)
	{
		___m_Type_17 = value;
	}
};

struct WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields
{
public:
	// System.Net.HeaderInfoTable System.Net.WebHeaderCollection::HInfo
	HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4 * ___HInfo_11;
	// System.String[] System.Net.WebHeaderCollection::s_CommonHeaderNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___s_CommonHeaderNames_14;
	// System.SByte[] System.Net.WebHeaderCollection::s_CommonHeaderHints
	SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* ___s_CommonHeaderHints_15;
	// System.Char[] System.Net.WebHeaderCollection::HttpTrimCharacters
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HttpTrimCharacters_18;
	// System.Net.WebHeaderCollection/RfcChar[] System.Net.WebHeaderCollection::RfcCharMap
	RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3* ___RfcCharMap_19;

public:
	inline static int32_t get_offset_of_HInfo_11() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___HInfo_11)); }
	inline HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4 * get_HInfo_11() const { return ___HInfo_11; }
	inline HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4 ** get_address_of_HInfo_11() { return &___HInfo_11; }
	inline void set_HInfo_11(HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4 * value)
	{
		___HInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_CommonHeaderNames_14() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___s_CommonHeaderNames_14)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_s_CommonHeaderNames_14() const { return ___s_CommonHeaderNames_14; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_s_CommonHeaderNames_14() { return &___s_CommonHeaderNames_14; }
	inline void set_s_CommonHeaderNames_14(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___s_CommonHeaderNames_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CommonHeaderNames_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_CommonHeaderHints_15() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___s_CommonHeaderHints_15)); }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* get_s_CommonHeaderHints_15() const { return ___s_CommonHeaderHints_15; }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7** get_address_of_s_CommonHeaderHints_15() { return &___s_CommonHeaderHints_15; }
	inline void set_s_CommonHeaderHints_15(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* value)
	{
		___s_CommonHeaderHints_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CommonHeaderHints_15), (void*)value);
	}

	inline static int32_t get_offset_of_HttpTrimCharacters_18() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___HttpTrimCharacters_18)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HttpTrimCharacters_18() const { return ___HttpTrimCharacters_18; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HttpTrimCharacters_18() { return &___HttpTrimCharacters_18; }
	inline void set_HttpTrimCharacters_18(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HttpTrimCharacters_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HttpTrimCharacters_18), (void*)value);
	}

	inline static int32_t get_offset_of_RfcCharMap_19() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___RfcCharMap_19)); }
	inline RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3* get_RfcCharMap_19() const { return ___RfcCharMap_19; }
	inline RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3** get_address_of_RfcCharMap_19() { return &___RfcCharMap_19; }
	inline void set_RfcCharMap_19(RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3* value)
	{
		___RfcCharMap_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RfcCharMap_19), (void*)value);
	}
};


// System.Net.WebRequestStream
struct WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887  : public WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918
{
public:
	// System.IO.MemoryStream System.Net.WebRequestStream::writeBuffer
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * ___writeBuffer_15;
	// System.Boolean System.Net.WebRequestStream::requestWritten
	bool ___requestWritten_16;
	// System.Boolean System.Net.WebRequestStream::allowBuffering
	bool ___allowBuffering_17;
	// System.Boolean System.Net.WebRequestStream::sendChunked
	bool ___sendChunked_18;
	// System.Net.WebCompletionSource System.Net.WebRequestStream::pendingWrite
	WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * ___pendingWrite_19;
	// System.Int64 System.Net.WebRequestStream::totalWritten
	int64_t ___totalWritten_20;
	// System.Byte[] System.Net.WebRequestStream::headers
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___headers_21;
	// System.Boolean System.Net.WebRequestStream::headersSent
	bool ___headersSent_22;
	// System.Int32 System.Net.WebRequestStream::completeRequestWritten
	int32_t ___completeRequestWritten_23;
	// System.Int32 System.Net.WebRequestStream::chunkTrailerWritten
	int32_t ___chunkTrailerWritten_24;
	// System.Boolean System.Net.WebRequestStream::<KeepAlive>k__BackingField
	bool ___U3CKeepAliveU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_writeBuffer_15() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___writeBuffer_15)); }
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * get_writeBuffer_15() const { return ___writeBuffer_15; }
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** get_address_of_writeBuffer_15() { return &___writeBuffer_15; }
	inline void set_writeBuffer_15(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * value)
	{
		___writeBuffer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writeBuffer_15), (void*)value);
	}

	inline static int32_t get_offset_of_requestWritten_16() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___requestWritten_16)); }
	inline bool get_requestWritten_16() const { return ___requestWritten_16; }
	inline bool* get_address_of_requestWritten_16() { return &___requestWritten_16; }
	inline void set_requestWritten_16(bool value)
	{
		___requestWritten_16 = value;
	}

	inline static int32_t get_offset_of_allowBuffering_17() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___allowBuffering_17)); }
	inline bool get_allowBuffering_17() const { return ___allowBuffering_17; }
	inline bool* get_address_of_allowBuffering_17() { return &___allowBuffering_17; }
	inline void set_allowBuffering_17(bool value)
	{
		___allowBuffering_17 = value;
	}

	inline static int32_t get_offset_of_sendChunked_18() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___sendChunked_18)); }
	inline bool get_sendChunked_18() const { return ___sendChunked_18; }
	inline bool* get_address_of_sendChunked_18() { return &___sendChunked_18; }
	inline void set_sendChunked_18(bool value)
	{
		___sendChunked_18 = value;
	}

	inline static int32_t get_offset_of_pendingWrite_19() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___pendingWrite_19)); }
	inline WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * get_pendingWrite_19() const { return ___pendingWrite_19; }
	inline WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E ** get_address_of_pendingWrite_19() { return &___pendingWrite_19; }
	inline void set_pendingWrite_19(WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * value)
	{
		___pendingWrite_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingWrite_19), (void*)value);
	}

	inline static int32_t get_offset_of_totalWritten_20() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___totalWritten_20)); }
	inline int64_t get_totalWritten_20() const { return ___totalWritten_20; }
	inline int64_t* get_address_of_totalWritten_20() { return &___totalWritten_20; }
	inline void set_totalWritten_20(int64_t value)
	{
		___totalWritten_20 = value;
	}

	inline static int32_t get_offset_of_headers_21() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___headers_21)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_headers_21() const { return ___headers_21; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_headers_21() { return &___headers_21; }
	inline void set_headers_21(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___headers_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headers_21), (void*)value);
	}

	inline static int32_t get_offset_of_headersSent_22() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___headersSent_22)); }
	inline bool get_headersSent_22() const { return ___headersSent_22; }
	inline bool* get_address_of_headersSent_22() { return &___headersSent_22; }
	inline void set_headersSent_22(bool value)
	{
		___headersSent_22 = value;
	}

	inline static int32_t get_offset_of_completeRequestWritten_23() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___completeRequestWritten_23)); }
	inline int32_t get_completeRequestWritten_23() const { return ___completeRequestWritten_23; }
	inline int32_t* get_address_of_completeRequestWritten_23() { return &___completeRequestWritten_23; }
	inline void set_completeRequestWritten_23(int32_t value)
	{
		___completeRequestWritten_23 = value;
	}

	inline static int32_t get_offset_of_chunkTrailerWritten_24() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___chunkTrailerWritten_24)); }
	inline int32_t get_chunkTrailerWritten_24() const { return ___chunkTrailerWritten_24; }
	inline int32_t* get_address_of_chunkTrailerWritten_24() { return &___chunkTrailerWritten_24; }
	inline void set_chunkTrailerWritten_24(int32_t value)
	{
		___chunkTrailerWritten_24 = value;
	}

	inline static int32_t get_offset_of_U3CKeepAliveU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___U3CKeepAliveU3Ek__BackingField_25)); }
	inline bool get_U3CKeepAliveU3Ek__BackingField_25() const { return ___U3CKeepAliveU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CKeepAliveU3Ek__BackingField_25() { return &___U3CKeepAliveU3Ek__BackingField_25; }
	inline void set_U3CKeepAliveU3Ek__BackingField_25(bool value)
	{
		___U3CKeepAliveU3Ek__BackingField_25 = value;
	}
};

struct WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887_StaticFields
{
public:
	// System.Byte[] System.Net.WebRequestStream::crlf
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___crlf_14;

public:
	inline static int32_t get_offset_of_crlf_14() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887_StaticFields, ___crlf_14)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_crlf_14() const { return ___crlf_14; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_crlf_14() { return &___crlf_14; }
	inline void set_crlf_14(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___crlf_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___crlf_14), (void*)value);
	}
};


// System.Net.WebResponseStream
struct WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F  : public WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918
{
public:
	// System.Net.BufferOffsetSize System.Net.WebResponseStream::readBuffer
	BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * ___readBuffer_14;
	// System.Int64 System.Net.WebResponseStream::contentLength
	int64_t ___contentLength_15;
	// System.Int64 System.Net.WebResponseStream::totalRead
	int64_t ___totalRead_16;
	// System.Boolean System.Net.WebResponseStream::nextReadCalled
	bool ___nextReadCalled_17;
	// System.Int32 System.Net.WebResponseStream::stream_length
	int32_t ___stream_length_18;
	// System.Net.WebCompletionSource System.Net.WebResponseStream::pendingRead
	WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * ___pendingRead_19;
	// System.Object System.Net.WebResponseStream::locker
	RuntimeObject * ___locker_20;
	// System.Int32 System.Net.WebResponseStream::nestedRead
	int32_t ___nestedRead_21;
	// System.Boolean System.Net.WebResponseStream::read_eof
	bool ___read_eof_22;
	// System.Net.WebRequestStream System.Net.WebResponseStream::<RequestStream>k__BackingField
	WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 * ___U3CRequestStreamU3Ek__BackingField_23;
	// System.Net.WebHeaderCollection System.Net.WebResponseStream::<Headers>k__BackingField
	WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * ___U3CHeadersU3Ek__BackingField_24;
	// System.Net.HttpStatusCode System.Net.WebResponseStream::<StatusCode>k__BackingField
	int32_t ___U3CStatusCodeU3Ek__BackingField_25;
	// System.String System.Net.WebResponseStream::<StatusDescription>k__BackingField
	String_t* ___U3CStatusDescriptionU3Ek__BackingField_26;
	// System.Version System.Net.WebResponseStream::<Version>k__BackingField
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___U3CVersionU3Ek__BackingField_27;
	// System.Boolean System.Net.WebResponseStream::<KeepAlive>k__BackingField
	bool ___U3CKeepAliveU3Ek__BackingField_28;
	// System.Boolean System.Net.WebResponseStream::<ChunkedRead>k__BackingField
	bool ___U3CChunkedReadU3Ek__BackingField_29;
	// System.Net.MonoChunkStream System.Net.WebResponseStream::<ChunkStream>k__BackingField
	MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 * ___U3CChunkStreamU3Ek__BackingField_30;

public:
	inline static int32_t get_offset_of_readBuffer_14() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___readBuffer_14)); }
	inline BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * get_readBuffer_14() const { return ___readBuffer_14; }
	inline BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F ** get_address_of_readBuffer_14() { return &___readBuffer_14; }
	inline void set_readBuffer_14(BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * value)
	{
		___readBuffer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___readBuffer_14), (void*)value);
	}

	inline static int32_t get_offset_of_contentLength_15() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___contentLength_15)); }
	inline int64_t get_contentLength_15() const { return ___contentLength_15; }
	inline int64_t* get_address_of_contentLength_15() { return &___contentLength_15; }
	inline void set_contentLength_15(int64_t value)
	{
		___contentLength_15 = value;
	}

	inline static int32_t get_offset_of_totalRead_16() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___totalRead_16)); }
	inline int64_t get_totalRead_16() const { return ___totalRead_16; }
	inline int64_t* get_address_of_totalRead_16() { return &___totalRead_16; }
	inline void set_totalRead_16(int64_t value)
	{
		___totalRead_16 = value;
	}

	inline static int32_t get_offset_of_nextReadCalled_17() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___nextReadCalled_17)); }
	inline bool get_nextReadCalled_17() const { return ___nextReadCalled_17; }
	inline bool* get_address_of_nextReadCalled_17() { return &___nextReadCalled_17; }
	inline void set_nextReadCalled_17(bool value)
	{
		___nextReadCalled_17 = value;
	}

	inline static int32_t get_offset_of_stream_length_18() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___stream_length_18)); }
	inline int32_t get_stream_length_18() const { return ___stream_length_18; }
	inline int32_t* get_address_of_stream_length_18() { return &___stream_length_18; }
	inline void set_stream_length_18(int32_t value)
	{
		___stream_length_18 = value;
	}

	inline static int32_t get_offset_of_pendingRead_19() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___pendingRead_19)); }
	inline WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * get_pendingRead_19() const { return ___pendingRead_19; }
	inline WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E ** get_address_of_pendingRead_19() { return &___pendingRead_19; }
	inline void set_pendingRead_19(WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * value)
	{
		___pendingRead_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingRead_19), (void*)value);
	}

	inline static int32_t get_offset_of_locker_20() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___locker_20)); }
	inline RuntimeObject * get_locker_20() const { return ___locker_20; }
	inline RuntimeObject ** get_address_of_locker_20() { return &___locker_20; }
	inline void set_locker_20(RuntimeObject * value)
	{
		___locker_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___locker_20), (void*)value);
	}

	inline static int32_t get_offset_of_nestedRead_21() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___nestedRead_21)); }
	inline int32_t get_nestedRead_21() const { return ___nestedRead_21; }
	inline int32_t* get_address_of_nestedRead_21() { return &___nestedRead_21; }
	inline void set_nestedRead_21(int32_t value)
	{
		___nestedRead_21 = value;
	}

	inline static int32_t get_offset_of_read_eof_22() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___read_eof_22)); }
	inline bool get_read_eof_22() const { return ___read_eof_22; }
	inline bool* get_address_of_read_eof_22() { return &___read_eof_22; }
	inline void set_read_eof_22(bool value)
	{
		___read_eof_22 = value;
	}

	inline static int32_t get_offset_of_U3CRequestStreamU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___U3CRequestStreamU3Ek__BackingField_23)); }
	inline WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 * get_U3CRequestStreamU3Ek__BackingField_23() const { return ___U3CRequestStreamU3Ek__BackingField_23; }
	inline WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 ** get_address_of_U3CRequestStreamU3Ek__BackingField_23() { return &___U3CRequestStreamU3Ek__BackingField_23; }
	inline void set_U3CRequestStreamU3Ek__BackingField_23(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 * value)
	{
		___U3CRequestStreamU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRequestStreamU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHeadersU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___U3CHeadersU3Ek__BackingField_24)); }
	inline WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * get_U3CHeadersU3Ek__BackingField_24() const { return ___U3CHeadersU3Ek__BackingField_24; }
	inline WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 ** get_address_of_U3CHeadersU3Ek__BackingField_24() { return &___U3CHeadersU3Ek__BackingField_24; }
	inline void set_U3CHeadersU3Ek__BackingField_24(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * value)
	{
		___U3CHeadersU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHeadersU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStatusCodeU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___U3CStatusCodeU3Ek__BackingField_25)); }
	inline int32_t get_U3CStatusCodeU3Ek__BackingField_25() const { return ___U3CStatusCodeU3Ek__BackingField_25; }
	inline int32_t* get_address_of_U3CStatusCodeU3Ek__BackingField_25() { return &___U3CStatusCodeU3Ek__BackingField_25; }
	inline void set_U3CStatusCodeU3Ek__BackingField_25(int32_t value)
	{
		___U3CStatusCodeU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CStatusDescriptionU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___U3CStatusDescriptionU3Ek__BackingField_26)); }
	inline String_t* get_U3CStatusDescriptionU3Ek__BackingField_26() const { return ___U3CStatusDescriptionU3Ek__BackingField_26; }
	inline String_t** get_address_of_U3CStatusDescriptionU3Ek__BackingField_26() { return &___U3CStatusDescriptionU3Ek__BackingField_26; }
	inline void set_U3CStatusDescriptionU3Ek__BackingField_26(String_t* value)
	{
		___U3CStatusDescriptionU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStatusDescriptionU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVersionU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___U3CVersionU3Ek__BackingField_27)); }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * get_U3CVersionU3Ek__BackingField_27() const { return ___U3CVersionU3Ek__BackingField_27; }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C ** get_address_of_U3CVersionU3Ek__BackingField_27() { return &___U3CVersionU3Ek__BackingField_27; }
	inline void set_U3CVersionU3Ek__BackingField_27(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * value)
	{
		___U3CVersionU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVersionU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CKeepAliveU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___U3CKeepAliveU3Ek__BackingField_28)); }
	inline bool get_U3CKeepAliveU3Ek__BackingField_28() const { return ___U3CKeepAliveU3Ek__BackingField_28; }
	inline bool* get_address_of_U3CKeepAliveU3Ek__BackingField_28() { return &___U3CKeepAliveU3Ek__BackingField_28; }
	inline void set_U3CKeepAliveU3Ek__BackingField_28(bool value)
	{
		___U3CKeepAliveU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CChunkedReadU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___U3CChunkedReadU3Ek__BackingField_29)); }
	inline bool get_U3CChunkedReadU3Ek__BackingField_29() const { return ___U3CChunkedReadU3Ek__BackingField_29; }
	inline bool* get_address_of_U3CChunkedReadU3Ek__BackingField_29() { return &___U3CChunkedReadU3Ek__BackingField_29; }
	inline void set_U3CChunkedReadU3Ek__BackingField_29(bool value)
	{
		___U3CChunkedReadU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CChunkStreamU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___U3CChunkStreamU3Ek__BackingField_30)); }
	inline MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 * get_U3CChunkStreamU3Ek__BackingField_30() const { return ___U3CChunkStreamU3Ek__BackingField_30; }
	inline MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 ** get_address_of_U3CChunkStreamU3Ek__BackingField_30() { return &___U3CChunkStreamU3Ek__BackingField_30; }
	inline void set_U3CChunkStreamU3Ek__BackingField_30(MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 * value)
	{
		___U3CChunkStreamU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CChunkStreamU3Ek__BackingField_30), (void*)value);
	}
};


// System.Security.Principal.WindowsIdentity
struct WindowsIdentity_t5BF1D8ED150D5E1E885C714AE384F94601DB028A  : public ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6
{
public:
	// System.IntPtr System.Security.Principal.WindowsIdentity::_token
	intptr_t ____token_13;
	// System.String System.Security.Principal.WindowsIdentity::_type
	String_t* ____type_14;
	// System.Security.Principal.WindowsAccountType System.Security.Principal.WindowsIdentity::_account
	int32_t ____account_15;
	// System.Boolean System.Security.Principal.WindowsIdentity::_authenticated
	bool ____authenticated_16;
	// System.String System.Security.Principal.WindowsIdentity::_name
	String_t* ____name_17;
	// System.Runtime.Serialization.SerializationInfo System.Security.Principal.WindowsIdentity::_info
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____info_18;

public:
	inline static int32_t get_offset_of__token_13() { return static_cast<int32_t>(offsetof(WindowsIdentity_t5BF1D8ED150D5E1E885C714AE384F94601DB028A, ____token_13)); }
	inline intptr_t get__token_13() const { return ____token_13; }
	inline intptr_t* get_address_of__token_13() { return &____token_13; }
	inline void set__token_13(intptr_t value)
	{
		____token_13 = value;
	}

	inline static int32_t get_offset_of__type_14() { return static_cast<int32_t>(offsetof(WindowsIdentity_t5BF1D8ED150D5E1E885C714AE384F94601DB028A, ____type_14)); }
	inline String_t* get__type_14() const { return ____type_14; }
	inline String_t** get_address_of__type_14() { return &____type_14; }
	inline void set__type_14(String_t* value)
	{
		____type_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____type_14), (void*)value);
	}

	inline static int32_t get_offset_of__account_15() { return static_cast<int32_t>(offsetof(WindowsIdentity_t5BF1D8ED150D5E1E885C714AE384F94601DB028A, ____account_15)); }
	inline int32_t get__account_15() const { return ____account_15; }
	inline int32_t* get_address_of__account_15() { return &____account_15; }
	inline void set__account_15(int32_t value)
	{
		____account_15 = value;
	}

	inline static int32_t get_offset_of__authenticated_16() { return static_cast<int32_t>(offsetof(WindowsIdentity_t5BF1D8ED150D5E1E885C714AE384F94601DB028A, ____authenticated_16)); }
	inline bool get__authenticated_16() const { return ____authenticated_16; }
	inline bool* get_address_of__authenticated_16() { return &____authenticated_16; }
	inline void set__authenticated_16(bool value)
	{
		____authenticated_16 = value;
	}

	inline static int32_t get_offset_of__name_17() { return static_cast<int32_t>(offsetof(WindowsIdentity_t5BF1D8ED150D5E1E885C714AE384F94601DB028A, ____name_17)); }
	inline String_t* get__name_17() const { return ____name_17; }
	inline String_t** get_address_of__name_17() { return &____name_17; }
	inline void set__name_17(String_t* value)
	{
		____name_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_17), (void*)value);
	}

	inline static int32_t get_offset_of__info_18() { return static_cast<int32_t>(offsetof(WindowsIdentity_t5BF1D8ED150D5E1E885C714AE384F94601DB028A, ____info_18)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__info_18() const { return ____info_18; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__info_18() { return &____info_18; }
	inline void set__info_18(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____info_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____info_18), (void*)value);
	}
};

struct WindowsIdentity_t5BF1D8ED150D5E1E885C714AE384F94601DB028A_StaticFields
{
public:
	// System.IntPtr System.Security.Principal.WindowsIdentity::invalidWindows
	intptr_t ___invalidWindows_19;

public:
	inline static int32_t get_offset_of_invalidWindows_19() { return static_cast<int32_t>(offsetof(WindowsIdentity_t5BF1D8ED150D5E1E885C714AE384F94601DB028A_StaticFields, ___invalidWindows_19)); }
	inline intptr_t get_invalidWindows_19() const { return ___invalidWindows_19; }
	inline intptr_t* get_address_of_invalidWindows_19() { return &___invalidWindows_19; }
	inline void set_invalidWindows_19(intptr_t value)
	{
		___invalidWindows_19 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider
struct BaseCameraSettingsProvider_t499DB82132811BA940D9337482403F79CA08D979  : public BaseDataProvider_1_tC0017357CA75C522AD4D10BECAF035491FA45934
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::<IsOpaque>k__BackingField
	bool ___U3CIsOpaqueU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_U3CIsOpaqueU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(BaseCameraSettingsProvider_t499DB82132811BA940D9337482403F79CA08D979, ___U3CIsOpaqueU3Ek__BackingField_14)); }
	inline bool get_U3CIsOpaqueU3Ek__BackingField_14() const { return ___U3CIsOpaqueU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CIsOpaqueU3Ek__BackingField_14() { return &___U3CIsOpaqueU3Ek__BackingField_14; }
	inline void set_U3CIsOpaqueU3Ek__BackingField_14(bool value)
	{
		___U3CIsOpaqueU3Ek__BackingField_14 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6  : public BaseDataProvider_1_tEC3109DD7330EBFBD10659E4D839217213171929
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::enablePointerCache
	bool ___enablePointerCache_14;
	// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[] Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::pointerConfigurations
	PointerConfigU5BU5D_tAB402AEBBC6B3D1142E9E6CB11F242801DC4574C* ___pointerConfigurations_15;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32> Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::activePointersToConfig
	Dictionary_2_t40AD0E25A9C651DF2D10B7C03EE5D87856C2A72D * ___activePointersToConfig_17;

public:
	inline static int32_t get_offset_of_enablePointerCache_14() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6, ___enablePointerCache_14)); }
	inline bool get_enablePointerCache_14() const { return ___enablePointerCache_14; }
	inline bool* get_address_of_enablePointerCache_14() { return &___enablePointerCache_14; }
	inline void set_enablePointerCache_14(bool value)
	{
		___enablePointerCache_14 = value;
	}

	inline static int32_t get_offset_of_pointerConfigurations_15() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6, ___pointerConfigurations_15)); }
	inline PointerConfigU5BU5D_tAB402AEBBC6B3D1142E9E6CB11F242801DC4574C* get_pointerConfigurations_15() const { return ___pointerConfigurations_15; }
	inline PointerConfigU5BU5D_tAB402AEBBC6B3D1142E9E6CB11F242801DC4574C** get_address_of_pointerConfigurations_15() { return &___pointerConfigurations_15; }
	inline void set_pointerConfigurations_15(PointerConfigU5BU5D_tAB402AEBBC6B3D1142E9E6CB11F242801DC4574C* value)
	{
		___pointerConfigurations_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerConfigurations_15), (void*)value);
	}

	inline static int32_t get_offset_of_activePointersToConfig_17() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6, ___activePointersToConfig_17)); }
	inline Dictionary_2_t40AD0E25A9C651DF2D10B7C03EE5D87856C2A72D * get_activePointersToConfig_17() const { return ___activePointersToConfig_17; }
	inline Dictionary_2_t40AD0E25A9C651DF2D10B7C03EE5D87856C2A72D ** get_address_of_activePointersToConfig_17() { return &___activePointersToConfig_17; }
	inline void set_activePointersToConfig_17(Dictionary_2_t40AD0E25A9C651DF2D10B7C03EE5D87856C2A72D * value)
	{
		___activePointersToConfig_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activePointersToConfig_17), (void*)value);
	}
};

struct BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RequestPointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RequestPointersPerfMarker_16;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RecyclePointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RecyclePointersPerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CreatePointerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CreatePointerPerfMarker_19;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CleanActivePointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CleanActivePointersPerfMarker_20;

public:
	inline static int32_t get_offset_of_RequestPointersPerfMarker_16() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6_StaticFields, ___RequestPointersPerfMarker_16)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RequestPointersPerfMarker_16() const { return ___RequestPointersPerfMarker_16; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RequestPointersPerfMarker_16() { return &___RequestPointersPerfMarker_16; }
	inline void set_RequestPointersPerfMarker_16(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RequestPointersPerfMarker_16 = value;
	}

	inline static int32_t get_offset_of_RecyclePointersPerfMarker_18() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6_StaticFields, ___RecyclePointersPerfMarker_18)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RecyclePointersPerfMarker_18() const { return ___RecyclePointersPerfMarker_18; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RecyclePointersPerfMarker_18() { return &___RecyclePointersPerfMarker_18; }
	inline void set_RecyclePointersPerfMarker_18(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RecyclePointersPerfMarker_18 = value;
	}

	inline static int32_t get_offset_of_CreatePointerPerfMarker_19() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6_StaticFields, ___CreatePointerPerfMarker_19)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CreatePointerPerfMarker_19() const { return ___CreatePointerPerfMarker_19; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CreatePointerPerfMarker_19() { return &___CreatePointerPerfMarker_19; }
	inline void set_CreatePointerPerfMarker_19(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CreatePointerPerfMarker_19 = value;
	}

	inline static int32_t get_offset_of_CleanActivePointersPerfMarker_20() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6_StaticFields, ___CleanActivePointersPerfMarker_20)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CleanActivePointersPerfMarker_20() const { return ___CleanActivePointersPerfMarker_20; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CleanActivePointersPerfMarker_20() { return &___CleanActivePointersPerfMarker_20; }
	inline void set_CleanActivePointersPerfMarker_20(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CleanActivePointersPerfMarker_20 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver
struct BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94  : public BaseDataProvider_1_t7E9A9AAEB867FA4FD304C47C3F2A4F4540D82FBA
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_15;
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_16;
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<StartupBehavior>k__BackingField
	int32_t ___U3CStartupBehaviorU3Ek__BackingField_17;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<DefaultPhysicsLayer>k__BackingField
	int32_t ___U3CDefaultPhysicsLayerU3Ek__BackingField_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<IsStationaryObserver>k__BackingField
	bool ___U3CIsStationaryObserverU3Ek__BackingField_20;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverRotation>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CObserverRotationU3Ek__BackingField_21;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverOrigin>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CObserverOriginU3Ek__BackingField_22;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverVolumeType>k__BackingField
	int32_t ___U3CObserverVolumeTypeU3Ek__BackingField_23;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObservationExtents>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CObservationExtentsU3Ek__BackingField_24;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<UpdateInterval>k__BackingField
	float ___U3CUpdateIntervalU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94, ___U3CSourceIdU3Ek__BackingField_15)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_15() const { return ___U3CSourceIdU3Ek__BackingField_15; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_15() { return &___U3CSourceIdU3Ek__BackingField_15; }
	inline void set_U3CSourceIdU3Ek__BackingField_15(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94, ___U3CSourceNameU3Ek__BackingField_16)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_16() const { return ___U3CSourceNameU3Ek__BackingField_16; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_16() { return &___U3CSourceNameU3Ek__BackingField_16; }
	inline void set_U3CSourceNameU3Ek__BackingField_16(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStartupBehaviorU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94, ___U3CStartupBehaviorU3Ek__BackingField_17)); }
	inline int32_t get_U3CStartupBehaviorU3Ek__BackingField_17() const { return ___U3CStartupBehaviorU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CStartupBehaviorU3Ek__BackingField_17() { return &___U3CStartupBehaviorU3Ek__BackingField_17; }
	inline void set_U3CStartupBehaviorU3Ek__BackingField_17(int32_t value)
	{
		___U3CStartupBehaviorU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultPhysicsLayerU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94, ___U3CDefaultPhysicsLayerU3Ek__BackingField_18)); }
	inline int32_t get_U3CDefaultPhysicsLayerU3Ek__BackingField_18() const { return ___U3CDefaultPhysicsLayerU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CDefaultPhysicsLayerU3Ek__BackingField_18() { return &___U3CDefaultPhysicsLayerU3Ek__BackingField_18; }
	inline void set_U3CDefaultPhysicsLayerU3Ek__BackingField_18(int32_t value)
	{
		___U3CDefaultPhysicsLayerU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CIsRunningU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94, ___U3CIsRunningU3Ek__BackingField_19)); }
	inline bool get_U3CIsRunningU3Ek__BackingField_19() const { return ___U3CIsRunningU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CIsRunningU3Ek__BackingField_19() { return &___U3CIsRunningU3Ek__BackingField_19; }
	inline void set_U3CIsRunningU3Ek__BackingField_19(bool value)
	{
		___U3CIsRunningU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CIsStationaryObserverU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94, ___U3CIsStationaryObserverU3Ek__BackingField_20)); }
	inline bool get_U3CIsStationaryObserverU3Ek__BackingField_20() const { return ___U3CIsStationaryObserverU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CIsStationaryObserverU3Ek__BackingField_20() { return &___U3CIsStationaryObserverU3Ek__BackingField_20; }
	inline void set_U3CIsStationaryObserverU3Ek__BackingField_20(bool value)
	{
		___U3CIsStationaryObserverU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CObserverRotationU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94, ___U3CObserverRotationU3Ek__BackingField_21)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CObserverRotationU3Ek__BackingField_21() const { return ___U3CObserverRotationU3Ek__BackingField_21; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CObserverRotationU3Ek__BackingField_21() { return &___U3CObserverRotationU3Ek__BackingField_21; }
	inline void set_U3CObserverRotationU3Ek__BackingField_21(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CObserverRotationU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CObserverOriginU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94, ___U3CObserverOriginU3Ek__BackingField_22)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CObserverOriginU3Ek__BackingField_22() const { return ___U3CObserverOriginU3Ek__BackingField_22; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CObserverOriginU3Ek__BackingField_22() { return &___U3CObserverOriginU3Ek__BackingField_22; }
	inline void set_U3CObserverOriginU3Ek__BackingField_22(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CObserverOriginU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CObserverVolumeTypeU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94, ___U3CObserverVolumeTypeU3Ek__BackingField_23)); }
	inline int32_t get_U3CObserverVolumeTypeU3Ek__BackingField_23() const { return ___U3CObserverVolumeTypeU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CObserverVolumeTypeU3Ek__BackingField_23() { return &___U3CObserverVolumeTypeU3Ek__BackingField_23; }
	inline void set_U3CObserverVolumeTypeU3Ek__BackingField_23(int32_t value)
	{
		___U3CObserverVolumeTypeU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CObservationExtentsU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94, ___U3CObservationExtentsU3Ek__BackingField_24)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CObservationExtentsU3Ek__BackingField_24() const { return ___U3CObservationExtentsU3Ek__BackingField_24; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CObservationExtentsU3Ek__BackingField_24() { return &___U3CObservationExtentsU3Ek__BackingField_24; }
	inline void set_U3CObservationExtentsU3Ek__BackingField_24(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CObservationExtentsU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CUpdateIntervalU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94, ___U3CUpdateIntervalU3Ek__BackingField_25)); }
	inline float get_U3CUpdateIntervalU3Ek__BackingField_25() const { return ___U3CUpdateIntervalU3Ek__BackingField_25; }
	inline float* get_address_of_U3CUpdateIntervalU3Ek__BackingField_25() { return &___U3CUpdateIntervalU3Ek__BackingField_25; }
	inline void set_U3CUpdateIntervalU3Ek__BackingField_25(float value)
	{
		___U3CUpdateIntervalU3Ek__BackingField_25 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver
struct BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740  : public BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshEventData
	MixedRealitySpatialAwarenessEventData_1_tF7D69DC7933E29CC1550C477DDCEBB80CBDF9A9E * ___meshEventData_26;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::observedObjectParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___observedObjectParent_27;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::displayOption
	int32_t ___displayOption_37;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::levelOfDetail
	int32_t ___levelOfDetail_38;
	// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshes
	Dictionary_2_tBFEF92C709D6CF5C8220E4553DF6064FCB30A49B * ___meshes_39;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshPhysicsLayer
	int32_t ___meshPhysicsLayer_40;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::<RecalculateNormals>k__BackingField
	bool ___U3CRecalculateNormalsU3Ek__BackingField_41;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::<TrianglesPerCubicMeter>k__BackingField
	int32_t ___U3CTrianglesPerCubicMeterU3Ek__BackingField_42;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::occlusionMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___occlusionMaterial_43;
	// UnityEngine.PhysicMaterial Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::physicsMaterial
	PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * ___physicsMaterial_44;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::visibleMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___visibleMaterial_45;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::runtimeSpatialMeshPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___runtimeSpatialMeshPrefab_46;

public:
	inline static int32_t get_offset_of_meshEventData_26() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___meshEventData_26)); }
	inline MixedRealitySpatialAwarenessEventData_1_tF7D69DC7933E29CC1550C477DDCEBB80CBDF9A9E * get_meshEventData_26() const { return ___meshEventData_26; }
	inline MixedRealitySpatialAwarenessEventData_1_tF7D69DC7933E29CC1550C477DDCEBB80CBDF9A9E ** get_address_of_meshEventData_26() { return &___meshEventData_26; }
	inline void set_meshEventData_26(MixedRealitySpatialAwarenessEventData_1_tF7D69DC7933E29CC1550C477DDCEBB80CBDF9A9E * value)
	{
		___meshEventData_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshEventData_26), (void*)value);
	}

	inline static int32_t get_offset_of_observedObjectParent_27() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___observedObjectParent_27)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_observedObjectParent_27() const { return ___observedObjectParent_27; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_observedObjectParent_27() { return &___observedObjectParent_27; }
	inline void set_observedObjectParent_27(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___observedObjectParent_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observedObjectParent_27), (void*)value);
	}

	inline static int32_t get_offset_of_displayOption_37() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___displayOption_37)); }
	inline int32_t get_displayOption_37() const { return ___displayOption_37; }
	inline int32_t* get_address_of_displayOption_37() { return &___displayOption_37; }
	inline void set_displayOption_37(int32_t value)
	{
		___displayOption_37 = value;
	}

	inline static int32_t get_offset_of_levelOfDetail_38() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___levelOfDetail_38)); }
	inline int32_t get_levelOfDetail_38() const { return ___levelOfDetail_38; }
	inline int32_t* get_address_of_levelOfDetail_38() { return &___levelOfDetail_38; }
	inline void set_levelOfDetail_38(int32_t value)
	{
		___levelOfDetail_38 = value;
	}

	inline static int32_t get_offset_of_meshes_39() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___meshes_39)); }
	inline Dictionary_2_tBFEF92C709D6CF5C8220E4553DF6064FCB30A49B * get_meshes_39() const { return ___meshes_39; }
	inline Dictionary_2_tBFEF92C709D6CF5C8220E4553DF6064FCB30A49B ** get_address_of_meshes_39() { return &___meshes_39; }
	inline void set_meshes_39(Dictionary_2_tBFEF92C709D6CF5C8220E4553DF6064FCB30A49B * value)
	{
		___meshes_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshes_39), (void*)value);
	}

	inline static int32_t get_offset_of_meshPhysicsLayer_40() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___meshPhysicsLayer_40)); }
	inline int32_t get_meshPhysicsLayer_40() const { return ___meshPhysicsLayer_40; }
	inline int32_t* get_address_of_meshPhysicsLayer_40() { return &___meshPhysicsLayer_40; }
	inline void set_meshPhysicsLayer_40(int32_t value)
	{
		___meshPhysicsLayer_40 = value;
	}

	inline static int32_t get_offset_of_U3CRecalculateNormalsU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___U3CRecalculateNormalsU3Ek__BackingField_41)); }
	inline bool get_U3CRecalculateNormalsU3Ek__BackingField_41() const { return ___U3CRecalculateNormalsU3Ek__BackingField_41; }
	inline bool* get_address_of_U3CRecalculateNormalsU3Ek__BackingField_41() { return &___U3CRecalculateNormalsU3Ek__BackingField_41; }
	inline void set_U3CRecalculateNormalsU3Ek__BackingField_41(bool value)
	{
		___U3CRecalculateNormalsU3Ek__BackingField_41 = value;
	}

	inline static int32_t get_offset_of_U3CTrianglesPerCubicMeterU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___U3CTrianglesPerCubicMeterU3Ek__BackingField_42)); }
	inline int32_t get_U3CTrianglesPerCubicMeterU3Ek__BackingField_42() const { return ___U3CTrianglesPerCubicMeterU3Ek__BackingField_42; }
	inline int32_t* get_address_of_U3CTrianglesPerCubicMeterU3Ek__BackingField_42() { return &___U3CTrianglesPerCubicMeterU3Ek__BackingField_42; }
	inline void set_U3CTrianglesPerCubicMeterU3Ek__BackingField_42(int32_t value)
	{
		___U3CTrianglesPerCubicMeterU3Ek__BackingField_42 = value;
	}

	inline static int32_t get_offset_of_occlusionMaterial_43() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___occlusionMaterial_43)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_occlusionMaterial_43() const { return ___occlusionMaterial_43; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_occlusionMaterial_43() { return &___occlusionMaterial_43; }
	inline void set_occlusionMaterial_43(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___occlusionMaterial_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___occlusionMaterial_43), (void*)value);
	}

	inline static int32_t get_offset_of_physicsMaterial_44() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___physicsMaterial_44)); }
	inline PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * get_physicsMaterial_44() const { return ___physicsMaterial_44; }
	inline PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 ** get_address_of_physicsMaterial_44() { return &___physicsMaterial_44; }
	inline void set_physicsMaterial_44(PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * value)
	{
		___physicsMaterial_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___physicsMaterial_44), (void*)value);
	}

	inline static int32_t get_offset_of_visibleMaterial_45() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___visibleMaterial_45)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_visibleMaterial_45() const { return ___visibleMaterial_45; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_visibleMaterial_45() { return &___visibleMaterial_45; }
	inline void set_visibleMaterial_45(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___visibleMaterial_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visibleMaterial_45), (void*)value);
	}

	inline static int32_t get_offset_of_runtimeSpatialMeshPrefab_46() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___runtimeSpatialMeshPrefab_46)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_runtimeSpatialMeshPrefab_46() const { return ___runtimeSpatialMeshPrefab_46; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_runtimeSpatialMeshPrefab_46() { return &___runtimeSpatialMeshPrefab_46; }
	inline void set_runtimeSpatialMeshPrefab_46(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___runtimeSpatialMeshPrefab_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runtimeSpatialMeshPrefab_46), (void*)value);
	}
};

struct BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedMeshDisplayOptionPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplyUpdatedMeshDisplayOptionPerfMarker_28;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedMeshPhysicsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplyUpdatedMeshPhysicsPerfMarker_29;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedPhysicsLayerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplyUpdatedPhysicsLayerPerfMarker_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshAddedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnMeshAddedPerfMarker_31;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshAdded
	EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E * ___OnMeshAdded_32;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnMeshUpdatedPerfMarker_33;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshUpdated
	EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E * ___OnMeshUpdated_34;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshRemovedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnMeshRemovedPerfMarker_35;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshRemoved
	EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E * ___OnMeshRemoved_36;

public:
	inline static int32_t get_offset_of_ApplyUpdatedMeshDisplayOptionPerfMarker_28() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740_StaticFields, ___ApplyUpdatedMeshDisplayOptionPerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplyUpdatedMeshDisplayOptionPerfMarker_28() const { return ___ApplyUpdatedMeshDisplayOptionPerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplyUpdatedMeshDisplayOptionPerfMarker_28() { return &___ApplyUpdatedMeshDisplayOptionPerfMarker_28; }
	inline void set_ApplyUpdatedMeshDisplayOptionPerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplyUpdatedMeshDisplayOptionPerfMarker_28 = value;
	}

	inline static int32_t get_offset_of_ApplyUpdatedMeshPhysicsPerfMarker_29() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740_StaticFields, ___ApplyUpdatedMeshPhysicsPerfMarker_29)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplyUpdatedMeshPhysicsPerfMarker_29() const { return ___ApplyUpdatedMeshPhysicsPerfMarker_29; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplyUpdatedMeshPhysicsPerfMarker_29() { return &___ApplyUpdatedMeshPhysicsPerfMarker_29; }
	inline void set_ApplyUpdatedMeshPhysicsPerfMarker_29(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplyUpdatedMeshPhysicsPerfMarker_29 = value;
	}

	inline static int32_t get_offset_of_ApplyUpdatedPhysicsLayerPerfMarker_30() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740_StaticFields, ___ApplyUpdatedPhysicsLayerPerfMarker_30)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplyUpdatedPhysicsLayerPerfMarker_30() const { return ___ApplyUpdatedPhysicsLayerPerfMarker_30; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplyUpdatedPhysicsLayerPerfMarker_30() { return &___ApplyUpdatedPhysicsLayerPerfMarker_30; }
	inline void set_ApplyUpdatedPhysicsLayerPerfMarker_30(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplyUpdatedPhysicsLayerPerfMarker_30 = value;
	}

	inline static int32_t get_offset_of_OnMeshAddedPerfMarker_31() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740_StaticFields, ___OnMeshAddedPerfMarker_31)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnMeshAddedPerfMarker_31() const { return ___OnMeshAddedPerfMarker_31; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnMeshAddedPerfMarker_31() { return &___OnMeshAddedPerfMarker_31; }
	inline void set_OnMeshAddedPerfMarker_31(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnMeshAddedPerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_OnMeshAdded_32() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740_StaticFields, ___OnMeshAdded_32)); }
	inline EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E * get_OnMeshAdded_32() const { return ___OnMeshAdded_32; }
	inline EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E ** get_address_of_OnMeshAdded_32() { return &___OnMeshAdded_32; }
	inline void set_OnMeshAdded_32(EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E * value)
	{
		___OnMeshAdded_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshAdded_32), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshUpdatedPerfMarker_33() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740_StaticFields, ___OnMeshUpdatedPerfMarker_33)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnMeshUpdatedPerfMarker_33() const { return ___OnMeshUpdatedPerfMarker_33; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnMeshUpdatedPerfMarker_33() { return &___OnMeshUpdatedPerfMarker_33; }
	inline void set_OnMeshUpdatedPerfMarker_33(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnMeshUpdatedPerfMarker_33 = value;
	}

	inline static int32_t get_offset_of_OnMeshUpdated_34() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740_StaticFields, ___OnMeshUpdated_34)); }
	inline EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E * get_OnMeshUpdated_34() const { return ___OnMeshUpdated_34; }
	inline EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E ** get_address_of_OnMeshUpdated_34() { return &___OnMeshUpdated_34; }
	inline void set_OnMeshUpdated_34(EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E * value)
	{
		___OnMeshUpdated_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshUpdated_34), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshRemovedPerfMarker_35() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740_StaticFields, ___OnMeshRemovedPerfMarker_35)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnMeshRemovedPerfMarker_35() const { return ___OnMeshRemovedPerfMarker_35; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnMeshRemovedPerfMarker_35() { return &___OnMeshRemovedPerfMarker_35; }
	inline void set_OnMeshRemovedPerfMarker_35(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnMeshRemovedPerfMarker_35 = value;
	}

	inline static int32_t get_offset_of_OnMeshRemoved_36() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740_StaticFields, ___OnMeshRemoved_36)); }
	inline EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E * get_OnMeshRemoved_36() const { return ___OnMeshRemoved_36; }
	inline EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E ** get_address_of_OnMeshRemoved_36() { return &___OnMeshRemoved_36; }
	inline void set_OnMeshRemoved_36(EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E * value)
	{
		___OnMeshRemoved_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshRemoved_36), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings
struct BaseWindowsMixedRealityCameraSettings_tF049E9AFD9544F4C5FAA918FAAAA5936AFA10D98  : public BaseCameraSettingsProvider_t499DB82132811BA940D9337482403F79CA08D979
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::reprojectionUpdater
	WindowsMixedRealityReprojectionUpdater_t88EA6DECA4D02D71B2C00B02938FEED0ABB37434 * ___reprojectionUpdater_16;
	// Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::projectionOverride
	ProjectionOverride_t4DF569F4323CCAE299E1DF0A1EAC2D923195FFC4 * ___projectionOverride_17;

public:
	inline static int32_t get_offset_of_reprojectionUpdater_16() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityCameraSettings_tF049E9AFD9544F4C5FAA918FAAAA5936AFA10D98, ___reprojectionUpdater_16)); }
	inline WindowsMixedRealityReprojectionUpdater_t88EA6DECA4D02D71B2C00B02938FEED0ABB37434 * get_reprojectionUpdater_16() const { return ___reprojectionUpdater_16; }
	inline WindowsMixedRealityReprojectionUpdater_t88EA6DECA4D02D71B2C00B02938FEED0ABB37434 ** get_address_of_reprojectionUpdater_16() { return &___reprojectionUpdater_16; }
	inline void set_reprojectionUpdater_16(WindowsMixedRealityReprojectionUpdater_t88EA6DECA4D02D71B2C00B02938FEED0ABB37434 * value)
	{
		___reprojectionUpdater_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reprojectionUpdater_16), (void*)value);
	}

	inline static int32_t get_offset_of_projectionOverride_17() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityCameraSettings_tF049E9AFD9544F4C5FAA918FAAAA5936AFA10D98, ___projectionOverride_17)); }
	inline ProjectionOverride_t4DF569F4323CCAE299E1DF0A1EAC2D923195FFC4 * get_projectionOverride_17() const { return ___projectionOverride_17; }
	inline ProjectionOverride_t4DF569F4323CCAE299E1DF0A1EAC2D923195FFC4 ** get_address_of_projectionOverride_17() { return &___projectionOverride_17; }
	inline void set_projectionOverride_17(ProjectionOverride_t4DF569F4323CCAE299E1DF0A1EAC2D923195FFC4 * value)
	{
		___projectionOverride_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectionOverride_17), (void*)value);
	}
};

struct BaseWindowsMixedRealityCameraSettings_tF049E9AFD9544F4C5FAA918FAAAA5936AFA10D98_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::isTryGetViewConfigurationSupported
	bool ___isTryGetViewConfigurationSupported_15;

public:
	inline static int32_t get_offset_of_isTryGetViewConfigurationSupported_15() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityCameraSettings_tF049E9AFD9544F4C5FAA918FAAAA5936AFA10D98_StaticFields, ___isTryGetViewConfigurationSupported_15)); }
	inline bool get_isTryGetViewConfigurationSupported_15() const { return ___isTryGetViewConfigurationSupported_15; }
	inline bool* get_address_of_isTryGetViewConfigurationSupported_15() { return &___isTryGetViewConfigurationSupported_15; }
	inline void set_isTryGetViewConfigurationSupported_15(bool value)
	{
		___isTryGetViewConfigurationSupported_15 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider
struct WindowsDictationInputProvider_t98F2E5EFEB1FFA411D15C674EDB817E8B4849050  : public BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::<IsListening>k__BackingField
	bool ___U3CIsListeningU3Ek__BackingField_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::hasFailed
	bool ___hasFailed_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::hasListener
	bool ___hasListener_25;
	// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::isTransitioning
	bool ___isTransitioning_26;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::inputSource
	RuntimeObject* ___inputSource_27;
	// System.Text.StringBuilder Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::textSoFar
	StringBuilder_t * ___textSoFar_28;
	// System.String Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::deviceName
	String_t* ___deviceName_29;
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::samplingRate
	int32_t ___samplingRate_30;
	// System.String Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::dictationResult
	String_t* ___dictationResult_31;
	// UnityEngine.AudioClip Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::dictationAudioClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___dictationAudioClip_32;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::waitUntilPhraseRecognitionSystemHasStarted
	WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * ___waitUntilPhraseRecognitionSystemHasStarted_34;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::waitUntilPhraseRecognitionSystemHasStopped
	WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * ___waitUntilPhraseRecognitionSystemHasStopped_35;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::waitUntilDictationRecognizerHasStarted
	WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * ___waitUntilDictationRecognizerHasStarted_36;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::waitUntilDictationRecognizerHasStopped
	WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * ___waitUntilDictationRecognizerHasStopped_37;

public:
	inline static int32_t get_offset_of_U3CIsListeningU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t98F2E5EFEB1FFA411D15C674EDB817E8B4849050, ___U3CIsListeningU3Ek__BackingField_21)); }
	inline bool get_U3CIsListeningU3Ek__BackingField_21() const { return ___U3CIsListeningU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CIsListeningU3Ek__BackingField_21() { return &___U3CIsListeningU3Ek__BackingField_21; }
	inline void set_U3CIsListeningU3Ek__BackingField_21(bool value)
	{
		___U3CIsListeningU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_hasFailed_24() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t98F2E5EFEB1FFA411D15C674EDB817E8B4849050, ___hasFailed_24)); }
	inline bool get_hasFailed_24() const { return ___hasFailed_24; }
	inline bool* get_address_of_hasFailed_24() { return &___hasFailed_24; }
	inline void set_hasFailed_24(bool value)
	{
		___hasFailed_24 = value;
	}

	inline static int32_t get_offset_of_hasListener_25() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t98F2E5EFEB1FFA411D15C674EDB817E8B4849050, ___hasListener_25)); }
	inline bool get_hasListener_25() const { return ___hasListener_25; }
	inline bool* get_address_of_hasListener_25() { return &___hasListener_25; }
	inline void set_hasListener_25(bool value)
	{
		___hasListener_25 = value;
	}

	inline static int32_t get_offset_of_isTransitioning_26() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t98F2E5EFEB1FFA411D15C674EDB817E8B4849050, ___isTransitioning_26)); }
	inline bool get_isTransitioning_26() const { return ___isTransitioning_26; }
	inline bool* get_address_of_isTransitioning_26() { return &___isTransitioning_26; }
	inline void set_isTransitioning_26(bool value)
	{
		___isTransitioning_26 = value;
	}

	inline static int32_t get_offset_of_inputSource_27() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t98F2E5EFEB1FFA411D15C674EDB817E8B4849050, ___inputSource_27)); }
	inline RuntimeObject* get_inputSource_27() const { return ___inputSource_27; }
	inline RuntimeObject** get_address_of_inputSource_27() { return &___inputSource_27; }
	inline void set_inputSource_27(RuntimeObject* value)
	{
		___inputSource_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSource_27), (void*)value);
	}

	inline static int32_t get_offset_of_textSoFar_28() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t98F2E5EFEB1FFA411D15C674EDB817E8B4849050, ___textSoFar_28)); }
	inline StringBuilder_t * get_textSoFar_28() const { return ___textSoFar_28; }
	inline StringBuilder_t ** get_address_of_textSoFar_28() { return &___textSoFar_28; }
	inline void set_textSoFar_28(StringBuilder_t * value)
	{
		___textSoFar_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textSoFar_28), (void*)value);
	}

	inline static int32_t get_offset_of_deviceName_29() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t98F2E5EFEB1FFA411D15C674EDB817E8B4849050, ___deviceName_29)); }
	inline String_t* get_deviceName_29() const { return ___deviceName_29; }
	inline String_t** get_address_of_deviceName_29() { return &___deviceName_29; }
	inline void set_deviceName_29(String_t* value)
	{
		___deviceName_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deviceName_29), (void*)value);
	}

	inline static int32_t get_offset_of_samplingRate_30() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t98F2E5EFEB1FFA411D15C674EDB817E8B4849050, ___samplingRate_30)); }
	inline int32_t get_samplingRate_30() const { return ___samplingRate_30; }
	inline int32_t* get_address_of_samplingRate_30() { return &___samplingRate_30; }
	inline void set_samplingRate_30(int32_t value)
	{
		___samplingRate_30 = value;
	}

	inline static int32_t get_offset_of_dictationResult_31() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t98F2E5EFEB1FFA411D15C674EDB817E8B4849050, ___dictationResult_31)); }
	inline String_t* get_dictationResult_31() const { return ___dictationResult_31; }
	inline String_t** get_address_of_dictationResult_31() { return &___dictationResult_31; }
	inline void set_dictationResult_31(String_t* value)
	{
		___dictationResult_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationResult_31), (void*)value);
	}

	inline static int32_t get_offset_of_dictationAudioClip_32() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t98F2E5EFEB1FFA411D15C674EDB817E8B4849050, ___dictationAudioClip_32)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_dictationAudioClip_32() const { return ___dictationAudioClip_32; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_dictationAudioClip_32() { return &___dictationAudioClip_32; }
	inline void set_dictationAudioClip_32(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___dictationAudioClip_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationAudioClip_32), (void*)value);
	}

	inline static int32_t get_offset_of_waitUntilPhraseRecognitionSystemHasStarted_34() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t98F2E5EFEB1FFA411D15C674EDB817E8B4849050, ___waitUntilPhraseRecognitionSystemHasStarted_34)); }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * get_waitUntilPhraseRecognitionSystemHasStarted_34() const { return ___waitUntilPhraseRecognitionSystemHasStarted_34; }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 ** get_address_of_waitUntilPhraseRecognitionSystemHasStarted_34() { return &___waitUntilPhraseRecognitionSystemHasStarted_34; }
	inline void set_waitUntilPhraseRecognitionSystemHasStarted_34(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * value)
	{
		___waitUntilPhraseRecognitionSystemHasStarted_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitUntilPhraseRecognitionSystemHasStarted_34), (void*)value);
	}

	inline static int32_t get_offset_of_waitUntilPhraseRecognitionSystemHasStopped_35() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t98F2E5EFEB1FFA411D15C674EDB817E8B4849050, ___waitUntilPhraseRecognitionSystemHasStopped_35)); }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * get_waitUntilPhraseRecognitionSystemHasStopped_35() const { return ___waitUntilPhraseRecognitionSystemHasStopped_35; }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 ** get_address_of_waitUntilPhraseRecognitionSystemHasStopped_35() { return &___waitUntilPhraseRecognitionSystemHasStopped_35; }
	inline void set_waitUntilPhraseRecognitionSystemHasStopped_35(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * value)
	{
		___waitUntilPhraseRecognitionSystemHasStopped_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitUntilPhraseRecognitionSystemHasStopped_35), (void*)value);
	}

	inline static int32_t get_offset_of_waitUntilDictationRecognizerHasStarted_36() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t98F2E5EFEB1FFA411D15C674EDB817E8B4849050, ___waitUntilDictationRecognizerHasStarted_36)); }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * get_waitUntilDictationRecognizerHasStarted_36() const { return ___waitUntilDictationRecognizerHasStarted_36; }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 ** get_address_of_waitUntilDictationRecognizerHasStarted_36() { return &___waitUntilDictationRecognizerHasStarted_36; }
	inline void set_waitUntilDictationRecognizerHasStarted_36(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * value)
	{
		___waitUntilDictationRecognizerHasStarted_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitUntilDictationRecognizerHasStarted_36), (void*)value);
	}

	inline static int32_t get_offset_of_waitUntilDictationRecognizerHasStopped_37() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t98F2E5EFEB1FFA411D15C674EDB817E8B4849050, ___waitUntilDictationRecognizerHasStopped_37)); }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * get_waitUntilDictationRecognizerHasStopped_37() const { return ___waitUntilDictationRecognizerHasStopped_37; }
	inline WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 ** get_address_of_waitUntilDictationRecognizerHasStopped_37() { return &___waitUntilDictationRecognizerHasStopped_37; }
	inline void set_waitUntilDictationRecognizerHasStopped_37(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * value)
	{
		___waitUntilDictationRecognizerHasStopped_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitUntilDictationRecognizerHasStopped_37), (void*)value);
	}
};

struct WindowsDictationInputProvider_t98F2E5EFEB1FFA411D15C674EDB817E8B4849050_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StartRecordingAsyncPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___StartRecordingAsyncPerfMarker_22;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::StopRecordingAsyncPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___StopRecordingAsyncPerfMarker_23;
	// UnityEngine.Windows.Speech.DictationRecognizer Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::dictationRecognizer
	DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * ___dictationRecognizer_33;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_38;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationHypothesisPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DictationHypothesisPerfMarker_39;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationResultPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DictationResultPerfMarker_40;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationCompletePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DictationCompletePerfMarker_41;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider::DictationErrorPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DictationErrorPerfMarker_42;

public:
	inline static int32_t get_offset_of_StartRecordingAsyncPerfMarker_22() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t98F2E5EFEB1FFA411D15C674EDB817E8B4849050_StaticFields, ___StartRecordingAsyncPerfMarker_22)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_StartRecordingAsyncPerfMarker_22() const { return ___StartRecordingAsyncPerfMarker_22; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_StartRecordingAsyncPerfMarker_22() { return &___StartRecordingAsyncPerfMarker_22; }
	inline void set_StartRecordingAsyncPerfMarker_22(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___StartRecordingAsyncPerfMarker_22 = value;
	}

	inline static int32_t get_offset_of_StopRecordingAsyncPerfMarker_23() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t98F2E5EFEB1FFA411D15C674EDB817E8B4849050_StaticFields, ___StopRecordingAsyncPerfMarker_23)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_StopRecordingAsyncPerfMarker_23() const { return ___StopRecordingAsyncPerfMarker_23; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_StopRecordingAsyncPerfMarker_23() { return &___StopRecordingAsyncPerfMarker_23; }
	inline void set_StopRecordingAsyncPerfMarker_23(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___StopRecordingAsyncPerfMarker_23 = value;
	}

	inline static int32_t get_offset_of_dictationRecognizer_33() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t98F2E5EFEB1FFA411D15C674EDB817E8B4849050_StaticFields, ___dictationRecognizer_33)); }
	inline DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * get_dictationRecognizer_33() const { return ___dictationRecognizer_33; }
	inline DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B ** get_address_of_dictationRecognizer_33() { return &___dictationRecognizer_33; }
	inline void set_dictationRecognizer_33(DictationRecognizer_t1D780630D3CBF85CB9455233AB6BD7933544AA4B * value)
	{
		___dictationRecognizer_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationRecognizer_33), (void*)value);
	}

	inline static int32_t get_offset_of_UpdatePerfMarker_38() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t98F2E5EFEB1FFA411D15C674EDB817E8B4849050_StaticFields, ___UpdatePerfMarker_38)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_38() const { return ___UpdatePerfMarker_38; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_38() { return &___UpdatePerfMarker_38; }
	inline void set_UpdatePerfMarker_38(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_38 = value;
	}

	inline static int32_t get_offset_of_DictationHypothesisPerfMarker_39() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t98F2E5EFEB1FFA411D15C674EDB817E8B4849050_StaticFields, ___DictationHypothesisPerfMarker_39)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DictationHypothesisPerfMarker_39() const { return ___DictationHypothesisPerfMarker_39; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DictationHypothesisPerfMarker_39() { return &___DictationHypothesisPerfMarker_39; }
	inline void set_DictationHypothesisPerfMarker_39(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DictationHypothesisPerfMarker_39 = value;
	}

	inline static int32_t get_offset_of_DictationResultPerfMarker_40() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t98F2E5EFEB1FFA411D15C674EDB817E8B4849050_StaticFields, ___DictationResultPerfMarker_40)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DictationResultPerfMarker_40() const { return ___DictationResultPerfMarker_40; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DictationResultPerfMarker_40() { return &___DictationResultPerfMarker_40; }
	inline void set_DictationResultPerfMarker_40(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DictationResultPerfMarker_40 = value;
	}

	inline static int32_t get_offset_of_DictationCompletePerfMarker_41() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t98F2E5EFEB1FFA411D15C674EDB817E8B4849050_StaticFields, ___DictationCompletePerfMarker_41)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DictationCompletePerfMarker_41() const { return ___DictationCompletePerfMarker_41; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DictationCompletePerfMarker_41() { return &___DictationCompletePerfMarker_41; }
	inline void set_DictationCompletePerfMarker_41(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DictationCompletePerfMarker_41 = value;
	}

	inline static int32_t get_offset_of_DictationErrorPerfMarker_42() { return static_cast<int32_t>(offsetof(WindowsDictationInputProvider_t98F2E5EFEB1FFA411D15C674EDB817E8B4849050_StaticFields, ___DictationErrorPerfMarker_42)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DictationErrorPerfMarker_42() const { return ___DictationErrorPerfMarker_42; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DictationErrorPerfMarker_42() { return &___DictationErrorPerfMarker_42; }
	inline void set_DictationErrorPerfMarker_42(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DictationErrorPerfMarker_42 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider
struct WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68  : public BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::<SmoothEyeTracking>k__BackingField
	bool ___U3CSmoothEyeTrackingU3Ek__BackingField_21;
	// Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::gazeSmoother
	EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48 * ___gazeSmoother_22;
	// System.Action Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::OnSaccade
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccade_23;
	// System.Action Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::OnSaccadeX
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccadeX_24;
	// System.Action Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::OnSaccadeY
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccadeY_25;

public:
	inline static int32_t get_offset_of_U3CSmoothEyeTrackingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68, ___U3CSmoothEyeTrackingU3Ek__BackingField_21)); }
	inline bool get_U3CSmoothEyeTrackingU3Ek__BackingField_21() const { return ___U3CSmoothEyeTrackingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CSmoothEyeTrackingU3Ek__BackingField_21() { return &___U3CSmoothEyeTrackingU3Ek__BackingField_21; }
	inline void set_U3CSmoothEyeTrackingU3Ek__BackingField_21(bool value)
	{
		___U3CSmoothEyeTrackingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_gazeSmoother_22() { return static_cast<int32_t>(offsetof(WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68, ___gazeSmoother_22)); }
	inline EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48 * get_gazeSmoother_22() const { return ___gazeSmoother_22; }
	inline EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48 ** get_address_of_gazeSmoother_22() { return &___gazeSmoother_22; }
	inline void set_gazeSmoother_22(EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48 * value)
	{
		___gazeSmoother_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeSmoother_22), (void*)value);
	}

	inline static int32_t get_offset_of_OnSaccade_23() { return static_cast<int32_t>(offsetof(WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68, ___OnSaccade_23)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccade_23() const { return ___OnSaccade_23; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccade_23() { return &___OnSaccade_23; }
	inline void set_OnSaccade_23(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccade_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccade_23), (void*)value);
	}

	inline static int32_t get_offset_of_OnSaccadeX_24() { return static_cast<int32_t>(offsetof(WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68, ___OnSaccadeX_24)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccadeX_24() const { return ___OnSaccadeX_24; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccadeX_24() { return &___OnSaccadeX_24; }
	inline void set_OnSaccadeX_24(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccadeX_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccadeX_24), (void*)value);
	}

	inline static int32_t get_offset_of_OnSaccadeY_25() { return static_cast<int32_t>(offsetof(WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68, ___OnSaccadeY_25)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccadeY_25() const { return ___OnSaccadeY_25; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccadeY_25() { return &___OnSaccadeY_25; }
	inline void set_OnSaccadeY_25(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccadeY_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccadeY_25), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver
struct WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340  : public BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessSurfaceTypes Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<SurfaceTypes>k__BackingField
	int32_t ___U3CSurfaceTypesU3Ek__BackingField_26;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<ShouldLoadFromFile>k__BackingField
	bool ___U3CShouldLoadFromFileU3Ek__BackingField_27;
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<InstantiationBatchRate>k__BackingField
	int32_t ___U3CInstantiationBatchRateU3Ek__BackingField_28;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<InferRegions>k__BackingField
	bool ___U3CInferRegionsU3Ek__BackingField_29;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<RequestMeshData>k__BackingField
	bool ___U3CRequestMeshDataU3Ek__BackingField_30;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<RequestPlaneData>k__BackingField
	bool ___U3CRequestPlaneDataU3Ek__BackingField_31;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<RequestOcclusionMask>k__BackingField
	bool ___U3CRequestOcclusionMaskU3Ek__BackingField_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<UsePersistentObjects>k__BackingField
	bool ___U3CUsePersistentObjectsU3Ek__BackingField_33;
	// System.Single Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<QueryRadius>k__BackingField
	float ___U3CQueryRadiusU3Ek__BackingField_34;
	// UnityEngine.Vector2Int Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<OcclusionMaskResolution>k__BackingField
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___U3COcclusionMaskResolutionU3Ek__BackingField_35;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<CreateGameObjects>k__BackingField
	bool ___U3CCreateGameObjectsU3Ek__BackingField_36;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<AutoUpdate>k__BackingField
	bool ___U3CAutoUpdateU3Ek__BackingField_37;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<OrientScene>k__BackingField
	bool ___U3COrientSceneU3Ek__BackingField_38;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<WorldMeshLevelOfDetail>k__BackingField
	int32_t ___U3CWorldMeshLevelOfDetailU3Ek__BackingField_39;
	// System.Single Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<FirstAutoUpdateDelay>k__BackingField
	float ___U3CFirstAutoUpdateDelayU3Ek__BackingField_40;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<UpdateOnceInitialized>k__BackingField
	bool ___U3CUpdateOnceInitializedU3Ek__BackingField_41;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<DefaultMaterial>k__BackingField
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3CDefaultMaterialU3Ek__BackingField_42;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<DefaultWorldMeshMaterial>k__BackingField
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3CDefaultWorldMeshMaterialU3Ek__BackingField_43;
	// System.Byte[] Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::sceneBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___sceneBytes_44;
	// UnityEngine.TextAsset Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::serializedScene
	TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * ___serializedScene_45;
	// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___task_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject> Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::sceneObjects
	Dictionary_2_t90E0DC17995431E62A89609E53E52FDDD331CC34 * ___sceneObjects_47;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::observedObjectParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___observedObjectParent_48;
	// System.Timers.Timer Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::firstUpdateTimer
	Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * ___firstUpdateTimer_49;
	// System.Timers.Timer Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::updateTimer
	Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * ___updateTimer_50;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Tuple`2<Microsoft.MixedReality.SceneUnderstanding.SceneQuad,Microsoft.MixedReality.SceneUnderstanding.SceneObject>> Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::cachedSceneQuads
	Dictionary_2_t877A02A3DCED84372E8F6CA424353CD00CD1EF45 * ___cachedSceneQuads_51;
	// System.Collections.Concurrent.ConcurrentQueue`1<Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject> Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::instantiationQueue
	ConcurrentQueue_1_tA6D925C7D9B5461E41C08314EA9AE5C2CE493CB7 * ___instantiationQueue_52;
	// UnityEngine.Mesh Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::normalizedQuadMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___normalizedQuadMesh_53;
	// System.String Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::surfaceTypeName
	String_t* ___surfaceTypeName_54;
	// System.Threading.CancellationTokenSource Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::cancelTokenSource
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___cancelTokenSource_55;
	// System.Numerics.Matrix4x4 Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::correctOrientation
	Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  ___correctOrientation_56;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject> Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::convertedObjects
	List_1_tAE037B58DD2A07B4BE1C2953C5736358AD7C3BAD * ___convertedObjects_57;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Guid> Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::IdToGuidLookup
	Dictionary_2_t6129019525B6065C5CB178570DE87B8155840619 * ___IdToGuidLookup_58;
	// Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver/ObserverState Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::observerState
	int32_t ___observerState_59;
	// System.Threading.CancellationToken Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::cancelToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancelToken_60;
	// System.Guid Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::sceneOriginId
	Guid_t  ___sceneOriginId_61;
	// System.Numerics.Matrix4x4 Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::sceneToWorldTransformMatrix
	Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  ___sceneToWorldTransformMatrix_62;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.SceneUnderstanding.SceneObject> Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::filteredSelectedSurfaceTypesResult
	List_1_t884C040642DCB159A123549C8F62D3860DCC52FF * ___filteredSelectedSurfaceTypesResult_63;
	// UnityEngine.Texture Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::defaultTexture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___defaultTexture_64;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::isOpenXRLoaderActive
	bool ___isOpenXRLoaderActive_65;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::isOpenXRRemotingConnected
	bool ___isOpenXRRemotingConnected_66;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject> Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::sceneEventData
	MixedRealitySpatialAwarenessEventData_1_tFFFE9C796D7933A1A6252E5F34D692980EC69DD3 * ___sceneEventData_67;

public:
	inline static int32_t get_offset_of_U3CSurfaceTypesU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___U3CSurfaceTypesU3Ek__BackingField_26)); }
	inline int32_t get_U3CSurfaceTypesU3Ek__BackingField_26() const { return ___U3CSurfaceTypesU3Ek__BackingField_26; }
	inline int32_t* get_address_of_U3CSurfaceTypesU3Ek__BackingField_26() { return &___U3CSurfaceTypesU3Ek__BackingField_26; }
	inline void set_U3CSurfaceTypesU3Ek__BackingField_26(int32_t value)
	{
		___U3CSurfaceTypesU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CShouldLoadFromFileU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___U3CShouldLoadFromFileU3Ek__BackingField_27)); }
	inline bool get_U3CShouldLoadFromFileU3Ek__BackingField_27() const { return ___U3CShouldLoadFromFileU3Ek__BackingField_27; }
	inline bool* get_address_of_U3CShouldLoadFromFileU3Ek__BackingField_27() { return &___U3CShouldLoadFromFileU3Ek__BackingField_27; }
	inline void set_U3CShouldLoadFromFileU3Ek__BackingField_27(bool value)
	{
		___U3CShouldLoadFromFileU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CInstantiationBatchRateU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___U3CInstantiationBatchRateU3Ek__BackingField_28)); }
	inline int32_t get_U3CInstantiationBatchRateU3Ek__BackingField_28() const { return ___U3CInstantiationBatchRateU3Ek__BackingField_28; }
	inline int32_t* get_address_of_U3CInstantiationBatchRateU3Ek__BackingField_28() { return &___U3CInstantiationBatchRateU3Ek__BackingField_28; }
	inline void set_U3CInstantiationBatchRateU3Ek__BackingField_28(int32_t value)
	{
		___U3CInstantiationBatchRateU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CInferRegionsU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___U3CInferRegionsU3Ek__BackingField_29)); }
	inline bool get_U3CInferRegionsU3Ek__BackingField_29() const { return ___U3CInferRegionsU3Ek__BackingField_29; }
	inline bool* get_address_of_U3CInferRegionsU3Ek__BackingField_29() { return &___U3CInferRegionsU3Ek__BackingField_29; }
	inline void set_U3CInferRegionsU3Ek__BackingField_29(bool value)
	{
		___U3CInferRegionsU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CRequestMeshDataU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___U3CRequestMeshDataU3Ek__BackingField_30)); }
	inline bool get_U3CRequestMeshDataU3Ek__BackingField_30() const { return ___U3CRequestMeshDataU3Ek__BackingField_30; }
	inline bool* get_address_of_U3CRequestMeshDataU3Ek__BackingField_30() { return &___U3CRequestMeshDataU3Ek__BackingField_30; }
	inline void set_U3CRequestMeshDataU3Ek__BackingField_30(bool value)
	{
		___U3CRequestMeshDataU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CRequestPlaneDataU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___U3CRequestPlaneDataU3Ek__BackingField_31)); }
	inline bool get_U3CRequestPlaneDataU3Ek__BackingField_31() const { return ___U3CRequestPlaneDataU3Ek__BackingField_31; }
	inline bool* get_address_of_U3CRequestPlaneDataU3Ek__BackingField_31() { return &___U3CRequestPlaneDataU3Ek__BackingField_31; }
	inline void set_U3CRequestPlaneDataU3Ek__BackingField_31(bool value)
	{
		___U3CRequestPlaneDataU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_U3CRequestOcclusionMaskU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___U3CRequestOcclusionMaskU3Ek__BackingField_32)); }
	inline bool get_U3CRequestOcclusionMaskU3Ek__BackingField_32() const { return ___U3CRequestOcclusionMaskU3Ek__BackingField_32; }
	inline bool* get_address_of_U3CRequestOcclusionMaskU3Ek__BackingField_32() { return &___U3CRequestOcclusionMaskU3Ek__BackingField_32; }
	inline void set_U3CRequestOcclusionMaskU3Ek__BackingField_32(bool value)
	{
		___U3CRequestOcclusionMaskU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CUsePersistentObjectsU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___U3CUsePersistentObjectsU3Ek__BackingField_33)); }
	inline bool get_U3CUsePersistentObjectsU3Ek__BackingField_33() const { return ___U3CUsePersistentObjectsU3Ek__BackingField_33; }
	inline bool* get_address_of_U3CUsePersistentObjectsU3Ek__BackingField_33() { return &___U3CUsePersistentObjectsU3Ek__BackingField_33; }
	inline void set_U3CUsePersistentObjectsU3Ek__BackingField_33(bool value)
	{
		___U3CUsePersistentObjectsU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CQueryRadiusU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___U3CQueryRadiusU3Ek__BackingField_34)); }
	inline float get_U3CQueryRadiusU3Ek__BackingField_34() const { return ___U3CQueryRadiusU3Ek__BackingField_34; }
	inline float* get_address_of_U3CQueryRadiusU3Ek__BackingField_34() { return &___U3CQueryRadiusU3Ek__BackingField_34; }
	inline void set_U3CQueryRadiusU3Ek__BackingField_34(float value)
	{
		___U3CQueryRadiusU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3COcclusionMaskResolutionU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___U3COcclusionMaskResolutionU3Ek__BackingField_35)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_U3COcclusionMaskResolutionU3Ek__BackingField_35() const { return ___U3COcclusionMaskResolutionU3Ek__BackingField_35; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_U3COcclusionMaskResolutionU3Ek__BackingField_35() { return &___U3COcclusionMaskResolutionU3Ek__BackingField_35; }
	inline void set_U3COcclusionMaskResolutionU3Ek__BackingField_35(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___U3COcclusionMaskResolutionU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CCreateGameObjectsU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___U3CCreateGameObjectsU3Ek__BackingField_36)); }
	inline bool get_U3CCreateGameObjectsU3Ek__BackingField_36() const { return ___U3CCreateGameObjectsU3Ek__BackingField_36; }
	inline bool* get_address_of_U3CCreateGameObjectsU3Ek__BackingField_36() { return &___U3CCreateGameObjectsU3Ek__BackingField_36; }
	inline void set_U3CCreateGameObjectsU3Ek__BackingField_36(bool value)
	{
		___U3CCreateGameObjectsU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_U3CAutoUpdateU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___U3CAutoUpdateU3Ek__BackingField_37)); }
	inline bool get_U3CAutoUpdateU3Ek__BackingField_37() const { return ___U3CAutoUpdateU3Ek__BackingField_37; }
	inline bool* get_address_of_U3CAutoUpdateU3Ek__BackingField_37() { return &___U3CAutoUpdateU3Ek__BackingField_37; }
	inline void set_U3CAutoUpdateU3Ek__BackingField_37(bool value)
	{
		___U3CAutoUpdateU3Ek__BackingField_37 = value;
	}

	inline static int32_t get_offset_of_U3COrientSceneU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___U3COrientSceneU3Ek__BackingField_38)); }
	inline bool get_U3COrientSceneU3Ek__BackingField_38() const { return ___U3COrientSceneU3Ek__BackingField_38; }
	inline bool* get_address_of_U3COrientSceneU3Ek__BackingField_38() { return &___U3COrientSceneU3Ek__BackingField_38; }
	inline void set_U3COrientSceneU3Ek__BackingField_38(bool value)
	{
		___U3COrientSceneU3Ek__BackingField_38 = value;
	}

	inline static int32_t get_offset_of_U3CWorldMeshLevelOfDetailU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___U3CWorldMeshLevelOfDetailU3Ek__BackingField_39)); }
	inline int32_t get_U3CWorldMeshLevelOfDetailU3Ek__BackingField_39() const { return ___U3CWorldMeshLevelOfDetailU3Ek__BackingField_39; }
	inline int32_t* get_address_of_U3CWorldMeshLevelOfDetailU3Ek__BackingField_39() { return &___U3CWorldMeshLevelOfDetailU3Ek__BackingField_39; }
	inline void set_U3CWorldMeshLevelOfDetailU3Ek__BackingField_39(int32_t value)
	{
		___U3CWorldMeshLevelOfDetailU3Ek__BackingField_39 = value;
	}

	inline static int32_t get_offset_of_U3CFirstAutoUpdateDelayU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___U3CFirstAutoUpdateDelayU3Ek__BackingField_40)); }
	inline float get_U3CFirstAutoUpdateDelayU3Ek__BackingField_40() const { return ___U3CFirstAutoUpdateDelayU3Ek__BackingField_40; }
	inline float* get_address_of_U3CFirstAutoUpdateDelayU3Ek__BackingField_40() { return &___U3CFirstAutoUpdateDelayU3Ek__BackingField_40; }
	inline void set_U3CFirstAutoUpdateDelayU3Ek__BackingField_40(float value)
	{
		___U3CFirstAutoUpdateDelayU3Ek__BackingField_40 = value;
	}

	inline static int32_t get_offset_of_U3CUpdateOnceInitializedU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___U3CUpdateOnceInitializedU3Ek__BackingField_41)); }
	inline bool get_U3CUpdateOnceInitializedU3Ek__BackingField_41() const { return ___U3CUpdateOnceInitializedU3Ek__BackingField_41; }
	inline bool* get_address_of_U3CUpdateOnceInitializedU3Ek__BackingField_41() { return &___U3CUpdateOnceInitializedU3Ek__BackingField_41; }
	inline void set_U3CUpdateOnceInitializedU3Ek__BackingField_41(bool value)
	{
		___U3CUpdateOnceInitializedU3Ek__BackingField_41 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultMaterialU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___U3CDefaultMaterialU3Ek__BackingField_42)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3CDefaultMaterialU3Ek__BackingField_42() const { return ___U3CDefaultMaterialU3Ek__BackingField_42; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3CDefaultMaterialU3Ek__BackingField_42() { return &___U3CDefaultMaterialU3Ek__BackingField_42; }
	inline void set_U3CDefaultMaterialU3Ek__BackingField_42(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3CDefaultMaterialU3Ek__BackingField_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultMaterialU3Ek__BackingField_42), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDefaultWorldMeshMaterialU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___U3CDefaultWorldMeshMaterialU3Ek__BackingField_43)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3CDefaultWorldMeshMaterialU3Ek__BackingField_43() const { return ___U3CDefaultWorldMeshMaterialU3Ek__BackingField_43; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3CDefaultWorldMeshMaterialU3Ek__BackingField_43() { return &___U3CDefaultWorldMeshMaterialU3Ek__BackingField_43; }
	inline void set_U3CDefaultWorldMeshMaterialU3Ek__BackingField_43(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3CDefaultWorldMeshMaterialU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultWorldMeshMaterialU3Ek__BackingField_43), (void*)value);
	}

	inline static int32_t get_offset_of_sceneBytes_44() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___sceneBytes_44)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_sceneBytes_44() const { return ___sceneBytes_44; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_sceneBytes_44() { return &___sceneBytes_44; }
	inline void set_sceneBytes_44(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___sceneBytes_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneBytes_44), (void*)value);
	}

	inline static int32_t get_offset_of_serializedScene_45() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___serializedScene_45)); }
	inline TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * get_serializedScene_45() const { return ___serializedScene_45; }
	inline TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 ** get_address_of_serializedScene_45() { return &___serializedScene_45; }
	inline void set_serializedScene_45(TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * value)
	{
		___serializedScene_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializedScene_45), (void*)value);
	}

	inline static int32_t get_offset_of_task_46() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___task_46)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_task_46() const { return ___task_46; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_task_46() { return &___task_46; }
	inline void set_task_46(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___task_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___task_46), (void*)value);
	}

	inline static int32_t get_offset_of_sceneObjects_47() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___sceneObjects_47)); }
	inline Dictionary_2_t90E0DC17995431E62A89609E53E52FDDD331CC34 * get_sceneObjects_47() const { return ___sceneObjects_47; }
	inline Dictionary_2_t90E0DC17995431E62A89609E53E52FDDD331CC34 ** get_address_of_sceneObjects_47() { return &___sceneObjects_47; }
	inline void set_sceneObjects_47(Dictionary_2_t90E0DC17995431E62A89609E53E52FDDD331CC34 * value)
	{
		___sceneObjects_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneObjects_47), (void*)value);
	}

	inline static int32_t get_offset_of_observedObjectParent_48() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___observedObjectParent_48)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_observedObjectParent_48() const { return ___observedObjectParent_48; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_observedObjectParent_48() { return &___observedObjectParent_48; }
	inline void set_observedObjectParent_48(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___observedObjectParent_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observedObjectParent_48), (void*)value);
	}

	inline static int32_t get_offset_of_firstUpdateTimer_49() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___firstUpdateTimer_49)); }
	inline Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * get_firstUpdateTimer_49() const { return ___firstUpdateTimer_49; }
	inline Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE ** get_address_of_firstUpdateTimer_49() { return &___firstUpdateTimer_49; }
	inline void set_firstUpdateTimer_49(Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * value)
	{
		___firstUpdateTimer_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstUpdateTimer_49), (void*)value);
	}

	inline static int32_t get_offset_of_updateTimer_50() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___updateTimer_50)); }
	inline Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * get_updateTimer_50() const { return ___updateTimer_50; }
	inline Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE ** get_address_of_updateTimer_50() { return &___updateTimer_50; }
	inline void set_updateTimer_50(Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * value)
	{
		___updateTimer_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updateTimer_50), (void*)value);
	}

	inline static int32_t get_offset_of_cachedSceneQuads_51() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___cachedSceneQuads_51)); }
	inline Dictionary_2_t877A02A3DCED84372E8F6CA424353CD00CD1EF45 * get_cachedSceneQuads_51() const { return ___cachedSceneQuads_51; }
	inline Dictionary_2_t877A02A3DCED84372E8F6CA424353CD00CD1EF45 ** get_address_of_cachedSceneQuads_51() { return &___cachedSceneQuads_51; }
	inline void set_cachedSceneQuads_51(Dictionary_2_t877A02A3DCED84372E8F6CA424353CD00CD1EF45 * value)
	{
		___cachedSceneQuads_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedSceneQuads_51), (void*)value);
	}

	inline static int32_t get_offset_of_instantiationQueue_52() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___instantiationQueue_52)); }
	inline ConcurrentQueue_1_tA6D925C7D9B5461E41C08314EA9AE5C2CE493CB7 * get_instantiationQueue_52() const { return ___instantiationQueue_52; }
	inline ConcurrentQueue_1_tA6D925C7D9B5461E41C08314EA9AE5C2CE493CB7 ** get_address_of_instantiationQueue_52() { return &___instantiationQueue_52; }
	inline void set_instantiationQueue_52(ConcurrentQueue_1_tA6D925C7D9B5461E41C08314EA9AE5C2CE493CB7 * value)
	{
		___instantiationQueue_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instantiationQueue_52), (void*)value);
	}

	inline static int32_t get_offset_of_normalizedQuadMesh_53() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___normalizedQuadMesh_53)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_normalizedQuadMesh_53() const { return ___normalizedQuadMesh_53; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_normalizedQuadMesh_53() { return &___normalizedQuadMesh_53; }
	inline void set_normalizedQuadMesh_53(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___normalizedQuadMesh_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___normalizedQuadMesh_53), (void*)value);
	}

	inline static int32_t get_offset_of_surfaceTypeName_54() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___surfaceTypeName_54)); }
	inline String_t* get_surfaceTypeName_54() const { return ___surfaceTypeName_54; }
	inline String_t** get_address_of_surfaceTypeName_54() { return &___surfaceTypeName_54; }
	inline void set_surfaceTypeName_54(String_t* value)
	{
		___surfaceTypeName_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___surfaceTypeName_54), (void*)value);
	}

	inline static int32_t get_offset_of_cancelTokenSource_55() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___cancelTokenSource_55)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_cancelTokenSource_55() const { return ___cancelTokenSource_55; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_cancelTokenSource_55() { return &___cancelTokenSource_55; }
	inline void set_cancelTokenSource_55(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___cancelTokenSource_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancelTokenSource_55), (void*)value);
	}

	inline static int32_t get_offset_of_correctOrientation_56() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___correctOrientation_56)); }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  get_correctOrientation_56() const { return ___correctOrientation_56; }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * get_address_of_correctOrientation_56() { return &___correctOrientation_56; }
	inline void set_correctOrientation_56(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  value)
	{
		___correctOrientation_56 = value;
	}

	inline static int32_t get_offset_of_convertedObjects_57() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___convertedObjects_57)); }
	inline List_1_tAE037B58DD2A07B4BE1C2953C5736358AD7C3BAD * get_convertedObjects_57() const { return ___convertedObjects_57; }
	inline List_1_tAE037B58DD2A07B4BE1C2953C5736358AD7C3BAD ** get_address_of_convertedObjects_57() { return &___convertedObjects_57; }
	inline void set_convertedObjects_57(List_1_tAE037B58DD2A07B4BE1C2953C5736358AD7C3BAD * value)
	{
		___convertedObjects_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___convertedObjects_57), (void*)value);
	}

	inline static int32_t get_offset_of_IdToGuidLookup_58() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___IdToGuidLookup_58)); }
	inline Dictionary_2_t6129019525B6065C5CB178570DE87B8155840619 * get_IdToGuidLookup_58() const { return ___IdToGuidLookup_58; }
	inline Dictionary_2_t6129019525B6065C5CB178570DE87B8155840619 ** get_address_of_IdToGuidLookup_58() { return &___IdToGuidLookup_58; }
	inline void set_IdToGuidLookup_58(Dictionary_2_t6129019525B6065C5CB178570DE87B8155840619 * value)
	{
		___IdToGuidLookup_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdToGuidLookup_58), (void*)value);
	}

	inline static int32_t get_offset_of_observerState_59() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___observerState_59)); }
	inline int32_t get_observerState_59() const { return ___observerState_59; }
	inline int32_t* get_address_of_observerState_59() { return &___observerState_59; }
	inline void set_observerState_59(int32_t value)
	{
		___observerState_59 = value;
	}

	inline static int32_t get_offset_of_cancelToken_60() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___cancelToken_60)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancelToken_60() const { return ___cancelToken_60; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancelToken_60() { return &___cancelToken_60; }
	inline void set_cancelToken_60(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancelToken_60 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancelToken_60))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_sceneOriginId_61() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___sceneOriginId_61)); }
	inline Guid_t  get_sceneOriginId_61() const { return ___sceneOriginId_61; }
	inline Guid_t * get_address_of_sceneOriginId_61() { return &___sceneOriginId_61; }
	inline void set_sceneOriginId_61(Guid_t  value)
	{
		___sceneOriginId_61 = value;
	}

	inline static int32_t get_offset_of_sceneToWorldTransformMatrix_62() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___sceneToWorldTransformMatrix_62)); }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  get_sceneToWorldTransformMatrix_62() const { return ___sceneToWorldTransformMatrix_62; }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * get_address_of_sceneToWorldTransformMatrix_62() { return &___sceneToWorldTransformMatrix_62; }
	inline void set_sceneToWorldTransformMatrix_62(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  value)
	{
		___sceneToWorldTransformMatrix_62 = value;
	}

	inline static int32_t get_offset_of_filteredSelectedSurfaceTypesResult_63() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___filteredSelectedSurfaceTypesResult_63)); }
	inline List_1_t884C040642DCB159A123549C8F62D3860DCC52FF * get_filteredSelectedSurfaceTypesResult_63() const { return ___filteredSelectedSurfaceTypesResult_63; }
	inline List_1_t884C040642DCB159A123549C8F62D3860DCC52FF ** get_address_of_filteredSelectedSurfaceTypesResult_63() { return &___filteredSelectedSurfaceTypesResult_63; }
	inline void set_filteredSelectedSurfaceTypesResult_63(List_1_t884C040642DCB159A123549C8F62D3860DCC52FF * value)
	{
		___filteredSelectedSurfaceTypesResult_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___filteredSelectedSurfaceTypesResult_63), (void*)value);
	}

	inline static int32_t get_offset_of_defaultTexture_64() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___defaultTexture_64)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_defaultTexture_64() const { return ___defaultTexture_64; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_defaultTexture_64() { return &___defaultTexture_64; }
	inline void set_defaultTexture_64(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___defaultTexture_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultTexture_64), (void*)value);
	}

	inline static int32_t get_offset_of_isOpenXRLoaderActive_65() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___isOpenXRLoaderActive_65)); }
	inline bool get_isOpenXRLoaderActive_65() const { return ___isOpenXRLoaderActive_65; }
	inline bool* get_address_of_isOpenXRLoaderActive_65() { return &___isOpenXRLoaderActive_65; }
	inline void set_isOpenXRLoaderActive_65(bool value)
	{
		___isOpenXRLoaderActive_65 = value;
	}

	inline static int32_t get_offset_of_isOpenXRRemotingConnected_66() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___isOpenXRRemotingConnected_66)); }
	inline bool get_isOpenXRRemotingConnected_66() const { return ___isOpenXRRemotingConnected_66; }
	inline bool* get_address_of_isOpenXRRemotingConnected_66() { return &___isOpenXRRemotingConnected_66; }
	inline void set_isOpenXRRemotingConnected_66(bool value)
	{
		___isOpenXRRemotingConnected_66 = value;
	}

	inline static int32_t get_offset_of_sceneEventData_67() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340, ___sceneEventData_67)); }
	inline MixedRealitySpatialAwarenessEventData_1_tFFFE9C796D7933A1A6252E5F34D692980EC69DD3 * get_sceneEventData_67() const { return ___sceneEventData_67; }
	inline MixedRealitySpatialAwarenessEventData_1_tFFFE9C796D7933A1A6252E5F34D692980EC69DD3 ** get_address_of_sceneEventData_67() { return &___sceneEventData_67; }
	inline void set_sceneEventData_67(MixedRealitySpatialAwarenessEventData_1_tFFFE9C796D7933A1A6252E5F34D692980EC69DD3 * value)
	{
		___sceneEventData_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneEventData_67), (void*)value);
	}
};

struct WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject>> Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::OnSceneObjectAdded
	EventFunction_1_t09C3552D0E392433F9E1730706B3D5BC8B3B43FE * ___OnSceneObjectAdded_68;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject>> Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::OnSceneObjectUpdated
	EventFunction_1_t09C3552D0E392433F9E1730706B3D5BC8B3B43FE * ___OnSceneObjectUpdated_69;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject>> Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::OnSceneObjectRemoved
	EventFunction_1_t09C3552D0E392433F9E1730706B3D5BC8B3B43FE * ___OnSceneObjectRemoved_70;

public:
	inline static int32_t get_offset_of_OnSceneObjectAdded_68() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340_StaticFields, ___OnSceneObjectAdded_68)); }
	inline EventFunction_1_t09C3552D0E392433F9E1730706B3D5BC8B3B43FE * get_OnSceneObjectAdded_68() const { return ___OnSceneObjectAdded_68; }
	inline EventFunction_1_t09C3552D0E392433F9E1730706B3D5BC8B3B43FE ** get_address_of_OnSceneObjectAdded_68() { return &___OnSceneObjectAdded_68; }
	inline void set_OnSceneObjectAdded_68(EventFunction_1_t09C3552D0E392433F9E1730706B3D5BC8B3B43FE * value)
	{
		___OnSceneObjectAdded_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSceneObjectAdded_68), (void*)value);
	}

	inline static int32_t get_offset_of_OnSceneObjectUpdated_69() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340_StaticFields, ___OnSceneObjectUpdated_69)); }
	inline EventFunction_1_t09C3552D0E392433F9E1730706B3D5BC8B3B43FE * get_OnSceneObjectUpdated_69() const { return ___OnSceneObjectUpdated_69; }
	inline EventFunction_1_t09C3552D0E392433F9E1730706B3D5BC8B3B43FE ** get_address_of_OnSceneObjectUpdated_69() { return &___OnSceneObjectUpdated_69; }
	inline void set_OnSceneObjectUpdated_69(EventFunction_1_t09C3552D0E392433F9E1730706B3D5BC8B3B43FE * value)
	{
		___OnSceneObjectUpdated_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSceneObjectUpdated_69), (void*)value);
	}

	inline static int32_t get_offset_of_OnSceneObjectRemoved_70() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340_StaticFields, ___OnSceneObjectRemoved_70)); }
	inline EventFunction_1_t09C3552D0E392433F9E1730706B3D5BC8B3B43FE * get_OnSceneObjectRemoved_70() const { return ___OnSceneObjectRemoved_70; }
	inline EventFunction_1_t09C3552D0E392433F9E1730706B3D5BC8B3B43FE ** get_address_of_OnSceneObjectRemoved_70() { return &___OnSceneObjectRemoved_70; }
	inline void set_OnSceneObjectRemoved_70(EventFunction_1_t09C3552D0E392433F9E1730706B3D5BC8B3B43FE * value)
	{
		___OnSceneObjectRemoved_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSceneObjectRemoved_70), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider
struct WindowsSpeechInputProvider_tDA775DA7E17E2A78C8D26DF89F3A0F8FFB8C170E  : public BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::<RecognitionConfidenceLevel>k__BackingField
	int32_t ___U3CRecognitionConfidenceLevelU3Ek__BackingField_21;
	// Microsoft.MixedReality.Toolkit.Input.BaseGlobalInputSource Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::globalInputSource
	BaseGlobalInputSource_tE9B93B834C51342F071089F6B2AB580A0219AEF2 * ___globalInputSource_22;
	// UnityEngine.Windows.Speech.KeywordRecognizer Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::keywordRecognizer
	KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * ___keywordRecognizer_23;

public:
	inline static int32_t get_offset_of_U3CRecognitionConfidenceLevelU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_tDA775DA7E17E2A78C8D26DF89F3A0F8FFB8C170E, ___U3CRecognitionConfidenceLevelU3Ek__BackingField_21)); }
	inline int32_t get_U3CRecognitionConfidenceLevelU3Ek__BackingField_21() const { return ___U3CRecognitionConfidenceLevelU3Ek__BackingField_21; }
	inline int32_t* get_address_of_U3CRecognitionConfidenceLevelU3Ek__BackingField_21() { return &___U3CRecognitionConfidenceLevelU3Ek__BackingField_21; }
	inline void set_U3CRecognitionConfidenceLevelU3Ek__BackingField_21(int32_t value)
	{
		___U3CRecognitionConfidenceLevelU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_globalInputSource_22() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_tDA775DA7E17E2A78C8D26DF89F3A0F8FFB8C170E, ___globalInputSource_22)); }
	inline BaseGlobalInputSource_tE9B93B834C51342F071089F6B2AB580A0219AEF2 * get_globalInputSource_22() const { return ___globalInputSource_22; }
	inline BaseGlobalInputSource_tE9B93B834C51342F071089F6B2AB580A0219AEF2 ** get_address_of_globalInputSource_22() { return &___globalInputSource_22; }
	inline void set_globalInputSource_22(BaseGlobalInputSource_tE9B93B834C51342F071089F6B2AB580A0219AEF2 * value)
	{
		___globalInputSource_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___globalInputSource_22), (void*)value);
	}

	inline static int32_t get_offset_of_keywordRecognizer_23() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_tDA775DA7E17E2A78C8D26DF89F3A0F8FFB8C170E, ___keywordRecognizer_23)); }
	inline KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * get_keywordRecognizer_23() const { return ___keywordRecognizer_23; }
	inline KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F ** get_address_of_keywordRecognizer_23() { return &___keywordRecognizer_23; }
	inline void set_keywordRecognizer_23(KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F * value)
	{
		___keywordRecognizer_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keywordRecognizer_23), (void*)value);
	}
};

struct WindowsSpeechInputProvider_tDA775DA7E17E2A78C8D26DF89F3A0F8FFB8C170E_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_24;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider::OnPhraseRecognizedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnPhraseRecognizedPerfMarker_25;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_24() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_tDA775DA7E17E2A78C8D26DF89F3A0F8FFB8C170E_StaticFields, ___UpdatePerfMarker_24)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_24() const { return ___UpdatePerfMarker_24; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_24() { return &___UpdatePerfMarker_24; }
	inline void set_UpdatePerfMarker_24(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_24 = value;
	}

	inline static int32_t get_offset_of_OnPhraseRecognizedPerfMarker_25() { return static_cast<int32_t>(offsetof(WindowsSpeechInputProvider_tDA775DA7E17E2A78C8D26DF89F3A0F8FFB8C170E_StaticFields, ___OnPhraseRecognizedPerfMarker_25)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnPhraseRecognizedPerfMarker_25() const { return ___OnPhraseRecognizedPerfMarker_25; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnPhraseRecognizedPerfMarker_25() { return &___OnPhraseRecognizedPerfMarker_25; }
	inline void set_OnPhraseRecognizedPerfMarker_25(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnPhraseRecognizedPerfMarker_25 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager
struct XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD  : public BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::inputDevices
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___inputDevices_22;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::inputDevicesSubset
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___inputDevicesSubset_23;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::lastInputDevices
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___lastInputDevices_24;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::<DesiredInputCharacteristics>k__BackingField
	List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * ___U3CDesiredInputCharacteristicsU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_inputDevices_22() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD, ___inputDevices_22)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_inputDevices_22() const { return ___inputDevices_22; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_inputDevices_22() { return &___inputDevices_22; }
	inline void set_inputDevices_22(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___inputDevices_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputDevices_22), (void*)value);
	}

	inline static int32_t get_offset_of_inputDevicesSubset_23() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD, ___inputDevicesSubset_23)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_inputDevicesSubset_23() const { return ___inputDevicesSubset_23; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_inputDevicesSubset_23() { return &___inputDevicesSubset_23; }
	inline void set_inputDevicesSubset_23(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___inputDevicesSubset_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputDevicesSubset_23), (void*)value);
	}

	inline static int32_t get_offset_of_lastInputDevices_24() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD, ___lastInputDevices_24)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_lastInputDevices_24() const { return ___lastInputDevices_24; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_lastInputDevices_24() { return &___lastInputDevices_24; }
	inline void set_lastInputDevices_24(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___lastInputDevices_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastInputDevices_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDesiredInputCharacteristicsU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD, ___U3CDesiredInputCharacteristicsU3Ek__BackingField_25)); }
	inline List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * get_U3CDesiredInputCharacteristicsU3Ek__BackingField_25() const { return ___U3CDesiredInputCharacteristicsU3Ek__BackingField_25; }
	inline List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C ** get_address_of_U3CDesiredInputCharacteristicsU3Ek__BackingField_25() { return &___U3CDesiredInputCharacteristicsU3Ek__BackingField_25; }
	inline void set_U3CDesiredInputCharacteristicsU3Ek__BackingField_25(List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * value)
	{
		___U3CDesiredInputCharacteristicsU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDesiredInputCharacteristicsU3Ek__BackingField_25), (void*)value);
	}
};

struct XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::ActiveControllers
	Dictionary_2_tA0FD2AFAAFE4AEDFD84AEE2B7DA1E4180E174DBF * ___ActiveControllers_21;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetOrAddControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetOrAddControllerPerfMarker_27;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::RemoveControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RemoveControllerPerfMarker_28;

public:
	inline static int32_t get_offset_of_ActiveControllers_21() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD_StaticFields, ___ActiveControllers_21)); }
	inline Dictionary_2_tA0FD2AFAAFE4AEDFD84AEE2B7DA1E4180E174DBF * get_ActiveControllers_21() const { return ___ActiveControllers_21; }
	inline Dictionary_2_tA0FD2AFAAFE4AEDFD84AEE2B7DA1E4180E174DBF ** get_address_of_ActiveControllers_21() { return &___ActiveControllers_21; }
	inline void set_ActiveControllers_21(Dictionary_2_tA0FD2AFAAFE4AEDFD84AEE2B7DA1E4180E174DBF * value)
	{
		___ActiveControllers_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActiveControllers_21), (void*)value);
	}

	inline static int32_t get_offset_of_UpdatePerfMarker_26() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD_StaticFields, ___UpdatePerfMarker_26)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_26() const { return ___UpdatePerfMarker_26; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_26() { return &___UpdatePerfMarker_26; }
	inline void set_UpdatePerfMarker_26(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_26 = value;
	}

	inline static int32_t get_offset_of_GetOrAddControllerPerfMarker_27() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD_StaticFields, ___GetOrAddControllerPerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetOrAddControllerPerfMarker_27() const { return ___GetOrAddControllerPerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetOrAddControllerPerfMarker_27() { return &___GetOrAddControllerPerfMarker_27; }
	inline void set_GetOrAddControllerPerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetOrAddControllerPerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_RemoveControllerPerfMarker_28() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD_StaticFields, ___RemoveControllerPerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RemoveControllerPerfMarker_28() const { return ___RemoveControllerPerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RemoveControllerPerfMarker_28() { return &___RemoveControllerPerfMarker_28; }
	inline void set_RemoveControllerPerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RemoveControllerPerfMarker_28 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver
struct GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6  : public BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740
{
public:
	// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::observersCache
	RuntimeObject* ___observersCache_47;
	// UnityEngine.XR.XRMeshSubsystem Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshSubsystem
	XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * ___meshSubsystem_48;
	// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshWorkQueue
	Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * ___meshWorkQueue_50;
	// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshInfos
	List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * ___meshInfos_51;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::outstandingMeshObject
	SpatialAwarenessMeshObject_t714D18632EDCC5238156A908F5F8132BF0291944 * ___outstandingMeshObject_52;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::spareMeshObject
	SpatialAwarenessMeshObject_t714D18632EDCC5238156A908F5F8132BF0291944 * ___spareMeshObject_53;
	// System.Single Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::lastUpdated
	float ___lastUpdated_54;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::oldObserverOrigin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldObserverOrigin_63;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::oldObservationExtents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldObservationExtents_64;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::oldObserverVolumeType
	int32_t ___oldObserverVolumeType_65;

public:
	inline static int32_t get_offset_of_observersCache_47() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6, ___observersCache_47)); }
	inline RuntimeObject* get_observersCache_47() const { return ___observersCache_47; }
	inline RuntimeObject** get_address_of_observersCache_47() { return &___observersCache_47; }
	inline void set_observersCache_47(RuntimeObject* value)
	{
		___observersCache_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observersCache_47), (void*)value);
	}

	inline static int32_t get_offset_of_meshSubsystem_48() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6, ___meshSubsystem_48)); }
	inline XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * get_meshSubsystem_48() const { return ___meshSubsystem_48; }
	inline XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 ** get_address_of_meshSubsystem_48() { return &___meshSubsystem_48; }
	inline void set_meshSubsystem_48(XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * value)
	{
		___meshSubsystem_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshSubsystem_48), (void*)value);
	}

	inline static int32_t get_offset_of_meshWorkQueue_50() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6, ___meshWorkQueue_50)); }
	inline Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * get_meshWorkQueue_50() const { return ___meshWorkQueue_50; }
	inline Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B ** get_address_of_meshWorkQueue_50() { return &___meshWorkQueue_50; }
	inline void set_meshWorkQueue_50(Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * value)
	{
		___meshWorkQueue_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshWorkQueue_50), (void*)value);
	}

	inline static int32_t get_offset_of_meshInfos_51() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6, ___meshInfos_51)); }
	inline List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * get_meshInfos_51() const { return ___meshInfos_51; }
	inline List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D ** get_address_of_meshInfos_51() { return &___meshInfos_51; }
	inline void set_meshInfos_51(List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * value)
	{
		___meshInfos_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshInfos_51), (void*)value);
	}

	inline static int32_t get_offset_of_outstandingMeshObject_52() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6, ___outstandingMeshObject_52)); }
	inline SpatialAwarenessMeshObject_t714D18632EDCC5238156A908F5F8132BF0291944 * get_outstandingMeshObject_52() const { return ___outstandingMeshObject_52; }
	inline SpatialAwarenessMeshObject_t714D18632EDCC5238156A908F5F8132BF0291944 ** get_address_of_outstandingMeshObject_52() { return &___outstandingMeshObject_52; }
	inline void set_outstandingMeshObject_52(SpatialAwarenessMeshObject_t714D18632EDCC5238156A908F5F8132BF0291944 * value)
	{
		___outstandingMeshObject_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outstandingMeshObject_52), (void*)value);
	}

	inline static int32_t get_offset_of_spareMeshObject_53() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6, ___spareMeshObject_53)); }
	inline SpatialAwarenessMeshObject_t714D18632EDCC5238156A908F5F8132BF0291944 * get_spareMeshObject_53() const { return ___spareMeshObject_53; }
	inline SpatialAwarenessMeshObject_t714D18632EDCC5238156A908F5F8132BF0291944 ** get_address_of_spareMeshObject_53() { return &___spareMeshObject_53; }
	inline void set_spareMeshObject_53(SpatialAwarenessMeshObject_t714D18632EDCC5238156A908F5F8132BF0291944 * value)
	{
		___spareMeshObject_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spareMeshObject_53), (void*)value);
	}

	inline static int32_t get_offset_of_lastUpdated_54() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6, ___lastUpdated_54)); }
	inline float get_lastUpdated_54() const { return ___lastUpdated_54; }
	inline float* get_address_of_lastUpdated_54() { return &___lastUpdated_54; }
	inline void set_lastUpdated_54(float value)
	{
		___lastUpdated_54 = value;
	}

	inline static int32_t get_offset_of_oldObserverOrigin_63() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6, ___oldObserverOrigin_63)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldObserverOrigin_63() const { return ___oldObserverOrigin_63; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldObserverOrigin_63() { return &___oldObserverOrigin_63; }
	inline void set_oldObserverOrigin_63(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldObserverOrigin_63 = value;
	}

	inline static int32_t get_offset_of_oldObservationExtents_64() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6, ___oldObservationExtents_64)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldObservationExtents_64() const { return ___oldObservationExtents_64; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldObservationExtents_64() { return &___oldObservationExtents_64; }
	inline void set_oldObservationExtents_64(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldObservationExtents_64 = value;
	}

	inline static int32_t get_offset_of_oldObserverVolumeType_65() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6, ___oldObserverVolumeType_65)); }
	inline int32_t get_oldObserverVolumeType_65() const { return ___oldObserverVolumeType_65; }
	inline int32_t* get_address_of_oldObserverVolumeType_65() { return &___oldObserverVolumeType_65; }
	inline void set_oldObserverVolumeType_65(int32_t value)
	{
		___oldObserverVolumeType_65 = value;
	}
};

struct GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_49;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ResumePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ResumePerfMarker_55;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::SuspendPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SuspendPerfMarker_56;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ClearObservationsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ClearObservationsPerfMarker_57;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateObserverPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateObserverPerfMarker_58;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RequestMeshPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RequestMeshPerfMarker_59;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RemoveMeshObjectPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RemoveMeshObjectPerfMarker_60;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ReclaimMeshObjectPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ReclaimMeshObjectPerfMarker_61;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ConfigureObserverVolumePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ConfigureObserverVolumePerfMarker_62;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateMeshesPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateMeshesPerfMarker_66;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::MeshGenerationActionPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___MeshGenerationActionPerfMarker_67;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_49() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields, ___UpdatePerfMarker_49)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_49() const { return ___UpdatePerfMarker_49; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_49() { return &___UpdatePerfMarker_49; }
	inline void set_UpdatePerfMarker_49(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_49 = value;
	}

	inline static int32_t get_offset_of_ResumePerfMarker_55() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields, ___ResumePerfMarker_55)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ResumePerfMarker_55() const { return ___ResumePerfMarker_55; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ResumePerfMarker_55() { return &___ResumePerfMarker_55; }
	inline void set_ResumePerfMarker_55(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ResumePerfMarker_55 = value;
	}

	inline static int32_t get_offset_of_SuspendPerfMarker_56() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields, ___SuspendPerfMarker_56)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SuspendPerfMarker_56() const { return ___SuspendPerfMarker_56; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SuspendPerfMarker_56() { return &___SuspendPerfMarker_56; }
	inline void set_SuspendPerfMarker_56(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SuspendPerfMarker_56 = value;
	}

	inline static int32_t get_offset_of_ClearObservationsPerfMarker_57() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields, ___ClearObservationsPerfMarker_57)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ClearObservationsPerfMarker_57() const { return ___ClearObservationsPerfMarker_57; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ClearObservationsPerfMarker_57() { return &___ClearObservationsPerfMarker_57; }
	inline void set_ClearObservationsPerfMarker_57(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ClearObservationsPerfMarker_57 = value;
	}

	inline static int32_t get_offset_of_UpdateObserverPerfMarker_58() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields, ___UpdateObserverPerfMarker_58)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateObserverPerfMarker_58() const { return ___UpdateObserverPerfMarker_58; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateObserverPerfMarker_58() { return &___UpdateObserverPerfMarker_58; }
	inline void set_UpdateObserverPerfMarker_58(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateObserverPerfMarker_58 = value;
	}

	inline static int32_t get_offset_of_RequestMeshPerfMarker_59() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields, ___RequestMeshPerfMarker_59)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RequestMeshPerfMarker_59() const { return ___RequestMeshPerfMarker_59; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RequestMeshPerfMarker_59() { return &___RequestMeshPerfMarker_59; }
	inline void set_RequestMeshPerfMarker_59(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RequestMeshPerfMarker_59 = value;
	}

	inline static int32_t get_offset_of_RemoveMeshObjectPerfMarker_60() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields, ___RemoveMeshObjectPerfMarker_60)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RemoveMeshObjectPerfMarker_60() const { return ___RemoveMeshObjectPerfMarker_60; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RemoveMeshObjectPerfMarker_60() { return &___RemoveMeshObjectPerfMarker_60; }
	inline void set_RemoveMeshObjectPerfMarker_60(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RemoveMeshObjectPerfMarker_60 = value;
	}

	inline static int32_t get_offset_of_ReclaimMeshObjectPerfMarker_61() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields, ___ReclaimMeshObjectPerfMarker_61)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ReclaimMeshObjectPerfMarker_61() const { return ___ReclaimMeshObjectPerfMarker_61; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ReclaimMeshObjectPerfMarker_61() { return &___ReclaimMeshObjectPerfMarker_61; }
	inline void set_ReclaimMeshObjectPerfMarker_61(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ReclaimMeshObjectPerfMarker_61 = value;
	}

	inline static int32_t get_offset_of_ConfigureObserverVolumePerfMarker_62() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields, ___ConfigureObserverVolumePerfMarker_62)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ConfigureObserverVolumePerfMarker_62() const { return ___ConfigureObserverVolumePerfMarker_62; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ConfigureObserverVolumePerfMarker_62() { return &___ConfigureObserverVolumePerfMarker_62; }
	inline void set_ConfigureObserverVolumePerfMarker_62(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ConfigureObserverVolumePerfMarker_62 = value;
	}

	inline static int32_t get_offset_of_UpdateMeshesPerfMarker_66() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields, ___UpdateMeshesPerfMarker_66)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateMeshesPerfMarker_66() const { return ___UpdateMeshesPerfMarker_66; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateMeshesPerfMarker_66() { return &___UpdateMeshesPerfMarker_66; }
	inline void set_UpdateMeshesPerfMarker_66(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateMeshesPerfMarker_66 = value;
	}

	inline static int32_t get_offset_of_MeshGenerationActionPerfMarker_67() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields, ___MeshGenerationActionPerfMarker_67)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_MeshGenerationActionPerfMarker_67() const { return ___MeshGenerationActionPerfMarker_67; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_MeshGenerationActionPerfMarker_67() { return &___MeshGenerationActionPerfMarker_67; }
	inline void set_MeshGenerationActionPerfMarker_67(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___MeshGenerationActionPerfMarker_67 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings
struct WindowsMixedRealityCameraSettings_t88C6B375E46AB4D48219F3C8E154CC63C5EE7136  : public BaseWindowsMixedRealityCameraSettings_tF049E9AFD9544F4C5FAA918FAAAA5936AFA10D98
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager
struct WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC  : public XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::mixedRealityGazeProviderHeadOverride
	RuntimeObject* ___mixedRealityGazeProviderHeadOverride_29;

public:
	inline static int32_t get_offset_of_mixedRealityGazeProviderHeadOverride_29() { return static_cast<int32_t>(offsetof(WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC, ___mixedRealityGazeProviderHeadOverride_29)); }
	inline RuntimeObject* get_mixedRealityGazeProviderHeadOverride_29() const { return ___mixedRealityGazeProviderHeadOverride_29; }
	inline RuntimeObject** get_address_of_mixedRealityGazeProviderHeadOverride_29() { return &___mixedRealityGazeProviderHeadOverride_29; }
	inline void set_mixedRealityGazeProviderHeadOverride_29(RuntimeObject* value)
	{
		___mixedRealityGazeProviderHeadOverride_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mixedRealityGazeProviderHeadOverride_29), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver
struct WindowsMixedRealitySpatialMeshObserver_t180096751E0105AB1A2090F58A1C5574520EA7B2  : public GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::oldObserverOrigin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldObserverOrigin_69;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::oldObservationExtents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldObservationExtents_70;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::oldObserverVolumeType
	int32_t ___oldObserverVolumeType_71;

public:
	inline static int32_t get_offset_of_oldObserverOrigin_69() { return static_cast<int32_t>(offsetof(WindowsMixedRealitySpatialMeshObserver_t180096751E0105AB1A2090F58A1C5574520EA7B2, ___oldObserverOrigin_69)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldObserverOrigin_69() const { return ___oldObserverOrigin_69; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldObserverOrigin_69() { return &___oldObserverOrigin_69; }
	inline void set_oldObserverOrigin_69(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldObserverOrigin_69 = value;
	}

	inline static int32_t get_offset_of_oldObservationExtents_70() { return static_cast<int32_t>(offsetof(WindowsMixedRealitySpatialMeshObserver_t180096751E0105AB1A2090F58A1C5574520EA7B2, ___oldObservationExtents_70)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldObservationExtents_70() const { return ___oldObservationExtents_70; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldObservationExtents_70() { return &___oldObservationExtents_70; }
	inline void set_oldObservationExtents_70(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldObservationExtents_70 = value;
	}

	inline static int32_t get_offset_of_oldObserverVolumeType_71() { return static_cast<int32_t>(offsetof(WindowsMixedRealitySpatialMeshObserver_t180096751E0105AB1A2090F58A1C5574520EA7B2, ___oldObserverVolumeType_71)); }
	inline int32_t get_oldObserverVolumeType_71() const { return ___oldObserverVolumeType_71; }
	inline int32_t* get_address_of_oldObserverVolumeType_71() { return &___oldObserverVolumeType_71; }
	inline void set_oldObserverVolumeType_71(int32_t value)
	{
		___oldObserverVolumeType_71 = value;
	}
};

struct WindowsMixedRealitySpatialMeshObserver_t180096751E0105AB1A2090F58A1C5574520EA7B2_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::ConfigureObserverVolumePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ConfigureObserverVolumePerfMarker_68;

public:
	inline static int32_t get_offset_of_ConfigureObserverVolumePerfMarker_68() { return static_cast<int32_t>(offsetof(WindowsMixedRealitySpatialMeshObserver_t180096751E0105AB1A2090F58A1C5574520EA7B2_StaticFields, ___ConfigureObserverVolumePerfMarker_68)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ConfigureObserverVolumePerfMarker_68() const { return ___ConfigureObserverVolumePerfMarker_68; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ConfigureObserverVolumePerfMarker_68() { return &___ConfigureObserverVolumePerfMarker_68; }
	inline void set_ConfigureObserverVolumePerfMarker_68(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ConfigureObserverVolumePerfMarker_68 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);


// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Windows.Storage.Streams.IBuffer.get_Capacity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Capacity_mFCD1D3C1A5DC7CB389927A5529BCD86518ED0AB5_inline (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, const RuntimeMethod* method);
// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Windows.Storage.Streams.IBuffer.get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Length_mBC04A275BE71FE110C0A6B94A66A5F9726F6461F_inline (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Windows.Storage.Streams.IBuffer.put_Length(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_put_Length_m2B1B2192ECCDAE8762FC18CC6B16B4BC5551D95B (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess.GetBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WindowsRuntimeBuffer_System_Runtime_InteropServices_WindowsRuntime_IBufferByteAccess_GetBuffer_mAF0662BC19B20E3AC7377C080B057C9423B49014 (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.GetUnmarshalClass(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetUnmarshalClass_mF89EBF002568BC8D18BA6B28CE2A02A3C67D8426 (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlFlags4, Guid_t * ___pCid5, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.GetMarshalSizeMax(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetMarshalSizeMax_m4140DA5FB36C45D0C1EC1352BEA8DE6696578064 (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlflags4, uint32_t* ___pSize5, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.MarshalInterface(System.IntPtr,System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_MarshalInterface_mB73D77AE608A5F1EF29F56F06C45DE1C04B8F639 (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, intptr_t ___pStm0, Guid_t * ___riid1, intptr_t ___pv2, uint32_t ___dwDestContext3, intptr_t ___pvDestContext4, uint32_t ___mshlflags5, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.UnmarshalInterface(System.IntPtr,System.Guid&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_UnmarshalInterface_m71734EF46FAADB9CEE534A73D08FC73352F37B39 (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, intptr_t ___pStm0, Guid_t * ___riid1, intptr_t* ___ppv2, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.ReleaseMarshalData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_ReleaseMarshalData_m1BBAA5FC9C261A979249C3720C077D910619B4BF (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, intptr_t ___pStm0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.DisconnectObject(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_DisconnectObject_mA7586ECB5656276267A0336CA96A2083B41B1BBC (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, uint32_t ___dwReserved0, const RuntimeMethod* method);

// COM Callable Wrapper for UnityEngine.VFX.VFXEventAttribute
struct VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.VFX.VFXSpawnerState
struct VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Numerics.Vector2
struct Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B_ComCallableWrapper>, IReference_1_t3C8A36C7276B7158A344146F353F2DCA871E4630, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t3C8A36C7276B7158A344146F353F2DCA871E4630::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t3C8A36C7276B7158A344146F353F2DCA871E4630*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t3C8A36C7276B7158A344146F353F2DCA871E4630::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m4255473F2FF2083F7A9A0B6E89C6B9532942FA5C(Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B  returnValue;
		try
		{
			returnValue = *static_cast<Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B *>(UnBox(GetManagedObjectInline(), Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Numerics.Vector2
struct Vector2_t3F50A00BF980B1193E44D4EBE470C34903F4631E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector2_t3F50A00BF980B1193E44D4EBE470C34903F4631E_ComCallableWrapper>, IReference_1_tEAE3A44604921CCE36FBE3986D4AA48786A02DCF, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Vector2_t3F50A00BF980B1193E44D4EBE470C34903F4631E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector2_t3F50A00BF980B1193E44D4EBE470C34903F4631E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_tEAE3A44604921CCE36FBE3986D4AA48786A02DCF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_tEAE3A44604921CCE36FBE3986D4AA48786A02DCF*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_tEAE3A44604921CCE36FBE3986D4AA48786A02DCF::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB9D7D66ED2B28C2740BAFD26B96ED89E73383B5F(Vector2_t3F50A00BF980B1193E44D4EBE470C34903F4631E * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t3F50A00BF980B1193E44D4EBE470C34903F4631E_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Vector2_t3F50A00BF980B1193E44D4EBE470C34903F4631E  returnValue;
		try
		{
			returnValue = *static_cast<Vector2_t3F50A00BF980B1193E44D4EBE470C34903F4631E *>(UnBox(GetManagedObjectInline(), Vector2_t3F50A00BF980B1193E44D4EBE470C34903F4631E_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector2_t3F50A00BF980B1193E44D4EBE470C34903F4631E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector2_t3F50A00BF980B1193E44D4EBE470C34903F4631E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector2_t3F50A00BF980B1193E44D4EBE470C34903F4631E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Numerics.Vector3
struct Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_ComCallableWrapper>, IReference_1_t82C05BA472430109829B64EEB0BA4AA8DA57EF70, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t82C05BA472430109829B64EEB0BA4AA8DA57EF70::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t82C05BA472430109829B64EEB0BA4AA8DA57EF70*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t82C05BA472430109829B64EEB0BA4AA8DA57EF70::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m41BE14B78D883205B1AB0B0F28DB78816768D26D(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  returnValue;
		try
		{
			returnValue = *static_cast<Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 *>(UnBox(GetManagedObjectInline(), Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Numerics.Vector3
struct Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_ComCallableWrapper>, IReference_1_t2E90AA27DAF67A0C5212F008ED5019775E438EAF, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t2E90AA27DAF67A0C5212F008ED5019775E438EAF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t2E90AA27DAF67A0C5212F008ED5019775E438EAF*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t2E90AA27DAF67A0C5212F008ED5019775E438EAF::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mEFF123E1BD76AEDAED0313C6AC9D05313CBA7487(Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F  returnValue;
		try
		{
			returnValue = *static_cast<Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F *>(UnBox(GetManagedObjectInline(), Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Windows.WebCam.VideoCapture
struct VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.ComponentModel.WeakHashtable
struct WeakHashtable_t1B4A0D2CAF0D8746A66413400617B2F9428E0EBA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WeakHashtable_t1B4A0D2CAF0D8746A66413400617B2F9428E0EBA_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline WeakHashtable_t1B4A0D2CAF0D8746A66413400617B2F9428E0EBA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WeakHashtable_t1B4A0D2CAF0D8746A66413400617B2F9428E0EBA_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WeakHashtable_t1B4A0D2CAF0D8746A66413400617B2F9428E0EBA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WeakHashtable_t1B4A0D2CAF0D8746A66413400617B2F9428E0EBA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WeakHashtable_t1B4A0D2CAF0D8746A66413400617B2F9428E0EBA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.WebConnection
struct WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.WebHeaderCollection
struct WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.WebRequestStream
struct WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.WebResponseStream
struct WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.WinRtToNetFxStreamAdapter
struct WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Windows.Input.WindowsDictationInputProvider
struct WindowsDictationInputProvider_t98F2E5EFEB1FFA411D15C674EDB817E8B4849050_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WindowsDictationInputProvider_t98F2E5EFEB1FFA411D15C674EDB817E8B4849050_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WindowsDictationInputProvider_t98F2E5EFEB1FFA411D15C674EDB817E8B4849050_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WindowsDictationInputProvider_t98F2E5EFEB1FFA411D15C674EDB817E8B4849050_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WindowsDictationInputProvider_t98F2E5EFEB1FFA411D15C674EDB817E8B4849050(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WindowsDictationInputProvider_t98F2E5EFEB1FFA411D15C674EDB817E8B4849050_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WindowsDictationInputProvider_t98F2E5EFEB1FFA411D15C674EDB817E8B4849050_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Principal.WindowsIdentity
struct WindowsIdentity_t5BF1D8ED150D5E1E885C714AE384F94601DB028A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WindowsIdentity_t5BF1D8ED150D5E1E885C714AE384F94601DB028A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WindowsIdentity_t5BF1D8ED150D5E1E885C714AE384F94601DB028A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WindowsIdentity_t5BF1D8ED150D5E1E885C714AE384F94601DB028A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WindowsIdentity_t5BF1D8ED150D5E1E885C714AE384F94601DB028A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WindowsIdentity_t5BF1D8ED150D5E1E885C714AE384F94601DB028A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WindowsIdentity_t5BF1D8ED150D5E1E885C714AE384F94601DB028A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Principal.WindowsImpersonationContext
struct WindowsImpersonationContext_t2CA00990AF3A35087357A783D8D5C708A67293E1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WindowsImpersonationContext_t2CA00990AF3A35087357A783D8D5C708A67293E1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WindowsImpersonationContext_t2CA00990AF3A35087357A783D8D5C708A67293E1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WindowsImpersonationContext_t2CA00990AF3A35087357A783D8D5C708A67293E1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WindowsImpersonationContext_t2CA00990AF3A35087357A783D8D5C708A67293E1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WindowsImpersonationContext_t2CA00990AF3A35087357A783D8D5C708A67293E1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WindowsImpersonationContext_t2CA00990AF3A35087357A783D8D5C708A67293E1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings
struct WindowsMixedRealityCameraSettings_t88C6B375E46AB4D48219F3C8E154CC63C5EE7136_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WindowsMixedRealityCameraSettings_t88C6B375E46AB4D48219F3C8E154CC63C5EE7136_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WindowsMixedRealityCameraSettings_t88C6B375E46AB4D48219F3C8E154CC63C5EE7136_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WindowsMixedRealityCameraSettings_t88C6B375E46AB4D48219F3C8E154CC63C5EE7136_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WindowsMixedRealityCameraSettings_t88C6B375E46AB4D48219F3C8E154CC63C5EE7136(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WindowsMixedRealityCameraSettings_t88C6B375E46AB4D48219F3C8E154CC63C5EE7136_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WindowsMixedRealityCameraSettings_t88C6B375E46AB4D48219F3C8E154CC63C5EE7136_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager
struct WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider
struct WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver
struct WindowsMixedRealitySpatialMeshObserver_t180096751E0105AB1A2090F58A1C5574520EA7B2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WindowsMixedRealitySpatialMeshObserver_t180096751E0105AB1A2090F58A1C5574520EA7B2_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WindowsMixedRealitySpatialMeshObserver_t180096751E0105AB1A2090F58A1C5574520EA7B2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WindowsMixedRealitySpatialMeshObserver_t180096751E0105AB1A2090F58A1C5574520EA7B2_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WindowsMixedRealitySpatialMeshObserver_t180096751E0105AB1A2090F58A1C5574520EA7B2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WindowsMixedRealitySpatialMeshObserver_t180096751E0105AB1A2090F58A1C5574520EA7B2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WindowsMixedRealitySpatialMeshObserver_t180096751E0105AB1A2090F58A1C5574520EA7B2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer
struct WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ComCallableWrapper>, IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC, IBufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E, IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F, IAgileObject_t6F1702BEB08256952B124A9982A893DF328C2434
{
	inline WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAgileObject_t6F1702BEB08256952B124A9982A893DF328C2434::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAgileObject_t6F1702BEB08256952B124A9982A893DF328C2434*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBuffer_get_Capacity_m4FBAA7520F46F3CC6D15DCA72AE6DE7682A9A470(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			returnValue = WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Capacity_mFCD1D3C1A5DC7CB389927A5529BCD86518ED0AB5_inline(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IBuffer_get_Length_m5433B1C2AADBE9CE086F6DAE6E300C687A17DB19(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			returnValue = WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Length_mBC04A275BE71FE110C0A6B94A66A5F9726F6461F_inline(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IBuffer_put_Length_mF6D33616BBEEBF636AA7AF9EFA8525C3F721FE01(uint32_t ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_put_Length_m2B1B2192ECCDAE8762FC18CC6B16B4BC5551D95B(__thisValue, ___value0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IBufferByteAccess_GetBuffer_m8F6F0F782B7EA90FC90602224E5817AF96A568A9(intptr_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		intptr_t returnValue;
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			returnValue = WindowsRuntimeBuffer_System_Runtime_InteropServices_WindowsRuntime_IBufferByteAccess_GetBuffer_mAF0662BC19B20E3AC7377C080B057C9423B49014(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMarshal_GetUnmarshalClass_m8E46B958BDAD31CAB4469F61769C4A43CEE851B0(Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlFlags4, Guid_t * ___pCid5) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pCid5' to managed representation
		Guid_t  ____pCid5_empty;
		memset((&____pCid5_empty), 0, sizeof(____pCid5_empty));

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetUnmarshalClass_mF89EBF002568BC8D18BA6B28CE2A02A3C67D8426(__thisValue, ___riid0, ___pv1, ___dwDestContext2, ___pvDestContext3, ___mshlFlags4, (&____pCid5_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pCid5' back from managed representation
		*___pCid5 = ____pCid5_empty;

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMarshal_GetMarshalSizeMax_mF0954EED35E28BBA1CE5D782B9468FAFA2794CE7(Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlflags4, uint32_t* ___pSize5) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pSize5' to managed representation
		uint32_t ____pSize5_empty = 0;

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetMarshalSizeMax_m4140DA5FB36C45D0C1EC1352BEA8DE6696578064(__thisValue, ___riid0, ___pv1, ___dwDestContext2, ___pvDestContext3, ___mshlflags4, (&____pSize5_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pSize5' back from managed representation
		*___pSize5 = ____pSize5_empty;

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMarshal_MarshalInterface_mA481A30479B4E39647B608B7ED40FB7AEB302A68(intptr_t ___pStm0, Guid_t * ___riid1, intptr_t ___pv2, uint32_t ___dwDestContext3, intptr_t ___pvDestContext4, uint32_t ___mshlflags5) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_MarshalInterface_mB73D77AE608A5F1EF29F56F06C45DE1C04B8F639(__thisValue, ___pStm0, ___riid1, ___pv2, ___dwDestContext3, ___pvDestContext4, ___mshlflags5, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMarshal_UnmarshalInterface_m535C6AE1A1625CCBEE16A8AADD6FA0228668B5AF(intptr_t ___pStm0, Guid_t * ___riid1, intptr_t* ___ppv2) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___ppv2' to managed representation
		intptr_t ____ppv2_empty;
		memset((&____ppv2_empty), 0, sizeof(____ppv2_empty));

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_UnmarshalInterface_m71734EF46FAADB9CEE534A73D08FC73352F37B39(__thisValue, ___pStm0, ___riid1, (&____ppv2_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___ppv2' back from managed representation
		*___ppv2 = ____ppv2_empty;

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMarshal_ReleaseMarshalData_m99BFE51BA91305E8BDDBAE578DE0DE99A1FA626F(intptr_t ___pStm0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_ReleaseMarshalData_m1BBAA5FC9C261A979249C3720C077D910619B4BF(__thisValue, ___pStm0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMarshal_DisconnectObject_m7B4B9C315995DCCA208E1681D8747ED4005BAC30(uint32_t ___dwReserved0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __thisValue = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)GetManagedObjectInline();
			WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_DisconnectObject_mA7586ECB5656276267A0336CA96A2083B41B1BBC(__thisValue, ___dwReserved0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver
struct WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WindowsSceneUnderstandingObserver_tDB04B9F591AEAACDA073762886C40DFEE4E14340_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Windows.Input.WindowsSpeechInputProvider
struct WindowsSpeechInputProvider_tDA775DA7E17E2A78C8D26DF89F3A0F8FFB8C170E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WindowsSpeechInputProvider_tDA775DA7E17E2A78C8D26DF89F3A0F8FFB8C170E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WindowsSpeechInputProvider_tDA775DA7E17E2A78C8D26DF89F3A0F8FFB8C170E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WindowsSpeechInputProvider_tDA775DA7E17E2A78C8D26DF89F3A0F8FFB8C170E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WindowsSpeechInputProvider_tDA775DA7E17E2A78C8D26DF89F3A0F8FFB8C170E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WindowsSpeechInputProvider_tDA775DA7E17E2A78C8D26DF89F3A0F8FFB8C170E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WindowsSpeechInputProvider_tDA775DA7E17E2A78C8D26DF89F3A0F8FFB8C170E_ComCallableWrapper(obj));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Capacity_mFCD1D3C1A5DC7CB389927A5529BCD86518ED0AB5_inline (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__maxDataCapacity_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Length_mBC04A275BE71FE110C0A6B94A66A5F9726F6461F_inline (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__usefulDataLength_3();
		return L_0;
	}
}

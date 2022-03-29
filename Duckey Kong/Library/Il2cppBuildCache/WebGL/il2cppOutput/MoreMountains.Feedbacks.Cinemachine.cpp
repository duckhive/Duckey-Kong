#include "pch-cpp.hpp"

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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct VirtActionInvoker7
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericVirtActionInvoker7
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InterfaceActionInvoker7
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericInterfaceActionInvoker7
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};

// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension>
struct List_1_t13875FE3163CFA961C09134FFAA2E0903229691A;
// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable>
struct List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009;
// System.Collections.Generic.List`1<Cinemachine.CinemachineBrain/BrainFrame>
struct List_1_t7047292520C88A40E765EA61E967062F583F6C2A;
// System.Collections.Generic.List`1<Cinemachine.CinemachineImpulseManager/ImpulseEvent>
struct List_1_tBAF5EE7B3500D286126C3D55D2365CD744E3A4E2;
// UnityEngine.AnimationCurve[]
struct AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Cinemachine.CinemachineComponentBase[]
struct CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC;
// Cinemachine.CinemachineOrbitalTransposer[]
struct CinemachineOrbitalTransposerU5BU5D_t262EAE08AEDA55E53176DB1697F768E1DA37C2E4;
// Cinemachine.CinemachineVirtualCamera[]
struct CinemachineVirtualCameraU5BU5D_tC889EF06476C516ECD8E2A99BD4C4067B8F8E57A;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;
// Cinemachine.CinemachineCore/Stage[]
struct StageU5BU5D_t605193BD653BA57911AFE8A2D01B1D799F7BB949;
// Cinemachine.CinemachineFreeLook/Orbit[]
struct OrbitU5BU5D_t6E72D519BC4799C53639700DA84A0B5D9A8843C7;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// Cinemachine.CinemachineBasicMultiChannelPerlin
struct CinemachineBasicMultiChannelPerlin_t09A5B81525F473505BB264366B43E55C8FA143CF;
// Cinemachine.CinemachineBlend
struct CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C;
// Cinemachine.CinemachineBlenderSettings
struct CinemachineBlenderSettings_tCF3367AA417C05816117E15FE608928CAF40554F;
// Cinemachine.CinemachineBrain
struct CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83;
// Cinemachine.CinemachineFreeLook
struct CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F;
// Cinemachine.CinemachineImpulseDefinition
struct CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9;
// Cinemachine.CinemachineImpulseManager
struct CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E;
// Cinemachine.CinemachineImpulseSource
struct CinemachineImpulseSource_t7EFCA284734A8CB50F0B45CDDF6BB924DA73998D;
// Cinemachine.CinemachineVirtualCamera
struct CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C;
// Cinemachine.CinemachineVirtualCameraBase
struct CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Cinemachine.ICinemachineCamera
struct ICinemachineCamera_t6F02F958011535010196E7CDD88578BEDB9AE685;
// Cinemachine.ICinemachineTargetGroup
struct ICinemachineTargetGroup_t1A8D13688535CFE851EE667877C439AC8D1D38CC;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker
struct MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163;
// MoreMountains.FeedbacksForThirdParty.MMCinemachineClippingPlanesShaker
struct MMCinemachineClippingPlanesShaker_t3D80DEB9393559C031C6BF3D1C7AA06ED76E8962;
// MoreMountains.FeedbacksForThirdParty.MMCinemachineFieldOfViewShaker
struct MMCinemachineFieldOfViewShaker_t8C5DCA609EAC92EEC90058F0CFE7349460B67DDB;
// MoreMountains.FeedbacksForThirdParty.MMCinemachineFreeLookZoom
struct MMCinemachineFreeLookZoom_t4184663C570C00D1DC2EC451A06F3355A2BE2542;
// MoreMountains.FeedbacksForThirdParty.MMCinemachineOrthographicSizeShaker
struct MMCinemachineOrthographicSizeShaker_tA59A08A48FA9916DE2E68340FE49A991A786C53B;
// MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityBrainListener
struct MMCinemachinePriorityBrainListener_tF4122050D55252EF361F5BAACBB63E1C6DE6FF80;
// MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityListener
struct MMCinemachinePriorityListener_t294B0CDA8DD4599662A1D6F9968692DCA9D1A6F3;
// MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom
struct MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E;
// MoreMountains.FeedbacksForThirdParty.MMF_CinemachineImpulse
struct MMF_CinemachineImpulse_t8A2AA6B71A96E3CAAE15A2BE6C81A45E3EB27D81;
// MoreMountains.FeedbacksForThirdParty.MMF_CinemachineImpulseClear
struct MMF_CinemachineImpulseClear_tEABDB041B5FEE1FDA7AC572C757F417307CADD6B;
// MoreMountains.FeedbacksForThirdParty.MMF_CinemachineImpulseSource
struct MMF_CinemachineImpulseSource_t4F9673C229F72504229F2649DC2C1B2354C645D2;
// MoreMountains.FeedbacksForThirdParty.MMF_CinemachineTransition
struct MMF_CinemachineTransition_t42B21AC879EC6A99B2D1F828D0B797E1B93F990C;
// MoreMountains.Feedbacks.MMF_Feedback
struct MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06;
// MoreMountains.Feedbacks.MMF_Player
struct MMF_Player_tC899A947C0F4E42B7461FAB8A051855F7BEF0A7D;
// MoreMountains.Feedbacks.MMFeedback
struct MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4;
// MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineImpulse
struct MMFeedbackCinemachineImpulse_tD470D5F859B2CA5DCA02D467D6AEAA11D468DABB;
// MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineImpulseClear
struct MMFeedbackCinemachineImpulseClear_t874A01EE0274A6972291FFAF467F60ED3AEE47D2;
// MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineTransition
struct MMFeedbackCinemachineTransition_t6E131DC172B147B08C96B3ED6F9EF19A99E70A5B;
// MoreMountains.Feedbacks.MMFeedbackTiming
struct MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6;
// MoreMountains.Feedbacks.MMFeedbacks
struct MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914;
// MoreMountains.Feedbacks.MMSequence
struct MMSequence_t1E28CC4D7E62BA36AF7F110B2033372FBB54F88A;
// MoreMountains.Feedbacks.MMShaker
struct MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Cinemachine.NoiseSettings
struct NoiseSettings_tD51A3FC701AF692F4CFC059617906D6C31AA4397;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Cinemachine.SignalSourceAsset
struct SignalSourceAsset_tFFAC68BDCF8F378E0457B134CA66B4A72722D52B;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// Cinemachine.AxisState/IInputAxisProvider
struct IInputAxisProvider_t60E3751C2B79760C58FA84BC376D8A3DC1E7AE70;
// Cinemachine.CinemachineBrain/BrainEvent
struct BrainEvent_t7DDC9AFC269C95A82A9348F1F7120BA402DCFE5E;
// Cinemachine.CinemachineBrain/VcamActivatedEvent
struct VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296;
// Cinemachine.CinemachineFreeLook/CreateRigDelegate
struct CreateRigDelegate_t7FF9E13258FAF45CD7A591B792B1171596A16270;
// Cinemachine.CinemachineFreeLook/DestroyRigDelegate
struct DestroyRigDelegate_tEC6C3F9493E6C7AF161C5BE580A398B3C333ED49;
// Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate
struct CreatePipelineDelegate_tB2027A3AD25F49EFC2BE7B2872BB15C1B7856C19;
// Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate
struct DestroyPipelineDelegate_tA69D0FA40EDBF1EF43F75E7FE8A33D85F8DD1B28;
// MoreMountains.Feedbacks.MMCameraClippingPlanesShakeEvent/Delegate
struct Delegate_tB4E81FE04A8668FC7DEC066E526E461E23A9C691;
// MoreMountains.Feedbacks.MMCameraFieldOfViewShakeEvent/Delegate
struct Delegate_t48AE9BB71693BEE6E672E6488338BA364A814D73;
// MoreMountains.Feedbacks.MMCameraOrthographicSizeShakeEvent/Delegate
struct Delegate_t5BE222D6A1E18E8E78F7B9F81C6AEC2C7CF03FCD;
// MoreMountains.Feedbacks.MMCameraShakeEvent/Delegate
struct Delegate_t4C3689743AE14898C38CE0B0C0780290B304655A;
// MoreMountains.Feedbacks.MMCameraShakeStopEvent/Delegate
struct Delegate_t40EA96416BE4B536B0071884D5B9BC356FB0B7C5;
// MoreMountains.Feedbacks.MMCameraZoomEvent/Delegate
struct Delegate_tAFFC0495409F3E38D283E26C7E2DF6CDC19DFA62;
// MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker/<ShakeCameraCo>d__25
struct U3CShakeCameraCoU3Ed__25_tE09D4113AE143A7E3D05BC37395FC0E64132AD08;
// MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityBrainListener/<ResetBlendDefinition>d__8
struct U3CResetBlendDefinitionU3Ed__8_t242A6A1726EC5B7D590D593342C301A52CD43A82;
// MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityEvent/Delegate
struct Delegate_t3A4FFBD4695433763584A759E677E31CC6775217;

IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_t3A4FFBD4695433763584A759E677E31CC6775217_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_t40EA96416BE4B536B0071884D5B9BC356FB0B7C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_t48AE9BB71693BEE6E672E6488338BA364A814D73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_t4C3689743AE14898C38CE0B0C0780290B304655A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_t5BE222D6A1E18E8E78F7B9F81C6AEC2C7CF03FCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_tAFFC0495409F3E38D283E26C7E2DF6CDC19DFA62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_tB4E81FE04A8668FC7DEC066E526E461E23A9C691_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MMCinemachinePriorityEvent_t62637763357C70C2404C0F126567010921F509CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MMF_CinemachineImpulseClear_tEABDB041B5FEE1FDA7AC572C757F417307CADD6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MMF_CinemachineImpulseSource_t4F9673C229F72504229F2649DC2C1B2354C645D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MMF_CinemachineImpulse_t8A2AA6B71A96E3CAAE15A2BE6C81A45E3EB27D81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MMF_CinemachineTransition_t42B21AC879EC6A99B2D1F828D0B797E1B93F990C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MMFeedbackCinemachineImpulseClear_t874A01EE0274A6972291FFAF467F60ED3AEE47D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MMFeedbackCinemachineImpulse_tD470D5F859B2CA5DCA02D467D6AEAA11D468DABB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MMFeedbackCinemachineTransition_t6E131DC172B147B08C96B3ED6F9EF19A99E70A5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimescaleModes_t9BB44B0A2F1D4489D501D478A3CAF34DD53D0412_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CResetBlendDefinitionU3Ed__8_t242A6A1726EC5B7D590D593342C301A52CD43A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShakeCameraCoU3Ed__25_tE09D4113AE143A7E3D05BC37395FC0E64132AD08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral036E2B16FDE5294BC896AB6DC25A9ADF347C8375;
IL2CPP_EXTERN_C const RuntimeMethod* CinemachineVirtualCamera_GetCinemachineComponent_TisCinemachineBasicMultiChannelPerlin_t09A5B81525F473505BB264366B43E55C8FA143CF_m51441B43447FF6005ECD69F88F5F8B1F2889449B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83_m2A1B17232E3845E1A0E19D3B3A62281373C4A2DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F_m70D278C6A336E3099B1563C3B66477D03693802E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5_m06107BAD0F98AB92EEDD9CC81DCFDDAB29D7A27B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C_m9DCB48A9A82ED7FB1AEB541DE9E97D1A16CE111A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CResetBlendDefinitionU3Ed__8_System_Collections_IEnumerator_Reset_m0CB8C6611A15D8D24676865ECAAEEEB4D7F2F5BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShakeCameraCoU3Ed__25_System_Collections_IEnumerator_Reset_m95654D72F0098D7226D2B645840553EDF1BBC89C_RuntimeMethod_var;
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t8CDB1F7FABAD2C15958A827ADD2A59CCC3E333E6 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// Cinemachine.CinemachineImpulseManager
struct CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Cinemachine.CinemachineImpulseManager/ImpulseEvent> Cinemachine.CinemachineImpulseManager::m_ExpiredEvents
	List_1_tBAF5EE7B3500D286126C3D55D2365CD744E3A4E2 * ___m_ExpiredEvents_2;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineImpulseManager/ImpulseEvent> Cinemachine.CinemachineImpulseManager::m_ActiveEvents
	List_1_tBAF5EE7B3500D286126C3D55D2365CD744E3A4E2 * ___m_ActiveEvents_3;
	// System.Boolean Cinemachine.CinemachineImpulseManager::<IgnoreTimeScale>k__BackingField
	bool ___U3CIgnoreTimeScaleU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_m_ExpiredEvents_2() { return static_cast<int32_t>(offsetof(CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E, ___m_ExpiredEvents_2)); }
	inline List_1_tBAF5EE7B3500D286126C3D55D2365CD744E3A4E2 * get_m_ExpiredEvents_2() const { return ___m_ExpiredEvents_2; }
	inline List_1_tBAF5EE7B3500D286126C3D55D2365CD744E3A4E2 ** get_address_of_m_ExpiredEvents_2() { return &___m_ExpiredEvents_2; }
	inline void set_m_ExpiredEvents_2(List_1_tBAF5EE7B3500D286126C3D55D2365CD744E3A4E2 * value)
	{
		___m_ExpiredEvents_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExpiredEvents_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActiveEvents_3() { return static_cast<int32_t>(offsetof(CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E, ___m_ActiveEvents_3)); }
	inline List_1_tBAF5EE7B3500D286126C3D55D2365CD744E3A4E2 * get_m_ActiveEvents_3() const { return ___m_ActiveEvents_3; }
	inline List_1_tBAF5EE7B3500D286126C3D55D2365CD744E3A4E2 ** get_address_of_m_ActiveEvents_3() { return &___m_ActiveEvents_3; }
	inline void set_m_ActiveEvents_3(List_1_tBAF5EE7B3500D286126C3D55D2365CD744E3A4E2 * value)
	{
		___m_ActiveEvents_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActiveEvents_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIgnoreTimeScaleU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E, ___U3CIgnoreTimeScaleU3Ek__BackingField_4)); }
	inline bool get_U3CIgnoreTimeScaleU3Ek__BackingField_4() const { return ___U3CIgnoreTimeScaleU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIgnoreTimeScaleU3Ek__BackingField_4() { return &___U3CIgnoreTimeScaleU3Ek__BackingField_4; }
	inline void set_U3CIgnoreTimeScaleU3Ek__BackingField_4(bool value)
	{
		___U3CIgnoreTimeScaleU3Ek__BackingField_4 = value;
	}
};

struct CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E_StaticFields
{
public:
	// Cinemachine.CinemachineImpulseManager Cinemachine.CinemachineImpulseManager::sInstance
	CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E * ___sInstance_0;

public:
	inline static int32_t get_offset_of_sInstance_0() { return static_cast<int32_t>(offsetof(CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E_StaticFields, ___sInstance_0)); }
	inline CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E * get_sInstance_0() const { return ___sInstance_0; }
	inline CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E ** get_address_of_sInstance_0() { return &___sInstance_0; }
	inline void set_sInstance_0(CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E * value)
	{
		___sInstance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sInstance_0), (void*)value);
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker/<ShakeCameraCo>d__25
struct U3CShakeCameraCoU3Ed__25_tE09D4113AE143A7E3D05BC37395FC0E64132AD08  : public RuntimeObject
{
public:
	// System.Int32 MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker/<ShakeCameraCo>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker/<ShakeCameraCo>d__25::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker/<ShakeCameraCo>d__25::<>4__this
	MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163 * ___U3CU3E4__this_2;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker/<ShakeCameraCo>d__25::amplitude
	float ___amplitude_3;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker/<ShakeCameraCo>d__25::frequency
	float ___frequency_4;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker/<ShakeCameraCo>d__25::useUnscaledTime
	bool ___useUnscaledTime_5;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker/<ShakeCameraCo>d__25::infinite
	bool ___infinite_6;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker/<ShakeCameraCo>d__25::duration
	float ___duration_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShakeCameraCoU3Ed__25_tE09D4113AE143A7E3D05BC37395FC0E64132AD08, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CShakeCameraCoU3Ed__25_tE09D4113AE143A7E3D05BC37395FC0E64132AD08, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CShakeCameraCoU3Ed__25_tE09D4113AE143A7E3D05BC37395FC0E64132AD08, ___U3CU3E4__this_2)); }
	inline MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_amplitude_3() { return static_cast<int32_t>(offsetof(U3CShakeCameraCoU3Ed__25_tE09D4113AE143A7E3D05BC37395FC0E64132AD08, ___amplitude_3)); }
	inline float get_amplitude_3() const { return ___amplitude_3; }
	inline float* get_address_of_amplitude_3() { return &___amplitude_3; }
	inline void set_amplitude_3(float value)
	{
		___amplitude_3 = value;
	}

	inline static int32_t get_offset_of_frequency_4() { return static_cast<int32_t>(offsetof(U3CShakeCameraCoU3Ed__25_tE09D4113AE143A7E3D05BC37395FC0E64132AD08, ___frequency_4)); }
	inline float get_frequency_4() const { return ___frequency_4; }
	inline float* get_address_of_frequency_4() { return &___frequency_4; }
	inline void set_frequency_4(float value)
	{
		___frequency_4 = value;
	}

	inline static int32_t get_offset_of_useUnscaledTime_5() { return static_cast<int32_t>(offsetof(U3CShakeCameraCoU3Ed__25_tE09D4113AE143A7E3D05BC37395FC0E64132AD08, ___useUnscaledTime_5)); }
	inline bool get_useUnscaledTime_5() const { return ___useUnscaledTime_5; }
	inline bool* get_address_of_useUnscaledTime_5() { return &___useUnscaledTime_5; }
	inline void set_useUnscaledTime_5(bool value)
	{
		___useUnscaledTime_5 = value;
	}

	inline static int32_t get_offset_of_infinite_6() { return static_cast<int32_t>(offsetof(U3CShakeCameraCoU3Ed__25_tE09D4113AE143A7E3D05BC37395FC0E64132AD08, ___infinite_6)); }
	inline bool get_infinite_6() const { return ___infinite_6; }
	inline bool* get_address_of_infinite_6() { return &___infinite_6; }
	inline void set_infinite_6(bool value)
	{
		___infinite_6 = value;
	}

	inline static int32_t get_offset_of_duration_7() { return static_cast<int32_t>(offsetof(U3CShakeCameraCoU3Ed__25_tE09D4113AE143A7E3D05BC37395FC0E64132AD08, ___duration_7)); }
	inline float get_duration_7() const { return ___duration_7; }
	inline float* get_address_of_duration_7() { return &___duration_7; }
	inline void set_duration_7(float value)
	{
		___duration_7 = value;
	}
};


// MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityBrainListener/<ResetBlendDefinition>d__8
struct U3CResetBlendDefinitionU3Ed__8_t242A6A1726EC5B7D590D593342C301A52CD43A82  : public RuntimeObject
{
public:
	// System.Int32 MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityBrainListener/<ResetBlendDefinition>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityBrainListener/<ResetBlendDefinition>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityBrainListener MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityBrainListener/<ResetBlendDefinition>d__8::<>4__this
	MMCinemachinePriorityBrainListener_tF4122050D55252EF361F5BAACBB63E1C6DE6FF80 * ___U3CU3E4__this_2;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityBrainListener/<ResetBlendDefinition>d__8::delay
	float ___delay_3;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityBrainListener/<ResetBlendDefinition>d__8::<timer>5__2
	float ___U3CtimerU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CResetBlendDefinitionU3Ed__8_t242A6A1726EC5B7D590D593342C301A52CD43A82, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CResetBlendDefinitionU3Ed__8_t242A6A1726EC5B7D590D593342C301A52CD43A82, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CResetBlendDefinitionU3Ed__8_t242A6A1726EC5B7D590D593342C301A52CD43A82, ___U3CU3E4__this_2)); }
	inline MMCinemachinePriorityBrainListener_tF4122050D55252EF361F5BAACBB63E1C6DE6FF80 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MMCinemachinePriorityBrainListener_tF4122050D55252EF361F5BAACBB63E1C6DE6FF80 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MMCinemachinePriorityBrainListener_tF4122050D55252EF361F5BAACBB63E1C6DE6FF80 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_delay_3() { return static_cast<int32_t>(offsetof(U3CResetBlendDefinitionU3Ed__8_t242A6A1726EC5B7D590D593342C301A52CD43A82, ___delay_3)); }
	inline float get_delay_3() const { return ___delay_3; }
	inline float* get_address_of_delay_3() { return &___delay_3; }
	inline void set_delay_3(float value)
	{
		___delay_3 = value;
	}

	inline static int32_t get_offset_of_U3CtimerU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CResetBlendDefinitionU3Ed__8_t242A6A1726EC5B7D590D593342C301A52CD43A82, ___U3CtimerU3E5__2_4)); }
	inline float get_U3CtimerU3E5__2_4() const { return ___U3CtimerU3E5__2_4; }
	inline float* get_address_of_U3CtimerU3E5__2_4() { return &___U3CtimerU3E5__2_4; }
	inline void set_U3CtimerU3E5__2_4(float value)
	{
		___U3CtimerU3E5__2_4 = value;
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


// UnityEngine.Keyframe
struct Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}

	inline static int32_t get_offset_of_m_WeightedMode_4() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_WeightedMode_4)); }
	inline int32_t get_m_WeightedMode_4() const { return ___m_WeightedMode_4; }
	inline int32_t* get_address_of_m_WeightedMode_4() { return &___m_WeightedMode_4; }
	inline void set_m_WeightedMode_4(int32_t value)
	{
		___m_WeightedMode_4 = value;
	}

	inline static int32_t get_offset_of_m_InWeight_5() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_InWeight_5)); }
	inline float get_m_InWeight_5() const { return ___m_InWeight_5; }
	inline float* get_address_of_m_InWeight_5() { return &___m_InWeight_5; }
	inline void set_m_InWeight_5(float value)
	{
		___m_InWeight_5 = value;
	}

	inline static int32_t get_offset_of_m_OutWeight_6() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_OutWeight_6)); }
	inline float get_m_OutWeight_6() const { return ___m_OutWeight_6; }
	inline float* get_address_of_m_OutWeight_6() { return &___m_OutWeight_6; }
	inline void set_m_OutWeight_6(float value)
	{
		___m_OutWeight_6 = value;
	}
};


// MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityEvent
struct MMCinemachinePriorityEvent_t62637763357C70C2404C0F126567010921F509CF 
{
public:
	union
	{
		struct
		{
		};
		uint8_t MMCinemachinePriorityEvent_t62637763357C70C2404C0F126567010921F509CF__padding[1];
	};

public:
};

struct MMCinemachinePriorityEvent_t62637763357C70C2404C0F126567010921F509CF_StaticFields
{
public:
	// MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityEvent/Delegate MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityEvent::OnEvent
	Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * ___OnEvent_0;

public:
	inline static int32_t get_offset_of_OnEvent_0() { return static_cast<int32_t>(offsetof(MMCinemachinePriorityEvent_t62637763357C70C2404C0F126567010921F509CF_StaticFields, ___OnEvent_0)); }
	inline Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * get_OnEvent_0() const { return ___OnEvent_0; }
	inline Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 ** get_address_of_OnEvent_0() { return &___OnEvent_0; }
	inline void set_OnEvent_0(Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * value)
	{
		___OnEvent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnEvent_0), (void*)value);
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


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// Cinemachine.AxisState/Recentering
struct Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427 
{
public:
	// System.Boolean Cinemachine.AxisState/Recentering::m_enabled
	bool ___m_enabled_0;
	// System.Single Cinemachine.AxisState/Recentering::m_WaitTime
	float ___m_WaitTime_1;
	// System.Single Cinemachine.AxisState/Recentering::m_RecenteringTime
	float ___m_RecenteringTime_2;
	// System.Single Cinemachine.AxisState/Recentering::mLastAxisInputTime
	float ___mLastAxisInputTime_3;
	// System.Single Cinemachine.AxisState/Recentering::mRecenteringVelocity
	float ___mRecenteringVelocity_4;
	// System.Int32 Cinemachine.AxisState/Recentering::m_LegacyHeadingDefinition
	int32_t ___m_LegacyHeadingDefinition_5;
	// System.Int32 Cinemachine.AxisState/Recentering::m_LegacyVelocityFilterStrength
	int32_t ___m_LegacyVelocityFilterStrength_6;

public:
	inline static int32_t get_offset_of_m_enabled_0() { return static_cast<int32_t>(offsetof(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427, ___m_enabled_0)); }
	inline bool get_m_enabled_0() const { return ___m_enabled_0; }
	inline bool* get_address_of_m_enabled_0() { return &___m_enabled_0; }
	inline void set_m_enabled_0(bool value)
	{
		___m_enabled_0 = value;
	}

	inline static int32_t get_offset_of_m_WaitTime_1() { return static_cast<int32_t>(offsetof(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427, ___m_WaitTime_1)); }
	inline float get_m_WaitTime_1() const { return ___m_WaitTime_1; }
	inline float* get_address_of_m_WaitTime_1() { return &___m_WaitTime_1; }
	inline void set_m_WaitTime_1(float value)
	{
		___m_WaitTime_1 = value;
	}

	inline static int32_t get_offset_of_m_RecenteringTime_2() { return static_cast<int32_t>(offsetof(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427, ___m_RecenteringTime_2)); }
	inline float get_m_RecenteringTime_2() const { return ___m_RecenteringTime_2; }
	inline float* get_address_of_m_RecenteringTime_2() { return &___m_RecenteringTime_2; }
	inline void set_m_RecenteringTime_2(float value)
	{
		___m_RecenteringTime_2 = value;
	}

	inline static int32_t get_offset_of_mLastAxisInputTime_3() { return static_cast<int32_t>(offsetof(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427, ___mLastAxisInputTime_3)); }
	inline float get_mLastAxisInputTime_3() const { return ___mLastAxisInputTime_3; }
	inline float* get_address_of_mLastAxisInputTime_3() { return &___mLastAxisInputTime_3; }
	inline void set_mLastAxisInputTime_3(float value)
	{
		___mLastAxisInputTime_3 = value;
	}

	inline static int32_t get_offset_of_mRecenteringVelocity_4() { return static_cast<int32_t>(offsetof(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427, ___mRecenteringVelocity_4)); }
	inline float get_mRecenteringVelocity_4() const { return ___mRecenteringVelocity_4; }
	inline float* get_address_of_mRecenteringVelocity_4() { return &___mRecenteringVelocity_4; }
	inline void set_mRecenteringVelocity_4(float value)
	{
		___mRecenteringVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_LegacyHeadingDefinition_5() { return static_cast<int32_t>(offsetof(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427, ___m_LegacyHeadingDefinition_5)); }
	inline int32_t get_m_LegacyHeadingDefinition_5() const { return ___m_LegacyHeadingDefinition_5; }
	inline int32_t* get_address_of_m_LegacyHeadingDefinition_5() { return &___m_LegacyHeadingDefinition_5; }
	inline void set_m_LegacyHeadingDefinition_5(int32_t value)
	{
		___m_LegacyHeadingDefinition_5 = value;
	}

	inline static int32_t get_offset_of_m_LegacyVelocityFilterStrength_6() { return static_cast<int32_t>(offsetof(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427, ___m_LegacyVelocityFilterStrength_6)); }
	inline int32_t get_m_LegacyVelocityFilterStrength_6() const { return ___m_LegacyVelocityFilterStrength_6; }
	inline int32_t* get_address_of_m_LegacyVelocityFilterStrength_6() { return &___m_LegacyVelocityFilterStrength_6; }
	inline void set_m_LegacyVelocityFilterStrength_6(int32_t value)
	{
		___m_LegacyVelocityFilterStrength_6 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.AxisState/Recentering
struct Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427_marshaled_pinvoke
{
	int32_t ___m_enabled_0;
	float ___m_WaitTime_1;
	float ___m_RecenteringTime_2;
	float ___mLastAxisInputTime_3;
	float ___mRecenteringVelocity_4;
	int32_t ___m_LegacyHeadingDefinition_5;
	int32_t ___m_LegacyVelocityFilterStrength_6;
};
// Native definition for COM marshalling of Cinemachine.AxisState/Recentering
struct Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427_marshaled_com
{
	int32_t ___m_enabled_0;
	float ___m_WaitTime_1;
	float ___m_RecenteringTime_2;
	float ___mLastAxisInputTime_3;
	float ___mRecenteringVelocity_4;
	int32_t ___m_LegacyHeadingDefinition_5;
	int32_t ___m_LegacyVelocityFilterStrength_6;
};

// Cinemachine.CameraState/CustomBlendable
struct CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B 
{
public:
	// UnityEngine.Object Cinemachine.CameraState/CustomBlendable::m_Custom
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___m_Custom_0;
	// System.Single Cinemachine.CameraState/CustomBlendable::m_Weight
	float ___m_Weight_1;

public:
	inline static int32_t get_offset_of_m_Custom_0() { return static_cast<int32_t>(offsetof(CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B, ___m_Custom_0)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_m_Custom_0() const { return ___m_Custom_0; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_m_Custom_0() { return &___m_Custom_0; }
	inline void set_m_Custom_0(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___m_Custom_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Custom_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Weight_1() { return static_cast<int32_t>(offsetof(CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B, ___m_Weight_1)); }
	inline float get_m_Weight_1() const { return ___m_Weight_1; }
	inline float* get_address_of_m_Weight_1() { return &___m_Weight_1; }
	inline void set_m_Weight_1(float value)
	{
		___m_Weight_1 = value;
	}
};


// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// Cinemachine.LensSettings
struct LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA 
{
public:
	// System.Single Cinemachine.LensSettings::FieldOfView
	float ___FieldOfView_1;
	// System.Single Cinemachine.LensSettings::OrthographicSize
	float ___OrthographicSize_2;
	// System.Single Cinemachine.LensSettings::NearClipPlane
	float ___NearClipPlane_3;
	// System.Single Cinemachine.LensSettings::FarClipPlane
	float ___FarClipPlane_4;
	// System.Single Cinemachine.LensSettings::Dutch
	float ___Dutch_5;
	// System.Boolean Cinemachine.LensSettings::<Orthographic>k__BackingField
	bool ___U3COrthographicU3Ek__BackingField_6;
	// UnityEngine.Vector2 Cinemachine.LensSettings::<SensorSize>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CSensorSizeU3Ek__BackingField_7;
	// System.Boolean Cinemachine.LensSettings::<IsPhysicalCamera>k__BackingField
	bool ___U3CIsPhysicalCameraU3Ek__BackingField_8;
	// UnityEngine.Vector2 Cinemachine.LensSettings::LensShift
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___LensShift_9;

public:
	inline static int32_t get_offset_of_FieldOfView_1() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___FieldOfView_1)); }
	inline float get_FieldOfView_1() const { return ___FieldOfView_1; }
	inline float* get_address_of_FieldOfView_1() { return &___FieldOfView_1; }
	inline void set_FieldOfView_1(float value)
	{
		___FieldOfView_1 = value;
	}

	inline static int32_t get_offset_of_OrthographicSize_2() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___OrthographicSize_2)); }
	inline float get_OrthographicSize_2() const { return ___OrthographicSize_2; }
	inline float* get_address_of_OrthographicSize_2() { return &___OrthographicSize_2; }
	inline void set_OrthographicSize_2(float value)
	{
		___OrthographicSize_2 = value;
	}

	inline static int32_t get_offset_of_NearClipPlane_3() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___NearClipPlane_3)); }
	inline float get_NearClipPlane_3() const { return ___NearClipPlane_3; }
	inline float* get_address_of_NearClipPlane_3() { return &___NearClipPlane_3; }
	inline void set_NearClipPlane_3(float value)
	{
		___NearClipPlane_3 = value;
	}

	inline static int32_t get_offset_of_FarClipPlane_4() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___FarClipPlane_4)); }
	inline float get_FarClipPlane_4() const { return ___FarClipPlane_4; }
	inline float* get_address_of_FarClipPlane_4() { return &___FarClipPlane_4; }
	inline void set_FarClipPlane_4(float value)
	{
		___FarClipPlane_4 = value;
	}

	inline static int32_t get_offset_of_Dutch_5() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___Dutch_5)); }
	inline float get_Dutch_5() const { return ___Dutch_5; }
	inline float* get_address_of_Dutch_5() { return &___Dutch_5; }
	inline void set_Dutch_5(float value)
	{
		___Dutch_5 = value;
	}

	inline static int32_t get_offset_of_U3COrthographicU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___U3COrthographicU3Ek__BackingField_6)); }
	inline bool get_U3COrthographicU3Ek__BackingField_6() const { return ___U3COrthographicU3Ek__BackingField_6; }
	inline bool* get_address_of_U3COrthographicU3Ek__BackingField_6() { return &___U3COrthographicU3Ek__BackingField_6; }
	inline void set_U3COrthographicU3Ek__BackingField_6(bool value)
	{
		___U3COrthographicU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CSensorSizeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___U3CSensorSizeU3Ek__BackingField_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CSensorSizeU3Ek__BackingField_7() const { return ___U3CSensorSizeU3Ek__BackingField_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CSensorSizeU3Ek__BackingField_7() { return &___U3CSensorSizeU3Ek__BackingField_7; }
	inline void set_U3CSensorSizeU3Ek__BackingField_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CSensorSizeU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIsPhysicalCameraU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___U3CIsPhysicalCameraU3Ek__BackingField_8)); }
	inline bool get_U3CIsPhysicalCameraU3Ek__BackingField_8() const { return ___U3CIsPhysicalCameraU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsPhysicalCameraU3Ek__BackingField_8() { return &___U3CIsPhysicalCameraU3Ek__BackingField_8; }
	inline void set_U3CIsPhysicalCameraU3Ek__BackingField_8(bool value)
	{
		___U3CIsPhysicalCameraU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_LensShift_9() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___LensShift_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_LensShift_9() const { return ___LensShift_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_LensShift_9() { return &___LensShift_9; }
	inline void set_LensShift_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___LensShift_9 = value;
	}
};

struct LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA_StaticFields
{
public:
	// Cinemachine.LensSettings Cinemachine.LensSettings::Default
	LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA_StaticFields, ___Default_0)); }
	inline LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  get_Default_0() const { return ___Default_0; }
	inline LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  value)
	{
		___Default_0 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.LensSettings
struct LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA_marshaled_pinvoke
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___U3COrthographicU3Ek__BackingField_6;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CSensorSizeU3Ek__BackingField_7;
	int32_t ___U3CIsPhysicalCameraU3Ek__BackingField_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___LensShift_9;
};
// Native definition for COM marshalling of Cinemachine.LensSettings
struct LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA_marshaled_com
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___U3COrthographicU3Ek__BackingField_6;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CSensorSizeU3Ek__BackingField_7;
	int32_t ___U3CIsPhysicalCameraU3Ek__BackingField_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___LensShift_9;
};

// MoreMountains.Feedbacks.MMCameraZoomModes
struct MMCameraZoomModes_t35E23941EB6FE08706E8D6CFDE8BBDA6CCF363C4 
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMCameraZoomModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MMCameraZoomModes_t35E23941EB6FE08706E8D6CFDE8BBDA6CCF363C4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.Feedbacks.MMF_Feedback
struct MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06  : public RuntimeObject
{
public:
	// System.Boolean MoreMountains.Feedbacks.MMF_Feedback::Active
	bool ___Active_0;
	// System.Int32 MoreMountains.Feedbacks.MMF_Feedback::UniqueID
	int32_t ___UniqueID_1;
	// System.String MoreMountains.Feedbacks.MMF_Feedback::Label
	String_t* ___Label_2;
	// System.Int32 MoreMountains.Feedbacks.MMF_Feedback::Channel
	int32_t ___Channel_3;
	// System.Single MoreMountains.Feedbacks.MMF_Feedback::Chance
	float ___Chance_4;
	// UnityEngine.Color MoreMountains.Feedbacks.MMF_Feedback::DisplayColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___DisplayColor_5;
	// MoreMountains.Feedbacks.MMFeedbackTiming MoreMountains.Feedbacks.MMF_Feedback::Timing
	MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6 * ___Timing_6;
	// MoreMountains.Feedbacks.MMF_Player MoreMountains.Feedbacks.MMF_Feedback::Owner
	MMF_Player_tC899A947C0F4E42B7461FAB8A051855F7BEF0A7D * ___Owner_7;
	// System.Boolean MoreMountains.Feedbacks.MMF_Feedback::DebugActive
	bool ___DebugActive_8;
	// System.Boolean MoreMountains.Feedbacks.MMF_Feedback::<ScriptDrivenPause>k__BackingField
	bool ___U3CScriptDrivenPauseU3Ek__BackingField_9;
	// System.Single MoreMountains.Feedbacks.MMF_Feedback::<ScriptDrivenPauseAutoResume>k__BackingField
	float ___U3CScriptDrivenPauseAutoResumeU3Ek__BackingField_10;
	// System.Boolean MoreMountains.Feedbacks.MMF_Feedback::<IsPlaying>k__BackingField
	bool ___U3CIsPlayingU3Ek__BackingField_11;
	// System.Single MoreMountains.Feedbacks.MMF_Feedback::_lastPlayTimestamp
	float ____lastPlayTimestamp_12;
	// System.Int32 MoreMountains.Feedbacks.MMF_Feedback::_playsLeft
	int32_t ____playsLeft_13;
	// System.Boolean MoreMountains.Feedbacks.MMF_Feedback::_initialized
	bool ____initialized_14;
	// UnityEngine.Coroutine MoreMountains.Feedbacks.MMF_Feedback::_playCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____playCoroutine_15;
	// UnityEngine.Coroutine MoreMountains.Feedbacks.MMF_Feedback::_infinitePlayCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____infinitePlayCoroutine_16;
	// UnityEngine.Coroutine MoreMountains.Feedbacks.MMF_Feedback::_sequenceCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____sequenceCoroutine_17;
	// UnityEngine.Coroutine MoreMountains.Feedbacks.MMF_Feedback::_repeatedPlayCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____repeatedPlayCoroutine_18;
	// System.Boolean MoreMountains.Feedbacks.MMF_Feedback::_requiresSetup
	bool ____requiresSetup_19;
	// System.String MoreMountains.Feedbacks.MMF_Feedback::_requiredTarget
	String_t* ____requiredTarget_20;
	// System.Int32 MoreMountains.Feedbacks.MMF_Feedback::_sequenceTrackID
	int32_t ____sequenceTrackID_21;
	// System.Single MoreMountains.Feedbacks.MMF_Feedback::_beatInterval
	float ____beatInterval_22;
	// System.Boolean MoreMountains.Feedbacks.MMF_Feedback::BeatThisFrame
	bool ___BeatThisFrame_23;
	// System.Int32 MoreMountains.Feedbacks.MMF_Feedback::LastBeatIndex
	int32_t ___LastBeatIndex_24;
	// System.Int32 MoreMountains.Feedbacks.MMF_Feedback::CurrentSequenceIndex
	int32_t ___CurrentSequenceIndex_25;
	// System.Single MoreMountains.Feedbacks.MMF_Feedback::LastBeatTimestamp
	float ___LastBeatTimestamp_26;

public:
	inline static int32_t get_offset_of_Active_0() { return static_cast<int32_t>(offsetof(MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06, ___Active_0)); }
	inline bool get_Active_0() const { return ___Active_0; }
	inline bool* get_address_of_Active_0() { return &___Active_0; }
	inline void set_Active_0(bool value)
	{
		___Active_0 = value;
	}

	inline static int32_t get_offset_of_UniqueID_1() { return static_cast<int32_t>(offsetof(MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06, ___UniqueID_1)); }
	inline int32_t get_UniqueID_1() const { return ___UniqueID_1; }
	inline int32_t* get_address_of_UniqueID_1() { return &___UniqueID_1; }
	inline void set_UniqueID_1(int32_t value)
	{
		___UniqueID_1 = value;
	}

	inline static int32_t get_offset_of_Label_2() { return static_cast<int32_t>(offsetof(MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06, ___Label_2)); }
	inline String_t* get_Label_2() const { return ___Label_2; }
	inline String_t** get_address_of_Label_2() { return &___Label_2; }
	inline void set_Label_2(String_t* value)
	{
		___Label_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Label_2), (void*)value);
	}

	inline static int32_t get_offset_of_Channel_3() { return static_cast<int32_t>(offsetof(MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06, ___Channel_3)); }
	inline int32_t get_Channel_3() const { return ___Channel_3; }
	inline int32_t* get_address_of_Channel_3() { return &___Channel_3; }
	inline void set_Channel_3(int32_t value)
	{
		___Channel_3 = value;
	}

	inline static int32_t get_offset_of_Chance_4() { return static_cast<int32_t>(offsetof(MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06, ___Chance_4)); }
	inline float get_Chance_4() const { return ___Chance_4; }
	inline float* get_address_of_Chance_4() { return &___Chance_4; }
	inline void set_Chance_4(float value)
	{
		___Chance_4 = value;
	}

	inline static int32_t get_offset_of_DisplayColor_5() { return static_cast<int32_t>(offsetof(MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06, ___DisplayColor_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_DisplayColor_5() const { return ___DisplayColor_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_DisplayColor_5() { return &___DisplayColor_5; }
	inline void set_DisplayColor_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___DisplayColor_5 = value;
	}

	inline static int32_t get_offset_of_Timing_6() { return static_cast<int32_t>(offsetof(MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06, ___Timing_6)); }
	inline MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6 * get_Timing_6() const { return ___Timing_6; }
	inline MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6 ** get_address_of_Timing_6() { return &___Timing_6; }
	inline void set_Timing_6(MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6 * value)
	{
		___Timing_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Timing_6), (void*)value);
	}

	inline static int32_t get_offset_of_Owner_7() { return static_cast<int32_t>(offsetof(MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06, ___Owner_7)); }
	inline MMF_Player_tC899A947C0F4E42B7461FAB8A051855F7BEF0A7D * get_Owner_7() const { return ___Owner_7; }
	inline MMF_Player_tC899A947C0F4E42B7461FAB8A051855F7BEF0A7D ** get_address_of_Owner_7() { return &___Owner_7; }
	inline void set_Owner_7(MMF_Player_tC899A947C0F4E42B7461FAB8A051855F7BEF0A7D * value)
	{
		___Owner_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Owner_7), (void*)value);
	}

	inline static int32_t get_offset_of_DebugActive_8() { return static_cast<int32_t>(offsetof(MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06, ___DebugActive_8)); }
	inline bool get_DebugActive_8() const { return ___DebugActive_8; }
	inline bool* get_address_of_DebugActive_8() { return &___DebugActive_8; }
	inline void set_DebugActive_8(bool value)
	{
		___DebugActive_8 = value;
	}

	inline static int32_t get_offset_of_U3CScriptDrivenPauseU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06, ___U3CScriptDrivenPauseU3Ek__BackingField_9)); }
	inline bool get_U3CScriptDrivenPauseU3Ek__BackingField_9() const { return ___U3CScriptDrivenPauseU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CScriptDrivenPauseU3Ek__BackingField_9() { return &___U3CScriptDrivenPauseU3Ek__BackingField_9; }
	inline void set_U3CScriptDrivenPauseU3Ek__BackingField_9(bool value)
	{
		___U3CScriptDrivenPauseU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CScriptDrivenPauseAutoResumeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06, ___U3CScriptDrivenPauseAutoResumeU3Ek__BackingField_10)); }
	inline float get_U3CScriptDrivenPauseAutoResumeU3Ek__BackingField_10() const { return ___U3CScriptDrivenPauseAutoResumeU3Ek__BackingField_10; }
	inline float* get_address_of_U3CScriptDrivenPauseAutoResumeU3Ek__BackingField_10() { return &___U3CScriptDrivenPauseAutoResumeU3Ek__BackingField_10; }
	inline void set_U3CScriptDrivenPauseAutoResumeU3Ek__BackingField_10(float value)
	{
		___U3CScriptDrivenPauseAutoResumeU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CIsPlayingU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06, ___U3CIsPlayingU3Ek__BackingField_11)); }
	inline bool get_U3CIsPlayingU3Ek__BackingField_11() const { return ___U3CIsPlayingU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CIsPlayingU3Ek__BackingField_11() { return &___U3CIsPlayingU3Ek__BackingField_11; }
	inline void set_U3CIsPlayingU3Ek__BackingField_11(bool value)
	{
		___U3CIsPlayingU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of__lastPlayTimestamp_12() { return static_cast<int32_t>(offsetof(MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06, ____lastPlayTimestamp_12)); }
	inline float get__lastPlayTimestamp_12() const { return ____lastPlayTimestamp_12; }
	inline float* get_address_of__lastPlayTimestamp_12() { return &____lastPlayTimestamp_12; }
	inline void set__lastPlayTimestamp_12(float value)
	{
		____lastPlayTimestamp_12 = value;
	}

	inline static int32_t get_offset_of__playsLeft_13() { return static_cast<int32_t>(offsetof(MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06, ____playsLeft_13)); }
	inline int32_t get__playsLeft_13() const { return ____playsLeft_13; }
	inline int32_t* get_address_of__playsLeft_13() { return &____playsLeft_13; }
	inline void set__playsLeft_13(int32_t value)
	{
		____playsLeft_13 = value;
	}

	inline static int32_t get_offset_of__initialized_14() { return static_cast<int32_t>(offsetof(MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06, ____initialized_14)); }
	inline bool get__initialized_14() const { return ____initialized_14; }
	inline bool* get_address_of__initialized_14() { return &____initialized_14; }
	inline void set__initialized_14(bool value)
	{
		____initialized_14 = value;
	}

	inline static int32_t get_offset_of__playCoroutine_15() { return static_cast<int32_t>(offsetof(MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06, ____playCoroutine_15)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__playCoroutine_15() const { return ____playCoroutine_15; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__playCoroutine_15() { return &____playCoroutine_15; }
	inline void set__playCoroutine_15(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____playCoroutine_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____playCoroutine_15), (void*)value);
	}

	inline static int32_t get_offset_of__infinitePlayCoroutine_16() { return static_cast<int32_t>(offsetof(MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06, ____infinitePlayCoroutine_16)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__infinitePlayCoroutine_16() const { return ____infinitePlayCoroutine_16; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__infinitePlayCoroutine_16() { return &____infinitePlayCoroutine_16; }
	inline void set__infinitePlayCoroutine_16(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____infinitePlayCoroutine_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____infinitePlayCoroutine_16), (void*)value);
	}

	inline static int32_t get_offset_of__sequenceCoroutine_17() { return static_cast<int32_t>(offsetof(MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06, ____sequenceCoroutine_17)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__sequenceCoroutine_17() const { return ____sequenceCoroutine_17; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__sequenceCoroutine_17() { return &____sequenceCoroutine_17; }
	inline void set__sequenceCoroutine_17(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____sequenceCoroutine_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sequenceCoroutine_17), (void*)value);
	}

	inline static int32_t get_offset_of__repeatedPlayCoroutine_18() { return static_cast<int32_t>(offsetof(MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06, ____repeatedPlayCoroutine_18)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__repeatedPlayCoroutine_18() const { return ____repeatedPlayCoroutine_18; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__repeatedPlayCoroutine_18() { return &____repeatedPlayCoroutine_18; }
	inline void set__repeatedPlayCoroutine_18(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____repeatedPlayCoroutine_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____repeatedPlayCoroutine_18), (void*)value);
	}

	inline static int32_t get_offset_of__requiresSetup_19() { return static_cast<int32_t>(offsetof(MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06, ____requiresSetup_19)); }
	inline bool get__requiresSetup_19() const { return ____requiresSetup_19; }
	inline bool* get_address_of__requiresSetup_19() { return &____requiresSetup_19; }
	inline void set__requiresSetup_19(bool value)
	{
		____requiresSetup_19 = value;
	}

	inline static int32_t get_offset_of__requiredTarget_20() { return static_cast<int32_t>(offsetof(MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06, ____requiredTarget_20)); }
	inline String_t* get__requiredTarget_20() const { return ____requiredTarget_20; }
	inline String_t** get_address_of__requiredTarget_20() { return &____requiredTarget_20; }
	inline void set__requiredTarget_20(String_t* value)
	{
		____requiredTarget_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____requiredTarget_20), (void*)value);
	}

	inline static int32_t get_offset_of__sequenceTrackID_21() { return static_cast<int32_t>(offsetof(MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06, ____sequenceTrackID_21)); }
	inline int32_t get__sequenceTrackID_21() const { return ____sequenceTrackID_21; }
	inline int32_t* get_address_of__sequenceTrackID_21() { return &____sequenceTrackID_21; }
	inline void set__sequenceTrackID_21(int32_t value)
	{
		____sequenceTrackID_21 = value;
	}

	inline static int32_t get_offset_of__beatInterval_22() { return static_cast<int32_t>(offsetof(MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06, ____beatInterval_22)); }
	inline float get__beatInterval_22() const { return ____beatInterval_22; }
	inline float* get_address_of__beatInterval_22() { return &____beatInterval_22; }
	inline void set__beatInterval_22(float value)
	{
		____beatInterval_22 = value;
	}

	inline static int32_t get_offset_of_BeatThisFrame_23() { return static_cast<int32_t>(offsetof(MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06, ___BeatThisFrame_23)); }
	inline bool get_BeatThisFrame_23() const { return ___BeatThisFrame_23; }
	inline bool* get_address_of_BeatThisFrame_23() { return &___BeatThisFrame_23; }
	inline void set_BeatThisFrame_23(bool value)
	{
		___BeatThisFrame_23 = value;
	}

	inline static int32_t get_offset_of_LastBeatIndex_24() { return static_cast<int32_t>(offsetof(MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06, ___LastBeatIndex_24)); }
	inline int32_t get_LastBeatIndex_24() const { return ___LastBeatIndex_24; }
	inline int32_t* get_address_of_LastBeatIndex_24() { return &___LastBeatIndex_24; }
	inline void set_LastBeatIndex_24(int32_t value)
	{
		___LastBeatIndex_24 = value;
	}

	inline static int32_t get_offset_of_CurrentSequenceIndex_25() { return static_cast<int32_t>(offsetof(MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06, ___CurrentSequenceIndex_25)); }
	inline int32_t get_CurrentSequenceIndex_25() const { return ___CurrentSequenceIndex_25; }
	inline int32_t* get_address_of_CurrentSequenceIndex_25() { return &___CurrentSequenceIndex_25; }
	inline void set_CurrentSequenceIndex_25(int32_t value)
	{
		___CurrentSequenceIndex_25 = value;
	}

	inline static int32_t get_offset_of_LastBeatTimestamp_26() { return static_cast<int32_t>(offsetof(MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06, ___LastBeatTimestamp_26)); }
	inline float get_LastBeatTimestamp_26() const { return ___LastBeatTimestamp_26; }
	inline float* get_address_of_LastBeatTimestamp_26() { return &___LastBeatTimestamp_26; }
	inline void set_LastBeatTimestamp_26(float value)
	{
		___LastBeatTimestamp_26 = value;
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

// MoreMountains.Feedbacks.TimescaleModes
struct TimescaleModes_t9BB44B0A2F1D4489D501D478A3CAF34DD53D0412 
{
public:
	// System.Int32 MoreMountains.Feedbacks.TimescaleModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimescaleModes_t9BB44B0A2F1D4489D501D478A3CAF34DD53D0412, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.AxisState/SpeedMode
struct SpeedMode_t7371A14D833762D166BB6C190C37DB1C30D053BB 
{
public:
	// System.Int32 Cinemachine.AxisState/SpeedMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpeedMode_t7371A14D833762D166BB6C190C37DB1C30D053BB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CameraState/BlendHintValue
struct BlendHintValue_t7E87A2F98F21271FE108514B78A38754BEBE94F4 
{
public:
	// System.Int32 Cinemachine.CameraState/BlendHintValue::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlendHintValue_t7E87A2F98F21271FE108514B78A38754BEBE94F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineBlendDefinition/Style
struct Style_t710EA49EB59E246B2C5DC218BDC1352DABAC757E 
{
public:
	// System.Int32 Cinemachine.CinemachineBlendDefinition/Style::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Style_t710EA49EB59E246B2C5DC218BDC1352DABAC757E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineBrain/BrainUpdateMethod
struct BrainUpdateMethod_t38DCF33A6BB4E3829652F644BDC79617BBBE6AEF 
{
public:
	// System.Int32 Cinemachine.CinemachineBrain/BrainUpdateMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BrainUpdateMethod_t38DCF33A6BB4E3829652F644BDC79617BBBE6AEF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineBrain/UpdateMethod
struct UpdateMethod_t2BC8740E83444F42609FCB121D59B2B147B7E2EA 
{
public:
	// System.Int32 Cinemachine.CinemachineBrain/UpdateMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateMethod_t2BC8740E83444F42609FCB121D59B2B147B7E2EA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineImpulseDefinition/RepeatMode
struct RepeatMode_t91F45490E5F0A6E07F658AE317B7016E34D7BDE0 
{
public:
	// System.Int32 Cinemachine.CinemachineImpulseDefinition/RepeatMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RepeatMode_t91F45490E5F0A6E07F658AE317B7016E34D7BDE0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineTransposer/BindingMode
struct BindingMode_tAE1CC7E6A8544E38A9E5D96BF5B0171B038AE196 
{
public:
	// System.Int32 Cinemachine.CinemachineTransposer/BindingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingMode_tAE1CC7E6A8544E38A9E5D96BF5B0171B038AE196, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineVirtualCameraBase/BlendHint
struct BlendHint_t9B1FFA41B35EC74367AB4D7A1AE2A4D1FE29B7CE 
{
public:
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase/BlendHint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlendHint_t9B1FFA41B35EC74367AB4D7A1AE2A4D1FE29B7CE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineVirtualCameraBase/StandbyUpdateMode
struct StandbyUpdateMode_t60D677E92B072D6B19C7F69C3DD753EB3457F3A5 
{
public:
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase/StandbyUpdateMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StandbyUpdateMode_t60D677E92B072D6B19C7F69C3DD753EB3457F3A5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.FeedbacksForThirdParty.MMF_CinemachineTransition/Modes
struct Modes_t330D4327F35C9ABBBCFC28405070F0C09F09D103 
{
public:
	// System.Int32 MoreMountains.FeedbacksForThirdParty.MMF_CinemachineTransition/Modes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Modes_t330D4327F35C9ABBBCFC28405070F0C09F09D103, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineTransition/Modes
struct Modes_t50BE76650889383B3208520336055F3D1E8ACF9D 
{
public:
	// System.Int32 MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineTransition/Modes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Modes_t50BE76650889383B3208520336055F3D1E8ACF9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.Feedbacks.MMFeedbackTiming/MMFeedbacksDirectionConditions
struct MMFeedbacksDirectionConditions_t34D4A1D0D8FB230B7400FFE3E172A76F8E27413A 
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMFeedbackTiming/MMFeedbacksDirectionConditions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MMFeedbacksDirectionConditions_t34D4A1D0D8FB230B7400FFE3E172A76F8E27413A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.Feedbacks.MMFeedbackTiming/PlayDirections
struct PlayDirections_tAFB208E21C6EBC665CE57841DF3E8457BF56A5B7 
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMFeedbackTiming/PlayDirections::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayDirections_tAFB208E21C6EBC665CE57841DF3E8457BF56A5B7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineImpulseManager/ImpulseEvent/DirectionMode
struct DirectionMode_tEAFCEDA22D8DA3C413D53421BA03A1FA4522594B 
{
public:
	// System.Int32 Cinemachine.CinemachineImpulseManager/ImpulseEvent/DirectionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DirectionMode_tEAFCEDA22D8DA3C413D53421BA03A1FA4522594B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineImpulseManager/ImpulseEvent/DissipationMode
struct DissipationMode_t074A13150A88E7F7AE19FB05A8EE8D21BCDE186F 
{
public:
	// System.Int32 Cinemachine.CinemachineImpulseManager/ImpulseEvent/DissipationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DissipationMode_t074A13150A88E7F7AE19FB05A8EE8D21BCDE186F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineOrbitalTransposer/Heading/HeadingDefinition
struct HeadingDefinition_tEF350573F75F64F0AED93E50690DBDBA99343122 
{
public:
	// System.Int32 Cinemachine.CinemachineOrbitalTransposer/Heading/HeadingDefinition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HeadingDefinition_tEF350573F75F64F0AED93E50690DBDBA99343122, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.AxisState
struct AxisState_t376D19829A676B98933979F42845F6476071DDE8 
{
public:
	// System.Single Cinemachine.AxisState::Value
	float ___Value_0;
	// Cinemachine.AxisState/SpeedMode Cinemachine.AxisState::m_SpeedMode
	int32_t ___m_SpeedMode_1;
	// System.Single Cinemachine.AxisState::m_MaxSpeed
	float ___m_MaxSpeed_2;
	// System.Single Cinemachine.AxisState::m_AccelTime
	float ___m_AccelTime_3;
	// System.Single Cinemachine.AxisState::m_DecelTime
	float ___m_DecelTime_4;
	// System.String Cinemachine.AxisState::m_InputAxisName
	String_t* ___m_InputAxisName_5;
	// System.Single Cinemachine.AxisState::m_InputAxisValue
	float ___m_InputAxisValue_6;
	// System.Boolean Cinemachine.AxisState::m_InvertInput
	bool ___m_InvertInput_7;
	// System.Single Cinemachine.AxisState::m_MinValue
	float ___m_MinValue_8;
	// System.Single Cinemachine.AxisState::m_MaxValue
	float ___m_MaxValue_9;
	// System.Boolean Cinemachine.AxisState::m_Wrap
	bool ___m_Wrap_10;
	// Cinemachine.AxisState/Recentering Cinemachine.AxisState::m_Recentering
	Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  ___m_Recentering_11;
	// System.Single Cinemachine.AxisState::m_CurrentSpeed
	float ___m_CurrentSpeed_12;
	// System.Single Cinemachine.AxisState::m_LastUpdateTime
	float ___m_LastUpdateTime_13;
	// System.Int32 Cinemachine.AxisState::m_LastUpdateFrame
	int32_t ___m_LastUpdateFrame_14;
	// Cinemachine.AxisState/IInputAxisProvider Cinemachine.AxisState::m_InputAxisProvider
	RuntimeObject* ___m_InputAxisProvider_16;
	// System.Int32 Cinemachine.AxisState::m_InputAxisIndex
	int32_t ___m_InputAxisIndex_17;
	// System.Boolean Cinemachine.AxisState::<ValueRangeLocked>k__BackingField
	bool ___U3CValueRangeLockedU3Ek__BackingField_18;
	// System.Boolean Cinemachine.AxisState::<HasRecentering>k__BackingField
	bool ___U3CHasRecenteringU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___Value_0)); }
	inline float get_Value_0() const { return ___Value_0; }
	inline float* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(float value)
	{
		___Value_0 = value;
	}

	inline static int32_t get_offset_of_m_SpeedMode_1() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_SpeedMode_1)); }
	inline int32_t get_m_SpeedMode_1() const { return ___m_SpeedMode_1; }
	inline int32_t* get_address_of_m_SpeedMode_1() { return &___m_SpeedMode_1; }
	inline void set_m_SpeedMode_1(int32_t value)
	{
		___m_SpeedMode_1 = value;
	}

	inline static int32_t get_offset_of_m_MaxSpeed_2() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_MaxSpeed_2)); }
	inline float get_m_MaxSpeed_2() const { return ___m_MaxSpeed_2; }
	inline float* get_address_of_m_MaxSpeed_2() { return &___m_MaxSpeed_2; }
	inline void set_m_MaxSpeed_2(float value)
	{
		___m_MaxSpeed_2 = value;
	}

	inline static int32_t get_offset_of_m_AccelTime_3() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_AccelTime_3)); }
	inline float get_m_AccelTime_3() const { return ___m_AccelTime_3; }
	inline float* get_address_of_m_AccelTime_3() { return &___m_AccelTime_3; }
	inline void set_m_AccelTime_3(float value)
	{
		___m_AccelTime_3 = value;
	}

	inline static int32_t get_offset_of_m_DecelTime_4() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_DecelTime_4)); }
	inline float get_m_DecelTime_4() const { return ___m_DecelTime_4; }
	inline float* get_address_of_m_DecelTime_4() { return &___m_DecelTime_4; }
	inline void set_m_DecelTime_4(float value)
	{
		___m_DecelTime_4 = value;
	}

	inline static int32_t get_offset_of_m_InputAxisName_5() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_InputAxisName_5)); }
	inline String_t* get_m_InputAxisName_5() const { return ___m_InputAxisName_5; }
	inline String_t** get_address_of_m_InputAxisName_5() { return &___m_InputAxisName_5; }
	inline void set_m_InputAxisName_5(String_t* value)
	{
		___m_InputAxisName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputAxisName_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputAxisValue_6() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_InputAxisValue_6)); }
	inline float get_m_InputAxisValue_6() const { return ___m_InputAxisValue_6; }
	inline float* get_address_of_m_InputAxisValue_6() { return &___m_InputAxisValue_6; }
	inline void set_m_InputAxisValue_6(float value)
	{
		___m_InputAxisValue_6 = value;
	}

	inline static int32_t get_offset_of_m_InvertInput_7() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_InvertInput_7)); }
	inline bool get_m_InvertInput_7() const { return ___m_InvertInput_7; }
	inline bool* get_address_of_m_InvertInput_7() { return &___m_InvertInput_7; }
	inline void set_m_InvertInput_7(bool value)
	{
		___m_InvertInput_7 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_8() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_MinValue_8)); }
	inline float get_m_MinValue_8() const { return ___m_MinValue_8; }
	inline float* get_address_of_m_MinValue_8() { return &___m_MinValue_8; }
	inline void set_m_MinValue_8(float value)
	{
		___m_MinValue_8 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_9() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_MaxValue_9)); }
	inline float get_m_MaxValue_9() const { return ___m_MaxValue_9; }
	inline float* get_address_of_m_MaxValue_9() { return &___m_MaxValue_9; }
	inline void set_m_MaxValue_9(float value)
	{
		___m_MaxValue_9 = value;
	}

	inline static int32_t get_offset_of_m_Wrap_10() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_Wrap_10)); }
	inline bool get_m_Wrap_10() const { return ___m_Wrap_10; }
	inline bool* get_address_of_m_Wrap_10() { return &___m_Wrap_10; }
	inline void set_m_Wrap_10(bool value)
	{
		___m_Wrap_10 = value;
	}

	inline static int32_t get_offset_of_m_Recentering_11() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_Recentering_11)); }
	inline Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  get_m_Recentering_11() const { return ___m_Recentering_11; }
	inline Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427 * get_address_of_m_Recentering_11() { return &___m_Recentering_11; }
	inline void set_m_Recentering_11(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  value)
	{
		___m_Recentering_11 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSpeed_12() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_CurrentSpeed_12)); }
	inline float get_m_CurrentSpeed_12() const { return ___m_CurrentSpeed_12; }
	inline float* get_address_of_m_CurrentSpeed_12() { return &___m_CurrentSpeed_12; }
	inline void set_m_CurrentSpeed_12(float value)
	{
		___m_CurrentSpeed_12 = value;
	}

	inline static int32_t get_offset_of_m_LastUpdateTime_13() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_LastUpdateTime_13)); }
	inline float get_m_LastUpdateTime_13() const { return ___m_LastUpdateTime_13; }
	inline float* get_address_of_m_LastUpdateTime_13() { return &___m_LastUpdateTime_13; }
	inline void set_m_LastUpdateTime_13(float value)
	{
		___m_LastUpdateTime_13 = value;
	}

	inline static int32_t get_offset_of_m_LastUpdateFrame_14() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_LastUpdateFrame_14)); }
	inline int32_t get_m_LastUpdateFrame_14() const { return ___m_LastUpdateFrame_14; }
	inline int32_t* get_address_of_m_LastUpdateFrame_14() { return &___m_LastUpdateFrame_14; }
	inline void set_m_LastUpdateFrame_14(int32_t value)
	{
		___m_LastUpdateFrame_14 = value;
	}

	inline static int32_t get_offset_of_m_InputAxisProvider_16() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_InputAxisProvider_16)); }
	inline RuntimeObject* get_m_InputAxisProvider_16() const { return ___m_InputAxisProvider_16; }
	inline RuntimeObject** get_address_of_m_InputAxisProvider_16() { return &___m_InputAxisProvider_16; }
	inline void set_m_InputAxisProvider_16(RuntimeObject* value)
	{
		___m_InputAxisProvider_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputAxisProvider_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputAxisIndex_17() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_InputAxisIndex_17)); }
	inline int32_t get_m_InputAxisIndex_17() const { return ___m_InputAxisIndex_17; }
	inline int32_t* get_address_of_m_InputAxisIndex_17() { return &___m_InputAxisIndex_17; }
	inline void set_m_InputAxisIndex_17(int32_t value)
	{
		___m_InputAxisIndex_17 = value;
	}

	inline static int32_t get_offset_of_U3CValueRangeLockedU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___U3CValueRangeLockedU3Ek__BackingField_18)); }
	inline bool get_U3CValueRangeLockedU3Ek__BackingField_18() const { return ___U3CValueRangeLockedU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CValueRangeLockedU3Ek__BackingField_18() { return &___U3CValueRangeLockedU3Ek__BackingField_18; }
	inline void set_U3CValueRangeLockedU3Ek__BackingField_18(bool value)
	{
		___U3CValueRangeLockedU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CHasRecenteringU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___U3CHasRecenteringU3Ek__BackingField_19)); }
	inline bool get_U3CHasRecenteringU3Ek__BackingField_19() const { return ___U3CHasRecenteringU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CHasRecenteringU3Ek__BackingField_19() { return &___U3CHasRecenteringU3Ek__BackingField_19; }
	inline void set_U3CHasRecenteringU3Ek__BackingField_19(bool value)
	{
		___U3CHasRecenteringU3Ek__BackingField_19 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.AxisState
struct AxisState_t376D19829A676B98933979F42845F6476071DDE8_marshaled_pinvoke
{
	float ___Value_0;
	int32_t ___m_SpeedMode_1;
	float ___m_MaxSpeed_2;
	float ___m_AccelTime_3;
	float ___m_DecelTime_4;
	char* ___m_InputAxisName_5;
	float ___m_InputAxisValue_6;
	int32_t ___m_InvertInput_7;
	float ___m_MinValue_8;
	float ___m_MaxValue_9;
	int32_t ___m_Wrap_10;
	Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427_marshaled_pinvoke ___m_Recentering_11;
	float ___m_CurrentSpeed_12;
	float ___m_LastUpdateTime_13;
	int32_t ___m_LastUpdateFrame_14;
	RuntimeObject* ___m_InputAxisProvider_16;
	int32_t ___m_InputAxisIndex_17;
	int32_t ___U3CValueRangeLockedU3Ek__BackingField_18;
	int32_t ___U3CHasRecenteringU3Ek__BackingField_19;
};
// Native definition for COM marshalling of Cinemachine.AxisState
struct AxisState_t376D19829A676B98933979F42845F6476071DDE8_marshaled_com
{
	float ___Value_0;
	int32_t ___m_SpeedMode_1;
	float ___m_MaxSpeed_2;
	float ___m_AccelTime_3;
	float ___m_DecelTime_4;
	Il2CppChar* ___m_InputAxisName_5;
	float ___m_InputAxisValue_6;
	int32_t ___m_InvertInput_7;
	float ___m_MinValue_8;
	float ___m_MaxValue_9;
	int32_t ___m_Wrap_10;
	Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427_marshaled_com ___m_Recentering_11;
	float ___m_CurrentSpeed_12;
	float ___m_LastUpdateTime_13;
	int32_t ___m_LastUpdateFrame_14;
	RuntimeObject* ___m_InputAxisProvider_16;
	int32_t ___m_InputAxisIndex_17;
	int32_t ___U3CValueRangeLockedU3Ek__BackingField_18;
	int32_t ___U3CHasRecenteringU3Ek__BackingField_19;
};

// Cinemachine.CameraState
struct CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601 
{
public:
	// Cinemachine.LensSettings Cinemachine.CameraState::<Lens>k__BackingField
	LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  ___U3CLensU3Ek__BackingField_0;
	// UnityEngine.Vector3 Cinemachine.CameraState::<ReferenceUp>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CReferenceUpU3Ek__BackingField_1;
	// UnityEngine.Vector3 Cinemachine.CameraState::<ReferenceLookAt>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CReferenceLookAtU3Ek__BackingField_2;
	// UnityEngine.Vector3 Cinemachine.CameraState::<RawPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CRawPositionU3Ek__BackingField_4;
	// UnityEngine.Quaternion Cinemachine.CameraState::<RawOrientation>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CRawOrientationU3Ek__BackingField_5;
	// UnityEngine.Vector3 Cinemachine.CameraState::<PositionDampingBypass>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionDampingBypassU3Ek__BackingField_6;
	// System.Single Cinemachine.CameraState::<ShotQuality>k__BackingField
	float ___U3CShotQualityU3Ek__BackingField_7;
	// UnityEngine.Vector3 Cinemachine.CameraState::<PositionCorrection>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionCorrectionU3Ek__BackingField_8;
	// UnityEngine.Quaternion Cinemachine.CameraState::<OrientationCorrection>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3COrientationCorrectionU3Ek__BackingField_9;
	// Cinemachine.CameraState/BlendHintValue Cinemachine.CameraState::<BlendHint>k__BackingField
	int32_t ___U3CBlendHintU3Ek__BackingField_10;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom0
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom0_11;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom1
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom1_12;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom2
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom2_13;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom3
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom3_14;
	// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable> Cinemachine.CameraState::m_CustomOverflow
	List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009 * ___m_CustomOverflow_15;
	// System.Int32 Cinemachine.CameraState::<NumCustomBlendables>k__BackingField
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CLensU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CLensU3Ek__BackingField_0)); }
	inline LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  get_U3CLensU3Ek__BackingField_0() const { return ___U3CLensU3Ek__BackingField_0; }
	inline LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * get_address_of_U3CLensU3Ek__BackingField_0() { return &___U3CLensU3Ek__BackingField_0; }
	inline void set_U3CLensU3Ek__BackingField_0(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  value)
	{
		___U3CLensU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CReferenceUpU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CReferenceUpU3Ek__BackingField_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CReferenceUpU3Ek__BackingField_1() const { return ___U3CReferenceUpU3Ek__BackingField_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CReferenceUpU3Ek__BackingField_1() { return &___U3CReferenceUpU3Ek__BackingField_1; }
	inline void set_U3CReferenceUpU3Ek__BackingField_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CReferenceUpU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CReferenceLookAtU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CReferenceLookAtU3Ek__BackingField_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CReferenceLookAtU3Ek__BackingField_2() const { return ___U3CReferenceLookAtU3Ek__BackingField_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CReferenceLookAtU3Ek__BackingField_2() { return &___U3CReferenceLookAtU3Ek__BackingField_2; }
	inline void set_U3CReferenceLookAtU3Ek__BackingField_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CReferenceLookAtU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CRawPositionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CRawPositionU3Ek__BackingField_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CRawPositionU3Ek__BackingField_4() const { return ___U3CRawPositionU3Ek__BackingField_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CRawPositionU3Ek__BackingField_4() { return &___U3CRawPositionU3Ek__BackingField_4; }
	inline void set_U3CRawPositionU3Ek__BackingField_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CRawPositionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CRawOrientationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CRawOrientationU3Ek__BackingField_5)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CRawOrientationU3Ek__BackingField_5() const { return ___U3CRawOrientationU3Ek__BackingField_5; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CRawOrientationU3Ek__BackingField_5() { return &___U3CRawOrientationU3Ek__BackingField_5; }
	inline void set_U3CRawOrientationU3Ek__BackingField_5(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CRawOrientationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CPositionDampingBypassU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CPositionDampingBypassU3Ek__BackingField_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CPositionDampingBypassU3Ek__BackingField_6() const { return ___U3CPositionDampingBypassU3Ek__BackingField_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CPositionDampingBypassU3Ek__BackingField_6() { return &___U3CPositionDampingBypassU3Ek__BackingField_6; }
	inline void set_U3CPositionDampingBypassU3Ek__BackingField_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CPositionDampingBypassU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CShotQualityU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CShotQualityU3Ek__BackingField_7)); }
	inline float get_U3CShotQualityU3Ek__BackingField_7() const { return ___U3CShotQualityU3Ek__BackingField_7; }
	inline float* get_address_of_U3CShotQualityU3Ek__BackingField_7() { return &___U3CShotQualityU3Ek__BackingField_7; }
	inline void set_U3CShotQualityU3Ek__BackingField_7(float value)
	{
		___U3CShotQualityU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CPositionCorrectionU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CPositionCorrectionU3Ek__BackingField_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CPositionCorrectionU3Ek__BackingField_8() const { return ___U3CPositionCorrectionU3Ek__BackingField_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CPositionCorrectionU3Ek__BackingField_8() { return &___U3CPositionCorrectionU3Ek__BackingField_8; }
	inline void set_U3CPositionCorrectionU3Ek__BackingField_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CPositionCorrectionU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3COrientationCorrectionU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3COrientationCorrectionU3Ek__BackingField_9)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3COrientationCorrectionU3Ek__BackingField_9() const { return ___U3COrientationCorrectionU3Ek__BackingField_9; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3COrientationCorrectionU3Ek__BackingField_9() { return &___U3COrientationCorrectionU3Ek__BackingField_9; }
	inline void set_U3COrientationCorrectionU3Ek__BackingField_9(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3COrientationCorrectionU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CBlendHintU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CBlendHintU3Ek__BackingField_10)); }
	inline int32_t get_U3CBlendHintU3Ek__BackingField_10() const { return ___U3CBlendHintU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CBlendHintU3Ek__BackingField_10() { return &___U3CBlendHintU3Ek__BackingField_10; }
	inline void set_U3CBlendHintU3Ek__BackingField_10(int32_t value)
	{
		___U3CBlendHintU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_mCustom0_11() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___mCustom0_11)); }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  get_mCustom0_11() const { return ___mCustom0_11; }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B * get_address_of_mCustom0_11() { return &___mCustom0_11; }
	inline void set_mCustom0_11(CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  value)
	{
		___mCustom0_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom0_11))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_mCustom1_12() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___mCustom1_12)); }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  get_mCustom1_12() const { return ___mCustom1_12; }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B * get_address_of_mCustom1_12() { return &___mCustom1_12; }
	inline void set_mCustom1_12(CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  value)
	{
		___mCustom1_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom1_12))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_mCustom2_13() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___mCustom2_13)); }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  get_mCustom2_13() const { return ___mCustom2_13; }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B * get_address_of_mCustom2_13() { return &___mCustom2_13; }
	inline void set_mCustom2_13(CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  value)
	{
		___mCustom2_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom2_13))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_mCustom3_14() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___mCustom3_14)); }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  get_mCustom3_14() const { return ___mCustom3_14; }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B * get_address_of_mCustom3_14() { return &___mCustom3_14; }
	inline void set_mCustom3_14(CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  value)
	{
		___mCustom3_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom3_14))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_CustomOverflow_15() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___m_CustomOverflow_15)); }
	inline List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009 * get_m_CustomOverflow_15() const { return ___m_CustomOverflow_15; }
	inline List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009 ** get_address_of_m_CustomOverflow_15() { return &___m_CustomOverflow_15; }
	inline void set_m_CustomOverflow_15(List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009 * value)
	{
		___m_CustomOverflow_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomOverflow_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNumCustomBlendablesU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CNumCustomBlendablesU3Ek__BackingField_16)); }
	inline int32_t get_U3CNumCustomBlendablesU3Ek__BackingField_16() const { return ___U3CNumCustomBlendablesU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CNumCustomBlendablesU3Ek__BackingField_16() { return &___U3CNumCustomBlendablesU3Ek__BackingField_16; }
	inline void set_U3CNumCustomBlendablesU3Ek__BackingField_16(int32_t value)
	{
		___U3CNumCustomBlendablesU3Ek__BackingField_16 = value;
	}
};

struct CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601_StaticFields
{
public:
	// UnityEngine.Vector3 Cinemachine.CameraState::kNoPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___kNoPoint_3;

public:
	inline static int32_t get_offset_of_kNoPoint_3() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601_StaticFields, ___kNoPoint_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_kNoPoint_3() const { return ___kNoPoint_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_kNoPoint_3() { return &___kNoPoint_3; }
	inline void set_kNoPoint_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___kNoPoint_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.CameraState
struct CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601_marshaled_pinvoke
{
	LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA_marshaled_pinvoke ___U3CLensU3Ek__BackingField_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CReferenceUpU3Ek__BackingField_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CReferenceLookAtU3Ek__BackingField_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CRawPositionU3Ek__BackingField_4;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CRawOrientationU3Ek__BackingField_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionDampingBypassU3Ek__BackingField_6;
	float ___U3CShotQualityU3Ek__BackingField_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionCorrectionU3Ek__BackingField_8;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3COrientationCorrectionU3Ek__BackingField_9;
	int32_t ___U3CBlendHintU3Ek__BackingField_10;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom0_11;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom1_12;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom2_13;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom3_14;
	List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009 * ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};
// Native definition for COM marshalling of Cinemachine.CameraState
struct CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601_marshaled_com
{
	LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA_marshaled_com ___U3CLensU3Ek__BackingField_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CReferenceUpU3Ek__BackingField_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CReferenceLookAtU3Ek__BackingField_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CRawPositionU3Ek__BackingField_4;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CRawOrientationU3Ek__BackingField_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionDampingBypassU3Ek__BackingField_6;
	float ___U3CShotQualityU3Ek__BackingField_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPositionCorrectionU3Ek__BackingField_8;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3COrientationCorrectionU3Ek__BackingField_9;
	int32_t ___U3CBlendHintU3Ek__BackingField_10;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom0_11;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom1_12;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom2_13;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom3_14;
	List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009 * ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};

// Cinemachine.CinemachineBlendDefinition
struct CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE 
{
public:
	// Cinemachine.CinemachineBlendDefinition/Style Cinemachine.CinemachineBlendDefinition::m_Style
	int32_t ___m_Style_0;
	// System.Single Cinemachine.CinemachineBlendDefinition::m_Time
	float ___m_Time_1;
	// UnityEngine.AnimationCurve Cinemachine.CinemachineBlendDefinition::m_CustomCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_CustomCurve_2;

public:
	inline static int32_t get_offset_of_m_Style_0() { return static_cast<int32_t>(offsetof(CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE, ___m_Style_0)); }
	inline int32_t get_m_Style_0() const { return ___m_Style_0; }
	inline int32_t* get_address_of_m_Style_0() { return &___m_Style_0; }
	inline void set_m_Style_0(int32_t value)
	{
		___m_Style_0 = value;
	}

	inline static int32_t get_offset_of_m_Time_1() { return static_cast<int32_t>(offsetof(CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE, ___m_Time_1)); }
	inline float get_m_Time_1() const { return ___m_Time_1; }
	inline float* get_address_of_m_Time_1() { return &___m_Time_1; }
	inline void set_m_Time_1(float value)
	{
		___m_Time_1 = value;
	}

	inline static int32_t get_offset_of_m_CustomCurve_2() { return static_cast<int32_t>(offsetof(CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE, ___m_CustomCurve_2)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_CustomCurve_2() const { return ___m_CustomCurve_2; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_CustomCurve_2() { return &___m_CustomCurve_2; }
	inline void set_m_CustomCurve_2(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_CustomCurve_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomCurve_2), (void*)value);
	}
};

struct CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE_StaticFields
{
public:
	// UnityEngine.AnimationCurve[] Cinemachine.CinemachineBlendDefinition::sStandardCurves
	AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A* ___sStandardCurves_3;

public:
	inline static int32_t get_offset_of_sStandardCurves_3() { return static_cast<int32_t>(offsetof(CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE_StaticFields, ___sStandardCurves_3)); }
	inline AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A* get_sStandardCurves_3() const { return ___sStandardCurves_3; }
	inline AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A** get_address_of_sStandardCurves_3() { return &___sStandardCurves_3; }
	inline void set_sStandardCurves_3(AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A* value)
	{
		___sStandardCurves_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sStandardCurves_3), (void*)value);
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


// MoreMountains.FeedbacksForThirdParty.MMF_CinemachineImpulse
struct MMF_CinemachineImpulse_t8A2AA6B71A96E3CAAE15A2BE6C81A45E3EB27D81  : public MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06
{
public:

public:
};

struct MMF_CinemachineImpulse_t8A2AA6B71A96E3CAAE15A2BE6C81A45E3EB27D81_StaticFields
{
public:
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMF_CinemachineImpulse::FeedbackTypeAuthorized
	bool ___FeedbackTypeAuthorized_27;

public:
	inline static int32_t get_offset_of_FeedbackTypeAuthorized_27() { return static_cast<int32_t>(offsetof(MMF_CinemachineImpulse_t8A2AA6B71A96E3CAAE15A2BE6C81A45E3EB27D81_StaticFields, ___FeedbackTypeAuthorized_27)); }
	inline bool get_FeedbackTypeAuthorized_27() const { return ___FeedbackTypeAuthorized_27; }
	inline bool* get_address_of_FeedbackTypeAuthorized_27() { return &___FeedbackTypeAuthorized_27; }
	inline void set_FeedbackTypeAuthorized_27(bool value)
	{
		___FeedbackTypeAuthorized_27 = value;
	}
};


// MoreMountains.FeedbacksForThirdParty.MMF_CinemachineImpulseClear
struct MMF_CinemachineImpulseClear_tEABDB041B5FEE1FDA7AC572C757F417307CADD6B  : public MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06
{
public:

public:
};

struct MMF_CinemachineImpulseClear_tEABDB041B5FEE1FDA7AC572C757F417307CADD6B_StaticFields
{
public:
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMF_CinemachineImpulseClear::FeedbackTypeAuthorized
	bool ___FeedbackTypeAuthorized_27;

public:
	inline static int32_t get_offset_of_FeedbackTypeAuthorized_27() { return static_cast<int32_t>(offsetof(MMF_CinemachineImpulseClear_tEABDB041B5FEE1FDA7AC572C757F417307CADD6B_StaticFields, ___FeedbackTypeAuthorized_27)); }
	inline bool get_FeedbackTypeAuthorized_27() const { return ___FeedbackTypeAuthorized_27; }
	inline bool* get_address_of_FeedbackTypeAuthorized_27() { return &___FeedbackTypeAuthorized_27; }
	inline void set_FeedbackTypeAuthorized_27(bool value)
	{
		___FeedbackTypeAuthorized_27 = value;
	}
};


// MoreMountains.FeedbacksForThirdParty.MMF_CinemachineImpulseSource
struct MMF_CinemachineImpulseSource_t4F9673C229F72504229F2649DC2C1B2354C645D2  : public MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06
{
public:
	// Cinemachine.CinemachineImpulseSource MoreMountains.FeedbacksForThirdParty.MMF_CinemachineImpulseSource::ImpulseSource
	CinemachineImpulseSource_t7EFCA284734A8CB50F0B45CDDF6BB924DA73998D * ___ImpulseSource_28;
	// UnityEngine.Vector3 MoreMountains.FeedbacksForThirdParty.MMF_CinemachineImpulseSource::Velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Velocity_29;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMF_CinemachineImpulseSource::ClearImpulseOnStop
	bool ___ClearImpulseOnStop_30;

public:
	inline static int32_t get_offset_of_ImpulseSource_28() { return static_cast<int32_t>(offsetof(MMF_CinemachineImpulseSource_t4F9673C229F72504229F2649DC2C1B2354C645D2, ___ImpulseSource_28)); }
	inline CinemachineImpulseSource_t7EFCA284734A8CB50F0B45CDDF6BB924DA73998D * get_ImpulseSource_28() const { return ___ImpulseSource_28; }
	inline CinemachineImpulseSource_t7EFCA284734A8CB50F0B45CDDF6BB924DA73998D ** get_address_of_ImpulseSource_28() { return &___ImpulseSource_28; }
	inline void set_ImpulseSource_28(CinemachineImpulseSource_t7EFCA284734A8CB50F0B45CDDF6BB924DA73998D * value)
	{
		___ImpulseSource_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ImpulseSource_28), (void*)value);
	}

	inline static int32_t get_offset_of_Velocity_29() { return static_cast<int32_t>(offsetof(MMF_CinemachineImpulseSource_t4F9673C229F72504229F2649DC2C1B2354C645D2, ___Velocity_29)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Velocity_29() const { return ___Velocity_29; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Velocity_29() { return &___Velocity_29; }
	inline void set_Velocity_29(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Velocity_29 = value;
	}

	inline static int32_t get_offset_of_ClearImpulseOnStop_30() { return static_cast<int32_t>(offsetof(MMF_CinemachineImpulseSource_t4F9673C229F72504229F2649DC2C1B2354C645D2, ___ClearImpulseOnStop_30)); }
	inline bool get_ClearImpulseOnStop_30() const { return ___ClearImpulseOnStop_30; }
	inline bool* get_address_of_ClearImpulseOnStop_30() { return &___ClearImpulseOnStop_30; }
	inline void set_ClearImpulseOnStop_30(bool value)
	{
		___ClearImpulseOnStop_30 = value;
	}
};

struct MMF_CinemachineImpulseSource_t4F9673C229F72504229F2649DC2C1B2354C645D2_StaticFields
{
public:
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMF_CinemachineImpulseSource::FeedbackTypeAuthorized
	bool ___FeedbackTypeAuthorized_27;

public:
	inline static int32_t get_offset_of_FeedbackTypeAuthorized_27() { return static_cast<int32_t>(offsetof(MMF_CinemachineImpulseSource_t4F9673C229F72504229F2649DC2C1B2354C645D2_StaticFields, ___FeedbackTypeAuthorized_27)); }
	inline bool get_FeedbackTypeAuthorized_27() const { return ___FeedbackTypeAuthorized_27; }
	inline bool* get_address_of_FeedbackTypeAuthorized_27() { return &___FeedbackTypeAuthorized_27; }
	inline void set_FeedbackTypeAuthorized_27(bool value)
	{
		___FeedbackTypeAuthorized_27 = value;
	}
};


// MoreMountains.Feedbacks.MMFeedbackTiming
struct MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6  : public RuntimeObject
{
public:
	// MoreMountains.Feedbacks.TimescaleModes MoreMountains.Feedbacks.MMFeedbackTiming::TimescaleMode
	int32_t ___TimescaleMode_0;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackTiming::ExcludeFromHoldingPauses
	bool ___ExcludeFromHoldingPauses_1;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackTiming::ContributeToTotalDuration
	bool ___ContributeToTotalDuration_2;
	// System.Single MoreMountains.Feedbacks.MMFeedbackTiming::InitialDelay
	float ___InitialDelay_3;
	// System.Single MoreMountains.Feedbacks.MMFeedbackTiming::CooldownDuration
	float ___CooldownDuration_4;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackTiming::InterruptsOnStop
	bool ___InterruptsOnStop_5;
	// System.Int32 MoreMountains.Feedbacks.MMFeedbackTiming::NumberOfRepeats
	int32_t ___NumberOfRepeats_6;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackTiming::RepeatForever
	bool ___RepeatForever_7;
	// System.Single MoreMountains.Feedbacks.MMFeedbackTiming::DelayBetweenRepeats
	float ___DelayBetweenRepeats_8;
	// MoreMountains.Feedbacks.MMFeedbackTiming/MMFeedbacksDirectionConditions MoreMountains.Feedbacks.MMFeedbackTiming::MMFeedbacksDirectionCondition
	int32_t ___MMFeedbacksDirectionCondition_9;
	// MoreMountains.Feedbacks.MMFeedbackTiming/PlayDirections MoreMountains.Feedbacks.MMFeedbackTiming::PlayDirection
	int32_t ___PlayDirection_10;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackTiming::ConstantIntensity
	bool ___ConstantIntensity_11;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackTiming::UseIntensityInterval
	bool ___UseIntensityInterval_12;
	// System.Single MoreMountains.Feedbacks.MMFeedbackTiming::IntensityIntervalMin
	float ___IntensityIntervalMin_13;
	// System.Single MoreMountains.Feedbacks.MMFeedbackTiming::IntensityIntervalMax
	float ___IntensityIntervalMax_14;
	// MoreMountains.Feedbacks.MMSequence MoreMountains.Feedbacks.MMFeedbackTiming::Sequence
	MMSequence_t1E28CC4D7E62BA36AF7F110B2033372FBB54F88A * ___Sequence_15;
	// System.Int32 MoreMountains.Feedbacks.MMFeedbackTiming::TrackID
	int32_t ___TrackID_16;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackTiming::Quantized
	bool ___Quantized_17;
	// System.Int32 MoreMountains.Feedbacks.MMFeedbackTiming::TargetBPM
	int32_t ___TargetBPM_18;

public:
	inline static int32_t get_offset_of_TimescaleMode_0() { return static_cast<int32_t>(offsetof(MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6, ___TimescaleMode_0)); }
	inline int32_t get_TimescaleMode_0() const { return ___TimescaleMode_0; }
	inline int32_t* get_address_of_TimescaleMode_0() { return &___TimescaleMode_0; }
	inline void set_TimescaleMode_0(int32_t value)
	{
		___TimescaleMode_0 = value;
	}

	inline static int32_t get_offset_of_ExcludeFromHoldingPauses_1() { return static_cast<int32_t>(offsetof(MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6, ___ExcludeFromHoldingPauses_1)); }
	inline bool get_ExcludeFromHoldingPauses_1() const { return ___ExcludeFromHoldingPauses_1; }
	inline bool* get_address_of_ExcludeFromHoldingPauses_1() { return &___ExcludeFromHoldingPauses_1; }
	inline void set_ExcludeFromHoldingPauses_1(bool value)
	{
		___ExcludeFromHoldingPauses_1 = value;
	}

	inline static int32_t get_offset_of_ContributeToTotalDuration_2() { return static_cast<int32_t>(offsetof(MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6, ___ContributeToTotalDuration_2)); }
	inline bool get_ContributeToTotalDuration_2() const { return ___ContributeToTotalDuration_2; }
	inline bool* get_address_of_ContributeToTotalDuration_2() { return &___ContributeToTotalDuration_2; }
	inline void set_ContributeToTotalDuration_2(bool value)
	{
		___ContributeToTotalDuration_2 = value;
	}

	inline static int32_t get_offset_of_InitialDelay_3() { return static_cast<int32_t>(offsetof(MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6, ___InitialDelay_3)); }
	inline float get_InitialDelay_3() const { return ___InitialDelay_3; }
	inline float* get_address_of_InitialDelay_3() { return &___InitialDelay_3; }
	inline void set_InitialDelay_3(float value)
	{
		___InitialDelay_3 = value;
	}

	inline static int32_t get_offset_of_CooldownDuration_4() { return static_cast<int32_t>(offsetof(MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6, ___CooldownDuration_4)); }
	inline float get_CooldownDuration_4() const { return ___CooldownDuration_4; }
	inline float* get_address_of_CooldownDuration_4() { return &___CooldownDuration_4; }
	inline void set_CooldownDuration_4(float value)
	{
		___CooldownDuration_4 = value;
	}

	inline static int32_t get_offset_of_InterruptsOnStop_5() { return static_cast<int32_t>(offsetof(MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6, ___InterruptsOnStop_5)); }
	inline bool get_InterruptsOnStop_5() const { return ___InterruptsOnStop_5; }
	inline bool* get_address_of_InterruptsOnStop_5() { return &___InterruptsOnStop_5; }
	inline void set_InterruptsOnStop_5(bool value)
	{
		___InterruptsOnStop_5 = value;
	}

	inline static int32_t get_offset_of_NumberOfRepeats_6() { return static_cast<int32_t>(offsetof(MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6, ___NumberOfRepeats_6)); }
	inline int32_t get_NumberOfRepeats_6() const { return ___NumberOfRepeats_6; }
	inline int32_t* get_address_of_NumberOfRepeats_6() { return &___NumberOfRepeats_6; }
	inline void set_NumberOfRepeats_6(int32_t value)
	{
		___NumberOfRepeats_6 = value;
	}

	inline static int32_t get_offset_of_RepeatForever_7() { return static_cast<int32_t>(offsetof(MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6, ___RepeatForever_7)); }
	inline bool get_RepeatForever_7() const { return ___RepeatForever_7; }
	inline bool* get_address_of_RepeatForever_7() { return &___RepeatForever_7; }
	inline void set_RepeatForever_7(bool value)
	{
		___RepeatForever_7 = value;
	}

	inline static int32_t get_offset_of_DelayBetweenRepeats_8() { return static_cast<int32_t>(offsetof(MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6, ___DelayBetweenRepeats_8)); }
	inline float get_DelayBetweenRepeats_8() const { return ___DelayBetweenRepeats_8; }
	inline float* get_address_of_DelayBetweenRepeats_8() { return &___DelayBetweenRepeats_8; }
	inline void set_DelayBetweenRepeats_8(float value)
	{
		___DelayBetweenRepeats_8 = value;
	}

	inline static int32_t get_offset_of_MMFeedbacksDirectionCondition_9() { return static_cast<int32_t>(offsetof(MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6, ___MMFeedbacksDirectionCondition_9)); }
	inline int32_t get_MMFeedbacksDirectionCondition_9() const { return ___MMFeedbacksDirectionCondition_9; }
	inline int32_t* get_address_of_MMFeedbacksDirectionCondition_9() { return &___MMFeedbacksDirectionCondition_9; }
	inline void set_MMFeedbacksDirectionCondition_9(int32_t value)
	{
		___MMFeedbacksDirectionCondition_9 = value;
	}

	inline static int32_t get_offset_of_PlayDirection_10() { return static_cast<int32_t>(offsetof(MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6, ___PlayDirection_10)); }
	inline int32_t get_PlayDirection_10() const { return ___PlayDirection_10; }
	inline int32_t* get_address_of_PlayDirection_10() { return &___PlayDirection_10; }
	inline void set_PlayDirection_10(int32_t value)
	{
		___PlayDirection_10 = value;
	}

	inline static int32_t get_offset_of_ConstantIntensity_11() { return static_cast<int32_t>(offsetof(MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6, ___ConstantIntensity_11)); }
	inline bool get_ConstantIntensity_11() const { return ___ConstantIntensity_11; }
	inline bool* get_address_of_ConstantIntensity_11() { return &___ConstantIntensity_11; }
	inline void set_ConstantIntensity_11(bool value)
	{
		___ConstantIntensity_11 = value;
	}

	inline static int32_t get_offset_of_UseIntensityInterval_12() { return static_cast<int32_t>(offsetof(MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6, ___UseIntensityInterval_12)); }
	inline bool get_UseIntensityInterval_12() const { return ___UseIntensityInterval_12; }
	inline bool* get_address_of_UseIntensityInterval_12() { return &___UseIntensityInterval_12; }
	inline void set_UseIntensityInterval_12(bool value)
	{
		___UseIntensityInterval_12 = value;
	}

	inline static int32_t get_offset_of_IntensityIntervalMin_13() { return static_cast<int32_t>(offsetof(MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6, ___IntensityIntervalMin_13)); }
	inline float get_IntensityIntervalMin_13() const { return ___IntensityIntervalMin_13; }
	inline float* get_address_of_IntensityIntervalMin_13() { return &___IntensityIntervalMin_13; }
	inline void set_IntensityIntervalMin_13(float value)
	{
		___IntensityIntervalMin_13 = value;
	}

	inline static int32_t get_offset_of_IntensityIntervalMax_14() { return static_cast<int32_t>(offsetof(MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6, ___IntensityIntervalMax_14)); }
	inline float get_IntensityIntervalMax_14() const { return ___IntensityIntervalMax_14; }
	inline float* get_address_of_IntensityIntervalMax_14() { return &___IntensityIntervalMax_14; }
	inline void set_IntensityIntervalMax_14(float value)
	{
		___IntensityIntervalMax_14 = value;
	}

	inline static int32_t get_offset_of_Sequence_15() { return static_cast<int32_t>(offsetof(MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6, ___Sequence_15)); }
	inline MMSequence_t1E28CC4D7E62BA36AF7F110B2033372FBB54F88A * get_Sequence_15() const { return ___Sequence_15; }
	inline MMSequence_t1E28CC4D7E62BA36AF7F110B2033372FBB54F88A ** get_address_of_Sequence_15() { return &___Sequence_15; }
	inline void set_Sequence_15(MMSequence_t1E28CC4D7E62BA36AF7F110B2033372FBB54F88A * value)
	{
		___Sequence_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Sequence_15), (void*)value);
	}

	inline static int32_t get_offset_of_TrackID_16() { return static_cast<int32_t>(offsetof(MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6, ___TrackID_16)); }
	inline int32_t get_TrackID_16() const { return ___TrackID_16; }
	inline int32_t* get_address_of_TrackID_16() { return &___TrackID_16; }
	inline void set_TrackID_16(int32_t value)
	{
		___TrackID_16 = value;
	}

	inline static int32_t get_offset_of_Quantized_17() { return static_cast<int32_t>(offsetof(MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6, ___Quantized_17)); }
	inline bool get_Quantized_17() const { return ___Quantized_17; }
	inline bool* get_address_of_Quantized_17() { return &___Quantized_17; }
	inline void set_Quantized_17(bool value)
	{
		___Quantized_17 = value;
	}

	inline static int32_t get_offset_of_TargetBPM_18() { return static_cast<int32_t>(offsetof(MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6, ___TargetBPM_18)); }
	inline int32_t get_TargetBPM_18() const { return ___TargetBPM_18; }
	inline int32_t* get_address_of_TargetBPM_18() { return &___TargetBPM_18; }
	inline void set_TargetBPM_18(int32_t value)
	{
		___TargetBPM_18 = value;
	}
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Cinemachine.CinemachineImpulseManager/EnvelopeDefinition
struct EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 
{
public:
	// UnityEngine.AnimationCurve Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::m_AttackShape
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_AttackShape_0;
	// UnityEngine.AnimationCurve Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::m_DecayShape
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_DecayShape_1;
	// System.Single Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::m_AttackTime
	float ___m_AttackTime_2;
	// System.Single Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::m_SustainTime
	float ___m_SustainTime_3;
	// System.Single Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::m_DecayTime
	float ___m_DecayTime_4;
	// System.Boolean Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::m_ScaleWithImpact
	bool ___m_ScaleWithImpact_5;
	// System.Boolean Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::m_HoldForever
	bool ___m_HoldForever_6;

public:
	inline static int32_t get_offset_of_m_AttackShape_0() { return static_cast<int32_t>(offsetof(EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7, ___m_AttackShape_0)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_AttackShape_0() const { return ___m_AttackShape_0; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_AttackShape_0() { return &___m_AttackShape_0; }
	inline void set_m_AttackShape_0(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_AttackShape_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AttackShape_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DecayShape_1() { return static_cast<int32_t>(offsetof(EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7, ___m_DecayShape_1)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_DecayShape_1() const { return ___m_DecayShape_1; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_DecayShape_1() { return &___m_DecayShape_1; }
	inline void set_m_DecayShape_1(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_DecayShape_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DecayShape_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_AttackTime_2() { return static_cast<int32_t>(offsetof(EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7, ___m_AttackTime_2)); }
	inline float get_m_AttackTime_2() const { return ___m_AttackTime_2; }
	inline float* get_address_of_m_AttackTime_2() { return &___m_AttackTime_2; }
	inline void set_m_AttackTime_2(float value)
	{
		___m_AttackTime_2 = value;
	}

	inline static int32_t get_offset_of_m_SustainTime_3() { return static_cast<int32_t>(offsetof(EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7, ___m_SustainTime_3)); }
	inline float get_m_SustainTime_3() const { return ___m_SustainTime_3; }
	inline float* get_address_of_m_SustainTime_3() { return &___m_SustainTime_3; }
	inline void set_m_SustainTime_3(float value)
	{
		___m_SustainTime_3 = value;
	}

	inline static int32_t get_offset_of_m_DecayTime_4() { return static_cast<int32_t>(offsetof(EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7, ___m_DecayTime_4)); }
	inline float get_m_DecayTime_4() const { return ___m_DecayTime_4; }
	inline float* get_address_of_m_DecayTime_4() { return &___m_DecayTime_4; }
	inline void set_m_DecayTime_4(float value)
	{
		___m_DecayTime_4 = value;
	}

	inline static int32_t get_offset_of_m_ScaleWithImpact_5() { return static_cast<int32_t>(offsetof(EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7, ___m_ScaleWithImpact_5)); }
	inline bool get_m_ScaleWithImpact_5() const { return ___m_ScaleWithImpact_5; }
	inline bool* get_address_of_m_ScaleWithImpact_5() { return &___m_ScaleWithImpact_5; }
	inline void set_m_ScaleWithImpact_5(bool value)
	{
		___m_ScaleWithImpact_5 = value;
	}

	inline static int32_t get_offset_of_m_HoldForever_6() { return static_cast<int32_t>(offsetof(EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7, ___m_HoldForever_6)); }
	inline bool get_m_HoldForever_6() const { return ___m_HoldForever_6; }
	inline bool* get_address_of_m_HoldForever_6() { return &___m_HoldForever_6; }
	inline void set_m_HoldForever_6(bool value)
	{
		___m_HoldForever_6 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.CinemachineImpulseManager/EnvelopeDefinition
struct EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7_marshaled_pinvoke
{
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke ___m_AttackShape_0;
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke ___m_DecayShape_1;
	float ___m_AttackTime_2;
	float ___m_SustainTime_3;
	float ___m_DecayTime_4;
	int32_t ___m_ScaleWithImpact_5;
	int32_t ___m_HoldForever_6;
};
// Native definition for COM marshalling of Cinemachine.CinemachineImpulseManager/EnvelopeDefinition
struct EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7_marshaled_com
{
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com* ___m_AttackShape_0;
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com* ___m_DecayShape_1;
	float ___m_AttackTime_2;
	float ___m_SustainTime_3;
	float ___m_DecayTime_4;
	int32_t ___m_ScaleWithImpact_5;
	int32_t ___m_HoldForever_6;
};

// Cinemachine.CinemachineOrbitalTransposer/Heading
struct Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9 
{
public:
	// Cinemachine.CinemachineOrbitalTransposer/Heading/HeadingDefinition Cinemachine.CinemachineOrbitalTransposer/Heading::m_Definition
	int32_t ___m_Definition_0;
	// System.Int32 Cinemachine.CinemachineOrbitalTransposer/Heading::m_VelocityFilterStrength
	int32_t ___m_VelocityFilterStrength_1;
	// System.Single Cinemachine.CinemachineOrbitalTransposer/Heading::m_Bias
	float ___m_Bias_2;

public:
	inline static int32_t get_offset_of_m_Definition_0() { return static_cast<int32_t>(offsetof(Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9, ___m_Definition_0)); }
	inline int32_t get_m_Definition_0() const { return ___m_Definition_0; }
	inline int32_t* get_address_of_m_Definition_0() { return &___m_Definition_0; }
	inline void set_m_Definition_0(int32_t value)
	{
		___m_Definition_0 = value;
	}

	inline static int32_t get_offset_of_m_VelocityFilterStrength_1() { return static_cast<int32_t>(offsetof(Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9, ___m_VelocityFilterStrength_1)); }
	inline int32_t get_m_VelocityFilterStrength_1() const { return ___m_VelocityFilterStrength_1; }
	inline int32_t* get_address_of_m_VelocityFilterStrength_1() { return &___m_VelocityFilterStrength_1; }
	inline void set_m_VelocityFilterStrength_1(int32_t value)
	{
		___m_VelocityFilterStrength_1 = value;
	}

	inline static int32_t get_offset_of_m_Bias_2() { return static_cast<int32_t>(offsetof(Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9, ___m_Bias_2)); }
	inline float get_m_Bias_2() const { return ___m_Bias_2; }
	inline float* get_address_of_m_Bias_2() { return &___m_Bias_2; }
	inline void set_m_Bias_2(float value)
	{
		___m_Bias_2 = value;
	}
};


// Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C 
{
public:
	// Cinemachine.CinemachineVirtualCameraBase/BlendHint Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_BlendHint
	int32_t ___m_BlendHint_0;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_InheritPosition
	bool ___m_InheritPosition_1;
	// Cinemachine.CinemachineBrain/VcamActivatedEvent Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_OnCameraLive
	VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * ___m_OnCameraLive_2;

public:
	inline static int32_t get_offset_of_m_BlendHint_0() { return static_cast<int32_t>(offsetof(TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C, ___m_BlendHint_0)); }
	inline int32_t get_m_BlendHint_0() const { return ___m_BlendHint_0; }
	inline int32_t* get_address_of_m_BlendHint_0() { return &___m_BlendHint_0; }
	inline void set_m_BlendHint_0(int32_t value)
	{
		___m_BlendHint_0 = value;
	}

	inline static int32_t get_offset_of_m_InheritPosition_1() { return static_cast<int32_t>(offsetof(TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C, ___m_InheritPosition_1)); }
	inline bool get_m_InheritPosition_1() const { return ___m_InheritPosition_1; }
	inline bool* get_address_of_m_InheritPosition_1() { return &___m_InheritPosition_1; }
	inline void set_m_InheritPosition_1(bool value)
	{
		___m_InheritPosition_1 = value;
	}

	inline static int32_t get_offset_of_m_OnCameraLive_2() { return static_cast<int32_t>(offsetof(TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C, ___m_OnCameraLive_2)); }
	inline VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * get_m_OnCameraLive_2() const { return ___m_OnCameraLive_2; }
	inline VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 ** get_address_of_m_OnCameraLive_2() { return &___m_OnCameraLive_2; }
	inline void set_m_OnCameraLive_2(VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * value)
	{
		___m_OnCameraLive_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCameraLive_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C_marshaled_pinvoke
{
	int32_t ___m_BlendHint_0;
	int32_t ___m_InheritPosition_1;
	VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * ___m_OnCameraLive_2;
};
// Native definition for COM marshalling of Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C_marshaled_com
{
	int32_t ___m_BlendHint_0;
	int32_t ___m_InheritPosition_1;
	VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * ___m_OnCameraLive_2;
};

// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Cinemachine.CinemachineImpulseDefinition
struct CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9  : public RuntimeObject
{
public:
	// System.Int32 Cinemachine.CinemachineImpulseDefinition::m_ImpulseChannel
	int32_t ___m_ImpulseChannel_0;
	// Cinemachine.SignalSourceAsset Cinemachine.CinemachineImpulseDefinition::m_RawSignal
	SignalSourceAsset_tFFAC68BDCF8F378E0457B134CA66B4A72722D52B * ___m_RawSignal_1;
	// System.Single Cinemachine.CinemachineImpulseDefinition::m_AmplitudeGain
	float ___m_AmplitudeGain_2;
	// System.Single Cinemachine.CinemachineImpulseDefinition::m_FrequencyGain
	float ___m_FrequencyGain_3;
	// Cinemachine.CinemachineImpulseDefinition/RepeatMode Cinemachine.CinemachineImpulseDefinition::m_RepeatMode
	int32_t ___m_RepeatMode_4;
	// System.Boolean Cinemachine.CinemachineImpulseDefinition::m_Randomize
	bool ___m_Randomize_5;
	// Cinemachine.CinemachineImpulseManager/EnvelopeDefinition Cinemachine.CinemachineImpulseDefinition::m_TimeEnvelope
	EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7  ___m_TimeEnvelope_6;
	// System.Single Cinemachine.CinemachineImpulseDefinition::m_ImpactRadius
	float ___m_ImpactRadius_7;
	// Cinemachine.CinemachineImpulseManager/ImpulseEvent/DirectionMode Cinemachine.CinemachineImpulseDefinition::m_DirectionMode
	int32_t ___m_DirectionMode_8;
	// Cinemachine.CinemachineImpulseManager/ImpulseEvent/DissipationMode Cinemachine.CinemachineImpulseDefinition::m_DissipationMode
	int32_t ___m_DissipationMode_9;
	// System.Single Cinemachine.CinemachineImpulseDefinition::m_DissipationDistance
	float ___m_DissipationDistance_10;
	// System.Single Cinemachine.CinemachineImpulseDefinition::m_PropagationSpeed
	float ___m_PropagationSpeed_11;

public:
	inline static int32_t get_offset_of_m_ImpulseChannel_0() { return static_cast<int32_t>(offsetof(CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9, ___m_ImpulseChannel_0)); }
	inline int32_t get_m_ImpulseChannel_0() const { return ___m_ImpulseChannel_0; }
	inline int32_t* get_address_of_m_ImpulseChannel_0() { return &___m_ImpulseChannel_0; }
	inline void set_m_ImpulseChannel_0(int32_t value)
	{
		___m_ImpulseChannel_0 = value;
	}

	inline static int32_t get_offset_of_m_RawSignal_1() { return static_cast<int32_t>(offsetof(CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9, ___m_RawSignal_1)); }
	inline SignalSourceAsset_tFFAC68BDCF8F378E0457B134CA66B4A72722D52B * get_m_RawSignal_1() const { return ___m_RawSignal_1; }
	inline SignalSourceAsset_tFFAC68BDCF8F378E0457B134CA66B4A72722D52B ** get_address_of_m_RawSignal_1() { return &___m_RawSignal_1; }
	inline void set_m_RawSignal_1(SignalSourceAsset_tFFAC68BDCF8F378E0457B134CA66B4A72722D52B * value)
	{
		___m_RawSignal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RawSignal_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_AmplitudeGain_2() { return static_cast<int32_t>(offsetof(CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9, ___m_AmplitudeGain_2)); }
	inline float get_m_AmplitudeGain_2() const { return ___m_AmplitudeGain_2; }
	inline float* get_address_of_m_AmplitudeGain_2() { return &___m_AmplitudeGain_2; }
	inline void set_m_AmplitudeGain_2(float value)
	{
		___m_AmplitudeGain_2 = value;
	}

	inline static int32_t get_offset_of_m_FrequencyGain_3() { return static_cast<int32_t>(offsetof(CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9, ___m_FrequencyGain_3)); }
	inline float get_m_FrequencyGain_3() const { return ___m_FrequencyGain_3; }
	inline float* get_address_of_m_FrequencyGain_3() { return &___m_FrequencyGain_3; }
	inline void set_m_FrequencyGain_3(float value)
	{
		___m_FrequencyGain_3 = value;
	}

	inline static int32_t get_offset_of_m_RepeatMode_4() { return static_cast<int32_t>(offsetof(CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9, ___m_RepeatMode_4)); }
	inline int32_t get_m_RepeatMode_4() const { return ___m_RepeatMode_4; }
	inline int32_t* get_address_of_m_RepeatMode_4() { return &___m_RepeatMode_4; }
	inline void set_m_RepeatMode_4(int32_t value)
	{
		___m_RepeatMode_4 = value;
	}

	inline static int32_t get_offset_of_m_Randomize_5() { return static_cast<int32_t>(offsetof(CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9, ___m_Randomize_5)); }
	inline bool get_m_Randomize_5() const { return ___m_Randomize_5; }
	inline bool* get_address_of_m_Randomize_5() { return &___m_Randomize_5; }
	inline void set_m_Randomize_5(bool value)
	{
		___m_Randomize_5 = value;
	}

	inline static int32_t get_offset_of_m_TimeEnvelope_6() { return static_cast<int32_t>(offsetof(CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9, ___m_TimeEnvelope_6)); }
	inline EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7  get_m_TimeEnvelope_6() const { return ___m_TimeEnvelope_6; }
	inline EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 * get_address_of_m_TimeEnvelope_6() { return &___m_TimeEnvelope_6; }
	inline void set_m_TimeEnvelope_6(EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7  value)
	{
		___m_TimeEnvelope_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_TimeEnvelope_6))->___m_AttackShape_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_TimeEnvelope_6))->___m_DecayShape_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_ImpactRadius_7() { return static_cast<int32_t>(offsetof(CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9, ___m_ImpactRadius_7)); }
	inline float get_m_ImpactRadius_7() const { return ___m_ImpactRadius_7; }
	inline float* get_address_of_m_ImpactRadius_7() { return &___m_ImpactRadius_7; }
	inline void set_m_ImpactRadius_7(float value)
	{
		___m_ImpactRadius_7 = value;
	}

	inline static int32_t get_offset_of_m_DirectionMode_8() { return static_cast<int32_t>(offsetof(CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9, ___m_DirectionMode_8)); }
	inline int32_t get_m_DirectionMode_8() const { return ___m_DirectionMode_8; }
	inline int32_t* get_address_of_m_DirectionMode_8() { return &___m_DirectionMode_8; }
	inline void set_m_DirectionMode_8(int32_t value)
	{
		___m_DirectionMode_8 = value;
	}

	inline static int32_t get_offset_of_m_DissipationMode_9() { return static_cast<int32_t>(offsetof(CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9, ___m_DissipationMode_9)); }
	inline int32_t get_m_DissipationMode_9() const { return ___m_DissipationMode_9; }
	inline int32_t* get_address_of_m_DissipationMode_9() { return &___m_DissipationMode_9; }
	inline void set_m_DissipationMode_9(int32_t value)
	{
		___m_DissipationMode_9 = value;
	}

	inline static int32_t get_offset_of_m_DissipationDistance_10() { return static_cast<int32_t>(offsetof(CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9, ___m_DissipationDistance_10)); }
	inline float get_m_DissipationDistance_10() const { return ___m_DissipationDistance_10; }
	inline float* get_address_of_m_DissipationDistance_10() { return &___m_DissipationDistance_10; }
	inline void set_m_DissipationDistance_10(float value)
	{
		___m_DissipationDistance_10 = value;
	}

	inline static int32_t get_offset_of_m_PropagationSpeed_11() { return static_cast<int32_t>(offsetof(CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9, ___m_PropagationSpeed_11)); }
	inline float get_m_PropagationSpeed_11() const { return ___m_PropagationSpeed_11; }
	inline float* get_address_of_m_PropagationSpeed_11() { return &___m_PropagationSpeed_11; }
	inline void set_m_PropagationSpeed_11(float value)
	{
		___m_PropagationSpeed_11 = value;
	}
};


// MoreMountains.FeedbacksForThirdParty.MMF_CinemachineTransition
struct MMF_CinemachineTransition_t42B21AC879EC6A99B2D1F828D0B797E1B93F990C  : public MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06
{
public:
	// MoreMountains.FeedbacksForThirdParty.MMF_CinemachineTransition/Modes MoreMountains.FeedbacksForThirdParty.MMF_CinemachineTransition::Mode
	int32_t ___Mode_28;
	// Cinemachine.CinemachineVirtualCamera MoreMountains.FeedbacksForThirdParty.MMF_CinemachineTransition::TargetVirtualCamera
	CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * ___TargetVirtualCamera_29;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMF_CinemachineTransition::ResetValuesAfterTransition
	bool ___ResetValuesAfterTransition_30;
	// System.Int32 MoreMountains.FeedbacksForThirdParty.MMF_CinemachineTransition::NewPriority
	int32_t ___NewPriority_31;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMF_CinemachineTransition::ForceMaxPriority
	bool ___ForceMaxPriority_32;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMF_CinemachineTransition::ForceTransition
	bool ___ForceTransition_33;
	// Cinemachine.CinemachineBlendDefinition MoreMountains.FeedbacksForThirdParty.MMF_CinemachineTransition::BlendDefintion
	CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  ___BlendDefintion_34;
	// Cinemachine.CinemachineBlendDefinition MoreMountains.FeedbacksForThirdParty.MMF_CinemachineTransition::_tempBlend
	CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  ____tempBlend_35;

public:
	inline static int32_t get_offset_of_Mode_28() { return static_cast<int32_t>(offsetof(MMF_CinemachineTransition_t42B21AC879EC6A99B2D1F828D0B797E1B93F990C, ___Mode_28)); }
	inline int32_t get_Mode_28() const { return ___Mode_28; }
	inline int32_t* get_address_of_Mode_28() { return &___Mode_28; }
	inline void set_Mode_28(int32_t value)
	{
		___Mode_28 = value;
	}

	inline static int32_t get_offset_of_TargetVirtualCamera_29() { return static_cast<int32_t>(offsetof(MMF_CinemachineTransition_t42B21AC879EC6A99B2D1F828D0B797E1B93F990C, ___TargetVirtualCamera_29)); }
	inline CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * get_TargetVirtualCamera_29() const { return ___TargetVirtualCamera_29; }
	inline CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C ** get_address_of_TargetVirtualCamera_29() { return &___TargetVirtualCamera_29; }
	inline void set_TargetVirtualCamera_29(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * value)
	{
		___TargetVirtualCamera_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetVirtualCamera_29), (void*)value);
	}

	inline static int32_t get_offset_of_ResetValuesAfterTransition_30() { return static_cast<int32_t>(offsetof(MMF_CinemachineTransition_t42B21AC879EC6A99B2D1F828D0B797E1B93F990C, ___ResetValuesAfterTransition_30)); }
	inline bool get_ResetValuesAfterTransition_30() const { return ___ResetValuesAfterTransition_30; }
	inline bool* get_address_of_ResetValuesAfterTransition_30() { return &___ResetValuesAfterTransition_30; }
	inline void set_ResetValuesAfterTransition_30(bool value)
	{
		___ResetValuesAfterTransition_30 = value;
	}

	inline static int32_t get_offset_of_NewPriority_31() { return static_cast<int32_t>(offsetof(MMF_CinemachineTransition_t42B21AC879EC6A99B2D1F828D0B797E1B93F990C, ___NewPriority_31)); }
	inline int32_t get_NewPriority_31() const { return ___NewPriority_31; }
	inline int32_t* get_address_of_NewPriority_31() { return &___NewPriority_31; }
	inline void set_NewPriority_31(int32_t value)
	{
		___NewPriority_31 = value;
	}

	inline static int32_t get_offset_of_ForceMaxPriority_32() { return static_cast<int32_t>(offsetof(MMF_CinemachineTransition_t42B21AC879EC6A99B2D1F828D0B797E1B93F990C, ___ForceMaxPriority_32)); }
	inline bool get_ForceMaxPriority_32() const { return ___ForceMaxPriority_32; }
	inline bool* get_address_of_ForceMaxPriority_32() { return &___ForceMaxPriority_32; }
	inline void set_ForceMaxPriority_32(bool value)
	{
		___ForceMaxPriority_32 = value;
	}

	inline static int32_t get_offset_of_ForceTransition_33() { return static_cast<int32_t>(offsetof(MMF_CinemachineTransition_t42B21AC879EC6A99B2D1F828D0B797E1B93F990C, ___ForceTransition_33)); }
	inline bool get_ForceTransition_33() const { return ___ForceTransition_33; }
	inline bool* get_address_of_ForceTransition_33() { return &___ForceTransition_33; }
	inline void set_ForceTransition_33(bool value)
	{
		___ForceTransition_33 = value;
	}

	inline static int32_t get_offset_of_BlendDefintion_34() { return static_cast<int32_t>(offsetof(MMF_CinemachineTransition_t42B21AC879EC6A99B2D1F828D0B797E1B93F990C, ___BlendDefintion_34)); }
	inline CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  get_BlendDefintion_34() const { return ___BlendDefintion_34; }
	inline CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE * get_address_of_BlendDefintion_34() { return &___BlendDefintion_34; }
	inline void set_BlendDefintion_34(CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  value)
	{
		___BlendDefintion_34 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___BlendDefintion_34))->___m_CustomCurve_2), (void*)NULL);
	}

	inline static int32_t get_offset_of__tempBlend_35() { return static_cast<int32_t>(offsetof(MMF_CinemachineTransition_t42B21AC879EC6A99B2D1F828D0B797E1B93F990C, ____tempBlend_35)); }
	inline CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  get__tempBlend_35() const { return ____tempBlend_35; }
	inline CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE * get_address_of__tempBlend_35() { return &____tempBlend_35; }
	inline void set__tempBlend_35(CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  value)
	{
		____tempBlend_35 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____tempBlend_35))->___m_CustomCurve_2), (void*)NULL);
	}
};

struct MMF_CinemachineTransition_t42B21AC879EC6A99B2D1F828D0B797E1B93F990C_StaticFields
{
public:
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMF_CinemachineTransition::FeedbackTypeAuthorized
	bool ___FeedbackTypeAuthorized_27;

public:
	inline static int32_t get_offset_of_FeedbackTypeAuthorized_27() { return static_cast<int32_t>(offsetof(MMF_CinemachineTransition_t42B21AC879EC6A99B2D1F828D0B797E1B93F990C_StaticFields, ___FeedbackTypeAuthorized_27)); }
	inline bool get_FeedbackTypeAuthorized_27() const { return ___FeedbackTypeAuthorized_27; }
	inline bool* get_address_of_FeedbackTypeAuthorized_27() { return &___FeedbackTypeAuthorized_27; }
	inline void set_FeedbackTypeAuthorized_27(bool value)
	{
		___FeedbackTypeAuthorized_27 = value;
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// MoreMountains.Feedbacks.MMCameraClippingPlanesShakeEvent/Delegate
struct Delegate_tB4E81FE04A8668FC7DEC066E526E461E23A9C691  : public MulticastDelegate_t
{
public:

public:
};


// MoreMountains.Feedbacks.MMCameraFieldOfViewShakeEvent/Delegate
struct Delegate_t48AE9BB71693BEE6E672E6488338BA364A814D73  : public MulticastDelegate_t
{
public:

public:
};


// MoreMountains.Feedbacks.MMCameraOrthographicSizeShakeEvent/Delegate
struct Delegate_t5BE222D6A1E18E8E78F7B9F81C6AEC2C7CF03FCD  : public MulticastDelegate_t
{
public:

public:
};


// MoreMountains.Feedbacks.MMCameraShakeEvent/Delegate
struct Delegate_t4C3689743AE14898C38CE0B0C0780290B304655A  : public MulticastDelegate_t
{
public:

public:
};


// MoreMountains.Feedbacks.MMCameraShakeStopEvent/Delegate
struct Delegate_t40EA96416BE4B536B0071884D5B9BC356FB0B7C5  : public MulticastDelegate_t
{
public:

public:
};


// MoreMountains.Feedbacks.MMCameraZoomEvent/Delegate
struct Delegate_tAFFC0495409F3E38D283E26C7E2DF6CDC19DFA62  : public MulticastDelegate_t
{
public:

public:
};


// MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityEvent/Delegate
struct Delegate_t3A4FFBD4695433763584A759E677E31CC6775217  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Cinemachine.CinemachineBrain
struct CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Cinemachine.CinemachineBrain::m_ShowDebugText
	bool ___m_ShowDebugText_4;
	// System.Boolean Cinemachine.CinemachineBrain::m_ShowCameraFrustum
	bool ___m_ShowCameraFrustum_5;
	// System.Boolean Cinemachine.CinemachineBrain::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_6;
	// UnityEngine.Transform Cinemachine.CinemachineBrain::m_WorldUpOverride
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_WorldUpOverride_7;
	// Cinemachine.CinemachineBrain/UpdateMethod Cinemachine.CinemachineBrain::m_UpdateMethod
	int32_t ___m_UpdateMethod_8;
	// Cinemachine.CinemachineBrain/BrainUpdateMethod Cinemachine.CinemachineBrain::m_BlendUpdateMethod
	int32_t ___m_BlendUpdateMethod_9;
	// Cinemachine.CinemachineBlendDefinition Cinemachine.CinemachineBrain::m_DefaultBlend
	CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  ___m_DefaultBlend_10;
	// Cinemachine.CinemachineBlenderSettings Cinemachine.CinemachineBrain::m_CustomBlends
	CinemachineBlenderSettings_tCF3367AA417C05816117E15FE608928CAF40554F * ___m_CustomBlends_11;
	// UnityEngine.Camera Cinemachine.CinemachineBrain::m_OutputCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___m_OutputCamera_12;
	// Cinemachine.CinemachineBrain/BrainEvent Cinemachine.CinemachineBrain::m_CameraCutEvent
	BrainEvent_t7DDC9AFC269C95A82A9348F1F7120BA402DCFE5E * ___m_CameraCutEvent_13;
	// Cinemachine.CinemachineBrain/VcamActivatedEvent Cinemachine.CinemachineBrain::m_CameraActivatedEvent
	VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * ___m_CameraActivatedEvent_14;
	// UnityEngine.Coroutine Cinemachine.CinemachineBrain::mPhysicsCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___mPhysicsCoroutine_16;
	// System.Int32 Cinemachine.CinemachineBrain::m_LastFrameUpdated
	int32_t ___m_LastFrameUpdated_17;
	// UnityEngine.WaitForFixedUpdate Cinemachine.CinemachineBrain::mWaitForFixedUpdate
	WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * ___mWaitForFixedUpdate_18;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineBrain/BrainFrame> Cinemachine.CinemachineBrain::mFrameStack
	List_1_t7047292520C88A40E765EA61E967062F583F6C2A * ___mFrameStack_19;
	// System.Int32 Cinemachine.CinemachineBrain::mNextFrameId
	int32_t ___mNextFrameId_20;
	// Cinemachine.CinemachineBlend Cinemachine.CinemachineBrain::mCurrentLiveCameras
	CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * ___mCurrentLiveCameras_21;
	// Cinemachine.ICinemachineCamera Cinemachine.CinemachineBrain::mActiveCameraPreviousFrame
	RuntimeObject* ___mActiveCameraPreviousFrame_23;
	// Cinemachine.CameraState Cinemachine.CinemachineBrain::<CurrentCameraState>k__BackingField
	CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601  ___U3CCurrentCameraStateU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_ShowDebugText_4() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_ShowDebugText_4)); }
	inline bool get_m_ShowDebugText_4() const { return ___m_ShowDebugText_4; }
	inline bool* get_address_of_m_ShowDebugText_4() { return &___m_ShowDebugText_4; }
	inline void set_m_ShowDebugText_4(bool value)
	{
		___m_ShowDebugText_4 = value;
	}

	inline static int32_t get_offset_of_m_ShowCameraFrustum_5() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_ShowCameraFrustum_5)); }
	inline bool get_m_ShowCameraFrustum_5() const { return ___m_ShowCameraFrustum_5; }
	inline bool* get_address_of_m_ShowCameraFrustum_5() { return &___m_ShowCameraFrustum_5; }
	inline void set_m_ShowCameraFrustum_5(bool value)
	{
		___m_ShowCameraFrustum_5 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_6() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_IgnoreTimeScale_6)); }
	inline bool get_m_IgnoreTimeScale_6() const { return ___m_IgnoreTimeScale_6; }
	inline bool* get_address_of_m_IgnoreTimeScale_6() { return &___m_IgnoreTimeScale_6; }
	inline void set_m_IgnoreTimeScale_6(bool value)
	{
		___m_IgnoreTimeScale_6 = value;
	}

	inline static int32_t get_offset_of_m_WorldUpOverride_7() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_WorldUpOverride_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_WorldUpOverride_7() const { return ___m_WorldUpOverride_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_WorldUpOverride_7() { return &___m_WorldUpOverride_7; }
	inline void set_m_WorldUpOverride_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_WorldUpOverride_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WorldUpOverride_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_UpdateMethod_8() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_UpdateMethod_8)); }
	inline int32_t get_m_UpdateMethod_8() const { return ___m_UpdateMethod_8; }
	inline int32_t* get_address_of_m_UpdateMethod_8() { return &___m_UpdateMethod_8; }
	inline void set_m_UpdateMethod_8(int32_t value)
	{
		___m_UpdateMethod_8 = value;
	}

	inline static int32_t get_offset_of_m_BlendUpdateMethod_9() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_BlendUpdateMethod_9)); }
	inline int32_t get_m_BlendUpdateMethod_9() const { return ___m_BlendUpdateMethod_9; }
	inline int32_t* get_address_of_m_BlendUpdateMethod_9() { return &___m_BlendUpdateMethod_9; }
	inline void set_m_BlendUpdateMethod_9(int32_t value)
	{
		___m_BlendUpdateMethod_9 = value;
	}

	inline static int32_t get_offset_of_m_DefaultBlend_10() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_DefaultBlend_10)); }
	inline CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  get_m_DefaultBlend_10() const { return ___m_DefaultBlend_10; }
	inline CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE * get_address_of_m_DefaultBlend_10() { return &___m_DefaultBlend_10; }
	inline void set_m_DefaultBlend_10(CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  value)
	{
		___m_DefaultBlend_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultBlend_10))->___m_CustomCurve_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_CustomBlends_11() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_CustomBlends_11)); }
	inline CinemachineBlenderSettings_tCF3367AA417C05816117E15FE608928CAF40554F * get_m_CustomBlends_11() const { return ___m_CustomBlends_11; }
	inline CinemachineBlenderSettings_tCF3367AA417C05816117E15FE608928CAF40554F ** get_address_of_m_CustomBlends_11() { return &___m_CustomBlends_11; }
	inline void set_m_CustomBlends_11(CinemachineBlenderSettings_tCF3367AA417C05816117E15FE608928CAF40554F * value)
	{
		___m_CustomBlends_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomBlends_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_OutputCamera_12() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_OutputCamera_12)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_m_OutputCamera_12() const { return ___m_OutputCamera_12; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_m_OutputCamera_12() { return &___m_OutputCamera_12; }
	inline void set_m_OutputCamera_12(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___m_OutputCamera_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OutputCamera_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CameraCutEvent_13() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_CameraCutEvent_13)); }
	inline BrainEvent_t7DDC9AFC269C95A82A9348F1F7120BA402DCFE5E * get_m_CameraCutEvent_13() const { return ___m_CameraCutEvent_13; }
	inline BrainEvent_t7DDC9AFC269C95A82A9348F1F7120BA402DCFE5E ** get_address_of_m_CameraCutEvent_13() { return &___m_CameraCutEvent_13; }
	inline void set_m_CameraCutEvent_13(BrainEvent_t7DDC9AFC269C95A82A9348F1F7120BA402DCFE5E * value)
	{
		___m_CameraCutEvent_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CameraCutEvent_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_CameraActivatedEvent_14() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_CameraActivatedEvent_14)); }
	inline VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * get_m_CameraActivatedEvent_14() const { return ___m_CameraActivatedEvent_14; }
	inline VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 ** get_address_of_m_CameraActivatedEvent_14() { return &___m_CameraActivatedEvent_14; }
	inline void set_m_CameraActivatedEvent_14(VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * value)
	{
		___m_CameraActivatedEvent_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CameraActivatedEvent_14), (void*)value);
	}

	inline static int32_t get_offset_of_mPhysicsCoroutine_16() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___mPhysicsCoroutine_16)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_mPhysicsCoroutine_16() const { return ___mPhysicsCoroutine_16; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_mPhysicsCoroutine_16() { return &___mPhysicsCoroutine_16; }
	inline void set_mPhysicsCoroutine_16(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___mPhysicsCoroutine_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPhysicsCoroutine_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastFrameUpdated_17() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_LastFrameUpdated_17)); }
	inline int32_t get_m_LastFrameUpdated_17() const { return ___m_LastFrameUpdated_17; }
	inline int32_t* get_address_of_m_LastFrameUpdated_17() { return &___m_LastFrameUpdated_17; }
	inline void set_m_LastFrameUpdated_17(int32_t value)
	{
		___m_LastFrameUpdated_17 = value;
	}

	inline static int32_t get_offset_of_mWaitForFixedUpdate_18() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___mWaitForFixedUpdate_18)); }
	inline WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * get_mWaitForFixedUpdate_18() const { return ___mWaitForFixedUpdate_18; }
	inline WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 ** get_address_of_mWaitForFixedUpdate_18() { return &___mWaitForFixedUpdate_18; }
	inline void set_mWaitForFixedUpdate_18(WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * value)
	{
		___mWaitForFixedUpdate_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mWaitForFixedUpdate_18), (void*)value);
	}

	inline static int32_t get_offset_of_mFrameStack_19() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___mFrameStack_19)); }
	inline List_1_t7047292520C88A40E765EA61E967062F583F6C2A * get_mFrameStack_19() const { return ___mFrameStack_19; }
	inline List_1_t7047292520C88A40E765EA61E967062F583F6C2A ** get_address_of_mFrameStack_19() { return &___mFrameStack_19; }
	inline void set_mFrameStack_19(List_1_t7047292520C88A40E765EA61E967062F583F6C2A * value)
	{
		___mFrameStack_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mFrameStack_19), (void*)value);
	}

	inline static int32_t get_offset_of_mNextFrameId_20() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___mNextFrameId_20)); }
	inline int32_t get_mNextFrameId_20() const { return ___mNextFrameId_20; }
	inline int32_t* get_address_of_mNextFrameId_20() { return &___mNextFrameId_20; }
	inline void set_mNextFrameId_20(int32_t value)
	{
		___mNextFrameId_20 = value;
	}

	inline static int32_t get_offset_of_mCurrentLiveCameras_21() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___mCurrentLiveCameras_21)); }
	inline CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * get_mCurrentLiveCameras_21() const { return ___mCurrentLiveCameras_21; }
	inline CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C ** get_address_of_mCurrentLiveCameras_21() { return &___mCurrentLiveCameras_21; }
	inline void set_mCurrentLiveCameras_21(CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * value)
	{
		___mCurrentLiveCameras_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCurrentLiveCameras_21), (void*)value);
	}

	inline static int32_t get_offset_of_mActiveCameraPreviousFrame_23() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___mActiveCameraPreviousFrame_23)); }
	inline RuntimeObject* get_mActiveCameraPreviousFrame_23() const { return ___mActiveCameraPreviousFrame_23; }
	inline RuntimeObject** get_address_of_mActiveCameraPreviousFrame_23() { return &___mActiveCameraPreviousFrame_23; }
	inline void set_mActiveCameraPreviousFrame_23(RuntimeObject* value)
	{
		___mActiveCameraPreviousFrame_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveCameraPreviousFrame_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentCameraStateU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___U3CCurrentCameraStateU3Ek__BackingField_24)); }
	inline CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601  get_U3CCurrentCameraStateU3Ek__BackingField_24() const { return ___U3CCurrentCameraStateU3Ek__BackingField_24; }
	inline CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601 * get_address_of_U3CCurrentCameraStateU3Ek__BackingField_24() { return &___U3CCurrentCameraStateU3Ek__BackingField_24; }
	inline void set_U3CCurrentCameraStateU3Ek__BackingField_24(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601  value)
	{
		___U3CCurrentCameraStateU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CCurrentCameraStateU3Ek__BackingField_24))->___mCustom0_11))->___m_Custom_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CCurrentCameraStateU3Ek__BackingField_24))->___mCustom1_12))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CCurrentCameraStateU3Ek__BackingField_24))->___mCustom2_13))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CCurrentCameraStateU3Ek__BackingField_24))->___mCustom3_14))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCurrentCameraStateU3Ek__BackingField_24))->___m_CustomOverflow_15), (void*)NULL);
		#endif
	}
};

struct CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83_StaticFields
{
public:
	// Cinemachine.ICinemachineCamera Cinemachine.CinemachineBrain::mSoloCamera
	RuntimeObject* ___mSoloCamera_15;
	// UnityEngine.AnimationCurve Cinemachine.CinemachineBrain::mDefaultLinearAnimationCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___mDefaultLinearAnimationCurve_22;

public:
	inline static int32_t get_offset_of_mSoloCamera_15() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83_StaticFields, ___mSoloCamera_15)); }
	inline RuntimeObject* get_mSoloCamera_15() const { return ___mSoloCamera_15; }
	inline RuntimeObject** get_address_of_mSoloCamera_15() { return &___mSoloCamera_15; }
	inline void set_mSoloCamera_15(RuntimeObject* value)
	{
		___mSoloCamera_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mSoloCamera_15), (void*)value);
	}

	inline static int32_t get_offset_of_mDefaultLinearAnimationCurve_22() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83_StaticFields, ___mDefaultLinearAnimationCurve_22)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_mDefaultLinearAnimationCurve_22() const { return ___mDefaultLinearAnimationCurve_22; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_mDefaultLinearAnimationCurve_22() { return &___mDefaultLinearAnimationCurve_22; }
	inline void set_mDefaultLinearAnimationCurve_22(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___mDefaultLinearAnimationCurve_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDefaultLinearAnimationCurve_22), (void*)value);
	}
};


// Cinemachine.CinemachineComponentBase
struct CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineComponentBase::m_vcamOwner
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___m_vcamOwner_5;
	// UnityEngine.Transform Cinemachine.CinemachineComponentBase::mCachedFollowTarget
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___mCachedFollowTarget_6;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineComponentBase::mCachedFollowTargetVcam
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___mCachedFollowTargetVcam_7;
	// Cinemachine.ICinemachineTargetGroup Cinemachine.CinemachineComponentBase::mCachedFollowTargetGroup
	RuntimeObject* ___mCachedFollowTargetGroup_8;
	// UnityEngine.Transform Cinemachine.CinemachineComponentBase::mCachedLookAtTarget
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___mCachedLookAtTarget_9;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineComponentBase::mCachedLookAtTargetVcam
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___mCachedLookAtTargetVcam_10;
	// Cinemachine.ICinemachineTargetGroup Cinemachine.CinemachineComponentBase::mCachedLookAtTargetGroup
	RuntimeObject* ___mCachedLookAtTargetGroup_11;

public:
	inline static int32_t get_offset_of_m_vcamOwner_5() { return static_cast<int32_t>(offsetof(CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D, ___m_vcamOwner_5)); }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * get_m_vcamOwner_5() const { return ___m_vcamOwner_5; }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 ** get_address_of_m_vcamOwner_5() { return &___m_vcamOwner_5; }
	inline void set_m_vcamOwner_5(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * value)
	{
		___m_vcamOwner_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_vcamOwner_5), (void*)value);
	}

	inline static int32_t get_offset_of_mCachedFollowTarget_6() { return static_cast<int32_t>(offsetof(CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D, ___mCachedFollowTarget_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_mCachedFollowTarget_6() const { return ___mCachedFollowTarget_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_mCachedFollowTarget_6() { return &___mCachedFollowTarget_6; }
	inline void set_mCachedFollowTarget_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___mCachedFollowTarget_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCachedFollowTarget_6), (void*)value);
	}

	inline static int32_t get_offset_of_mCachedFollowTargetVcam_7() { return static_cast<int32_t>(offsetof(CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D, ___mCachedFollowTargetVcam_7)); }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * get_mCachedFollowTargetVcam_7() const { return ___mCachedFollowTargetVcam_7; }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 ** get_address_of_mCachedFollowTargetVcam_7() { return &___mCachedFollowTargetVcam_7; }
	inline void set_mCachedFollowTargetVcam_7(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * value)
	{
		___mCachedFollowTargetVcam_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCachedFollowTargetVcam_7), (void*)value);
	}

	inline static int32_t get_offset_of_mCachedFollowTargetGroup_8() { return static_cast<int32_t>(offsetof(CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D, ___mCachedFollowTargetGroup_8)); }
	inline RuntimeObject* get_mCachedFollowTargetGroup_8() const { return ___mCachedFollowTargetGroup_8; }
	inline RuntimeObject** get_address_of_mCachedFollowTargetGroup_8() { return &___mCachedFollowTargetGroup_8; }
	inline void set_mCachedFollowTargetGroup_8(RuntimeObject* value)
	{
		___mCachedFollowTargetGroup_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCachedFollowTargetGroup_8), (void*)value);
	}

	inline static int32_t get_offset_of_mCachedLookAtTarget_9() { return static_cast<int32_t>(offsetof(CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D, ___mCachedLookAtTarget_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_mCachedLookAtTarget_9() const { return ___mCachedLookAtTarget_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_mCachedLookAtTarget_9() { return &___mCachedLookAtTarget_9; }
	inline void set_mCachedLookAtTarget_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___mCachedLookAtTarget_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCachedLookAtTarget_9), (void*)value);
	}

	inline static int32_t get_offset_of_mCachedLookAtTargetVcam_10() { return static_cast<int32_t>(offsetof(CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D, ___mCachedLookAtTargetVcam_10)); }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * get_mCachedLookAtTargetVcam_10() const { return ___mCachedLookAtTargetVcam_10; }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 ** get_address_of_mCachedLookAtTargetVcam_10() { return &___mCachedLookAtTargetVcam_10; }
	inline void set_mCachedLookAtTargetVcam_10(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * value)
	{
		___mCachedLookAtTargetVcam_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCachedLookAtTargetVcam_10), (void*)value);
	}

	inline static int32_t get_offset_of_mCachedLookAtTargetGroup_11() { return static_cast<int32_t>(offsetof(CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D, ___mCachedLookAtTargetGroup_11)); }
	inline RuntimeObject* get_mCachedLookAtTargetGroup_11() const { return ___mCachedLookAtTargetGroup_11; }
	inline RuntimeObject** get_address_of_mCachedLookAtTargetGroup_11() { return &___mCachedLookAtTargetGroup_11; }
	inline void set_mCachedLookAtTargetGroup_11(RuntimeObject* value)
	{
		___mCachedLookAtTargetGroup_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCachedLookAtTargetGroup_11), (void*)value);
	}
};


// Cinemachine.CinemachineImpulseSource
struct CinemachineImpulseSource_t7EFCA284734A8CB50F0B45CDDF6BB924DA73998D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Cinemachine.CinemachineImpulseDefinition Cinemachine.CinemachineImpulseSource::m_ImpulseDefinition
	CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9 * ___m_ImpulseDefinition_4;

public:
	inline static int32_t get_offset_of_m_ImpulseDefinition_4() { return static_cast<int32_t>(offsetof(CinemachineImpulseSource_t7EFCA284734A8CB50F0B45CDDF6BB924DA73998D, ___m_ImpulseDefinition_4)); }
	inline CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9 * get_m_ImpulseDefinition_4() const { return ___m_ImpulseDefinition_4; }
	inline CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9 ** get_address_of_m_ImpulseDefinition_4() { return &___m_ImpulseDefinition_4; }
	inline void set_m_ImpulseDefinition_4(CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9 * value)
	{
		___m_ImpulseDefinition_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ImpulseDefinition_4), (void*)value);
	}
};


// Cinemachine.CinemachineVirtualCameraBase
struct CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String[] Cinemachine.CinemachineVirtualCameraBase::m_ExcludedPropertiesInInspector
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_ExcludedPropertiesInInspector_4;
	// Cinemachine.CinemachineCore/Stage[] Cinemachine.CinemachineVirtualCameraBase::m_LockStageInInspector
	StageU5BU5D_t605193BD653BA57911AFE8A2D01B1D799F7BB949* ___m_LockStageInInspector_5;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_ValidatingStreamVersion
	int32_t ___m_ValidatingStreamVersion_6;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_OnValidateCalled
	bool ___m_OnValidateCalled_7;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_StreamingVersion
	int32_t ___m_StreamingVersion_8;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_Priority
	int32_t ___m_Priority_9;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::<FollowTargetAttachment>k__BackingField
	float ___U3CFollowTargetAttachmentU3Ek__BackingField_10;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::<LookAtTargetAttachment>k__BackingField
	float ___U3CLookAtTargetAttachmentU3Ek__BackingField_11;
	// Cinemachine.CinemachineVirtualCameraBase/StandbyUpdateMode Cinemachine.CinemachineVirtualCameraBase::m_StandbyUpdate
	int32_t ___m_StandbyUpdate_12;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension> Cinemachine.CinemachineVirtualCameraBase::mExtensions
	List_1_t13875FE3163CFA961C09134FFAA2E0903229691A * ___mExtensions_13;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<PreviousStateIsValid>k__BackingField
	bool ___U3CPreviousStateIsValidU3Ek__BackingField_14;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_WasStarted
	bool ___m_WasStarted_15;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::mSlaveStatusUpdated
	bool ___mSlaveStatusUpdated_16;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_parentVcam
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___m_parentVcam_17;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_QueuePriority
	int32_t ___m_QueuePriority_18;

public:
	inline static int32_t get_offset_of_m_ExcludedPropertiesInInspector_4() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_ExcludedPropertiesInInspector_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_ExcludedPropertiesInInspector_4() const { return ___m_ExcludedPropertiesInInspector_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_ExcludedPropertiesInInspector_4() { return &___m_ExcludedPropertiesInInspector_4; }
	inline void set_m_ExcludedPropertiesInInspector_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_ExcludedPropertiesInInspector_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExcludedPropertiesInInspector_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_LockStageInInspector_5() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_LockStageInInspector_5)); }
	inline StageU5BU5D_t605193BD653BA57911AFE8A2D01B1D799F7BB949* get_m_LockStageInInspector_5() const { return ___m_LockStageInInspector_5; }
	inline StageU5BU5D_t605193BD653BA57911AFE8A2D01B1D799F7BB949** get_address_of_m_LockStageInInspector_5() { return &___m_LockStageInInspector_5; }
	inline void set_m_LockStageInInspector_5(StageU5BU5D_t605193BD653BA57911AFE8A2D01B1D799F7BB949* value)
	{
		___m_LockStageInInspector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LockStageInInspector_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ValidatingStreamVersion_6() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_ValidatingStreamVersion_6)); }
	inline int32_t get_m_ValidatingStreamVersion_6() const { return ___m_ValidatingStreamVersion_6; }
	inline int32_t* get_address_of_m_ValidatingStreamVersion_6() { return &___m_ValidatingStreamVersion_6; }
	inline void set_m_ValidatingStreamVersion_6(int32_t value)
	{
		___m_ValidatingStreamVersion_6 = value;
	}

	inline static int32_t get_offset_of_m_OnValidateCalled_7() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_OnValidateCalled_7)); }
	inline bool get_m_OnValidateCalled_7() const { return ___m_OnValidateCalled_7; }
	inline bool* get_address_of_m_OnValidateCalled_7() { return &___m_OnValidateCalled_7; }
	inline void set_m_OnValidateCalled_7(bool value)
	{
		___m_OnValidateCalled_7 = value;
	}

	inline static int32_t get_offset_of_m_StreamingVersion_8() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_StreamingVersion_8)); }
	inline int32_t get_m_StreamingVersion_8() const { return ___m_StreamingVersion_8; }
	inline int32_t* get_address_of_m_StreamingVersion_8() { return &___m_StreamingVersion_8; }
	inline void set_m_StreamingVersion_8(int32_t value)
	{
		___m_StreamingVersion_8 = value;
	}

	inline static int32_t get_offset_of_m_Priority_9() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_Priority_9)); }
	inline int32_t get_m_Priority_9() const { return ___m_Priority_9; }
	inline int32_t* get_address_of_m_Priority_9() { return &___m_Priority_9; }
	inline void set_m_Priority_9(int32_t value)
	{
		___m_Priority_9 = value;
	}

	inline static int32_t get_offset_of_U3CFollowTargetAttachmentU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___U3CFollowTargetAttachmentU3Ek__BackingField_10)); }
	inline float get_U3CFollowTargetAttachmentU3Ek__BackingField_10() const { return ___U3CFollowTargetAttachmentU3Ek__BackingField_10; }
	inline float* get_address_of_U3CFollowTargetAttachmentU3Ek__BackingField_10() { return &___U3CFollowTargetAttachmentU3Ek__BackingField_10; }
	inline void set_U3CFollowTargetAttachmentU3Ek__BackingField_10(float value)
	{
		___U3CFollowTargetAttachmentU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CLookAtTargetAttachmentU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___U3CLookAtTargetAttachmentU3Ek__BackingField_11)); }
	inline float get_U3CLookAtTargetAttachmentU3Ek__BackingField_11() const { return ___U3CLookAtTargetAttachmentU3Ek__BackingField_11; }
	inline float* get_address_of_U3CLookAtTargetAttachmentU3Ek__BackingField_11() { return &___U3CLookAtTargetAttachmentU3Ek__BackingField_11; }
	inline void set_U3CLookAtTargetAttachmentU3Ek__BackingField_11(float value)
	{
		___U3CLookAtTargetAttachmentU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_m_StandbyUpdate_12() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_StandbyUpdate_12)); }
	inline int32_t get_m_StandbyUpdate_12() const { return ___m_StandbyUpdate_12; }
	inline int32_t* get_address_of_m_StandbyUpdate_12() { return &___m_StandbyUpdate_12; }
	inline void set_m_StandbyUpdate_12(int32_t value)
	{
		___m_StandbyUpdate_12 = value;
	}

	inline static int32_t get_offset_of_mExtensions_13() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___mExtensions_13)); }
	inline List_1_t13875FE3163CFA961C09134FFAA2E0903229691A * get_mExtensions_13() const { return ___mExtensions_13; }
	inline List_1_t13875FE3163CFA961C09134FFAA2E0903229691A ** get_address_of_mExtensions_13() { return &___mExtensions_13; }
	inline void set_mExtensions_13(List_1_t13875FE3163CFA961C09134FFAA2E0903229691A * value)
	{
		___mExtensions_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mExtensions_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPreviousStateIsValidU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___U3CPreviousStateIsValidU3Ek__BackingField_14)); }
	inline bool get_U3CPreviousStateIsValidU3Ek__BackingField_14() const { return ___U3CPreviousStateIsValidU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CPreviousStateIsValidU3Ek__BackingField_14() { return &___U3CPreviousStateIsValidU3Ek__BackingField_14; }
	inline void set_U3CPreviousStateIsValidU3Ek__BackingField_14(bool value)
	{
		___U3CPreviousStateIsValidU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_m_WasStarted_15() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_WasStarted_15)); }
	inline bool get_m_WasStarted_15() const { return ___m_WasStarted_15; }
	inline bool* get_address_of_m_WasStarted_15() { return &___m_WasStarted_15; }
	inline void set_m_WasStarted_15(bool value)
	{
		___m_WasStarted_15 = value;
	}

	inline static int32_t get_offset_of_mSlaveStatusUpdated_16() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___mSlaveStatusUpdated_16)); }
	inline bool get_mSlaveStatusUpdated_16() const { return ___mSlaveStatusUpdated_16; }
	inline bool* get_address_of_mSlaveStatusUpdated_16() { return &___mSlaveStatusUpdated_16; }
	inline void set_mSlaveStatusUpdated_16(bool value)
	{
		___mSlaveStatusUpdated_16 = value;
	}

	inline static int32_t get_offset_of_m_parentVcam_17() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_parentVcam_17)); }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * get_m_parentVcam_17() const { return ___m_parentVcam_17; }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 ** get_address_of_m_parentVcam_17() { return &___m_parentVcam_17; }
	inline void set_m_parentVcam_17(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * value)
	{
		___m_parentVcam_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parentVcam_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_QueuePriority_18() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_QueuePriority_18)); }
	inline int32_t get_m_QueuePriority_18() const { return ___m_QueuePriority_18; }
	inline int32_t* get_address_of_m_QueuePriority_18() { return &___m_QueuePriority_18; }
	inline void set_m_QueuePriority_18(int32_t value)
	{
		___m_QueuePriority_18 = value;
	}
};


// MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker
struct MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::Channel
	int32_t ___Channel_4;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::DefaultShakeAmplitude
	float ___DefaultShakeAmplitude_5;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::DefaultShakeFrequency
	float ___DefaultShakeFrequency_6;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::IdleAmplitude
	float ___IdleAmplitude_7;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::IdleFrequency
	float ___IdleFrequency_8;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::LerpSpeed
	float ___LerpSpeed_9;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::TestDuration
	float ___TestDuration_10;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::TestAmplitude
	float ___TestAmplitude_11;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::TestFrequency
	float ___TestFrequency_12;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::TestShakeButton
	bool ___TestShakeButton_13;
	// MoreMountains.Feedbacks.TimescaleModes MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::_timescaleMode
	int32_t ____timescaleMode_14;
	// UnityEngine.Vector3 MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::_initialPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____initialPosition_15;
	// UnityEngine.Quaternion MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::_initialRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ____initialRotation_16;
	// Cinemachine.CinemachineBasicMultiChannelPerlin MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::_perlin
	CinemachineBasicMultiChannelPerlin_t09A5B81525F473505BB264366B43E55C8FA143CF * ____perlin_17;
	// Cinemachine.CinemachineVirtualCamera MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::_virtualCamera
	CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * ____virtualCamera_18;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::_targetAmplitude
	float ____targetAmplitude_19;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::_targetFrequency
	float ____targetFrequency_20;
	// UnityEngine.Coroutine MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::_shakeCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____shakeCoroutine_21;

public:
	inline static int32_t get_offset_of_Channel_4() { return static_cast<int32_t>(offsetof(MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163, ___Channel_4)); }
	inline int32_t get_Channel_4() const { return ___Channel_4; }
	inline int32_t* get_address_of_Channel_4() { return &___Channel_4; }
	inline void set_Channel_4(int32_t value)
	{
		___Channel_4 = value;
	}

	inline static int32_t get_offset_of_DefaultShakeAmplitude_5() { return static_cast<int32_t>(offsetof(MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163, ___DefaultShakeAmplitude_5)); }
	inline float get_DefaultShakeAmplitude_5() const { return ___DefaultShakeAmplitude_5; }
	inline float* get_address_of_DefaultShakeAmplitude_5() { return &___DefaultShakeAmplitude_5; }
	inline void set_DefaultShakeAmplitude_5(float value)
	{
		___DefaultShakeAmplitude_5 = value;
	}

	inline static int32_t get_offset_of_DefaultShakeFrequency_6() { return static_cast<int32_t>(offsetof(MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163, ___DefaultShakeFrequency_6)); }
	inline float get_DefaultShakeFrequency_6() const { return ___DefaultShakeFrequency_6; }
	inline float* get_address_of_DefaultShakeFrequency_6() { return &___DefaultShakeFrequency_6; }
	inline void set_DefaultShakeFrequency_6(float value)
	{
		___DefaultShakeFrequency_6 = value;
	}

	inline static int32_t get_offset_of_IdleAmplitude_7() { return static_cast<int32_t>(offsetof(MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163, ___IdleAmplitude_7)); }
	inline float get_IdleAmplitude_7() const { return ___IdleAmplitude_7; }
	inline float* get_address_of_IdleAmplitude_7() { return &___IdleAmplitude_7; }
	inline void set_IdleAmplitude_7(float value)
	{
		___IdleAmplitude_7 = value;
	}

	inline static int32_t get_offset_of_IdleFrequency_8() { return static_cast<int32_t>(offsetof(MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163, ___IdleFrequency_8)); }
	inline float get_IdleFrequency_8() const { return ___IdleFrequency_8; }
	inline float* get_address_of_IdleFrequency_8() { return &___IdleFrequency_8; }
	inline void set_IdleFrequency_8(float value)
	{
		___IdleFrequency_8 = value;
	}

	inline static int32_t get_offset_of_LerpSpeed_9() { return static_cast<int32_t>(offsetof(MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163, ___LerpSpeed_9)); }
	inline float get_LerpSpeed_9() const { return ___LerpSpeed_9; }
	inline float* get_address_of_LerpSpeed_9() { return &___LerpSpeed_9; }
	inline void set_LerpSpeed_9(float value)
	{
		___LerpSpeed_9 = value;
	}

	inline static int32_t get_offset_of_TestDuration_10() { return static_cast<int32_t>(offsetof(MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163, ___TestDuration_10)); }
	inline float get_TestDuration_10() const { return ___TestDuration_10; }
	inline float* get_address_of_TestDuration_10() { return &___TestDuration_10; }
	inline void set_TestDuration_10(float value)
	{
		___TestDuration_10 = value;
	}

	inline static int32_t get_offset_of_TestAmplitude_11() { return static_cast<int32_t>(offsetof(MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163, ___TestAmplitude_11)); }
	inline float get_TestAmplitude_11() const { return ___TestAmplitude_11; }
	inline float* get_address_of_TestAmplitude_11() { return &___TestAmplitude_11; }
	inline void set_TestAmplitude_11(float value)
	{
		___TestAmplitude_11 = value;
	}

	inline static int32_t get_offset_of_TestFrequency_12() { return static_cast<int32_t>(offsetof(MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163, ___TestFrequency_12)); }
	inline float get_TestFrequency_12() const { return ___TestFrequency_12; }
	inline float* get_address_of_TestFrequency_12() { return &___TestFrequency_12; }
	inline void set_TestFrequency_12(float value)
	{
		___TestFrequency_12 = value;
	}

	inline static int32_t get_offset_of_TestShakeButton_13() { return static_cast<int32_t>(offsetof(MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163, ___TestShakeButton_13)); }
	inline bool get_TestShakeButton_13() const { return ___TestShakeButton_13; }
	inline bool* get_address_of_TestShakeButton_13() { return &___TestShakeButton_13; }
	inline void set_TestShakeButton_13(bool value)
	{
		___TestShakeButton_13 = value;
	}

	inline static int32_t get_offset_of__timescaleMode_14() { return static_cast<int32_t>(offsetof(MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163, ____timescaleMode_14)); }
	inline int32_t get__timescaleMode_14() const { return ____timescaleMode_14; }
	inline int32_t* get_address_of__timescaleMode_14() { return &____timescaleMode_14; }
	inline void set__timescaleMode_14(int32_t value)
	{
		____timescaleMode_14 = value;
	}

	inline static int32_t get_offset_of__initialPosition_15() { return static_cast<int32_t>(offsetof(MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163, ____initialPosition_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__initialPosition_15() const { return ____initialPosition_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__initialPosition_15() { return &____initialPosition_15; }
	inline void set__initialPosition_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____initialPosition_15 = value;
	}

	inline static int32_t get_offset_of__initialRotation_16() { return static_cast<int32_t>(offsetof(MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163, ____initialRotation_16)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get__initialRotation_16() const { return ____initialRotation_16; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of__initialRotation_16() { return &____initialRotation_16; }
	inline void set__initialRotation_16(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		____initialRotation_16 = value;
	}

	inline static int32_t get_offset_of__perlin_17() { return static_cast<int32_t>(offsetof(MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163, ____perlin_17)); }
	inline CinemachineBasicMultiChannelPerlin_t09A5B81525F473505BB264366B43E55C8FA143CF * get__perlin_17() const { return ____perlin_17; }
	inline CinemachineBasicMultiChannelPerlin_t09A5B81525F473505BB264366B43E55C8FA143CF ** get_address_of__perlin_17() { return &____perlin_17; }
	inline void set__perlin_17(CinemachineBasicMultiChannelPerlin_t09A5B81525F473505BB264366B43E55C8FA143CF * value)
	{
		____perlin_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____perlin_17), (void*)value);
	}

	inline static int32_t get_offset_of__virtualCamera_18() { return static_cast<int32_t>(offsetof(MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163, ____virtualCamera_18)); }
	inline CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * get__virtualCamera_18() const { return ____virtualCamera_18; }
	inline CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C ** get_address_of__virtualCamera_18() { return &____virtualCamera_18; }
	inline void set__virtualCamera_18(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * value)
	{
		____virtualCamera_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____virtualCamera_18), (void*)value);
	}

	inline static int32_t get_offset_of__targetAmplitude_19() { return static_cast<int32_t>(offsetof(MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163, ____targetAmplitude_19)); }
	inline float get__targetAmplitude_19() const { return ____targetAmplitude_19; }
	inline float* get_address_of__targetAmplitude_19() { return &____targetAmplitude_19; }
	inline void set__targetAmplitude_19(float value)
	{
		____targetAmplitude_19 = value;
	}

	inline static int32_t get_offset_of__targetFrequency_20() { return static_cast<int32_t>(offsetof(MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163, ____targetFrequency_20)); }
	inline float get__targetFrequency_20() const { return ____targetFrequency_20; }
	inline float* get_address_of__targetFrequency_20() { return &____targetFrequency_20; }
	inline void set__targetFrequency_20(float value)
	{
		____targetFrequency_20 = value;
	}

	inline static int32_t get_offset_of__shakeCoroutine_21() { return static_cast<int32_t>(offsetof(MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163, ____shakeCoroutine_21)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__shakeCoroutine_21() const { return ____shakeCoroutine_21; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__shakeCoroutine_21() { return &____shakeCoroutine_21; }
	inline void set__shakeCoroutine_21(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____shakeCoroutine_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____shakeCoroutine_21), (void*)value);
	}
};


// MoreMountains.FeedbacksForThirdParty.MMCinemachineFreeLookZoom
struct MMCinemachineFreeLookZoom_t4184663C570C00D1DC2EC451A06F3355A2BE2542  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 MoreMountains.FeedbacksForThirdParty.MMCinemachineFreeLookZoom::Channel
	int32_t ___Channel_4;
	// UnityEngine.AnimationCurve MoreMountains.FeedbacksForThirdParty.MMCinemachineFreeLookZoom::ZoomCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___ZoomCurve_5;
	// MoreMountains.Feedbacks.MMCameraZoomModes MoreMountains.FeedbacksForThirdParty.MMCinemachineFreeLookZoom::TestMode
	int32_t ___TestMode_6;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineFreeLookZoom::TestFieldOfView
	float ___TestFieldOfView_7;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineFreeLookZoom::TestTransitionDuration
	float ___TestTransitionDuration_8;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineFreeLookZoom::TestDuration
	float ___TestDuration_9;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMCinemachineFreeLookZoom::TestZoomButton
	bool ___TestZoomButton_10;
	// Cinemachine.CinemachineFreeLook MoreMountains.FeedbacksForThirdParty.MMCinemachineFreeLookZoom::_freeLookCamera
	CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * ____freeLookCamera_11;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineFreeLookZoom::_initialFieldOfView
	float ____initialFieldOfView_12;
	// MoreMountains.Feedbacks.MMCameraZoomModes MoreMountains.FeedbacksForThirdParty.MMCinemachineFreeLookZoom::_mode
	int32_t ____mode_13;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMCinemachineFreeLookZoom::_zooming
	bool ____zooming_14;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineFreeLookZoom::_startFieldOfView
	float ____startFieldOfView_15;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineFreeLookZoom::_transitionDuration
	float ____transitionDuration_16;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineFreeLookZoom::_duration
	float ____duration_17;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineFreeLookZoom::_targetFieldOfView
	float ____targetFieldOfView_18;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineFreeLookZoom::_delta
	float ____delta_19;
	// System.Int32 MoreMountains.FeedbacksForThirdParty.MMCinemachineFreeLookZoom::_direction
	int32_t ____direction_20;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineFreeLookZoom::_reachedDestinationTimestamp
	float ____reachedDestinationTimestamp_21;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMCinemachineFreeLookZoom::_destinationReached
	bool ____destinationReached_22;

public:
	inline static int32_t get_offset_of_Channel_4() { return static_cast<int32_t>(offsetof(MMCinemachineFreeLookZoom_t4184663C570C00D1DC2EC451A06F3355A2BE2542, ___Channel_4)); }
	inline int32_t get_Channel_4() const { return ___Channel_4; }
	inline int32_t* get_address_of_Channel_4() { return &___Channel_4; }
	inline void set_Channel_4(int32_t value)
	{
		___Channel_4 = value;
	}

	inline static int32_t get_offset_of_ZoomCurve_5() { return static_cast<int32_t>(offsetof(MMCinemachineFreeLookZoom_t4184663C570C00D1DC2EC451A06F3355A2BE2542, ___ZoomCurve_5)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_ZoomCurve_5() const { return ___ZoomCurve_5; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_ZoomCurve_5() { return &___ZoomCurve_5; }
	inline void set_ZoomCurve_5(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___ZoomCurve_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ZoomCurve_5), (void*)value);
	}

	inline static int32_t get_offset_of_TestMode_6() { return static_cast<int32_t>(offsetof(MMCinemachineFreeLookZoom_t4184663C570C00D1DC2EC451A06F3355A2BE2542, ___TestMode_6)); }
	inline int32_t get_TestMode_6() const { return ___TestMode_6; }
	inline int32_t* get_address_of_TestMode_6() { return &___TestMode_6; }
	inline void set_TestMode_6(int32_t value)
	{
		___TestMode_6 = value;
	}

	inline static int32_t get_offset_of_TestFieldOfView_7() { return static_cast<int32_t>(offsetof(MMCinemachineFreeLookZoom_t4184663C570C00D1DC2EC451A06F3355A2BE2542, ___TestFieldOfView_7)); }
	inline float get_TestFieldOfView_7() const { return ___TestFieldOfView_7; }
	inline float* get_address_of_TestFieldOfView_7() { return &___TestFieldOfView_7; }
	inline void set_TestFieldOfView_7(float value)
	{
		___TestFieldOfView_7 = value;
	}

	inline static int32_t get_offset_of_TestTransitionDuration_8() { return static_cast<int32_t>(offsetof(MMCinemachineFreeLookZoom_t4184663C570C00D1DC2EC451A06F3355A2BE2542, ___TestTransitionDuration_8)); }
	inline float get_TestTransitionDuration_8() const { return ___TestTransitionDuration_8; }
	inline float* get_address_of_TestTransitionDuration_8() { return &___TestTransitionDuration_8; }
	inline void set_TestTransitionDuration_8(float value)
	{
		___TestTransitionDuration_8 = value;
	}

	inline static int32_t get_offset_of_TestDuration_9() { return static_cast<int32_t>(offsetof(MMCinemachineFreeLookZoom_t4184663C570C00D1DC2EC451A06F3355A2BE2542, ___TestDuration_9)); }
	inline float get_TestDuration_9() const { return ___TestDuration_9; }
	inline float* get_address_of_TestDuration_9() { return &___TestDuration_9; }
	inline void set_TestDuration_9(float value)
	{
		___TestDuration_9 = value;
	}

	inline static int32_t get_offset_of_TestZoomButton_10() { return static_cast<int32_t>(offsetof(MMCinemachineFreeLookZoom_t4184663C570C00D1DC2EC451A06F3355A2BE2542, ___TestZoomButton_10)); }
	inline bool get_TestZoomButton_10() const { return ___TestZoomButton_10; }
	inline bool* get_address_of_TestZoomButton_10() { return &___TestZoomButton_10; }
	inline void set_TestZoomButton_10(bool value)
	{
		___TestZoomButton_10 = value;
	}

	inline static int32_t get_offset_of__freeLookCamera_11() { return static_cast<int32_t>(offsetof(MMCinemachineFreeLookZoom_t4184663C570C00D1DC2EC451A06F3355A2BE2542, ____freeLookCamera_11)); }
	inline CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * get__freeLookCamera_11() const { return ____freeLookCamera_11; }
	inline CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F ** get_address_of__freeLookCamera_11() { return &____freeLookCamera_11; }
	inline void set__freeLookCamera_11(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * value)
	{
		____freeLookCamera_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____freeLookCamera_11), (void*)value);
	}

	inline static int32_t get_offset_of__initialFieldOfView_12() { return static_cast<int32_t>(offsetof(MMCinemachineFreeLookZoom_t4184663C570C00D1DC2EC451A06F3355A2BE2542, ____initialFieldOfView_12)); }
	inline float get__initialFieldOfView_12() const { return ____initialFieldOfView_12; }
	inline float* get_address_of__initialFieldOfView_12() { return &____initialFieldOfView_12; }
	inline void set__initialFieldOfView_12(float value)
	{
		____initialFieldOfView_12 = value;
	}

	inline static int32_t get_offset_of__mode_13() { return static_cast<int32_t>(offsetof(MMCinemachineFreeLookZoom_t4184663C570C00D1DC2EC451A06F3355A2BE2542, ____mode_13)); }
	inline int32_t get__mode_13() const { return ____mode_13; }
	inline int32_t* get_address_of__mode_13() { return &____mode_13; }
	inline void set__mode_13(int32_t value)
	{
		____mode_13 = value;
	}

	inline static int32_t get_offset_of__zooming_14() { return static_cast<int32_t>(offsetof(MMCinemachineFreeLookZoom_t4184663C570C00D1DC2EC451A06F3355A2BE2542, ____zooming_14)); }
	inline bool get__zooming_14() const { return ____zooming_14; }
	inline bool* get_address_of__zooming_14() { return &____zooming_14; }
	inline void set__zooming_14(bool value)
	{
		____zooming_14 = value;
	}

	inline static int32_t get_offset_of__startFieldOfView_15() { return static_cast<int32_t>(offsetof(MMCinemachineFreeLookZoom_t4184663C570C00D1DC2EC451A06F3355A2BE2542, ____startFieldOfView_15)); }
	inline float get__startFieldOfView_15() const { return ____startFieldOfView_15; }
	inline float* get_address_of__startFieldOfView_15() { return &____startFieldOfView_15; }
	inline void set__startFieldOfView_15(float value)
	{
		____startFieldOfView_15 = value;
	}

	inline static int32_t get_offset_of__transitionDuration_16() { return static_cast<int32_t>(offsetof(MMCinemachineFreeLookZoom_t4184663C570C00D1DC2EC451A06F3355A2BE2542, ____transitionDuration_16)); }
	inline float get__transitionDuration_16() const { return ____transitionDuration_16; }
	inline float* get_address_of__transitionDuration_16() { return &____transitionDuration_16; }
	inline void set__transitionDuration_16(float value)
	{
		____transitionDuration_16 = value;
	}

	inline static int32_t get_offset_of__duration_17() { return static_cast<int32_t>(offsetof(MMCinemachineFreeLookZoom_t4184663C570C00D1DC2EC451A06F3355A2BE2542, ____duration_17)); }
	inline float get__duration_17() const { return ____duration_17; }
	inline float* get_address_of__duration_17() { return &____duration_17; }
	inline void set__duration_17(float value)
	{
		____duration_17 = value;
	}

	inline static int32_t get_offset_of__targetFieldOfView_18() { return static_cast<int32_t>(offsetof(MMCinemachineFreeLookZoom_t4184663C570C00D1DC2EC451A06F3355A2BE2542, ____targetFieldOfView_18)); }
	inline float get__targetFieldOfView_18() const { return ____targetFieldOfView_18; }
	inline float* get_address_of__targetFieldOfView_18() { return &____targetFieldOfView_18; }
	inline void set__targetFieldOfView_18(float value)
	{
		____targetFieldOfView_18 = value;
	}

	inline static int32_t get_offset_of__delta_19() { return static_cast<int32_t>(offsetof(MMCinemachineFreeLookZoom_t4184663C570C00D1DC2EC451A06F3355A2BE2542, ____delta_19)); }
	inline float get__delta_19() const { return ____delta_19; }
	inline float* get_address_of__delta_19() { return &____delta_19; }
	inline void set__delta_19(float value)
	{
		____delta_19 = value;
	}

	inline static int32_t get_offset_of__direction_20() { return static_cast<int32_t>(offsetof(MMCinemachineFreeLookZoom_t4184663C570C00D1DC2EC451A06F3355A2BE2542, ____direction_20)); }
	inline int32_t get__direction_20() const { return ____direction_20; }
	inline int32_t* get_address_of__direction_20() { return &____direction_20; }
	inline void set__direction_20(int32_t value)
	{
		____direction_20 = value;
	}

	inline static int32_t get_offset_of__reachedDestinationTimestamp_21() { return static_cast<int32_t>(offsetof(MMCinemachineFreeLookZoom_t4184663C570C00D1DC2EC451A06F3355A2BE2542, ____reachedDestinationTimestamp_21)); }
	inline float get__reachedDestinationTimestamp_21() const { return ____reachedDestinationTimestamp_21; }
	inline float* get_address_of__reachedDestinationTimestamp_21() { return &____reachedDestinationTimestamp_21; }
	inline void set__reachedDestinationTimestamp_21(float value)
	{
		____reachedDestinationTimestamp_21 = value;
	}

	inline static int32_t get_offset_of__destinationReached_22() { return static_cast<int32_t>(offsetof(MMCinemachineFreeLookZoom_t4184663C570C00D1DC2EC451A06F3355A2BE2542, ____destinationReached_22)); }
	inline bool get__destinationReached_22() const { return ____destinationReached_22; }
	inline bool* get_address_of__destinationReached_22() { return &____destinationReached_22; }
	inline void set__destinationReached_22(bool value)
	{
		____destinationReached_22 = value;
	}
};


// MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityBrainListener
struct MMCinemachinePriorityBrainListener_tF4122050D55252EF361F5BAACBB63E1C6DE6FF80  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// MoreMountains.Feedbacks.TimescaleModes MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityBrainListener::TimescaleMode
	int32_t ___TimescaleMode_4;
	// Cinemachine.CinemachineBrain MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityBrainListener::_brain
	CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * ____brain_5;
	// Cinemachine.CinemachineBlendDefinition MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityBrainListener::_initialDefinition
	CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  ____initialDefinition_6;
	// UnityEngine.Coroutine MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityBrainListener::_coroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____coroutine_7;

public:
	inline static int32_t get_offset_of_TimescaleMode_4() { return static_cast<int32_t>(offsetof(MMCinemachinePriorityBrainListener_tF4122050D55252EF361F5BAACBB63E1C6DE6FF80, ___TimescaleMode_4)); }
	inline int32_t get_TimescaleMode_4() const { return ___TimescaleMode_4; }
	inline int32_t* get_address_of_TimescaleMode_4() { return &___TimescaleMode_4; }
	inline void set_TimescaleMode_4(int32_t value)
	{
		___TimescaleMode_4 = value;
	}

	inline static int32_t get_offset_of__brain_5() { return static_cast<int32_t>(offsetof(MMCinemachinePriorityBrainListener_tF4122050D55252EF361F5BAACBB63E1C6DE6FF80, ____brain_5)); }
	inline CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * get__brain_5() const { return ____brain_5; }
	inline CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 ** get_address_of__brain_5() { return &____brain_5; }
	inline void set__brain_5(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * value)
	{
		____brain_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____brain_5), (void*)value);
	}

	inline static int32_t get_offset_of__initialDefinition_6() { return static_cast<int32_t>(offsetof(MMCinemachinePriorityBrainListener_tF4122050D55252EF361F5BAACBB63E1C6DE6FF80, ____initialDefinition_6)); }
	inline CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  get__initialDefinition_6() const { return ____initialDefinition_6; }
	inline CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE * get_address_of__initialDefinition_6() { return &____initialDefinition_6; }
	inline void set__initialDefinition_6(CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  value)
	{
		____initialDefinition_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____initialDefinition_6))->___m_CustomCurve_2), (void*)NULL);
	}

	inline static int32_t get_offset_of__coroutine_7() { return static_cast<int32_t>(offsetof(MMCinemachinePriorityBrainListener_tF4122050D55252EF361F5BAACBB63E1C6DE6FF80, ____coroutine_7)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__coroutine_7() const { return ____coroutine_7; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__coroutine_7() { return &____coroutine_7; }
	inline void set__coroutine_7(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____coroutine_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____coroutine_7), (void*)value);
	}
};


// MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityListener
struct MMCinemachinePriorityListener_t294B0CDA8DD4599662A1D6F9968692DCA9D1A6F3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// MoreMountains.Feedbacks.TimescaleModes MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityListener::TimescaleMode
	int32_t ___TimescaleMode_4;
	// System.Int32 MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityListener::Channel
	int32_t ___Channel_5;
	// Cinemachine.CinemachineVirtualCameraBase MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityListener::_camera
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ____camera_6;

public:
	inline static int32_t get_offset_of_TimescaleMode_4() { return static_cast<int32_t>(offsetof(MMCinemachinePriorityListener_t294B0CDA8DD4599662A1D6F9968692DCA9D1A6F3, ___TimescaleMode_4)); }
	inline int32_t get_TimescaleMode_4() const { return ___TimescaleMode_4; }
	inline int32_t* get_address_of_TimescaleMode_4() { return &___TimescaleMode_4; }
	inline void set_TimescaleMode_4(int32_t value)
	{
		___TimescaleMode_4 = value;
	}

	inline static int32_t get_offset_of_Channel_5() { return static_cast<int32_t>(offsetof(MMCinemachinePriorityListener_t294B0CDA8DD4599662A1D6F9968692DCA9D1A6F3, ___Channel_5)); }
	inline int32_t get_Channel_5() const { return ___Channel_5; }
	inline int32_t* get_address_of_Channel_5() { return &___Channel_5; }
	inline void set_Channel_5(int32_t value)
	{
		___Channel_5 = value;
	}

	inline static int32_t get_offset_of__camera_6() { return static_cast<int32_t>(offsetof(MMCinemachinePriorityListener_t294B0CDA8DD4599662A1D6F9968692DCA9D1A6F3, ____camera_6)); }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * get__camera_6() const { return ____camera_6; }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 ** get_address_of__camera_6() { return &____camera_6; }
	inline void set__camera_6(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * value)
	{
		____camera_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____camera_6), (void*)value);
	}
};


// MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom
struct MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::Channel
	int32_t ___Channel_4;
	// UnityEngine.AnimationCurve MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::ZoomCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___ZoomCurve_5;
	// MoreMountains.Feedbacks.MMCameraZoomModes MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::TestMode
	int32_t ___TestMode_6;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::TestFieldOfView
	float ___TestFieldOfView_7;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::TestTransitionDuration
	float ___TestTransitionDuration_8;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::TestDuration
	float ___TestDuration_9;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::TestZoomButton
	bool ___TestZoomButton_10;
	// MoreMountains.Feedbacks.TimescaleModes MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::<TimescaleMode>k__BackingField
	int32_t ___U3CTimescaleModeU3Ek__BackingField_11;
	// Cinemachine.CinemachineVirtualCamera MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::_virtualCamera
	CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * ____virtualCamera_12;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::_initialFieldOfView
	float ____initialFieldOfView_13;
	// MoreMountains.Feedbacks.MMCameraZoomModes MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::_mode
	int32_t ____mode_14;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::_zooming
	bool ____zooming_15;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::_startFieldOfView
	float ____startFieldOfView_16;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::_transitionDuration
	float ____transitionDuration_17;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::_duration
	float ____duration_18;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::_targetFieldOfView
	float ____targetFieldOfView_19;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::_delta
	float ____delta_20;
	// System.Int32 MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::_direction
	int32_t ____direction_21;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::_reachedDestinationTimestamp
	float ____reachedDestinationTimestamp_22;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::_destinationReached
	bool ____destinationReached_23;

public:
	inline static int32_t get_offset_of_Channel_4() { return static_cast<int32_t>(offsetof(MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E, ___Channel_4)); }
	inline int32_t get_Channel_4() const { return ___Channel_4; }
	inline int32_t* get_address_of_Channel_4() { return &___Channel_4; }
	inline void set_Channel_4(int32_t value)
	{
		___Channel_4 = value;
	}

	inline static int32_t get_offset_of_ZoomCurve_5() { return static_cast<int32_t>(offsetof(MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E, ___ZoomCurve_5)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_ZoomCurve_5() const { return ___ZoomCurve_5; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_ZoomCurve_5() { return &___ZoomCurve_5; }
	inline void set_ZoomCurve_5(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___ZoomCurve_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ZoomCurve_5), (void*)value);
	}

	inline static int32_t get_offset_of_TestMode_6() { return static_cast<int32_t>(offsetof(MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E, ___TestMode_6)); }
	inline int32_t get_TestMode_6() const { return ___TestMode_6; }
	inline int32_t* get_address_of_TestMode_6() { return &___TestMode_6; }
	inline void set_TestMode_6(int32_t value)
	{
		___TestMode_6 = value;
	}

	inline static int32_t get_offset_of_TestFieldOfView_7() { return static_cast<int32_t>(offsetof(MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E, ___TestFieldOfView_7)); }
	inline float get_TestFieldOfView_7() const { return ___TestFieldOfView_7; }
	inline float* get_address_of_TestFieldOfView_7() { return &___TestFieldOfView_7; }
	inline void set_TestFieldOfView_7(float value)
	{
		___TestFieldOfView_7 = value;
	}

	inline static int32_t get_offset_of_TestTransitionDuration_8() { return static_cast<int32_t>(offsetof(MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E, ___TestTransitionDuration_8)); }
	inline float get_TestTransitionDuration_8() const { return ___TestTransitionDuration_8; }
	inline float* get_address_of_TestTransitionDuration_8() { return &___TestTransitionDuration_8; }
	inline void set_TestTransitionDuration_8(float value)
	{
		___TestTransitionDuration_8 = value;
	}

	inline static int32_t get_offset_of_TestDuration_9() { return static_cast<int32_t>(offsetof(MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E, ___TestDuration_9)); }
	inline float get_TestDuration_9() const { return ___TestDuration_9; }
	inline float* get_address_of_TestDuration_9() { return &___TestDuration_9; }
	inline void set_TestDuration_9(float value)
	{
		___TestDuration_9 = value;
	}

	inline static int32_t get_offset_of_TestZoomButton_10() { return static_cast<int32_t>(offsetof(MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E, ___TestZoomButton_10)); }
	inline bool get_TestZoomButton_10() const { return ___TestZoomButton_10; }
	inline bool* get_address_of_TestZoomButton_10() { return &___TestZoomButton_10; }
	inline void set_TestZoomButton_10(bool value)
	{
		___TestZoomButton_10 = value;
	}

	inline static int32_t get_offset_of_U3CTimescaleModeU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E, ___U3CTimescaleModeU3Ek__BackingField_11)); }
	inline int32_t get_U3CTimescaleModeU3Ek__BackingField_11() const { return ___U3CTimescaleModeU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CTimescaleModeU3Ek__BackingField_11() { return &___U3CTimescaleModeU3Ek__BackingField_11; }
	inline void set_U3CTimescaleModeU3Ek__BackingField_11(int32_t value)
	{
		___U3CTimescaleModeU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of__virtualCamera_12() { return static_cast<int32_t>(offsetof(MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E, ____virtualCamera_12)); }
	inline CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * get__virtualCamera_12() const { return ____virtualCamera_12; }
	inline CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C ** get_address_of__virtualCamera_12() { return &____virtualCamera_12; }
	inline void set__virtualCamera_12(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * value)
	{
		____virtualCamera_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____virtualCamera_12), (void*)value);
	}

	inline static int32_t get_offset_of__initialFieldOfView_13() { return static_cast<int32_t>(offsetof(MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E, ____initialFieldOfView_13)); }
	inline float get__initialFieldOfView_13() const { return ____initialFieldOfView_13; }
	inline float* get_address_of__initialFieldOfView_13() { return &____initialFieldOfView_13; }
	inline void set__initialFieldOfView_13(float value)
	{
		____initialFieldOfView_13 = value;
	}

	inline static int32_t get_offset_of__mode_14() { return static_cast<int32_t>(offsetof(MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E, ____mode_14)); }
	inline int32_t get__mode_14() const { return ____mode_14; }
	inline int32_t* get_address_of__mode_14() { return &____mode_14; }
	inline void set__mode_14(int32_t value)
	{
		____mode_14 = value;
	}

	inline static int32_t get_offset_of__zooming_15() { return static_cast<int32_t>(offsetof(MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E, ____zooming_15)); }
	inline bool get__zooming_15() const { return ____zooming_15; }
	inline bool* get_address_of__zooming_15() { return &____zooming_15; }
	inline void set__zooming_15(bool value)
	{
		____zooming_15 = value;
	}

	inline static int32_t get_offset_of__startFieldOfView_16() { return static_cast<int32_t>(offsetof(MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E, ____startFieldOfView_16)); }
	inline float get__startFieldOfView_16() const { return ____startFieldOfView_16; }
	inline float* get_address_of__startFieldOfView_16() { return &____startFieldOfView_16; }
	inline void set__startFieldOfView_16(float value)
	{
		____startFieldOfView_16 = value;
	}

	inline static int32_t get_offset_of__transitionDuration_17() { return static_cast<int32_t>(offsetof(MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E, ____transitionDuration_17)); }
	inline float get__transitionDuration_17() const { return ____transitionDuration_17; }
	inline float* get_address_of__transitionDuration_17() { return &____transitionDuration_17; }
	inline void set__transitionDuration_17(float value)
	{
		____transitionDuration_17 = value;
	}

	inline static int32_t get_offset_of__duration_18() { return static_cast<int32_t>(offsetof(MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E, ____duration_18)); }
	inline float get__duration_18() const { return ____duration_18; }
	inline float* get_address_of__duration_18() { return &____duration_18; }
	inline void set__duration_18(float value)
	{
		____duration_18 = value;
	}

	inline static int32_t get_offset_of__targetFieldOfView_19() { return static_cast<int32_t>(offsetof(MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E, ____targetFieldOfView_19)); }
	inline float get__targetFieldOfView_19() const { return ____targetFieldOfView_19; }
	inline float* get_address_of__targetFieldOfView_19() { return &____targetFieldOfView_19; }
	inline void set__targetFieldOfView_19(float value)
	{
		____targetFieldOfView_19 = value;
	}

	inline static int32_t get_offset_of__delta_20() { return static_cast<int32_t>(offsetof(MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E, ____delta_20)); }
	inline float get__delta_20() const { return ____delta_20; }
	inline float* get_address_of__delta_20() { return &____delta_20; }
	inline void set__delta_20(float value)
	{
		____delta_20 = value;
	}

	inline static int32_t get_offset_of__direction_21() { return static_cast<int32_t>(offsetof(MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E, ____direction_21)); }
	inline int32_t get__direction_21() const { return ____direction_21; }
	inline int32_t* get_address_of__direction_21() { return &____direction_21; }
	inline void set__direction_21(int32_t value)
	{
		____direction_21 = value;
	}

	inline static int32_t get_offset_of__reachedDestinationTimestamp_22() { return static_cast<int32_t>(offsetof(MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E, ____reachedDestinationTimestamp_22)); }
	inline float get__reachedDestinationTimestamp_22() const { return ____reachedDestinationTimestamp_22; }
	inline float* get_address_of__reachedDestinationTimestamp_22() { return &____reachedDestinationTimestamp_22; }
	inline void set__reachedDestinationTimestamp_22(float value)
	{
		____reachedDestinationTimestamp_22 = value;
	}

	inline static int32_t get_offset_of__destinationReached_23() { return static_cast<int32_t>(offsetof(MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E, ____destinationReached_23)); }
	inline bool get__destinationReached_23() const { return ____destinationReached_23; }
	inline bool* get_address_of__destinationReached_23() { return &____destinationReached_23; }
	inline void set__destinationReached_23(bool value)
	{
		____destinationReached_23 = value;
	}
};


// MoreMountains.Feedbacks.MMFeedback
struct MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean MoreMountains.Feedbacks.MMFeedback::Active
	bool ___Active_4;
	// System.String MoreMountains.Feedbacks.MMFeedback::Label
	String_t* ___Label_5;
	// System.Single MoreMountains.Feedbacks.MMFeedback::Chance
	float ___Chance_6;
	// MoreMountains.Feedbacks.MMFeedbackTiming MoreMountains.Feedbacks.MMFeedback::Timing
	MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6 * ___Timing_7;
	// UnityEngine.GameObject MoreMountains.Feedbacks.MMFeedback::<Owner>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3COwnerU3Ek__BackingField_8;
	// System.Boolean MoreMountains.Feedbacks.MMFeedback::DebugActive
	bool ___DebugActive_9;
	// System.Boolean MoreMountains.Feedbacks.MMFeedback::<ScriptDrivenPause>k__BackingField
	bool ___U3CScriptDrivenPauseU3Ek__BackingField_10;
	// System.Single MoreMountains.Feedbacks.MMFeedback::<ScriptDrivenPauseAutoResume>k__BackingField
	float ___U3CScriptDrivenPauseAutoResumeU3Ek__BackingField_11;
	// System.Boolean MoreMountains.Feedbacks.MMFeedback::<IsPlaying>k__BackingField
	bool ___U3CIsPlayingU3Ek__BackingField_12;
	// System.Single MoreMountains.Feedbacks.MMFeedback::_lastPlayTimestamp
	float ____lastPlayTimestamp_13;
	// System.Int32 MoreMountains.Feedbacks.MMFeedback::_playsLeft
	int32_t ____playsLeft_14;
	// System.Boolean MoreMountains.Feedbacks.MMFeedback::_initialized
	bool ____initialized_15;
	// UnityEngine.Coroutine MoreMountains.Feedbacks.MMFeedback::_playCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____playCoroutine_16;
	// UnityEngine.Coroutine MoreMountains.Feedbacks.MMFeedback::_infinitePlayCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____infinitePlayCoroutine_17;
	// UnityEngine.Coroutine MoreMountains.Feedbacks.MMFeedback::_sequenceCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____sequenceCoroutine_18;
	// UnityEngine.Coroutine MoreMountains.Feedbacks.MMFeedback::_repeatedPlayCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____repeatedPlayCoroutine_19;
	// System.Int32 MoreMountains.Feedbacks.MMFeedback::_sequenceTrackID
	int32_t ____sequenceTrackID_20;
	// MoreMountains.Feedbacks.MMFeedbacks MoreMountains.Feedbacks.MMFeedback::_hostMMFeedbacks
	MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914 * ____hostMMFeedbacks_21;
	// System.Single MoreMountains.Feedbacks.MMFeedback::_beatInterval
	float ____beatInterval_22;
	// System.Boolean MoreMountains.Feedbacks.MMFeedback::BeatThisFrame
	bool ___BeatThisFrame_23;
	// System.Int32 MoreMountains.Feedbacks.MMFeedback::LastBeatIndex
	int32_t ___LastBeatIndex_24;
	// System.Int32 MoreMountains.Feedbacks.MMFeedback::CurrentSequenceIndex
	int32_t ___CurrentSequenceIndex_25;
	// System.Single MoreMountains.Feedbacks.MMFeedback::LastBeatTimestamp
	float ___LastBeatTimestamp_26;
	// System.Boolean MoreMountains.Feedbacks.MMFeedback::_isHostMMFeedbacksNotNull
	bool ____isHostMMFeedbacksNotNull_27;

public:
	inline static int32_t get_offset_of_Active_4() { return static_cast<int32_t>(offsetof(MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4, ___Active_4)); }
	inline bool get_Active_4() const { return ___Active_4; }
	inline bool* get_address_of_Active_4() { return &___Active_4; }
	inline void set_Active_4(bool value)
	{
		___Active_4 = value;
	}

	inline static int32_t get_offset_of_Label_5() { return static_cast<int32_t>(offsetof(MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4, ___Label_5)); }
	inline String_t* get_Label_5() const { return ___Label_5; }
	inline String_t** get_address_of_Label_5() { return &___Label_5; }
	inline void set_Label_5(String_t* value)
	{
		___Label_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Label_5), (void*)value);
	}

	inline static int32_t get_offset_of_Chance_6() { return static_cast<int32_t>(offsetof(MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4, ___Chance_6)); }
	inline float get_Chance_6() const { return ___Chance_6; }
	inline float* get_address_of_Chance_6() { return &___Chance_6; }
	inline void set_Chance_6(float value)
	{
		___Chance_6 = value;
	}

	inline static int32_t get_offset_of_Timing_7() { return static_cast<int32_t>(offsetof(MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4, ___Timing_7)); }
	inline MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6 * get_Timing_7() const { return ___Timing_7; }
	inline MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6 ** get_address_of_Timing_7() { return &___Timing_7; }
	inline void set_Timing_7(MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6 * value)
	{
		___Timing_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Timing_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3COwnerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4, ___U3COwnerU3Ek__BackingField_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3COwnerU3Ek__BackingField_8() const { return ___U3COwnerU3Ek__BackingField_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3COwnerU3Ek__BackingField_8() { return &___U3COwnerU3Ek__BackingField_8; }
	inline void set_U3COwnerU3Ek__BackingField_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3COwnerU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COwnerU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_DebugActive_9() { return static_cast<int32_t>(offsetof(MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4, ___DebugActive_9)); }
	inline bool get_DebugActive_9() const { return ___DebugActive_9; }
	inline bool* get_address_of_DebugActive_9() { return &___DebugActive_9; }
	inline void set_DebugActive_9(bool value)
	{
		___DebugActive_9 = value;
	}

	inline static int32_t get_offset_of_U3CScriptDrivenPauseU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4, ___U3CScriptDrivenPauseU3Ek__BackingField_10)); }
	inline bool get_U3CScriptDrivenPauseU3Ek__BackingField_10() const { return ___U3CScriptDrivenPauseU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CScriptDrivenPauseU3Ek__BackingField_10() { return &___U3CScriptDrivenPauseU3Ek__BackingField_10; }
	inline void set_U3CScriptDrivenPauseU3Ek__BackingField_10(bool value)
	{
		___U3CScriptDrivenPauseU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CScriptDrivenPauseAutoResumeU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4, ___U3CScriptDrivenPauseAutoResumeU3Ek__BackingField_11)); }
	inline float get_U3CScriptDrivenPauseAutoResumeU3Ek__BackingField_11() const { return ___U3CScriptDrivenPauseAutoResumeU3Ek__BackingField_11; }
	inline float* get_address_of_U3CScriptDrivenPauseAutoResumeU3Ek__BackingField_11() { return &___U3CScriptDrivenPauseAutoResumeU3Ek__BackingField_11; }
	inline void set_U3CScriptDrivenPauseAutoResumeU3Ek__BackingField_11(float value)
	{
		___U3CScriptDrivenPauseAutoResumeU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CIsPlayingU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4, ___U3CIsPlayingU3Ek__BackingField_12)); }
	inline bool get_U3CIsPlayingU3Ek__BackingField_12() const { return ___U3CIsPlayingU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CIsPlayingU3Ek__BackingField_12() { return &___U3CIsPlayingU3Ek__BackingField_12; }
	inline void set_U3CIsPlayingU3Ek__BackingField_12(bool value)
	{
		___U3CIsPlayingU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of__lastPlayTimestamp_13() { return static_cast<int32_t>(offsetof(MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4, ____lastPlayTimestamp_13)); }
	inline float get__lastPlayTimestamp_13() const { return ____lastPlayTimestamp_13; }
	inline float* get_address_of__lastPlayTimestamp_13() { return &____lastPlayTimestamp_13; }
	inline void set__lastPlayTimestamp_13(float value)
	{
		____lastPlayTimestamp_13 = value;
	}

	inline static int32_t get_offset_of__playsLeft_14() { return static_cast<int32_t>(offsetof(MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4, ____playsLeft_14)); }
	inline int32_t get__playsLeft_14() const { return ____playsLeft_14; }
	inline int32_t* get_address_of__playsLeft_14() { return &____playsLeft_14; }
	inline void set__playsLeft_14(int32_t value)
	{
		____playsLeft_14 = value;
	}

	inline static int32_t get_offset_of__initialized_15() { return static_cast<int32_t>(offsetof(MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4, ____initialized_15)); }
	inline bool get__initialized_15() const { return ____initialized_15; }
	inline bool* get_address_of__initialized_15() { return &____initialized_15; }
	inline void set__initialized_15(bool value)
	{
		____initialized_15 = value;
	}

	inline static int32_t get_offset_of__playCoroutine_16() { return static_cast<int32_t>(offsetof(MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4, ____playCoroutine_16)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__playCoroutine_16() const { return ____playCoroutine_16; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__playCoroutine_16() { return &____playCoroutine_16; }
	inline void set__playCoroutine_16(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____playCoroutine_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____playCoroutine_16), (void*)value);
	}

	inline static int32_t get_offset_of__infinitePlayCoroutine_17() { return static_cast<int32_t>(offsetof(MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4, ____infinitePlayCoroutine_17)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__infinitePlayCoroutine_17() const { return ____infinitePlayCoroutine_17; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__infinitePlayCoroutine_17() { return &____infinitePlayCoroutine_17; }
	inline void set__infinitePlayCoroutine_17(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____infinitePlayCoroutine_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____infinitePlayCoroutine_17), (void*)value);
	}

	inline static int32_t get_offset_of__sequenceCoroutine_18() { return static_cast<int32_t>(offsetof(MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4, ____sequenceCoroutine_18)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__sequenceCoroutine_18() const { return ____sequenceCoroutine_18; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__sequenceCoroutine_18() { return &____sequenceCoroutine_18; }
	inline void set__sequenceCoroutine_18(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____sequenceCoroutine_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sequenceCoroutine_18), (void*)value);
	}

	inline static int32_t get_offset_of__repeatedPlayCoroutine_19() { return static_cast<int32_t>(offsetof(MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4, ____repeatedPlayCoroutine_19)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__repeatedPlayCoroutine_19() const { return ____repeatedPlayCoroutine_19; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__repeatedPlayCoroutine_19() { return &____repeatedPlayCoroutine_19; }
	inline void set__repeatedPlayCoroutine_19(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____repeatedPlayCoroutine_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____repeatedPlayCoroutine_19), (void*)value);
	}

	inline static int32_t get_offset_of__sequenceTrackID_20() { return static_cast<int32_t>(offsetof(MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4, ____sequenceTrackID_20)); }
	inline int32_t get__sequenceTrackID_20() const { return ____sequenceTrackID_20; }
	inline int32_t* get_address_of__sequenceTrackID_20() { return &____sequenceTrackID_20; }
	inline void set__sequenceTrackID_20(int32_t value)
	{
		____sequenceTrackID_20 = value;
	}

	inline static int32_t get_offset_of__hostMMFeedbacks_21() { return static_cast<int32_t>(offsetof(MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4, ____hostMMFeedbacks_21)); }
	inline MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914 * get__hostMMFeedbacks_21() const { return ____hostMMFeedbacks_21; }
	inline MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914 ** get_address_of__hostMMFeedbacks_21() { return &____hostMMFeedbacks_21; }
	inline void set__hostMMFeedbacks_21(MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914 * value)
	{
		____hostMMFeedbacks_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hostMMFeedbacks_21), (void*)value);
	}

	inline static int32_t get_offset_of__beatInterval_22() { return static_cast<int32_t>(offsetof(MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4, ____beatInterval_22)); }
	inline float get__beatInterval_22() const { return ____beatInterval_22; }
	inline float* get_address_of__beatInterval_22() { return &____beatInterval_22; }
	inline void set__beatInterval_22(float value)
	{
		____beatInterval_22 = value;
	}

	inline static int32_t get_offset_of_BeatThisFrame_23() { return static_cast<int32_t>(offsetof(MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4, ___BeatThisFrame_23)); }
	inline bool get_BeatThisFrame_23() const { return ___BeatThisFrame_23; }
	inline bool* get_address_of_BeatThisFrame_23() { return &___BeatThisFrame_23; }
	inline void set_BeatThisFrame_23(bool value)
	{
		___BeatThisFrame_23 = value;
	}

	inline static int32_t get_offset_of_LastBeatIndex_24() { return static_cast<int32_t>(offsetof(MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4, ___LastBeatIndex_24)); }
	inline int32_t get_LastBeatIndex_24() const { return ___LastBeatIndex_24; }
	inline int32_t* get_address_of_LastBeatIndex_24() { return &___LastBeatIndex_24; }
	inline void set_LastBeatIndex_24(int32_t value)
	{
		___LastBeatIndex_24 = value;
	}

	inline static int32_t get_offset_of_CurrentSequenceIndex_25() { return static_cast<int32_t>(offsetof(MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4, ___CurrentSequenceIndex_25)); }
	inline int32_t get_CurrentSequenceIndex_25() const { return ___CurrentSequenceIndex_25; }
	inline int32_t* get_address_of_CurrentSequenceIndex_25() { return &___CurrentSequenceIndex_25; }
	inline void set_CurrentSequenceIndex_25(int32_t value)
	{
		___CurrentSequenceIndex_25 = value;
	}

	inline static int32_t get_offset_of_LastBeatTimestamp_26() { return static_cast<int32_t>(offsetof(MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4, ___LastBeatTimestamp_26)); }
	inline float get_LastBeatTimestamp_26() const { return ___LastBeatTimestamp_26; }
	inline float* get_address_of_LastBeatTimestamp_26() { return &___LastBeatTimestamp_26; }
	inline void set_LastBeatTimestamp_26(float value)
	{
		___LastBeatTimestamp_26 = value;
	}

	inline static int32_t get_offset_of__isHostMMFeedbacksNotNull_27() { return static_cast<int32_t>(offsetof(MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4, ____isHostMMFeedbacksNotNull_27)); }
	inline bool get__isHostMMFeedbacksNotNull_27() const { return ____isHostMMFeedbacksNotNull_27; }
	inline bool* get_address_of__isHostMMFeedbacksNotNull_27() { return &____isHostMMFeedbacksNotNull_27; }
	inline void set__isHostMMFeedbacksNotNull_27(bool value)
	{
		____isHostMMFeedbacksNotNull_27 = value;
	}
};


// MoreMountains.Feedbacks.MMShaker
struct MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMShaker::Channel
	int32_t ___Channel_4;
	// System.Single MoreMountains.Feedbacks.MMShaker::ShakeDuration
	float ___ShakeDuration_5;
	// System.Boolean MoreMountains.Feedbacks.MMShaker::PlayOnAwake
	bool ___PlayOnAwake_6;
	// System.Boolean MoreMountains.Feedbacks.MMShaker::Interruptible
	bool ___Interruptible_7;
	// System.Boolean MoreMountains.Feedbacks.MMShaker::AlwaysResetTargetValuesAfterShake
	bool ___AlwaysResetTargetValuesAfterShake_8;
	// System.Single MoreMountains.Feedbacks.MMShaker::CooldownBetweenShakes
	float ___CooldownBetweenShakes_9;
	// System.Boolean MoreMountains.Feedbacks.MMShaker::Shaking
	bool ___Shaking_10;
	// System.Boolean MoreMountains.Feedbacks.MMShaker::ForwardDirection
	bool ___ForwardDirection_11;
	// MoreMountains.Feedbacks.TimescaleModes MoreMountains.Feedbacks.MMShaker::TimescaleMode
	int32_t ___TimescaleMode_12;
	// System.Boolean MoreMountains.Feedbacks.MMShaker::_listeningToEvents
	bool ____listeningToEvents_13;
	// System.Single MoreMountains.Feedbacks.MMShaker::_shakeStartedTimestamp
	float ____shakeStartedTimestamp_14;
	// System.Single MoreMountains.Feedbacks.MMShaker::_remappedTimeSinceStart
	float ____remappedTimeSinceStart_15;
	// System.Boolean MoreMountains.Feedbacks.MMShaker::_resetShakerValuesAfterShake
	bool ____resetShakerValuesAfterShake_16;
	// System.Boolean MoreMountains.Feedbacks.MMShaker::_resetTargetValuesAfterShake
	bool ____resetTargetValuesAfterShake_17;
	// System.Single MoreMountains.Feedbacks.MMShaker::_journey
	float ____journey_18;

public:
	inline static int32_t get_offset_of_Channel_4() { return static_cast<int32_t>(offsetof(MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1, ___Channel_4)); }
	inline int32_t get_Channel_4() const { return ___Channel_4; }
	inline int32_t* get_address_of_Channel_4() { return &___Channel_4; }
	inline void set_Channel_4(int32_t value)
	{
		___Channel_4 = value;
	}

	inline static int32_t get_offset_of_ShakeDuration_5() { return static_cast<int32_t>(offsetof(MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1, ___ShakeDuration_5)); }
	inline float get_ShakeDuration_5() const { return ___ShakeDuration_5; }
	inline float* get_address_of_ShakeDuration_5() { return &___ShakeDuration_5; }
	inline void set_ShakeDuration_5(float value)
	{
		___ShakeDuration_5 = value;
	}

	inline static int32_t get_offset_of_PlayOnAwake_6() { return static_cast<int32_t>(offsetof(MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1, ___PlayOnAwake_6)); }
	inline bool get_PlayOnAwake_6() const { return ___PlayOnAwake_6; }
	inline bool* get_address_of_PlayOnAwake_6() { return &___PlayOnAwake_6; }
	inline void set_PlayOnAwake_6(bool value)
	{
		___PlayOnAwake_6 = value;
	}

	inline static int32_t get_offset_of_Interruptible_7() { return static_cast<int32_t>(offsetof(MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1, ___Interruptible_7)); }
	inline bool get_Interruptible_7() const { return ___Interruptible_7; }
	inline bool* get_address_of_Interruptible_7() { return &___Interruptible_7; }
	inline void set_Interruptible_7(bool value)
	{
		___Interruptible_7 = value;
	}

	inline static int32_t get_offset_of_AlwaysResetTargetValuesAfterShake_8() { return static_cast<int32_t>(offsetof(MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1, ___AlwaysResetTargetValuesAfterShake_8)); }
	inline bool get_AlwaysResetTargetValuesAfterShake_8() const { return ___AlwaysResetTargetValuesAfterShake_8; }
	inline bool* get_address_of_AlwaysResetTargetValuesAfterShake_8() { return &___AlwaysResetTargetValuesAfterShake_8; }
	inline void set_AlwaysResetTargetValuesAfterShake_8(bool value)
	{
		___AlwaysResetTargetValuesAfterShake_8 = value;
	}

	inline static int32_t get_offset_of_CooldownBetweenShakes_9() { return static_cast<int32_t>(offsetof(MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1, ___CooldownBetweenShakes_9)); }
	inline float get_CooldownBetweenShakes_9() const { return ___CooldownBetweenShakes_9; }
	inline float* get_address_of_CooldownBetweenShakes_9() { return &___CooldownBetweenShakes_9; }
	inline void set_CooldownBetweenShakes_9(float value)
	{
		___CooldownBetweenShakes_9 = value;
	}

	inline static int32_t get_offset_of_Shaking_10() { return static_cast<int32_t>(offsetof(MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1, ___Shaking_10)); }
	inline bool get_Shaking_10() const { return ___Shaking_10; }
	inline bool* get_address_of_Shaking_10() { return &___Shaking_10; }
	inline void set_Shaking_10(bool value)
	{
		___Shaking_10 = value;
	}

	inline static int32_t get_offset_of_ForwardDirection_11() { return static_cast<int32_t>(offsetof(MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1, ___ForwardDirection_11)); }
	inline bool get_ForwardDirection_11() const { return ___ForwardDirection_11; }
	inline bool* get_address_of_ForwardDirection_11() { return &___ForwardDirection_11; }
	inline void set_ForwardDirection_11(bool value)
	{
		___ForwardDirection_11 = value;
	}

	inline static int32_t get_offset_of_TimescaleMode_12() { return static_cast<int32_t>(offsetof(MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1, ___TimescaleMode_12)); }
	inline int32_t get_TimescaleMode_12() const { return ___TimescaleMode_12; }
	inline int32_t* get_address_of_TimescaleMode_12() { return &___TimescaleMode_12; }
	inline void set_TimescaleMode_12(int32_t value)
	{
		___TimescaleMode_12 = value;
	}

	inline static int32_t get_offset_of__listeningToEvents_13() { return static_cast<int32_t>(offsetof(MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1, ____listeningToEvents_13)); }
	inline bool get__listeningToEvents_13() const { return ____listeningToEvents_13; }
	inline bool* get_address_of__listeningToEvents_13() { return &____listeningToEvents_13; }
	inline void set__listeningToEvents_13(bool value)
	{
		____listeningToEvents_13 = value;
	}

	inline static int32_t get_offset_of__shakeStartedTimestamp_14() { return static_cast<int32_t>(offsetof(MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1, ____shakeStartedTimestamp_14)); }
	inline float get__shakeStartedTimestamp_14() const { return ____shakeStartedTimestamp_14; }
	inline float* get_address_of__shakeStartedTimestamp_14() { return &____shakeStartedTimestamp_14; }
	inline void set__shakeStartedTimestamp_14(float value)
	{
		____shakeStartedTimestamp_14 = value;
	}

	inline static int32_t get_offset_of__remappedTimeSinceStart_15() { return static_cast<int32_t>(offsetof(MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1, ____remappedTimeSinceStart_15)); }
	inline float get__remappedTimeSinceStart_15() const { return ____remappedTimeSinceStart_15; }
	inline float* get_address_of__remappedTimeSinceStart_15() { return &____remappedTimeSinceStart_15; }
	inline void set__remappedTimeSinceStart_15(float value)
	{
		____remappedTimeSinceStart_15 = value;
	}

	inline static int32_t get_offset_of__resetShakerValuesAfterShake_16() { return static_cast<int32_t>(offsetof(MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1, ____resetShakerValuesAfterShake_16)); }
	inline bool get__resetShakerValuesAfterShake_16() const { return ____resetShakerValuesAfterShake_16; }
	inline bool* get_address_of__resetShakerValuesAfterShake_16() { return &____resetShakerValuesAfterShake_16; }
	inline void set__resetShakerValuesAfterShake_16(bool value)
	{
		____resetShakerValuesAfterShake_16 = value;
	}

	inline static int32_t get_offset_of__resetTargetValuesAfterShake_17() { return static_cast<int32_t>(offsetof(MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1, ____resetTargetValuesAfterShake_17)); }
	inline bool get__resetTargetValuesAfterShake_17() const { return ____resetTargetValuesAfterShake_17; }
	inline bool* get_address_of__resetTargetValuesAfterShake_17() { return &____resetTargetValuesAfterShake_17; }
	inline void set__resetTargetValuesAfterShake_17(bool value)
	{
		____resetTargetValuesAfterShake_17 = value;
	}

	inline static int32_t get_offset_of__journey_18() { return static_cast<int32_t>(offsetof(MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1, ____journey_18)); }
	inline float get__journey_18() const { return ____journey_18; }
	inline float* get_address_of__journey_18() { return &____journey_18; }
	inline void set__journey_18(float value)
	{
		____journey_18 = value;
	}
};


// Cinemachine.CinemachineBasicMultiChannelPerlin
struct CinemachineBasicMultiChannelPerlin_t09A5B81525F473505BB264366B43E55C8FA143CF  : public CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D
{
public:
	// Cinemachine.NoiseSettings Cinemachine.CinemachineBasicMultiChannelPerlin::m_NoiseProfile
	NoiseSettings_tD51A3FC701AF692F4CFC059617906D6C31AA4397 * ___m_NoiseProfile_12;
	// UnityEngine.Vector3 Cinemachine.CinemachineBasicMultiChannelPerlin::m_PivotOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_PivotOffset_13;
	// System.Single Cinemachine.CinemachineBasicMultiChannelPerlin::m_AmplitudeGain
	float ___m_AmplitudeGain_14;
	// System.Single Cinemachine.CinemachineBasicMultiChannelPerlin::m_FrequencyGain
	float ___m_FrequencyGain_15;
	// System.Boolean Cinemachine.CinemachineBasicMultiChannelPerlin::mInitialized
	bool ___mInitialized_16;
	// System.Single Cinemachine.CinemachineBasicMultiChannelPerlin::mNoiseTime
	float ___mNoiseTime_17;
	// UnityEngine.Vector3 Cinemachine.CinemachineBasicMultiChannelPerlin::mNoiseOffsets
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mNoiseOffsets_18;

public:
	inline static int32_t get_offset_of_m_NoiseProfile_12() { return static_cast<int32_t>(offsetof(CinemachineBasicMultiChannelPerlin_t09A5B81525F473505BB264366B43E55C8FA143CF, ___m_NoiseProfile_12)); }
	inline NoiseSettings_tD51A3FC701AF692F4CFC059617906D6C31AA4397 * get_m_NoiseProfile_12() const { return ___m_NoiseProfile_12; }
	inline NoiseSettings_tD51A3FC701AF692F4CFC059617906D6C31AA4397 ** get_address_of_m_NoiseProfile_12() { return &___m_NoiseProfile_12; }
	inline void set_m_NoiseProfile_12(NoiseSettings_tD51A3FC701AF692F4CFC059617906D6C31AA4397 * value)
	{
		___m_NoiseProfile_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NoiseProfile_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_PivotOffset_13() { return static_cast<int32_t>(offsetof(CinemachineBasicMultiChannelPerlin_t09A5B81525F473505BB264366B43E55C8FA143CF, ___m_PivotOffset_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_PivotOffset_13() const { return ___m_PivotOffset_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_PivotOffset_13() { return &___m_PivotOffset_13; }
	inline void set_m_PivotOffset_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_PivotOffset_13 = value;
	}

	inline static int32_t get_offset_of_m_AmplitudeGain_14() { return static_cast<int32_t>(offsetof(CinemachineBasicMultiChannelPerlin_t09A5B81525F473505BB264366B43E55C8FA143CF, ___m_AmplitudeGain_14)); }
	inline float get_m_AmplitudeGain_14() const { return ___m_AmplitudeGain_14; }
	inline float* get_address_of_m_AmplitudeGain_14() { return &___m_AmplitudeGain_14; }
	inline void set_m_AmplitudeGain_14(float value)
	{
		___m_AmplitudeGain_14 = value;
	}

	inline static int32_t get_offset_of_m_FrequencyGain_15() { return static_cast<int32_t>(offsetof(CinemachineBasicMultiChannelPerlin_t09A5B81525F473505BB264366B43E55C8FA143CF, ___m_FrequencyGain_15)); }
	inline float get_m_FrequencyGain_15() const { return ___m_FrequencyGain_15; }
	inline float* get_address_of_m_FrequencyGain_15() { return &___m_FrequencyGain_15; }
	inline void set_m_FrequencyGain_15(float value)
	{
		___m_FrequencyGain_15 = value;
	}

	inline static int32_t get_offset_of_mInitialized_16() { return static_cast<int32_t>(offsetof(CinemachineBasicMultiChannelPerlin_t09A5B81525F473505BB264366B43E55C8FA143CF, ___mInitialized_16)); }
	inline bool get_mInitialized_16() const { return ___mInitialized_16; }
	inline bool* get_address_of_mInitialized_16() { return &___mInitialized_16; }
	inline void set_mInitialized_16(bool value)
	{
		___mInitialized_16 = value;
	}

	inline static int32_t get_offset_of_mNoiseTime_17() { return static_cast<int32_t>(offsetof(CinemachineBasicMultiChannelPerlin_t09A5B81525F473505BB264366B43E55C8FA143CF, ___mNoiseTime_17)); }
	inline float get_mNoiseTime_17() const { return ___mNoiseTime_17; }
	inline float* get_address_of_mNoiseTime_17() { return &___mNoiseTime_17; }
	inline void set_mNoiseTime_17(float value)
	{
		___mNoiseTime_17 = value;
	}

	inline static int32_t get_offset_of_mNoiseOffsets_18() { return static_cast<int32_t>(offsetof(CinemachineBasicMultiChannelPerlin_t09A5B81525F473505BB264366B43E55C8FA143CF, ___mNoiseOffsets_18)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_mNoiseOffsets_18() const { return ___mNoiseOffsets_18; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_mNoiseOffsets_18() { return &___mNoiseOffsets_18; }
	inline void set_mNoiseOffsets_18(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___mNoiseOffsets_18 = value;
	}
};


// Cinemachine.CinemachineFreeLook
struct CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F  : public CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5
{
public:
	// UnityEngine.Transform Cinemachine.CinemachineFreeLook::m_LookAt
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_LookAt_19;
	// UnityEngine.Transform Cinemachine.CinemachineFreeLook::m_Follow
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Follow_20;
	// System.Boolean Cinemachine.CinemachineFreeLook::m_CommonLens
	bool ___m_CommonLens_21;
	// Cinemachine.LensSettings Cinemachine.CinemachineFreeLook::m_Lens
	LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  ___m_Lens_22;
	// Cinemachine.CinemachineVirtualCameraBase/TransitionParams Cinemachine.CinemachineFreeLook::m_Transitions
	TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C  ___m_Transitions_23;
	// Cinemachine.CinemachineVirtualCameraBase/BlendHint Cinemachine.CinemachineFreeLook::m_LegacyBlendHint
	int32_t ___m_LegacyBlendHint_24;
	// Cinemachine.AxisState Cinemachine.CinemachineFreeLook::m_YAxis
	AxisState_t376D19829A676B98933979F42845F6476071DDE8  ___m_YAxis_25;
	// Cinemachine.AxisState/Recentering Cinemachine.CinemachineFreeLook::m_YAxisRecentering
	Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  ___m_YAxisRecentering_26;
	// Cinemachine.AxisState Cinemachine.CinemachineFreeLook::m_XAxis
	AxisState_t376D19829A676B98933979F42845F6476071DDE8  ___m_XAxis_27;
	// Cinemachine.CinemachineOrbitalTransposer/Heading Cinemachine.CinemachineFreeLook::m_Heading
	Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9  ___m_Heading_28;
	// Cinemachine.AxisState/Recentering Cinemachine.CinemachineFreeLook::m_RecenterToTargetHeading
	Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  ___m_RecenterToTargetHeading_29;
	// Cinemachine.CinemachineTransposer/BindingMode Cinemachine.CinemachineFreeLook::m_BindingMode
	int32_t ___m_BindingMode_30;
	// System.Single Cinemachine.CinemachineFreeLook::m_SplineCurvature
	float ___m_SplineCurvature_31;
	// Cinemachine.CinemachineFreeLook/Orbit[] Cinemachine.CinemachineFreeLook::m_Orbits
	OrbitU5BU5D_t6E72D519BC4799C53639700DA84A0B5D9A8843C7* ___m_Orbits_32;
	// System.Single Cinemachine.CinemachineFreeLook::m_LegacyHeadingBias
	float ___m_LegacyHeadingBias_33;
	// System.Boolean Cinemachine.CinemachineFreeLook::mUseLegacyRigDefinitions
	bool ___mUseLegacyRigDefinitions_34;
	// System.Boolean Cinemachine.CinemachineFreeLook::mIsDestroyed
	bool ___mIsDestroyed_35;
	// Cinemachine.CameraState Cinemachine.CinemachineFreeLook::m_State
	CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601  ___m_State_36;
	// Cinemachine.CinemachineVirtualCamera[] Cinemachine.CinemachineFreeLook::m_Rigs
	CinemachineVirtualCameraU5BU5D_tC889EF06476C516ECD8E2A99BD4C4067B8F8E57A* ___m_Rigs_37;
	// Cinemachine.CinemachineOrbitalTransposer[] Cinemachine.CinemachineFreeLook::mOrbitals
	CinemachineOrbitalTransposerU5BU5D_t262EAE08AEDA55E53176DB1697F768E1DA37C2E4* ___mOrbitals_38;
	// Cinemachine.CinemachineBlend Cinemachine.CinemachineFreeLook::mBlendA
	CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * ___mBlendA_39;
	// Cinemachine.CinemachineBlend Cinemachine.CinemachineFreeLook::mBlendB
	CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * ___mBlendB_40;
	// System.Single Cinemachine.CinemachineFreeLook::<CachedXAxisHeading>k__BackingField
	float ___U3CCachedXAxisHeadingU3Ek__BackingField_43;
	// Cinemachine.CinemachineFreeLook/Orbit[] Cinemachine.CinemachineFreeLook::m_CachedOrbits
	OrbitU5BU5D_t6E72D519BC4799C53639700DA84A0B5D9A8843C7* ___m_CachedOrbits_44;
	// System.Single Cinemachine.CinemachineFreeLook::m_CachedTension
	float ___m_CachedTension_45;
	// UnityEngine.Vector4[] Cinemachine.CinemachineFreeLook::m_CachedKnots
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___m_CachedKnots_46;
	// UnityEngine.Vector4[] Cinemachine.CinemachineFreeLook::m_CachedCtrl1
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___m_CachedCtrl1_47;
	// UnityEngine.Vector4[] Cinemachine.CinemachineFreeLook::m_CachedCtrl2
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___m_CachedCtrl2_48;

public:
	inline static int32_t get_offset_of_m_LookAt_19() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_LookAt_19)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_LookAt_19() const { return ___m_LookAt_19; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_LookAt_19() { return &___m_LookAt_19; }
	inline void set_m_LookAt_19(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_LookAt_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LookAt_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Follow_20() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_Follow_20)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_Follow_20() const { return ___m_Follow_20; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_Follow_20() { return &___m_Follow_20; }
	inline void set_m_Follow_20(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_Follow_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Follow_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_CommonLens_21() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_CommonLens_21)); }
	inline bool get_m_CommonLens_21() const { return ___m_CommonLens_21; }
	inline bool* get_address_of_m_CommonLens_21() { return &___m_CommonLens_21; }
	inline void set_m_CommonLens_21(bool value)
	{
		___m_CommonLens_21 = value;
	}

	inline static int32_t get_offset_of_m_Lens_22() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_Lens_22)); }
	inline LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  get_m_Lens_22() const { return ___m_Lens_22; }
	inline LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * get_address_of_m_Lens_22() { return &___m_Lens_22; }
	inline void set_m_Lens_22(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  value)
	{
		___m_Lens_22 = value;
	}

	inline static int32_t get_offset_of_m_Transitions_23() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_Transitions_23)); }
	inline TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C  get_m_Transitions_23() const { return ___m_Transitions_23; }
	inline TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C * get_address_of_m_Transitions_23() { return &___m_Transitions_23; }
	inline void set_m_Transitions_23(TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C  value)
	{
		___m_Transitions_23 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Transitions_23))->___m_OnCameraLive_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_LegacyBlendHint_24() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_LegacyBlendHint_24)); }
	inline int32_t get_m_LegacyBlendHint_24() const { return ___m_LegacyBlendHint_24; }
	inline int32_t* get_address_of_m_LegacyBlendHint_24() { return &___m_LegacyBlendHint_24; }
	inline void set_m_LegacyBlendHint_24(int32_t value)
	{
		___m_LegacyBlendHint_24 = value;
	}

	inline static int32_t get_offset_of_m_YAxis_25() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_YAxis_25)); }
	inline AxisState_t376D19829A676B98933979F42845F6476071DDE8  get_m_YAxis_25() const { return ___m_YAxis_25; }
	inline AxisState_t376D19829A676B98933979F42845F6476071DDE8 * get_address_of_m_YAxis_25() { return &___m_YAxis_25; }
	inline void set_m_YAxis_25(AxisState_t376D19829A676B98933979F42845F6476071DDE8  value)
	{
		___m_YAxis_25 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_YAxis_25))->___m_InputAxisName_5), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_YAxis_25))->___m_InputAxisProvider_16), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_YAxisRecentering_26() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_YAxisRecentering_26)); }
	inline Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  get_m_YAxisRecentering_26() const { return ___m_YAxisRecentering_26; }
	inline Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427 * get_address_of_m_YAxisRecentering_26() { return &___m_YAxisRecentering_26; }
	inline void set_m_YAxisRecentering_26(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  value)
	{
		___m_YAxisRecentering_26 = value;
	}

	inline static int32_t get_offset_of_m_XAxis_27() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_XAxis_27)); }
	inline AxisState_t376D19829A676B98933979F42845F6476071DDE8  get_m_XAxis_27() const { return ___m_XAxis_27; }
	inline AxisState_t376D19829A676B98933979F42845F6476071DDE8 * get_address_of_m_XAxis_27() { return &___m_XAxis_27; }
	inline void set_m_XAxis_27(AxisState_t376D19829A676B98933979F42845F6476071DDE8  value)
	{
		___m_XAxis_27 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_XAxis_27))->___m_InputAxisName_5), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_XAxis_27))->___m_InputAxisProvider_16), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Heading_28() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_Heading_28)); }
	inline Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9  get_m_Heading_28() const { return ___m_Heading_28; }
	inline Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9 * get_address_of_m_Heading_28() { return &___m_Heading_28; }
	inline void set_m_Heading_28(Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9  value)
	{
		___m_Heading_28 = value;
	}

	inline static int32_t get_offset_of_m_RecenterToTargetHeading_29() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_RecenterToTargetHeading_29)); }
	inline Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  get_m_RecenterToTargetHeading_29() const { return ___m_RecenterToTargetHeading_29; }
	inline Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427 * get_address_of_m_RecenterToTargetHeading_29() { return &___m_RecenterToTargetHeading_29; }
	inline void set_m_RecenterToTargetHeading_29(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  value)
	{
		___m_RecenterToTargetHeading_29 = value;
	}

	inline static int32_t get_offset_of_m_BindingMode_30() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_BindingMode_30)); }
	inline int32_t get_m_BindingMode_30() const { return ___m_BindingMode_30; }
	inline int32_t* get_address_of_m_BindingMode_30() { return &___m_BindingMode_30; }
	inline void set_m_BindingMode_30(int32_t value)
	{
		___m_BindingMode_30 = value;
	}

	inline static int32_t get_offset_of_m_SplineCurvature_31() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_SplineCurvature_31)); }
	inline float get_m_SplineCurvature_31() const { return ___m_SplineCurvature_31; }
	inline float* get_address_of_m_SplineCurvature_31() { return &___m_SplineCurvature_31; }
	inline void set_m_SplineCurvature_31(float value)
	{
		___m_SplineCurvature_31 = value;
	}

	inline static int32_t get_offset_of_m_Orbits_32() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_Orbits_32)); }
	inline OrbitU5BU5D_t6E72D519BC4799C53639700DA84A0B5D9A8843C7* get_m_Orbits_32() const { return ___m_Orbits_32; }
	inline OrbitU5BU5D_t6E72D519BC4799C53639700DA84A0B5D9A8843C7** get_address_of_m_Orbits_32() { return &___m_Orbits_32; }
	inline void set_m_Orbits_32(OrbitU5BU5D_t6E72D519BC4799C53639700DA84A0B5D9A8843C7* value)
	{
		___m_Orbits_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Orbits_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyHeadingBias_33() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_LegacyHeadingBias_33)); }
	inline float get_m_LegacyHeadingBias_33() const { return ___m_LegacyHeadingBias_33; }
	inline float* get_address_of_m_LegacyHeadingBias_33() { return &___m_LegacyHeadingBias_33; }
	inline void set_m_LegacyHeadingBias_33(float value)
	{
		___m_LegacyHeadingBias_33 = value;
	}

	inline static int32_t get_offset_of_mUseLegacyRigDefinitions_34() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___mUseLegacyRigDefinitions_34)); }
	inline bool get_mUseLegacyRigDefinitions_34() const { return ___mUseLegacyRigDefinitions_34; }
	inline bool* get_address_of_mUseLegacyRigDefinitions_34() { return &___mUseLegacyRigDefinitions_34; }
	inline void set_mUseLegacyRigDefinitions_34(bool value)
	{
		___mUseLegacyRigDefinitions_34 = value;
	}

	inline static int32_t get_offset_of_mIsDestroyed_35() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___mIsDestroyed_35)); }
	inline bool get_mIsDestroyed_35() const { return ___mIsDestroyed_35; }
	inline bool* get_address_of_mIsDestroyed_35() { return &___mIsDestroyed_35; }
	inline void set_mIsDestroyed_35(bool value)
	{
		___mIsDestroyed_35 = value;
	}

	inline static int32_t get_offset_of_m_State_36() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_State_36)); }
	inline CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601  get_m_State_36() const { return ___m_State_36; }
	inline CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601 * get_address_of_m_State_36() { return &___m_State_36; }
	inline void set_m_State_36(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601  value)
	{
		___m_State_36 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_State_36))->___mCustom0_11))->___m_Custom_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_State_36))->___mCustom1_12))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_State_36))->___mCustom2_13))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_State_36))->___mCustom3_14))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_State_36))->___m_CustomOverflow_15), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Rigs_37() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_Rigs_37)); }
	inline CinemachineVirtualCameraU5BU5D_tC889EF06476C516ECD8E2A99BD4C4067B8F8E57A* get_m_Rigs_37() const { return ___m_Rigs_37; }
	inline CinemachineVirtualCameraU5BU5D_tC889EF06476C516ECD8E2A99BD4C4067B8F8E57A** get_address_of_m_Rigs_37() { return &___m_Rigs_37; }
	inline void set_m_Rigs_37(CinemachineVirtualCameraU5BU5D_tC889EF06476C516ECD8E2A99BD4C4067B8F8E57A* value)
	{
		___m_Rigs_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rigs_37), (void*)value);
	}

	inline static int32_t get_offset_of_mOrbitals_38() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___mOrbitals_38)); }
	inline CinemachineOrbitalTransposerU5BU5D_t262EAE08AEDA55E53176DB1697F768E1DA37C2E4* get_mOrbitals_38() const { return ___mOrbitals_38; }
	inline CinemachineOrbitalTransposerU5BU5D_t262EAE08AEDA55E53176DB1697F768E1DA37C2E4** get_address_of_mOrbitals_38() { return &___mOrbitals_38; }
	inline void set_mOrbitals_38(CinemachineOrbitalTransposerU5BU5D_t262EAE08AEDA55E53176DB1697F768E1DA37C2E4* value)
	{
		___mOrbitals_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOrbitals_38), (void*)value);
	}

	inline static int32_t get_offset_of_mBlendA_39() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___mBlendA_39)); }
	inline CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * get_mBlendA_39() const { return ___mBlendA_39; }
	inline CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C ** get_address_of_mBlendA_39() { return &___mBlendA_39; }
	inline void set_mBlendA_39(CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * value)
	{
		___mBlendA_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mBlendA_39), (void*)value);
	}

	inline static int32_t get_offset_of_mBlendB_40() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___mBlendB_40)); }
	inline CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * get_mBlendB_40() const { return ___mBlendB_40; }
	inline CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C ** get_address_of_mBlendB_40() { return &___mBlendB_40; }
	inline void set_mBlendB_40(CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * value)
	{
		___mBlendB_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mBlendB_40), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCachedXAxisHeadingU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___U3CCachedXAxisHeadingU3Ek__BackingField_43)); }
	inline float get_U3CCachedXAxisHeadingU3Ek__BackingField_43() const { return ___U3CCachedXAxisHeadingU3Ek__BackingField_43; }
	inline float* get_address_of_U3CCachedXAxisHeadingU3Ek__BackingField_43() { return &___U3CCachedXAxisHeadingU3Ek__BackingField_43; }
	inline void set_U3CCachedXAxisHeadingU3Ek__BackingField_43(float value)
	{
		___U3CCachedXAxisHeadingU3Ek__BackingField_43 = value;
	}

	inline static int32_t get_offset_of_m_CachedOrbits_44() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_CachedOrbits_44)); }
	inline OrbitU5BU5D_t6E72D519BC4799C53639700DA84A0B5D9A8843C7* get_m_CachedOrbits_44() const { return ___m_CachedOrbits_44; }
	inline OrbitU5BU5D_t6E72D519BC4799C53639700DA84A0B5D9A8843C7** get_address_of_m_CachedOrbits_44() { return &___m_CachedOrbits_44; }
	inline void set_m_CachedOrbits_44(OrbitU5BU5D_t6E72D519BC4799C53639700DA84A0B5D9A8843C7* value)
	{
		___m_CachedOrbits_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedOrbits_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedTension_45() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_CachedTension_45)); }
	inline float get_m_CachedTension_45() const { return ___m_CachedTension_45; }
	inline float* get_address_of_m_CachedTension_45() { return &___m_CachedTension_45; }
	inline void set_m_CachedTension_45(float value)
	{
		___m_CachedTension_45 = value;
	}

	inline static int32_t get_offset_of_m_CachedKnots_46() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_CachedKnots_46)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_m_CachedKnots_46() const { return ___m_CachedKnots_46; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_m_CachedKnots_46() { return &___m_CachedKnots_46; }
	inline void set_m_CachedKnots_46(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___m_CachedKnots_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedKnots_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedCtrl1_47() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_CachedCtrl1_47)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_m_CachedCtrl1_47() const { return ___m_CachedCtrl1_47; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_m_CachedCtrl1_47() { return &___m_CachedCtrl1_47; }
	inline void set_m_CachedCtrl1_47(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___m_CachedCtrl1_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedCtrl1_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedCtrl2_48() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F, ___m_CachedCtrl2_48)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_m_CachedCtrl2_48() const { return ___m_CachedCtrl2_48; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_m_CachedCtrl2_48() { return &___m_CachedCtrl2_48; }
	inline void set_m_CachedCtrl2_48(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___m_CachedCtrl2_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedCtrl2_48), (void*)value);
	}
};

struct CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F_StaticFields
{
public:
	// Cinemachine.CinemachineFreeLook/CreateRigDelegate Cinemachine.CinemachineFreeLook::CreateRigOverride
	CreateRigDelegate_t7FF9E13258FAF45CD7A591B792B1171596A16270 * ___CreateRigOverride_41;
	// Cinemachine.CinemachineFreeLook/DestroyRigDelegate Cinemachine.CinemachineFreeLook::DestroyRigOverride
	DestroyRigDelegate_tEC6C3F9493E6C7AF161C5BE580A398B3C333ED49 * ___DestroyRigOverride_42;

public:
	inline static int32_t get_offset_of_CreateRigOverride_41() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F_StaticFields, ___CreateRigOverride_41)); }
	inline CreateRigDelegate_t7FF9E13258FAF45CD7A591B792B1171596A16270 * get_CreateRigOverride_41() const { return ___CreateRigOverride_41; }
	inline CreateRigDelegate_t7FF9E13258FAF45CD7A591B792B1171596A16270 ** get_address_of_CreateRigOverride_41() { return &___CreateRigOverride_41; }
	inline void set_CreateRigOverride_41(CreateRigDelegate_t7FF9E13258FAF45CD7A591B792B1171596A16270 * value)
	{
		___CreateRigOverride_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CreateRigOverride_41), (void*)value);
	}

	inline static int32_t get_offset_of_DestroyRigOverride_42() { return static_cast<int32_t>(offsetof(CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F_StaticFields, ___DestroyRigOverride_42)); }
	inline DestroyRigDelegate_tEC6C3F9493E6C7AF161C5BE580A398B3C333ED49 * get_DestroyRigOverride_42() const { return ___DestroyRigOverride_42; }
	inline DestroyRigDelegate_tEC6C3F9493E6C7AF161C5BE580A398B3C333ED49 ** get_address_of_DestroyRigOverride_42() { return &___DestroyRigOverride_42; }
	inline void set_DestroyRigOverride_42(DestroyRigDelegate_tEC6C3F9493E6C7AF161C5BE580A398B3C333ED49 * value)
	{
		___DestroyRigOverride_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DestroyRigOverride_42), (void*)value);
	}
};


// Cinemachine.CinemachineVirtualCamera
struct CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C  : public CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5
{
public:
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::m_LookAt
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_LookAt_19;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::m_Follow
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Follow_20;
	// Cinemachine.LensSettings Cinemachine.CinemachineVirtualCamera::m_Lens
	LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  ___m_Lens_21;
	// Cinemachine.CinemachineVirtualCameraBase/TransitionParams Cinemachine.CinemachineVirtualCamera::m_Transitions
	TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C  ___m_Transitions_22;
	// Cinemachine.CinemachineVirtualCameraBase/BlendHint Cinemachine.CinemachineVirtualCamera::m_LegacyBlendHint
	int32_t ___m_LegacyBlendHint_23;
	// System.Boolean Cinemachine.CinemachineVirtualCamera::<UserIsDragging>k__BackingField
	bool ___U3CUserIsDraggingU3Ek__BackingField_27;
	// Cinemachine.CameraState Cinemachine.CinemachineVirtualCamera::m_State
	CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601  ___m_State_28;
	// Cinemachine.CinemachineComponentBase[] Cinemachine.CinemachineVirtualCamera::m_ComponentPipeline
	CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC* ___m_ComponentPipeline_29;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::m_ComponentOwner
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_ComponentOwner_30;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::mCachedLookAtTarget
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___mCachedLookAtTarget_31;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCamera::mCachedLookAtTargetVcam
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___mCachedLookAtTargetVcam_32;

public:
	inline static int32_t get_offset_of_m_LookAt_19() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___m_LookAt_19)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_LookAt_19() const { return ___m_LookAt_19; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_LookAt_19() { return &___m_LookAt_19; }
	inline void set_m_LookAt_19(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_LookAt_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LookAt_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Follow_20() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___m_Follow_20)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_Follow_20() const { return ___m_Follow_20; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_Follow_20() { return &___m_Follow_20; }
	inline void set_m_Follow_20(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_Follow_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Follow_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_Lens_21() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___m_Lens_21)); }
	inline LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  get_m_Lens_21() const { return ___m_Lens_21; }
	inline LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * get_address_of_m_Lens_21() { return &___m_Lens_21; }
	inline void set_m_Lens_21(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  value)
	{
		___m_Lens_21 = value;
	}

	inline static int32_t get_offset_of_m_Transitions_22() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___m_Transitions_22)); }
	inline TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C  get_m_Transitions_22() const { return ___m_Transitions_22; }
	inline TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C * get_address_of_m_Transitions_22() { return &___m_Transitions_22; }
	inline void set_m_Transitions_22(TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C  value)
	{
		___m_Transitions_22 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Transitions_22))->___m_OnCameraLive_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_LegacyBlendHint_23() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___m_LegacyBlendHint_23)); }
	inline int32_t get_m_LegacyBlendHint_23() const { return ___m_LegacyBlendHint_23; }
	inline int32_t* get_address_of_m_LegacyBlendHint_23() { return &___m_LegacyBlendHint_23; }
	inline void set_m_LegacyBlendHint_23(int32_t value)
	{
		___m_LegacyBlendHint_23 = value;
	}

	inline static int32_t get_offset_of_U3CUserIsDraggingU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___U3CUserIsDraggingU3Ek__BackingField_27)); }
	inline bool get_U3CUserIsDraggingU3Ek__BackingField_27() const { return ___U3CUserIsDraggingU3Ek__BackingField_27; }
	inline bool* get_address_of_U3CUserIsDraggingU3Ek__BackingField_27() { return &___U3CUserIsDraggingU3Ek__BackingField_27; }
	inline void set_U3CUserIsDraggingU3Ek__BackingField_27(bool value)
	{
		___U3CUserIsDraggingU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_m_State_28() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___m_State_28)); }
	inline CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601  get_m_State_28() const { return ___m_State_28; }
	inline CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601 * get_address_of_m_State_28() { return &___m_State_28; }
	inline void set_m_State_28(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601  value)
	{
		___m_State_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_State_28))->___mCustom0_11))->___m_Custom_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_State_28))->___mCustom1_12))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_State_28))->___mCustom2_13))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_State_28))->___mCustom3_14))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_State_28))->___m_CustomOverflow_15), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_ComponentPipeline_29() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___m_ComponentPipeline_29)); }
	inline CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC* get_m_ComponentPipeline_29() const { return ___m_ComponentPipeline_29; }
	inline CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC** get_address_of_m_ComponentPipeline_29() { return &___m_ComponentPipeline_29; }
	inline void set_m_ComponentPipeline_29(CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC* value)
	{
		___m_ComponentPipeline_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ComponentPipeline_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_ComponentOwner_30() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___m_ComponentOwner_30)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_ComponentOwner_30() const { return ___m_ComponentOwner_30; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_ComponentOwner_30() { return &___m_ComponentOwner_30; }
	inline void set_m_ComponentOwner_30(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_ComponentOwner_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ComponentOwner_30), (void*)value);
	}

	inline static int32_t get_offset_of_mCachedLookAtTarget_31() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___mCachedLookAtTarget_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_mCachedLookAtTarget_31() const { return ___mCachedLookAtTarget_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_mCachedLookAtTarget_31() { return &___mCachedLookAtTarget_31; }
	inline void set_mCachedLookAtTarget_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___mCachedLookAtTarget_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCachedLookAtTarget_31), (void*)value);
	}

	inline static int32_t get_offset_of_mCachedLookAtTargetVcam_32() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___mCachedLookAtTargetVcam_32)); }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * get_mCachedLookAtTargetVcam_32() const { return ___mCachedLookAtTargetVcam_32; }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 ** get_address_of_mCachedLookAtTargetVcam_32() { return &___mCachedLookAtTargetVcam_32; }
	inline void set_mCachedLookAtTargetVcam_32(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * value)
	{
		___mCachedLookAtTargetVcam_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCachedLookAtTargetVcam_32), (void*)value);
	}
};

struct CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C_StaticFields
{
public:
	// Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate Cinemachine.CinemachineVirtualCamera::CreatePipelineOverride
	CreatePipelineDelegate_tB2027A3AD25F49EFC2BE7B2872BB15C1B7856C19 * ___CreatePipelineOverride_25;
	// Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate Cinemachine.CinemachineVirtualCamera::DestroyPipelineOverride
	DestroyPipelineDelegate_tA69D0FA40EDBF1EF43F75E7FE8A33D85F8DD1B28 * ___DestroyPipelineOverride_26;

public:
	inline static int32_t get_offset_of_CreatePipelineOverride_25() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C_StaticFields, ___CreatePipelineOverride_25)); }
	inline CreatePipelineDelegate_tB2027A3AD25F49EFC2BE7B2872BB15C1B7856C19 * get_CreatePipelineOverride_25() const { return ___CreatePipelineOverride_25; }
	inline CreatePipelineDelegate_tB2027A3AD25F49EFC2BE7B2872BB15C1B7856C19 ** get_address_of_CreatePipelineOverride_25() { return &___CreatePipelineOverride_25; }
	inline void set_CreatePipelineOverride_25(CreatePipelineDelegate_tB2027A3AD25F49EFC2BE7B2872BB15C1B7856C19 * value)
	{
		___CreatePipelineOverride_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CreatePipelineOverride_25), (void*)value);
	}

	inline static int32_t get_offset_of_DestroyPipelineOverride_26() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C_StaticFields, ___DestroyPipelineOverride_26)); }
	inline DestroyPipelineDelegate_tA69D0FA40EDBF1EF43F75E7FE8A33D85F8DD1B28 * get_DestroyPipelineOverride_26() const { return ___DestroyPipelineOverride_26; }
	inline DestroyPipelineDelegate_tA69D0FA40EDBF1EF43F75E7FE8A33D85F8DD1B28 ** get_address_of_DestroyPipelineOverride_26() { return &___DestroyPipelineOverride_26; }
	inline void set_DestroyPipelineOverride_26(DestroyPipelineDelegate_tA69D0FA40EDBF1EF43F75E7FE8A33D85F8DD1B28 * value)
	{
		___DestroyPipelineOverride_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DestroyPipelineOverride_26), (void*)value);
	}
};


// MoreMountains.FeedbacksForThirdParty.MMCinemachineClippingPlanesShaker
struct MMCinemachineClippingPlanesShaker_t3D80DEB9393559C031C6BF3D1C7AA06ED76E8962  : public MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1
{
public:
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMCinemachineClippingPlanesShaker::RelativeClippingPlanes
	bool ___RelativeClippingPlanes_19;
	// UnityEngine.AnimationCurve MoreMountains.FeedbacksForThirdParty.MMCinemachineClippingPlanesShaker::ShakeNear
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___ShakeNear_20;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineClippingPlanesShaker::RemapNearZero
	float ___RemapNearZero_21;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineClippingPlanesShaker::RemapNearOne
	float ___RemapNearOne_22;
	// UnityEngine.AnimationCurve MoreMountains.FeedbacksForThirdParty.MMCinemachineClippingPlanesShaker::ShakeFar
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___ShakeFar_23;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineClippingPlanesShaker::RemapFarZero
	float ___RemapFarZero_24;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineClippingPlanesShaker::RemapFarOne
	float ___RemapFarOne_25;
	// Cinemachine.CinemachineVirtualCamera MoreMountains.FeedbacksForThirdParty.MMCinemachineClippingPlanesShaker::_targetCamera
	CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * ____targetCamera_26;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineClippingPlanesShaker::_initialNear
	float ____initialNear_27;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineClippingPlanesShaker::_initialFar
	float ____initialFar_28;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineClippingPlanesShaker::_originalShakeDuration
	float ____originalShakeDuration_29;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMCinemachineClippingPlanesShaker::_originalRelativeClippingPlanes
	bool ____originalRelativeClippingPlanes_30;
	// UnityEngine.AnimationCurve MoreMountains.FeedbacksForThirdParty.MMCinemachineClippingPlanesShaker::_originalShakeNear
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ____originalShakeNear_31;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineClippingPlanesShaker::_originalRemapNearZero
	float ____originalRemapNearZero_32;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineClippingPlanesShaker::_originalRemapNearOne
	float ____originalRemapNearOne_33;
	// UnityEngine.AnimationCurve MoreMountains.FeedbacksForThirdParty.MMCinemachineClippingPlanesShaker::_originalShakeFar
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ____originalShakeFar_34;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineClippingPlanesShaker::_originalRemapFarZero
	float ____originalRemapFarZero_35;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineClippingPlanesShaker::_originalRemapFarOne
	float ____originalRemapFarOne_36;

public:
	inline static int32_t get_offset_of_RelativeClippingPlanes_19() { return static_cast<int32_t>(offsetof(MMCinemachineClippingPlanesShaker_t3D80DEB9393559C031C6BF3D1C7AA06ED76E8962, ___RelativeClippingPlanes_19)); }
	inline bool get_RelativeClippingPlanes_19() const { return ___RelativeClippingPlanes_19; }
	inline bool* get_address_of_RelativeClippingPlanes_19() { return &___RelativeClippingPlanes_19; }
	inline void set_RelativeClippingPlanes_19(bool value)
	{
		___RelativeClippingPlanes_19 = value;
	}

	inline static int32_t get_offset_of_ShakeNear_20() { return static_cast<int32_t>(offsetof(MMCinemachineClippingPlanesShaker_t3D80DEB9393559C031C6BF3D1C7AA06ED76E8962, ___ShakeNear_20)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_ShakeNear_20() const { return ___ShakeNear_20; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_ShakeNear_20() { return &___ShakeNear_20; }
	inline void set_ShakeNear_20(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___ShakeNear_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShakeNear_20), (void*)value);
	}

	inline static int32_t get_offset_of_RemapNearZero_21() { return static_cast<int32_t>(offsetof(MMCinemachineClippingPlanesShaker_t3D80DEB9393559C031C6BF3D1C7AA06ED76E8962, ___RemapNearZero_21)); }
	inline float get_RemapNearZero_21() const { return ___RemapNearZero_21; }
	inline float* get_address_of_RemapNearZero_21() { return &___RemapNearZero_21; }
	inline void set_RemapNearZero_21(float value)
	{
		___RemapNearZero_21 = value;
	}

	inline static int32_t get_offset_of_RemapNearOne_22() { return static_cast<int32_t>(offsetof(MMCinemachineClippingPlanesShaker_t3D80DEB9393559C031C6BF3D1C7AA06ED76E8962, ___RemapNearOne_22)); }
	inline float get_RemapNearOne_22() const { return ___RemapNearOne_22; }
	inline float* get_address_of_RemapNearOne_22() { return &___RemapNearOne_22; }
	inline void set_RemapNearOne_22(float value)
	{
		___RemapNearOne_22 = value;
	}

	inline static int32_t get_offset_of_ShakeFar_23() { return static_cast<int32_t>(offsetof(MMCinemachineClippingPlanesShaker_t3D80DEB9393559C031C6BF3D1C7AA06ED76E8962, ___ShakeFar_23)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_ShakeFar_23() const { return ___ShakeFar_23; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_ShakeFar_23() { return &___ShakeFar_23; }
	inline void set_ShakeFar_23(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___ShakeFar_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShakeFar_23), (void*)value);
	}

	inline static int32_t get_offset_of_RemapFarZero_24() { return static_cast<int32_t>(offsetof(MMCinemachineClippingPlanesShaker_t3D80DEB9393559C031C6BF3D1C7AA06ED76E8962, ___RemapFarZero_24)); }
	inline float get_RemapFarZero_24() const { return ___RemapFarZero_24; }
	inline float* get_address_of_RemapFarZero_24() { return &___RemapFarZero_24; }
	inline void set_RemapFarZero_24(float value)
	{
		___RemapFarZero_24 = value;
	}

	inline static int32_t get_offset_of_RemapFarOne_25() { return static_cast<int32_t>(offsetof(MMCinemachineClippingPlanesShaker_t3D80DEB9393559C031C6BF3D1C7AA06ED76E8962, ___RemapFarOne_25)); }
	inline float get_RemapFarOne_25() const { return ___RemapFarOne_25; }
	inline float* get_address_of_RemapFarOne_25() { return &___RemapFarOne_25; }
	inline void set_RemapFarOne_25(float value)
	{
		___RemapFarOne_25 = value;
	}

	inline static int32_t get_offset_of__targetCamera_26() { return static_cast<int32_t>(offsetof(MMCinemachineClippingPlanesShaker_t3D80DEB9393559C031C6BF3D1C7AA06ED76E8962, ____targetCamera_26)); }
	inline CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * get__targetCamera_26() const { return ____targetCamera_26; }
	inline CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C ** get_address_of__targetCamera_26() { return &____targetCamera_26; }
	inline void set__targetCamera_26(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * value)
	{
		____targetCamera_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____targetCamera_26), (void*)value);
	}

	inline static int32_t get_offset_of__initialNear_27() { return static_cast<int32_t>(offsetof(MMCinemachineClippingPlanesShaker_t3D80DEB9393559C031C6BF3D1C7AA06ED76E8962, ____initialNear_27)); }
	inline float get__initialNear_27() const { return ____initialNear_27; }
	inline float* get_address_of__initialNear_27() { return &____initialNear_27; }
	inline void set__initialNear_27(float value)
	{
		____initialNear_27 = value;
	}

	inline static int32_t get_offset_of__initialFar_28() { return static_cast<int32_t>(offsetof(MMCinemachineClippingPlanesShaker_t3D80DEB9393559C031C6BF3D1C7AA06ED76E8962, ____initialFar_28)); }
	inline float get__initialFar_28() const { return ____initialFar_28; }
	inline float* get_address_of__initialFar_28() { return &____initialFar_28; }
	inline void set__initialFar_28(float value)
	{
		____initialFar_28 = value;
	}

	inline static int32_t get_offset_of__originalShakeDuration_29() { return static_cast<int32_t>(offsetof(MMCinemachineClippingPlanesShaker_t3D80DEB9393559C031C6BF3D1C7AA06ED76E8962, ____originalShakeDuration_29)); }
	inline float get__originalShakeDuration_29() const { return ____originalShakeDuration_29; }
	inline float* get_address_of__originalShakeDuration_29() { return &____originalShakeDuration_29; }
	inline void set__originalShakeDuration_29(float value)
	{
		____originalShakeDuration_29 = value;
	}

	inline static int32_t get_offset_of__originalRelativeClippingPlanes_30() { return static_cast<int32_t>(offsetof(MMCinemachineClippingPlanesShaker_t3D80DEB9393559C031C6BF3D1C7AA06ED76E8962, ____originalRelativeClippingPlanes_30)); }
	inline bool get__originalRelativeClippingPlanes_30() const { return ____originalRelativeClippingPlanes_30; }
	inline bool* get_address_of__originalRelativeClippingPlanes_30() { return &____originalRelativeClippingPlanes_30; }
	inline void set__originalRelativeClippingPlanes_30(bool value)
	{
		____originalRelativeClippingPlanes_30 = value;
	}

	inline static int32_t get_offset_of__originalShakeNear_31() { return static_cast<int32_t>(offsetof(MMCinemachineClippingPlanesShaker_t3D80DEB9393559C031C6BF3D1C7AA06ED76E8962, ____originalShakeNear_31)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get__originalShakeNear_31() const { return ____originalShakeNear_31; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of__originalShakeNear_31() { return &____originalShakeNear_31; }
	inline void set__originalShakeNear_31(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		____originalShakeNear_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____originalShakeNear_31), (void*)value);
	}

	inline static int32_t get_offset_of__originalRemapNearZero_32() { return static_cast<int32_t>(offsetof(MMCinemachineClippingPlanesShaker_t3D80DEB9393559C031C6BF3D1C7AA06ED76E8962, ____originalRemapNearZero_32)); }
	inline float get__originalRemapNearZero_32() const { return ____originalRemapNearZero_32; }
	inline float* get_address_of__originalRemapNearZero_32() { return &____originalRemapNearZero_32; }
	inline void set__originalRemapNearZero_32(float value)
	{
		____originalRemapNearZero_32 = value;
	}

	inline static int32_t get_offset_of__originalRemapNearOne_33() { return static_cast<int32_t>(offsetof(MMCinemachineClippingPlanesShaker_t3D80DEB9393559C031C6BF3D1C7AA06ED76E8962, ____originalRemapNearOne_33)); }
	inline float get__originalRemapNearOne_33() const { return ____originalRemapNearOne_33; }
	inline float* get_address_of__originalRemapNearOne_33() { return &____originalRemapNearOne_33; }
	inline void set__originalRemapNearOne_33(float value)
	{
		____originalRemapNearOne_33 = value;
	}

	inline static int32_t get_offset_of__originalShakeFar_34() { return static_cast<int32_t>(offsetof(MMCinemachineClippingPlanesShaker_t3D80DEB9393559C031C6BF3D1C7AA06ED76E8962, ____originalShakeFar_34)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get__originalShakeFar_34() const { return ____originalShakeFar_34; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of__originalShakeFar_34() { return &____originalShakeFar_34; }
	inline void set__originalShakeFar_34(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		____originalShakeFar_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____originalShakeFar_34), (void*)value);
	}

	inline static int32_t get_offset_of__originalRemapFarZero_35() { return static_cast<int32_t>(offsetof(MMCinemachineClippingPlanesShaker_t3D80DEB9393559C031C6BF3D1C7AA06ED76E8962, ____originalRemapFarZero_35)); }
	inline float get__originalRemapFarZero_35() const { return ____originalRemapFarZero_35; }
	inline float* get_address_of__originalRemapFarZero_35() { return &____originalRemapFarZero_35; }
	inline void set__originalRemapFarZero_35(float value)
	{
		____originalRemapFarZero_35 = value;
	}

	inline static int32_t get_offset_of__originalRemapFarOne_36() { return static_cast<int32_t>(offsetof(MMCinemachineClippingPlanesShaker_t3D80DEB9393559C031C6BF3D1C7AA06ED76E8962, ____originalRemapFarOne_36)); }
	inline float get__originalRemapFarOne_36() const { return ____originalRemapFarOne_36; }
	inline float* get_address_of__originalRemapFarOne_36() { return &____originalRemapFarOne_36; }
	inline void set__originalRemapFarOne_36(float value)
	{
		____originalRemapFarOne_36 = value;
	}
};


// MoreMountains.FeedbacksForThirdParty.MMCinemachineFieldOfViewShaker
struct MMCinemachineFieldOfViewShaker_t8C5DCA609EAC92EEC90058F0CFE7349460B67DDB  : public MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1
{
public:
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMCinemachineFieldOfViewShaker::RelativeFieldOfView
	bool ___RelativeFieldOfView_19;
	// UnityEngine.AnimationCurve MoreMountains.FeedbacksForThirdParty.MMCinemachineFieldOfViewShaker::ShakeFieldOfView
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___ShakeFieldOfView_20;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineFieldOfViewShaker::RemapFieldOfViewZero
	float ___RemapFieldOfViewZero_21;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineFieldOfViewShaker::RemapFieldOfViewOne
	float ___RemapFieldOfViewOne_22;
	// Cinemachine.CinemachineVirtualCamera MoreMountains.FeedbacksForThirdParty.MMCinemachineFieldOfViewShaker::_targetCamera
	CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * ____targetCamera_23;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineFieldOfViewShaker::_initialFieldOfView
	float ____initialFieldOfView_24;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineFieldOfViewShaker::_originalShakeDuration
	float ____originalShakeDuration_25;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMCinemachineFieldOfViewShaker::_originalRelativeFieldOfView
	bool ____originalRelativeFieldOfView_26;
	// UnityEngine.AnimationCurve MoreMountains.FeedbacksForThirdParty.MMCinemachineFieldOfViewShaker::_originalShakeFieldOfView
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ____originalShakeFieldOfView_27;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineFieldOfViewShaker::_originalRemapFieldOfViewZero
	float ____originalRemapFieldOfViewZero_28;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineFieldOfViewShaker::_originalRemapFieldOfViewOne
	float ____originalRemapFieldOfViewOne_29;

public:
	inline static int32_t get_offset_of_RelativeFieldOfView_19() { return static_cast<int32_t>(offsetof(MMCinemachineFieldOfViewShaker_t8C5DCA609EAC92EEC90058F0CFE7349460B67DDB, ___RelativeFieldOfView_19)); }
	inline bool get_RelativeFieldOfView_19() const { return ___RelativeFieldOfView_19; }
	inline bool* get_address_of_RelativeFieldOfView_19() { return &___RelativeFieldOfView_19; }
	inline void set_RelativeFieldOfView_19(bool value)
	{
		___RelativeFieldOfView_19 = value;
	}

	inline static int32_t get_offset_of_ShakeFieldOfView_20() { return static_cast<int32_t>(offsetof(MMCinemachineFieldOfViewShaker_t8C5DCA609EAC92EEC90058F0CFE7349460B67DDB, ___ShakeFieldOfView_20)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_ShakeFieldOfView_20() const { return ___ShakeFieldOfView_20; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_ShakeFieldOfView_20() { return &___ShakeFieldOfView_20; }
	inline void set_ShakeFieldOfView_20(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___ShakeFieldOfView_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShakeFieldOfView_20), (void*)value);
	}

	inline static int32_t get_offset_of_RemapFieldOfViewZero_21() { return static_cast<int32_t>(offsetof(MMCinemachineFieldOfViewShaker_t8C5DCA609EAC92EEC90058F0CFE7349460B67DDB, ___RemapFieldOfViewZero_21)); }
	inline float get_RemapFieldOfViewZero_21() const { return ___RemapFieldOfViewZero_21; }
	inline float* get_address_of_RemapFieldOfViewZero_21() { return &___RemapFieldOfViewZero_21; }
	inline void set_RemapFieldOfViewZero_21(float value)
	{
		___RemapFieldOfViewZero_21 = value;
	}

	inline static int32_t get_offset_of_RemapFieldOfViewOne_22() { return static_cast<int32_t>(offsetof(MMCinemachineFieldOfViewShaker_t8C5DCA609EAC92EEC90058F0CFE7349460B67DDB, ___RemapFieldOfViewOne_22)); }
	inline float get_RemapFieldOfViewOne_22() const { return ___RemapFieldOfViewOne_22; }
	inline float* get_address_of_RemapFieldOfViewOne_22() { return &___RemapFieldOfViewOne_22; }
	inline void set_RemapFieldOfViewOne_22(float value)
	{
		___RemapFieldOfViewOne_22 = value;
	}

	inline static int32_t get_offset_of__targetCamera_23() { return static_cast<int32_t>(offsetof(MMCinemachineFieldOfViewShaker_t8C5DCA609EAC92EEC90058F0CFE7349460B67DDB, ____targetCamera_23)); }
	inline CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * get__targetCamera_23() const { return ____targetCamera_23; }
	inline CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C ** get_address_of__targetCamera_23() { return &____targetCamera_23; }
	inline void set__targetCamera_23(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * value)
	{
		____targetCamera_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____targetCamera_23), (void*)value);
	}

	inline static int32_t get_offset_of__initialFieldOfView_24() { return static_cast<int32_t>(offsetof(MMCinemachineFieldOfViewShaker_t8C5DCA609EAC92EEC90058F0CFE7349460B67DDB, ____initialFieldOfView_24)); }
	inline float get__initialFieldOfView_24() const { return ____initialFieldOfView_24; }
	inline float* get_address_of__initialFieldOfView_24() { return &____initialFieldOfView_24; }
	inline void set__initialFieldOfView_24(float value)
	{
		____initialFieldOfView_24 = value;
	}

	inline static int32_t get_offset_of__originalShakeDuration_25() { return static_cast<int32_t>(offsetof(MMCinemachineFieldOfViewShaker_t8C5DCA609EAC92EEC90058F0CFE7349460B67DDB, ____originalShakeDuration_25)); }
	inline float get__originalShakeDuration_25() const { return ____originalShakeDuration_25; }
	inline float* get_address_of__originalShakeDuration_25() { return &____originalShakeDuration_25; }
	inline void set__originalShakeDuration_25(float value)
	{
		____originalShakeDuration_25 = value;
	}

	inline static int32_t get_offset_of__originalRelativeFieldOfView_26() { return static_cast<int32_t>(offsetof(MMCinemachineFieldOfViewShaker_t8C5DCA609EAC92EEC90058F0CFE7349460B67DDB, ____originalRelativeFieldOfView_26)); }
	inline bool get__originalRelativeFieldOfView_26() const { return ____originalRelativeFieldOfView_26; }
	inline bool* get_address_of__originalRelativeFieldOfView_26() { return &____originalRelativeFieldOfView_26; }
	inline void set__originalRelativeFieldOfView_26(bool value)
	{
		____originalRelativeFieldOfView_26 = value;
	}

	inline static int32_t get_offset_of__originalShakeFieldOfView_27() { return static_cast<int32_t>(offsetof(MMCinemachineFieldOfViewShaker_t8C5DCA609EAC92EEC90058F0CFE7349460B67DDB, ____originalShakeFieldOfView_27)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get__originalShakeFieldOfView_27() const { return ____originalShakeFieldOfView_27; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of__originalShakeFieldOfView_27() { return &____originalShakeFieldOfView_27; }
	inline void set__originalShakeFieldOfView_27(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		____originalShakeFieldOfView_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____originalShakeFieldOfView_27), (void*)value);
	}

	inline static int32_t get_offset_of__originalRemapFieldOfViewZero_28() { return static_cast<int32_t>(offsetof(MMCinemachineFieldOfViewShaker_t8C5DCA609EAC92EEC90058F0CFE7349460B67DDB, ____originalRemapFieldOfViewZero_28)); }
	inline float get__originalRemapFieldOfViewZero_28() const { return ____originalRemapFieldOfViewZero_28; }
	inline float* get_address_of__originalRemapFieldOfViewZero_28() { return &____originalRemapFieldOfViewZero_28; }
	inline void set__originalRemapFieldOfViewZero_28(float value)
	{
		____originalRemapFieldOfViewZero_28 = value;
	}

	inline static int32_t get_offset_of__originalRemapFieldOfViewOne_29() { return static_cast<int32_t>(offsetof(MMCinemachineFieldOfViewShaker_t8C5DCA609EAC92EEC90058F0CFE7349460B67DDB, ____originalRemapFieldOfViewOne_29)); }
	inline float get__originalRemapFieldOfViewOne_29() const { return ____originalRemapFieldOfViewOne_29; }
	inline float* get_address_of__originalRemapFieldOfViewOne_29() { return &____originalRemapFieldOfViewOne_29; }
	inline void set__originalRemapFieldOfViewOne_29(float value)
	{
		____originalRemapFieldOfViewOne_29 = value;
	}
};


// MoreMountains.FeedbacksForThirdParty.MMCinemachineOrthographicSizeShaker
struct MMCinemachineOrthographicSizeShaker_tA59A08A48FA9916DE2E68340FE49A991A786C53B  : public MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1
{
public:
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMCinemachineOrthographicSizeShaker::RelativeOrthographicSize
	bool ___RelativeOrthographicSize_19;
	// UnityEngine.AnimationCurve MoreMountains.FeedbacksForThirdParty.MMCinemachineOrthographicSizeShaker::ShakeOrthographicSize
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___ShakeOrthographicSize_20;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineOrthographicSizeShaker::RemapOrthographicSizeZero
	float ___RemapOrthographicSizeZero_21;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineOrthographicSizeShaker::RemapOrthographicSizeOne
	float ___RemapOrthographicSizeOne_22;
	// Cinemachine.CinemachineVirtualCamera MoreMountains.FeedbacksForThirdParty.MMCinemachineOrthographicSizeShaker::_targetCamera
	CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * ____targetCamera_23;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineOrthographicSizeShaker::_initialOrthographicSize
	float ____initialOrthographicSize_24;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineOrthographicSizeShaker::_originalShakeDuration
	float ____originalShakeDuration_25;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMCinemachineOrthographicSizeShaker::_originalRelativeOrthographicSize
	bool ____originalRelativeOrthographicSize_26;
	// UnityEngine.AnimationCurve MoreMountains.FeedbacksForThirdParty.MMCinemachineOrthographicSizeShaker::_originalShakeOrthographicSize
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ____originalShakeOrthographicSize_27;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineOrthographicSizeShaker::_originalRemapOrthographicSizeZero
	float ____originalRemapOrthographicSizeZero_28;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineOrthographicSizeShaker::_originalRemapOrthographicSizeOne
	float ____originalRemapOrthographicSizeOne_29;

public:
	inline static int32_t get_offset_of_RelativeOrthographicSize_19() { return static_cast<int32_t>(offsetof(MMCinemachineOrthographicSizeShaker_tA59A08A48FA9916DE2E68340FE49A991A786C53B, ___RelativeOrthographicSize_19)); }
	inline bool get_RelativeOrthographicSize_19() const { return ___RelativeOrthographicSize_19; }
	inline bool* get_address_of_RelativeOrthographicSize_19() { return &___RelativeOrthographicSize_19; }
	inline void set_RelativeOrthographicSize_19(bool value)
	{
		___RelativeOrthographicSize_19 = value;
	}

	inline static int32_t get_offset_of_ShakeOrthographicSize_20() { return static_cast<int32_t>(offsetof(MMCinemachineOrthographicSizeShaker_tA59A08A48FA9916DE2E68340FE49A991A786C53B, ___ShakeOrthographicSize_20)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_ShakeOrthographicSize_20() const { return ___ShakeOrthographicSize_20; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_ShakeOrthographicSize_20() { return &___ShakeOrthographicSize_20; }
	inline void set_ShakeOrthographicSize_20(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___ShakeOrthographicSize_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShakeOrthographicSize_20), (void*)value);
	}

	inline static int32_t get_offset_of_RemapOrthographicSizeZero_21() { return static_cast<int32_t>(offsetof(MMCinemachineOrthographicSizeShaker_tA59A08A48FA9916DE2E68340FE49A991A786C53B, ___RemapOrthographicSizeZero_21)); }
	inline float get_RemapOrthographicSizeZero_21() const { return ___RemapOrthographicSizeZero_21; }
	inline float* get_address_of_RemapOrthographicSizeZero_21() { return &___RemapOrthographicSizeZero_21; }
	inline void set_RemapOrthographicSizeZero_21(float value)
	{
		___RemapOrthographicSizeZero_21 = value;
	}

	inline static int32_t get_offset_of_RemapOrthographicSizeOne_22() { return static_cast<int32_t>(offsetof(MMCinemachineOrthographicSizeShaker_tA59A08A48FA9916DE2E68340FE49A991A786C53B, ___RemapOrthographicSizeOne_22)); }
	inline float get_RemapOrthographicSizeOne_22() const { return ___RemapOrthographicSizeOne_22; }
	inline float* get_address_of_RemapOrthographicSizeOne_22() { return &___RemapOrthographicSizeOne_22; }
	inline void set_RemapOrthographicSizeOne_22(float value)
	{
		___RemapOrthographicSizeOne_22 = value;
	}

	inline static int32_t get_offset_of__targetCamera_23() { return static_cast<int32_t>(offsetof(MMCinemachineOrthographicSizeShaker_tA59A08A48FA9916DE2E68340FE49A991A786C53B, ____targetCamera_23)); }
	inline CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * get__targetCamera_23() const { return ____targetCamera_23; }
	inline CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C ** get_address_of__targetCamera_23() { return &____targetCamera_23; }
	inline void set__targetCamera_23(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * value)
	{
		____targetCamera_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____targetCamera_23), (void*)value);
	}

	inline static int32_t get_offset_of__initialOrthographicSize_24() { return static_cast<int32_t>(offsetof(MMCinemachineOrthographicSizeShaker_tA59A08A48FA9916DE2E68340FE49A991A786C53B, ____initialOrthographicSize_24)); }
	inline float get__initialOrthographicSize_24() const { return ____initialOrthographicSize_24; }
	inline float* get_address_of__initialOrthographicSize_24() { return &____initialOrthographicSize_24; }
	inline void set__initialOrthographicSize_24(float value)
	{
		____initialOrthographicSize_24 = value;
	}

	inline static int32_t get_offset_of__originalShakeDuration_25() { return static_cast<int32_t>(offsetof(MMCinemachineOrthographicSizeShaker_tA59A08A48FA9916DE2E68340FE49A991A786C53B, ____originalShakeDuration_25)); }
	inline float get__originalShakeDuration_25() const { return ____originalShakeDuration_25; }
	inline float* get_address_of__originalShakeDuration_25() { return &____originalShakeDuration_25; }
	inline void set__originalShakeDuration_25(float value)
	{
		____originalShakeDuration_25 = value;
	}

	inline static int32_t get_offset_of__originalRelativeOrthographicSize_26() { return static_cast<int32_t>(offsetof(MMCinemachineOrthographicSizeShaker_tA59A08A48FA9916DE2E68340FE49A991A786C53B, ____originalRelativeOrthographicSize_26)); }
	inline bool get__originalRelativeOrthographicSize_26() const { return ____originalRelativeOrthographicSize_26; }
	inline bool* get_address_of__originalRelativeOrthographicSize_26() { return &____originalRelativeOrthographicSize_26; }
	inline void set__originalRelativeOrthographicSize_26(bool value)
	{
		____originalRelativeOrthographicSize_26 = value;
	}

	inline static int32_t get_offset_of__originalShakeOrthographicSize_27() { return static_cast<int32_t>(offsetof(MMCinemachineOrthographicSizeShaker_tA59A08A48FA9916DE2E68340FE49A991A786C53B, ____originalShakeOrthographicSize_27)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get__originalShakeOrthographicSize_27() const { return ____originalShakeOrthographicSize_27; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of__originalShakeOrthographicSize_27() { return &____originalShakeOrthographicSize_27; }
	inline void set__originalShakeOrthographicSize_27(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		____originalShakeOrthographicSize_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____originalShakeOrthographicSize_27), (void*)value);
	}

	inline static int32_t get_offset_of__originalRemapOrthographicSizeZero_28() { return static_cast<int32_t>(offsetof(MMCinemachineOrthographicSizeShaker_tA59A08A48FA9916DE2E68340FE49A991A786C53B, ____originalRemapOrthographicSizeZero_28)); }
	inline float get__originalRemapOrthographicSizeZero_28() const { return ____originalRemapOrthographicSizeZero_28; }
	inline float* get_address_of__originalRemapOrthographicSizeZero_28() { return &____originalRemapOrthographicSizeZero_28; }
	inline void set__originalRemapOrthographicSizeZero_28(float value)
	{
		____originalRemapOrthographicSizeZero_28 = value;
	}

	inline static int32_t get_offset_of__originalRemapOrthographicSizeOne_29() { return static_cast<int32_t>(offsetof(MMCinemachineOrthographicSizeShaker_tA59A08A48FA9916DE2E68340FE49A991A786C53B, ____originalRemapOrthographicSizeOne_29)); }
	inline float get__originalRemapOrthographicSizeOne_29() const { return ____originalRemapOrthographicSizeOne_29; }
	inline float* get_address_of__originalRemapOrthographicSizeOne_29() { return &____originalRemapOrthographicSizeOne_29; }
	inline void set__originalRemapOrthographicSizeOne_29(float value)
	{
		____originalRemapOrthographicSizeOne_29 = value;
	}
};


// MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineImpulse
struct MMFeedbackCinemachineImpulse_tD470D5F859B2CA5DCA02D467D6AEAA11D468DABB  : public MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4
{
public:
	// Cinemachine.CinemachineImpulseDefinition MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineImpulse::m_ImpulseDefinition
	CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9 * ___m_ImpulseDefinition_29;
	// UnityEngine.Vector3 MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineImpulse::Velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Velocity_30;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineImpulse::ClearImpulseOnStop
	bool ___ClearImpulseOnStop_31;

public:
	inline static int32_t get_offset_of_m_ImpulseDefinition_29() { return static_cast<int32_t>(offsetof(MMFeedbackCinemachineImpulse_tD470D5F859B2CA5DCA02D467D6AEAA11D468DABB, ___m_ImpulseDefinition_29)); }
	inline CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9 * get_m_ImpulseDefinition_29() const { return ___m_ImpulseDefinition_29; }
	inline CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9 ** get_address_of_m_ImpulseDefinition_29() { return &___m_ImpulseDefinition_29; }
	inline void set_m_ImpulseDefinition_29(CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9 * value)
	{
		___m_ImpulseDefinition_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ImpulseDefinition_29), (void*)value);
	}

	inline static int32_t get_offset_of_Velocity_30() { return static_cast<int32_t>(offsetof(MMFeedbackCinemachineImpulse_tD470D5F859B2CA5DCA02D467D6AEAA11D468DABB, ___Velocity_30)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Velocity_30() const { return ___Velocity_30; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Velocity_30() { return &___Velocity_30; }
	inline void set_Velocity_30(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Velocity_30 = value;
	}

	inline static int32_t get_offset_of_ClearImpulseOnStop_31() { return static_cast<int32_t>(offsetof(MMFeedbackCinemachineImpulse_tD470D5F859B2CA5DCA02D467D6AEAA11D468DABB, ___ClearImpulseOnStop_31)); }
	inline bool get_ClearImpulseOnStop_31() const { return ___ClearImpulseOnStop_31; }
	inline bool* get_address_of_ClearImpulseOnStop_31() { return &___ClearImpulseOnStop_31; }
	inline void set_ClearImpulseOnStop_31(bool value)
	{
		___ClearImpulseOnStop_31 = value;
	}
};

struct MMFeedbackCinemachineImpulse_tD470D5F859B2CA5DCA02D467D6AEAA11D468DABB_StaticFields
{
public:
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineImpulse::FeedbackTypeAuthorized
	bool ___FeedbackTypeAuthorized_28;

public:
	inline static int32_t get_offset_of_FeedbackTypeAuthorized_28() { return static_cast<int32_t>(offsetof(MMFeedbackCinemachineImpulse_tD470D5F859B2CA5DCA02D467D6AEAA11D468DABB_StaticFields, ___FeedbackTypeAuthorized_28)); }
	inline bool get_FeedbackTypeAuthorized_28() const { return ___FeedbackTypeAuthorized_28; }
	inline bool* get_address_of_FeedbackTypeAuthorized_28() { return &___FeedbackTypeAuthorized_28; }
	inline void set_FeedbackTypeAuthorized_28(bool value)
	{
		___FeedbackTypeAuthorized_28 = value;
	}
};


// MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineImpulseClear
struct MMFeedbackCinemachineImpulseClear_t874A01EE0274A6972291FFAF467F60ED3AEE47D2  : public MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4
{
public:

public:
};

struct MMFeedbackCinemachineImpulseClear_t874A01EE0274A6972291FFAF467F60ED3AEE47D2_StaticFields
{
public:
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineImpulseClear::FeedbackTypeAuthorized
	bool ___FeedbackTypeAuthorized_28;

public:
	inline static int32_t get_offset_of_FeedbackTypeAuthorized_28() { return static_cast<int32_t>(offsetof(MMFeedbackCinemachineImpulseClear_t874A01EE0274A6972291FFAF467F60ED3AEE47D2_StaticFields, ___FeedbackTypeAuthorized_28)); }
	inline bool get_FeedbackTypeAuthorized_28() const { return ___FeedbackTypeAuthorized_28; }
	inline bool* get_address_of_FeedbackTypeAuthorized_28() { return &___FeedbackTypeAuthorized_28; }
	inline void set_FeedbackTypeAuthorized_28(bool value)
	{
		___FeedbackTypeAuthorized_28 = value;
	}
};


// MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineTransition
struct MMFeedbackCinemachineTransition_t6E131DC172B147B08C96B3ED6F9EF19A99E70A5B  : public MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4
{
public:
	// MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineTransition/Modes MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineTransition::Mode
	int32_t ___Mode_29;
	// System.Int32 MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineTransition::Channel
	int32_t ___Channel_30;
	// Cinemachine.CinemachineVirtualCamera MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineTransition::TargetVirtualCamera
	CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * ___TargetVirtualCamera_31;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineTransition::ResetValuesAfterTransition
	bool ___ResetValuesAfterTransition_32;
	// System.Int32 MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineTransition::NewPriority
	int32_t ___NewPriority_33;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineTransition::ForceMaxPriority
	bool ___ForceMaxPriority_34;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineTransition::ForceTransition
	bool ___ForceTransition_35;
	// Cinemachine.CinemachineBlendDefinition MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineTransition::BlendDefintion
	CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  ___BlendDefintion_36;
	// Cinemachine.CinemachineBlendDefinition MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineTransition::_tempBlend
	CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  ____tempBlend_37;

public:
	inline static int32_t get_offset_of_Mode_29() { return static_cast<int32_t>(offsetof(MMFeedbackCinemachineTransition_t6E131DC172B147B08C96B3ED6F9EF19A99E70A5B, ___Mode_29)); }
	inline int32_t get_Mode_29() const { return ___Mode_29; }
	inline int32_t* get_address_of_Mode_29() { return &___Mode_29; }
	inline void set_Mode_29(int32_t value)
	{
		___Mode_29 = value;
	}

	inline static int32_t get_offset_of_Channel_30() { return static_cast<int32_t>(offsetof(MMFeedbackCinemachineTransition_t6E131DC172B147B08C96B3ED6F9EF19A99E70A5B, ___Channel_30)); }
	inline int32_t get_Channel_30() const { return ___Channel_30; }
	inline int32_t* get_address_of_Channel_30() { return &___Channel_30; }
	inline void set_Channel_30(int32_t value)
	{
		___Channel_30 = value;
	}

	inline static int32_t get_offset_of_TargetVirtualCamera_31() { return static_cast<int32_t>(offsetof(MMFeedbackCinemachineTransition_t6E131DC172B147B08C96B3ED6F9EF19A99E70A5B, ___TargetVirtualCamera_31)); }
	inline CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * get_TargetVirtualCamera_31() const { return ___TargetVirtualCamera_31; }
	inline CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C ** get_address_of_TargetVirtualCamera_31() { return &___TargetVirtualCamera_31; }
	inline void set_TargetVirtualCamera_31(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * value)
	{
		___TargetVirtualCamera_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetVirtualCamera_31), (void*)value);
	}

	inline static int32_t get_offset_of_ResetValuesAfterTransition_32() { return static_cast<int32_t>(offsetof(MMFeedbackCinemachineTransition_t6E131DC172B147B08C96B3ED6F9EF19A99E70A5B, ___ResetValuesAfterTransition_32)); }
	inline bool get_ResetValuesAfterTransition_32() const { return ___ResetValuesAfterTransition_32; }
	inline bool* get_address_of_ResetValuesAfterTransition_32() { return &___ResetValuesAfterTransition_32; }
	inline void set_ResetValuesAfterTransition_32(bool value)
	{
		___ResetValuesAfterTransition_32 = value;
	}

	inline static int32_t get_offset_of_NewPriority_33() { return static_cast<int32_t>(offsetof(MMFeedbackCinemachineTransition_t6E131DC172B147B08C96B3ED6F9EF19A99E70A5B, ___NewPriority_33)); }
	inline int32_t get_NewPriority_33() const { return ___NewPriority_33; }
	inline int32_t* get_address_of_NewPriority_33() { return &___NewPriority_33; }
	inline void set_NewPriority_33(int32_t value)
	{
		___NewPriority_33 = value;
	}

	inline static int32_t get_offset_of_ForceMaxPriority_34() { return static_cast<int32_t>(offsetof(MMFeedbackCinemachineTransition_t6E131DC172B147B08C96B3ED6F9EF19A99E70A5B, ___ForceMaxPriority_34)); }
	inline bool get_ForceMaxPriority_34() const { return ___ForceMaxPriority_34; }
	inline bool* get_address_of_ForceMaxPriority_34() { return &___ForceMaxPriority_34; }
	inline void set_ForceMaxPriority_34(bool value)
	{
		___ForceMaxPriority_34 = value;
	}

	inline static int32_t get_offset_of_ForceTransition_35() { return static_cast<int32_t>(offsetof(MMFeedbackCinemachineTransition_t6E131DC172B147B08C96B3ED6F9EF19A99E70A5B, ___ForceTransition_35)); }
	inline bool get_ForceTransition_35() const { return ___ForceTransition_35; }
	inline bool* get_address_of_ForceTransition_35() { return &___ForceTransition_35; }
	inline void set_ForceTransition_35(bool value)
	{
		___ForceTransition_35 = value;
	}

	inline static int32_t get_offset_of_BlendDefintion_36() { return static_cast<int32_t>(offsetof(MMFeedbackCinemachineTransition_t6E131DC172B147B08C96B3ED6F9EF19A99E70A5B, ___BlendDefintion_36)); }
	inline CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  get_BlendDefintion_36() const { return ___BlendDefintion_36; }
	inline CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE * get_address_of_BlendDefintion_36() { return &___BlendDefintion_36; }
	inline void set_BlendDefintion_36(CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  value)
	{
		___BlendDefintion_36 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___BlendDefintion_36))->___m_CustomCurve_2), (void*)NULL);
	}

	inline static int32_t get_offset_of__tempBlend_37() { return static_cast<int32_t>(offsetof(MMFeedbackCinemachineTransition_t6E131DC172B147B08C96B3ED6F9EF19A99E70A5B, ____tempBlend_37)); }
	inline CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  get__tempBlend_37() const { return ____tempBlend_37; }
	inline CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE * get_address_of__tempBlend_37() { return &____tempBlend_37; }
	inline void set__tempBlend_37(CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  value)
	{
		____tempBlend_37 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____tempBlend_37))->___m_CustomCurve_2), (void*)NULL);
	}
};

struct MMFeedbackCinemachineTransition_t6E131DC172B147B08C96B3ED6F9EF19A99E70A5B_StaticFields
{
public:
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineTransition::FeedbackTypeAuthorized
	bool ___FeedbackTypeAuthorized_28;

public:
	inline static int32_t get_offset_of_FeedbackTypeAuthorized_28() { return static_cast<int32_t>(offsetof(MMFeedbackCinemachineTransition_t6E131DC172B147B08C96B3ED6F9EF19A99E70A5B_StaticFields, ___FeedbackTypeAuthorized_28)); }
	inline bool get_FeedbackTypeAuthorized_28() const { return ___FeedbackTypeAuthorized_28; }
	inline bool* get_address_of_FeedbackTypeAuthorized_28() { return &___FeedbackTypeAuthorized_28; }
	inline void set_FeedbackTypeAuthorized_28(bool value)
	{
		___FeedbackTypeAuthorized_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  m_Items[1];

public:
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 Cinemachine.CinemachineVirtualCamera::GetCinemachineComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CinemachineVirtualCamera_GetCinemachineComponent_TisRuntimeObject_m057362AEC21C83F60E2A6F055FCAC147F961D6EB_gshared (CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * __this, const RuntimeMethod* method);

// System.Single UnityEngine.Time::get_unscaledTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258 (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84 (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Cinemachine.CinemachineVirtualCamera>()
inline CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * GameObject_GetComponent_TisCinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C_m9DCB48A9A82ED7FB1AEB541DE9E97D1A16CE111A (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 Cinemachine.CinemachineVirtualCamera::GetCinemachineComponent<Cinemachine.CinemachineBasicMultiChannelPerlin>()
inline CinemachineBasicMultiChannelPerlin_t09A5B81525F473505BB264366B43E55C8FA143CF * CinemachineVirtualCamera_GetCinemachineComponent_TisCinemachineBasicMultiChannelPerlin_t09A5B81525F473505BB264366B43E55C8FA143CF_m51441B43447FF6005ECD69F88F5F8B1F2889449B (CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * __this, const RuntimeMethod* method)
{
	return ((  CinemachineBasicMultiChannelPerlin_t09A5B81525F473505BB264366B43E55C8FA143CF * (*) (CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C *, const RuntimeMethod*))CinemachineVirtualCamera_GetCinemachineComponent_TisRuntimeObject_m057362AEC21C83F60E2A6F055FCAC147F961D6EB_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___routine0, const RuntimeMethod* method);
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker/<ShakeCameraCo>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeCameraCoU3Ed__25__ctor_m6C7CF4DA0483CE7C5A9264CBBAB13043CB28D6D7 (U3CShakeCameraCoU3Ed__25_tE09D4113AE143A7E3D05BC37395FC0E64132AD08 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMCameraShakeEvent/Delegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate__ctor_m92750E4DE57041804753CA5809C649DBB44844BB (Delegate_t4C3689743AE14898C38CE0B0C0780290B304655A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMCameraShakeEvent::Register(MoreMountains.Feedbacks.MMCameraShakeEvent/Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCameraShakeEvent_Register_m724CD0839144D1B710757E1C6AB22E941216EDCB (Delegate_t4C3689743AE14898C38CE0B0C0780290B304655A * ___callback0, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMCameraShakeStopEvent/Delegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate__ctor_m828FB777E333546230DB23E0DCAA1C081D4D1D08 (Delegate_t40EA96416BE4B536B0071884D5B9BC356FB0B7C5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMCameraShakeStopEvent::Register(MoreMountains.Feedbacks.MMCameraShakeStopEvent/Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCameraShakeStopEvent_Register_m7116A4D9BC6DDEF692A978037A91C197C3D8D20D (Delegate_t40EA96416BE4B536B0071884D5B9BC356FB0B7C5 * ___callback0, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMCameraShakeEvent::Unregister(MoreMountains.Feedbacks.MMCameraShakeEvent/Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCameraShakeEvent_Unregister_mC1573AD7E2DA5F0AB8299CEBDD7A2F6C4D0F5E06 (Delegate_t4C3689743AE14898C38CE0B0C0780290B304655A * ___callback0, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMCameraShakeStopEvent::Unregister(MoreMountains.Feedbacks.MMCameraShakeStopEvent/Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCameraShakeStopEvent_Unregister_m4BDB20A81C8C1FE34062253C9D587C67901E38E6 (Delegate_t40EA96416BE4B536B0071884D5B9BC356FB0B7C5 * ___callback0, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMCameraShakeEvent::Trigger(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Boolean,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCameraShakeEvent_Trigger_mCF5AAE461A7F52ADF0F8464349413173E46A8EE2 (float ___duration0, float ___amplitude1, float ___frequency2, float ___amplitudeX3, float ___amplitudeY4, float ___amplitudeZ5, bool ___infinite6, int32_t ___channel7, bool ___useUnscaledTime8, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMShaker::Initialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMShaker_Initialization_mA0C4D4855C7877F7FD4BE6DB7C55D309A53753B3 (MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 * __this, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMShaker::ResetTargetValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMShaker_ResetTargetValues_m4A621683BB61D3FD391AAC8F7983528F725B24C2 (MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 * __this, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMShaker::ResetShakerValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMShaker_ResetShakerValues_m93AA8579FE316AD1BBCB482D7DC47593B5F70092 (MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 * __this, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMShaker::StartListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMShaker_StartListening_m2FD2D6DA250E2613C19EB5F54D1B4F78803D644F (MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 * __this, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMCameraClippingPlanesShakeEvent/Delegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate__ctor_m733422BE0BC41D7D63A7B61424293CD781087971 (Delegate_tB4E81FE04A8668FC7DEC066E526E461E23A9C691 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMCameraClippingPlanesShakeEvent::Register(MoreMountains.Feedbacks.MMCameraClippingPlanesShakeEvent/Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCameraClippingPlanesShakeEvent_Register_m6A7DECCE069AAD9D2E02F0FC3F05C914EFCB262B (Delegate_tB4E81FE04A8668FC7DEC066E526E461E23A9C691 * ___callback0, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMShaker::StopListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMShaker_StopListening_m1D60A4786564D907C4378080302EC52998682078 (MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 * __this, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMCameraClippingPlanesShakeEvent::Unregister(MoreMountains.Feedbacks.MMCameraClippingPlanesShakeEvent/Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCameraClippingPlanesShakeEvent_Unregister_m0B491D7BFD7512928B33E4143AC6923BCE0CAB18 (Delegate_tB4E81FE04A8668FC7DEC066E526E461E23A9C691 * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, float ___time0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* ___keys0, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMShaker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMShaker__ctor_m19139ACF2B49DCE913269ED0C2D23D9B08E85C74 (MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 * __this, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMCameraFieldOfViewShakeEvent/Delegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate__ctor_mFBE74CEFCF7377CCFBD4E381A7C7841542690FD7 (Delegate_t48AE9BB71693BEE6E672E6488338BA364A814D73 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMCameraFieldOfViewShakeEvent::Register(MoreMountains.Feedbacks.MMCameraFieldOfViewShakeEvent/Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCameraFieldOfViewShakeEvent_Register_m19C5C43176354FCE199695648EC34C8EB18F6637 (Delegate_t48AE9BB71693BEE6E672E6488338BA364A814D73 * ___callback0, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMCameraFieldOfViewShakeEvent::Unregister(MoreMountains.Feedbacks.MMCameraFieldOfViewShakeEvent/Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCameraFieldOfViewShakeEvent_Unregister_m3EB17557FCCF2C6981EB1C688AD34FB4860C28BF (Delegate_t48AE9BB71693BEE6E672E6488338BA364A814D73 * ___callback0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Cinemachine.CinemachineFreeLook>()
inline CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * GameObject_GetComponent_TisCinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F_m70D278C6A336E3099B1563C3B66477D03693802E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::LerpUnclamped(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_LerpUnclamped_mF68548D1AA22018863B6EBE911A5F7A959F94C1E (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMCameraZoomEvent/Delegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate__ctor_m7D7D03319B4EF6154F102E5EDFF26711FB51C4AD (Delegate_tAFFC0495409F3E38D283E26C7E2DF6CDC19DFA62 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMCameraZoomEvent::Register(MoreMountains.Feedbacks.MMCameraZoomEvent/Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCameraZoomEvent_Register_m21AF5CFDCCC96D94362DD58129554484A7D738B4 (Delegate_tAFFC0495409F3E38D283E26C7E2DF6CDC19DFA62 * ___callback0, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMCameraZoomEvent::Unregister(MoreMountains.Feedbacks.MMCameraZoomEvent/Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCameraZoomEvent_Unregister_mB161F83680ED067D665DA91006EE8A92B3083AB0 (Delegate_tAFFC0495409F3E38D283E26C7E2DF6CDC19DFA62 * ___callback0, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMCameraOrthographicSizeShakeEvent/Delegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate__ctor_mD22CAD931157C69FAE8456E9D80ACCF5C4154BD6 (Delegate_t5BE222D6A1E18E8E78F7B9F81C6AEC2C7CF03FCD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMCameraOrthographicSizeShakeEvent::Register(MoreMountains.Feedbacks.MMCameraOrthographicSizeShakeEvent/Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCameraOrthographicSizeShakeEvent_Register_m61133F90064EAF651830122BC78D43A6EFA90F89 (Delegate_t5BE222D6A1E18E8E78F7B9F81C6AEC2C7CF03FCD * ___callback0, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMCameraOrthographicSizeShakeEvent::Unregister(MoreMountains.Feedbacks.MMCameraOrthographicSizeShakeEvent/Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCameraOrthographicSizeShakeEvent_Unregister_m4DA6F4FFC40C414AA90819ADF3506C97FDEAC691 (Delegate_t5BE222D6A1E18E8E78F7B9F81C6AEC2C7CF03FCD * ___callback0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Cinemachine.CinemachineBrain>()
inline CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * GameObject_GetComponent_TisCinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83_m2A1B17232E3845E1A0E19D3B3A62281373C4A2DA (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityBrainListener/<ResetBlendDefinition>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetBlendDefinitionU3Ed__8__ctor_mE7FDF3743A2A64C273022C0A66B429BA40061DF3 (U3CResetBlendDefinitionU3Ed__8_t242A6A1726EC5B7D590D593342C301A52CD43A82 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityEvent/Delegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate__ctor_m3F65D60FD56F1F973DF4B2EB245DFF898BAC03FF (Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityEvent::Register(MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityEvent/Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityEvent_Register_m1C9F037507B96418A08AAF9E7F0014F62FEC62F1 (Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * ___callback0, const RuntimeMethod* method);
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityEvent::Unregister(MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityEvent/Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityEvent_Unregister_m5AD5136E7B76B00F82D657A403B9393070E2619B (Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * ___callback0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityEvent::add_OnEvent(MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityEvent/Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityEvent_add_OnEvent_mAF3896C0A39DACE620B115E0AEB78CC5BADDC58B (Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * ___value0, const RuntimeMethod* method);
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityEvent::remove_OnEvent(MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityEvent/Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityEvent_remove_OnEvent_m2BBF46DD78B08BC2EA23BFB82CCF223848F60F5E (Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * ___value0, const RuntimeMethod* method);
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityEvent/Delegate::Invoke(System.Int32,System.Boolean,System.Int32,System.Boolean,Cinemachine.CinemachineBlendDefinition,System.Boolean,MoreMountains.Feedbacks.TimescaleModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate_Invoke_mFCDBEA4B4A22EB571B61E584225935D7D1DAFC8C (Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * __this, int32_t ___channel0, bool ___forceMaxPriority1, int32_t ___newPriority2, bool ___forceTransition3, CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  ___blendDefinition4, bool ___resetValuesAfterTransition5, int32_t ___timescaleMode6, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Cinemachine.CinemachineVirtualCameraBase>()
inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * GameObject_GetComponent_TisCinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5_m06107BAD0F98AB92EEDD9CC81DCFDDAB29D7A27B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Cinemachine.CinemachineVirtualCameraBase::set_Priority(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CinemachineVirtualCameraBase_set_Priority_m6C180B742F19E669D648B6D1BE4D9D9C5824962B_inline (CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * __this, int32_t ___value0, const RuntimeMethod* method);
// MoreMountains.Feedbacks.TimescaleModes MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::get_TimescaleMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MMCinemachineZoom_get_TimescaleMode_mAC647CC07C53D080C0D6092F41EB2E670EB344FC_inline (MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E * __this, const RuntimeMethod* method);
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::set_TimescaleMode(MoreMountains.Feedbacks.TimescaleModes)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MMCinemachineZoom_set_TimescaleMode_m2819D5DADDE8E654AD62C1FD06122C45DE9FC8E1_inline (MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMF_Feedback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_Feedback__ctor_m901961F21A4EC9B633D04730A4AC6455E87F66EB (MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06 * __this, const RuntimeMethod* method);
// Cinemachine.CinemachineImpulseManager Cinemachine.CinemachineImpulseManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E * CinemachineImpulseManager_get_Instance_m2610081DC5D98082D240CE3FD7C6C6CEAE571DE4 (const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineImpulseManager::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineImpulseManager_Clear_mA812D41CE685AADD048C6257BBC2EF82F0022F13 (CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E * __this, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineImpulseSource::GenerateImpulse(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineImpulseSource_GenerateImpulse_mA0BA98729D31DAA4489F8A795460312C6AC987A0 (CinemachineImpulseSource_t7EFCA284734A8CB50F0B45CDDF6BB924DA73998D * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity0, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMF_Feedback::CustomStopFeedback(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_Feedback_CustomStopFeedback_m748D8AA210D0D37728D866535F4146A5D33436C6 (MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___feedbacksIntensity1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityEvent::Trigger(System.Int32,System.Boolean,System.Int32,System.Boolean,Cinemachine.CinemachineBlendDefinition,System.Boolean,MoreMountains.Feedbacks.TimescaleModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityEvent_Trigger_m49FA8806561196FEB583CF4EA38C85949F21FC42 (int32_t ___channel0, bool ___forceMaxPriority1, int32_t ___newPriority2, bool ___forceTransition3, CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  ___blendDefinition4, bool ___resetValuesAfterTransition5, int32_t ___timescaleMode6, const RuntimeMethod* method);
// System.Single Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::get_Duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnvelopeDefinition_get_Duration_m494621ABECC584E355834D287BEA915BD68A774F (EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 * __this, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineImpulseManager::set_IgnoreTimeScale(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CinemachineImpulseManager_set_IgnoreTimeScale_m734F8037EA5DDBAFEFE2AE02FE1AC87AD5FD333F_inline (CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineImpulseDefinition::CreateEvent(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineImpulseDefinition_CreateEvent_m4321107CAE385B5FB027FBFF5DD5B7D5B034C783 (CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity1, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMFeedback::CustomStopFeedback(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedback_CustomStopFeedback_m637BE3F6114F85830A2E7073DEEF05B95CA79A83 (MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___feedbacksIntensity1, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMFeedback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedback__ctor_m3A0FE0C8FEDD2D759EC31C4432C65DBD4B1A06A0 (MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
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
// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::GetTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMCinemachineCameraShaker_GetTime_mEAAAA2A31F2AAF6D62658289B27E3DC12536EDDC (MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163 * __this, const RuntimeMethod* method)
{
	{
		// public virtual float GetTime() { return (_timescaleMode == TimescaleModes.Scaled) ? Time.time : Time.unscaledTime; }
		int32_t L_0 = __this->get__timescaleMode_14();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		float L_1;
		L_1 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258(/*hidden argument*/NULL);
		return L_1;
	}

IL_000e:
	{
		float L_2;
		L_2 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::GetDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMCinemachineCameraShaker_GetDeltaTime_m0CD977A415A687CE0142F770BD6F094B80017E4B (MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163 * __this, const RuntimeMethod* method)
{
	{
		// public virtual float GetDeltaTime() { return (_timescaleMode == TimescaleModes.Scaled) ? Time.deltaTime : Time.unscaledDeltaTime; }
		int32_t L_0 = __this->get__timescaleMode_14();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		float L_1;
		L_1 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84(/*hidden argument*/NULL);
		return L_1;
	}

IL_000e:
	{
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineCameraShaker_Awake_m82ED12CCE5EFF68F77ABABC33E94D03A9D44DBBE (MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineVirtualCamera_GetCinemachineComponent_TisCinemachineBasicMultiChannelPerlin_t09A5B81525F473505BB264366B43E55C8FA143CF_m51441B43447FF6005ECD69F88F5F8B1F2889449B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C_m9DCB48A9A82ED7FB1AEB541DE9E97D1A16CE111A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _virtualCamera = this.gameObject.GetComponent<CinemachineVirtualCamera>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * L_1;
		L_1 = GameObject_GetComponent_TisCinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C_m9DCB48A9A82ED7FB1AEB541DE9E97D1A16CE111A(L_0, /*hidden argument*/GameObject_GetComponent_TisCinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C_m9DCB48A9A82ED7FB1AEB541DE9E97D1A16CE111A_RuntimeMethod_var);
		__this->set__virtualCamera_18(L_1);
		// _perlin = _virtualCamera.GetCinemachineComponent<Cinemachine.CinemachineBasicMultiChannelPerlin>();
		CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * L_2 = __this->get__virtualCamera_18();
		CinemachineBasicMultiChannelPerlin_t09A5B81525F473505BB264366B43E55C8FA143CF * L_3;
		L_3 = CinemachineVirtualCamera_GetCinemachineComponent_TisCinemachineBasicMultiChannelPerlin_t09A5B81525F473505BB264366B43E55C8FA143CF_m51441B43447FF6005ECD69F88F5F8B1F2889449B(L_2, /*hidden argument*/CinemachineVirtualCamera_GetCinemachineComponent_TisCinemachineBasicMultiChannelPerlin_t09A5B81525F473505BB264366B43E55C8FA143CF_m51441B43447FF6005ECD69F88F5F8B1F2889449B_RuntimeMethod_var);
		__this->set__perlin_17(L_3);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineCameraShaker_Start_m9F76CE5C7A2D4FF386B5785C9DC6747AFAF0507C (MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_perlin != null)
		CinemachineBasicMultiChannelPerlin_t09A5B81525F473505BB264366B43E55C8FA143CF * L_0 = __this->get__perlin_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// IdleAmplitude = _perlin.m_AmplitudeGain;
		CinemachineBasicMultiChannelPerlin_t09A5B81525F473505BB264366B43E55C8FA143CF * L_2 = __this->get__perlin_17();
		float L_3 = L_2->get_m_AmplitudeGain_14();
		__this->set_IdleAmplitude_7(L_3);
		// IdleFrequency = _perlin.m_FrequencyGain;
		CinemachineBasicMultiChannelPerlin_t09A5B81525F473505BB264366B43E55C8FA143CF * L_4 = __this->get__perlin_17();
		float L_5 = L_4->get_m_FrequencyGain_15();
		__this->set_IdleFrequency_8(L_5);
	}

IL_0030:
	{
		// _targetAmplitude = IdleAmplitude;
		float L_6 = __this->get_IdleAmplitude_7();
		__this->set__targetAmplitude_19(L_6);
		// _targetFrequency = IdleFrequency;
		float L_7 = __this->get_IdleFrequency_8();
		__this->set__targetFrequency_20(L_7);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineCameraShaker_Update_m7817FA28766B35DE8FCD9633F974183C7E8FD808 (MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_perlin != null)
		CinemachineBasicMultiChannelPerlin_t09A5B81525F473505BB264366B43E55C8FA143CF * L_0 = __this->get__perlin_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		// _perlin.m_AmplitudeGain = _targetAmplitude;
		CinemachineBasicMultiChannelPerlin_t09A5B81525F473505BB264366B43E55C8FA143CF * L_2 = __this->get__perlin_17();
		float L_3 = __this->get__targetAmplitude_19();
		L_2->set_m_AmplitudeGain_14(L_3);
		// _perlin.m_FrequencyGain = Mathf.Lerp(_perlin.m_FrequencyGain, _targetFrequency, GetDeltaTime() * LerpSpeed);
		CinemachineBasicMultiChannelPerlin_t09A5B81525F473505BB264366B43E55C8FA143CF * L_4 = __this->get__perlin_17();
		CinemachineBasicMultiChannelPerlin_t09A5B81525F473505BB264366B43E55C8FA143CF * L_5 = __this->get__perlin_17();
		float L_6 = L_5->get_m_FrequencyGain_15();
		float L_7 = __this->get__targetFrequency_20();
		float L_8;
		L_8 = VirtFuncInvoker0< float >::Invoke(5 /* System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::GetDeltaTime() */, __this);
		float L_9 = __this->get_LerpSpeed_9();
		float L_10;
		L_10 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_6, L_7, ((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), /*hidden argument*/NULL);
		L_4->set_m_FrequencyGain_15(L_10);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::ShakeCamera(System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineCameraShaker_ShakeCamera_m983984ED5B58022B89FBF8588E609580A5287FA2 (MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163 * __this, float ___duration0, bool ___infinite1, bool ___useUnscaledTime2, const RuntimeMethod* method)
{
	{
		// StartCoroutine(ShakeCameraCo(duration, DefaultShakeAmplitude, DefaultShakeFrequency, infinite, useUnscaledTime));
		float L_0 = ___duration0;
		float L_1 = __this->get_DefaultShakeAmplitude_5();
		float L_2 = __this->get_DefaultShakeFrequency_6();
		bool L_3 = ___infinite1;
		bool L_4 = ___useUnscaledTime2;
		RuntimeObject* L_5;
		L_5 = VirtFuncInvoker5< RuntimeObject*, float, float, float, bool, bool >::Invoke(11 /* System.Collections.IEnumerator MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::ShakeCameraCo(System.Single,System.Single,System.Single,System.Boolean,System.Boolean) */, __this, L_0, L_1, L_2, L_3, L_4);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_6;
		L_6 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::ShakeCamera(System.Single,System.Single,System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineCameraShaker_ShakeCamera_m586A7BF45C010A9FFA3EAB99F4F76A0703CF3FC8 (MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163 * __this, float ___duration0, float ___amplitude1, float ___frequency2, bool ___infinite3, bool ___useUnscaledTime4, const RuntimeMethod* method)
{
	{
		// if (_shakeCoroutine != null)
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_0 = __this->get__shakeCoroutine_21();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// StopCoroutine(_shakeCoroutine);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1 = __this->get__shakeCoroutine_21();
		MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413(__this, L_1, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// _shakeCoroutine = StartCoroutine(ShakeCameraCo(duration, amplitude, frequency, infinite, useUnscaledTime));
		float L_2 = ___duration0;
		float L_3 = ___amplitude1;
		float L_4 = ___frequency2;
		bool L_5 = ___infinite3;
		bool L_6 = ___useUnscaledTime4;
		RuntimeObject* L_7;
		L_7 = VirtFuncInvoker5< RuntimeObject*, float, float, float, bool, bool >::Invoke(11 /* System.Collections.IEnumerator MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::ShakeCameraCo(System.Single,System.Single,System.Single,System.Boolean,System.Boolean) */, __this, L_2, L_3, L_4, L_5, L_6);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_8;
		L_8 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_7, /*hidden argument*/NULL);
		__this->set__shakeCoroutine_21(L_8);
		// }
		return;
	}
}
// System.Collections.IEnumerator MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::ShakeCameraCo(System.Single,System.Single,System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MMCinemachineCameraShaker_ShakeCameraCo_mA4CCA0AF868B42F7816422A26A331D5C097E6E15 (MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163 * __this, float ___duration0, float ___amplitude1, float ___frequency2, bool ___infinite3, bool ___useUnscaledTime4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShakeCameraCoU3Ed__25_tE09D4113AE143A7E3D05BC37395FC0E64132AD08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShakeCameraCoU3Ed__25_tE09D4113AE143A7E3D05BC37395FC0E64132AD08 * L_0 = (U3CShakeCameraCoU3Ed__25_tE09D4113AE143A7E3D05BC37395FC0E64132AD08 *)il2cpp_codegen_object_new(U3CShakeCameraCoU3Ed__25_tE09D4113AE143A7E3D05BC37395FC0E64132AD08_il2cpp_TypeInfo_var);
		U3CShakeCameraCoU3Ed__25__ctor_m6C7CF4DA0483CE7C5A9264CBBAB13043CB28D6D7(L_0, 0, /*hidden argument*/NULL);
		U3CShakeCameraCoU3Ed__25_tE09D4113AE143A7E3D05BC37395FC0E64132AD08 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		U3CShakeCameraCoU3Ed__25_tE09D4113AE143A7E3D05BC37395FC0E64132AD08 * L_2 = L_1;
		float L_3 = ___duration0;
		L_2->set_duration_7(L_3);
		U3CShakeCameraCoU3Ed__25_tE09D4113AE143A7E3D05BC37395FC0E64132AD08 * L_4 = L_2;
		float L_5 = ___amplitude1;
		L_4->set_amplitude_3(L_5);
		U3CShakeCameraCoU3Ed__25_tE09D4113AE143A7E3D05BC37395FC0E64132AD08 * L_6 = L_4;
		float L_7 = ___frequency2;
		L_6->set_frequency_4(L_7);
		U3CShakeCameraCoU3Ed__25_tE09D4113AE143A7E3D05BC37395FC0E64132AD08 * L_8 = L_6;
		bool L_9 = ___infinite3;
		L_8->set_infinite_6(L_9);
		U3CShakeCameraCoU3Ed__25_tE09D4113AE143A7E3D05BC37395FC0E64132AD08 * L_10 = L_8;
		bool L_11 = ___useUnscaledTime4;
		L_10->set_useUnscaledTime_5(L_11);
		return L_10;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::CameraReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineCameraShaker_CameraReset_m82F64E56C00E18A5117B57DFC7FA904F92E343D6 (MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163 * __this, const RuntimeMethod* method)
{
	{
		// _targetAmplitude = IdleAmplitude;
		float L_0 = __this->get_IdleAmplitude_7();
		__this->set__targetAmplitude_19(L_0);
		// _targetFrequency = IdleFrequency;
		float L_1 = __this->get_IdleFrequency_8();
		__this->set__targetFrequency_20(L_1);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::OnCameraShakeEvent(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Boolean,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineCameraShaker_OnCameraShakeEvent_m41330B588DAFD93523D23FEAA9E592D89CCD5134 (MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163 * __this, float ___duration0, float ___amplitude1, float ___frequency2, float ___amplitudeX3, float ___amplitudeY4, float ___amplitudeZ5, bool ___infinite6, int32_t ___channel7, bool ___useUnscaledTime8, const RuntimeMethod* method)
{
	{
		// if ((channel != Channel) && (channel != -1) && (Channel != -1))
		int32_t L_0 = ___channel7;
		int32_t L_1 = __this->get_Channel_4();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = ___channel7;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_3 = __this->get_Channel_4();
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0019;
		}
	}
	{
		// return;
		return;
	}

IL_0019:
	{
		// this.ShakeCamera(duration, amplitude, frequency, infinite, useUnscaledTime);
		float L_4 = ___duration0;
		float L_5 = ___amplitude1;
		float L_6 = ___frequency2;
		bool L_7 = ___infinite6;
		bool L_8 = ___useUnscaledTime8;
		VirtActionInvoker5< float, float, float, bool, bool >::Invoke(10 /* System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::ShakeCamera(System.Single,System.Single,System.Single,System.Boolean,System.Boolean) */, __this, L_4, L_5, L_6, L_7, L_8);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::OnCameraShakeStopEvent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineCameraShaker_OnCameraShakeStopEvent_mA07F9FB65364B94002B64E9572C886017351ECC6 (MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163 * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	{
		// if ((channel != Channel) && (channel != -1) && (Channel != -1))
		int32_t L_0 = ___channel0;
		int32_t L_1 = __this->get_Channel_4();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2 = ___channel0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = __this->get_Channel_4();
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0017;
		}
	}
	{
		// return;
		return;
	}

IL_0017:
	{
		// if (_shakeCoroutine != null)
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_4 = __this->get__shakeCoroutine_21();
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// StopCoroutine(_shakeCoroutine);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5 = __this->get__shakeCoroutine_21();
		MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413(__this, L_5, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// CameraReset();
		VirtActionInvoker0::Invoke(12 /* System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::CameraReset() */, __this);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineCameraShaker_OnEnable_m2ECA19FFE5150D8E5604868BF85AF981A2A86507 (MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t40EA96416BE4B536B0071884D5B9BC356FB0B7C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t4C3689743AE14898C38CE0B0C0780290B304655A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MMCameraShakeEvent.Register(OnCameraShakeEvent);
		Delegate_t4C3689743AE14898C38CE0B0C0780290B304655A * L_0 = (Delegate_t4C3689743AE14898C38CE0B0C0780290B304655A *)il2cpp_codegen_object_new(Delegate_t4C3689743AE14898C38CE0B0C0780290B304655A_il2cpp_TypeInfo_var);
		Delegate__ctor_m92750E4DE57041804753CA5809C649DBB44844BB(L_0, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 13)), /*hidden argument*/NULL);
		MMCameraShakeEvent_Register_m724CD0839144D1B710757E1C6AB22E941216EDCB(L_0, /*hidden argument*/NULL);
		// MMCameraShakeStopEvent.Register(OnCameraShakeStopEvent);
		Delegate_t40EA96416BE4B536B0071884D5B9BC356FB0B7C5 * L_1 = (Delegate_t40EA96416BE4B536B0071884D5B9BC356FB0B7C5 *)il2cpp_codegen_object_new(Delegate_t40EA96416BE4B536B0071884D5B9BC356FB0B7C5_il2cpp_TypeInfo_var);
		Delegate__ctor_m828FB777E333546230DB23E0DCAA1C081D4D1D08(L_1, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 14)), /*hidden argument*/NULL);
		MMCameraShakeStopEvent_Register_m7116A4D9BC6DDEF692A978037A91C197C3D8D20D(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineCameraShaker_OnDisable_m7DA7F7796E24C5B1B5589DD2626923F318CB3F8A (MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t40EA96416BE4B536B0071884D5B9BC356FB0B7C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t4C3689743AE14898C38CE0B0C0780290B304655A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MMCameraShakeEvent.Unregister(OnCameraShakeEvent);
		Delegate_t4C3689743AE14898C38CE0B0C0780290B304655A * L_0 = (Delegate_t4C3689743AE14898C38CE0B0C0780290B304655A *)il2cpp_codegen_object_new(Delegate_t4C3689743AE14898C38CE0B0C0780290B304655A_il2cpp_TypeInfo_var);
		Delegate__ctor_m92750E4DE57041804753CA5809C649DBB44844BB(L_0, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 13)), /*hidden argument*/NULL);
		MMCameraShakeEvent_Unregister_mC1573AD7E2DA5F0AB8299CEBDD7A2F6C4D0F5E06(L_0, /*hidden argument*/NULL);
		// MMCameraShakeStopEvent.Unregister(OnCameraShakeStopEvent);
		Delegate_t40EA96416BE4B536B0071884D5B9BC356FB0B7C5 * L_1 = (Delegate_t40EA96416BE4B536B0071884D5B9BC356FB0B7C5 *)il2cpp_codegen_object_new(Delegate_t40EA96416BE4B536B0071884D5B9BC356FB0B7C5_il2cpp_TypeInfo_var);
		Delegate__ctor_m828FB777E333546230DB23E0DCAA1C081D4D1D08(L_1, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 14)), /*hidden argument*/NULL);
		MMCameraShakeStopEvent_Unregister_m4BDB20A81C8C1FE34062253C9D587C67901E38E6(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::TestShake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineCameraShaker_TestShake_mE4E72D47FAEFBAD8239128874664B7880E8E524F (MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163 * __this, const RuntimeMethod* method)
{
	{
		// MMCameraShakeEvent.Trigger(TestDuration, TestAmplitude, TestFrequency, 0f, 0f, 0f, false, 0);
		float L_0 = __this->get_TestDuration_10();
		float L_1 = __this->get_TestAmplitude_11();
		float L_2 = __this->get_TestFrequency_12();
		MMCameraShakeEvent_Trigger_mCF5AAE461A7F52ADF0F8464349413173E46A8EE2(L_0, L_1, L_2, (0.0f), (0.0f), (0.0f), (bool)0, 0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineCameraShaker__ctor_m73EF433AE1F70605971DFBEFA30BE053700C7D75 (MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163 * __this, const RuntimeMethod* method)
{
	{
		// public float DefaultShakeAmplitude = .5f;
		__this->set_DefaultShakeAmplitude_5((0.5f));
		// public float DefaultShakeFrequency = 10f;
		__this->set_DefaultShakeFrequency_6((10.0f));
		// public float IdleFrequency = 1f;
		__this->set_IdleFrequency_8((1.0f));
		// public float LerpSpeed = 5f;
		__this->set_LerpSpeed_9((5.0f));
		// public float TestDuration = 0.3f;
		__this->set_TestDuration_10((0.300000012f));
		// public float TestAmplitude = 2f;
		__this->set_TestAmplitude_11((2.0f));
		// public float TestFrequency = 20f;
		__this->set_TestFrequency_12((20.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineClippingPlanesShaker::Initialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineClippingPlanesShaker_Initialization_m36175E11C04C35A39190B3B9531A5C62F1E2FB35 (MMCinemachineClippingPlanesShaker_t3D80DEB9393559C031C6BF3D1C7AA06ED76E8962 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C_m9DCB48A9A82ED7FB1AEB541DE9E97D1A16CE111A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Initialization();
		MMShaker_Initialization_mA0C4D4855C7877F7FD4BE6DB7C55D309A53753B3(__this, /*hidden argument*/NULL);
		// _targetCamera = this.gameObject.GetComponent<CinemachineVirtualCamera>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * L_1;
		L_1 = GameObject_GetComponent_TisCinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C_m9DCB48A9A82ED7FB1AEB541DE9E97D1A16CE111A(L_0, /*hidden argument*/GameObject_GetComponent_TisCinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C_m9DCB48A9A82ED7FB1AEB541DE9E97D1A16CE111A_RuntimeMethod_var);
		__this->set__targetCamera_26(L_1);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineClippingPlanesShaker::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineClippingPlanesShaker_Reset_mC58A74AD975455D6CBBADBDBC7868AF573F3CA8E (MMCinemachineClippingPlanesShaker_t3D80DEB9393559C031C6BF3D1C7AA06ED76E8962 * __this, const RuntimeMethod* method)
{
	{
		// ShakeDuration = 0.5f;
		((MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 *)__this)->set_ShakeDuration_5((0.5f));
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineClippingPlanesShaker::Shake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineClippingPlanesShaker_Shake_m6253E4A550C17E4082E890EB7F2553D3643B1EF9 (MMCinemachineClippingPlanesShaker_t3D80DEB9393559C031C6BF3D1C7AA06ED76E8962 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float newNear = ShakeFloat(ShakeNear, RemapNearZero, RemapNearOne, RelativeClippingPlanes, _initialNear);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = __this->get_ShakeNear_20();
		float L_1 = __this->get_RemapNearZero_21();
		float L_2 = __this->get_RemapNearOne_22();
		bool L_3 = __this->get_RelativeClippingPlanes_19();
		float L_4 = __this->get__initialNear_27();
		float L_5;
		L_5 = VirtFuncInvoker5< float, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *, float, float, bool, float >::Invoke(13 /* System.Single MoreMountains.Feedbacks.MMShaker::ShakeFloat(UnityEngine.AnimationCurve,System.Single,System.Single,System.Boolean,System.Single) */, __this, L_0, L_1, L_2, L_3, L_4);
		V_0 = L_5;
		// _targetCamera.m_Lens.NearClipPlane = newNear;
		CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * L_6 = __this->get__targetCamera_26();
		LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * L_7 = L_6->get_address_of_m_Lens_21();
		float L_8 = V_0;
		L_7->set_NearClipPlane_3(L_8);
		// float newFar = ShakeFloat(ShakeFar, RemapFarZero, RemapFarOne, RelativeClippingPlanes, _initialFar);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_9 = __this->get_ShakeFar_23();
		float L_10 = __this->get_RemapFarZero_24();
		float L_11 = __this->get_RemapFarOne_25();
		bool L_12 = __this->get_RelativeClippingPlanes_19();
		float L_13 = __this->get__initialFar_28();
		float L_14;
		L_14 = VirtFuncInvoker5< float, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *, float, float, bool, float >::Invoke(13 /* System.Single MoreMountains.Feedbacks.MMShaker::ShakeFloat(UnityEngine.AnimationCurve,System.Single,System.Single,System.Boolean,System.Single) */, __this, L_9, L_10, L_11, L_12, L_13);
		V_1 = L_14;
		// _targetCamera.m_Lens.FarClipPlane = newFar;
		CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * L_15 = __this->get__targetCamera_26();
		LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * L_16 = L_15->get_address_of_m_Lens_21();
		float L_17 = V_1;
		L_16->set_FarClipPlane_4(L_17);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineClippingPlanesShaker::GrabInitialValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineClippingPlanesShaker_GrabInitialValues_m907647F5C6F1DD565F7CEAE3420E9CDCD60258BD (MMCinemachineClippingPlanesShaker_t3D80DEB9393559C031C6BF3D1C7AA06ED76E8962 * __this, const RuntimeMethod* method)
{
	{
		// _initialNear = _targetCamera.m_Lens.NearClipPlane;
		CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * L_0 = __this->get__targetCamera_26();
		LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * L_1 = L_0->get_address_of_m_Lens_21();
		float L_2 = L_1->get_NearClipPlane_3();
		__this->set__initialNear_27(L_2);
		// _initialFar = _targetCamera.m_Lens.FarClipPlane;
		CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * L_3 = __this->get__targetCamera_26();
		LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * L_4 = L_3->get_address_of_m_Lens_21();
		float L_5 = L_4->get_FarClipPlane_4();
		__this->set__initialFar_28(L_5);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineClippingPlanesShaker::OnMMCameraClippingPlanesShakeEvent(UnityEngine.AnimationCurve,System.Single,System.Single,System.Single,UnityEngine.AnimationCurve,System.Single,System.Single,System.Boolean,System.Single,System.Int32,System.Boolean,System.Boolean,System.Boolean,MoreMountains.Feedbacks.TimescaleModes,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineClippingPlanesShaker_OnMMCameraClippingPlanesShakeEvent_m56400DC4F3A1C46DF2FB7601F9CBC09D45BC0F74 (MMCinemachineClippingPlanesShaker_t3D80DEB9393559C031C6BF3D1C7AA06ED76E8962 * __this, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___animNearCurve0, float ___duration1, float ___remapNearMin2, float ___remapNearMax3, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___animFarCurve4, float ___remapFarMin5, float ___remapFarMax6, bool ___relativeValues7, float ___feedbacksIntensity8, int32_t ___channel9, bool ___resetShakerValuesAfterShake10, bool ___resetTargetValuesAfterShake11, bool ___forwardDirection12, int32_t ___timescaleMode13, bool ___stop14, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!CheckEventAllowed(channel))
		int32_t L_0 = ___channel9;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = V_0;
		bool L_2;
		L_2 = VirtFuncInvoker4< bool, int32_t, bool, float, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(24 /* System.Boolean MoreMountains.Feedbacks.MMShaker::CheckEventAllowed(System.Int32,System.Boolean,System.Single,UnityEngine.Vector3) */, __this, L_0, (bool)0, (0.0f), L_1);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// return;
		return;
	}

IL_001a:
	{
		// if (stop)
		bool L_3 = ___stop14;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// Stop();
		VirtActionInvoker0::Invoke(21 /* System.Void MoreMountains.Feedbacks.MMShaker::Stop() */, __this);
		// return;
		return;
	}

IL_0025:
	{
		// if (!Interruptible && Shaking)
		bool L_4 = ((MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 *)__this)->get_Interruptible_7();
		if (L_4)
		{
			goto IL_0036;
		}
	}
	{
		bool L_5 = ((MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 *)__this)->get_Shaking_10();
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		// return;
		return;
	}

IL_0036:
	{
		// _resetShakerValuesAfterShake = resetShakerValuesAfterShake;
		bool L_6 = ___resetShakerValuesAfterShake10;
		((MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 *)__this)->set__resetShakerValuesAfterShake_16(L_6);
		// _resetTargetValuesAfterShake = resetTargetValuesAfterShake;
		bool L_7 = ___resetTargetValuesAfterShake11;
		((MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 *)__this)->set__resetTargetValuesAfterShake_17(L_7);
		// if (resetShakerValuesAfterShake)
		bool L_8 = ___resetShakerValuesAfterShake10;
		if (!L_8)
		{
			goto IL_00aa;
		}
	}
	{
		// _originalShakeDuration = ShakeDuration;
		float L_9 = ((MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 *)__this)->get_ShakeDuration_5();
		__this->set__originalShakeDuration_29(L_9);
		// _originalShakeNear = ShakeNear;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_10 = __this->get_ShakeNear_20();
		__this->set__originalShakeNear_31(L_10);
		// _originalShakeFar = ShakeFar;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_11 = __this->get_ShakeFar_23();
		__this->set__originalShakeFar_34(L_11);
		// _originalRemapNearZero = RemapNearZero;
		float L_12 = __this->get_RemapNearZero_21();
		__this->set__originalRemapNearZero_32(L_12);
		// _originalRemapNearOne = RemapNearOne;
		float L_13 = __this->get_RemapNearOne_22();
		__this->set__originalRemapNearOne_33(L_13);
		// _originalRemapFarZero = RemapFarZero;
		float L_14 = __this->get_RemapFarZero_24();
		__this->set__originalRemapFarZero_35(L_14);
		// _originalRemapFarOne = RemapFarOne;
		float L_15 = __this->get_RemapFarOne_25();
		__this->set__originalRemapFarOne_36(L_15);
		// _originalRelativeClippingPlanes = RelativeClippingPlanes;
		bool L_16 = __this->get_RelativeClippingPlanes_19();
		__this->set__originalRelativeClippingPlanes_30(L_16);
	}

IL_00aa:
	{
		// TimescaleMode = timescaleMode;
		int32_t L_17 = ___timescaleMode13;
		((MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 *)__this)->set_TimescaleMode_12(L_17);
		// ShakeDuration = duration;
		float L_18 = ___duration1;
		((MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 *)__this)->set_ShakeDuration_5(L_18);
		// ShakeNear = animNearCurve;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_19 = ___animNearCurve0;
		__this->set_ShakeNear_20(L_19);
		// RemapNearZero = remapNearMin * feedbacksIntensity;
		float L_20 = ___remapNearMin2;
		float L_21 = ___feedbacksIntensity8;
		__this->set_RemapNearZero_21(((float)il2cpp_codegen_multiply((float)L_20, (float)L_21)));
		// RemapNearOne = remapNearMax * feedbacksIntensity;
		float L_22 = ___remapNearMax3;
		float L_23 = ___feedbacksIntensity8;
		__this->set_RemapNearOne_22(((float)il2cpp_codegen_multiply((float)L_22, (float)L_23)));
		// ShakeFar = animFarCurve;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_24 = ___animFarCurve4;
		__this->set_ShakeFar_23(L_24);
		// RemapFarZero = remapFarMin * feedbacksIntensity;
		float L_25 = ___remapFarMin5;
		float L_26 = ___feedbacksIntensity8;
		__this->set_RemapFarZero_24(((float)il2cpp_codegen_multiply((float)L_25, (float)L_26)));
		// RemapFarOne = remapFarMax * feedbacksIntensity;
		float L_27 = ___remapFarMax6;
		float L_28 = ___feedbacksIntensity8;
		__this->set_RemapFarOne_25(((float)il2cpp_codegen_multiply((float)L_27, (float)L_28)));
		// RelativeClippingPlanes = relativeValues;
		bool L_29 = ___relativeValues7;
		__this->set_RelativeClippingPlanes_19(L_29);
		// ForwardDirection = forwardDirection;
		bool L_30 = ___forwardDirection12;
		((MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 *)__this)->set_ForwardDirection_11(L_30);
		// Play();
		VirtActionInvoker0::Invoke(20 /* System.Void MoreMountains.Feedbacks.MMShaker::Play() */, __this);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineClippingPlanesShaker::ResetTargetValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineClippingPlanesShaker_ResetTargetValues_m0370F1FAFBEC9377F8C6838F72C9ABD873A55EA2 (MMCinemachineClippingPlanesShaker_t3D80DEB9393559C031C6BF3D1C7AA06ED76E8962 * __this, const RuntimeMethod* method)
{
	{
		// base.ResetTargetValues();
		MMShaker_ResetTargetValues_m4A621683BB61D3FD391AAC8F7983528F725B24C2(__this, /*hidden argument*/NULL);
		// _targetCamera.m_Lens.NearClipPlane = _initialNear;
		CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * L_0 = __this->get__targetCamera_26();
		LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * L_1 = L_0->get_address_of_m_Lens_21();
		float L_2 = __this->get__initialNear_27();
		L_1->set_NearClipPlane_3(L_2);
		// _targetCamera.m_Lens.FarClipPlane = _initialFar;
		CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * L_3 = __this->get__targetCamera_26();
		LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * L_4 = L_3->get_address_of_m_Lens_21();
		float L_5 = __this->get__initialFar_28();
		L_4->set_FarClipPlane_4(L_5);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineClippingPlanesShaker::ResetShakerValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineClippingPlanesShaker_ResetShakerValues_m3C2CC2A3A16E634DBC7196E5B0B650AF6E342EE1 (MMCinemachineClippingPlanesShaker_t3D80DEB9393559C031C6BF3D1C7AA06ED76E8962 * __this, const RuntimeMethod* method)
{
	{
		// base.ResetShakerValues();
		MMShaker_ResetShakerValues_m93AA8579FE316AD1BBCB482D7DC47593B5F70092(__this, /*hidden argument*/NULL);
		// ShakeDuration = _originalShakeDuration;
		float L_0 = __this->get__originalShakeDuration_29();
		((MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 *)__this)->set_ShakeDuration_5(L_0);
		// ShakeNear = _originalShakeNear;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_1 = __this->get__originalShakeNear_31();
		__this->set_ShakeNear_20(L_1);
		// ShakeFar = _originalShakeFar;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_2 = __this->get__originalShakeFar_34();
		__this->set_ShakeFar_23(L_2);
		// RemapNearZero = _originalRemapNearZero;
		float L_3 = __this->get__originalRemapNearZero_32();
		__this->set_RemapNearZero_21(L_3);
		// RemapNearOne = _originalRemapNearOne;
		float L_4 = __this->get__originalRemapNearOne_33();
		__this->set_RemapNearOne_22(L_4);
		// RemapFarZero = _originalRemapFarZero;
		float L_5 = __this->get__originalRemapFarZero_35();
		__this->set_RemapFarZero_24(L_5);
		// RemapFarOne = _originalRemapFarOne;
		float L_6 = __this->get__originalRemapFarOne_36();
		__this->set_RemapFarOne_25(L_6);
		// RelativeClippingPlanes = _originalRelativeClippingPlanes;
		bool L_7 = __this->get__originalRelativeClippingPlanes_30();
		__this->set_RelativeClippingPlanes_19(L_7);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineClippingPlanesShaker::StartListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineClippingPlanesShaker_StartListening_m72113CCF9EADE8422AF8D424B9CD23CB9A704F5C (MMCinemachineClippingPlanesShaker_t3D80DEB9393559C031C6BF3D1C7AA06ED76E8962 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_tB4E81FE04A8668FC7DEC066E526E461E23A9C691_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.StartListening();
		MMShaker_StartListening_m2FD2D6DA250E2613C19EB5F54D1B4F78803D644F(__this, /*hidden argument*/NULL);
		// MMCameraClippingPlanesShakeEvent.Register(OnMMCameraClippingPlanesShakeEvent);
		Delegate_tB4E81FE04A8668FC7DEC066E526E461E23A9C691 * L_0 = (Delegate_tB4E81FE04A8668FC7DEC066E526E461E23A9C691 *)il2cpp_codegen_object_new(Delegate_tB4E81FE04A8668FC7DEC066E526E461E23A9C691_il2cpp_TypeInfo_var);
		Delegate__ctor_m733422BE0BC41D7D63A7B61424293CD781087971(L_0, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 26)), /*hidden argument*/NULL);
		MMCameraClippingPlanesShakeEvent_Register_m6A7DECCE069AAD9D2E02F0FC3F05C914EFCB262B(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineClippingPlanesShaker::StopListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineClippingPlanesShaker_StopListening_m5B2BD8E5A046861F45F3921C2F15030C22186238 (MMCinemachineClippingPlanesShaker_t3D80DEB9393559C031C6BF3D1C7AA06ED76E8962 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_tB4E81FE04A8668FC7DEC066E526E461E23A9C691_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.StopListening();
		MMShaker_StopListening_m1D60A4786564D907C4378080302EC52998682078(__this, /*hidden argument*/NULL);
		// MMCameraClippingPlanesShakeEvent.Unregister(OnMMCameraClippingPlanesShakeEvent);
		Delegate_tB4E81FE04A8668FC7DEC066E526E461E23A9C691 * L_0 = (Delegate_tB4E81FE04A8668FC7DEC066E526E461E23A9C691 *)il2cpp_codegen_object_new(Delegate_tB4E81FE04A8668FC7DEC066E526E461E23A9C691_il2cpp_TypeInfo_var);
		Delegate__ctor_m733422BE0BC41D7D63A7B61424293CD781087971(L_0, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 26)), /*hidden argument*/NULL);
		MMCameraClippingPlanesShakeEvent_Unregister_m0B491D7BFD7512928B33E4143AC6923BCE0CAB18(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineClippingPlanesShaker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineClippingPlanesShaker__ctor_m8CEAA6FB66A82381A2AD0CD6AB07329E80BB0865 (MMCinemachineClippingPlanesShaker_t3D80DEB9393559C031C6BF3D1C7AA06ED76E8962 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AnimationCurve ShakeNear = new AnimationCurve(new Keyframe(0, 0), new Keyframe(0.5f, 1), new Keyframe(1, 0));
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_0 = (KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)SZArrayNew(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var, (uint32_t)3);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_1 = L_0;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_2);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_3 = L_1;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_4), (0.5f), (1.0f), /*hidden argument*/NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_4);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_5 = L_3;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_6), (1.0f), (0.0f), /*hidden argument*/NULL);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_6);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_7 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0(L_7, L_5, /*hidden argument*/NULL);
		__this->set_ShakeNear_20(L_7);
		// public float RemapNearZero = 0.3f;
		__this->set_RemapNearZero_21((0.300000012f));
		// public float RemapNearOne = 100f;
		__this->set_RemapNearOne_22((100.0f));
		// public AnimationCurve ShakeFar = new AnimationCurve(new Keyframe(0, 0), new Keyframe(0.5f, 1), new Keyframe(1, 0));
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_8 = (KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)SZArrayNew(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var, (uint32_t)3);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_9 = L_8;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_10), (0.0f), (0.0f), /*hidden argument*/NULL);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_10);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_11 = L_9;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_12), (0.5f), (1.0f), /*hidden argument*/NULL);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_12);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_13 = L_11;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_14), (1.0f), (0.0f), /*hidden argument*/NULL);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_14);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_15 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0(L_15, L_13, /*hidden argument*/NULL);
		__this->set_ShakeFar_23(L_15);
		// public float RemapFarZero = 1000f;
		__this->set_RemapFarZero_24((1000.0f));
		// public float RemapFarOne = 1000f;
		__this->set_RemapFarOne_25((1000.0f));
		MMShaker__ctor_m19139ACF2B49DCE913269ED0C2D23D9B08E85C74(__this, /*hidden argument*/NULL);
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
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineFieldOfViewShaker::Initialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFieldOfViewShaker_Initialization_m239089A0D404A8E24D80E2C4280AC8F5533DA3A8 (MMCinemachineFieldOfViewShaker_t8C5DCA609EAC92EEC90058F0CFE7349460B67DDB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C_m9DCB48A9A82ED7FB1AEB541DE9E97D1A16CE111A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Initialization();
		MMShaker_Initialization_mA0C4D4855C7877F7FD4BE6DB7C55D309A53753B3(__this, /*hidden argument*/NULL);
		// _targetCamera = this.gameObject.GetComponent<CinemachineVirtualCamera>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * L_1;
		L_1 = GameObject_GetComponent_TisCinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C_m9DCB48A9A82ED7FB1AEB541DE9E97D1A16CE111A(L_0, /*hidden argument*/GameObject_GetComponent_TisCinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C_m9DCB48A9A82ED7FB1AEB541DE9E97D1A16CE111A_RuntimeMethod_var);
		__this->set__targetCamera_23(L_1);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineFieldOfViewShaker::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFieldOfViewShaker_Reset_mB7564AD8CEB25B826862AE6EB17C0379C241A4CD (MMCinemachineFieldOfViewShaker_t8C5DCA609EAC92EEC90058F0CFE7349460B67DDB * __this, const RuntimeMethod* method)
{
	{
		// ShakeDuration = 0.5f;
		((MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 *)__this)->set_ShakeDuration_5((0.5f));
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineFieldOfViewShaker::Shake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFieldOfViewShaker_Shake_m03BACCA5BFD02FD97D2C0228044D0701BF17E843 (MMCinemachineFieldOfViewShaker_t8C5DCA609EAC92EEC90058F0CFE7349460B67DDB * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float newFieldOfView = ShakeFloat(ShakeFieldOfView, RemapFieldOfViewZero, RemapFieldOfViewOne, RelativeFieldOfView, _initialFieldOfView);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = __this->get_ShakeFieldOfView_20();
		float L_1 = __this->get_RemapFieldOfViewZero_21();
		float L_2 = __this->get_RemapFieldOfViewOne_22();
		bool L_3 = __this->get_RelativeFieldOfView_19();
		float L_4 = __this->get__initialFieldOfView_24();
		float L_5;
		L_5 = VirtFuncInvoker5< float, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *, float, float, bool, float >::Invoke(13 /* System.Single MoreMountains.Feedbacks.MMShaker::ShakeFloat(UnityEngine.AnimationCurve,System.Single,System.Single,System.Boolean,System.Single) */, __this, L_0, L_1, L_2, L_3, L_4);
		V_0 = L_5;
		// _targetCamera.m_Lens.FieldOfView = newFieldOfView;
		CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * L_6 = __this->get__targetCamera_23();
		LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * L_7 = L_6->get_address_of_m_Lens_21();
		float L_8 = V_0;
		L_7->set_FieldOfView_1(L_8);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineFieldOfViewShaker::GrabInitialValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFieldOfViewShaker_GrabInitialValues_m3B6193F4173608ECE4D497C1B4B77D3C54D5D2E6 (MMCinemachineFieldOfViewShaker_t8C5DCA609EAC92EEC90058F0CFE7349460B67DDB * __this, const RuntimeMethod* method)
{
	{
		// _initialFieldOfView = _targetCamera.m_Lens.FieldOfView;
		CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * L_0 = __this->get__targetCamera_23();
		LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * L_1 = L_0->get_address_of_m_Lens_21();
		float L_2 = L_1->get_FieldOfView_1();
		__this->set__initialFieldOfView_24(L_2);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineFieldOfViewShaker::OnMMCameraFieldOfViewShakeEvent(UnityEngine.AnimationCurve,System.Single,System.Single,System.Single,System.Boolean,System.Single,System.Int32,System.Boolean,System.Boolean,System.Boolean,MoreMountains.Feedbacks.TimescaleModes,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFieldOfViewShaker_OnMMCameraFieldOfViewShakeEvent_m1FDE9D93118A8F3E578EFD802BA38849BC0D9B13 (MMCinemachineFieldOfViewShaker_t8C5DCA609EAC92EEC90058F0CFE7349460B67DDB * __this, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___distortionCurve0, float ___duration1, float ___remapMin2, float ___remapMax3, bool ___relativeDistortion4, float ___feedbacksIntensity5, int32_t ___channel6, bool ___resetShakerValuesAfterShake7, bool ___resetTargetValuesAfterShake8, bool ___forwardDirection9, int32_t ___timescaleMode10, bool ___stop11, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!CheckEventAllowed(channel))
		int32_t L_0 = ___channel6;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = V_0;
		bool L_2;
		L_2 = VirtFuncInvoker4< bool, int32_t, bool, float, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(24 /* System.Boolean MoreMountains.Feedbacks.MMShaker::CheckEventAllowed(System.Int32,System.Boolean,System.Single,UnityEngine.Vector3) */, __this, L_0, (bool)0, (0.0f), L_1);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// return;
		return;
	}

IL_001a:
	{
		// if (stop)
		bool L_3 = ___stop11;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// Stop();
		VirtActionInvoker0::Invoke(21 /* System.Void MoreMountains.Feedbacks.MMShaker::Stop() */, __this);
		// return;
		return;
	}

IL_0025:
	{
		// if (!Interruptible && Shaking)
		bool L_4 = ((MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 *)__this)->get_Interruptible_7();
		if (L_4)
		{
			goto IL_0036;
		}
	}
	{
		bool L_5 = ((MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 *)__this)->get_Shaking_10();
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		// return;
		return;
	}

IL_0036:
	{
		// _resetShakerValuesAfterShake = resetShakerValuesAfterShake;
		bool L_6 = ___resetShakerValuesAfterShake7;
		((MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 *)__this)->set__resetShakerValuesAfterShake_16(L_6);
		// _resetTargetValuesAfterShake = resetTargetValuesAfterShake;
		bool L_7 = ___resetTargetValuesAfterShake8;
		((MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 *)__this)->set__resetTargetValuesAfterShake_17(L_7);
		// if (resetShakerValuesAfterShake)
		bool L_8 = ___resetShakerValuesAfterShake7;
		if (!L_8)
		{
			goto IL_0086;
		}
	}
	{
		// _originalShakeDuration = ShakeDuration;
		float L_9 = ((MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 *)__this)->get_ShakeDuration_5();
		__this->set__originalShakeDuration_25(L_9);
		// _originalShakeFieldOfView = ShakeFieldOfView;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_10 = __this->get_ShakeFieldOfView_20();
		__this->set__originalShakeFieldOfView_27(L_10);
		// _originalRemapFieldOfViewZero = RemapFieldOfViewZero;
		float L_11 = __this->get_RemapFieldOfViewZero_21();
		__this->set__originalRemapFieldOfViewZero_28(L_11);
		// _originalRemapFieldOfViewOne = RemapFieldOfViewOne;
		float L_12 = __this->get_RemapFieldOfViewOne_22();
		__this->set__originalRemapFieldOfViewOne_29(L_12);
		// _originalRelativeFieldOfView = RelativeFieldOfView;
		bool L_13 = __this->get_RelativeFieldOfView_19();
		__this->set__originalRelativeFieldOfView_26(L_13);
	}

IL_0086:
	{
		// TimescaleMode = timescaleMode;
		int32_t L_14 = ___timescaleMode10;
		((MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 *)__this)->set_TimescaleMode_12(L_14);
		// ShakeDuration = duration;
		float L_15 = ___duration1;
		((MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 *)__this)->set_ShakeDuration_5(L_15);
		// ShakeFieldOfView = distortionCurve;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_16 = ___distortionCurve0;
		__this->set_ShakeFieldOfView_20(L_16);
		// RemapFieldOfViewZero = remapMin * feedbacksIntensity;
		float L_17 = ___remapMin2;
		float L_18 = ___feedbacksIntensity5;
		__this->set_RemapFieldOfViewZero_21(((float)il2cpp_codegen_multiply((float)L_17, (float)L_18)));
		// RemapFieldOfViewOne = remapMax * feedbacksIntensity;
		float L_19 = ___remapMax3;
		float L_20 = ___feedbacksIntensity5;
		__this->set_RemapFieldOfViewOne_22(((float)il2cpp_codegen_multiply((float)L_19, (float)L_20)));
		// RelativeFieldOfView = relativeDistortion;
		bool L_21 = ___relativeDistortion4;
		__this->set_RelativeFieldOfView_19(L_21);
		// ForwardDirection = forwardDirection;
		bool L_22 = ___forwardDirection9;
		((MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 *)__this)->set_ForwardDirection_11(L_22);
		// Play();
		VirtActionInvoker0::Invoke(20 /* System.Void MoreMountains.Feedbacks.MMShaker::Play() */, __this);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineFieldOfViewShaker::ResetTargetValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFieldOfViewShaker_ResetTargetValues_m8A4F4556A56FD39B2B0082D06A2BA05272931F32 (MMCinemachineFieldOfViewShaker_t8C5DCA609EAC92EEC90058F0CFE7349460B67DDB * __this, const RuntimeMethod* method)
{
	{
		// base.ResetTargetValues();
		MMShaker_ResetTargetValues_m4A621683BB61D3FD391AAC8F7983528F725B24C2(__this, /*hidden argument*/NULL);
		// _targetCamera.m_Lens.FieldOfView = _initialFieldOfView;
		CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * L_0 = __this->get__targetCamera_23();
		LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * L_1 = L_0->get_address_of_m_Lens_21();
		float L_2 = __this->get__initialFieldOfView_24();
		L_1->set_FieldOfView_1(L_2);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineFieldOfViewShaker::ResetShakerValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFieldOfViewShaker_ResetShakerValues_m7429DC9EFFDAE93F401BBC9205D3F2D81CA433FF (MMCinemachineFieldOfViewShaker_t8C5DCA609EAC92EEC90058F0CFE7349460B67DDB * __this, const RuntimeMethod* method)
{
	{
		// base.ResetShakerValues();
		MMShaker_ResetShakerValues_m93AA8579FE316AD1BBCB482D7DC47593B5F70092(__this, /*hidden argument*/NULL);
		// ShakeDuration = _originalShakeDuration;
		float L_0 = __this->get__originalShakeDuration_25();
		((MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 *)__this)->set_ShakeDuration_5(L_0);
		// ShakeFieldOfView = _originalShakeFieldOfView;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_1 = __this->get__originalShakeFieldOfView_27();
		__this->set_ShakeFieldOfView_20(L_1);
		// RemapFieldOfViewZero = _originalRemapFieldOfViewZero;
		float L_2 = __this->get__originalRemapFieldOfViewZero_28();
		__this->set_RemapFieldOfViewZero_21(L_2);
		// RemapFieldOfViewOne = _originalRemapFieldOfViewOne;
		float L_3 = __this->get__originalRemapFieldOfViewOne_29();
		__this->set_RemapFieldOfViewOne_22(L_3);
		// RelativeFieldOfView = _originalRelativeFieldOfView;
		bool L_4 = __this->get__originalRelativeFieldOfView_26();
		__this->set_RelativeFieldOfView_19(L_4);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineFieldOfViewShaker::StartListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFieldOfViewShaker_StartListening_mF893E5C8936BBC67C6D53988E0767A62FC1C1498 (MMCinemachineFieldOfViewShaker_t8C5DCA609EAC92EEC90058F0CFE7349460B67DDB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t48AE9BB71693BEE6E672E6488338BA364A814D73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.StartListening();
		MMShaker_StartListening_m2FD2D6DA250E2613C19EB5F54D1B4F78803D644F(__this, /*hidden argument*/NULL);
		// MMCameraFieldOfViewShakeEvent.Register(OnMMCameraFieldOfViewShakeEvent);
		Delegate_t48AE9BB71693BEE6E672E6488338BA364A814D73 * L_0 = (Delegate_t48AE9BB71693BEE6E672E6488338BA364A814D73 *)il2cpp_codegen_object_new(Delegate_t48AE9BB71693BEE6E672E6488338BA364A814D73_il2cpp_TypeInfo_var);
		Delegate__ctor_mFBE74CEFCF7377CCFBD4E381A7C7841542690FD7(L_0, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 26)), /*hidden argument*/NULL);
		MMCameraFieldOfViewShakeEvent_Register_m19C5C43176354FCE199695648EC34C8EB18F6637(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineFieldOfViewShaker::StopListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFieldOfViewShaker_StopListening_m6666037C21503A6B9F2F5676A8BF637F169AF34A (MMCinemachineFieldOfViewShaker_t8C5DCA609EAC92EEC90058F0CFE7349460B67DDB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t48AE9BB71693BEE6E672E6488338BA364A814D73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.StopListening();
		MMShaker_StopListening_m1D60A4786564D907C4378080302EC52998682078(__this, /*hidden argument*/NULL);
		// MMCameraFieldOfViewShakeEvent.Unregister(OnMMCameraFieldOfViewShakeEvent);
		Delegate_t48AE9BB71693BEE6E672E6488338BA364A814D73 * L_0 = (Delegate_t48AE9BB71693BEE6E672E6488338BA364A814D73 *)il2cpp_codegen_object_new(Delegate_t48AE9BB71693BEE6E672E6488338BA364A814D73_il2cpp_TypeInfo_var);
		Delegate__ctor_mFBE74CEFCF7377CCFBD4E381A7C7841542690FD7(L_0, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 26)), /*hidden argument*/NULL);
		MMCameraFieldOfViewShakeEvent_Unregister_m3EB17557FCCF2C6981EB1C688AD34FB4860C28BF(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineFieldOfViewShaker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFieldOfViewShaker__ctor_mA2344809CE7885DBBDD641E3283B479CBA8EEF10 (MMCinemachineFieldOfViewShaker_t8C5DCA609EAC92EEC90058F0CFE7349460B67DDB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AnimationCurve ShakeFieldOfView = new AnimationCurve(new Keyframe(0, 0), new Keyframe(0.5f, 1), new Keyframe(1, 0));
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_0 = (KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)SZArrayNew(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var, (uint32_t)3);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_1 = L_0;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_2);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_3 = L_1;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_4), (0.5f), (1.0f), /*hidden argument*/NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_4);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_5 = L_3;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_6), (1.0f), (0.0f), /*hidden argument*/NULL);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_6);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_7 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0(L_7, L_5, /*hidden argument*/NULL);
		__this->set_ShakeFieldOfView_20(L_7);
		// public float RemapFieldOfViewZero = 60f;
		__this->set_RemapFieldOfViewZero_21((60.0f));
		// public float RemapFieldOfViewOne = 120f;
		__this->set_RemapFieldOfViewOne_22((120.0f));
		MMShaker__ctor_m19139ACF2B49DCE913269ED0C2D23D9B08E85C74(__this, /*hidden argument*/NULL);
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
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineFreeLookZoom::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFreeLookZoom_Awake_m31226EB9AE3B4B827B1F63658BB9CB2F5FA1E268 (MMCinemachineFreeLookZoom_t4184663C570C00D1DC2EC451A06F3355A2BE2542 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F_m70D278C6A336E3099B1563C3B66477D03693802E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _freeLookCamera = this.gameObject.GetComponent<Cinemachine.CinemachineFreeLook>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * L_1;
		L_1 = GameObject_GetComponent_TisCinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F_m70D278C6A336E3099B1563C3B66477D03693802E(L_0, /*hidden argument*/GameObject_GetComponent_TisCinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F_m70D278C6A336E3099B1563C3B66477D03693802E_RuntimeMethod_var);
		__this->set__freeLookCamera_11(L_1);
		// _initialFieldOfView = _freeLookCamera.m_Lens.FieldOfView;
		CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * L_2 = __this->get__freeLookCamera_11();
		LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * L_3 = L_2->get_address_of_m_Lens_22();
		float L_4 = L_3->get_FieldOfView_1();
		__this->set__initialFieldOfView_12(L_4);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineFreeLookZoom::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFreeLookZoom_Update_m227CCCE3D12DE4D313086F6A8CBFC631F8F298DF (MMCinemachineFreeLookZoom_t4184663C570C00D1DC2EC451A06F3355A2BE2542 * __this, const RuntimeMethod* method)
{
	{
		// if (!_zooming)
		bool L_0 = __this->get__zooming_14();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (_freeLookCamera.m_Lens.FieldOfView != _targetFieldOfView)
		CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * L_1 = __this->get__freeLookCamera_11();
		LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * L_2 = L_1->get_address_of_m_Lens_22();
		float L_3 = L_2->get_FieldOfView_1();
		float L_4 = __this->get__targetFieldOfView_18();
		if ((((float)L_3) == ((float)L_4)))
		{
			goto IL_006d;
		}
	}
	{
		// _delta += Time.deltaTime / _transitionDuration;
		float L_5 = __this->get__delta_19();
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_7 = __this->get__transitionDuration_16();
		__this->set__delta_19(((float)il2cpp_codegen_add((float)L_5, (float)((float)((float)L_6/(float)L_7)))));
		// _freeLookCamera.m_Lens.FieldOfView = Mathf.LerpUnclamped(_startFieldOfView, _targetFieldOfView, ZoomCurve.Evaluate(_delta));
		CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * L_8 = __this->get__freeLookCamera_11();
		LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * L_9 = L_8->get_address_of_m_Lens_22();
		float L_10 = __this->get__startFieldOfView_15();
		float L_11 = __this->get__targetFieldOfView_18();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_12 = __this->get_ZoomCurve_5();
		float L_13 = __this->get__delta_19();
		float L_14;
		L_14 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_12, L_13, /*hidden argument*/NULL);
		float L_15;
		L_15 = Mathf_LerpUnclamped_mF68548D1AA22018863B6EBE911A5F7A959F94C1E(L_10, L_11, L_14, /*hidden argument*/NULL);
		L_9->set_FieldOfView_1(L_15);
		// }
		return;
	}

IL_006d:
	{
		// if (!_destinationReached)
		bool L_16 = __this->get__destinationReached_22();
		if (L_16)
		{
			goto IL_0087;
		}
	}
	{
		// _reachedDestinationTimestamp = Time.time;
		float L_17;
		L_17 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set__reachedDestinationTimestamp_21(L_17);
		// _destinationReached = true;
		__this->set__destinationReached_22((bool)1);
	}

IL_0087:
	{
		// if ((_mode == MMCameraZoomModes.For) && (_direction == 1))
		int32_t L_18 = __this->get__mode_13();
		if (L_18)
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_19 = __this->get__direction_20();
		if ((!(((uint32_t)L_19) == ((uint32_t)1))))
		{
			goto IL_00d7;
		}
	}
	{
		// if (Time.time - _reachedDestinationTimestamp > _duration)
		float L_20;
		L_20 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_21 = __this->get__reachedDestinationTimestamp_21();
		float L_22 = __this->get__duration_17();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_20, (float)L_21))) > ((float)L_22))))
		{
			goto IL_00de;
		}
	}
	{
		// _direction = -1;
		__this->set__direction_20((-1));
		// _startFieldOfView = _targetFieldOfView;
		float L_23 = __this->get__targetFieldOfView_18();
		__this->set__startFieldOfView_15(L_23);
		// _targetFieldOfView = _initialFieldOfView;
		float L_24 = __this->get__initialFieldOfView_12();
		__this->set__targetFieldOfView_18(L_24);
		// _delta = 0f;
		__this->set__delta_19((0.0f));
		// }
		return;
	}

IL_00d7:
	{
		// _zooming = false;
		__this->set__zooming_14((bool)0);
	}

IL_00de:
	{
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineFreeLookZoom::Zoom(MoreMountains.Feedbacks.MMCameraZoomModes,System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFreeLookZoom_Zoom_mE33452CED491648995B08E6BB2A2181C7A5BA264 (MMCinemachineFreeLookZoom_t4184663C570C00D1DC2EC451A06F3355A2BE2542 * __this, int32_t ___mode0, float ___newFieldOfView1, float ___transitionDuration2, float ___duration3, bool ___relative4, const RuntimeMethod* method)
{
	{
		// if (_zooming)
		bool L_0 = __this->get__zooming_14();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _zooming = true;
		__this->set__zooming_14((bool)1);
		// _delta = 0f;
		__this->set__delta_19((0.0f));
		// _mode = mode;
		int32_t L_1 = ___mode0;
		__this->set__mode_13(L_1);
		// _startFieldOfView = _freeLookCamera.m_Lens.FieldOfView;
		CinemachineFreeLook_t210E7251D7C05CB0E55EA3053833CB3DE3F0304F * L_2 = __this->get__freeLookCamera_11();
		LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * L_3 = L_2->get_address_of_m_Lens_22();
		float L_4 = L_3->get_FieldOfView_1();
		__this->set__startFieldOfView_15(L_4);
		// _transitionDuration = transitionDuration;
		float L_5 = ___transitionDuration2;
		__this->set__transitionDuration_16(L_5);
		// _duration = duration;
		float L_6 = ___duration3;
		__this->set__duration_17(L_6);
		// _transitionDuration = transitionDuration;
		float L_7 = ___transitionDuration2;
		__this->set__transitionDuration_16(L_7);
		// _direction = 1;
		__this->set__direction_20(1);
		// _destinationReached = false;
		__this->set__destinationReached_22((bool)0);
		int32_t L_8 = ___mode0;
		switch (L_8)
		{
			case 0:
			{
				goto IL_0070;
			}
			case 1:
			{
				goto IL_0079;
			}
			case 2:
			{
				goto IL_0082;
			}
		}
	}
	{
		goto IL_008e;
	}

IL_0070:
	{
		// _targetFieldOfView = newFieldOfView;
		float L_9 = ___newFieldOfView1;
		__this->set__targetFieldOfView_18(L_9);
		// break;
		goto IL_008e;
	}

IL_0079:
	{
		// _targetFieldOfView = newFieldOfView;
		float L_10 = ___newFieldOfView1;
		__this->set__targetFieldOfView_18(L_10);
		// break;
		goto IL_008e;
	}

IL_0082:
	{
		// _targetFieldOfView = _initialFieldOfView;
		float L_11 = __this->get__initialFieldOfView_12();
		__this->set__targetFieldOfView_18(L_11);
	}

IL_008e:
	{
		// if (relative)
		bool L_12 = ___relative4;
		if (!L_12)
		{
			goto IL_00a5;
		}
	}
	{
		// _targetFieldOfView += _initialFieldOfView;
		float L_13 = __this->get__targetFieldOfView_18();
		float L_14 = __this->get__initialFieldOfView_12();
		__this->set__targetFieldOfView_18(((float)il2cpp_codegen_add((float)L_13, (float)L_14)));
	}

IL_00a5:
	{
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineFreeLookZoom::TestZoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFreeLookZoom_TestZoom_m17822B0B12AD0889490112AE3BDD1E1859E8765A (MMCinemachineFreeLookZoom_t4184663C570C00D1DC2EC451A06F3355A2BE2542 * __this, const RuntimeMethod* method)
{
	{
		// Zoom(TestMode, TestFieldOfView, TestTransitionDuration, TestDuration);
		int32_t L_0 = __this->get_TestMode_6();
		float L_1 = __this->get_TestFieldOfView_7();
		float L_2 = __this->get_TestTransitionDuration_8();
		float L_3 = __this->get_TestDuration_9();
		VirtActionInvoker5< int32_t, float, float, float, bool >::Invoke(6 /* System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineFreeLookZoom::Zoom(MoreMountains.Feedbacks.MMCameraZoomModes,System.Single,System.Single,System.Single,System.Boolean) */, __this, L_0, L_1, L_2, L_3, (bool)0);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineFreeLookZoom::OnCameraZoomEvent(MoreMountains.Feedbacks.MMCameraZoomModes,System.Single,System.Single,System.Single,System.Int32,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFreeLookZoom_OnCameraZoomEvent_mC3C4C4811781BF6167690752D4E573B727F9474E (MMCinemachineFreeLookZoom_t4184663C570C00D1DC2EC451A06F3355A2BE2542 * __this, int32_t ___mode0, float ___newFieldOfView1, float ___transitionDuration2, float ___duration3, int32_t ___channel4, bool ___useUnscaledTime5, bool ___stop6, bool ___relative7, const RuntimeMethod* method)
{
	{
		// if ((channel != Channel) && (channel != -1) && (Channel != -1))
		int32_t L_0 = ___channel4;
		int32_t L_1 = __this->get_Channel_4();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = ___channel4;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_3 = __this->get_Channel_4();
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0019;
		}
	}
	{
		// return;
		return;
	}

IL_0019:
	{
		// if (stop)
		bool L_4 = ___stop6;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// _zooming = false;
		__this->set__zooming_14((bool)0);
		// return;
		return;
	}

IL_0025:
	{
		// this.Zoom(mode, newFieldOfView, transitionDuration, duration, relative);
		int32_t L_5 = ___mode0;
		float L_6 = ___newFieldOfView1;
		float L_7 = ___transitionDuration2;
		float L_8 = ___duration3;
		bool L_9 = ___relative7;
		VirtActionInvoker5< int32_t, float, float, float, bool >::Invoke(6 /* System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineFreeLookZoom::Zoom(MoreMountains.Feedbacks.MMCameraZoomModes,System.Single,System.Single,System.Single,System.Boolean) */, __this, L_5, L_6, L_7, L_8, L_9);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineFreeLookZoom::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFreeLookZoom_OnEnable_m497A78CD176B8D89E1CC5E3A33B73514DCFF8047 (MMCinemachineFreeLookZoom_t4184663C570C00D1DC2EC451A06F3355A2BE2542 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_tAFFC0495409F3E38D283E26C7E2DF6CDC19DFA62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MMCameraZoomEvent.Register(OnCameraZoomEvent);
		Delegate_tAFFC0495409F3E38D283E26C7E2DF6CDC19DFA62 * L_0 = (Delegate_tAFFC0495409F3E38D283E26C7E2DF6CDC19DFA62 *)il2cpp_codegen_object_new(Delegate_tAFFC0495409F3E38D283E26C7E2DF6CDC19DFA62_il2cpp_TypeInfo_var);
		Delegate__ctor_m7D7D03319B4EF6154F102E5EDFF26711FB51C4AD(L_0, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 8)), /*hidden argument*/NULL);
		MMCameraZoomEvent_Register_m21AF5CFDCCC96D94362DD58129554484A7D738B4(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineFreeLookZoom::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFreeLookZoom_OnDisable_mDB7D41FC6E17B6F81F17FC73F214DD9FCED5CCEB (MMCinemachineFreeLookZoom_t4184663C570C00D1DC2EC451A06F3355A2BE2542 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_tAFFC0495409F3E38D283E26C7E2DF6CDC19DFA62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MMCameraZoomEvent.Unregister(OnCameraZoomEvent);
		Delegate_tAFFC0495409F3E38D283E26C7E2DF6CDC19DFA62 * L_0 = (Delegate_tAFFC0495409F3E38D283E26C7E2DF6CDC19DFA62 *)il2cpp_codegen_object_new(Delegate_tAFFC0495409F3E38D283E26C7E2DF6CDC19DFA62_il2cpp_TypeInfo_var);
		Delegate__ctor_m7D7D03319B4EF6154F102E5EDFF26711FB51C4AD(L_0, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 8)), /*hidden argument*/NULL);
		MMCameraZoomEvent_Unregister_mB161F83680ED067D665DA91006EE8A92B3083AB0(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineFreeLookZoom::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFreeLookZoom__ctor_mF466AB6A16AEF988AAB07C14CE6888759962C54A (MMCinemachineFreeLookZoom_t4184663C570C00D1DC2EC451A06F3355A2BE2542 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AnimationCurve ZoomCurve = new AnimationCurve(new Keyframe(0f, 0f), new Keyframe(1f, 1f));
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_0 = (KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)SZArrayNew(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_1 = L_0;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_2);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_3 = L_1;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_4), (1.0f), (1.0f), /*hidden argument*/NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_4);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0(L_5, L_3, /*hidden argument*/NULL);
		__this->set_ZoomCurve_5(L_5);
		// public float TestFieldOfView = 30f;
		__this->set_TestFieldOfView_7((30.0f));
		// public float TestTransitionDuration = 0.1f;
		__this->set_TestTransitionDuration_8((0.100000001f));
		// public float TestDuration = 0.05f;
		__this->set_TestDuration_9((0.0500000007f));
		// protected int _direction = 1;
		__this->set__direction_20(1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineOrthographicSizeShaker::Initialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineOrthographicSizeShaker_Initialization_m26DF60D7E6ED7A8D94DF4373E5CBB1B477771076 (MMCinemachineOrthographicSizeShaker_tA59A08A48FA9916DE2E68340FE49A991A786C53B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C_m9DCB48A9A82ED7FB1AEB541DE9E97D1A16CE111A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Initialization();
		MMShaker_Initialization_mA0C4D4855C7877F7FD4BE6DB7C55D309A53753B3(__this, /*hidden argument*/NULL);
		// _targetCamera = this.gameObject.GetComponent<CinemachineVirtualCamera>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * L_1;
		L_1 = GameObject_GetComponent_TisCinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C_m9DCB48A9A82ED7FB1AEB541DE9E97D1A16CE111A(L_0, /*hidden argument*/GameObject_GetComponent_TisCinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C_m9DCB48A9A82ED7FB1AEB541DE9E97D1A16CE111A_RuntimeMethod_var);
		__this->set__targetCamera_23(L_1);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineOrthographicSizeShaker::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineOrthographicSizeShaker_Reset_m0F2DD29A2D41CF46CD6A5DC4CFBEB04CC84CF601 (MMCinemachineOrthographicSizeShaker_tA59A08A48FA9916DE2E68340FE49A991A786C53B * __this, const RuntimeMethod* method)
{
	{
		// ShakeDuration = 0.5f;
		((MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 *)__this)->set_ShakeDuration_5((0.5f));
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineOrthographicSizeShaker::Shake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineOrthographicSizeShaker_Shake_m04C91E44587D132B539031A8935D3DAE6C18D423 (MMCinemachineOrthographicSizeShaker_tA59A08A48FA9916DE2E68340FE49A991A786C53B * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float newOrthographicSize = ShakeFloat(ShakeOrthographicSize, RemapOrthographicSizeZero, RemapOrthographicSizeOne, RelativeOrthographicSize, _initialOrthographicSize);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = __this->get_ShakeOrthographicSize_20();
		float L_1 = __this->get_RemapOrthographicSizeZero_21();
		float L_2 = __this->get_RemapOrthographicSizeOne_22();
		bool L_3 = __this->get_RelativeOrthographicSize_19();
		float L_4 = __this->get__initialOrthographicSize_24();
		float L_5;
		L_5 = VirtFuncInvoker5< float, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *, float, float, bool, float >::Invoke(13 /* System.Single MoreMountains.Feedbacks.MMShaker::ShakeFloat(UnityEngine.AnimationCurve,System.Single,System.Single,System.Boolean,System.Single) */, __this, L_0, L_1, L_2, L_3, L_4);
		V_0 = L_5;
		// _targetCamera.m_Lens.OrthographicSize = newOrthographicSize;
		CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * L_6 = __this->get__targetCamera_23();
		LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * L_7 = L_6->get_address_of_m_Lens_21();
		float L_8 = V_0;
		L_7->set_OrthographicSize_2(L_8);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineOrthographicSizeShaker::GrabInitialValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineOrthographicSizeShaker_GrabInitialValues_m36FC8563B0A845BDEAF5E0F7BD7256922ADBFE31 (MMCinemachineOrthographicSizeShaker_tA59A08A48FA9916DE2E68340FE49A991A786C53B * __this, const RuntimeMethod* method)
{
	{
		// _initialOrthographicSize = _targetCamera.m_Lens.OrthographicSize;
		CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * L_0 = __this->get__targetCamera_23();
		LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * L_1 = L_0->get_address_of_m_Lens_21();
		float L_2 = L_1->get_OrthographicSize_2();
		__this->set__initialOrthographicSize_24(L_2);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineOrthographicSizeShaker::OnMMCameraOrthographicSizeShakeEvent(UnityEngine.AnimationCurve,System.Single,System.Single,System.Single,System.Boolean,System.Single,System.Int32,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineOrthographicSizeShaker_OnMMCameraOrthographicSizeShakeEvent_m382174139CBA0C81ED801EE378285844AB090A62 (MMCinemachineOrthographicSizeShaker_tA59A08A48FA9916DE2E68340FE49A991A786C53B * __this, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___distortionCurve0, float ___duration1, float ___remapMin2, float ___remapMax3, bool ___relativeDistortion4, float ___feedbacksIntensity5, int32_t ___channel6, bool ___resetShakerValuesAfterShake7, bool ___resetTargetValuesAfterShake8, bool ___forwardDirection9, bool ___stop10, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!CheckEventAllowed(channel))
		int32_t L_0 = ___channel6;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = V_0;
		bool L_2;
		L_2 = VirtFuncInvoker4< bool, int32_t, bool, float, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(24 /* System.Boolean MoreMountains.Feedbacks.MMShaker::CheckEventAllowed(System.Int32,System.Boolean,System.Single,UnityEngine.Vector3) */, __this, L_0, (bool)0, (0.0f), L_1);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// return;
		return;
	}

IL_001a:
	{
		// if (stop)
		bool L_3 = ___stop10;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// Stop();
		VirtActionInvoker0::Invoke(21 /* System.Void MoreMountains.Feedbacks.MMShaker::Stop() */, __this);
		// return;
		return;
	}

IL_0025:
	{
		// if (!Interruptible && Shaking)
		bool L_4 = ((MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 *)__this)->get_Interruptible_7();
		if (L_4)
		{
			goto IL_0036;
		}
	}
	{
		bool L_5 = ((MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 *)__this)->get_Shaking_10();
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		// return;
		return;
	}

IL_0036:
	{
		// _resetShakerValuesAfterShake = resetShakerValuesAfterShake;
		bool L_6 = ___resetShakerValuesAfterShake7;
		((MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 *)__this)->set__resetShakerValuesAfterShake_16(L_6);
		// _resetTargetValuesAfterShake = resetTargetValuesAfterShake;
		bool L_7 = ___resetTargetValuesAfterShake8;
		((MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 *)__this)->set__resetTargetValuesAfterShake_17(L_7);
		// if (resetShakerValuesAfterShake)
		bool L_8 = ___resetShakerValuesAfterShake7;
		if (!L_8)
		{
			goto IL_0086;
		}
	}
	{
		// _originalShakeDuration = ShakeDuration;
		float L_9 = ((MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 *)__this)->get_ShakeDuration_5();
		__this->set__originalShakeDuration_25(L_9);
		// _originalShakeOrthographicSize = ShakeOrthographicSize;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_10 = __this->get_ShakeOrthographicSize_20();
		__this->set__originalShakeOrthographicSize_27(L_10);
		// _originalRemapOrthographicSizeZero = RemapOrthographicSizeZero;
		float L_11 = __this->get_RemapOrthographicSizeZero_21();
		__this->set__originalRemapOrthographicSizeZero_28(L_11);
		// _originalRemapOrthographicSizeOne = RemapOrthographicSizeOne;
		float L_12 = __this->get_RemapOrthographicSizeOne_22();
		__this->set__originalRemapOrthographicSizeOne_29(L_12);
		// _originalRelativeOrthographicSize = RelativeOrthographicSize;
		bool L_13 = __this->get_RelativeOrthographicSize_19();
		__this->set__originalRelativeOrthographicSize_26(L_13);
	}

IL_0086:
	{
		// ShakeDuration = duration;
		float L_14 = ___duration1;
		((MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 *)__this)->set_ShakeDuration_5(L_14);
		// ShakeOrthographicSize = distortionCurve;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_15 = ___distortionCurve0;
		__this->set_ShakeOrthographicSize_20(L_15);
		// RemapOrthographicSizeZero = remapMin * feedbacksIntensity;
		float L_16 = ___remapMin2;
		float L_17 = ___feedbacksIntensity5;
		__this->set_RemapOrthographicSizeZero_21(((float)il2cpp_codegen_multiply((float)L_16, (float)L_17)));
		// RemapOrthographicSizeOne = remapMax * feedbacksIntensity;
		float L_18 = ___remapMax3;
		float L_19 = ___feedbacksIntensity5;
		__this->set_RemapOrthographicSizeOne_22(((float)il2cpp_codegen_multiply((float)L_18, (float)L_19)));
		// RelativeOrthographicSize = relativeDistortion;
		bool L_20 = ___relativeDistortion4;
		__this->set_RelativeOrthographicSize_19(L_20);
		// ForwardDirection = forwardDirection;
		bool L_21 = ___forwardDirection9;
		((MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 *)__this)->set_ForwardDirection_11(L_21);
		// Play();
		VirtActionInvoker0::Invoke(20 /* System.Void MoreMountains.Feedbacks.MMShaker::Play() */, __this);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineOrthographicSizeShaker::ResetTargetValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineOrthographicSizeShaker_ResetTargetValues_m59ED2044A6CA6B55ECAF1FD93E195CBB3AF4063C (MMCinemachineOrthographicSizeShaker_tA59A08A48FA9916DE2E68340FE49A991A786C53B * __this, const RuntimeMethod* method)
{
	{
		// base.ResetTargetValues();
		MMShaker_ResetTargetValues_m4A621683BB61D3FD391AAC8F7983528F725B24C2(__this, /*hidden argument*/NULL);
		// _targetCamera.m_Lens.OrthographicSize = _initialOrthographicSize;
		CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * L_0 = __this->get__targetCamera_23();
		LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * L_1 = L_0->get_address_of_m_Lens_21();
		float L_2 = __this->get__initialOrthographicSize_24();
		L_1->set_OrthographicSize_2(L_2);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineOrthographicSizeShaker::ResetShakerValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineOrthographicSizeShaker_ResetShakerValues_m6048B01B8E4C14968BE7BDAB2B21C23E8BD3F744 (MMCinemachineOrthographicSizeShaker_tA59A08A48FA9916DE2E68340FE49A991A786C53B * __this, const RuntimeMethod* method)
{
	{
		// base.ResetShakerValues();
		MMShaker_ResetShakerValues_m93AA8579FE316AD1BBCB482D7DC47593B5F70092(__this, /*hidden argument*/NULL);
		// ShakeDuration = _originalShakeDuration;
		float L_0 = __this->get__originalShakeDuration_25();
		((MMShaker_t8F894BEBCBCFAB1CAF0AD67F76B98DE9C80E98F1 *)__this)->set_ShakeDuration_5(L_0);
		// ShakeOrthographicSize = _originalShakeOrthographicSize;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_1 = __this->get__originalShakeOrthographicSize_27();
		__this->set_ShakeOrthographicSize_20(L_1);
		// RemapOrthographicSizeZero = _originalRemapOrthographicSizeZero;
		float L_2 = __this->get__originalRemapOrthographicSizeZero_28();
		__this->set_RemapOrthographicSizeZero_21(L_2);
		// RemapOrthographicSizeOne = _originalRemapOrthographicSizeOne;
		float L_3 = __this->get__originalRemapOrthographicSizeOne_29();
		__this->set_RemapOrthographicSizeOne_22(L_3);
		// RelativeOrthographicSize = _originalRelativeOrthographicSize;
		bool L_4 = __this->get__originalRelativeOrthographicSize_26();
		__this->set_RelativeOrthographicSize_19(L_4);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineOrthographicSizeShaker::StartListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineOrthographicSizeShaker_StartListening_mEFD0B3BB03C65DEE0C1E1CC1A39456F296425B03 (MMCinemachineOrthographicSizeShaker_tA59A08A48FA9916DE2E68340FE49A991A786C53B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t5BE222D6A1E18E8E78F7B9F81C6AEC2C7CF03FCD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.StartListening();
		MMShaker_StartListening_m2FD2D6DA250E2613C19EB5F54D1B4F78803D644F(__this, /*hidden argument*/NULL);
		// MMCameraOrthographicSizeShakeEvent.Register(OnMMCameraOrthographicSizeShakeEvent);
		Delegate_t5BE222D6A1E18E8E78F7B9F81C6AEC2C7CF03FCD * L_0 = (Delegate_t5BE222D6A1E18E8E78F7B9F81C6AEC2C7CF03FCD *)il2cpp_codegen_object_new(Delegate_t5BE222D6A1E18E8E78F7B9F81C6AEC2C7CF03FCD_il2cpp_TypeInfo_var);
		Delegate__ctor_mD22CAD931157C69FAE8456E9D80ACCF5C4154BD6(L_0, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 26)), /*hidden argument*/NULL);
		MMCameraOrthographicSizeShakeEvent_Register_m61133F90064EAF651830122BC78D43A6EFA90F89(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineOrthographicSizeShaker::StopListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineOrthographicSizeShaker_StopListening_mA854FB780BD11F866558566DDCE33C89FBF9ADE3 (MMCinemachineOrthographicSizeShaker_tA59A08A48FA9916DE2E68340FE49A991A786C53B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t5BE222D6A1E18E8E78F7B9F81C6AEC2C7CF03FCD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.StopListening();
		MMShaker_StopListening_m1D60A4786564D907C4378080302EC52998682078(__this, /*hidden argument*/NULL);
		// MMCameraOrthographicSizeShakeEvent.Unregister(OnMMCameraOrthographicSizeShakeEvent);
		Delegate_t5BE222D6A1E18E8E78F7B9F81C6AEC2C7CF03FCD * L_0 = (Delegate_t5BE222D6A1E18E8E78F7B9F81C6AEC2C7CF03FCD *)il2cpp_codegen_object_new(Delegate_t5BE222D6A1E18E8E78F7B9F81C6AEC2C7CF03FCD_il2cpp_TypeInfo_var);
		Delegate__ctor_mD22CAD931157C69FAE8456E9D80ACCF5C4154BD6(L_0, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 26)), /*hidden argument*/NULL);
		MMCameraOrthographicSizeShakeEvent_Unregister_m4DA6F4FFC40C414AA90819ADF3506C97FDEAC691(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineOrthographicSizeShaker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineOrthographicSizeShaker__ctor_m03B6295319E7F25B0C77DA1CAD58756AE52194F1 (MMCinemachineOrthographicSizeShaker_tA59A08A48FA9916DE2E68340FE49A991A786C53B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AnimationCurve ShakeOrthographicSize = new AnimationCurve(new Keyframe(0, 0), new Keyframe(0.5f, 1), new Keyframe(1, 0));
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_0 = (KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)SZArrayNew(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var, (uint32_t)3);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_1 = L_0;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_2);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_3 = L_1;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_4), (0.5f), (1.0f), /*hidden argument*/NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_4);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_5 = L_3;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_6), (1.0f), (0.0f), /*hidden argument*/NULL);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_6);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_7 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0(L_7, L_5, /*hidden argument*/NULL);
		__this->set_ShakeOrthographicSize_20(L_7);
		// public float RemapOrthographicSizeZero = 5f;
		__this->set_RemapOrthographicSizeZero_21((5.0f));
		// public float RemapOrthographicSizeOne = 10f;
		__this->set_RemapOrthographicSizeOne_22((10.0f));
		MMShaker__ctor_m19139ACF2B49DCE913269ED0C2D23D9B08E85C74(__this, /*hidden argument*/NULL);
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
// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityBrainListener::GetTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMCinemachinePriorityBrainListener_GetTime_m34A3C3E4FE691E5F469525A9880EBEF34D04BB0A (MMCinemachinePriorityBrainListener_tF4122050D55252EF361F5BAACBB63E1C6DE6FF80 * __this, const RuntimeMethod* method)
{
	{
		// public virtual float GetTime() { return (TimescaleMode == TimescaleModes.Scaled) ? Time.time : Time.unscaledTime; }
		int32_t L_0 = __this->get_TimescaleMode_4();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		float L_1;
		L_1 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258(/*hidden argument*/NULL);
		return L_1;
	}

IL_000e:
	{
		float L_2;
		L_2 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityBrainListener::GetDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMCinemachinePriorityBrainListener_GetDeltaTime_mBBBFEBC76A3B085FC89E811B5096CAA6607CCFBD (MMCinemachinePriorityBrainListener_tF4122050D55252EF361F5BAACBB63E1C6DE6FF80 * __this, const RuntimeMethod* method)
{
	{
		// public virtual float GetDeltaTime() { return (TimescaleMode == TimescaleModes.Scaled) ? Time.deltaTime : Time.unscaledDeltaTime; }
		int32_t L_0 = __this->get_TimescaleMode_4();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		float L_1;
		L_1 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84(/*hidden argument*/NULL);
		return L_1;
	}

IL_000e:
	{
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityBrainListener::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityBrainListener_Awake_m071150C6CEACA73E19A73E45EF12E52645021A1C (MMCinemachinePriorityBrainListener_tF4122050D55252EF361F5BAACBB63E1C6DE6FF80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83_m2A1B17232E3845E1A0E19D3B3A62281373C4A2DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _brain = this.gameObject.GetComponent<CinemachineBrain>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * L_1;
		L_1 = GameObject_GetComponent_TisCinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83_m2A1B17232E3845E1A0E19D3B3A62281373C4A2DA(L_0, /*hidden argument*/GameObject_GetComponent_TisCinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83_m2A1B17232E3845E1A0E19D3B3A62281373C4A2DA_RuntimeMethod_var);
		__this->set__brain_5(L_1);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityBrainListener::OnMMCinemachinePriorityEvent(System.Int32,System.Boolean,System.Int32,System.Boolean,Cinemachine.CinemachineBlendDefinition,System.Boolean,MoreMountains.Feedbacks.TimescaleModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityBrainListener_OnMMCinemachinePriorityEvent_mE0518CA724487449C3C420986D3F9AA21F1D3CA0 (MMCinemachinePriorityBrainListener_tF4122050D55252EF361F5BAACBB63E1C6DE6FF80 * __this, int32_t ___channel0, bool ___forceMaxPriority1, int32_t ___newPriority2, bool ___forceTransition3, CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  ___blendDefinition4, bool ___resetValuesAfterTransition5, int32_t ___timescaleMode6, const RuntimeMethod* method)
{
	{
		// if (forceTransition)
		bool L_0 = ___forceTransition3;
		if (!L_0)
		{
			goto IL_0059;
		}
	}
	{
		// if (_coroutine != null)
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1 = __this->get__coroutine_7();
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// StopCoroutine(_coroutine);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2 = __this->get__coroutine_7();
		MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413(__this, L_2, /*hidden argument*/NULL);
		// }
		goto IL_002b;
	}

IL_001a:
	{
		// _initialDefinition = _brain.m_DefaultBlend;
		CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * L_3 = __this->get__brain_5();
		CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  L_4 = L_3->get_m_DefaultBlend_10();
		__this->set__initialDefinition_6(L_4);
	}

IL_002b:
	{
		// _brain.m_DefaultBlend = blendDefinition;
		CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * L_5 = __this->get__brain_5();
		CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  L_6 = ___blendDefinition4;
		L_5->set_m_DefaultBlend_10(L_6);
		// TimescaleMode = timescaleMode;
		int32_t L_7 = ___timescaleMode6;
		__this->set_TimescaleMode_4(L_7);
		// _coroutine = StartCoroutine(ResetBlendDefinition(blendDefinition.m_Time));
		CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  L_8 = ___blendDefinition4;
		float L_9 = L_8.get_m_Time_1();
		RuntimeObject* L_10;
		L_10 = VirtFuncInvoker1< RuntimeObject*, float >::Invoke(8 /* System.Collections.IEnumerator MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityBrainListener::ResetBlendDefinition(System.Single) */, __this, L_9);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_11;
		L_11 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_10, /*hidden argument*/NULL);
		__this->set__coroutine_7(L_11);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityBrainListener::ResetBlendDefinition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MMCinemachinePriorityBrainListener_ResetBlendDefinition_m7C8D74BA413A75E7422F3CD189A7FF3FBC30BF65 (MMCinemachinePriorityBrainListener_tF4122050D55252EF361F5BAACBB63E1C6DE6FF80 * __this, float ___delay0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CResetBlendDefinitionU3Ed__8_t242A6A1726EC5B7D590D593342C301A52CD43A82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CResetBlendDefinitionU3Ed__8_t242A6A1726EC5B7D590D593342C301A52CD43A82 * L_0 = (U3CResetBlendDefinitionU3Ed__8_t242A6A1726EC5B7D590D593342C301A52CD43A82 *)il2cpp_codegen_object_new(U3CResetBlendDefinitionU3Ed__8_t242A6A1726EC5B7D590D593342C301A52CD43A82_il2cpp_TypeInfo_var);
		U3CResetBlendDefinitionU3Ed__8__ctor_mE7FDF3743A2A64C273022C0A66B429BA40061DF3(L_0, 0, /*hidden argument*/NULL);
		U3CResetBlendDefinitionU3Ed__8_t242A6A1726EC5B7D590D593342C301A52CD43A82 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		U3CResetBlendDefinitionU3Ed__8_t242A6A1726EC5B7D590D593342C301A52CD43A82 * L_2 = L_1;
		float L_3 = ___delay0;
		L_2->set_delay_3(L_3);
		return L_2;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityBrainListener::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityBrainListener_OnEnable_mD5F1A88E36300865828C07C7868A26A5E4C71C12 (MMCinemachinePriorityBrainListener_tF4122050D55252EF361F5BAACBB63E1C6DE6FF80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t3A4FFBD4695433763584A759E677E31CC6775217_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _coroutine = null;
		__this->set__coroutine_7((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
		// MMCinemachinePriorityEvent.Register(OnMMCinemachinePriorityEvent);
		Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * L_0 = (Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 *)il2cpp_codegen_object_new(Delegate_t3A4FFBD4695433763584A759E677E31CC6775217_il2cpp_TypeInfo_var);
		Delegate__ctor_m3F65D60FD56F1F973DF4B2EB245DFF898BAC03FF(L_0, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 7)), /*hidden argument*/NULL);
		MMCinemachinePriorityEvent_Register_m1C9F037507B96418A08AAF9E7F0014F62FEC62F1(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityBrainListener::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityBrainListener_OnDisable_m3BECDD22FA45E6DC496BE177444A19B57DBDE882 (MMCinemachinePriorityBrainListener_tF4122050D55252EF361F5BAACBB63E1C6DE6FF80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t3A4FFBD4695433763584A759E677E31CC6775217_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_coroutine != null)
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_0 = __this->get__coroutine_7();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// StopCoroutine(_coroutine);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1 = __this->get__coroutine_7();
		MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413(__this, L_1, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// _coroutine = null;
		__this->set__coroutine_7((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
		// MMCinemachinePriorityEvent.Unregister(OnMMCinemachinePriorityEvent);
		Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * L_2 = (Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 *)il2cpp_codegen_object_new(Delegate_t3A4FFBD4695433763584A759E677E31CC6775217_il2cpp_TypeInfo_var);
		Delegate__ctor_m3F65D60FD56F1F973DF4B2EB245DFF898BAC03FF(L_2, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 7)), /*hidden argument*/NULL);
		MMCinemachinePriorityEvent_Unregister_m5AD5136E7B76B00F82D657A403B9393070E2619B(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityBrainListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityBrainListener__ctor_mEC8EF9129F8E4907EBA2A288CA4851AAA98191CE (MMCinemachinePriorityBrainListener_tF4122050D55252EF361F5BAACBB63E1C6DE6FF80 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityEvent::add_OnEvent(MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityEvent/Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityEvent_add_OnEvent_mAF3896C0A39DACE620B115E0AEB78CC5BADDC58B (Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t3A4FFBD4695433763584A759E677E31CC6775217_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMCinemachinePriorityEvent_t62637763357C70C2404C0F126567010921F509CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * V_0 = NULL;
	Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * V_1 = NULL;
	Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * V_2 = NULL;
	{
		Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * L_0 = ((MMCinemachinePriorityEvent_t62637763357C70C2404C0F126567010921F509CF_StaticFields*)il2cpp_codegen_static_fields_for(MMCinemachinePriorityEvent_t62637763357C70C2404C0F126567010921F509CF_il2cpp_TypeInfo_var))->get_OnEvent_0();
		V_0 = L_0;
	}

IL_0006:
	{
		Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * L_1 = V_0;
		V_1 = L_1;
		Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * L_2 = V_1;
		Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 *)CastclassSealed((RuntimeObject*)L_4, Delegate_t3A4FFBD4695433763584A759E677E31CC6775217_il2cpp_TypeInfo_var));
		Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * L_5 = V_2;
		Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * L_6 = V_1;
		Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 *>((Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 **)(((MMCinemachinePriorityEvent_t62637763357C70C2404C0F126567010921F509CF_StaticFields*)il2cpp_codegen_static_fields_for(MMCinemachinePriorityEvent_t62637763357C70C2404C0F126567010921F509CF_il2cpp_TypeInfo_var))->get_address_of_OnEvent_0()), L_5, L_6);
		V_0 = L_7;
		Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * L_8 = V_0;
		Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 *)L_8) == ((RuntimeObject*)(Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityEvent::remove_OnEvent(MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityEvent/Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityEvent_remove_OnEvent_m2BBF46DD78B08BC2EA23BFB82CCF223848F60F5E (Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t3A4FFBD4695433763584A759E677E31CC6775217_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMCinemachinePriorityEvent_t62637763357C70C2404C0F126567010921F509CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * V_0 = NULL;
	Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * V_1 = NULL;
	Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * V_2 = NULL;
	{
		Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * L_0 = ((MMCinemachinePriorityEvent_t62637763357C70C2404C0F126567010921F509CF_StaticFields*)il2cpp_codegen_static_fields_for(MMCinemachinePriorityEvent_t62637763357C70C2404C0F126567010921F509CF_il2cpp_TypeInfo_var))->get_OnEvent_0();
		V_0 = L_0;
	}

IL_0006:
	{
		Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * L_1 = V_0;
		V_1 = L_1;
		Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * L_2 = V_1;
		Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 *)CastclassSealed((RuntimeObject*)L_4, Delegate_t3A4FFBD4695433763584A759E677E31CC6775217_il2cpp_TypeInfo_var));
		Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * L_5 = V_2;
		Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * L_6 = V_1;
		Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 *>((Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 **)(((MMCinemachinePriorityEvent_t62637763357C70C2404C0F126567010921F509CF_StaticFields*)il2cpp_codegen_static_fields_for(MMCinemachinePriorityEvent_t62637763357C70C2404C0F126567010921F509CF_il2cpp_TypeInfo_var))->get_address_of_OnEvent_0()), L_5, L_6);
		V_0 = L_7;
		Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * L_8 = V_0;
		Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 *)L_8) == ((RuntimeObject*)(Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityEvent::Register(MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityEvent/Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityEvent_Register_m1C9F037507B96418A08AAF9E7F0014F62FEC62F1 (Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * ___callback0, const RuntimeMethod* method)
{
	{
		// OnEvent += callback;
		Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * L_0 = ___callback0;
		MMCinemachinePriorityEvent_add_OnEvent_mAF3896C0A39DACE620B115E0AEB78CC5BADDC58B(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityEvent::Unregister(MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityEvent/Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityEvent_Unregister_m5AD5136E7B76B00F82D657A403B9393070E2619B (Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * ___callback0, const RuntimeMethod* method)
{
	{
		// OnEvent -= callback;
		Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * L_0 = ___callback0;
		MMCinemachinePriorityEvent_remove_OnEvent_m2BBF46DD78B08BC2EA23BFB82CCF223848F60F5E(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityEvent::Trigger(System.Int32,System.Boolean,System.Int32,System.Boolean,Cinemachine.CinemachineBlendDefinition,System.Boolean,MoreMountains.Feedbacks.TimescaleModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityEvent_Trigger_m49FA8806561196FEB583CF4EA38C85949F21FC42 (int32_t ___channel0, bool ___forceMaxPriority1, int32_t ___newPriority2, bool ___forceTransition3, CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  ___blendDefinition4, bool ___resetValuesAfterTransition5, int32_t ___timescaleMode6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMCinemachinePriorityEvent_t62637763357C70C2404C0F126567010921F509CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * G_B2_0 = NULL;
	Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * G_B1_0 = NULL;
	{
		// OnEvent?.Invoke(channel, forceMaxPriority, newPriority, forceTransition, blendDefinition, resetValuesAfterTransition, timescaleMode);
		Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * L_0 = ((MMCinemachinePriorityEvent_t62637763357C70C2404C0F126567010921F509CF_StaticFields*)il2cpp_codegen_static_fields_for(MMCinemachinePriorityEvent_t62637763357C70C2404C0F126567010921F509CF_il2cpp_TypeInfo_var))->get_OnEvent_0();
		Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		int32_t L_2 = ___channel0;
		bool L_3 = ___forceMaxPriority1;
		int32_t L_4 = ___newPriority2;
		bool L_5 = ___forceTransition3;
		CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  L_6 = ___blendDefinition4;
		bool L_7 = ___resetValuesAfterTransition5;
		int32_t L_8 = ___timescaleMode6;
		Delegate_Invoke_mFCDBEA4B4A22EB571B61E584225935D7D1DAFC8C(G_B2_0, L_2, L_3, L_4, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
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
// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityListener::GetTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMCinemachinePriorityListener_GetTime_mED7836C7C132FD9772BA707A8CC72C7550C70F26 (MMCinemachinePriorityListener_t294B0CDA8DD4599662A1D6F9968692DCA9D1A6F3 * __this, const RuntimeMethod* method)
{
	{
		// public virtual float GetTime() { return (TimescaleMode == TimescaleModes.Scaled) ? Time.time : Time.unscaledTime; }
		int32_t L_0 = __this->get_TimescaleMode_4();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		float L_1;
		L_1 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258(/*hidden argument*/NULL);
		return L_1;
	}

IL_000e:
	{
		float L_2;
		L_2 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityListener::GetDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMCinemachinePriorityListener_GetDeltaTime_m45E0F2EE85A3B68B41A83E12FE16A6E5A95B8F6F (MMCinemachinePriorityListener_t294B0CDA8DD4599662A1D6F9968692DCA9D1A6F3 * __this, const RuntimeMethod* method)
{
	{
		// public virtual float GetDeltaTime() { return (TimescaleMode == TimescaleModes.Scaled) ? Time.deltaTime : Time.unscaledDeltaTime; }
		int32_t L_0 = __this->get_TimescaleMode_4();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		float L_1;
		L_1 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84(/*hidden argument*/NULL);
		return L_1;
	}

IL_000e:
	{
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityListener::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityListener_Awake_mC727FB4A4A975211F175488E1072AE4CEE659881 (MMCinemachinePriorityListener_t294B0CDA8DD4599662A1D6F9968692DCA9D1A6F3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5_m06107BAD0F98AB92EEDD9CC81DCFDDAB29D7A27B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _camera = this.gameObject.GetComponent<CinemachineVirtualCameraBase>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * L_1;
		L_1 = GameObject_GetComponent_TisCinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5_m06107BAD0F98AB92EEDD9CC81DCFDDAB29D7A27B(L_0, /*hidden argument*/GameObject_GetComponent_TisCinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5_m06107BAD0F98AB92EEDD9CC81DCFDDAB29D7A27B_RuntimeMethod_var);
		__this->set__camera_6(L_1);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityListener::OnMMCinemachinePriorityEvent(System.Int32,System.Boolean,System.Int32,System.Boolean,Cinemachine.CinemachineBlendDefinition,System.Boolean,MoreMountains.Feedbacks.TimescaleModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityListener_OnMMCinemachinePriorityEvent_m25642021B12747E7DE857BBEF639CFF153F8647C (MMCinemachinePriorityListener_t294B0CDA8DD4599662A1D6F9968692DCA9D1A6F3 * __this, int32_t ___channel0, bool ___forceMaxPriority1, int32_t ___newPriority2, bool ___forceTransition3, CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  ___blendDefinition4, bool ___resetValuesAfterTransition5, int32_t ___timescaleMode6, const RuntimeMethod* method)
{
	{
		// TimescaleMode = timescaleMode;
		int32_t L_0 = ___timescaleMode6;
		__this->set_TimescaleMode_4(L_0);
		// if (channel == Channel)
		int32_t L_1 = ___channel0;
		int32_t L_2 = __this->get_Channel_5();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}
	{
		// _camera.Priority = newPriority;
		CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * L_3 = __this->get__camera_6();
		int32_t L_4 = ___newPriority2;
		CinemachineVirtualCameraBase_set_Priority_m6C180B742F19E669D648B6D1BE4D9D9C5824962B_inline(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001e:
	{
		// if (forceMaxPriority)
		bool L_5 = ___forceMaxPriority1;
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// _camera.Priority = 0;
		CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * L_6 = __this->get__camera_6();
		CinemachineVirtualCameraBase_set_Priority_m6C180B742F19E669D648B6D1BE4D9D9C5824962B_inline(L_6, 0, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityListener::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityListener_OnEnable_m28B08772B02848F64ECC28F868441AC4D934F8EF (MMCinemachinePriorityListener_t294B0CDA8DD4599662A1D6F9968692DCA9D1A6F3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t3A4FFBD4695433763584A759E677E31CC6775217_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MMCinemachinePriorityEvent.Register(OnMMCinemachinePriorityEvent);
		Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * L_0 = (Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 *)il2cpp_codegen_object_new(Delegate_t3A4FFBD4695433763584A759E677E31CC6775217_il2cpp_TypeInfo_var);
		Delegate__ctor_m3F65D60FD56F1F973DF4B2EB245DFF898BAC03FF(L_0, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 7)), /*hidden argument*/NULL);
		MMCinemachinePriorityEvent_Register_m1C9F037507B96418A08AAF9E7F0014F62FEC62F1(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityListener::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityListener_OnDisable_m91864A9E04764DD8BB768E1847463E5E8DAE4DDE (MMCinemachinePriorityListener_t294B0CDA8DD4599662A1D6F9968692DCA9D1A6F3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t3A4FFBD4695433763584A759E677E31CC6775217_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MMCinemachinePriorityEvent.Unregister(OnMMCinemachinePriorityEvent);
		Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * L_0 = (Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 *)il2cpp_codegen_object_new(Delegate_t3A4FFBD4695433763584A759E677E31CC6775217_il2cpp_TypeInfo_var);
		Delegate__ctor_m3F65D60FD56F1F973DF4B2EB245DFF898BAC03FF(L_0, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 7)), /*hidden argument*/NULL);
		MMCinemachinePriorityEvent_Unregister_m5AD5136E7B76B00F82D657A403B9393070E2619B(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityListener__ctor_m35039B554EE3C3F1CA770A29EF866873F876B062 (MMCinemachinePriorityListener_t294B0CDA8DD4599662A1D6F9968692DCA9D1A6F3 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::GetTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMCinemachineZoom_GetTime_mA4EA3E8144B1DE2251D4242246FAB6D74F6D1781 (MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E * __this, const RuntimeMethod* method)
{
	{
		// public virtual float GetTime() { return (TimescaleMode == TimescaleModes.Scaled) ? Time.time : Time.unscaledTime; }
		int32_t L_0;
		L_0 = MMCinemachineZoom_get_TimescaleMode_mAC647CC07C53D080C0D6092F41EB2E670EB344FC_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		float L_1;
		L_1 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258(/*hidden argument*/NULL);
		return L_1;
	}

IL_000e:
	{
		float L_2;
		L_2 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::GetDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMCinemachineZoom_GetDeltaTime_m495A5FEAAE5BA63677373F03B8B08B135071C9A7 (MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E * __this, const RuntimeMethod* method)
{
	{
		// public virtual float GetDeltaTime() { return (TimescaleMode == TimescaleModes.Scaled) ? Time.deltaTime : Time.unscaledDeltaTime; }
		int32_t L_0;
		L_0 = MMCinemachineZoom_get_TimescaleMode_mAC647CC07C53D080C0D6092F41EB2E670EB344FC_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		float L_1;
		L_1 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84(/*hidden argument*/NULL);
		return L_1;
	}

IL_000e:
	{
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		return L_2;
	}
}
// MoreMountains.Feedbacks.TimescaleModes MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::get_TimescaleMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MMCinemachineZoom_get_TimescaleMode_mAC647CC07C53D080C0D6092F41EB2E670EB344FC (MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E * __this, const RuntimeMethod* method)
{
	{
		// public TimescaleModes TimescaleMode { get; set; }
		int32_t L_0 = __this->get_U3CTimescaleModeU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::set_TimescaleMode(MoreMountains.Feedbacks.TimescaleModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineZoom_set_TimescaleMode_m2819D5DADDE8E654AD62C1FD06122C45DE9FC8E1 (MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TimescaleModes TimescaleMode { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CTimescaleModeU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineZoom_Awake_mCC0AF1FECAC3118BFE422FC4BAA6BA563D7149DA (MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C_m9DCB48A9A82ED7FB1AEB541DE9E97D1A16CE111A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _virtualCamera = this.gameObject.GetComponent<Cinemachine.CinemachineVirtualCamera>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * L_1;
		L_1 = GameObject_GetComponent_TisCinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C_m9DCB48A9A82ED7FB1AEB541DE9E97D1A16CE111A(L_0, /*hidden argument*/GameObject_GetComponent_TisCinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C_m9DCB48A9A82ED7FB1AEB541DE9E97D1A16CE111A_RuntimeMethod_var);
		__this->set__virtualCamera_12(L_1);
		// _initialFieldOfView = _virtualCamera.m_Lens.FieldOfView;
		CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * L_2 = __this->get__virtualCamera_12();
		LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * L_3 = L_2->get_address_of_m_Lens_21();
		float L_4 = L_3->get_FieldOfView_1();
		__this->set__initialFieldOfView_13(L_4);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineZoom_Update_m23AFBF50B6C875F293CE601D65C0E9455903E5FF (MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E * __this, const RuntimeMethod* method)
{
	{
		// if (!_zooming)
		bool L_0 = __this->get__zooming_15();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (_virtualCamera.m_Lens.FieldOfView != _targetFieldOfView)
		CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * L_1 = __this->get__virtualCamera_12();
		LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * L_2 = L_1->get_address_of_m_Lens_21();
		float L_3 = L_2->get_FieldOfView_1();
		float L_4 = __this->get__targetFieldOfView_19();
		if ((((float)L_3) == ((float)L_4)))
		{
			goto IL_006e;
		}
	}
	{
		// _delta += GetDeltaTime() / _transitionDuration;
		float L_5 = __this->get__delta_20();
		float L_6;
		L_6 = VirtFuncInvoker0< float >::Invoke(5 /* System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::GetDeltaTime() */, __this);
		float L_7 = __this->get__transitionDuration_17();
		__this->set__delta_20(((float)il2cpp_codegen_add((float)L_5, (float)((float)((float)L_6/(float)L_7)))));
		// _virtualCamera.m_Lens.FieldOfView = Mathf.LerpUnclamped(_startFieldOfView, _targetFieldOfView, ZoomCurve.Evaluate(_delta));
		CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * L_8 = __this->get__virtualCamera_12();
		LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * L_9 = L_8->get_address_of_m_Lens_21();
		float L_10 = __this->get__startFieldOfView_16();
		float L_11 = __this->get__targetFieldOfView_19();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_12 = __this->get_ZoomCurve_5();
		float L_13 = __this->get__delta_20();
		float L_14;
		L_14 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_12, L_13, /*hidden argument*/NULL);
		float L_15;
		L_15 = Mathf_LerpUnclamped_mF68548D1AA22018863B6EBE911A5F7A959F94C1E(L_10, L_11, L_14, /*hidden argument*/NULL);
		L_9->set_FieldOfView_1(L_15);
		// }
		return;
	}

IL_006e:
	{
		// if (!_destinationReached)
		bool L_16 = __this->get__destinationReached_23();
		if (L_16)
		{
			goto IL_0089;
		}
	}
	{
		// _reachedDestinationTimestamp = GetTime();
		float L_17;
		L_17 = VirtFuncInvoker0< float >::Invoke(4 /* System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::GetTime() */, __this);
		__this->set__reachedDestinationTimestamp_22(L_17);
		// _destinationReached = true;
		__this->set__destinationReached_23((bool)1);
	}

IL_0089:
	{
		// if ((_mode == MMCameraZoomModes.For) && (_direction == 1))
		int32_t L_18 = __this->get__mode_14();
		if (L_18)
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_19 = __this->get__direction_21();
		if ((!(((uint32_t)L_19) == ((uint32_t)1))))
		{
			goto IL_00da;
		}
	}
	{
		// if (GetTime() - _reachedDestinationTimestamp > _duration)
		float L_20;
		L_20 = VirtFuncInvoker0< float >::Invoke(4 /* System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::GetTime() */, __this);
		float L_21 = __this->get__reachedDestinationTimestamp_22();
		float L_22 = __this->get__duration_18();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_20, (float)L_21))) > ((float)L_22))))
		{
			goto IL_00e1;
		}
	}
	{
		// _direction = -1;
		__this->set__direction_21((-1));
		// _startFieldOfView = _targetFieldOfView;
		float L_23 = __this->get__targetFieldOfView_19();
		__this->set__startFieldOfView_16(L_23);
		// _targetFieldOfView = _initialFieldOfView;
		float L_24 = __this->get__initialFieldOfView_13();
		__this->set__targetFieldOfView_19(L_24);
		// _delta = 0f;
		__this->set__delta_20((0.0f));
		// }
		return;
	}

IL_00da:
	{
		// _zooming = false;
		__this->set__zooming_15((bool)0);
	}

IL_00e1:
	{
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::Zoom(MoreMountains.Feedbacks.MMCameraZoomModes,System.Single,System.Single,System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineZoom_Zoom_m7A4CC017DC73C3241A352B36BF18FABC5B956F95 (MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E * __this, int32_t ___mode0, float ___newFieldOfView1, float ___transitionDuration2, float ___duration3, bool ___useUnscaledTime4, bool ___relative5, const RuntimeMethod* method)
{
	MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E * G_B4_0 = NULL;
	MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E * G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E * G_B5_1 = NULL;
	{
		// if (_zooming)
		bool L_0 = __this->get__zooming_15();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _zooming = true;
		__this->set__zooming_15((bool)1);
		// _delta = 0f;
		__this->set__delta_20((0.0f));
		// _mode = mode;
		int32_t L_1 = ___mode0;
		__this->set__mode_14(L_1);
		// TimescaleMode = useUnscaledTime ? TimescaleModes.Unscaled : TimescaleModes.Scaled;
		bool L_2 = ___useUnscaledTime4;
		G_B3_0 = __this;
		if (L_2)
		{
			G_B4_0 = __this;
			goto IL_002a;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		goto IL_002b;
	}

IL_002a:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_002b:
	{
		MMCinemachineZoom_set_TimescaleMode_m2819D5DADDE8E654AD62C1FD06122C45DE9FC8E1_inline(G_B5_1, G_B5_0, /*hidden argument*/NULL);
		// _startFieldOfView = _virtualCamera.m_Lens.FieldOfView;
		CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * L_3 = __this->get__virtualCamera_12();
		LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * L_4 = L_3->get_address_of_m_Lens_21();
		float L_5 = L_4->get_FieldOfView_1();
		__this->set__startFieldOfView_16(L_5);
		// _transitionDuration = transitionDuration;
		float L_6 = ___transitionDuration2;
		__this->set__transitionDuration_17(L_6);
		// _duration = duration;
		float L_7 = ___duration3;
		__this->set__duration_18(L_7);
		// _transitionDuration = transitionDuration;
		float L_8 = ___transitionDuration2;
		__this->set__transitionDuration_17(L_8);
		// _direction = 1;
		__this->set__direction_21(1);
		// _destinationReached = false;
		__this->set__destinationReached_23((bool)0);
		int32_t L_9 = ___mode0;
		switch (L_9)
		{
			case 0:
			{
				goto IL_007e;
			}
			case 1:
			{
				goto IL_0087;
			}
			case 2:
			{
				goto IL_0090;
			}
		}
	}
	{
		goto IL_009c;
	}

IL_007e:
	{
		// _targetFieldOfView = newFieldOfView;
		float L_10 = ___newFieldOfView1;
		__this->set__targetFieldOfView_19(L_10);
		// break;
		goto IL_009c;
	}

IL_0087:
	{
		// _targetFieldOfView = newFieldOfView;
		float L_11 = ___newFieldOfView1;
		__this->set__targetFieldOfView_19(L_11);
		// break;
		goto IL_009c;
	}

IL_0090:
	{
		// _targetFieldOfView = _initialFieldOfView;
		float L_12 = __this->get__initialFieldOfView_13();
		__this->set__targetFieldOfView_19(L_12);
	}

IL_009c:
	{
		// if (relative)
		bool L_13 = ___relative5;
		if (!L_13)
		{
			goto IL_00b3;
		}
	}
	{
		// _targetFieldOfView += _initialFieldOfView;
		float L_14 = __this->get__targetFieldOfView_19();
		float L_15 = __this->get__initialFieldOfView_13();
		__this->set__targetFieldOfView_19(((float)il2cpp_codegen_add((float)L_14, (float)L_15)));
	}

IL_00b3:
	{
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::TestZoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineZoom_TestZoom_mBD495F607453846DDFDEEC93529380059B86DEC5 (MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E * __this, const RuntimeMethod* method)
{
	{
		// Zoom(TestMode, TestFieldOfView, TestTransitionDuration, TestDuration, false);
		int32_t L_0 = __this->get_TestMode_6();
		float L_1 = __this->get_TestFieldOfView_7();
		float L_2 = __this->get_TestTransitionDuration_8();
		float L_3 = __this->get_TestDuration_9();
		VirtActionInvoker6< int32_t, float, float, float, bool, bool >::Invoke(8 /* System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::Zoom(MoreMountains.Feedbacks.MMCameraZoomModes,System.Single,System.Single,System.Single,System.Boolean,System.Boolean) */, __this, L_0, L_1, L_2, L_3, (bool)0, (bool)0);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::OnCameraZoomEvent(MoreMountains.Feedbacks.MMCameraZoomModes,System.Single,System.Single,System.Single,System.Int32,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineZoom_OnCameraZoomEvent_m977D8CE53BF5ED545F7D9A3AB6FEE3C64796EC01 (MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E * __this, int32_t ___mode0, float ___newFieldOfView1, float ___transitionDuration2, float ___duration3, int32_t ___channel4, bool ___useUnscaledTime5, bool ___stop6, bool ___relative7, const RuntimeMethod* method)
{
	{
		// if ((channel != Channel) && (channel != -1) && (Channel != -1))
		int32_t L_0 = ___channel4;
		int32_t L_1 = __this->get_Channel_4();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = ___channel4;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_3 = __this->get_Channel_4();
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0019;
		}
	}
	{
		// return;
		return;
	}

IL_0019:
	{
		// if (stop)
		bool L_4 = ___stop6;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// _zooming = false;
		__this->set__zooming_15((bool)0);
		// return;
		return;
	}

IL_0025:
	{
		// this.Zoom(mode, newFieldOfView, transitionDuration, duration, useUnscaledTime, relative);
		int32_t L_5 = ___mode0;
		float L_6 = ___newFieldOfView1;
		float L_7 = ___transitionDuration2;
		float L_8 = ___duration3;
		bool L_9 = ___useUnscaledTime5;
		bool L_10 = ___relative7;
		VirtActionInvoker6< int32_t, float, float, float, bool, bool >::Invoke(8 /* System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::Zoom(MoreMountains.Feedbacks.MMCameraZoomModes,System.Single,System.Single,System.Single,System.Boolean,System.Boolean) */, __this, L_5, L_6, L_7, L_8, L_9, L_10);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineZoom_OnEnable_mBCA6069936AA59127934FEFA6A88C7557289B88C (MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_tAFFC0495409F3E38D283E26C7E2DF6CDC19DFA62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MMCameraZoomEvent.Register(OnCameraZoomEvent);
		Delegate_tAFFC0495409F3E38D283E26C7E2DF6CDC19DFA62 * L_0 = (Delegate_tAFFC0495409F3E38D283E26C7E2DF6CDC19DFA62 *)il2cpp_codegen_object_new(Delegate_tAFFC0495409F3E38D283E26C7E2DF6CDC19DFA62_il2cpp_TypeInfo_var);
		Delegate__ctor_m7D7D03319B4EF6154F102E5EDFF26711FB51C4AD(L_0, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 10)), /*hidden argument*/NULL);
		MMCameraZoomEvent_Register_m21AF5CFDCCC96D94362DD58129554484A7D738B4(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineZoom_OnDisable_m36F2D0A23888DBEBC96ABA02912472C845351217 (MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_tAFFC0495409F3E38D283E26C7E2DF6CDC19DFA62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MMCameraZoomEvent.Unregister(OnCameraZoomEvent);
		Delegate_tAFFC0495409F3E38D283E26C7E2DF6CDC19DFA62 * L_0 = (Delegate_tAFFC0495409F3E38D283E26C7E2DF6CDC19DFA62 *)il2cpp_codegen_object_new(Delegate_tAFFC0495409F3E38D283E26C7E2DF6CDC19DFA62_il2cpp_TypeInfo_var);
		Delegate__ctor_m7D7D03319B4EF6154F102E5EDFF26711FB51C4AD(L_0, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 10)), /*hidden argument*/NULL);
		MMCameraZoomEvent_Unregister_mB161F83680ED067D665DA91006EE8A92B3083AB0(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineZoom::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineZoom__ctor_m66FF8AB9FDCE93AE9A55B3D76ED39A289822D074 (MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AnimationCurve ZoomCurve = new AnimationCurve(new Keyframe(0f, 0f), new Keyframe(1f, 1f));
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_0 = (KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)SZArrayNew(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_1 = L_0;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_2);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_3 = L_1;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_4), (1.0f), (1.0f), /*hidden argument*/NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_4);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0(L_5, L_3, /*hidden argument*/NULL);
		__this->set_ZoomCurve_5(L_5);
		// public float TestFieldOfView = 30f;
		__this->set_TestFieldOfView_7((30.0f));
		// public float TestTransitionDuration = 0.1f;
		__this->set_TestTransitionDuration_8((0.100000001f));
		// public float TestDuration = 0.05f;
		__this->set_TestDuration_9((0.0500000007f));
		// protected int _direction = 1;
		__this->set__direction_21(1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_CinemachineImpulse::CustomPlayFeedback(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_CinemachineImpulse_CustomPlayFeedback_m6BA637C9C0F4097F93E968FCEBFE2383CE880F00 (MMF_CinemachineImpulse_t8A2AA6B71A96E3CAAE15A2BE6C81A45E3EB27D81 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___feedbacksIntensity1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_CinemachineImpulse_t8A2AA6B71A96E3CAAE15A2BE6C81A45E3EB27D81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral036E2B16FDE5294BC896AB6DC25A9ADF347C8375);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Active || !FeedbackTypeAuthorized)
		bool L_0 = ((MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06 *)__this)->get_Active_0();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MMF_CinemachineImpulse_t8A2AA6B71A96E3CAAE15A2BE6C81A45E3EB27D81_il2cpp_TypeInfo_var);
		bool L_1 = ((MMF_CinemachineImpulse_t8A2AA6B71A96E3CAAE15A2BE6C81A45E3EB27D81_StaticFields*)il2cpp_codegen_static_fields_for(MMF_CinemachineImpulse_t8A2AA6B71A96E3CAAE15A2BE6C81A45E3EB27D81_il2cpp_TypeInfo_var))->get_FeedbackTypeAuthorized_27();
		if (L_1)
		{
			goto IL_0010;
		}
	}

IL_000f:
	{
		// return;
		return;
	}

IL_0010:
	{
		// Debug.LogWarning("Due to a severe bug in the current versions of Cinemachine, this feedback has been disabled. It should be fixed before the end of March 2022, according to Unity. Note that it does still work on 'old' MMFeedbacks, just not on MMF_Player for now. Yes, it's annoying. In the meantime you can use the CinemachineImpulseSource feedback.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral036E2B16FDE5294BC896AB6DC25A9ADF347C8375, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_CinemachineImpulse::CustomStopFeedback(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_CinemachineImpulse_CustomStopFeedback_m0877C81FDFA9CF8885B1C1D2B912940CC8A30D33 (MMF_CinemachineImpulse_t8A2AA6B71A96E3CAAE15A2BE6C81A45E3EB27D81 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___feedbacksIntensity1, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_CinemachineImpulse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_CinemachineImpulse__ctor_m01CB5E1A876BB66D8DD354105813A638E7358019 (MMF_CinemachineImpulse_t8A2AA6B71A96E3CAAE15A2BE6C81A45E3EB27D81 * __this, const RuntimeMethod* method)
{
	{
		MMF_Feedback__ctor_m901961F21A4EC9B633D04730A4AC6455E87F66EB(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_CinemachineImpulse::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_CinemachineImpulse__cctor_mBB2653CC02D4E6CF2358F93A35B72C25B01FDCE1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_CinemachineImpulse_t8A2AA6B71A96E3CAAE15A2BE6C81A45E3EB27D81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool FeedbackTypeAuthorized = true;
		((MMF_CinemachineImpulse_t8A2AA6B71A96E3CAAE15A2BE6C81A45E3EB27D81_StaticFields*)il2cpp_codegen_static_fields_for(MMF_CinemachineImpulse_t8A2AA6B71A96E3CAAE15A2BE6C81A45E3EB27D81_il2cpp_TypeInfo_var))->set_FeedbackTypeAuthorized_27((bool)1);
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
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_CinemachineImpulseClear::CustomPlayFeedback(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_CinemachineImpulseClear_CustomPlayFeedback_mC1146CADECD7614BFB6767553F1104C20552FFB7 (MMF_CinemachineImpulseClear_tEABDB041B5FEE1FDA7AC572C757F417307CADD6B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___feedbacksIntensity1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_CinemachineImpulseClear_tEABDB041B5FEE1FDA7AC572C757F417307CADD6B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Active || !FeedbackTypeAuthorized)
		bool L_0 = ((MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06 *)__this)->get_Active_0();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MMF_CinemachineImpulseClear_tEABDB041B5FEE1FDA7AC572C757F417307CADD6B_il2cpp_TypeInfo_var);
		bool L_1 = ((MMF_CinemachineImpulseClear_tEABDB041B5FEE1FDA7AC572C757F417307CADD6B_StaticFields*)il2cpp_codegen_static_fields_for(MMF_CinemachineImpulseClear_tEABDB041B5FEE1FDA7AC572C757F417307CADD6B_il2cpp_TypeInfo_var))->get_FeedbackTypeAuthorized_27();
		if (L_1)
		{
			goto IL_0010;
		}
	}

IL_000f:
	{
		// return;
		return;
	}

IL_0010:
	{
		// CinemachineImpulseManager.Instance.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E_il2cpp_TypeInfo_var);
		CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E * L_2;
		L_2 = CinemachineImpulseManager_get_Instance_m2610081DC5D98082D240CE3FD7C6C6CEAE571DE4(/*hidden argument*/NULL);
		CinemachineImpulseManager_Clear_mA812D41CE685AADD048C6257BBC2EF82F0022F13(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_CinemachineImpulseClear::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_CinemachineImpulseClear__ctor_m2E47CF1258DC484F8C09D9D899F408F13ECB9D80 (MMF_CinemachineImpulseClear_tEABDB041B5FEE1FDA7AC572C757F417307CADD6B * __this, const RuntimeMethod* method)
{
	{
		MMF_Feedback__ctor_m901961F21A4EC9B633D04730A4AC6455E87F66EB(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_CinemachineImpulseClear::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_CinemachineImpulseClear__cctor_m3E56E627A4EEBCABC4346636D58CDAD6EB968625 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_CinemachineImpulseClear_tEABDB041B5FEE1FDA7AC572C757F417307CADD6B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool FeedbackTypeAuthorized = true;
		((MMF_CinemachineImpulseClear_tEABDB041B5FEE1FDA7AC572C757F417307CADD6B_StaticFields*)il2cpp_codegen_static_fields_for(MMF_CinemachineImpulseClear_tEABDB041B5FEE1FDA7AC572C757F417307CADD6B_il2cpp_TypeInfo_var))->set_FeedbackTypeAuthorized_27((bool)1);
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
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_CinemachineImpulseSource::CustomPlayFeedback(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_CinemachineImpulseSource_CustomPlayFeedback_mDEEA2DDA8F79D5AA8F48489EB153A3258F48A645 (MMF_CinemachineImpulseSource_t4F9673C229F72504229F2649DC2C1B2354C645D2 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___feedbacksIntensity1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_CinemachineImpulseSource_t4F9673C229F72504229F2649DC2C1B2354C645D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Active || !FeedbackTypeAuthorized)
		bool L_0 = ((MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06 *)__this)->get_Active_0();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MMF_CinemachineImpulseSource_t4F9673C229F72504229F2649DC2C1B2354C645D2_il2cpp_TypeInfo_var);
		bool L_1 = ((MMF_CinemachineImpulseSource_t4F9673C229F72504229F2649DC2C1B2354C645D2_StaticFields*)il2cpp_codegen_static_fields_for(MMF_CinemachineImpulseSource_t4F9673C229F72504229F2649DC2C1B2354C645D2_il2cpp_TypeInfo_var))->get_FeedbackTypeAuthorized_27();
		if (L_1)
		{
			goto IL_0010;
		}
	}

IL_000f:
	{
		// return;
		return;
	}

IL_0010:
	{
		// if (ImpulseSource != null)
		CinemachineImpulseSource_t7EFCA284734A8CB50F0B45CDDF6BB924DA73998D * L_2 = __this->get_ImpulseSource_28();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// ImpulseSource.GenerateImpulse(Velocity);
		CinemachineImpulseSource_t7EFCA284734A8CB50F0B45CDDF6BB924DA73998D * L_4 = __this->get_ImpulseSource_28();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = __this->get_Velocity_29();
		CinemachineImpulseSource_GenerateImpulse_mA0BA98729D31DAA4489F8A795460312C6AC987A0(L_4, L_5, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_CinemachineImpulseSource::CustomStopFeedback(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_CinemachineImpulseSource_CustomStopFeedback_m6AD6843F232722A590BE7EAE59544CCBC837E76F (MMF_CinemachineImpulseSource_t4F9673C229F72504229F2649DC2C1B2354C645D2 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___feedbacksIntensity1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_CinemachineImpulseSource_t4F9673C229F72504229F2649DC2C1B2354C645D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Active || !FeedbackTypeAuthorized || !ClearImpulseOnStop)
		bool L_0 = ((MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06 *)__this)->get_Active_0();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MMF_CinemachineImpulseSource_t4F9673C229F72504229F2649DC2C1B2354C645D2_il2cpp_TypeInfo_var);
		bool L_1 = ((MMF_CinemachineImpulseSource_t4F9673C229F72504229F2649DC2C1B2354C645D2_StaticFields*)il2cpp_codegen_static_fields_for(MMF_CinemachineImpulseSource_t4F9673C229F72504229F2649DC2C1B2354C645D2_il2cpp_TypeInfo_var))->get_FeedbackTypeAuthorized_27();
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		bool L_2 = __this->get_ClearImpulseOnStop_30();
		if (L_2)
		{
			goto IL_0018;
		}
	}

IL_0017:
	{
		// return;
		return;
	}

IL_0018:
	{
		// base.CustomStopFeedback(position, feedbacksIntensity);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___position0;
		float L_4 = ___feedbacksIntensity1;
		MMF_Feedback_CustomStopFeedback_m748D8AA210D0D37728D866535F4146A5D33436C6(__this, L_3, L_4, /*hidden argument*/NULL);
		// CinemachineImpulseManager.Instance.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E_il2cpp_TypeInfo_var);
		CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E * L_5;
		L_5 = CinemachineImpulseManager_get_Instance_m2610081DC5D98082D240CE3FD7C6C6CEAE571DE4(/*hidden argument*/NULL);
		CinemachineImpulseManager_Clear_mA812D41CE685AADD048C6257BBC2EF82F0022F13(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_CinemachineImpulseSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_CinemachineImpulseSource__ctor_mBE8E0564E17AB72881B61623FD3C920E2A6E6F50 (MMF_CinemachineImpulseSource_t4F9673C229F72504229F2649DC2C1B2354C645D2 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Velocity = new Vector3(1f,1f,1f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_Velocity_29(L_0);
		MMF_Feedback__ctor_m901961F21A4EC9B633D04730A4AC6455E87F66EB(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_CinemachineImpulseSource::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_CinemachineImpulseSource__cctor_m7C38E3E4BCBE1EB5285C6E677615BCDBCCDE0C3D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_CinemachineImpulseSource_t4F9673C229F72504229F2649DC2C1B2354C645D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool FeedbackTypeAuthorized = true;
		((MMF_CinemachineImpulseSource_t4F9673C229F72504229F2649DC2C1B2354C645D2_StaticFields*)il2cpp_codegen_static_fields_for(MMF_CinemachineImpulseSource_t4F9673C229F72504229F2649DC2C1B2354C645D2_il2cpp_TypeInfo_var))->set_FeedbackTypeAuthorized_27((bool)1);
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
// System.Single MoreMountains.FeedbacksForThirdParty.MMF_CinemachineTransition::get_FeedbackDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMF_CinemachineTransition_get_FeedbackDuration_mBEE33092CE7A7EB012960CD41F7B106CCB2A0140 (MMF_CinemachineTransition_t42B21AC879EC6A99B2D1F828D0B797E1B93F990C * __this, const RuntimeMethod* method)
{
	{
		// public override float FeedbackDuration { get { return ApplyTimeMultiplier(BlendDefintion.m_Time); } set { BlendDefintion.m_Time = value; } }
		CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE * L_0 = __this->get_address_of_BlendDefintion_34();
		float L_1 = L_0->get_m_Time_1();
		float L_2;
		L_2 = VirtFuncInvoker1< float, float >::Invoke(43 /* System.Single MoreMountains.Feedbacks.MMF_Feedback::ApplyTimeMultiplier(System.Single) */, __this, L_1);
		return L_2;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_CinemachineTransition::set_FeedbackDuration(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_CinemachineTransition_set_FeedbackDuration_m39C7FFCFAE8FEA30B3E56F9614B5B5A241903BBC (MMF_CinemachineTransition_t42B21AC879EC6A99B2D1F828D0B797E1B93F990C * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public override float FeedbackDuration { get { return ApplyTimeMultiplier(BlendDefintion.m_Time); } set { BlendDefintion.m_Time = value; } }
		CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE * L_0 = __this->get_address_of_BlendDefintion_34();
		float L_1 = ___value0;
		L_0->set_m_Time_1(L_1);
		// public override float FeedbackDuration { get { return ApplyTimeMultiplier(BlendDefintion.m_Time); } set { BlendDefintion.m_Time = value; } }
		return;
	}
}
// System.Boolean MoreMountains.FeedbacksForThirdParty.MMF_CinemachineTransition::get_HasChannel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MMF_CinemachineTransition_get_HasChannel_mC292EEFAE4A4715381CDAF45EDD3F58EE8B1F350 (MMF_CinemachineTransition_t42B21AC879EC6A99B2D1F828D0B797E1B93F990C * __this, const RuntimeMethod* method)
{
	{
		// public override bool HasChannel => true;
		return (bool)1;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_CinemachineTransition::CustomPlayFeedback(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_CinemachineTransition_CustomPlayFeedback_mAB3DDFF7995EC079D36FD49DA5062DF9D0F13C11 (MMF_CinemachineTransition_t42B21AC879EC6A99B2D1F828D0B797E1B93F990C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___feedbacksIntensity1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_CinemachineTransition_t42B21AC879EC6A99B2D1F828D0B797E1B93F990C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Active || !FeedbackTypeAuthorized)
		bool L_0 = ((MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06 *)__this)->get_Active_0();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MMF_CinemachineTransition_t42B21AC879EC6A99B2D1F828D0B797E1B93F990C_il2cpp_TypeInfo_var);
		bool L_1 = ((MMF_CinemachineTransition_t42B21AC879EC6A99B2D1F828D0B797E1B93F990C_StaticFields*)il2cpp_codegen_static_fields_for(MMF_CinemachineTransition_t42B21AC879EC6A99B2D1F828D0B797E1B93F990C_il2cpp_TypeInfo_var))->get_FeedbackTypeAuthorized_27();
		if (L_1)
		{
			goto IL_0010;
		}
	}

IL_000f:
	{
		// return;
		return;
	}

IL_0010:
	{
		// _tempBlend = BlendDefintion;
		CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  L_2 = __this->get_BlendDefintion_34();
		__this->set__tempBlend_35(L_2);
		// _tempBlend.m_Time = FeedbackDuration;
		CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE * L_3 = __this->get_address_of__tempBlend_35();
		float L_4;
		L_4 = VirtFuncInvoker0< float >::Invoke(26 /* System.Single MoreMountains.Feedbacks.MMF_Feedback::get_FeedbackDuration() */, __this);
		L_3->set_m_Time_1(L_4);
		// if (Mode == Modes.Event)
		int32_t L_5 = __this->get_Mode_28();
		if (L_5)
		{
			goto IL_006a;
		}
	}
	{
		// MMCinemachinePriorityEvent.Trigger(Channel, ForceMaxPriority, NewPriority, ForceTransition, _tempBlend, ResetValuesAfterTransition, Timing.TimescaleMode);
		int32_t L_6 = ((MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06 *)__this)->get_Channel_3();
		bool L_7 = __this->get_ForceMaxPriority_32();
		int32_t L_8 = __this->get_NewPriority_31();
		bool L_9 = __this->get_ForceTransition_33();
		CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  L_10 = __this->get__tempBlend_35();
		bool L_11 = __this->get_ResetValuesAfterTransition_30();
		MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6 * L_12 = ((MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06 *)__this)->get_Timing_6();
		int32_t L_13 = L_12->get_TimescaleMode_0();
		MMCinemachinePriorityEvent_Trigger_m49FA8806561196FEB583CF4EA38C85949F21FC42(L_6, L_7, L_8, L_9, L_10, L_11, L_13, /*hidden argument*/NULL);
		// }
		return;
	}

IL_006a:
	{
		// MMCinemachinePriorityEvent.Trigger(Channel, ForceMaxPriority, 0, ForceTransition, _tempBlend, ResetValuesAfterTransition, Timing.TimescaleMode);
		int32_t L_14 = ((MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06 *)__this)->get_Channel_3();
		bool L_15 = __this->get_ForceMaxPriority_32();
		bool L_16 = __this->get_ForceTransition_33();
		CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  L_17 = __this->get__tempBlend_35();
		bool L_18 = __this->get_ResetValuesAfterTransition_30();
		MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6 * L_19 = ((MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06 *)__this)->get_Timing_6();
		int32_t L_20 = L_19->get_TimescaleMode_0();
		MMCinemachinePriorityEvent_Trigger_m49FA8806561196FEB583CF4EA38C85949F21FC42(L_14, L_15, 0, L_16, L_17, L_18, L_20, /*hidden argument*/NULL);
		// TargetVirtualCamera.Priority = NewPriority;
		CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * L_21 = __this->get_TargetVirtualCamera_29();
		int32_t L_22 = __this->get_NewPriority_31();
		CinemachineVirtualCameraBase_set_Priority_m6C180B742F19E669D648B6D1BE4D9D9C5824962B_inline(L_21, L_22, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_CinemachineTransition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_CinemachineTransition__ctor_mCAFF4FB09BA4CB1D2D062575EA4A2FD68ACA7B66 (MMF_CinemachineTransition_t42B21AC879EC6A99B2D1F828D0B797E1B93F990C * __this, const RuntimeMethod* method)
{
	{
		// public bool ResetValuesAfterTransition = true;
		__this->set_ResetValuesAfterTransition_30((bool)1);
		// public int NewPriority = 10;
		__this->set_NewPriority_31(((int32_t)10));
		// public bool ForceMaxPriority = true;
		__this->set_ForceMaxPriority_32((bool)1);
		MMF_Feedback__ctor_m901961F21A4EC9B633D04730A4AC6455E87F66EB(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_CinemachineTransition::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_CinemachineTransition__cctor_m296355ECA6A6EA0C96A57E5C80DBE38E15C6F02E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_CinemachineTransition_t42B21AC879EC6A99B2D1F828D0B797E1B93F990C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool FeedbackTypeAuthorized = true;
		((MMF_CinemachineTransition_t42B21AC879EC6A99B2D1F828D0B797E1B93F990C_StaticFields*)il2cpp_codegen_static_fields_for(MMF_CinemachineTransition_t42B21AC879EC6A99B2D1F828D0B797E1B93F990C_il2cpp_TypeInfo_var))->set_FeedbackTypeAuthorized_27((bool)1);
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
// System.Single MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineImpulse::get_FeedbackDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMFeedbackCinemachineImpulse_get_FeedbackDuration_m4279E39606858484EA97F1A2940FCF83E7173334 (MMFeedbackCinemachineImpulse_tD470D5F859B2CA5DCA02D467D6AEAA11D468DABB * __this, const RuntimeMethod* method)
{
	{
		// public override float FeedbackDuration { get { return m_ImpulseDefinition.m_TimeEnvelope.Duration; } }
		CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9 * L_0 = __this->get_m_ImpulseDefinition_29();
		EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 * L_1 = L_0->get_address_of_m_TimeEnvelope_6();
		float L_2;
		L_2 = EnvelopeDefinition_get_Duration_m494621ABECC584E355834D287BEA915BD68A774F((EnvelopeDefinition_t9EF1466C34242423E6EB2E47340E358A6CEEDAF7 *)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineImpulse::CustomPlayFeedback(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackCinemachineImpulse_CustomPlayFeedback_m426BEF234A1B76D6D03C0D240401ACBCDA9A1B7A (MMFeedbackCinemachineImpulse_tD470D5F859B2CA5DCA02D467D6AEAA11D468DABB * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___feedbacksIntensity1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMFeedbackCinemachineImpulse_tD470D5F859B2CA5DCA02D467D6AEAA11D468DABB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float G_B6_0 = 0.0f;
	{
		// if (!Active || !FeedbackTypeAuthorized)
		bool L_0 = ((MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4 *)__this)->get_Active_4();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MMFeedbackCinemachineImpulse_tD470D5F859B2CA5DCA02D467D6AEAA11D468DABB_il2cpp_TypeInfo_var);
		bool L_1 = ((MMFeedbackCinemachineImpulse_tD470D5F859B2CA5DCA02D467D6AEAA11D468DABB_StaticFields*)il2cpp_codegen_static_fields_for(MMFeedbackCinemachineImpulse_tD470D5F859B2CA5DCA02D467D6AEAA11D468DABB_il2cpp_TypeInfo_var))->get_FeedbackTypeAuthorized_28();
		if (L_1)
		{
			goto IL_0010;
		}
	}

IL_000f:
	{
		// return;
		return;
	}

IL_0010:
	{
		// CinemachineImpulseManager.Instance.IgnoreTimeScale = (Timing.TimescaleMode == TimescaleModes.Unscaled);
		IL2CPP_RUNTIME_CLASS_INIT(CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E_il2cpp_TypeInfo_var);
		CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E * L_2;
		L_2 = CinemachineImpulseManager_get_Instance_m2610081DC5D98082D240CE3FD7C6C6CEAE571DE4(/*hidden argument*/NULL);
		MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6 * L_3 = ((MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4 *)__this)->get_Timing_7();
		int32_t L_4 = L_3->get_TimescaleMode_0();
		CinemachineImpulseManager_set_IgnoreTimeScale_m734F8037EA5DDBAFEFE2AE02FE1AC87AD5FD333F_inline(L_2, (bool)((((int32_t)L_4) == ((int32_t)1))? 1 : 0), /*hidden argument*/NULL);
		// float intensityMultiplier = Timing.ConstantIntensity ? 1f : feedbacksIntensity;
		MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6 * L_5 = ((MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4 *)__this)->get_Timing_7();
		bool L_6 = L_5->get_ConstantIntensity_11();
		if (L_6)
		{
			goto IL_0038;
		}
	}
	{
		float L_7 = ___feedbacksIntensity1;
		G_B6_0 = L_7;
		goto IL_003d;
	}

IL_0038:
	{
		G_B6_0 = (1.0f);
	}

IL_003d:
	{
		V_0 = G_B6_0;
		// m_ImpulseDefinition.CreateEvent(position, Velocity * intensityMultiplier);
		CinemachineImpulseDefinition_t82ACCD6244BCBD6D54F08129D7A9259D3E510EF9 * L_8 = __this->get_m_ImpulseDefinition_29();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___position0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = __this->get_Velocity_30();
		float L_11 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_10, L_11, /*hidden argument*/NULL);
		CinemachineImpulseDefinition_CreateEvent_m4321107CAE385B5FB027FBFF5DD5B7D5B034C783(L_8, L_9, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineImpulse::CustomStopFeedback(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackCinemachineImpulse_CustomStopFeedback_m2DF25CF3B89F623DE2A902907544A94D1AAC7041 (MMFeedbackCinemachineImpulse_tD470D5F859B2CA5DCA02D467D6AEAA11D468DABB * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___feedbacksIntensity1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMFeedbackCinemachineImpulse_tD470D5F859B2CA5DCA02D467D6AEAA11D468DABB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Active || !FeedbackTypeAuthorized || !ClearImpulseOnStop)
		bool L_0 = ((MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4 *)__this)->get_Active_4();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MMFeedbackCinemachineImpulse_tD470D5F859B2CA5DCA02D467D6AEAA11D468DABB_il2cpp_TypeInfo_var);
		bool L_1 = ((MMFeedbackCinemachineImpulse_tD470D5F859B2CA5DCA02D467D6AEAA11D468DABB_StaticFields*)il2cpp_codegen_static_fields_for(MMFeedbackCinemachineImpulse_tD470D5F859B2CA5DCA02D467D6AEAA11D468DABB_il2cpp_TypeInfo_var))->get_FeedbackTypeAuthorized_28();
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		bool L_2 = __this->get_ClearImpulseOnStop_31();
		if (L_2)
		{
			goto IL_0018;
		}
	}

IL_0017:
	{
		// return;
		return;
	}

IL_0018:
	{
		// base.CustomStopFeedback(position, feedbacksIntensity);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___position0;
		float L_4 = ___feedbacksIntensity1;
		MMFeedback_CustomStopFeedback_m637BE3F6114F85830A2E7073DEEF05B95CA79A83(__this, L_3, L_4, /*hidden argument*/NULL);
		// CinemachineImpulseManager.Instance.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E_il2cpp_TypeInfo_var);
		CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E * L_5;
		L_5 = CinemachineImpulseManager_get_Instance_m2610081DC5D98082D240CE3FD7C6C6CEAE571DE4(/*hidden argument*/NULL);
		CinemachineImpulseManager_Clear_mA812D41CE685AADD048C6257BBC2EF82F0022F13(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineImpulse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackCinemachineImpulse__ctor_m241DBA6A878B7A39366CBA68163883B02A984E77 (MMFeedbackCinemachineImpulse_tD470D5F859B2CA5DCA02D467D6AEAA11D468DABB * __this, const RuntimeMethod* method)
{
	{
		MMFeedback__ctor_m3A0FE0C8FEDD2D759EC31C4432C65DBD4B1A06A0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineImpulse::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackCinemachineImpulse__cctor_m3CCB3337B7A25C2139642FA6CE976112624983EB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMFeedbackCinemachineImpulse_tD470D5F859B2CA5DCA02D467D6AEAA11D468DABB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool FeedbackTypeAuthorized = true;
		((MMFeedbackCinemachineImpulse_tD470D5F859B2CA5DCA02D467D6AEAA11D468DABB_StaticFields*)il2cpp_codegen_static_fields_for(MMFeedbackCinemachineImpulse_tD470D5F859B2CA5DCA02D467D6AEAA11D468DABB_il2cpp_TypeInfo_var))->set_FeedbackTypeAuthorized_28((bool)1);
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
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineImpulseClear::CustomPlayFeedback(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackCinemachineImpulseClear_CustomPlayFeedback_m48EEA3DA37264D03FEDEB029651EC253B9EB55AC (MMFeedbackCinemachineImpulseClear_t874A01EE0274A6972291FFAF467F60ED3AEE47D2 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___feedbacksIntensity1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMFeedbackCinemachineImpulseClear_t874A01EE0274A6972291FFAF467F60ED3AEE47D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Active || !FeedbackTypeAuthorized)
		bool L_0 = ((MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4 *)__this)->get_Active_4();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MMFeedbackCinemachineImpulseClear_t874A01EE0274A6972291FFAF467F60ED3AEE47D2_il2cpp_TypeInfo_var);
		bool L_1 = ((MMFeedbackCinemachineImpulseClear_t874A01EE0274A6972291FFAF467F60ED3AEE47D2_StaticFields*)il2cpp_codegen_static_fields_for(MMFeedbackCinemachineImpulseClear_t874A01EE0274A6972291FFAF467F60ED3AEE47D2_il2cpp_TypeInfo_var))->get_FeedbackTypeAuthorized_28();
		if (L_1)
		{
			goto IL_0010;
		}
	}

IL_000f:
	{
		// return;
		return;
	}

IL_0010:
	{
		// CinemachineImpulseManager.Instance.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E_il2cpp_TypeInfo_var);
		CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E * L_2;
		L_2 = CinemachineImpulseManager_get_Instance_m2610081DC5D98082D240CE3FD7C6C6CEAE571DE4(/*hidden argument*/NULL);
		CinemachineImpulseManager_Clear_mA812D41CE685AADD048C6257BBC2EF82F0022F13(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineImpulseClear::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackCinemachineImpulseClear__ctor_mCD4578807898D042E8667D8EBA84AC139FF0D41E (MMFeedbackCinemachineImpulseClear_t874A01EE0274A6972291FFAF467F60ED3AEE47D2 * __this, const RuntimeMethod* method)
{
	{
		MMFeedback__ctor_m3A0FE0C8FEDD2D759EC31C4432C65DBD4B1A06A0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineImpulseClear::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackCinemachineImpulseClear__cctor_m7861C870283E8CCFA1CF2C7A9C0D5CB8CD122BC5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMFeedbackCinemachineImpulseClear_t874A01EE0274A6972291FFAF467F60ED3AEE47D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool FeedbackTypeAuthorized = true;
		((MMFeedbackCinemachineImpulseClear_t874A01EE0274A6972291FFAF467F60ED3AEE47D2_StaticFields*)il2cpp_codegen_static_fields_for(MMFeedbackCinemachineImpulseClear_t874A01EE0274A6972291FFAF467F60ED3AEE47D2_il2cpp_TypeInfo_var))->set_FeedbackTypeAuthorized_28((bool)1);
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
// System.Single MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineTransition::get_FeedbackDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMFeedbackCinemachineTransition_get_FeedbackDuration_mEE30DCD4FDF19FE107BB91A63F53A05AC134B889 (MMFeedbackCinemachineTransition_t6E131DC172B147B08C96B3ED6F9EF19A99E70A5B * __this, const RuntimeMethod* method)
{
	{
		// public override float FeedbackDuration { get { return ApplyTimeMultiplier(BlendDefintion.m_Time); } set { BlendDefintion.m_Time = value; } }
		CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE * L_0 = __this->get_address_of_BlendDefintion_36();
		float L_1 = L_0->get_m_Time_1();
		float L_2;
		L_2 = VirtFuncInvoker1< float, float >::Invoke(36 /* System.Single MoreMountains.Feedbacks.MMFeedback::ApplyTimeMultiplier(System.Single) */, __this, L_1);
		return L_2;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineTransition::set_FeedbackDuration(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackCinemachineTransition_set_FeedbackDuration_m57C1D9A824E11A9DF9FDE9C758C9ED027ED92056 (MMFeedbackCinemachineTransition_t6E131DC172B147B08C96B3ED6F9EF19A99E70A5B * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public override float FeedbackDuration { get { return ApplyTimeMultiplier(BlendDefintion.m_Time); } set { BlendDefintion.m_Time = value; } }
		CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE * L_0 = __this->get_address_of_BlendDefintion_36();
		float L_1 = ___value0;
		L_0->set_m_Time_1(L_1);
		// public override float FeedbackDuration { get { return ApplyTimeMultiplier(BlendDefintion.m_Time); } set { BlendDefintion.m_Time = value; } }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineTransition::CustomPlayFeedback(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackCinemachineTransition_CustomPlayFeedback_m1194E252B3A43A0BFE7872C0D6673448DF462E37 (MMFeedbackCinemachineTransition_t6E131DC172B147B08C96B3ED6F9EF19A99E70A5B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___feedbacksIntensity1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMFeedbackCinemachineTransition_t6E131DC172B147B08C96B3ED6F9EF19A99E70A5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Active || !FeedbackTypeAuthorized)
		bool L_0 = ((MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4 *)__this)->get_Active_4();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MMFeedbackCinemachineTransition_t6E131DC172B147B08C96B3ED6F9EF19A99E70A5B_il2cpp_TypeInfo_var);
		bool L_1 = ((MMFeedbackCinemachineTransition_t6E131DC172B147B08C96B3ED6F9EF19A99E70A5B_StaticFields*)il2cpp_codegen_static_fields_for(MMFeedbackCinemachineTransition_t6E131DC172B147B08C96B3ED6F9EF19A99E70A5B_il2cpp_TypeInfo_var))->get_FeedbackTypeAuthorized_28();
		if (L_1)
		{
			goto IL_0010;
		}
	}

IL_000f:
	{
		// return;
		return;
	}

IL_0010:
	{
		// _tempBlend = BlendDefintion;
		CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  L_2 = __this->get_BlendDefintion_36();
		__this->set__tempBlend_37(L_2);
		// _tempBlend.m_Time = FeedbackDuration;
		CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE * L_3 = __this->get_address_of__tempBlend_37();
		float L_4;
		L_4 = VirtFuncInvoker0< float >::Invoke(16 /* System.Single MoreMountains.Feedbacks.MMFeedback::get_FeedbackDuration() */, __this);
		L_3->set_m_Time_1(L_4);
		// if (Mode == Modes.Event)
		int32_t L_5 = __this->get_Mode_29();
		if (L_5)
		{
			goto IL_006a;
		}
	}
	{
		// MMCinemachinePriorityEvent.Trigger(Channel, ForceMaxPriority, NewPriority, ForceTransition, _tempBlend, ResetValuesAfterTransition, Timing.TimescaleMode);
		int32_t L_6 = __this->get_Channel_30();
		bool L_7 = __this->get_ForceMaxPriority_34();
		int32_t L_8 = __this->get_NewPriority_33();
		bool L_9 = __this->get_ForceTransition_35();
		CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  L_10 = __this->get__tempBlend_37();
		bool L_11 = __this->get_ResetValuesAfterTransition_32();
		MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6 * L_12 = ((MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4 *)__this)->get_Timing_7();
		int32_t L_13 = L_12->get_TimescaleMode_0();
		MMCinemachinePriorityEvent_Trigger_m49FA8806561196FEB583CF4EA38C85949F21FC42(L_6, L_7, L_8, L_9, L_10, L_11, L_13, /*hidden argument*/NULL);
		// }
		return;
	}

IL_006a:
	{
		// MMCinemachinePriorityEvent.Trigger(Channel, ForceMaxPriority, 0, ForceTransition, _tempBlend, ResetValuesAfterTransition, Timing.TimescaleMode);
		int32_t L_14 = __this->get_Channel_30();
		bool L_15 = __this->get_ForceMaxPriority_34();
		bool L_16 = __this->get_ForceTransition_35();
		CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  L_17 = __this->get__tempBlend_37();
		bool L_18 = __this->get_ResetValuesAfterTransition_32();
		MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6 * L_19 = ((MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4 *)__this)->get_Timing_7();
		int32_t L_20 = L_19->get_TimescaleMode_0();
		MMCinemachinePriorityEvent_Trigger_m49FA8806561196FEB583CF4EA38C85949F21FC42(L_14, L_15, 0, L_16, L_17, L_18, L_20, /*hidden argument*/NULL);
		// TargetVirtualCamera.Priority = NewPriority;
		CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * L_21 = __this->get_TargetVirtualCamera_31();
		int32_t L_22 = __this->get_NewPriority_33();
		CinemachineVirtualCameraBase_set_Priority_m6C180B742F19E669D648B6D1BE4D9D9C5824962B_inline(L_21, L_22, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineTransition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackCinemachineTransition__ctor_mF1294410908DCA8AB1291B8DF281B4D968A0C8A4 (MMFeedbackCinemachineTransition_t6E131DC172B147B08C96B3ED6F9EF19A99E70A5B * __this, const RuntimeMethod* method)
{
	{
		// public bool ResetValuesAfterTransition = true;
		__this->set_ResetValuesAfterTransition_32((bool)1);
		// public int NewPriority = 10;
		__this->set_NewPriority_33(((int32_t)10));
		// public bool ForceMaxPriority = true;
		__this->set_ForceMaxPriority_34((bool)1);
		MMFeedback__ctor_m3A0FE0C8FEDD2D759EC31C4432C65DBD4B1A06A0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackCinemachineTransition::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackCinemachineTransition__cctor_mA3D3DA277377A763072C58B049E6E2112A118167 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMFeedbackCinemachineTransition_t6E131DC172B147B08C96B3ED6F9EF19A99E70A5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool FeedbackTypeAuthorized = true;
		((MMFeedbackCinemachineTransition_t6E131DC172B147B08C96B3ED6F9EF19A99E70A5B_StaticFields*)il2cpp_codegen_static_fields_for(MMFeedbackCinemachineTransition_t6E131DC172B147B08C96B3ED6F9EF19A99E70A5B_il2cpp_TypeInfo_var))->set_FeedbackTypeAuthorized_28((bool)1);
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
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker/<ShakeCameraCo>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeCameraCoU3Ed__25__ctor_m6C7CF4DA0483CE7C5A9264CBBAB13043CB28D6D7 (U3CShakeCameraCoU3Ed__25_tE09D4113AE143A7E3D05BC37395FC0E64132AD08 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker/<ShakeCameraCo>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeCameraCoU3Ed__25_System_IDisposable_Dispose_m36CD479C49C04C79F9F18B9DD245A70272985BC9 (U3CShakeCameraCoU3Ed__25_tE09D4113AE143A7E3D05BC37395FC0E64132AD08 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker/<ShakeCameraCo>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShakeCameraCoU3Ed__25_MoveNext_mD7878D508EC857925D0DF478C4A78D702C231429 (U3CShakeCameraCoU3Ed__25_tE09D4113AE143A7E3D05BC37395FC0E64132AD08 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163 * V_1 = NULL;
	MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163 * G_B5_0 = NULL;
	MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163 * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163 * G_B6_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_006a;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// _targetAmplitude  = amplitude;
		MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163 * L_4 = V_1;
		float L_5 = __this->get_amplitude_3();
		L_4->set__targetAmplitude_19(L_5);
		// _targetFrequency = frequency;
		MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163 * L_6 = V_1;
		float L_7 = __this->get_frequency_4();
		L_6->set__targetFrequency_20(L_7);
		// _timescaleMode = useUnscaledTime ? TimescaleModes.Unscaled : TimescaleModes.Scaled;
		MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163 * L_8 = V_1;
		bool L_9 = __this->get_useUnscaledTime_5();
		G_B4_0 = L_8;
		if (L_9)
		{
			G_B5_0 = L_8;
			goto IL_0042;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0043;
	}

IL_0042:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0043:
	{
		G_B6_1->set__timescaleMode_14(G_B6_0);
		// if (!infinite)
		bool L_10 = __this->get_infinite_6();
		if (L_10)
		{
			goto IL_0077;
		}
	}
	{
		// yield return new WaitForSeconds(duration);
		float L_11 = __this->get_duration_7();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_12 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_12, L_11, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_12);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_006a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// CameraReset();
		MMCinemachineCameraShaker_t2ADB64CA94444BE96F2E45A0049B2FD817271163 * L_13 = V_1;
		VirtActionInvoker0::Invoke(12 /* System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker::CameraReset() */, L_13);
	}

IL_0077:
	{
		// }
		return (bool)0;
	}
}
// System.Object MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker/<ShakeCameraCo>d__25::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShakeCameraCoU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3D88233502930B622A883D376CC0FF8504373295 (U3CShakeCameraCoU3Ed__25_tE09D4113AE143A7E3D05BC37395FC0E64132AD08 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker/<ShakeCameraCo>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeCameraCoU3Ed__25_System_Collections_IEnumerator_Reset_m95654D72F0098D7226D2B645840553EDF1BBC89C (U3CShakeCameraCoU3Ed__25_tE09D4113AE143A7E3D05BC37395FC0E64132AD08 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShakeCameraCoU3Ed__25_System_Collections_IEnumerator_Reset_m95654D72F0098D7226D2B645840553EDF1BBC89C_RuntimeMethod_var)));
	}
}
// System.Object MoreMountains.FeedbacksForThirdParty.MMCinemachineCameraShaker/<ShakeCameraCo>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShakeCameraCoU3Ed__25_System_Collections_IEnumerator_get_Current_m579A4D8FE455334FDC41BCDDB00C192EEF249D36 (U3CShakeCameraCoU3Ed__25_tE09D4113AE143A7E3D05BC37395FC0E64132AD08 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityBrainListener/<ResetBlendDefinition>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetBlendDefinitionU3Ed__8__ctor_mE7FDF3743A2A64C273022C0A66B429BA40061DF3 (U3CResetBlendDefinitionU3Ed__8_t242A6A1726EC5B7D590D593342C301A52CD43A82 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityBrainListener/<ResetBlendDefinition>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetBlendDefinitionU3Ed__8_System_IDisposable_Dispose_m535840A909EFDAF00F20B307EE5576F8C1150899 (U3CResetBlendDefinitionU3Ed__8_t242A6A1726EC5B7D590D593342C301A52CD43A82 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityBrainListener/<ResetBlendDefinition>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CResetBlendDefinitionU3Ed__8_MoveNext_mC87880E846E320F038F86076A02A8F9752245DE1 (U3CResetBlendDefinitionU3Ed__8_t242A6A1726EC5B7D590D593342C301A52CD43A82 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	MMCinemachinePriorityBrainListener_tF4122050D55252EF361F5BAACBB63E1C6DE6FF80 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MMCinemachinePriorityBrainListener_tF4122050D55252EF361F5BAACBB63E1C6DE6FF80 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003b;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (float timer = 0; timer < delay; timer += GetDeltaTime())
		__this->set_U3CtimerU3E5__2_4((0.0f));
		goto IL_0055;
	}

IL_002b:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (float timer = 0; timer < delay; timer += GetDeltaTime())
		float L_4 = __this->get_U3CtimerU3E5__2_4();
		MMCinemachinePriorityBrainListener_tF4122050D55252EF361F5BAACBB63E1C6DE6FF80 * L_5 = V_1;
		float L_6;
		L_6 = VirtFuncInvoker0< float >::Invoke(5 /* System.Single MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityBrainListener::GetDeltaTime() */, L_5);
		__this->set_U3CtimerU3E5__2_4(((float)il2cpp_codegen_add((float)L_4, (float)L_6)));
	}

IL_0055:
	{
		// for (float timer = 0; timer < delay; timer += GetDeltaTime())
		float L_7 = __this->get_U3CtimerU3E5__2_4();
		float L_8 = __this->get_delay_3();
		if ((((float)L_7) < ((float)L_8)))
		{
			goto IL_002b;
		}
	}
	{
		// _brain.m_DefaultBlend = _initialDefinition;
		MMCinemachinePriorityBrainListener_tF4122050D55252EF361F5BAACBB63E1C6DE6FF80 * L_9 = V_1;
		CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * L_10 = L_9->get__brain_5();
		MMCinemachinePriorityBrainListener_tF4122050D55252EF361F5BAACBB63E1C6DE6FF80 * L_11 = V_1;
		CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  L_12 = L_11->get__initialDefinition_6();
		L_10->set_m_DefaultBlend_10(L_12);
		// _coroutine = null;
		MMCinemachinePriorityBrainListener_tF4122050D55252EF361F5BAACBB63E1C6DE6FF80 * L_13 = V_1;
		L_13->set__coroutine_7((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
		// }
		return (bool)0;
	}
}
// System.Object MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityBrainListener/<ResetBlendDefinition>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CResetBlendDefinitionU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB300B4588E62676A41E3A214D3135B795888F7EA (U3CResetBlendDefinitionU3Ed__8_t242A6A1726EC5B7D590D593342C301A52CD43A82 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityBrainListener/<ResetBlendDefinition>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetBlendDefinitionU3Ed__8_System_Collections_IEnumerator_Reset_m0CB8C6611A15D8D24676865ECAAEEEB4D7F2F5BA (U3CResetBlendDefinitionU3Ed__8_t242A6A1726EC5B7D590D593342C301A52CD43A82 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CResetBlendDefinitionU3Ed__8_System_Collections_IEnumerator_Reset_m0CB8C6611A15D8D24676865ECAAEEEB4D7F2F5BA_RuntimeMethod_var)));
	}
}
// System.Object MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityBrainListener/<ResetBlendDefinition>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CResetBlendDefinitionU3Ed__8_System_Collections_IEnumerator_get_Current_m0070039D7513BA5641C7E4E83B661CB4CCB34FF9 (U3CResetBlendDefinitionU3Ed__8_t242A6A1726EC5B7D590D593342C301A52CD43A82 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 (Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * __this, int32_t ___channel0, bool ___forceMaxPriority1, int32_t ___newPriority2, bool ___forceTransition3, CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  ___blendDefinition4, bool ___resetValuesAfterTransition5, int32_t ___timescaleMode6, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, int32_t, int32_t, CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE , int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___channel0, static_cast<int32_t>(___forceMaxPriority1), ___newPriority2, static_cast<int32_t>(___forceTransition3), ___blendDefinition4, static_cast<int32_t>(___resetValuesAfterTransition5), ___timescaleMode6);

}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityEvent/Delegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate__ctor_m3F65D60FD56F1F973DF4B2EB245DFF898BAC03FF (Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityEvent/Delegate::Invoke(System.Int32,System.Boolean,System.Int32,System.Boolean,Cinemachine.CinemachineBlendDefinition,System.Boolean,MoreMountains.Feedbacks.TimescaleModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate_Invoke_mFCDBEA4B4A22EB571B61E584225935D7D1DAFC8C (Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * __this, int32_t ___channel0, bool ___forceMaxPriority1, int32_t ___newPriority2, bool ___forceTransition3, CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  ___blendDefinition4, bool ___resetValuesAfterTransition5, int32_t ___timescaleMode6, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 7)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, bool, int32_t, bool, CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE , bool, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___channel0, ___forceMaxPriority1, ___newPriority2, ___forceTransition3, ___blendDefinition4, ___resetValuesAfterTransition5, ___timescaleMode6, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, bool, int32_t, bool, CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE , bool, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___channel0, ___forceMaxPriority1, ___newPriority2, ___forceTransition3, ___blendDefinition4, ___resetValuesAfterTransition5, ___timescaleMode6, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker7< int32_t, bool, int32_t, bool, CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE , bool, int32_t >::Invoke(targetMethod, targetThis, ___channel0, ___forceMaxPriority1, ___newPriority2, ___forceTransition3, ___blendDefinition4, ___resetValuesAfterTransition5, ___timescaleMode6);
					else
						GenericVirtActionInvoker7< int32_t, bool, int32_t, bool, CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE , bool, int32_t >::Invoke(targetMethod, targetThis, ___channel0, ___forceMaxPriority1, ___newPriority2, ___forceTransition3, ___blendDefinition4, ___resetValuesAfterTransition5, ___timescaleMode6);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker7< int32_t, bool, int32_t, bool, CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE , bool, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___channel0, ___forceMaxPriority1, ___newPriority2, ___forceTransition3, ___blendDefinition4, ___resetValuesAfterTransition5, ___timescaleMode6);
					else
						VirtActionInvoker7< int32_t, bool, int32_t, bool, CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE , bool, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___channel0, ___forceMaxPriority1, ___newPriority2, ___forceTransition3, ___blendDefinition4, ___resetValuesAfterTransition5, ___timescaleMode6);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, bool, int32_t, bool, CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE , bool, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___channel0, ___forceMaxPriority1, ___newPriority2, ___forceTransition3, ___blendDefinition4, ___resetValuesAfterTransition5, ___timescaleMode6, targetMethod);
			}
		}
	}
}
// System.IAsyncResult MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityEvent/Delegate::BeginInvoke(System.Int32,System.Boolean,System.Int32,System.Boolean,Cinemachine.CinemachineBlendDefinition,System.Boolean,MoreMountains.Feedbacks.TimescaleModes,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Delegate_BeginInvoke_m56A8F3B0DBA7DF67F84C6CA497115BD397652DFD (Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * __this, int32_t ___channel0, bool ___forceMaxPriority1, int32_t ___newPriority2, bool ___forceTransition3, CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  ___blendDefinition4, bool ___resetValuesAfterTransition5, int32_t ___timescaleMode6, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback7, RuntimeObject * ___object8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimescaleModes_t9BB44B0A2F1D4489D501D478A3CAF34DD53D0412_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[8] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___channel0);
	__d_args[1] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___forceMaxPriority1);
	__d_args[2] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___newPriority2);
	__d_args[3] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___forceTransition3);
	__d_args[4] = Box(CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE_il2cpp_TypeInfo_var, &___blendDefinition4);
	__d_args[5] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___resetValuesAfterTransition5);
	__d_args[6] = Box(TimescaleModes_t9BB44B0A2F1D4489D501D478A3CAF34DD53D0412_il2cpp_TypeInfo_var, &___timescaleMode6);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback7, (RuntimeObject*)___object8);;
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMCinemachinePriorityEvent/Delegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate_EndInvoke_m825BA4205716C360D2BABD2E52C58CBD6B9CDA6F (Delegate_t3A4FFBD4695433763584A759E677E31CC6775217 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CinemachineVirtualCameraBase_set_Priority_m6C180B742F19E669D648B6D1BE4D9D9C5824962B_inline (CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Priority { get { return m_Priority; } set { m_Priority = value; } }
		int32_t L_0 = ___value0;
		__this->set_m_Priority_9(L_0);
		// public int Priority { get { return m_Priority; } set { m_Priority = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MMCinemachineZoom_get_TimescaleMode_mAC647CC07C53D080C0D6092F41EB2E670EB344FC_inline (MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E * __this, const RuntimeMethod* method)
{
	{
		// public TimescaleModes TimescaleMode { get; set; }
		int32_t L_0 = __this->get_U3CTimescaleModeU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MMCinemachineZoom_set_TimescaleMode_m2819D5DADDE8E654AD62C1FD06122C45DE9FC8E1_inline (MMCinemachineZoom_tB9146C7B16F11EE726028AFCACF8EFA8CCFF3A9E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TimescaleModes TimescaleMode { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CTimescaleModeU3Ek__BackingField_11(L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CinemachineImpulseManager_set_IgnoreTimeScale_m734F8037EA5DDBAFEFE2AE02FE1AC87AD5FD333F_inline (CinemachineImpulseManager_tF3C6346114BFA17F16D5101DC1767922982FF78E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IgnoreTimeScale { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CIgnoreTimeScaleU3Ek__BackingField_4(L_0);
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

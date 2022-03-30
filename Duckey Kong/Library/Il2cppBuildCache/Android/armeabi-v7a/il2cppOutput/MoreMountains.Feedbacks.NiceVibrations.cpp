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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Collections.Generic.List`1<MoreMountains.Feedbacks.MMF_Feedback>
struct List_1_t91011B8E4F4F08323FF95B0F0FD0791995EE8E53;
// System.Collections.Generic.List`1<MoreMountains.Feedbacks.MMFeedback>
struct List_1_t65DB3FDD9079C29778530442558DE4285EB4A794;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Lofelt.NiceVibrations.HapticClip
struct HapticClip_tB9F6AE5F3AF34DE1409EF4F4EDEA14F8849AAC9F;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// MoreMountains.Feedbacks.MMF_Feedback
struct MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06;
// MoreMountains.FeedbacksForThirdParty.MMF_Haptics
struct MMF_Haptics_t3C55D6456FAD6FAD73D0DF6F5E8CAF35B97B5878;
// MoreMountains.FeedbacksForThirdParty.MMF_NVClip
struct MMF_NVClip_t2C34105F20849392D7A7B2EEEDB7210D68324D7D;
// MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous
struct MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B;
// MoreMountains.FeedbacksForThirdParty.MMF_NVControl
struct MMF_NVControl_t8E0EA8AC28AF80544C78A918809DD701BF0885DC;
// MoreMountains.FeedbacksForThirdParty.MMF_NVEmphasis
struct MMF_NVEmphasis_tD8521066CDDED276397C8CD28CE0B533549B2A72;
// MoreMountains.FeedbacksForThirdParty.MMF_NVPreset
struct MMF_NVPreset_t7F7B96BD663FDE47C65462564702E85920E1F50B;
// MoreMountains.Feedbacks.MMF_Player
struct MMF_Player_tC899A947C0F4E42B7461FAB8A051855F7BEF0A7D;
// MoreMountains.Feedbacks.MMFeedback
struct MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4;
// MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics
struct MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4;
// MoreMountains.FeedbacksForThirdParty.MMFeedbackNVClip
struct MMFeedbackNVClip_t502CF6ABD673FAC9A4AB6FC907AE09459F6F9418;
// MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous
struct MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6;
// MoreMountains.FeedbacksForThirdParty.MMFeedbackNVControl
struct MMFeedbackNVControl_t5F53E468A2A361DA4860FA9C1A27B449E4DAC650;
// MoreMountains.FeedbacksForThirdParty.MMFeedbackNVEmphasis
struct MMFeedbackNVEmphasis_t8C52D473E911FE7AF7E423F545C385FFAA5FD30F;
// MoreMountains.FeedbacksForThirdParty.MMFeedbackNVPreset
struct MMFeedbackNVPreset_tD2B365A02A8B422BAEBEBD29D88B5C74DD3AC209;
// MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings
struct MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26;
// MoreMountains.Feedbacks.MMFeedbackTiming
struct MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6;
// MoreMountains.Feedbacks.MMFeedbacks
struct MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914;
// MoreMountains.Feedbacks.MMFeedbacksEvents
struct MMFeedbacksEvents_tD97C44EABE3B4C421BC47194E569A5333306807A;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234;
// System.Timers.Timer
struct Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous/<RealtimeModulationCo>d__17
struct U3CRealtimeModulationCoU3Ed__17_tDCB139E8985AB0539F13E0FF613138C8E6886944;
// MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous/<RealtimeModulationCo>d__17
struct U3CRealtimeModulationCoU3Ed__17_t7EFFEE2F6DA9C5B73DB52A66D963A75B4E9815D3;

IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MMF_NVClip_t2C34105F20849392D7A7B2EEEDB7210D68324D7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MMF_NVControl_t8E0EA8AC28AF80544C78A918809DD701BF0885DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MMF_NVEmphasis_tD8521066CDDED276397C8CD28CE0B533549B2A72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MMF_NVPreset_t7F7B96BD663FDE47C65462564702E85920E1F50B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MMFeedbackNVClip_t502CF6ABD673FAC9A4AB6FC907AE09459F6F9418_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MMFeedbackNVControl_t5F53E468A2A361DA4860FA9C1A27B449E4DAC650_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MMFeedbackNVEmphasis_t8C52D473E911FE7AF7E423F545C385FFAA5FD30F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MMFeedbackNVPreset_tD2B365A02A8B422BAEBEBD29D88B5C74DD3AC209_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRealtimeModulationCoU3Ed__17_t7EFFEE2F6DA9C5B73DB52A66D963A75B4E9815D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRealtimeModulationCoU3Ed__17_tDCB139E8985AB0539F13E0FF613138C8E6886944_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralA0024743F97789D38C98EEF3B6289CC5F7131D84;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRealtimeModulationCoU3Ed__17_System_Collections_IEnumerator_Reset_m0DC944A0941E10976503E48999DA14FA20B47748_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRealtimeModulationCoU3Ed__17_System_Collections_IEnumerator_Reset_mFAC687527E355906569ABE4F624264DCD4E09D86_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t7AB0057579B9ED25A040FFD5091048B8EDB71F52 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings
struct MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26  : public RuntimeObject
{
public:
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings::ForceGamepadID
	bool ___ForceGamepadID_0;
	// System.Int32 MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings::GamepadID
	int32_t ___GamepadID_1;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings::OnlyPlayIfHapticsSupported
	bool ___OnlyPlayIfHapticsSupported_2;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings::OnlyPlayIfAdvancedRequirementsMet
	bool ___OnlyPlayIfAdvancedRequirementsMet_3;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings::OnlyPlayIfAmplitudeModulationSupported
	bool ___OnlyPlayIfAmplitudeModulationSupported_4;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings::OnlyPlayIfFrequencyModulationSupported
	bool ___OnlyPlayIfFrequencyModulationSupported_5;

public:
	inline static int32_t get_offset_of_ForceGamepadID_0() { return static_cast<int32_t>(offsetof(MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26, ___ForceGamepadID_0)); }
	inline bool get_ForceGamepadID_0() const { return ___ForceGamepadID_0; }
	inline bool* get_address_of_ForceGamepadID_0() { return &___ForceGamepadID_0; }
	inline void set_ForceGamepadID_0(bool value)
	{
		___ForceGamepadID_0 = value;
	}

	inline static int32_t get_offset_of_GamepadID_1() { return static_cast<int32_t>(offsetof(MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26, ___GamepadID_1)); }
	inline int32_t get_GamepadID_1() const { return ___GamepadID_1; }
	inline int32_t* get_address_of_GamepadID_1() { return &___GamepadID_1; }
	inline void set_GamepadID_1(int32_t value)
	{
		___GamepadID_1 = value;
	}

	inline static int32_t get_offset_of_OnlyPlayIfHapticsSupported_2() { return static_cast<int32_t>(offsetof(MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26, ___OnlyPlayIfHapticsSupported_2)); }
	inline bool get_OnlyPlayIfHapticsSupported_2() const { return ___OnlyPlayIfHapticsSupported_2; }
	inline bool* get_address_of_OnlyPlayIfHapticsSupported_2() { return &___OnlyPlayIfHapticsSupported_2; }
	inline void set_OnlyPlayIfHapticsSupported_2(bool value)
	{
		___OnlyPlayIfHapticsSupported_2 = value;
	}

	inline static int32_t get_offset_of_OnlyPlayIfAdvancedRequirementsMet_3() { return static_cast<int32_t>(offsetof(MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26, ___OnlyPlayIfAdvancedRequirementsMet_3)); }
	inline bool get_OnlyPlayIfAdvancedRequirementsMet_3() const { return ___OnlyPlayIfAdvancedRequirementsMet_3; }
	inline bool* get_address_of_OnlyPlayIfAdvancedRequirementsMet_3() { return &___OnlyPlayIfAdvancedRequirementsMet_3; }
	inline void set_OnlyPlayIfAdvancedRequirementsMet_3(bool value)
	{
		___OnlyPlayIfAdvancedRequirementsMet_3 = value;
	}

	inline static int32_t get_offset_of_OnlyPlayIfAmplitudeModulationSupported_4() { return static_cast<int32_t>(offsetof(MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26, ___OnlyPlayIfAmplitudeModulationSupported_4)); }
	inline bool get_OnlyPlayIfAmplitudeModulationSupported_4() const { return ___OnlyPlayIfAmplitudeModulationSupported_4; }
	inline bool* get_address_of_OnlyPlayIfAmplitudeModulationSupported_4() { return &___OnlyPlayIfAmplitudeModulationSupported_4; }
	inline void set_OnlyPlayIfAmplitudeModulationSupported_4(bool value)
	{
		___OnlyPlayIfAmplitudeModulationSupported_4 = value;
	}

	inline static int32_t get_offset_of_OnlyPlayIfFrequencyModulationSupported_5() { return static_cast<int32_t>(offsetof(MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26, ___OnlyPlayIfFrequencyModulationSupported_5)); }
	inline bool get_OnlyPlayIfFrequencyModulationSupported_5() const { return ___OnlyPlayIfFrequencyModulationSupported_5; }
	inline bool* get_address_of_OnlyPlayIfFrequencyModulationSupported_5() { return &___OnlyPlayIfFrequencyModulationSupported_5; }
	inline void set_OnlyPlayIfFrequencyModulationSupported_5(bool value)
	{
		___OnlyPlayIfFrequencyModulationSupported_5 = value;
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

// MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous/<RealtimeModulationCo>d__17
struct U3CRealtimeModulationCoU3Ed__17_tDCB139E8985AB0539F13E0FF613138C8E6886944  : public RuntimeObject
{
public:
	// System.Int32 MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous/<RealtimeModulationCo>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous/<RealtimeModulationCo>d__17::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous/<RealtimeModulationCo>d__17::<>4__this
	MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B * ___U3CU3E4__this_2;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous/<RealtimeModulationCo>d__17::<journey>5__2
	float ___U3CjourneyU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRealtimeModulationCoU3Ed__17_tDCB139E8985AB0539F13E0FF613138C8E6886944, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRealtimeModulationCoU3Ed__17_tDCB139E8985AB0539F13E0FF613138C8E6886944, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRealtimeModulationCoU3Ed__17_tDCB139E8985AB0539F13E0FF613138C8E6886944, ___U3CU3E4__this_2)); }
	inline MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CjourneyU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CRealtimeModulationCoU3Ed__17_tDCB139E8985AB0539F13E0FF613138C8E6886944, ___U3CjourneyU3E5__2_3)); }
	inline float get_U3CjourneyU3E5__2_3() const { return ___U3CjourneyU3E5__2_3; }
	inline float* get_address_of_U3CjourneyU3E5__2_3() { return &___U3CjourneyU3E5__2_3; }
	inline void set_U3CjourneyU3E5__2_3(float value)
	{
		___U3CjourneyU3E5__2_3 = value;
	}
};


// MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous/<RealtimeModulationCo>d__17
struct U3CRealtimeModulationCoU3Ed__17_t7EFFEE2F6DA9C5B73DB52A66D963A75B4E9815D3  : public RuntimeObject
{
public:
	// System.Int32 MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous/<RealtimeModulationCo>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous/<RealtimeModulationCo>d__17::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous/<RealtimeModulationCo>d__17::<>4__this
	MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6 * ___U3CU3E4__this_2;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous/<RealtimeModulationCo>d__17::<journey>5__2
	float ___U3CjourneyU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRealtimeModulationCoU3Ed__17_t7EFFEE2F6DA9C5B73DB52A66D963A75B4E9815D3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRealtimeModulationCoU3Ed__17_t7EFFEE2F6DA9C5B73DB52A66D963A75B4E9815D3, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRealtimeModulationCoU3Ed__17_t7EFFEE2F6DA9C5B73DB52A66D963A75B4E9815D3, ___U3CU3E4__this_2)); }
	inline MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CjourneyU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CRealtimeModulationCoU3Ed__17_t7EFFEE2F6DA9C5B73DB52A66D963A75B4E9815D3, ___U3CjourneyU3E5__2_3)); }
	inline float get_U3CjourneyU3E5__2_3() const { return ___U3CjourneyU3E5__2_3; }
	inline float* get_address_of_U3CjourneyU3E5__2_3() { return &___U3CjourneyU3E5__2_3; }
	inline void set_U3CjourneyU3E5__2_3(float value)
	{
		___U3CjourneyU3E5__2_3 = value;
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

// Lofelt.NiceVibrations.GamepadRumble
struct GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045 
{
public:
	// System.Int32[] Lofelt.NiceVibrations.GamepadRumble::durationsMs
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___durationsMs_0;
	// System.Int32 Lofelt.NiceVibrations.GamepadRumble::totalDurationMs
	int32_t ___totalDurationMs_1;
	// System.Single[] Lofelt.NiceVibrations.GamepadRumble::lowFrequencyMotorSpeeds
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___lowFrequencyMotorSpeeds_2;
	// System.Single[] Lofelt.NiceVibrations.GamepadRumble::highFrequencyMotorSpeeds
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___highFrequencyMotorSpeeds_3;

public:
	inline static int32_t get_offset_of_durationsMs_0() { return static_cast<int32_t>(offsetof(GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045, ___durationsMs_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_durationsMs_0() const { return ___durationsMs_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_durationsMs_0() { return &___durationsMs_0; }
	inline void set_durationsMs_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___durationsMs_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___durationsMs_0), (void*)value);
	}

	inline static int32_t get_offset_of_totalDurationMs_1() { return static_cast<int32_t>(offsetof(GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045, ___totalDurationMs_1)); }
	inline int32_t get_totalDurationMs_1() const { return ___totalDurationMs_1; }
	inline int32_t* get_address_of_totalDurationMs_1() { return &___totalDurationMs_1; }
	inline void set_totalDurationMs_1(int32_t value)
	{
		___totalDurationMs_1 = value;
	}

	inline static int32_t get_offset_of_lowFrequencyMotorSpeeds_2() { return static_cast<int32_t>(offsetof(GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045, ___lowFrequencyMotorSpeeds_2)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_lowFrequencyMotorSpeeds_2() const { return ___lowFrequencyMotorSpeeds_2; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_lowFrequencyMotorSpeeds_2() { return &___lowFrequencyMotorSpeeds_2; }
	inline void set_lowFrequencyMotorSpeeds_2(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___lowFrequencyMotorSpeeds_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lowFrequencyMotorSpeeds_2), (void*)value);
	}

	inline static int32_t get_offset_of_highFrequencyMotorSpeeds_3() { return static_cast<int32_t>(offsetof(GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045, ___highFrequencyMotorSpeeds_3)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_highFrequencyMotorSpeeds_3() const { return ___highFrequencyMotorSpeeds_3; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_highFrequencyMotorSpeeds_3() { return &___highFrequencyMotorSpeeds_3; }
	inline void set_highFrequencyMotorSpeeds_3(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___highFrequencyMotorSpeeds_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___highFrequencyMotorSpeeds_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Lofelt.NiceVibrations.GamepadRumble
struct GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___durationsMs_0;
	int32_t ___totalDurationMs_1;
	Il2CppSafeArray/*NONE*/* ___lowFrequencyMotorSpeeds_2;
	Il2CppSafeArray/*NONE*/* ___highFrequencyMotorSpeeds_3;
};
// Native definition for COM marshalling of Lofelt.NiceVibrations.GamepadRumble
struct GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___durationsMs_0;
	int32_t ___totalDurationMs_1;
	Il2CppSafeArray/*NONE*/* ___lowFrequencyMotorSpeeds_2;
	Il2CppSafeArray/*NONE*/* ___highFrequencyMotorSpeeds_3;
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

// UnityEngine.RuntimePlatform
struct RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Lofelt.NiceVibrations.HapticPatterns/PresetType
struct PresetType_tAD3A60C99B9B59677EFE8777750B13A6E947155D 
{
public:
	// System.Int32 Lofelt.NiceVibrations.HapticPatterns/PresetType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PresetType_tAD3A60C99B9B59677EFE8777750B13A6E947155D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.FeedbacksForThirdParty.MMF_NVControl/ControlTypes
struct ControlTypes_tB5EB7B7EE044A9C5C3FC92D74A419E038429450A 
{
public:
	// System.Int32 MoreMountains.FeedbacksForThirdParty.MMF_NVControl/ControlTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControlTypes_tB5EB7B7EE044A9C5C3FC92D74A419E038429450A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics/HapticMethods
struct HapticMethods_tD7CCB09D6DC67EDB0A1A5A48189B6FB5D06FE6E7 
{
public:
	// System.Int32 MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics/HapticMethods::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HapticMethods_tD7CCB09D6DC67EDB0A1A5A48189B6FB5D06FE6E7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics/HapticTypes
struct HapticTypes_t300B57E4A00E7FC82C125102DA48731AC75C4280 
{
public:
	// System.Int32 MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics/HapticTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HapticTypes_t300B57E4A00E7FC82C125102DA48731AC75C4280, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics/Timescales
struct Timescales_tBFCC8913E3E2A15C5EB3D152FDF2836E2B1A5D18 
{
public:
	// System.Int32 MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics/Timescales::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Timescales_tBFCC8913E3E2A15C5EB3D152FDF2836E2B1A5D18, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.FeedbacksForThirdParty.MMFeedbackNVControl/ControlTypes
struct ControlTypes_t789D3E257993449DC9A2AE5D77D07FE9CB654A1C 
{
public:
	// System.Int32 MoreMountains.FeedbacksForThirdParty.MMFeedbackNVControl/ControlTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControlTypes_t789D3E257993449DC9A2AE5D77D07FE9CB654A1C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.Feedbacks.MMFeedbacks/Directions
struct Directions_t6734A23FBABD110399D0F300811824A2515BC3EB 
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMFeedbacks/Directions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Directions_t6734A23FBABD110399D0F300811824A2515BC3EB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.Feedbacks.MMFeedbacks/InitializationModes
struct InitializationModes_t2C4B197E025D0230877655D43D5636300E479888 
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMFeedbacks/InitializationModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitializationModes_t2C4B197E025D0230877655D43D5636300E479888, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.Feedbacks.MMFeedbacks/SafeModes
struct SafeModes_t27DE69744FFB89E58A263B7318C1A1DA32EBE30E 
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMFeedbacks/SafeModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SafeModes_t27DE69744FFB89E58A263B7318C1A1DA32EBE30E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Lofelt.NiceVibrations.DeviceCapabilities
struct DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065  : public RuntimeObject
{
public:

public:
};

struct DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields
{
public:
	// UnityEngine.RuntimePlatform Lofelt.NiceVibrations.DeviceCapabilities::<platform>k__BackingField
	int32_t ___U3CplatformU3Ek__BackingField_0;
	// System.Int32 Lofelt.NiceVibrations.DeviceCapabilities::<platformVersion>k__BackingField
	int32_t ___U3CplatformVersionU3Ek__BackingField_1;
	// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::_meetsAdvancedRequirements
	bool ____meetsAdvancedRequirements_2;
	// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::<isVersionSupported>k__BackingField
	bool ___U3CisVersionSupportedU3Ek__BackingField_3;
	// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::_hasAmplitudeControl
	bool ____hasAmplitudeControl_4;
	// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::_hasFrequencyControl
	bool ____hasFrequencyControl_5;
	// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::_hasAmplitudeModulation
	bool ____hasAmplitudeModulation_6;
	// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::_hasFrequencyModulation
	bool ____hasFrequencyModulation_7;
	// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::_hasEmphasis
	bool ____hasEmphasis_8;
	// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::_canEmulateEmphasis
	bool ____canEmulateEmphasis_9;
	// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::_canLoop
	bool ____canLoop_10;

public:
	inline static int32_t get_offset_of_U3CplatformU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields, ___U3CplatformU3Ek__BackingField_0)); }
	inline int32_t get_U3CplatformU3Ek__BackingField_0() const { return ___U3CplatformU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CplatformU3Ek__BackingField_0() { return &___U3CplatformU3Ek__BackingField_0; }
	inline void set_U3CplatformU3Ek__BackingField_0(int32_t value)
	{
		___U3CplatformU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CplatformVersionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields, ___U3CplatformVersionU3Ek__BackingField_1)); }
	inline int32_t get_U3CplatformVersionU3Ek__BackingField_1() const { return ___U3CplatformVersionU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CplatformVersionU3Ek__BackingField_1() { return &___U3CplatformVersionU3Ek__BackingField_1; }
	inline void set_U3CplatformVersionU3Ek__BackingField_1(int32_t value)
	{
		___U3CplatformVersionU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of__meetsAdvancedRequirements_2() { return static_cast<int32_t>(offsetof(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields, ____meetsAdvancedRequirements_2)); }
	inline bool get__meetsAdvancedRequirements_2() const { return ____meetsAdvancedRequirements_2; }
	inline bool* get_address_of__meetsAdvancedRequirements_2() { return &____meetsAdvancedRequirements_2; }
	inline void set__meetsAdvancedRequirements_2(bool value)
	{
		____meetsAdvancedRequirements_2 = value;
	}

	inline static int32_t get_offset_of_U3CisVersionSupportedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields, ___U3CisVersionSupportedU3Ek__BackingField_3)); }
	inline bool get_U3CisVersionSupportedU3Ek__BackingField_3() const { return ___U3CisVersionSupportedU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CisVersionSupportedU3Ek__BackingField_3() { return &___U3CisVersionSupportedU3Ek__BackingField_3; }
	inline void set_U3CisVersionSupportedU3Ek__BackingField_3(bool value)
	{
		___U3CisVersionSupportedU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of__hasAmplitudeControl_4() { return static_cast<int32_t>(offsetof(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields, ____hasAmplitudeControl_4)); }
	inline bool get__hasAmplitudeControl_4() const { return ____hasAmplitudeControl_4; }
	inline bool* get_address_of__hasAmplitudeControl_4() { return &____hasAmplitudeControl_4; }
	inline void set__hasAmplitudeControl_4(bool value)
	{
		____hasAmplitudeControl_4 = value;
	}

	inline static int32_t get_offset_of__hasFrequencyControl_5() { return static_cast<int32_t>(offsetof(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields, ____hasFrequencyControl_5)); }
	inline bool get__hasFrequencyControl_5() const { return ____hasFrequencyControl_5; }
	inline bool* get_address_of__hasFrequencyControl_5() { return &____hasFrequencyControl_5; }
	inline void set__hasFrequencyControl_5(bool value)
	{
		____hasFrequencyControl_5 = value;
	}

	inline static int32_t get_offset_of__hasAmplitudeModulation_6() { return static_cast<int32_t>(offsetof(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields, ____hasAmplitudeModulation_6)); }
	inline bool get__hasAmplitudeModulation_6() const { return ____hasAmplitudeModulation_6; }
	inline bool* get_address_of__hasAmplitudeModulation_6() { return &____hasAmplitudeModulation_6; }
	inline void set__hasAmplitudeModulation_6(bool value)
	{
		____hasAmplitudeModulation_6 = value;
	}

	inline static int32_t get_offset_of__hasFrequencyModulation_7() { return static_cast<int32_t>(offsetof(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields, ____hasFrequencyModulation_7)); }
	inline bool get__hasFrequencyModulation_7() const { return ____hasFrequencyModulation_7; }
	inline bool* get_address_of__hasFrequencyModulation_7() { return &____hasFrequencyModulation_7; }
	inline void set__hasFrequencyModulation_7(bool value)
	{
		____hasFrequencyModulation_7 = value;
	}

	inline static int32_t get_offset_of__hasEmphasis_8() { return static_cast<int32_t>(offsetof(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields, ____hasEmphasis_8)); }
	inline bool get__hasEmphasis_8() const { return ____hasEmphasis_8; }
	inline bool* get_address_of__hasEmphasis_8() { return &____hasEmphasis_8; }
	inline void set__hasEmphasis_8(bool value)
	{
		____hasEmphasis_8 = value;
	}

	inline static int32_t get_offset_of__canEmulateEmphasis_9() { return static_cast<int32_t>(offsetof(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields, ____canEmulateEmphasis_9)); }
	inline bool get__canEmulateEmphasis_9() const { return ____canEmulateEmphasis_9; }
	inline bool* get_address_of__canEmulateEmphasis_9() { return &____canEmulateEmphasis_9; }
	inline void set__canEmulateEmphasis_9(bool value)
	{
		____canEmulateEmphasis_9 = value;
	}

	inline static int32_t get_offset_of__canLoop_10() { return static_cast<int32_t>(offsetof(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields, ____canLoop_10)); }
	inline bool get__canLoop_10() const { return ____canLoop_10; }
	inline bool* get_address_of__canLoop_10() { return &____canLoop_10; }
	inline void set__canLoop_10(bool value)
	{
		____canLoop_10 = value;
	}
};


// Lofelt.NiceVibrations.HapticController
struct HapticController_tCF66201AF596D421FA26B175E41175BF665BC230  : public RuntimeObject
{
public:

public:
};

struct HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields
{
public:
	// System.Boolean Lofelt.NiceVibrations.HapticController::lofeltHapticsInitalized
	bool ___lofeltHapticsInitalized_0;
	// System.Timers.Timer Lofelt.NiceVibrations.HapticController::playbackFinishedTimer
	Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * ___playbackFinishedTimer_1;
	// System.Single Lofelt.NiceVibrations.HapticController::clipLoadedDurationSecs
	float ___clipLoadedDurationSecs_2;
	// System.Boolean Lofelt.NiceVibrations.HapticController::clipLoaded
	bool ___clipLoaded_3;
	// System.Single Lofelt.NiceVibrations.HapticController::lastSeekTime
	float ___lastSeekTime_4;
	// System.Boolean Lofelt.NiceVibrations.HapticController::deviceMeetsAdvancedRequirements
	bool ___deviceMeetsAdvancedRequirements_5;
	// System.Boolean Lofelt.NiceVibrations.HapticController::isLoopingEnabledByUser
	bool ___isLoopingEnabledByUser_6;
	// System.Boolean Lofelt.NiceVibrations.HapticController::isPlaybackLooping
	bool ___isPlaybackLooping_7;
	// Lofelt.NiceVibrations.HapticPatterns/PresetType Lofelt.NiceVibrations.HapticController::_fallbackPreset
	int32_t ____fallbackPreset_8;
	// System.Boolean Lofelt.NiceVibrations.HapticController::_hapticsEnabled
	bool ____hapticsEnabled_9;
	// System.Single Lofelt.NiceVibrations.HapticController::_outputLevel
	float ____outputLevel_10;
	// System.Single Lofelt.NiceVibrations.HapticController::_clipLevel
	float ____clipLevel_11;
	// System.Action Lofelt.NiceVibrations.HapticController::LoadedClipChanged
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___LoadedClipChanged_12;
	// System.Action Lofelt.NiceVibrations.HapticController::PlaybackStarted
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___PlaybackStarted_13;
	// System.Action Lofelt.NiceVibrations.HapticController::PlaybackStopped
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___PlaybackStopped_14;

public:
	inline static int32_t get_offset_of_lofeltHapticsInitalized_0() { return static_cast<int32_t>(offsetof(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields, ___lofeltHapticsInitalized_0)); }
	inline bool get_lofeltHapticsInitalized_0() const { return ___lofeltHapticsInitalized_0; }
	inline bool* get_address_of_lofeltHapticsInitalized_0() { return &___lofeltHapticsInitalized_0; }
	inline void set_lofeltHapticsInitalized_0(bool value)
	{
		___lofeltHapticsInitalized_0 = value;
	}

	inline static int32_t get_offset_of_playbackFinishedTimer_1() { return static_cast<int32_t>(offsetof(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields, ___playbackFinishedTimer_1)); }
	inline Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * get_playbackFinishedTimer_1() const { return ___playbackFinishedTimer_1; }
	inline Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE ** get_address_of_playbackFinishedTimer_1() { return &___playbackFinishedTimer_1; }
	inline void set_playbackFinishedTimer_1(Timer_t8753DB32BE02A6CC461BFA2D54D05D9DFC585ACE * value)
	{
		___playbackFinishedTimer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playbackFinishedTimer_1), (void*)value);
	}

	inline static int32_t get_offset_of_clipLoadedDurationSecs_2() { return static_cast<int32_t>(offsetof(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields, ___clipLoadedDurationSecs_2)); }
	inline float get_clipLoadedDurationSecs_2() const { return ___clipLoadedDurationSecs_2; }
	inline float* get_address_of_clipLoadedDurationSecs_2() { return &___clipLoadedDurationSecs_2; }
	inline void set_clipLoadedDurationSecs_2(float value)
	{
		___clipLoadedDurationSecs_2 = value;
	}

	inline static int32_t get_offset_of_clipLoaded_3() { return static_cast<int32_t>(offsetof(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields, ___clipLoaded_3)); }
	inline bool get_clipLoaded_3() const { return ___clipLoaded_3; }
	inline bool* get_address_of_clipLoaded_3() { return &___clipLoaded_3; }
	inline void set_clipLoaded_3(bool value)
	{
		___clipLoaded_3 = value;
	}

	inline static int32_t get_offset_of_lastSeekTime_4() { return static_cast<int32_t>(offsetof(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields, ___lastSeekTime_4)); }
	inline float get_lastSeekTime_4() const { return ___lastSeekTime_4; }
	inline float* get_address_of_lastSeekTime_4() { return &___lastSeekTime_4; }
	inline void set_lastSeekTime_4(float value)
	{
		___lastSeekTime_4 = value;
	}

	inline static int32_t get_offset_of_deviceMeetsAdvancedRequirements_5() { return static_cast<int32_t>(offsetof(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields, ___deviceMeetsAdvancedRequirements_5)); }
	inline bool get_deviceMeetsAdvancedRequirements_5() const { return ___deviceMeetsAdvancedRequirements_5; }
	inline bool* get_address_of_deviceMeetsAdvancedRequirements_5() { return &___deviceMeetsAdvancedRequirements_5; }
	inline void set_deviceMeetsAdvancedRequirements_5(bool value)
	{
		___deviceMeetsAdvancedRequirements_5 = value;
	}

	inline static int32_t get_offset_of_isLoopingEnabledByUser_6() { return static_cast<int32_t>(offsetof(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields, ___isLoopingEnabledByUser_6)); }
	inline bool get_isLoopingEnabledByUser_6() const { return ___isLoopingEnabledByUser_6; }
	inline bool* get_address_of_isLoopingEnabledByUser_6() { return &___isLoopingEnabledByUser_6; }
	inline void set_isLoopingEnabledByUser_6(bool value)
	{
		___isLoopingEnabledByUser_6 = value;
	}

	inline static int32_t get_offset_of_isPlaybackLooping_7() { return static_cast<int32_t>(offsetof(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields, ___isPlaybackLooping_7)); }
	inline bool get_isPlaybackLooping_7() const { return ___isPlaybackLooping_7; }
	inline bool* get_address_of_isPlaybackLooping_7() { return &___isPlaybackLooping_7; }
	inline void set_isPlaybackLooping_7(bool value)
	{
		___isPlaybackLooping_7 = value;
	}

	inline static int32_t get_offset_of__fallbackPreset_8() { return static_cast<int32_t>(offsetof(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields, ____fallbackPreset_8)); }
	inline int32_t get__fallbackPreset_8() const { return ____fallbackPreset_8; }
	inline int32_t* get_address_of__fallbackPreset_8() { return &____fallbackPreset_8; }
	inline void set__fallbackPreset_8(int32_t value)
	{
		____fallbackPreset_8 = value;
	}

	inline static int32_t get_offset_of__hapticsEnabled_9() { return static_cast<int32_t>(offsetof(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields, ____hapticsEnabled_9)); }
	inline bool get__hapticsEnabled_9() const { return ____hapticsEnabled_9; }
	inline bool* get_address_of__hapticsEnabled_9() { return &____hapticsEnabled_9; }
	inline void set__hapticsEnabled_9(bool value)
	{
		____hapticsEnabled_9 = value;
	}

	inline static int32_t get_offset_of__outputLevel_10() { return static_cast<int32_t>(offsetof(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields, ____outputLevel_10)); }
	inline float get__outputLevel_10() const { return ____outputLevel_10; }
	inline float* get_address_of__outputLevel_10() { return &____outputLevel_10; }
	inline void set__outputLevel_10(float value)
	{
		____outputLevel_10 = value;
	}

	inline static int32_t get_offset_of__clipLevel_11() { return static_cast<int32_t>(offsetof(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields, ____clipLevel_11)); }
	inline float get__clipLevel_11() const { return ____clipLevel_11; }
	inline float* get_address_of__clipLevel_11() { return &____clipLevel_11; }
	inline void set__clipLevel_11(float value)
	{
		____clipLevel_11 = value;
	}

	inline static int32_t get_offset_of_LoadedClipChanged_12() { return static_cast<int32_t>(offsetof(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields, ___LoadedClipChanged_12)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_LoadedClipChanged_12() const { return ___LoadedClipChanged_12; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_LoadedClipChanged_12() { return &___LoadedClipChanged_12; }
	inline void set_LoadedClipChanged_12(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___LoadedClipChanged_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LoadedClipChanged_12), (void*)value);
	}

	inline static int32_t get_offset_of_PlaybackStarted_13() { return static_cast<int32_t>(offsetof(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields, ___PlaybackStarted_13)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_PlaybackStarted_13() const { return ___PlaybackStarted_13; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_PlaybackStarted_13() { return &___PlaybackStarted_13; }
	inline void set_PlaybackStarted_13(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___PlaybackStarted_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlaybackStarted_13), (void*)value);
	}

	inline static int32_t get_offset_of_PlaybackStopped_14() { return static_cast<int32_t>(offsetof(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields, ___PlaybackStopped_14)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_PlaybackStopped_14() const { return ___PlaybackStopped_14; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_PlaybackStopped_14() { return &___PlaybackStopped_14; }
	inline void set_PlaybackStopped_14(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___PlaybackStopped_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlaybackStopped_14), (void*)value);
	}
};


// MoreMountains.FeedbacksForThirdParty.MMF_Haptics
struct MMF_Haptics_t3C55D6456FAD6FAD73D0DF6F5E8CAF35B97B5878  : public MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06
{
public:
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMF_Haptics::OutputDeprecationWarning
	bool ___OutputDeprecationWarning_27;

public:
	inline static int32_t get_offset_of_OutputDeprecationWarning_27() { return static_cast<int32_t>(offsetof(MMF_Haptics_t3C55D6456FAD6FAD73D0DF6F5E8CAF35B97B5878, ___OutputDeprecationWarning_27)); }
	inline bool get_OutputDeprecationWarning_27() const { return ___OutputDeprecationWarning_27; }
	inline bool* get_address_of_OutputDeprecationWarning_27() { return &___OutputDeprecationWarning_27; }
	inline void set_OutputDeprecationWarning_27(bool value)
	{
		___OutputDeprecationWarning_27 = value;
	}
};


// MoreMountains.FeedbacksForThirdParty.MMF_NVClip
struct MMF_NVClip_t2C34105F20849392D7A7B2EEEDB7210D68324D7D  : public MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06
{
public:
	// Lofelt.NiceVibrations.HapticClip MoreMountains.FeedbacksForThirdParty.MMF_NVClip::Clip
	HapticClip_tB9F6AE5F3AF34DE1409EF4F4EDEA14F8849AAC9F * ___Clip_28;
	// Lofelt.NiceVibrations.HapticPatterns/PresetType MoreMountains.FeedbacksForThirdParty.MMF_NVClip::FallbackPreset
	int32_t ___FallbackPreset_29;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMF_NVClip::Loop
	bool ___Loop_30;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMF_NVClip::SeekTime
	float ___SeekTime_31;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMF_NVClip::MinLevel
	float ___MinLevel_32;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMF_NVClip::MaxLevel
	float ___MaxLevel_33;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMF_NVClip::MinFrequencyShift
	float ___MinFrequencyShift_34;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMF_NVClip::MaxFrequencyShift
	float ___MaxFrequencyShift_35;
	// MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings MoreMountains.FeedbacksForThirdParty.MMF_NVClip::HapticSettings
	MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * ___HapticSettings_36;

public:
	inline static int32_t get_offset_of_Clip_28() { return static_cast<int32_t>(offsetof(MMF_NVClip_t2C34105F20849392D7A7B2EEEDB7210D68324D7D, ___Clip_28)); }
	inline HapticClip_tB9F6AE5F3AF34DE1409EF4F4EDEA14F8849AAC9F * get_Clip_28() const { return ___Clip_28; }
	inline HapticClip_tB9F6AE5F3AF34DE1409EF4F4EDEA14F8849AAC9F ** get_address_of_Clip_28() { return &___Clip_28; }
	inline void set_Clip_28(HapticClip_tB9F6AE5F3AF34DE1409EF4F4EDEA14F8849AAC9F * value)
	{
		___Clip_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Clip_28), (void*)value);
	}

	inline static int32_t get_offset_of_FallbackPreset_29() { return static_cast<int32_t>(offsetof(MMF_NVClip_t2C34105F20849392D7A7B2EEEDB7210D68324D7D, ___FallbackPreset_29)); }
	inline int32_t get_FallbackPreset_29() const { return ___FallbackPreset_29; }
	inline int32_t* get_address_of_FallbackPreset_29() { return &___FallbackPreset_29; }
	inline void set_FallbackPreset_29(int32_t value)
	{
		___FallbackPreset_29 = value;
	}

	inline static int32_t get_offset_of_Loop_30() { return static_cast<int32_t>(offsetof(MMF_NVClip_t2C34105F20849392D7A7B2EEEDB7210D68324D7D, ___Loop_30)); }
	inline bool get_Loop_30() const { return ___Loop_30; }
	inline bool* get_address_of_Loop_30() { return &___Loop_30; }
	inline void set_Loop_30(bool value)
	{
		___Loop_30 = value;
	}

	inline static int32_t get_offset_of_SeekTime_31() { return static_cast<int32_t>(offsetof(MMF_NVClip_t2C34105F20849392D7A7B2EEEDB7210D68324D7D, ___SeekTime_31)); }
	inline float get_SeekTime_31() const { return ___SeekTime_31; }
	inline float* get_address_of_SeekTime_31() { return &___SeekTime_31; }
	inline void set_SeekTime_31(float value)
	{
		___SeekTime_31 = value;
	}

	inline static int32_t get_offset_of_MinLevel_32() { return static_cast<int32_t>(offsetof(MMF_NVClip_t2C34105F20849392D7A7B2EEEDB7210D68324D7D, ___MinLevel_32)); }
	inline float get_MinLevel_32() const { return ___MinLevel_32; }
	inline float* get_address_of_MinLevel_32() { return &___MinLevel_32; }
	inline void set_MinLevel_32(float value)
	{
		___MinLevel_32 = value;
	}

	inline static int32_t get_offset_of_MaxLevel_33() { return static_cast<int32_t>(offsetof(MMF_NVClip_t2C34105F20849392D7A7B2EEEDB7210D68324D7D, ___MaxLevel_33)); }
	inline float get_MaxLevel_33() const { return ___MaxLevel_33; }
	inline float* get_address_of_MaxLevel_33() { return &___MaxLevel_33; }
	inline void set_MaxLevel_33(float value)
	{
		___MaxLevel_33 = value;
	}

	inline static int32_t get_offset_of_MinFrequencyShift_34() { return static_cast<int32_t>(offsetof(MMF_NVClip_t2C34105F20849392D7A7B2EEEDB7210D68324D7D, ___MinFrequencyShift_34)); }
	inline float get_MinFrequencyShift_34() const { return ___MinFrequencyShift_34; }
	inline float* get_address_of_MinFrequencyShift_34() { return &___MinFrequencyShift_34; }
	inline void set_MinFrequencyShift_34(float value)
	{
		___MinFrequencyShift_34 = value;
	}

	inline static int32_t get_offset_of_MaxFrequencyShift_35() { return static_cast<int32_t>(offsetof(MMF_NVClip_t2C34105F20849392D7A7B2EEEDB7210D68324D7D, ___MaxFrequencyShift_35)); }
	inline float get_MaxFrequencyShift_35() const { return ___MaxFrequencyShift_35; }
	inline float* get_address_of_MaxFrequencyShift_35() { return &___MaxFrequencyShift_35; }
	inline void set_MaxFrequencyShift_35(float value)
	{
		___MaxFrequencyShift_35 = value;
	}

	inline static int32_t get_offset_of_HapticSettings_36() { return static_cast<int32_t>(offsetof(MMF_NVClip_t2C34105F20849392D7A7B2EEEDB7210D68324D7D, ___HapticSettings_36)); }
	inline MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * get_HapticSettings_36() const { return ___HapticSettings_36; }
	inline MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 ** get_address_of_HapticSettings_36() { return &___HapticSettings_36; }
	inline void set_HapticSettings_36(MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * value)
	{
		___HapticSettings_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HapticSettings_36), (void*)value);
	}
};

struct MMF_NVClip_t2C34105F20849392D7A7B2EEEDB7210D68324D7D_StaticFields
{
public:
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMF_NVClip::FeedbackTypeAuthorized
	bool ___FeedbackTypeAuthorized_27;

public:
	inline static int32_t get_offset_of_FeedbackTypeAuthorized_27() { return static_cast<int32_t>(offsetof(MMF_NVClip_t2C34105F20849392D7A7B2EEEDB7210D68324D7D_StaticFields, ___FeedbackTypeAuthorized_27)); }
	inline bool get_FeedbackTypeAuthorized_27() const { return ___FeedbackTypeAuthorized_27; }
	inline bool* get_address_of_FeedbackTypeAuthorized_27() { return &___FeedbackTypeAuthorized_27; }
	inline void set_FeedbackTypeAuthorized_27(bool value)
	{
		___FeedbackTypeAuthorized_27 = value;
	}
};


// MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous
struct MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B  : public MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06
{
public:
	// System.Single MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous::MinAmplitude
	float ___MinAmplitude_28;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous::MaxAmplitude
	float ___MaxAmplitude_29;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous::MinFrequency
	float ___MinFrequency_30;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous::MaxFrequency
	float ___MaxFrequency_31;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous::MinDuration
	float ___MinDuration_32;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous::MaxDuration
	float ___MaxDuration_33;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous::UseRealTimeModulation
	bool ___UseRealTimeModulation_34;
	// UnityEngine.AnimationCurve MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous::AmplitudeMultiplication
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___AmplitudeMultiplication_35;
	// UnityEngine.AnimationCurve MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous::ShiftFrequency
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___ShiftFrequency_36;
	// MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous::HapticSettings
	MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * ___HapticSettings_37;
	// UnityEngine.Coroutine MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous::_coroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____coroutine_38;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous::_duration
	float ____duration_39;

public:
	inline static int32_t get_offset_of_MinAmplitude_28() { return static_cast<int32_t>(offsetof(MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B, ___MinAmplitude_28)); }
	inline float get_MinAmplitude_28() const { return ___MinAmplitude_28; }
	inline float* get_address_of_MinAmplitude_28() { return &___MinAmplitude_28; }
	inline void set_MinAmplitude_28(float value)
	{
		___MinAmplitude_28 = value;
	}

	inline static int32_t get_offset_of_MaxAmplitude_29() { return static_cast<int32_t>(offsetof(MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B, ___MaxAmplitude_29)); }
	inline float get_MaxAmplitude_29() const { return ___MaxAmplitude_29; }
	inline float* get_address_of_MaxAmplitude_29() { return &___MaxAmplitude_29; }
	inline void set_MaxAmplitude_29(float value)
	{
		___MaxAmplitude_29 = value;
	}

	inline static int32_t get_offset_of_MinFrequency_30() { return static_cast<int32_t>(offsetof(MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B, ___MinFrequency_30)); }
	inline float get_MinFrequency_30() const { return ___MinFrequency_30; }
	inline float* get_address_of_MinFrequency_30() { return &___MinFrequency_30; }
	inline void set_MinFrequency_30(float value)
	{
		___MinFrequency_30 = value;
	}

	inline static int32_t get_offset_of_MaxFrequency_31() { return static_cast<int32_t>(offsetof(MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B, ___MaxFrequency_31)); }
	inline float get_MaxFrequency_31() const { return ___MaxFrequency_31; }
	inline float* get_address_of_MaxFrequency_31() { return &___MaxFrequency_31; }
	inline void set_MaxFrequency_31(float value)
	{
		___MaxFrequency_31 = value;
	}

	inline static int32_t get_offset_of_MinDuration_32() { return static_cast<int32_t>(offsetof(MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B, ___MinDuration_32)); }
	inline float get_MinDuration_32() const { return ___MinDuration_32; }
	inline float* get_address_of_MinDuration_32() { return &___MinDuration_32; }
	inline void set_MinDuration_32(float value)
	{
		___MinDuration_32 = value;
	}

	inline static int32_t get_offset_of_MaxDuration_33() { return static_cast<int32_t>(offsetof(MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B, ___MaxDuration_33)); }
	inline float get_MaxDuration_33() const { return ___MaxDuration_33; }
	inline float* get_address_of_MaxDuration_33() { return &___MaxDuration_33; }
	inline void set_MaxDuration_33(float value)
	{
		___MaxDuration_33 = value;
	}

	inline static int32_t get_offset_of_UseRealTimeModulation_34() { return static_cast<int32_t>(offsetof(MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B, ___UseRealTimeModulation_34)); }
	inline bool get_UseRealTimeModulation_34() const { return ___UseRealTimeModulation_34; }
	inline bool* get_address_of_UseRealTimeModulation_34() { return &___UseRealTimeModulation_34; }
	inline void set_UseRealTimeModulation_34(bool value)
	{
		___UseRealTimeModulation_34 = value;
	}

	inline static int32_t get_offset_of_AmplitudeMultiplication_35() { return static_cast<int32_t>(offsetof(MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B, ___AmplitudeMultiplication_35)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_AmplitudeMultiplication_35() const { return ___AmplitudeMultiplication_35; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_AmplitudeMultiplication_35() { return &___AmplitudeMultiplication_35; }
	inline void set_AmplitudeMultiplication_35(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___AmplitudeMultiplication_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AmplitudeMultiplication_35), (void*)value);
	}

	inline static int32_t get_offset_of_ShiftFrequency_36() { return static_cast<int32_t>(offsetof(MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B, ___ShiftFrequency_36)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_ShiftFrequency_36() const { return ___ShiftFrequency_36; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_ShiftFrequency_36() { return &___ShiftFrequency_36; }
	inline void set_ShiftFrequency_36(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___ShiftFrequency_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShiftFrequency_36), (void*)value);
	}

	inline static int32_t get_offset_of_HapticSettings_37() { return static_cast<int32_t>(offsetof(MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B, ___HapticSettings_37)); }
	inline MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * get_HapticSettings_37() const { return ___HapticSettings_37; }
	inline MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 ** get_address_of_HapticSettings_37() { return &___HapticSettings_37; }
	inline void set_HapticSettings_37(MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * value)
	{
		___HapticSettings_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HapticSettings_37), (void*)value);
	}

	inline static int32_t get_offset_of__coroutine_38() { return static_cast<int32_t>(offsetof(MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B, ____coroutine_38)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__coroutine_38() const { return ____coroutine_38; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__coroutine_38() { return &____coroutine_38; }
	inline void set__coroutine_38(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____coroutine_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____coroutine_38), (void*)value);
	}

	inline static int32_t get_offset_of__duration_39() { return static_cast<int32_t>(offsetof(MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B, ____duration_39)); }
	inline float get__duration_39() const { return ____duration_39; }
	inline float* get_address_of__duration_39() { return &____duration_39; }
	inline void set__duration_39(float value)
	{
		____duration_39 = value;
	}
};

struct MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B_StaticFields
{
public:
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous::FeedbackTypeAuthorized
	bool ___FeedbackTypeAuthorized_27;

public:
	inline static int32_t get_offset_of_FeedbackTypeAuthorized_27() { return static_cast<int32_t>(offsetof(MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B_StaticFields, ___FeedbackTypeAuthorized_27)); }
	inline bool get_FeedbackTypeAuthorized_27() const { return ___FeedbackTypeAuthorized_27; }
	inline bool* get_address_of_FeedbackTypeAuthorized_27() { return &___FeedbackTypeAuthorized_27; }
	inline void set_FeedbackTypeAuthorized_27(bool value)
	{
		___FeedbackTypeAuthorized_27 = value;
	}
};


// MoreMountains.FeedbacksForThirdParty.MMF_NVControl
struct MMF_NVControl_t8E0EA8AC28AF80544C78A918809DD701BF0885DC  : public MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06
{
public:
	// MoreMountains.FeedbacksForThirdParty.MMF_NVControl/ControlTypes MoreMountains.FeedbacksForThirdParty.MMF_NVControl::ControlType
	int32_t ___ControlType_28;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMF_NVControl::OutputLevel
	float ___OutputLevel_29;

public:
	inline static int32_t get_offset_of_ControlType_28() { return static_cast<int32_t>(offsetof(MMF_NVControl_t8E0EA8AC28AF80544C78A918809DD701BF0885DC, ___ControlType_28)); }
	inline int32_t get_ControlType_28() const { return ___ControlType_28; }
	inline int32_t* get_address_of_ControlType_28() { return &___ControlType_28; }
	inline void set_ControlType_28(int32_t value)
	{
		___ControlType_28 = value;
	}

	inline static int32_t get_offset_of_OutputLevel_29() { return static_cast<int32_t>(offsetof(MMF_NVControl_t8E0EA8AC28AF80544C78A918809DD701BF0885DC, ___OutputLevel_29)); }
	inline float get_OutputLevel_29() const { return ___OutputLevel_29; }
	inline float* get_address_of_OutputLevel_29() { return &___OutputLevel_29; }
	inline void set_OutputLevel_29(float value)
	{
		___OutputLevel_29 = value;
	}
};

struct MMF_NVControl_t8E0EA8AC28AF80544C78A918809DD701BF0885DC_StaticFields
{
public:
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMF_NVControl::FeedbackTypeAuthorized
	bool ___FeedbackTypeAuthorized_27;

public:
	inline static int32_t get_offset_of_FeedbackTypeAuthorized_27() { return static_cast<int32_t>(offsetof(MMF_NVControl_t8E0EA8AC28AF80544C78A918809DD701BF0885DC_StaticFields, ___FeedbackTypeAuthorized_27)); }
	inline bool get_FeedbackTypeAuthorized_27() const { return ___FeedbackTypeAuthorized_27; }
	inline bool* get_address_of_FeedbackTypeAuthorized_27() { return &___FeedbackTypeAuthorized_27; }
	inline void set_FeedbackTypeAuthorized_27(bool value)
	{
		___FeedbackTypeAuthorized_27 = value;
	}
};


// MoreMountains.FeedbacksForThirdParty.MMF_NVEmphasis
struct MMF_NVEmphasis_tD8521066CDDED276397C8CD28CE0B533549B2A72  : public MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06
{
public:
	// System.Single MoreMountains.FeedbacksForThirdParty.MMF_NVEmphasis::MinAmplitude
	float ___MinAmplitude_28;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMF_NVEmphasis::MaxAmplitude
	float ___MaxAmplitude_29;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMF_NVEmphasis::MinFrequency
	float ___MinFrequency_30;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMF_NVEmphasis::MaxFrequency
	float ___MaxFrequency_31;
	// MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings MoreMountains.FeedbacksForThirdParty.MMF_NVEmphasis::HapticSettings
	MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * ___HapticSettings_32;

public:
	inline static int32_t get_offset_of_MinAmplitude_28() { return static_cast<int32_t>(offsetof(MMF_NVEmphasis_tD8521066CDDED276397C8CD28CE0B533549B2A72, ___MinAmplitude_28)); }
	inline float get_MinAmplitude_28() const { return ___MinAmplitude_28; }
	inline float* get_address_of_MinAmplitude_28() { return &___MinAmplitude_28; }
	inline void set_MinAmplitude_28(float value)
	{
		___MinAmplitude_28 = value;
	}

	inline static int32_t get_offset_of_MaxAmplitude_29() { return static_cast<int32_t>(offsetof(MMF_NVEmphasis_tD8521066CDDED276397C8CD28CE0B533549B2A72, ___MaxAmplitude_29)); }
	inline float get_MaxAmplitude_29() const { return ___MaxAmplitude_29; }
	inline float* get_address_of_MaxAmplitude_29() { return &___MaxAmplitude_29; }
	inline void set_MaxAmplitude_29(float value)
	{
		___MaxAmplitude_29 = value;
	}

	inline static int32_t get_offset_of_MinFrequency_30() { return static_cast<int32_t>(offsetof(MMF_NVEmphasis_tD8521066CDDED276397C8CD28CE0B533549B2A72, ___MinFrequency_30)); }
	inline float get_MinFrequency_30() const { return ___MinFrequency_30; }
	inline float* get_address_of_MinFrequency_30() { return &___MinFrequency_30; }
	inline void set_MinFrequency_30(float value)
	{
		___MinFrequency_30 = value;
	}

	inline static int32_t get_offset_of_MaxFrequency_31() { return static_cast<int32_t>(offsetof(MMF_NVEmphasis_tD8521066CDDED276397C8CD28CE0B533549B2A72, ___MaxFrequency_31)); }
	inline float get_MaxFrequency_31() const { return ___MaxFrequency_31; }
	inline float* get_address_of_MaxFrequency_31() { return &___MaxFrequency_31; }
	inline void set_MaxFrequency_31(float value)
	{
		___MaxFrequency_31 = value;
	}

	inline static int32_t get_offset_of_HapticSettings_32() { return static_cast<int32_t>(offsetof(MMF_NVEmphasis_tD8521066CDDED276397C8CD28CE0B533549B2A72, ___HapticSettings_32)); }
	inline MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * get_HapticSettings_32() const { return ___HapticSettings_32; }
	inline MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 ** get_address_of_HapticSettings_32() { return &___HapticSettings_32; }
	inline void set_HapticSettings_32(MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * value)
	{
		___HapticSettings_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HapticSettings_32), (void*)value);
	}
};

struct MMF_NVEmphasis_tD8521066CDDED276397C8CD28CE0B533549B2A72_StaticFields
{
public:
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMF_NVEmphasis::FeedbackTypeAuthorized
	bool ___FeedbackTypeAuthorized_27;

public:
	inline static int32_t get_offset_of_FeedbackTypeAuthorized_27() { return static_cast<int32_t>(offsetof(MMF_NVEmphasis_tD8521066CDDED276397C8CD28CE0B533549B2A72_StaticFields, ___FeedbackTypeAuthorized_27)); }
	inline bool get_FeedbackTypeAuthorized_27() const { return ___FeedbackTypeAuthorized_27; }
	inline bool* get_address_of_FeedbackTypeAuthorized_27() { return &___FeedbackTypeAuthorized_27; }
	inline void set_FeedbackTypeAuthorized_27(bool value)
	{
		___FeedbackTypeAuthorized_27 = value;
	}
};


// MoreMountains.FeedbacksForThirdParty.MMF_NVPreset
struct MMF_NVPreset_t7F7B96BD663FDE47C65462564702E85920E1F50B  : public MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06
{
public:
	// Lofelt.NiceVibrations.HapticPatterns/PresetType MoreMountains.FeedbacksForThirdParty.MMF_NVPreset::Preset
	int32_t ___Preset_28;
	// MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings MoreMountains.FeedbacksForThirdParty.MMF_NVPreset::HapticSettings
	MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * ___HapticSettings_29;

public:
	inline static int32_t get_offset_of_Preset_28() { return static_cast<int32_t>(offsetof(MMF_NVPreset_t7F7B96BD663FDE47C65462564702E85920E1F50B, ___Preset_28)); }
	inline int32_t get_Preset_28() const { return ___Preset_28; }
	inline int32_t* get_address_of_Preset_28() { return &___Preset_28; }
	inline void set_Preset_28(int32_t value)
	{
		___Preset_28 = value;
	}

	inline static int32_t get_offset_of_HapticSettings_29() { return static_cast<int32_t>(offsetof(MMF_NVPreset_t7F7B96BD663FDE47C65462564702E85920E1F50B, ___HapticSettings_29)); }
	inline MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * get_HapticSettings_29() const { return ___HapticSettings_29; }
	inline MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 ** get_address_of_HapticSettings_29() { return &___HapticSettings_29; }
	inline void set_HapticSettings_29(MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * value)
	{
		___HapticSettings_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HapticSettings_29), (void*)value);
	}
};

struct MMF_NVPreset_t7F7B96BD663FDE47C65462564702E85920E1F50B_StaticFields
{
public:
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMF_NVPreset::FeedbackTypeAuthorized
	bool ___FeedbackTypeAuthorized_27;

public:
	inline static int32_t get_offset_of_FeedbackTypeAuthorized_27() { return static_cast<int32_t>(offsetof(MMF_NVPreset_t7F7B96BD663FDE47C65462564702E85920E1F50B_StaticFields, ___FeedbackTypeAuthorized_27)); }
	inline bool get_FeedbackTypeAuthorized_27() const { return ___FeedbackTypeAuthorized_27; }
	inline bool* get_address_of_FeedbackTypeAuthorized_27() { return &___FeedbackTypeAuthorized_27; }
	inline void set_FeedbackTypeAuthorized_27(bool value)
	{
		___FeedbackTypeAuthorized_27 = value;
	}
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
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


// Lofelt.NiceVibrations.HapticClip
struct HapticClip_tB9F6AE5F3AF34DE1409EF4F4EDEA14F8849AAC9F  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Byte[] Lofelt.NiceVibrations.HapticClip::json
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___json_4;
	// Lofelt.NiceVibrations.GamepadRumble Lofelt.NiceVibrations.HapticClip::gamepadRumble
	GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045  ___gamepadRumble_5;

public:
	inline static int32_t get_offset_of_json_4() { return static_cast<int32_t>(offsetof(HapticClip_tB9F6AE5F3AF34DE1409EF4F4EDEA14F8849AAC9F, ___json_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_json_4() const { return ___json_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_json_4() { return &___json_4; }
	inline void set_json_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___json_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___json_4), (void*)value);
	}

	inline static int32_t get_offset_of_gamepadRumble_5() { return static_cast<int32_t>(offsetof(HapticClip_tB9F6AE5F3AF34DE1409EF4F4EDEA14F8849AAC9F, ___gamepadRumble_5)); }
	inline GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045  get_gamepadRumble_5() const { return ___gamepadRumble_5; }
	inline GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045 * get_address_of_gamepadRumble_5() { return &___gamepadRumble_5; }
	inline void set_gamepadRumble_5(GamepadRumble_t9AFA1E08F984F772A1E71B07FA430E1D004E5045  value)
	{
		___gamepadRumble_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___gamepadRumble_5))->___durationsMs_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___gamepadRumble_5))->___lowFrequencyMotorSpeeds_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___gamepadRumble_5))->___highFrequencyMotorSpeeds_3), (void*)NULL);
		#endif
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// MoreMountains.Feedbacks.MMFeedbacks
struct MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<MoreMountains.Feedbacks.MMFeedback> MoreMountains.Feedbacks.MMFeedbacks::Feedbacks
	List_1_t65DB3FDD9079C29778530442558DE4285EB4A794 * ___Feedbacks_4;
	// MoreMountains.Feedbacks.MMFeedbacks/InitializationModes MoreMountains.Feedbacks.MMFeedbacks::InitializationMode
	int32_t ___InitializationMode_5;
	// MoreMountains.Feedbacks.MMFeedbacks/SafeModes MoreMountains.Feedbacks.MMFeedbacks::SafeMode
	int32_t ___SafeMode_6;
	// MoreMountains.Feedbacks.MMFeedbacks/Directions MoreMountains.Feedbacks.MMFeedbacks::Direction
	int32_t ___Direction_7;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbacks::AutoChangeDirectionOnEnd
	bool ___AutoChangeDirectionOnEnd_8;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbacks::AutoPlayOnStart
	bool ___AutoPlayOnStart_9;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbacks::AutoPlayOnEnable
	bool ___AutoPlayOnEnable_10;
	// System.Single MoreMountains.Feedbacks.MMFeedbacks::DurationMultiplier
	float ___DurationMultiplier_11;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbacks::DisplayFullDurationDetails
	bool ___DisplayFullDurationDetails_12;
	// System.Single MoreMountains.Feedbacks.MMFeedbacks::CooldownDuration
	float ___CooldownDuration_13;
	// System.Single MoreMountains.Feedbacks.MMFeedbacks::InitialDelay
	float ___InitialDelay_14;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbacks::CanPlayWhileAlreadyPlaying
	bool ___CanPlayWhileAlreadyPlaying_15;
	// System.Single MoreMountains.Feedbacks.MMFeedbacks::ChanceToPlay
	float ___ChanceToPlay_16;
	// System.Single MoreMountains.Feedbacks.MMFeedbacks::FeedbacksIntensity
	float ___FeedbacksIntensity_17;
	// MoreMountains.Feedbacks.MMFeedbacksEvents MoreMountains.Feedbacks.MMFeedbacks::Events
	MMFeedbacksEvents_tD97C44EABE3B4C421BC47194E569A5333306807A * ___Events_18;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbacks::DebugActive
	bool ___DebugActive_20;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbacks::<IsPlaying>k__BackingField
	bool ___U3CIsPlayingU3Ek__BackingField_21;
	// System.Int32 MoreMountains.Feedbacks.MMFeedbacks::<TimesPlayed>k__BackingField
	int32_t ___U3CTimesPlayedU3Ek__BackingField_22;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbacks::<InScriptDrivenPause>k__BackingField
	bool ___U3CInScriptDrivenPauseU3Ek__BackingField_23;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbacks::<ContainsLoop>k__BackingField
	bool ___U3CContainsLoopU3Ek__BackingField_24;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbacks::<ShouldRevertOnNextPlay>k__BackingField
	bool ___U3CShouldRevertOnNextPlayU3Ek__BackingField_25;
	// System.Single MoreMountains.Feedbacks.MMFeedbacks::_startTime
	float ____startTime_26;
	// System.Single MoreMountains.Feedbacks.MMFeedbacks::_holdingMax
	float ____holdingMax_27;
	// System.Single MoreMountains.Feedbacks.MMFeedbacks::_lastStartAt
	float ____lastStartAt_28;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbacks::_pauseFound
	bool ____pauseFound_29;
	// System.Single MoreMountains.Feedbacks.MMFeedbacks::_totalDuration
	float ____totalDuration_30;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbacks::_shouldStop
	bool ____shouldStop_31;

public:
	inline static int32_t get_offset_of_Feedbacks_4() { return static_cast<int32_t>(offsetof(MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914, ___Feedbacks_4)); }
	inline List_1_t65DB3FDD9079C29778530442558DE4285EB4A794 * get_Feedbacks_4() const { return ___Feedbacks_4; }
	inline List_1_t65DB3FDD9079C29778530442558DE4285EB4A794 ** get_address_of_Feedbacks_4() { return &___Feedbacks_4; }
	inline void set_Feedbacks_4(List_1_t65DB3FDD9079C29778530442558DE4285EB4A794 * value)
	{
		___Feedbacks_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Feedbacks_4), (void*)value);
	}

	inline static int32_t get_offset_of_InitializationMode_5() { return static_cast<int32_t>(offsetof(MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914, ___InitializationMode_5)); }
	inline int32_t get_InitializationMode_5() const { return ___InitializationMode_5; }
	inline int32_t* get_address_of_InitializationMode_5() { return &___InitializationMode_5; }
	inline void set_InitializationMode_5(int32_t value)
	{
		___InitializationMode_5 = value;
	}

	inline static int32_t get_offset_of_SafeMode_6() { return static_cast<int32_t>(offsetof(MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914, ___SafeMode_6)); }
	inline int32_t get_SafeMode_6() const { return ___SafeMode_6; }
	inline int32_t* get_address_of_SafeMode_6() { return &___SafeMode_6; }
	inline void set_SafeMode_6(int32_t value)
	{
		___SafeMode_6 = value;
	}

	inline static int32_t get_offset_of_Direction_7() { return static_cast<int32_t>(offsetof(MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914, ___Direction_7)); }
	inline int32_t get_Direction_7() const { return ___Direction_7; }
	inline int32_t* get_address_of_Direction_7() { return &___Direction_7; }
	inline void set_Direction_7(int32_t value)
	{
		___Direction_7 = value;
	}

	inline static int32_t get_offset_of_AutoChangeDirectionOnEnd_8() { return static_cast<int32_t>(offsetof(MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914, ___AutoChangeDirectionOnEnd_8)); }
	inline bool get_AutoChangeDirectionOnEnd_8() const { return ___AutoChangeDirectionOnEnd_8; }
	inline bool* get_address_of_AutoChangeDirectionOnEnd_8() { return &___AutoChangeDirectionOnEnd_8; }
	inline void set_AutoChangeDirectionOnEnd_8(bool value)
	{
		___AutoChangeDirectionOnEnd_8 = value;
	}

	inline static int32_t get_offset_of_AutoPlayOnStart_9() { return static_cast<int32_t>(offsetof(MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914, ___AutoPlayOnStart_9)); }
	inline bool get_AutoPlayOnStart_9() const { return ___AutoPlayOnStart_9; }
	inline bool* get_address_of_AutoPlayOnStart_9() { return &___AutoPlayOnStart_9; }
	inline void set_AutoPlayOnStart_9(bool value)
	{
		___AutoPlayOnStart_9 = value;
	}

	inline static int32_t get_offset_of_AutoPlayOnEnable_10() { return static_cast<int32_t>(offsetof(MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914, ___AutoPlayOnEnable_10)); }
	inline bool get_AutoPlayOnEnable_10() const { return ___AutoPlayOnEnable_10; }
	inline bool* get_address_of_AutoPlayOnEnable_10() { return &___AutoPlayOnEnable_10; }
	inline void set_AutoPlayOnEnable_10(bool value)
	{
		___AutoPlayOnEnable_10 = value;
	}

	inline static int32_t get_offset_of_DurationMultiplier_11() { return static_cast<int32_t>(offsetof(MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914, ___DurationMultiplier_11)); }
	inline float get_DurationMultiplier_11() const { return ___DurationMultiplier_11; }
	inline float* get_address_of_DurationMultiplier_11() { return &___DurationMultiplier_11; }
	inline void set_DurationMultiplier_11(float value)
	{
		___DurationMultiplier_11 = value;
	}

	inline static int32_t get_offset_of_DisplayFullDurationDetails_12() { return static_cast<int32_t>(offsetof(MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914, ___DisplayFullDurationDetails_12)); }
	inline bool get_DisplayFullDurationDetails_12() const { return ___DisplayFullDurationDetails_12; }
	inline bool* get_address_of_DisplayFullDurationDetails_12() { return &___DisplayFullDurationDetails_12; }
	inline void set_DisplayFullDurationDetails_12(bool value)
	{
		___DisplayFullDurationDetails_12 = value;
	}

	inline static int32_t get_offset_of_CooldownDuration_13() { return static_cast<int32_t>(offsetof(MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914, ___CooldownDuration_13)); }
	inline float get_CooldownDuration_13() const { return ___CooldownDuration_13; }
	inline float* get_address_of_CooldownDuration_13() { return &___CooldownDuration_13; }
	inline void set_CooldownDuration_13(float value)
	{
		___CooldownDuration_13 = value;
	}

	inline static int32_t get_offset_of_InitialDelay_14() { return static_cast<int32_t>(offsetof(MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914, ___InitialDelay_14)); }
	inline float get_InitialDelay_14() const { return ___InitialDelay_14; }
	inline float* get_address_of_InitialDelay_14() { return &___InitialDelay_14; }
	inline void set_InitialDelay_14(float value)
	{
		___InitialDelay_14 = value;
	}

	inline static int32_t get_offset_of_CanPlayWhileAlreadyPlaying_15() { return static_cast<int32_t>(offsetof(MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914, ___CanPlayWhileAlreadyPlaying_15)); }
	inline bool get_CanPlayWhileAlreadyPlaying_15() const { return ___CanPlayWhileAlreadyPlaying_15; }
	inline bool* get_address_of_CanPlayWhileAlreadyPlaying_15() { return &___CanPlayWhileAlreadyPlaying_15; }
	inline void set_CanPlayWhileAlreadyPlaying_15(bool value)
	{
		___CanPlayWhileAlreadyPlaying_15 = value;
	}

	inline static int32_t get_offset_of_ChanceToPlay_16() { return static_cast<int32_t>(offsetof(MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914, ___ChanceToPlay_16)); }
	inline float get_ChanceToPlay_16() const { return ___ChanceToPlay_16; }
	inline float* get_address_of_ChanceToPlay_16() { return &___ChanceToPlay_16; }
	inline void set_ChanceToPlay_16(float value)
	{
		___ChanceToPlay_16 = value;
	}

	inline static int32_t get_offset_of_FeedbacksIntensity_17() { return static_cast<int32_t>(offsetof(MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914, ___FeedbacksIntensity_17)); }
	inline float get_FeedbacksIntensity_17() const { return ___FeedbacksIntensity_17; }
	inline float* get_address_of_FeedbacksIntensity_17() { return &___FeedbacksIntensity_17; }
	inline void set_FeedbacksIntensity_17(float value)
	{
		___FeedbacksIntensity_17 = value;
	}

	inline static int32_t get_offset_of_Events_18() { return static_cast<int32_t>(offsetof(MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914, ___Events_18)); }
	inline MMFeedbacksEvents_tD97C44EABE3B4C421BC47194E569A5333306807A * get_Events_18() const { return ___Events_18; }
	inline MMFeedbacksEvents_tD97C44EABE3B4C421BC47194E569A5333306807A ** get_address_of_Events_18() { return &___Events_18; }
	inline void set_Events_18(MMFeedbacksEvents_tD97C44EABE3B4C421BC47194E569A5333306807A * value)
	{
		___Events_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Events_18), (void*)value);
	}

	inline static int32_t get_offset_of_DebugActive_20() { return static_cast<int32_t>(offsetof(MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914, ___DebugActive_20)); }
	inline bool get_DebugActive_20() const { return ___DebugActive_20; }
	inline bool* get_address_of_DebugActive_20() { return &___DebugActive_20; }
	inline void set_DebugActive_20(bool value)
	{
		___DebugActive_20 = value;
	}

	inline static int32_t get_offset_of_U3CIsPlayingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914, ___U3CIsPlayingU3Ek__BackingField_21)); }
	inline bool get_U3CIsPlayingU3Ek__BackingField_21() const { return ___U3CIsPlayingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CIsPlayingU3Ek__BackingField_21() { return &___U3CIsPlayingU3Ek__BackingField_21; }
	inline void set_U3CIsPlayingU3Ek__BackingField_21(bool value)
	{
		___U3CIsPlayingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CTimesPlayedU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914, ___U3CTimesPlayedU3Ek__BackingField_22)); }
	inline int32_t get_U3CTimesPlayedU3Ek__BackingField_22() const { return ___U3CTimesPlayedU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CTimesPlayedU3Ek__BackingField_22() { return &___U3CTimesPlayedU3Ek__BackingField_22; }
	inline void set_U3CTimesPlayedU3Ek__BackingField_22(int32_t value)
	{
		___U3CTimesPlayedU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CInScriptDrivenPauseU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914, ___U3CInScriptDrivenPauseU3Ek__BackingField_23)); }
	inline bool get_U3CInScriptDrivenPauseU3Ek__BackingField_23() const { return ___U3CInScriptDrivenPauseU3Ek__BackingField_23; }
	inline bool* get_address_of_U3CInScriptDrivenPauseU3Ek__BackingField_23() { return &___U3CInScriptDrivenPauseU3Ek__BackingField_23; }
	inline void set_U3CInScriptDrivenPauseU3Ek__BackingField_23(bool value)
	{
		___U3CInScriptDrivenPauseU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CContainsLoopU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914, ___U3CContainsLoopU3Ek__BackingField_24)); }
	inline bool get_U3CContainsLoopU3Ek__BackingField_24() const { return ___U3CContainsLoopU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CContainsLoopU3Ek__BackingField_24() { return &___U3CContainsLoopU3Ek__BackingField_24; }
	inline void set_U3CContainsLoopU3Ek__BackingField_24(bool value)
	{
		___U3CContainsLoopU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CShouldRevertOnNextPlayU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914, ___U3CShouldRevertOnNextPlayU3Ek__BackingField_25)); }
	inline bool get_U3CShouldRevertOnNextPlayU3Ek__BackingField_25() const { return ___U3CShouldRevertOnNextPlayU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CShouldRevertOnNextPlayU3Ek__BackingField_25() { return &___U3CShouldRevertOnNextPlayU3Ek__BackingField_25; }
	inline void set_U3CShouldRevertOnNextPlayU3Ek__BackingField_25(bool value)
	{
		___U3CShouldRevertOnNextPlayU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of__startTime_26() { return static_cast<int32_t>(offsetof(MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914, ____startTime_26)); }
	inline float get__startTime_26() const { return ____startTime_26; }
	inline float* get_address_of__startTime_26() { return &____startTime_26; }
	inline void set__startTime_26(float value)
	{
		____startTime_26 = value;
	}

	inline static int32_t get_offset_of__holdingMax_27() { return static_cast<int32_t>(offsetof(MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914, ____holdingMax_27)); }
	inline float get__holdingMax_27() const { return ____holdingMax_27; }
	inline float* get_address_of__holdingMax_27() { return &____holdingMax_27; }
	inline void set__holdingMax_27(float value)
	{
		____holdingMax_27 = value;
	}

	inline static int32_t get_offset_of__lastStartAt_28() { return static_cast<int32_t>(offsetof(MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914, ____lastStartAt_28)); }
	inline float get__lastStartAt_28() const { return ____lastStartAt_28; }
	inline float* get_address_of__lastStartAt_28() { return &____lastStartAt_28; }
	inline void set__lastStartAt_28(float value)
	{
		____lastStartAt_28 = value;
	}

	inline static int32_t get_offset_of__pauseFound_29() { return static_cast<int32_t>(offsetof(MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914, ____pauseFound_29)); }
	inline bool get__pauseFound_29() const { return ____pauseFound_29; }
	inline bool* get_address_of__pauseFound_29() { return &____pauseFound_29; }
	inline void set__pauseFound_29(bool value)
	{
		____pauseFound_29 = value;
	}

	inline static int32_t get_offset_of__totalDuration_30() { return static_cast<int32_t>(offsetof(MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914, ____totalDuration_30)); }
	inline float get__totalDuration_30() const { return ____totalDuration_30; }
	inline float* get_address_of__totalDuration_30() { return &____totalDuration_30; }
	inline void set__totalDuration_30(float value)
	{
		____totalDuration_30 = value;
	}

	inline static int32_t get_offset_of__shouldStop_31() { return static_cast<int32_t>(offsetof(MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914, ____shouldStop_31)); }
	inline bool get__shouldStop_31() const { return ____shouldStop_31; }
	inline bool* get_address_of__shouldStop_31() { return &____shouldStop_31; }
	inline void set__shouldStop_31(bool value)
	{
		____shouldStop_31 = value;
	}
};

struct MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914_StaticFields
{
public:
	// System.Boolean MoreMountains.Feedbacks.MMFeedbacks::GlobalMMFeedbacksActive
	bool ___GlobalMMFeedbacksActive_19;

public:
	inline static int32_t get_offset_of_GlobalMMFeedbacksActive_19() { return static_cast<int32_t>(offsetof(MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914_StaticFields, ___GlobalMMFeedbacksActive_19)); }
	inline bool get_GlobalMMFeedbacksActive_19() const { return ___GlobalMMFeedbacksActive_19; }
	inline bool* get_address_of_GlobalMMFeedbacksActive_19() { return &___GlobalMMFeedbacksActive_19; }
	inline void set_GlobalMMFeedbacksActive_19(bool value)
	{
		___GlobalMMFeedbacksActive_19 = value;
	}
};


// MoreMountains.Feedbacks.MMF_Player
struct MMF_Player_tC899A947C0F4E42B7461FAB8A051855F7BEF0A7D  : public MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914
{
public:
	// System.Collections.Generic.List`1<MoreMountains.Feedbacks.MMF_Feedback> MoreMountains.Feedbacks.MMF_Player::FeedbacksList
	List_1_t91011B8E4F4F08323FF95B0F0FD0791995EE8E53 * ___FeedbacksList_32;
	// System.Boolean MoreMountains.Feedbacks.MMF_Player::KeepPlayModeChanges
	bool ___KeepPlayModeChanges_33;
	// System.Boolean MoreMountains.Feedbacks.MMF_Player::PerformanceMode
	bool ___PerformanceMode_34;
	// System.Boolean MoreMountains.Feedbacks.MMF_Player::<SkippingToTheEnd>k__BackingField
	bool ___U3CSkippingToTheEndU3Ek__BackingField_35;
	// System.Type MoreMountains.Feedbacks.MMF_Player::_t
	Type_t * ____t_36;

public:
	inline static int32_t get_offset_of_FeedbacksList_32() { return static_cast<int32_t>(offsetof(MMF_Player_tC899A947C0F4E42B7461FAB8A051855F7BEF0A7D, ___FeedbacksList_32)); }
	inline List_1_t91011B8E4F4F08323FF95B0F0FD0791995EE8E53 * get_FeedbacksList_32() const { return ___FeedbacksList_32; }
	inline List_1_t91011B8E4F4F08323FF95B0F0FD0791995EE8E53 ** get_address_of_FeedbacksList_32() { return &___FeedbacksList_32; }
	inline void set_FeedbacksList_32(List_1_t91011B8E4F4F08323FF95B0F0FD0791995EE8E53 * value)
	{
		___FeedbacksList_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FeedbacksList_32), (void*)value);
	}

	inline static int32_t get_offset_of_KeepPlayModeChanges_33() { return static_cast<int32_t>(offsetof(MMF_Player_tC899A947C0F4E42B7461FAB8A051855F7BEF0A7D, ___KeepPlayModeChanges_33)); }
	inline bool get_KeepPlayModeChanges_33() const { return ___KeepPlayModeChanges_33; }
	inline bool* get_address_of_KeepPlayModeChanges_33() { return &___KeepPlayModeChanges_33; }
	inline void set_KeepPlayModeChanges_33(bool value)
	{
		___KeepPlayModeChanges_33 = value;
	}

	inline static int32_t get_offset_of_PerformanceMode_34() { return static_cast<int32_t>(offsetof(MMF_Player_tC899A947C0F4E42B7461FAB8A051855F7BEF0A7D, ___PerformanceMode_34)); }
	inline bool get_PerformanceMode_34() const { return ___PerformanceMode_34; }
	inline bool* get_address_of_PerformanceMode_34() { return &___PerformanceMode_34; }
	inline void set_PerformanceMode_34(bool value)
	{
		___PerformanceMode_34 = value;
	}

	inline static int32_t get_offset_of_U3CSkippingToTheEndU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(MMF_Player_tC899A947C0F4E42B7461FAB8A051855F7BEF0A7D, ___U3CSkippingToTheEndU3Ek__BackingField_35)); }
	inline bool get_U3CSkippingToTheEndU3Ek__BackingField_35() const { return ___U3CSkippingToTheEndU3Ek__BackingField_35; }
	inline bool* get_address_of_U3CSkippingToTheEndU3Ek__BackingField_35() { return &___U3CSkippingToTheEndU3Ek__BackingField_35; }
	inline void set_U3CSkippingToTheEndU3Ek__BackingField_35(bool value)
	{
		___U3CSkippingToTheEndU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of__t_36() { return static_cast<int32_t>(offsetof(MMF_Player_tC899A947C0F4E42B7461FAB8A051855F7BEF0A7D, ____t_36)); }
	inline Type_t * get__t_36() const { return ____t_36; }
	inline Type_t ** get_address_of__t_36() { return &____t_36; }
	inline void set__t_36(Type_t * value)
	{
		____t_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____t_36), (void*)value);
	}
};


// MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics
struct MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4  : public MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4
{
public:
	// MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics/HapticMethods MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::HapticMethod
	int32_t ___HapticMethod_29;
	// MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics/HapticTypes MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::HapticType
	int32_t ___HapticType_30;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::TransientIntensity
	float ___TransientIntensity_31;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::TransientSharpness
	float ___TransientSharpness_32;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::ATVibrateIOS
	bool ___ATVibrateIOS_33;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::ATIOSIntensity
	float ___ATIOSIntensity_34;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::ATIOSSharpness
	float ___ATIOSSharpness_35;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::ATVibrateAndroid
	bool ___ATVibrateAndroid_36;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::ATVibrateAndroidIfNoSupport
	bool ___ATVibrateAndroidIfNoSupport_37;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::ATAndroidIntensity
	float ___ATAndroidIntensity_38;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::ATAndroidSharpness
	float ___ATAndroidSharpness_39;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::ATRumble
	bool ___ATRumble_40;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::ATRumbleIntensity
	float ___ATRumbleIntensity_41;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::ATRumbleSharpness
	float ___ATRumbleSharpness_42;
	// System.Int32 MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::ATRumbleControllerID
	int32_t ___ATRumbleControllerID_43;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::InitialContinuousIntensity
	float ___InitialContinuousIntensity_44;
	// UnityEngine.AnimationCurve MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::ContinuousIntensityCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___ContinuousIntensityCurve_45;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::InitialContinuousSharpness
	float ___InitialContinuousSharpness_46;
	// UnityEngine.AnimationCurve MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::ContinuousSharpnessCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___ContinuousSharpnessCurve_47;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::ContinuousDuration
	float ___ContinuousDuration_48;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::APVibrateIOS
	bool ___APVibrateIOS_49;
	// UnityEngine.TextAsset MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::AHAPFileForIOS
	TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * ___AHAPFileForIOS_50;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::APVibrateAndroid
	bool ___APVibrateAndroid_51;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::APVibrateAndroidIfNoSupport
	bool ___APVibrateAndroidIfNoSupport_52;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::APRumble
	bool ___APRumble_53;
	// System.Int32 MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::AndroidRepeat
	int32_t ___AndroidRepeat_54;
	// System.Int32 MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::RumbleRepeat
	int32_t ___RumbleRepeat_55;
	// MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics/HapticTypes MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::OldIOSFallback
	int32_t ___OldIOSFallback_56;
	// MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics/Timescales MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::Timescale
	int32_t ___Timescale_57;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::AllowRumble
	bool ___AllowRumble_58;
	// System.Int32 MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::ControllerID
	int32_t ___ControllerID_59;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::OutputDeprecationWarning
	bool ___OutputDeprecationWarning_60;

public:
	inline static int32_t get_offset_of_HapticMethod_29() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4, ___HapticMethod_29)); }
	inline int32_t get_HapticMethod_29() const { return ___HapticMethod_29; }
	inline int32_t* get_address_of_HapticMethod_29() { return &___HapticMethod_29; }
	inline void set_HapticMethod_29(int32_t value)
	{
		___HapticMethod_29 = value;
	}

	inline static int32_t get_offset_of_HapticType_30() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4, ___HapticType_30)); }
	inline int32_t get_HapticType_30() const { return ___HapticType_30; }
	inline int32_t* get_address_of_HapticType_30() { return &___HapticType_30; }
	inline void set_HapticType_30(int32_t value)
	{
		___HapticType_30 = value;
	}

	inline static int32_t get_offset_of_TransientIntensity_31() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4, ___TransientIntensity_31)); }
	inline float get_TransientIntensity_31() const { return ___TransientIntensity_31; }
	inline float* get_address_of_TransientIntensity_31() { return &___TransientIntensity_31; }
	inline void set_TransientIntensity_31(float value)
	{
		___TransientIntensity_31 = value;
	}

	inline static int32_t get_offset_of_TransientSharpness_32() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4, ___TransientSharpness_32)); }
	inline float get_TransientSharpness_32() const { return ___TransientSharpness_32; }
	inline float* get_address_of_TransientSharpness_32() { return &___TransientSharpness_32; }
	inline void set_TransientSharpness_32(float value)
	{
		___TransientSharpness_32 = value;
	}

	inline static int32_t get_offset_of_ATVibrateIOS_33() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4, ___ATVibrateIOS_33)); }
	inline bool get_ATVibrateIOS_33() const { return ___ATVibrateIOS_33; }
	inline bool* get_address_of_ATVibrateIOS_33() { return &___ATVibrateIOS_33; }
	inline void set_ATVibrateIOS_33(bool value)
	{
		___ATVibrateIOS_33 = value;
	}

	inline static int32_t get_offset_of_ATIOSIntensity_34() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4, ___ATIOSIntensity_34)); }
	inline float get_ATIOSIntensity_34() const { return ___ATIOSIntensity_34; }
	inline float* get_address_of_ATIOSIntensity_34() { return &___ATIOSIntensity_34; }
	inline void set_ATIOSIntensity_34(float value)
	{
		___ATIOSIntensity_34 = value;
	}

	inline static int32_t get_offset_of_ATIOSSharpness_35() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4, ___ATIOSSharpness_35)); }
	inline float get_ATIOSSharpness_35() const { return ___ATIOSSharpness_35; }
	inline float* get_address_of_ATIOSSharpness_35() { return &___ATIOSSharpness_35; }
	inline void set_ATIOSSharpness_35(float value)
	{
		___ATIOSSharpness_35 = value;
	}

	inline static int32_t get_offset_of_ATVibrateAndroid_36() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4, ___ATVibrateAndroid_36)); }
	inline bool get_ATVibrateAndroid_36() const { return ___ATVibrateAndroid_36; }
	inline bool* get_address_of_ATVibrateAndroid_36() { return &___ATVibrateAndroid_36; }
	inline void set_ATVibrateAndroid_36(bool value)
	{
		___ATVibrateAndroid_36 = value;
	}

	inline static int32_t get_offset_of_ATVibrateAndroidIfNoSupport_37() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4, ___ATVibrateAndroidIfNoSupport_37)); }
	inline bool get_ATVibrateAndroidIfNoSupport_37() const { return ___ATVibrateAndroidIfNoSupport_37; }
	inline bool* get_address_of_ATVibrateAndroidIfNoSupport_37() { return &___ATVibrateAndroidIfNoSupport_37; }
	inline void set_ATVibrateAndroidIfNoSupport_37(bool value)
	{
		___ATVibrateAndroidIfNoSupport_37 = value;
	}

	inline static int32_t get_offset_of_ATAndroidIntensity_38() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4, ___ATAndroidIntensity_38)); }
	inline float get_ATAndroidIntensity_38() const { return ___ATAndroidIntensity_38; }
	inline float* get_address_of_ATAndroidIntensity_38() { return &___ATAndroidIntensity_38; }
	inline void set_ATAndroidIntensity_38(float value)
	{
		___ATAndroidIntensity_38 = value;
	}

	inline static int32_t get_offset_of_ATAndroidSharpness_39() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4, ___ATAndroidSharpness_39)); }
	inline float get_ATAndroidSharpness_39() const { return ___ATAndroidSharpness_39; }
	inline float* get_address_of_ATAndroidSharpness_39() { return &___ATAndroidSharpness_39; }
	inline void set_ATAndroidSharpness_39(float value)
	{
		___ATAndroidSharpness_39 = value;
	}

	inline static int32_t get_offset_of_ATRumble_40() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4, ___ATRumble_40)); }
	inline bool get_ATRumble_40() const { return ___ATRumble_40; }
	inline bool* get_address_of_ATRumble_40() { return &___ATRumble_40; }
	inline void set_ATRumble_40(bool value)
	{
		___ATRumble_40 = value;
	}

	inline static int32_t get_offset_of_ATRumbleIntensity_41() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4, ___ATRumbleIntensity_41)); }
	inline float get_ATRumbleIntensity_41() const { return ___ATRumbleIntensity_41; }
	inline float* get_address_of_ATRumbleIntensity_41() { return &___ATRumbleIntensity_41; }
	inline void set_ATRumbleIntensity_41(float value)
	{
		___ATRumbleIntensity_41 = value;
	}

	inline static int32_t get_offset_of_ATRumbleSharpness_42() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4, ___ATRumbleSharpness_42)); }
	inline float get_ATRumbleSharpness_42() const { return ___ATRumbleSharpness_42; }
	inline float* get_address_of_ATRumbleSharpness_42() { return &___ATRumbleSharpness_42; }
	inline void set_ATRumbleSharpness_42(float value)
	{
		___ATRumbleSharpness_42 = value;
	}

	inline static int32_t get_offset_of_ATRumbleControllerID_43() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4, ___ATRumbleControllerID_43)); }
	inline int32_t get_ATRumbleControllerID_43() const { return ___ATRumbleControllerID_43; }
	inline int32_t* get_address_of_ATRumbleControllerID_43() { return &___ATRumbleControllerID_43; }
	inline void set_ATRumbleControllerID_43(int32_t value)
	{
		___ATRumbleControllerID_43 = value;
	}

	inline static int32_t get_offset_of_InitialContinuousIntensity_44() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4, ___InitialContinuousIntensity_44)); }
	inline float get_InitialContinuousIntensity_44() const { return ___InitialContinuousIntensity_44; }
	inline float* get_address_of_InitialContinuousIntensity_44() { return &___InitialContinuousIntensity_44; }
	inline void set_InitialContinuousIntensity_44(float value)
	{
		___InitialContinuousIntensity_44 = value;
	}

	inline static int32_t get_offset_of_ContinuousIntensityCurve_45() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4, ___ContinuousIntensityCurve_45)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_ContinuousIntensityCurve_45() const { return ___ContinuousIntensityCurve_45; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_ContinuousIntensityCurve_45() { return &___ContinuousIntensityCurve_45; }
	inline void set_ContinuousIntensityCurve_45(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___ContinuousIntensityCurve_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ContinuousIntensityCurve_45), (void*)value);
	}

	inline static int32_t get_offset_of_InitialContinuousSharpness_46() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4, ___InitialContinuousSharpness_46)); }
	inline float get_InitialContinuousSharpness_46() const { return ___InitialContinuousSharpness_46; }
	inline float* get_address_of_InitialContinuousSharpness_46() { return &___InitialContinuousSharpness_46; }
	inline void set_InitialContinuousSharpness_46(float value)
	{
		___InitialContinuousSharpness_46 = value;
	}

	inline static int32_t get_offset_of_ContinuousSharpnessCurve_47() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4, ___ContinuousSharpnessCurve_47)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_ContinuousSharpnessCurve_47() const { return ___ContinuousSharpnessCurve_47; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_ContinuousSharpnessCurve_47() { return &___ContinuousSharpnessCurve_47; }
	inline void set_ContinuousSharpnessCurve_47(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___ContinuousSharpnessCurve_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ContinuousSharpnessCurve_47), (void*)value);
	}

	inline static int32_t get_offset_of_ContinuousDuration_48() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4, ___ContinuousDuration_48)); }
	inline float get_ContinuousDuration_48() const { return ___ContinuousDuration_48; }
	inline float* get_address_of_ContinuousDuration_48() { return &___ContinuousDuration_48; }
	inline void set_ContinuousDuration_48(float value)
	{
		___ContinuousDuration_48 = value;
	}

	inline static int32_t get_offset_of_APVibrateIOS_49() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4, ___APVibrateIOS_49)); }
	inline bool get_APVibrateIOS_49() const { return ___APVibrateIOS_49; }
	inline bool* get_address_of_APVibrateIOS_49() { return &___APVibrateIOS_49; }
	inline void set_APVibrateIOS_49(bool value)
	{
		___APVibrateIOS_49 = value;
	}

	inline static int32_t get_offset_of_AHAPFileForIOS_50() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4, ___AHAPFileForIOS_50)); }
	inline TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * get_AHAPFileForIOS_50() const { return ___AHAPFileForIOS_50; }
	inline TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 ** get_address_of_AHAPFileForIOS_50() { return &___AHAPFileForIOS_50; }
	inline void set_AHAPFileForIOS_50(TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * value)
	{
		___AHAPFileForIOS_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AHAPFileForIOS_50), (void*)value);
	}

	inline static int32_t get_offset_of_APVibrateAndroid_51() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4, ___APVibrateAndroid_51)); }
	inline bool get_APVibrateAndroid_51() const { return ___APVibrateAndroid_51; }
	inline bool* get_address_of_APVibrateAndroid_51() { return &___APVibrateAndroid_51; }
	inline void set_APVibrateAndroid_51(bool value)
	{
		___APVibrateAndroid_51 = value;
	}

	inline static int32_t get_offset_of_APVibrateAndroidIfNoSupport_52() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4, ___APVibrateAndroidIfNoSupport_52)); }
	inline bool get_APVibrateAndroidIfNoSupport_52() const { return ___APVibrateAndroidIfNoSupport_52; }
	inline bool* get_address_of_APVibrateAndroidIfNoSupport_52() { return &___APVibrateAndroidIfNoSupport_52; }
	inline void set_APVibrateAndroidIfNoSupport_52(bool value)
	{
		___APVibrateAndroidIfNoSupport_52 = value;
	}

	inline static int32_t get_offset_of_APRumble_53() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4, ___APRumble_53)); }
	inline bool get_APRumble_53() const { return ___APRumble_53; }
	inline bool* get_address_of_APRumble_53() { return &___APRumble_53; }
	inline void set_APRumble_53(bool value)
	{
		___APRumble_53 = value;
	}

	inline static int32_t get_offset_of_AndroidRepeat_54() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4, ___AndroidRepeat_54)); }
	inline int32_t get_AndroidRepeat_54() const { return ___AndroidRepeat_54; }
	inline int32_t* get_address_of_AndroidRepeat_54() { return &___AndroidRepeat_54; }
	inline void set_AndroidRepeat_54(int32_t value)
	{
		___AndroidRepeat_54 = value;
	}

	inline static int32_t get_offset_of_RumbleRepeat_55() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4, ___RumbleRepeat_55)); }
	inline int32_t get_RumbleRepeat_55() const { return ___RumbleRepeat_55; }
	inline int32_t* get_address_of_RumbleRepeat_55() { return &___RumbleRepeat_55; }
	inline void set_RumbleRepeat_55(int32_t value)
	{
		___RumbleRepeat_55 = value;
	}

	inline static int32_t get_offset_of_OldIOSFallback_56() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4, ___OldIOSFallback_56)); }
	inline int32_t get_OldIOSFallback_56() const { return ___OldIOSFallback_56; }
	inline int32_t* get_address_of_OldIOSFallback_56() { return &___OldIOSFallback_56; }
	inline void set_OldIOSFallback_56(int32_t value)
	{
		___OldIOSFallback_56 = value;
	}

	inline static int32_t get_offset_of_Timescale_57() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4, ___Timescale_57)); }
	inline int32_t get_Timescale_57() const { return ___Timescale_57; }
	inline int32_t* get_address_of_Timescale_57() { return &___Timescale_57; }
	inline void set_Timescale_57(int32_t value)
	{
		___Timescale_57 = value;
	}

	inline static int32_t get_offset_of_AllowRumble_58() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4, ___AllowRumble_58)); }
	inline bool get_AllowRumble_58() const { return ___AllowRumble_58; }
	inline bool* get_address_of_AllowRumble_58() { return &___AllowRumble_58; }
	inline void set_AllowRumble_58(bool value)
	{
		___AllowRumble_58 = value;
	}

	inline static int32_t get_offset_of_ControllerID_59() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4, ___ControllerID_59)); }
	inline int32_t get_ControllerID_59() const { return ___ControllerID_59; }
	inline int32_t* get_address_of_ControllerID_59() { return &___ControllerID_59; }
	inline void set_ControllerID_59(int32_t value)
	{
		___ControllerID_59 = value;
	}

	inline static int32_t get_offset_of_OutputDeprecationWarning_60() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4, ___OutputDeprecationWarning_60)); }
	inline bool get_OutputDeprecationWarning_60() const { return ___OutputDeprecationWarning_60; }
	inline bool* get_address_of_OutputDeprecationWarning_60() { return &___OutputDeprecationWarning_60; }
	inline void set_OutputDeprecationWarning_60(bool value)
	{
		___OutputDeprecationWarning_60 = value;
	}
};

struct MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4_StaticFields
{
public:
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::FeedbackTypeAuthorized
	bool ___FeedbackTypeAuthorized_28;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::_continuousPlaying
	bool ____continuousPlaying_61;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::_continuousStartedAt
	float ____continuousStartedAt_62;

public:
	inline static int32_t get_offset_of_FeedbackTypeAuthorized_28() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4_StaticFields, ___FeedbackTypeAuthorized_28)); }
	inline bool get_FeedbackTypeAuthorized_28() const { return ___FeedbackTypeAuthorized_28; }
	inline bool* get_address_of_FeedbackTypeAuthorized_28() { return &___FeedbackTypeAuthorized_28; }
	inline void set_FeedbackTypeAuthorized_28(bool value)
	{
		___FeedbackTypeAuthorized_28 = value;
	}

	inline static int32_t get_offset_of__continuousPlaying_61() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4_StaticFields, ____continuousPlaying_61)); }
	inline bool get__continuousPlaying_61() const { return ____continuousPlaying_61; }
	inline bool* get_address_of__continuousPlaying_61() { return &____continuousPlaying_61; }
	inline void set__continuousPlaying_61(bool value)
	{
		____continuousPlaying_61 = value;
	}

	inline static int32_t get_offset_of__continuousStartedAt_62() { return static_cast<int32_t>(offsetof(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4_StaticFields, ____continuousStartedAt_62)); }
	inline float get__continuousStartedAt_62() const { return ____continuousStartedAt_62; }
	inline float* get_address_of__continuousStartedAt_62() { return &____continuousStartedAt_62; }
	inline void set__continuousStartedAt_62(float value)
	{
		____continuousStartedAt_62 = value;
	}
};


// MoreMountains.FeedbacksForThirdParty.MMFeedbackNVClip
struct MMFeedbackNVClip_t502CF6ABD673FAC9A4AB6FC907AE09459F6F9418  : public MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4
{
public:
	// Lofelt.NiceVibrations.HapticClip MoreMountains.FeedbacksForThirdParty.MMFeedbackNVClip::Clip
	HapticClip_tB9F6AE5F3AF34DE1409EF4F4EDEA14F8849AAC9F * ___Clip_29;
	// Lofelt.NiceVibrations.HapticPatterns/PresetType MoreMountains.FeedbacksForThirdParty.MMFeedbackNVClip::FallbackPreset
	int32_t ___FallbackPreset_30;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackNVClip::Loop
	bool ___Loop_31;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMFeedbackNVClip::SeekTime
	float ___SeekTime_32;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMFeedbackNVClip::MinLevel
	float ___MinLevel_33;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMFeedbackNVClip::MaxLevel
	float ___MaxLevel_34;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMFeedbackNVClip::MinFrequencyShift
	float ___MinFrequencyShift_35;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMFeedbackNVClip::MaxFrequencyShift
	float ___MaxFrequencyShift_36;
	// MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings MoreMountains.FeedbacksForThirdParty.MMFeedbackNVClip::HapticSettings
	MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * ___HapticSettings_37;

public:
	inline static int32_t get_offset_of_Clip_29() { return static_cast<int32_t>(offsetof(MMFeedbackNVClip_t502CF6ABD673FAC9A4AB6FC907AE09459F6F9418, ___Clip_29)); }
	inline HapticClip_tB9F6AE5F3AF34DE1409EF4F4EDEA14F8849AAC9F * get_Clip_29() const { return ___Clip_29; }
	inline HapticClip_tB9F6AE5F3AF34DE1409EF4F4EDEA14F8849AAC9F ** get_address_of_Clip_29() { return &___Clip_29; }
	inline void set_Clip_29(HapticClip_tB9F6AE5F3AF34DE1409EF4F4EDEA14F8849AAC9F * value)
	{
		___Clip_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Clip_29), (void*)value);
	}

	inline static int32_t get_offset_of_FallbackPreset_30() { return static_cast<int32_t>(offsetof(MMFeedbackNVClip_t502CF6ABD673FAC9A4AB6FC907AE09459F6F9418, ___FallbackPreset_30)); }
	inline int32_t get_FallbackPreset_30() const { return ___FallbackPreset_30; }
	inline int32_t* get_address_of_FallbackPreset_30() { return &___FallbackPreset_30; }
	inline void set_FallbackPreset_30(int32_t value)
	{
		___FallbackPreset_30 = value;
	}

	inline static int32_t get_offset_of_Loop_31() { return static_cast<int32_t>(offsetof(MMFeedbackNVClip_t502CF6ABD673FAC9A4AB6FC907AE09459F6F9418, ___Loop_31)); }
	inline bool get_Loop_31() const { return ___Loop_31; }
	inline bool* get_address_of_Loop_31() { return &___Loop_31; }
	inline void set_Loop_31(bool value)
	{
		___Loop_31 = value;
	}

	inline static int32_t get_offset_of_SeekTime_32() { return static_cast<int32_t>(offsetof(MMFeedbackNVClip_t502CF6ABD673FAC9A4AB6FC907AE09459F6F9418, ___SeekTime_32)); }
	inline float get_SeekTime_32() const { return ___SeekTime_32; }
	inline float* get_address_of_SeekTime_32() { return &___SeekTime_32; }
	inline void set_SeekTime_32(float value)
	{
		___SeekTime_32 = value;
	}

	inline static int32_t get_offset_of_MinLevel_33() { return static_cast<int32_t>(offsetof(MMFeedbackNVClip_t502CF6ABD673FAC9A4AB6FC907AE09459F6F9418, ___MinLevel_33)); }
	inline float get_MinLevel_33() const { return ___MinLevel_33; }
	inline float* get_address_of_MinLevel_33() { return &___MinLevel_33; }
	inline void set_MinLevel_33(float value)
	{
		___MinLevel_33 = value;
	}

	inline static int32_t get_offset_of_MaxLevel_34() { return static_cast<int32_t>(offsetof(MMFeedbackNVClip_t502CF6ABD673FAC9A4AB6FC907AE09459F6F9418, ___MaxLevel_34)); }
	inline float get_MaxLevel_34() const { return ___MaxLevel_34; }
	inline float* get_address_of_MaxLevel_34() { return &___MaxLevel_34; }
	inline void set_MaxLevel_34(float value)
	{
		___MaxLevel_34 = value;
	}

	inline static int32_t get_offset_of_MinFrequencyShift_35() { return static_cast<int32_t>(offsetof(MMFeedbackNVClip_t502CF6ABD673FAC9A4AB6FC907AE09459F6F9418, ___MinFrequencyShift_35)); }
	inline float get_MinFrequencyShift_35() const { return ___MinFrequencyShift_35; }
	inline float* get_address_of_MinFrequencyShift_35() { return &___MinFrequencyShift_35; }
	inline void set_MinFrequencyShift_35(float value)
	{
		___MinFrequencyShift_35 = value;
	}

	inline static int32_t get_offset_of_MaxFrequencyShift_36() { return static_cast<int32_t>(offsetof(MMFeedbackNVClip_t502CF6ABD673FAC9A4AB6FC907AE09459F6F9418, ___MaxFrequencyShift_36)); }
	inline float get_MaxFrequencyShift_36() const { return ___MaxFrequencyShift_36; }
	inline float* get_address_of_MaxFrequencyShift_36() { return &___MaxFrequencyShift_36; }
	inline void set_MaxFrequencyShift_36(float value)
	{
		___MaxFrequencyShift_36 = value;
	}

	inline static int32_t get_offset_of_HapticSettings_37() { return static_cast<int32_t>(offsetof(MMFeedbackNVClip_t502CF6ABD673FAC9A4AB6FC907AE09459F6F9418, ___HapticSettings_37)); }
	inline MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * get_HapticSettings_37() const { return ___HapticSettings_37; }
	inline MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 ** get_address_of_HapticSettings_37() { return &___HapticSettings_37; }
	inline void set_HapticSettings_37(MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * value)
	{
		___HapticSettings_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HapticSettings_37), (void*)value);
	}
};

struct MMFeedbackNVClip_t502CF6ABD673FAC9A4AB6FC907AE09459F6F9418_StaticFields
{
public:
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackNVClip::FeedbackTypeAuthorized
	bool ___FeedbackTypeAuthorized_28;

public:
	inline static int32_t get_offset_of_FeedbackTypeAuthorized_28() { return static_cast<int32_t>(offsetof(MMFeedbackNVClip_t502CF6ABD673FAC9A4AB6FC907AE09459F6F9418_StaticFields, ___FeedbackTypeAuthorized_28)); }
	inline bool get_FeedbackTypeAuthorized_28() const { return ___FeedbackTypeAuthorized_28; }
	inline bool* get_address_of_FeedbackTypeAuthorized_28() { return &___FeedbackTypeAuthorized_28; }
	inline void set_FeedbackTypeAuthorized_28(bool value)
	{
		___FeedbackTypeAuthorized_28 = value;
	}
};


// MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous
struct MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6  : public MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4
{
public:
	// System.Single MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous::MinAmplitude
	float ___MinAmplitude_29;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous::MaxAmplitude
	float ___MaxAmplitude_30;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous::MinFrequency
	float ___MinFrequency_31;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous::MaxFrequency
	float ___MaxFrequency_32;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous::MinDuration
	float ___MinDuration_33;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous::MaxDuration
	float ___MaxDuration_34;
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous::UseRealTimeModulation
	bool ___UseRealTimeModulation_35;
	// UnityEngine.AnimationCurve MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous::AmplitudeMultiplication
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___AmplitudeMultiplication_36;
	// UnityEngine.AnimationCurve MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous::ShiftFrequency
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___ShiftFrequency_37;
	// MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous::HapticSettings
	MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * ___HapticSettings_38;
	// UnityEngine.Coroutine MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous::_coroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____coroutine_39;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous::_duration
	float ____duration_40;

public:
	inline static int32_t get_offset_of_MinAmplitude_29() { return static_cast<int32_t>(offsetof(MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6, ___MinAmplitude_29)); }
	inline float get_MinAmplitude_29() const { return ___MinAmplitude_29; }
	inline float* get_address_of_MinAmplitude_29() { return &___MinAmplitude_29; }
	inline void set_MinAmplitude_29(float value)
	{
		___MinAmplitude_29 = value;
	}

	inline static int32_t get_offset_of_MaxAmplitude_30() { return static_cast<int32_t>(offsetof(MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6, ___MaxAmplitude_30)); }
	inline float get_MaxAmplitude_30() const { return ___MaxAmplitude_30; }
	inline float* get_address_of_MaxAmplitude_30() { return &___MaxAmplitude_30; }
	inline void set_MaxAmplitude_30(float value)
	{
		___MaxAmplitude_30 = value;
	}

	inline static int32_t get_offset_of_MinFrequency_31() { return static_cast<int32_t>(offsetof(MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6, ___MinFrequency_31)); }
	inline float get_MinFrequency_31() const { return ___MinFrequency_31; }
	inline float* get_address_of_MinFrequency_31() { return &___MinFrequency_31; }
	inline void set_MinFrequency_31(float value)
	{
		___MinFrequency_31 = value;
	}

	inline static int32_t get_offset_of_MaxFrequency_32() { return static_cast<int32_t>(offsetof(MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6, ___MaxFrequency_32)); }
	inline float get_MaxFrequency_32() const { return ___MaxFrequency_32; }
	inline float* get_address_of_MaxFrequency_32() { return &___MaxFrequency_32; }
	inline void set_MaxFrequency_32(float value)
	{
		___MaxFrequency_32 = value;
	}

	inline static int32_t get_offset_of_MinDuration_33() { return static_cast<int32_t>(offsetof(MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6, ___MinDuration_33)); }
	inline float get_MinDuration_33() const { return ___MinDuration_33; }
	inline float* get_address_of_MinDuration_33() { return &___MinDuration_33; }
	inline void set_MinDuration_33(float value)
	{
		___MinDuration_33 = value;
	}

	inline static int32_t get_offset_of_MaxDuration_34() { return static_cast<int32_t>(offsetof(MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6, ___MaxDuration_34)); }
	inline float get_MaxDuration_34() const { return ___MaxDuration_34; }
	inline float* get_address_of_MaxDuration_34() { return &___MaxDuration_34; }
	inline void set_MaxDuration_34(float value)
	{
		___MaxDuration_34 = value;
	}

	inline static int32_t get_offset_of_UseRealTimeModulation_35() { return static_cast<int32_t>(offsetof(MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6, ___UseRealTimeModulation_35)); }
	inline bool get_UseRealTimeModulation_35() const { return ___UseRealTimeModulation_35; }
	inline bool* get_address_of_UseRealTimeModulation_35() { return &___UseRealTimeModulation_35; }
	inline void set_UseRealTimeModulation_35(bool value)
	{
		___UseRealTimeModulation_35 = value;
	}

	inline static int32_t get_offset_of_AmplitudeMultiplication_36() { return static_cast<int32_t>(offsetof(MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6, ___AmplitudeMultiplication_36)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_AmplitudeMultiplication_36() const { return ___AmplitudeMultiplication_36; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_AmplitudeMultiplication_36() { return &___AmplitudeMultiplication_36; }
	inline void set_AmplitudeMultiplication_36(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___AmplitudeMultiplication_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AmplitudeMultiplication_36), (void*)value);
	}

	inline static int32_t get_offset_of_ShiftFrequency_37() { return static_cast<int32_t>(offsetof(MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6, ___ShiftFrequency_37)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_ShiftFrequency_37() const { return ___ShiftFrequency_37; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_ShiftFrequency_37() { return &___ShiftFrequency_37; }
	inline void set_ShiftFrequency_37(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___ShiftFrequency_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShiftFrequency_37), (void*)value);
	}

	inline static int32_t get_offset_of_HapticSettings_38() { return static_cast<int32_t>(offsetof(MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6, ___HapticSettings_38)); }
	inline MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * get_HapticSettings_38() const { return ___HapticSettings_38; }
	inline MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 ** get_address_of_HapticSettings_38() { return &___HapticSettings_38; }
	inline void set_HapticSettings_38(MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * value)
	{
		___HapticSettings_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HapticSettings_38), (void*)value);
	}

	inline static int32_t get_offset_of__coroutine_39() { return static_cast<int32_t>(offsetof(MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6, ____coroutine_39)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__coroutine_39() const { return ____coroutine_39; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__coroutine_39() { return &____coroutine_39; }
	inline void set__coroutine_39(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____coroutine_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____coroutine_39), (void*)value);
	}

	inline static int32_t get_offset_of__duration_40() { return static_cast<int32_t>(offsetof(MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6, ____duration_40)); }
	inline float get__duration_40() const { return ____duration_40; }
	inline float* get_address_of__duration_40() { return &____duration_40; }
	inline void set__duration_40(float value)
	{
		____duration_40 = value;
	}
};

struct MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6_StaticFields
{
public:
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous::FeedbackTypeAuthorized
	bool ___FeedbackTypeAuthorized_28;

public:
	inline static int32_t get_offset_of_FeedbackTypeAuthorized_28() { return static_cast<int32_t>(offsetof(MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6_StaticFields, ___FeedbackTypeAuthorized_28)); }
	inline bool get_FeedbackTypeAuthorized_28() const { return ___FeedbackTypeAuthorized_28; }
	inline bool* get_address_of_FeedbackTypeAuthorized_28() { return &___FeedbackTypeAuthorized_28; }
	inline void set_FeedbackTypeAuthorized_28(bool value)
	{
		___FeedbackTypeAuthorized_28 = value;
	}
};


// MoreMountains.FeedbacksForThirdParty.MMFeedbackNVControl
struct MMFeedbackNVControl_t5F53E468A2A361DA4860FA9C1A27B449E4DAC650  : public MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4
{
public:
	// MoreMountains.FeedbacksForThirdParty.MMFeedbackNVControl/ControlTypes MoreMountains.FeedbacksForThirdParty.MMFeedbackNVControl::ControlType
	int32_t ___ControlType_29;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMFeedbackNVControl::OutputLevel
	float ___OutputLevel_30;

public:
	inline static int32_t get_offset_of_ControlType_29() { return static_cast<int32_t>(offsetof(MMFeedbackNVControl_t5F53E468A2A361DA4860FA9C1A27B449E4DAC650, ___ControlType_29)); }
	inline int32_t get_ControlType_29() const { return ___ControlType_29; }
	inline int32_t* get_address_of_ControlType_29() { return &___ControlType_29; }
	inline void set_ControlType_29(int32_t value)
	{
		___ControlType_29 = value;
	}

	inline static int32_t get_offset_of_OutputLevel_30() { return static_cast<int32_t>(offsetof(MMFeedbackNVControl_t5F53E468A2A361DA4860FA9C1A27B449E4DAC650, ___OutputLevel_30)); }
	inline float get_OutputLevel_30() const { return ___OutputLevel_30; }
	inline float* get_address_of_OutputLevel_30() { return &___OutputLevel_30; }
	inline void set_OutputLevel_30(float value)
	{
		___OutputLevel_30 = value;
	}
};

struct MMFeedbackNVControl_t5F53E468A2A361DA4860FA9C1A27B449E4DAC650_StaticFields
{
public:
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackNVControl::FeedbackTypeAuthorized
	bool ___FeedbackTypeAuthorized_28;

public:
	inline static int32_t get_offset_of_FeedbackTypeAuthorized_28() { return static_cast<int32_t>(offsetof(MMFeedbackNVControl_t5F53E468A2A361DA4860FA9C1A27B449E4DAC650_StaticFields, ___FeedbackTypeAuthorized_28)); }
	inline bool get_FeedbackTypeAuthorized_28() const { return ___FeedbackTypeAuthorized_28; }
	inline bool* get_address_of_FeedbackTypeAuthorized_28() { return &___FeedbackTypeAuthorized_28; }
	inline void set_FeedbackTypeAuthorized_28(bool value)
	{
		___FeedbackTypeAuthorized_28 = value;
	}
};


// MoreMountains.FeedbacksForThirdParty.MMFeedbackNVEmphasis
struct MMFeedbackNVEmphasis_t8C52D473E911FE7AF7E423F545C385FFAA5FD30F  : public MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4
{
public:
	// System.Single MoreMountains.FeedbacksForThirdParty.MMFeedbackNVEmphasis::MinAmplitude
	float ___MinAmplitude_29;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMFeedbackNVEmphasis::MaxAmplitude
	float ___MaxAmplitude_30;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMFeedbackNVEmphasis::MinFrequency
	float ___MinFrequency_31;
	// System.Single MoreMountains.FeedbacksForThirdParty.MMFeedbackNVEmphasis::MaxFrequency
	float ___MaxFrequency_32;
	// MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings MoreMountains.FeedbacksForThirdParty.MMFeedbackNVEmphasis::HapticSettings
	MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * ___HapticSettings_33;

public:
	inline static int32_t get_offset_of_MinAmplitude_29() { return static_cast<int32_t>(offsetof(MMFeedbackNVEmphasis_t8C52D473E911FE7AF7E423F545C385FFAA5FD30F, ___MinAmplitude_29)); }
	inline float get_MinAmplitude_29() const { return ___MinAmplitude_29; }
	inline float* get_address_of_MinAmplitude_29() { return &___MinAmplitude_29; }
	inline void set_MinAmplitude_29(float value)
	{
		___MinAmplitude_29 = value;
	}

	inline static int32_t get_offset_of_MaxAmplitude_30() { return static_cast<int32_t>(offsetof(MMFeedbackNVEmphasis_t8C52D473E911FE7AF7E423F545C385FFAA5FD30F, ___MaxAmplitude_30)); }
	inline float get_MaxAmplitude_30() const { return ___MaxAmplitude_30; }
	inline float* get_address_of_MaxAmplitude_30() { return &___MaxAmplitude_30; }
	inline void set_MaxAmplitude_30(float value)
	{
		___MaxAmplitude_30 = value;
	}

	inline static int32_t get_offset_of_MinFrequency_31() { return static_cast<int32_t>(offsetof(MMFeedbackNVEmphasis_t8C52D473E911FE7AF7E423F545C385FFAA5FD30F, ___MinFrequency_31)); }
	inline float get_MinFrequency_31() const { return ___MinFrequency_31; }
	inline float* get_address_of_MinFrequency_31() { return &___MinFrequency_31; }
	inline void set_MinFrequency_31(float value)
	{
		___MinFrequency_31 = value;
	}

	inline static int32_t get_offset_of_MaxFrequency_32() { return static_cast<int32_t>(offsetof(MMFeedbackNVEmphasis_t8C52D473E911FE7AF7E423F545C385FFAA5FD30F, ___MaxFrequency_32)); }
	inline float get_MaxFrequency_32() const { return ___MaxFrequency_32; }
	inline float* get_address_of_MaxFrequency_32() { return &___MaxFrequency_32; }
	inline void set_MaxFrequency_32(float value)
	{
		___MaxFrequency_32 = value;
	}

	inline static int32_t get_offset_of_HapticSettings_33() { return static_cast<int32_t>(offsetof(MMFeedbackNVEmphasis_t8C52D473E911FE7AF7E423F545C385FFAA5FD30F, ___HapticSettings_33)); }
	inline MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * get_HapticSettings_33() const { return ___HapticSettings_33; }
	inline MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 ** get_address_of_HapticSettings_33() { return &___HapticSettings_33; }
	inline void set_HapticSettings_33(MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * value)
	{
		___HapticSettings_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HapticSettings_33), (void*)value);
	}
};

struct MMFeedbackNVEmphasis_t8C52D473E911FE7AF7E423F545C385FFAA5FD30F_StaticFields
{
public:
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackNVEmphasis::FeedbackTypeAuthorized
	bool ___FeedbackTypeAuthorized_28;

public:
	inline static int32_t get_offset_of_FeedbackTypeAuthorized_28() { return static_cast<int32_t>(offsetof(MMFeedbackNVEmphasis_t8C52D473E911FE7AF7E423F545C385FFAA5FD30F_StaticFields, ___FeedbackTypeAuthorized_28)); }
	inline bool get_FeedbackTypeAuthorized_28() const { return ___FeedbackTypeAuthorized_28; }
	inline bool* get_address_of_FeedbackTypeAuthorized_28() { return &___FeedbackTypeAuthorized_28; }
	inline void set_FeedbackTypeAuthorized_28(bool value)
	{
		___FeedbackTypeAuthorized_28 = value;
	}
};


// MoreMountains.FeedbacksForThirdParty.MMFeedbackNVPreset
struct MMFeedbackNVPreset_tD2B365A02A8B422BAEBEBD29D88B5C74DD3AC209  : public MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4
{
public:
	// Lofelt.NiceVibrations.HapticPatterns/PresetType MoreMountains.FeedbacksForThirdParty.MMFeedbackNVPreset::Preset
	int32_t ___Preset_29;
	// MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings MoreMountains.FeedbacksForThirdParty.MMFeedbackNVPreset::HapticSettings
	MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * ___HapticSettings_30;

public:
	inline static int32_t get_offset_of_Preset_29() { return static_cast<int32_t>(offsetof(MMFeedbackNVPreset_tD2B365A02A8B422BAEBEBD29D88B5C74DD3AC209, ___Preset_29)); }
	inline int32_t get_Preset_29() const { return ___Preset_29; }
	inline int32_t* get_address_of_Preset_29() { return &___Preset_29; }
	inline void set_Preset_29(int32_t value)
	{
		___Preset_29 = value;
	}

	inline static int32_t get_offset_of_HapticSettings_30() { return static_cast<int32_t>(offsetof(MMFeedbackNVPreset_tD2B365A02A8B422BAEBEBD29D88B5C74DD3AC209, ___HapticSettings_30)); }
	inline MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * get_HapticSettings_30() const { return ___HapticSettings_30; }
	inline MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 ** get_address_of_HapticSettings_30() { return &___HapticSettings_30; }
	inline void set_HapticSettings_30(MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * value)
	{
		___HapticSettings_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HapticSettings_30), (void*)value);
	}
};

struct MMFeedbackNVPreset_tD2B365A02A8B422BAEBEBD29D88B5C74DD3AC209_StaticFields
{
public:
	// System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackNVPreset::FeedbackTypeAuthorized
	bool ___FeedbackTypeAuthorized_28;

public:
	inline static int32_t get_offset_of_FeedbackTypeAuthorized_28() { return static_cast<int32_t>(offsetof(MMFeedbackNVPreset_tD2B365A02A8B422BAEBEBD29D88B5C74DD3AC209_StaticFields, ___FeedbackTypeAuthorized_28)); }
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



// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMF_Feedback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_Feedback__ctor_m901961F21A4EC9B633D04730A4AC6455E87F66EB (MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticController::Load(Lofelt.NiceVibrations.HapticClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Load_mEC4582E1B36CED7433FC667B7C864BEE2CA5966A (HapticClip_tB9F6AE5F3AF34DE1409EF4F4EDEA14F8849AAC9F * ___clip0, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticController::set_fallbackPreset(Lofelt.NiceVibrations.HapticPatterns/PresetType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HapticController_set_fallbackPreset_m1AF6BD5D44158F810D7941E574E0121677A38A3D_inline (int32_t ___value0, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticController::Loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Loop_m86F4DD080CE8099C96F5F5936ED54F9CA2F3EAB3 (bool ___enabled0, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticController::Seek(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Seek_m080A543DB05DF2C343AB851AEE2962E5E1B58D63 (float ___time0, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticController::set_clipLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_clipLevel_m40774F6E28DD87C22CEAF119FD4C1A2B2C6EA997 (float ___value0, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticController::set_clipFrequencyShift(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_clipFrequencyShift_mF62FEFA43B591720BB2513641321749EBB33014E (float ___value0, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticController::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Play_m6318698334AD8AB3E6732205BCA40EAC5D08DC0C (const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMF_Feedback::CustomStopFeedback(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_Feedback_CustomStopFeedback_m748D8AA210D0D37728D866535F4146A5D33436C6 (MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___feedbacksIntensity1, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticController::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Stop_m82FC5B96158D94AD4740A182530C35F1D7320BA3 (const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticPatterns::PlayConstant(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticPatterns_PlayConstant_m178ABA555EFA8B130EE804BBD59C4F49597AB1EE (float ___amplitude0, float ___frequency1, float ___duration2, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous/<RealtimeModulationCo>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRealtimeModulationCoU3Ed__17__ctor_m58EA8A1D7F64B87593FB4E1FDE1B76AF91EA81FE (U3CRealtimeModulationCoU3Ed__17_tDCB139E8985AB0539F13E0FF613138C8E6886944 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, float ___time0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* ___keys0, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticController::set_hapticsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_hapticsEnabled_mB950F536C211758A6A2E8E110C4E1FAB47C86468 (bool ___value0, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticController::set_outputLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_outputLevel_m735E0FB73F3541438EBA55A93F7C695016922D40 (float ___value0, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Initialize_m6B01453A518B43C6AA94852220AFA7C97CD30EEC (const RuntimeMethod* method);
// System.Boolean Lofelt.NiceVibrations.HapticController::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticController_Init_mD8E2CE47A997D7862BAB4CB838107F4850FFD1EE (const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Release_m2DEE355E8804F2EAAC973E9037C73D2D6A6C23B2 (const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticPatterns::PlayEmphasis(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticPatterns_PlayEmphasis_m8C9931324DA6629BDAAA4A1DFBC58112DA11291D (float ___amplitude0, float ___frequency1, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.HapticPatterns::PlayPreset(Lofelt.NiceVibrations.HapticPatterns/PresetType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticPatterns_PlayPreset_mA6ACC826F783F11639CA395E86A63C5ACDBF7770 (int32_t ___presetType0, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMFeedback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedback__ctor_m3A0FE0C8FEDD2D759EC31C4432C65DBD4B1A06A0 (MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4 * __this, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMFeedback::CustomStopFeedback(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedback_CustomStopFeedback_m637BE3F6114F85830A2E7073DEEF05B95CA79A83 (MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___feedbacksIntensity1, const RuntimeMethod* method);
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous/<RealtimeModulationCo>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRealtimeModulationCoU3Ed__17__ctor_mB9ECF071815E7A99B3B2E468857FA86A0BFB757C (U3CRealtimeModulationCoU3Ed__17_t7EFFEE2F6DA9C5B73DB52A66D963A75B4E9815D3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Lofelt.NiceVibrations.GamepadRumbler::SetCurrentGamepad(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_SetCurrentGamepad_m9D3E088E489CCBB7F0B814B0EC883495295E0043 (int32_t ___gamepadID0, const RuntimeMethod* method);
// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::get_isVersionSupported()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_isVersionSupported_m4D5A155EEE3ECD5A4388C3E3FEB3EE3E3F3F7EF0_inline (const RuntimeMethod* method);
// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::get_meetsAdvancedRequirements()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_meetsAdvancedRequirements_mB898A08DE9870227B4CC654FC7D836E6AEDBB270_inline (const RuntimeMethod* method);
// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::get_hasAmplitudeModulation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_hasAmplitudeModulation_mE44A6E41549EA0A69C2CEBAA8CD37258CD477F7E_inline (const RuntimeMethod* method);
// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::get_hasFrequencyModulation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_hasFrequencyModulation_m658E7FD45A9974A68D06EA2C03ADAE3AAF062536_inline (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Single MoreMountains.Feedbacks.MMFeedbacksHelpers::Remap(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMFeedbacksHelpers_Remap_mF91639B3964272F011DC211808184EC25AF9571F (float ___x0, float ___A1, float ___B2, float ___C3, float ___D4, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Single MoreMountains.Feedbacks.MMFeedback::get_FeedbackDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMFeedback_get_FeedbackDeltaTime_m3EF4F11444CD2F00CF1E656478EFC2EC0DF541E7 (MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4 * __this, const RuntimeMethod* method);
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
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_Haptics::CustomPlayFeedback(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_Haptics_CustomPlayFeedback_mF49BDFCAFBB99046C30DF43BE079C867FCE1851B (MMF_Haptics_t3C55D6456FAD6FAD73D0DF6F5E8CAF35B97B5878 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___feedbacksIntensity1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0024743F97789D38C98EEF3B6289CC5F7131D84);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Active)
		bool L_0 = ((MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06 *)__this)->get_Active_0();
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
		// if (OutputDeprecationWarning)
		bool L_1 = __this->get_OutputDeprecationWarning_27();
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// Debug.LogWarning(Owner.name + " : the haptic feedback on this object is using the old version of Nice Vibrations, and won't work anymore. Replace it with any of the new haptic feedbacks.");
		MMF_Player_tC899A947C0F4E42B7461FAB8A051855F7BEF0A7D * L_2 = ((MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06 *)__this)->get_Owner_7();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_3, _stringLiteralA0024743F97789D38C98EEF3B6289CC5F7131D84, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_4, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_Haptics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_Haptics__ctor_m5C26E078F1DEA059E43E9026EE00E831BE80198B (MMF_Haptics_t3C55D6456FAD6FAD73D0DF6F5E8CAF35B97B5878 * __this, const RuntimeMethod* method)
{
	{
		// public bool OutputDeprecationWarning = true;
		__this->set_OutputDeprecationWarning_27((bool)1);
		MMF_Feedback__ctor_m901961F21A4EC9B633D04730A4AC6455E87F66EB(__this, /*hidden argument*/NULL);
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
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_NVClip::CustomPlayFeedback(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_NVClip_CustomPlayFeedback_m3AB059071739D7B9983C3DEB0BAAF3E085C463DF (MMF_NVClip_t2C34105F20849392D7A7B2EEEDB7210D68324D7D * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___feedbacksIntensity1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_NVClip_t2C34105F20849392D7A7B2EEEDB7210D68324D7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Active || !FeedbackTypeAuthorized || !HapticSettings.CanPlay() || (Clip == null))
		bool L_0 = ((MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06 *)__this)->get_Active_0();
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MMF_NVClip_t2C34105F20849392D7A7B2EEEDB7210D68324D7D_il2cpp_TypeInfo_var);
		bool L_1 = ((MMF_NVClip_t2C34105F20849392D7A7B2EEEDB7210D68324D7D_StaticFields*)il2cpp_codegen_static_fields_for(MMF_NVClip_t2C34105F20849392D7A7B2EEEDB7210D68324D7D_il2cpp_TypeInfo_var))->get_FeedbackTypeAuthorized_27();
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * L_2 = __this->get_HapticSettings_36();
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings::CanPlay() */, L_2);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		HapticClip_tB9F6AE5F3AF34DE1409EF4F4EDEA14F8849AAC9F * L_4 = __this->get_Clip_28();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002b;
		}
	}

IL_002a:
	{
		// return;
		return;
	}

IL_002b:
	{
		// HapticController.Load(Clip);
		HapticClip_tB9F6AE5F3AF34DE1409EF4F4EDEA14F8849AAC9F * L_6 = __this->get_Clip_28();
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_Load_mEC4582E1B36CED7433FC667B7C864BEE2CA5966A(L_6, /*hidden argument*/NULL);
		// HapticSettings.SetGamepad();
		MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * L_7 = __this->get_HapticSettings_36();
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(4 /* System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings::SetGamepad() */, L_7);
		// HapticController.fallbackPreset = FallbackPreset;
		int32_t L_8 = __this->get_FallbackPreset_29();
		HapticController_set_fallbackPreset_m1AF6BD5D44158F810D7941E574E0121677A38A3D_inline(L_8, /*hidden argument*/NULL);
		// HapticController.Loop(Loop);
		bool L_9 = __this->get_Loop_30();
		HapticController_Loop_m86F4DD080CE8099C96F5F5936ED54F9CA2F3EAB3(L_9, /*hidden argument*/NULL);
		// HapticController.Seek(SeekTime);
		float L_10 = __this->get_SeekTime_31();
		HapticController_Seek_m080A543DB05DF2C343AB851AEE2962E5E1B58D63(L_10, /*hidden argument*/NULL);
		// HapticController.clipLevel = Random.Range(MinLevel, MaxLevel);
		float L_11 = __this->get_MinLevel_32();
		float L_12 = __this->get_MaxLevel_33();
		float L_13;
		L_13 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_11, L_12, /*hidden argument*/NULL);
		HapticController_set_clipLevel_m40774F6E28DD87C22CEAF119FD4C1A2B2C6EA997(L_13, /*hidden argument*/NULL);
		// HapticController.clipFrequencyShift = Random.Range(MinFrequencyShift, MaxFrequencyShift);
		float L_14 = __this->get_MinFrequencyShift_34();
		float L_15 = __this->get_MaxFrequencyShift_35();
		float L_16;
		L_16 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_14, L_15, /*hidden argument*/NULL);
		HapticController_set_clipFrequencyShift_mF62FEFA43B591720BB2513641321749EBB33014E(L_16, /*hidden argument*/NULL);
		// HapticController.Play();
		HapticController_Play_m6318698334AD8AB3E6732205BCA40EAC5D08DC0C(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_NVClip::CustomStopFeedback(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_NVClip_CustomStopFeedback_m65BD06766A840AC9DF06FD0F9771195CD5CE86C0 (MMF_NVClip_t2C34105F20849392D7A7B2EEEDB7210D68324D7D * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___feedbacksIntensity1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_NVClip_t2C34105F20849392D7A7B2EEEDB7210D68324D7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!FeedbackTypeAuthorized)
		IL2CPP_RUNTIME_CLASS_INIT(MMF_NVClip_t2C34105F20849392D7A7B2EEEDB7210D68324D7D_il2cpp_TypeInfo_var);
		bool L_0 = ((MMF_NVClip_t2C34105F20849392D7A7B2EEEDB7210D68324D7D_StaticFields*)il2cpp_codegen_static_fields_for(MMF_NVClip_t2C34105F20849392D7A7B2EEEDB7210D68324D7D_il2cpp_TypeInfo_var))->get_FeedbackTypeAuthorized_27();
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// base.CustomStopFeedback(position, feedbacksIntensity);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___position0;
		float L_2 = ___feedbacksIntensity1;
		MMF_Feedback_CustomStopFeedback_m748D8AA210D0D37728D866535F4146A5D33436C6(__this, L_1, L_2, /*hidden argument*/NULL);
		// IsPlaying = false;
		VirtActionInvoker1< bool >::Invoke(16 /* System.Void MoreMountains.Feedbacks.MMF_Feedback::set_IsPlaying(System.Boolean) */, __this, (bool)0);
		// HapticController.Stop();
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_Stop_m82FC5B96158D94AD4740A182530C35F1D7320BA3(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_NVClip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_NVClip__ctor_mB61828C4C171D129A7597F6FC0265278B0E914EE (MMF_NVClip_t2C34105F20849392D7A7B2EEEDB7210D68324D7D * __this, const RuntimeMethod* method)
{
	{
		// public HapticPatterns.PresetType FallbackPreset = HapticPatterns.PresetType.LightImpact;
		__this->set_FallbackPreset_29(4);
		// public float MinLevel = 1f;
		__this->set_MinLevel_32((1.0f));
		// public float MaxLevel = 1f;
		__this->set_MaxLevel_33((1.0f));
		MMF_Feedback__ctor_m901961F21A4EC9B633D04730A4AC6455E87F66EB(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_NVClip::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_NVClip__cctor_m358729E86B83CC7C0112B022E2A4D9405C1DDED7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_NVClip_t2C34105F20849392D7A7B2EEEDB7210D68324D7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool FeedbackTypeAuthorized = true;
		((MMF_NVClip_t2C34105F20849392D7A7B2EEEDB7210D68324D7D_StaticFields*)il2cpp_codegen_static_fields_for(MMF_NVClip_t2C34105F20849392D7A7B2EEEDB7210D68324D7D_il2cpp_TypeInfo_var))->set_FeedbackTypeAuthorized_27((bool)1);
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
// System.Single MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous::get_FeedbackDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMF_NVContinuous_get_FeedbackDuration_m867BF7EABA8E21044005CE0C271ED3BB4330EA03 (MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B * __this, const RuntimeMethod* method)
{
	{
		// public override float FeedbackDuration { get { return ApplyTimeMultiplier(_duration); } set { _duration = value; } }
		float L_0 = __this->get__duration_39();
		float L_1;
		L_1 = VirtFuncInvoker1< float, float >::Invoke(43 /* System.Single MoreMountains.Feedbacks.MMF_Feedback::ApplyTimeMultiplier(System.Single) */, __this, L_0);
		return L_1;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous::set_FeedbackDuration(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_NVContinuous_set_FeedbackDuration_m989C947C060732C9B0AC212F861E3F23809F39E9 (MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public override float FeedbackDuration { get { return ApplyTimeMultiplier(_duration); } set { _duration = value; } }
		float L_0 = ___value0;
		__this->set__duration_39(L_0);
		// public override float FeedbackDuration { get { return ApplyTimeMultiplier(_duration); } set { _duration = value; } }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous::CustomPlayFeedback(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_NVContinuous_CustomPlayFeedback_mD8B5EC9ECA4A63F96DBDCDB5AD6A86D888714555 (MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___feedbacksIntensity1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (!Active || !FeedbackTypeAuthorized || !HapticSettings.CanPlay())
		bool L_0 = ((MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06 *)__this)->get_Active_0();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B_il2cpp_TypeInfo_var);
		bool L_1 = ((MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B_StaticFields*)il2cpp_codegen_static_fields_for(MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B_il2cpp_TypeInfo_var))->get_FeedbackTypeAuthorized_27();
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * L_2 = __this->get_HapticSettings_37();
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings::CanPlay() */, L_2);
		if (L_3)
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		// return;
		return;
	}

IL_001d:
	{
		// float amplitude = Random.Range(MinAmplitude, MaxAmplitude);
		float L_4 = __this->get_MinAmplitude_28();
		float L_5 = __this->get_MaxAmplitude_29();
		float L_6;
		L_6 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_4, L_5, /*hidden argument*/NULL);
		// float frequency = Random.Range(MinFrequency, MaxFrequency);
		float L_7 = __this->get_MinFrequency_30();
		float L_8 = __this->get_MaxFrequency_31();
		float L_9;
		L_9 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// _duration = Random.Range(MinDuration, MaxDuration);
		float L_10 = __this->get_MinDuration_32();
		float L_11 = __this->get_MaxDuration_33();
		float L_12;
		L_12 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_10, L_11, /*hidden argument*/NULL);
		__this->set__duration_39(L_12);
		// HapticSettings.SetGamepad();
		MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * L_13 = __this->get_HapticSettings_37();
		NullCheck(L_13);
		VirtActionInvoker0::Invoke(4 /* System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings::SetGamepad() */, L_13);
		// HapticPatterns.PlayConstant(amplitude, frequency, FeedbackDuration);
		float L_14 = V_0;
		float L_15;
		L_15 = VirtFuncInvoker0< float >::Invoke(26 /* System.Single MoreMountains.Feedbacks.MMF_Feedback::get_FeedbackDuration() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		HapticPatterns_PlayConstant_m178ABA555EFA8B130EE804BBD59C4F49597AB1EE(L_6, L_14, L_15, /*hidden argument*/NULL);
		// if (UseRealTimeModulation)
		bool L_16 = __this->get_UseRealTimeModulation_34();
		if (!L_16)
		{
			goto IL_008d;
		}
	}
	{
		// _coroutine = Owner.StartCoroutine(RealtimeModulationCo());
		MMF_Player_tC899A947C0F4E42B7461FAB8A051855F7BEF0A7D * L_17 = ((MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06 *)__this)->get_Owner_7();
		RuntimeObject* L_18;
		L_18 = VirtFuncInvoker0< RuntimeObject* >::Invoke(55 /* System.Collections.IEnumerator MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous::RealtimeModulationCo() */, __this);
		NullCheck(L_17);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_19;
		L_19 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_17, L_18, /*hidden argument*/NULL);
		__this->set__coroutine_38(L_19);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous::RealtimeModulationCo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MMF_NVContinuous_RealtimeModulationCo_m0EED2A4872CA3420C856C9CD9DCCE6632F3AEBD7 (MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRealtimeModulationCoU3Ed__17_tDCB139E8985AB0539F13E0FF613138C8E6886944_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRealtimeModulationCoU3Ed__17_tDCB139E8985AB0539F13E0FF613138C8E6886944 * L_0 = (U3CRealtimeModulationCoU3Ed__17_tDCB139E8985AB0539F13E0FF613138C8E6886944 *)il2cpp_codegen_object_new(U3CRealtimeModulationCoU3Ed__17_tDCB139E8985AB0539F13E0FF613138C8E6886944_il2cpp_TypeInfo_var);
		U3CRealtimeModulationCoU3Ed__17__ctor_m58EA8A1D7F64B87593FB4E1FDE1B76AF91EA81FE(L_0, 0, /*hidden argument*/NULL);
		U3CRealtimeModulationCoU3Ed__17_tDCB139E8985AB0539F13E0FF613138C8E6886944 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous::CustomStopFeedback(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_NVContinuous_CustomStopFeedback_mBD3DF5E2C8EC4CD59FACC8CFE50D6A940158A8AD (MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___feedbacksIntensity1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!FeedbackTypeAuthorized)
		IL2CPP_RUNTIME_CLASS_INIT(MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B_il2cpp_TypeInfo_var);
		bool L_0 = ((MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B_StaticFields*)il2cpp_codegen_static_fields_for(MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B_il2cpp_TypeInfo_var))->get_FeedbackTypeAuthorized_27();
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// base.CustomStopFeedback(position, feedbacksIntensity);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___position0;
		float L_2 = ___feedbacksIntensity1;
		MMF_Feedback_CustomStopFeedback_m748D8AA210D0D37728D866535F4146A5D33436C6(__this, L_1, L_2, /*hidden argument*/NULL);
		// IsPlaying = false;
		VirtActionInvoker1< bool >::Invoke(16 /* System.Void MoreMountains.Feedbacks.MMF_Feedback::set_IsPlaying(System.Boolean) */, __this, (bool)0);
		// HapticController.Stop();
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_Stop_m82FC5B96158D94AD4740A182530C35F1D7320BA3(/*hidden argument*/NULL);
		// if (Active && (_coroutine != null))
		bool L_3 = ((MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06 *)__this)->get_Active_0();
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_4 = __this->get__coroutine_38();
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		// Owner.StopCoroutine(_coroutine);
		MMF_Player_tC899A947C0F4E42B7461FAB8A051855F7BEF0A7D * L_5 = ((MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06 *)__this)->get_Owner_7();
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_6 = __this->get__coroutine_38();
		NullCheck(L_5);
		MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413(L_5, L_6, /*hidden argument*/NULL);
		// _coroutine = null;
		__this->set__coroutine_38((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_NVContinuous__ctor_m76BA84EDA771B77E6D080DF0BE58970F2F22D804 (MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float MinAmplitude = 1f;
		__this->set_MinAmplitude_28((1.0f));
		// public float MaxAmplitude = 1f;
		__this->set_MaxAmplitude_29((1.0f));
		// public float MinFrequency = 1f;
		__this->set_MinFrequency_30((1.0f));
		// public float MaxFrequency = 1f;
		__this->set_MaxFrequency_31((1.0f));
		// public float MinDuration = 1f;
		__this->set_MinDuration_32((1.0f));
		// public float MaxDuration = 1f;
		__this->set_MaxDuration_33((1.0f));
		// public AnimationCurve AmplitudeMultiplication = new AnimationCurve(new Keyframe(0, 0), new Keyframe(0.5f, 1f), new Keyframe(1, 0f));
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_0 = (KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)SZArrayNew(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var, (uint32_t)3);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_1 = L_0;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_2);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_3 = L_1;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_4), (0.5f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_4);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_5 = L_3;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_6), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_6);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_7 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0(L_7, L_5, /*hidden argument*/NULL);
		__this->set_AmplitudeMultiplication_35(L_7);
		// public AnimationCurve ShiftFrequency = new AnimationCurve(new Keyframe(0, 0), new Keyframe(0.5f, 1f), new Keyframe(1, 0f));
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_8 = (KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)SZArrayNew(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var, (uint32_t)3);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_9 = L_8;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_10), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_10);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_11 = L_9;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_12), (0.5f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_12);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_13 = L_11;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_14), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_14);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_15 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0(L_15, L_13, /*hidden argument*/NULL);
		__this->set_ShiftFrequency_36(L_15);
		MMF_Feedback__ctor_m901961F21A4EC9B633D04730A4AC6455E87F66EB(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_NVContinuous__cctor_m7F00B1705901C92756B13B5BD869CF24DAA7945E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool FeedbackTypeAuthorized = true;
		((MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B_StaticFields*)il2cpp_codegen_static_fields_for(MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B_il2cpp_TypeInfo_var))->set_FeedbackTypeAuthorized_27((bool)1);
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
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_NVControl::CustomPlayFeedback(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_NVControl_CustomPlayFeedback_m7C1B87753CA0A291C8D0130AB1295F063230A34D (MMF_NVControl_t8E0EA8AC28AF80544C78A918809DD701BF0885DC * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___feedbacksIntensity1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_NVControl_t8E0EA8AC28AF80544C78A918809DD701BF0885DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (!Active || !FeedbackTypeAuthorized)
		bool L_0 = ((MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06 *)__this)->get_Active_0();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MMF_NVControl_t8E0EA8AC28AF80544C78A918809DD701BF0885DC_il2cpp_TypeInfo_var);
		bool L_1 = ((MMF_NVControl_t8E0EA8AC28AF80544C78A918809DD701BF0885DC_StaticFields*)il2cpp_codegen_static_fields_for(MMF_NVControl_t8E0EA8AC28AF80544C78A918809DD701BF0885DC_il2cpp_TypeInfo_var))->get_FeedbackTypeAuthorized_27();
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
		// switch (ControlType)
		int32_t L_2 = __this->get_ControlType_28();
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_003c;
			}
			case 2:
			{
				goto IL_0043;
			}
			case 3:
			{
				goto IL_004a;
			}
			case 4:
			{
				goto IL_0056;
			}
			case 5:
			{
				goto IL_0062;
			}
		}
	}
	{
		return;
	}

IL_0036:
	{
		// HapticController.Stop();
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_Stop_m82FC5B96158D94AD4740A182530C35F1D7320BA3(/*hidden argument*/NULL);
		// break;
		return;
	}

IL_003c:
	{
		// HapticController.hapticsEnabled = true;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_set_hapticsEnabled_mB950F536C211758A6A2E8E110C4E1FAB47C86468((bool)1, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0043:
	{
		// HapticController.hapticsEnabled = false;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_set_hapticsEnabled_mB950F536C211758A6A2E8E110C4E1FAB47C86468((bool)0, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_004a:
	{
		// HapticController.outputLevel = OutputLevel;
		float L_4 = __this->get_OutputLevel_29();
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_set_outputLevel_m735E0FB73F3541438EBA55A93F7C695016922D40(L_4, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0056:
	{
		// LofeltHaptics.Initialize();
		IL2CPP_RUNTIME_CLASS_INIT(LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var);
		LofeltHaptics_Initialize_m6B01453A518B43C6AA94852220AFA7C97CD30EEC(/*hidden argument*/NULL);
		// HapticController.Init();
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = HapticController_Init_mD8E2CE47A997D7862BAB4CB838107F4850FFD1EE(/*hidden argument*/NULL);
		// break;
		return;
	}

IL_0062:
	{
		// LofeltHaptics.Release();
		IL2CPP_RUNTIME_CLASS_INIT(LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var);
		LofeltHaptics_Release_m2DEE355E8804F2EAAC973E9037C73D2D6A6C23B2(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_NVControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_NVControl__ctor_m4971AF1B74D0408A40AEC9F89C3E39CA220C2078 (MMF_NVControl_t8E0EA8AC28AF80544C78A918809DD701BF0885DC * __this, const RuntimeMethod* method)
{
	{
		// public float OutputLevel = 1f;
		__this->set_OutputLevel_29((1.0f));
		MMF_Feedback__ctor_m901961F21A4EC9B633D04730A4AC6455E87F66EB(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_NVControl::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_NVControl__cctor_m994277259C185C41237CE72D3F45EFDDCAA71781 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_NVControl_t8E0EA8AC28AF80544C78A918809DD701BF0885DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool FeedbackTypeAuthorized = true;
		((MMF_NVControl_t8E0EA8AC28AF80544C78A918809DD701BF0885DC_StaticFields*)il2cpp_codegen_static_fields_for(MMF_NVControl_t8E0EA8AC28AF80544C78A918809DD701BF0885DC_il2cpp_TypeInfo_var))->set_FeedbackTypeAuthorized_27((bool)1);
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
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_NVEmphasis::CustomPlayFeedback(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_NVEmphasis_CustomPlayFeedback_m0F6629E95AEB3FFAAB90DCFC1D917AE29A62BFFD (MMF_NVEmphasis_tD8521066CDDED276397C8CD28CE0B533549B2A72 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___feedbacksIntensity1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_NVEmphasis_tD8521066CDDED276397C8CD28CE0B533549B2A72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (!Active || !FeedbackTypeAuthorized || !HapticSettings.CanPlay())
		bool L_0 = ((MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06 *)__this)->get_Active_0();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MMF_NVEmphasis_tD8521066CDDED276397C8CD28CE0B533549B2A72_il2cpp_TypeInfo_var);
		bool L_1 = ((MMF_NVEmphasis_tD8521066CDDED276397C8CD28CE0B533549B2A72_StaticFields*)il2cpp_codegen_static_fields_for(MMF_NVEmphasis_tD8521066CDDED276397C8CD28CE0B533549B2A72_il2cpp_TypeInfo_var))->get_FeedbackTypeAuthorized_27();
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * L_2 = __this->get_HapticSettings_32();
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings::CanPlay() */, L_2);
		if (L_3)
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		// return;
		return;
	}

IL_001d:
	{
		// float amplitude = Random.Range(MinAmplitude, MaxAmplitude);
		float L_4 = __this->get_MinAmplitude_28();
		float L_5 = __this->get_MaxAmplitude_29();
		float L_6;
		L_6 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_4, L_5, /*hidden argument*/NULL);
		// float frequency = Random.Range(MinFrequency, MaxFrequency);
		float L_7 = __this->get_MinFrequency_30();
		float L_8 = __this->get_MaxFrequency_31();
		float L_9;
		L_9 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// HapticSettings.SetGamepad();
		MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * L_10 = __this->get_HapticSettings_32();
		NullCheck(L_10);
		VirtActionInvoker0::Invoke(4 /* System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings::SetGamepad() */, L_10);
		// HapticPatterns.PlayEmphasis(amplitude, frequency);
		float L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		HapticPatterns_PlayEmphasis_m8C9931324DA6629BDAAA4A1DFBC58112DA11291D(L_6, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_NVEmphasis::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_NVEmphasis__ctor_m8595463D37320BADC385605797988198A95FF7C7 (MMF_NVEmphasis_tD8521066CDDED276397C8CD28CE0B533549B2A72 * __this, const RuntimeMethod* method)
{
	{
		// public float MinAmplitude = 1f;
		__this->set_MinAmplitude_28((1.0f));
		// public float MaxAmplitude = 1f;
		__this->set_MaxAmplitude_29((1.0f));
		// public float MinFrequency = 1f;
		__this->set_MinFrequency_30((1.0f));
		// public float MaxFrequency = 1f;
		__this->set_MaxFrequency_31((1.0f));
		MMF_Feedback__ctor_m901961F21A4EC9B633D04730A4AC6455E87F66EB(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_NVEmphasis::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_NVEmphasis__cctor_m019A6B7EFB9ECEBBBD1D3F9C74FC96F37F73FCE9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_NVEmphasis_tD8521066CDDED276397C8CD28CE0B533549B2A72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool FeedbackTypeAuthorized = true;
		((MMF_NVEmphasis_tD8521066CDDED276397C8CD28CE0B533549B2A72_StaticFields*)il2cpp_codegen_static_fields_for(MMF_NVEmphasis_tD8521066CDDED276397C8CD28CE0B533549B2A72_il2cpp_TypeInfo_var))->set_FeedbackTypeAuthorized_27((bool)1);
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
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_NVPreset::CustomPlayFeedback(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_NVPreset_CustomPlayFeedback_mF9429295B448C94316C16C4E0FB63756B627B3F7 (MMF_NVPreset_t7F7B96BD663FDE47C65462564702E85920E1F50B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___feedbacksIntensity1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_NVPreset_t7F7B96BD663FDE47C65462564702E85920E1F50B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Active || !FeedbackTypeAuthorized || !HapticSettings.CanPlay())
		bool L_0 = ((MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06 *)__this)->get_Active_0();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MMF_NVPreset_t7F7B96BD663FDE47C65462564702E85920E1F50B_il2cpp_TypeInfo_var);
		bool L_1 = ((MMF_NVPreset_t7F7B96BD663FDE47C65462564702E85920E1F50B_StaticFields*)il2cpp_codegen_static_fields_for(MMF_NVPreset_t7F7B96BD663FDE47C65462564702E85920E1F50B_il2cpp_TypeInfo_var))->get_FeedbackTypeAuthorized_27();
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * L_2 = __this->get_HapticSettings_29();
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings::CanPlay() */, L_2);
		if (L_3)
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		// return;
		return;
	}

IL_001d:
	{
		// HapticSettings.SetGamepad();
		MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * L_4 = __this->get_HapticSettings_29();
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(4 /* System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings::SetGamepad() */, L_4);
		// HapticPatterns.PlayPreset(Preset);
		int32_t L_5 = __this->get_Preset_28();
		IL2CPP_RUNTIME_CLASS_INIT(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		HapticPatterns_PlayPreset_mA6ACC826F783F11639CA395E86A63C5ACDBF7770(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_NVPreset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_NVPreset__ctor_m62F9DF8100D125F356FA001CC52B8EB870DD8DBA (MMF_NVPreset_t7F7B96BD663FDE47C65462564702E85920E1F50B * __this, const RuntimeMethod* method)
{
	{
		// public HapticPatterns.PresetType Preset = HapticPatterns.PresetType.LightImpact;
		__this->set_Preset_28(4);
		MMF_Feedback__ctor_m901961F21A4EC9B633D04730A4AC6455E87F66EB(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_NVPreset::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_NVPreset__cctor_m9D26BFBA4B57F9624836F75366C7E0AF4028D52D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_NVPreset_t7F7B96BD663FDE47C65462564702E85920E1F50B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool FeedbackTypeAuthorized = true;
		((MMF_NVPreset_t7F7B96BD663FDE47C65462564702E85920E1F50B_StaticFields*)il2cpp_codegen_static_fields_for(MMF_NVPreset_t7F7B96BD663FDE47C65462564702E85920E1F50B_il2cpp_TypeInfo_var))->set_FeedbackTypeAuthorized_27((bool)1);
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
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::CustomPlayFeedback(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackHaptics_CustomPlayFeedback_m6AA592FE07B84FC795577FCB970A43F0B8426A9D (MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___feedbacksIntensity1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0024743F97789D38C98EEF3B6289CC5F7131D84);
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
		IL2CPP_RUNTIME_CLASS_INIT(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4_il2cpp_TypeInfo_var);
		bool L_1 = ((MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4_StaticFields*)il2cpp_codegen_static_fields_for(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4_il2cpp_TypeInfo_var))->get_FeedbackTypeAuthorized_28();
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
		// if (OutputDeprecationWarning)
		bool L_2 = __this->get_OutputDeprecationWarning_60();
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// Debug.LogWarning(this.name + " : the haptic feedback on this object is using the old version of Nice Vibrations, and won't work anymore. Replace it with any of the new haptic feedbacks.");
		String_t* L_3;
		L_3 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_3, _stringLiteralA0024743F97789D38C98EEF3B6289CC5F7131D84, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_4, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackHaptics__ctor_mBC83ABA2DC49DA6DA6F80A87382D07B559559068 (MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public HapticTypes HapticType = HapticTypes.None;
		__this->set_HapticType_30(((int32_t)9));
		// public float TransientIntensity = 1f;
		__this->set_TransientIntensity_31((1.0f));
		// public float TransientSharpness = 1f;
		__this->set_TransientSharpness_32((1.0f));
		// public bool ATVibrateIOS = true;
		__this->set_ATVibrateIOS_33((bool)1);
		// public float ATIOSIntensity = 1f;
		__this->set_ATIOSIntensity_34((1.0f));
		// public float ATIOSSharpness = 1f;
		__this->set_ATIOSSharpness_35((1.0f));
		// public bool ATVibrateAndroid = true;
		__this->set_ATVibrateAndroid_36((bool)1);
		// public float ATAndroidIntensity = 1f;
		__this->set_ATAndroidIntensity_38((1.0f));
		// public float ATAndroidSharpness = 1f;
		__this->set_ATAndroidSharpness_39((1.0f));
		// public bool ATRumble = true;
		__this->set_ATRumble_40((bool)1);
		// public float ATRumbleIntensity = 1f;
		__this->set_ATRumbleIntensity_41((1.0f));
		// public float ATRumbleSharpness = 1f;
		__this->set_ATRumbleSharpness_42((1.0f));
		// public int ATRumbleControllerID = -1;
		__this->set_ATRumbleControllerID_43((-1));
		// public float InitialContinuousIntensity = 1f;
		__this->set_InitialContinuousIntensity_44((1.0f));
		// public AnimationCurve ContinuousIntensityCurve = new AnimationCurve(new Keyframe(0, 1), new Keyframe(1f, 1f));
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_0 = (KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)SZArrayNew(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_1 = L_0;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_2), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_2);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_3 = L_1;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_4), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_4);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0(L_5, L_3, /*hidden argument*/NULL);
		__this->set_ContinuousIntensityCurve_45(L_5);
		// public float InitialContinuousSharpness = 1f;
		__this->set_InitialContinuousSharpness_46((1.0f));
		// public AnimationCurve ContinuousSharpnessCurve = new AnimationCurve(new Keyframe(0, 1), new Keyframe(1f, 1f));
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_6 = (KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)SZArrayNew(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_7 = L_6;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_8), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_8);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_9 = L_7;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_10), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_10);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_11 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0(L_11, L_9, /*hidden argument*/NULL);
		__this->set_ContinuousSharpnessCurve_47(L_11);
		// public float ContinuousDuration = 1f;
		__this->set_ContinuousDuration_48((1.0f));
		// public bool APVibrateIOS = true;
		__this->set_APVibrateIOS_49((bool)1);
		// public bool APVibrateAndroid = true;
		__this->set_APVibrateAndroid_51((bool)1);
		// public bool APRumble = true;
		__this->set_APRumble_53((bool)1);
		// public int AndroidRepeat = -1;
		__this->set_AndroidRepeat_54((-1));
		// public int RumbleRepeat = -1;
		__this->set_RumbleRepeat_55((-1));
		// public Timescales Timescale = Timescales.UnscaledTime;
		__this->set_Timescale_57(1);
		// public bool AllowRumble = true;
		__this->set_AllowRumble_58((bool)1);
		// public int ControllerID = -1;
		__this->set_ControllerID_59((-1));
		// public bool OutputDeprecationWarning = true;
		__this->set_OutputDeprecationWarning_60((bool)1);
		MMFeedback__ctor_m3A0FE0C8FEDD2D759EC31C4432C65DBD4B1A06A0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackHaptics::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackHaptics__cctor_m8EB9BB4B754FBA8BEAB3E7398646C6648D61FE16 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool FeedbackTypeAuthorized = true;
		((MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4_StaticFields*)il2cpp_codegen_static_fields_for(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4_il2cpp_TypeInfo_var))->set_FeedbackTypeAuthorized_28((bool)1);
		// protected static bool _continuousPlaying = false;
		((MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4_StaticFields*)il2cpp_codegen_static_fields_for(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4_il2cpp_TypeInfo_var))->set__continuousPlaying_61((bool)0);
		// protected static float _continuousStartedAt = 0f;
		((MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4_StaticFields*)il2cpp_codegen_static_fields_for(MMFeedbackHaptics_t35B21689DCB01EBC054EAC1DA2DF99E3179F54C4_il2cpp_TypeInfo_var))->set__continuousStartedAt_62((0.0f));
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
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackNVClip::CustomPlayFeedback(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackNVClip_CustomPlayFeedback_mF7524919967C9C338DDD7B4DDFD4EF6960F5685F (MMFeedbackNVClip_t502CF6ABD673FAC9A4AB6FC907AE09459F6F9418 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___feedbacksIntensity1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMFeedbackNVClip_t502CF6ABD673FAC9A4AB6FC907AE09459F6F9418_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Active || !FeedbackTypeAuthorized || !HapticSettings.CanPlay() || (Clip == null))
		bool L_0 = ((MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4 *)__this)->get_Active_4();
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MMFeedbackNVClip_t502CF6ABD673FAC9A4AB6FC907AE09459F6F9418_il2cpp_TypeInfo_var);
		bool L_1 = ((MMFeedbackNVClip_t502CF6ABD673FAC9A4AB6FC907AE09459F6F9418_StaticFields*)il2cpp_codegen_static_fields_for(MMFeedbackNVClip_t502CF6ABD673FAC9A4AB6FC907AE09459F6F9418_il2cpp_TypeInfo_var))->get_FeedbackTypeAuthorized_28();
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * L_2 = __this->get_HapticSettings_37();
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings::CanPlay() */, L_2);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		HapticClip_tB9F6AE5F3AF34DE1409EF4F4EDEA14F8849AAC9F * L_4 = __this->get_Clip_29();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002b;
		}
	}

IL_002a:
	{
		// return;
		return;
	}

IL_002b:
	{
		// HapticController.Load(Clip);
		HapticClip_tB9F6AE5F3AF34DE1409EF4F4EDEA14F8849AAC9F * L_6 = __this->get_Clip_29();
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_Load_mEC4582E1B36CED7433FC667B7C864BEE2CA5966A(L_6, /*hidden argument*/NULL);
		// HapticSettings.SetGamepad();
		MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * L_7 = __this->get_HapticSettings_37();
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(4 /* System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings::SetGamepad() */, L_7);
		// HapticController.fallbackPreset = FallbackPreset;
		int32_t L_8 = __this->get_FallbackPreset_30();
		HapticController_set_fallbackPreset_m1AF6BD5D44158F810D7941E574E0121677A38A3D_inline(L_8, /*hidden argument*/NULL);
		// HapticController.Loop(Loop);
		bool L_9 = __this->get_Loop_31();
		HapticController_Loop_m86F4DD080CE8099C96F5F5936ED54F9CA2F3EAB3(L_9, /*hidden argument*/NULL);
		// HapticController.Seek(SeekTime);
		float L_10 = __this->get_SeekTime_32();
		HapticController_Seek_m080A543DB05DF2C343AB851AEE2962E5E1B58D63(L_10, /*hidden argument*/NULL);
		// HapticController.clipLevel = Random.Range(MinLevel, MaxLevel);
		float L_11 = __this->get_MinLevel_33();
		float L_12 = __this->get_MaxLevel_34();
		float L_13;
		L_13 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_11, L_12, /*hidden argument*/NULL);
		HapticController_set_clipLevel_m40774F6E28DD87C22CEAF119FD4C1A2B2C6EA997(L_13, /*hidden argument*/NULL);
		// HapticController.clipFrequencyShift = Random.Range(MinFrequencyShift, MaxFrequencyShift);
		float L_14 = __this->get_MinFrequencyShift_35();
		float L_15 = __this->get_MaxFrequencyShift_36();
		float L_16;
		L_16 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_14, L_15, /*hidden argument*/NULL);
		HapticController_set_clipFrequencyShift_mF62FEFA43B591720BB2513641321749EBB33014E(L_16, /*hidden argument*/NULL);
		// HapticController.Play();
		HapticController_Play_m6318698334AD8AB3E6732205BCA40EAC5D08DC0C(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackNVClip::CustomStopFeedback(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackNVClip_CustomStopFeedback_m1541E6E09AB0475F59BE7C217C14B7937B47B447 (MMFeedbackNVClip_t502CF6ABD673FAC9A4AB6FC907AE09459F6F9418 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___feedbacksIntensity1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMFeedbackNVClip_t502CF6ABD673FAC9A4AB6FC907AE09459F6F9418_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!FeedbackTypeAuthorized)
		IL2CPP_RUNTIME_CLASS_INIT(MMFeedbackNVClip_t502CF6ABD673FAC9A4AB6FC907AE09459F6F9418_il2cpp_TypeInfo_var);
		bool L_0 = ((MMFeedbackNVClip_t502CF6ABD673FAC9A4AB6FC907AE09459F6F9418_StaticFields*)il2cpp_codegen_static_fields_for(MMFeedbackNVClip_t502CF6ABD673FAC9A4AB6FC907AE09459F6F9418_il2cpp_TypeInfo_var))->get_FeedbackTypeAuthorized_28();
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// base.CustomStopFeedback(position, feedbacksIntensity);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___position0;
		float L_2 = ___feedbacksIntensity1;
		MMFeedback_CustomStopFeedback_m637BE3F6114F85830A2E7073DEEF05B95CA79A83(__this, L_1, L_2, /*hidden argument*/NULL);
		// IsPlaying = false;
		VirtActionInvoker1< bool >::Invoke(14 /* System.Void MoreMountains.Feedbacks.MMFeedback::set_IsPlaying(System.Boolean) */, __this, (bool)0);
		// HapticController.Stop();
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_Stop_m82FC5B96158D94AD4740A182530C35F1D7320BA3(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackNVClip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackNVClip__ctor_mB4071F168307A4248A9D79B69BF7779335B769EF (MMFeedbackNVClip_t502CF6ABD673FAC9A4AB6FC907AE09459F6F9418 * __this, const RuntimeMethod* method)
{
	{
		// public HapticPatterns.PresetType FallbackPreset = HapticPatterns.PresetType.LightImpact;
		__this->set_FallbackPreset_30(4);
		// public float MinLevel = 1f;
		__this->set_MinLevel_33((1.0f));
		// public float MaxLevel = 1f;
		__this->set_MaxLevel_34((1.0f));
		MMFeedback__ctor_m3A0FE0C8FEDD2D759EC31C4432C65DBD4B1A06A0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackNVClip::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackNVClip__cctor_m2F1FB8C3CC05D18D77EF39E671312C3FCA6534F2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMFeedbackNVClip_t502CF6ABD673FAC9A4AB6FC907AE09459F6F9418_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool FeedbackTypeAuthorized = true;
		((MMFeedbackNVClip_t502CF6ABD673FAC9A4AB6FC907AE09459F6F9418_StaticFields*)il2cpp_codegen_static_fields_for(MMFeedbackNVClip_t502CF6ABD673FAC9A4AB6FC907AE09459F6F9418_il2cpp_TypeInfo_var))->set_FeedbackTypeAuthorized_28((bool)1);
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
// System.Single MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous::get_FeedbackDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMFeedbackNVContinuous_get_FeedbackDuration_m1D8304D5B0C15F498C0FA3397B907F3FDCD5B575 (MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6 * __this, const RuntimeMethod* method)
{
	{
		// public override float FeedbackDuration { get { return ApplyTimeMultiplier(_duration); } set { _duration = value; } }
		float L_0 = __this->get__duration_40();
		float L_1;
		L_1 = VirtFuncInvoker1< float, float >::Invoke(36 /* System.Single MoreMountains.Feedbacks.MMFeedback::ApplyTimeMultiplier(System.Single) */, __this, L_0);
		return L_1;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous::set_FeedbackDuration(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackNVContinuous_set_FeedbackDuration_mF31501AC3085555F52C84645A806B6DC23951BA0 (MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public override float FeedbackDuration { get { return ApplyTimeMultiplier(_duration); } set { _duration = value; } }
		float L_0 = ___value0;
		__this->set__duration_40(L_0);
		// public override float FeedbackDuration { get { return ApplyTimeMultiplier(_duration); } set { _duration = value; } }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous::CustomPlayFeedback(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackNVContinuous_CustomPlayFeedback_m56CC0D957026100E323C93A560A40C51BA145135 (MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___feedbacksIntensity1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (!Active || !FeedbackTypeAuthorized || !HapticSettings.CanPlay())
		bool L_0 = ((MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4 *)__this)->get_Active_4();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6_il2cpp_TypeInfo_var);
		bool L_1 = ((MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6_StaticFields*)il2cpp_codegen_static_fields_for(MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6_il2cpp_TypeInfo_var))->get_FeedbackTypeAuthorized_28();
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * L_2 = __this->get_HapticSettings_38();
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings::CanPlay() */, L_2);
		if (L_3)
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		// return;
		return;
	}

IL_001d:
	{
		// float amplitude = Random.Range(MinAmplitude, MaxAmplitude);
		float L_4 = __this->get_MinAmplitude_29();
		float L_5 = __this->get_MaxAmplitude_30();
		float L_6;
		L_6 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_4, L_5, /*hidden argument*/NULL);
		// float frequency = Random.Range(MinFrequency, MaxFrequency);
		float L_7 = __this->get_MinFrequency_31();
		float L_8 = __this->get_MaxFrequency_32();
		float L_9;
		L_9 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// _duration = Random.Range(MinDuration, MaxDuration);
		float L_10 = __this->get_MinDuration_33();
		float L_11 = __this->get_MaxDuration_34();
		float L_12;
		L_12 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_10, L_11, /*hidden argument*/NULL);
		__this->set__duration_40(L_12);
		// HapticSettings.SetGamepad();
		MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * L_13 = __this->get_HapticSettings_38();
		NullCheck(L_13);
		VirtActionInvoker0::Invoke(4 /* System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings::SetGamepad() */, L_13);
		// HapticPatterns.PlayConstant(amplitude, frequency, FeedbackDuration);
		float L_14 = V_0;
		float L_15;
		L_15 = VirtFuncInvoker0< float >::Invoke(16 /* System.Single MoreMountains.Feedbacks.MMFeedback::get_FeedbackDuration() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		HapticPatterns_PlayConstant_m178ABA555EFA8B130EE804BBD59C4F49597AB1EE(L_6, L_14, L_15, /*hidden argument*/NULL);
		// if (UseRealTimeModulation)
		bool L_16 = __this->get_UseRealTimeModulation_35();
		if (!L_16)
		{
			goto IL_0088;
		}
	}
	{
		// _coroutine = StartCoroutine(RealtimeModulationCo());
		RuntimeObject* L_17;
		L_17 = VirtFuncInvoker0< RuntimeObject* >::Invoke(41 /* System.Collections.IEnumerator MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous::RealtimeModulationCo() */, __this);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_18;
		L_18 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_17, /*hidden argument*/NULL);
		__this->set__coroutine_39(L_18);
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous::RealtimeModulationCo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MMFeedbackNVContinuous_RealtimeModulationCo_m1C27D5E7DABB307D8C00E94C7ED63D260E79E8D4 (MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRealtimeModulationCoU3Ed__17_t7EFFEE2F6DA9C5B73DB52A66D963A75B4E9815D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRealtimeModulationCoU3Ed__17_t7EFFEE2F6DA9C5B73DB52A66D963A75B4E9815D3 * L_0 = (U3CRealtimeModulationCoU3Ed__17_t7EFFEE2F6DA9C5B73DB52A66D963A75B4E9815D3 *)il2cpp_codegen_object_new(U3CRealtimeModulationCoU3Ed__17_t7EFFEE2F6DA9C5B73DB52A66D963A75B4E9815D3_il2cpp_TypeInfo_var);
		U3CRealtimeModulationCoU3Ed__17__ctor_mB9ECF071815E7A99B3B2E468857FA86A0BFB757C(L_0, 0, /*hidden argument*/NULL);
		U3CRealtimeModulationCoU3Ed__17_t7EFFEE2F6DA9C5B73DB52A66D963A75B4E9815D3 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous::CustomStopFeedback(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackNVContinuous_CustomStopFeedback_m94D18A6BBF88CAD8BB6F919D5A5B30E1954A0813 (MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___feedbacksIntensity1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!FeedbackTypeAuthorized)
		IL2CPP_RUNTIME_CLASS_INIT(MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6_il2cpp_TypeInfo_var);
		bool L_0 = ((MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6_StaticFields*)il2cpp_codegen_static_fields_for(MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6_il2cpp_TypeInfo_var))->get_FeedbackTypeAuthorized_28();
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// base.CustomStopFeedback(position, feedbacksIntensity);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___position0;
		float L_2 = ___feedbacksIntensity1;
		MMFeedback_CustomStopFeedback_m637BE3F6114F85830A2E7073DEEF05B95CA79A83(__this, L_1, L_2, /*hidden argument*/NULL);
		// IsPlaying = false;
		VirtActionInvoker1< bool >::Invoke(14 /* System.Void MoreMountains.Feedbacks.MMFeedback::set_IsPlaying(System.Boolean) */, __this, (bool)0);
		// HapticController.Stop();
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_Stop_m82FC5B96158D94AD4740A182530C35F1D7320BA3(/*hidden argument*/NULL);
		// if (Active && (_coroutine != null))
		bool L_3 = ((MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4 *)__this)->get_Active_4();
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_4 = __this->get__coroutine_39();
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		// StopCoroutine(_coroutine);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5 = __this->get__coroutine_39();
		MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413(__this, L_5, /*hidden argument*/NULL);
		// _coroutine = null;
		__this->set__coroutine_39((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackNVContinuous__ctor_mBAF06CD79A0E0F5C3CE11B82C8D688833A8A300B (MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float MinAmplitude = 1f;
		__this->set_MinAmplitude_29((1.0f));
		// public float MaxAmplitude = 1f;
		__this->set_MaxAmplitude_30((1.0f));
		// public float MinFrequency = 1f;
		__this->set_MinFrequency_31((1.0f));
		// public float MaxFrequency = 1f;
		__this->set_MaxFrequency_32((1.0f));
		// public float MinDuration = 1f;
		__this->set_MinDuration_33((1.0f));
		// public float MaxDuration = 1f;
		__this->set_MaxDuration_34((1.0f));
		// public AnimationCurve AmplitudeMultiplication = new AnimationCurve(new Keyframe(0, 0), new Keyframe(0.5f, 1f), new Keyframe(1, 0f));
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_0 = (KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)SZArrayNew(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var, (uint32_t)3);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_1 = L_0;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_2);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_3 = L_1;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_4), (0.5f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_4);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_5 = L_3;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_6), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_6);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_7 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0(L_7, L_5, /*hidden argument*/NULL);
		__this->set_AmplitudeMultiplication_36(L_7);
		// public AnimationCurve ShiftFrequency = new AnimationCurve(new Keyframe(0, 0), new Keyframe(0.5f, 1f), new Keyframe(1, 0f));
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_8 = (KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)SZArrayNew(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var, (uint32_t)3);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_9 = L_8;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_10), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_10);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_11 = L_9;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_12), (0.5f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_12);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_13 = L_11;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Keyframe__ctor_mE08ED8666CB420F48B8D95B7D6B305A5ED0CFD9C((&L_14), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_14);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_15 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0(L_15, L_13, /*hidden argument*/NULL);
		__this->set_ShiftFrequency_37(L_15);
		MMFeedback__ctor_m3A0FE0C8FEDD2D759EC31C4432C65DBD4B1A06A0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackNVContinuous__cctor_m6579F812EAC3C9854E209CEB5D065F00C6B8D261 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool FeedbackTypeAuthorized = true;
		((MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6_StaticFields*)il2cpp_codegen_static_fields_for(MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6_il2cpp_TypeInfo_var))->set_FeedbackTypeAuthorized_28((bool)1);
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
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackNVControl::CustomPlayFeedback(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackNVControl_CustomPlayFeedback_mEED1AD38637282E81293B80A934A898F7894849E (MMFeedbackNVControl_t5F53E468A2A361DA4860FA9C1A27B449E4DAC650 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___feedbacksIntensity1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMFeedbackNVControl_t5F53E468A2A361DA4860FA9C1A27B449E4DAC650_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (!Active || !FeedbackTypeAuthorized)
		bool L_0 = ((MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4 *)__this)->get_Active_4();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MMFeedbackNVControl_t5F53E468A2A361DA4860FA9C1A27B449E4DAC650_il2cpp_TypeInfo_var);
		bool L_1 = ((MMFeedbackNVControl_t5F53E468A2A361DA4860FA9C1A27B449E4DAC650_StaticFields*)il2cpp_codegen_static_fields_for(MMFeedbackNVControl_t5F53E468A2A361DA4860FA9C1A27B449E4DAC650_il2cpp_TypeInfo_var))->get_FeedbackTypeAuthorized_28();
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
		// switch (ControlType)
		int32_t L_2 = __this->get_ControlType_29();
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_003c;
			}
			case 2:
			{
				goto IL_0043;
			}
			case 3:
			{
				goto IL_004a;
			}
			case 4:
			{
				goto IL_0056;
			}
			case 5:
			{
				goto IL_0062;
			}
		}
	}
	{
		return;
	}

IL_0036:
	{
		// HapticController.Stop();
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_Stop_m82FC5B96158D94AD4740A182530C35F1D7320BA3(/*hidden argument*/NULL);
		// break;
		return;
	}

IL_003c:
	{
		// HapticController.hapticsEnabled = true;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_set_hapticsEnabled_mB950F536C211758A6A2E8E110C4E1FAB47C86468((bool)1, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0043:
	{
		// HapticController.hapticsEnabled = false;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_set_hapticsEnabled_mB950F536C211758A6A2E8E110C4E1FAB47C86468((bool)0, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_004a:
	{
		// HapticController.outputLevel = OutputLevel;
		float L_4 = __this->get_OutputLevel_30();
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_set_outputLevel_m735E0FB73F3541438EBA55A93F7C695016922D40(L_4, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0056:
	{
		// LofeltHaptics.Initialize();
		IL2CPP_RUNTIME_CLASS_INIT(LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var);
		LofeltHaptics_Initialize_m6B01453A518B43C6AA94852220AFA7C97CD30EEC(/*hidden argument*/NULL);
		// HapticController.Init();
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = HapticController_Init_mD8E2CE47A997D7862BAB4CB838107F4850FFD1EE(/*hidden argument*/NULL);
		// break;
		return;
	}

IL_0062:
	{
		// LofeltHaptics.Release();
		IL2CPP_RUNTIME_CLASS_INIT(LofeltHaptics_t449C94106111277BCAF3AE1973C829166BB60192_il2cpp_TypeInfo_var);
		LofeltHaptics_Release_m2DEE355E8804F2EAAC973E9037C73D2D6A6C23B2(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackNVControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackNVControl__ctor_mEA89BC2F9329D09A16E79B3698E810D3ED6C827E (MMFeedbackNVControl_t5F53E468A2A361DA4860FA9C1A27B449E4DAC650 * __this, const RuntimeMethod* method)
{
	{
		// public float OutputLevel = 1f;
		__this->set_OutputLevel_30((1.0f));
		MMFeedback__ctor_m3A0FE0C8FEDD2D759EC31C4432C65DBD4B1A06A0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackNVControl::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackNVControl__cctor_m118FBF818612EA538E3D38C8B37289860A8BB50D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMFeedbackNVControl_t5F53E468A2A361DA4860FA9C1A27B449E4DAC650_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool FeedbackTypeAuthorized = true;
		((MMFeedbackNVControl_t5F53E468A2A361DA4860FA9C1A27B449E4DAC650_StaticFields*)il2cpp_codegen_static_fields_for(MMFeedbackNVControl_t5F53E468A2A361DA4860FA9C1A27B449E4DAC650_il2cpp_TypeInfo_var))->set_FeedbackTypeAuthorized_28((bool)1);
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
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackNVEmphasis::CustomPlayFeedback(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackNVEmphasis_CustomPlayFeedback_mFC1BC40944C86BA7A154A484E8B241D50B7C734A (MMFeedbackNVEmphasis_t8C52D473E911FE7AF7E423F545C385FFAA5FD30F * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___feedbacksIntensity1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMFeedbackNVEmphasis_t8C52D473E911FE7AF7E423F545C385FFAA5FD30F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (!Active || !FeedbackTypeAuthorized || !HapticSettings.CanPlay())
		bool L_0 = ((MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4 *)__this)->get_Active_4();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MMFeedbackNVEmphasis_t8C52D473E911FE7AF7E423F545C385FFAA5FD30F_il2cpp_TypeInfo_var);
		bool L_1 = ((MMFeedbackNVEmphasis_t8C52D473E911FE7AF7E423F545C385FFAA5FD30F_StaticFields*)il2cpp_codegen_static_fields_for(MMFeedbackNVEmphasis_t8C52D473E911FE7AF7E423F545C385FFAA5FD30F_il2cpp_TypeInfo_var))->get_FeedbackTypeAuthorized_28();
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * L_2 = __this->get_HapticSettings_33();
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings::CanPlay() */, L_2);
		if (L_3)
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		// return;
		return;
	}

IL_001d:
	{
		// float amplitude = Random.Range(MinAmplitude, MaxAmplitude);
		float L_4 = __this->get_MinAmplitude_29();
		float L_5 = __this->get_MaxAmplitude_30();
		float L_6;
		L_6 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_4, L_5, /*hidden argument*/NULL);
		// float frequency = Random.Range(MinFrequency, MaxFrequency);
		float L_7 = __this->get_MinFrequency_31();
		float L_8 = __this->get_MaxFrequency_32();
		float L_9;
		L_9 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// HapticSettings.SetGamepad();
		MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * L_10 = __this->get_HapticSettings_33();
		NullCheck(L_10);
		VirtActionInvoker0::Invoke(4 /* System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings::SetGamepad() */, L_10);
		// HapticPatterns.PlayEmphasis(amplitude, frequency);
		float L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		HapticPatterns_PlayEmphasis_m8C9931324DA6629BDAAA4A1DFBC58112DA11291D(L_6, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackNVEmphasis::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackNVEmphasis__ctor_mC49B6CABC5E1DBE2BB14EB98E9EC176E0E2714DA (MMFeedbackNVEmphasis_t8C52D473E911FE7AF7E423F545C385FFAA5FD30F * __this, const RuntimeMethod* method)
{
	{
		// public float MinAmplitude = 1f;
		__this->set_MinAmplitude_29((1.0f));
		// public float MaxAmplitude = 1f;
		__this->set_MaxAmplitude_30((1.0f));
		// public float MinFrequency = 1f;
		__this->set_MinFrequency_31((1.0f));
		// public float MaxFrequency = 1f;
		__this->set_MaxFrequency_32((1.0f));
		MMFeedback__ctor_m3A0FE0C8FEDD2D759EC31C4432C65DBD4B1A06A0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackNVEmphasis::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackNVEmphasis__cctor_m19D3421591BA511EBAAB474C197359BA53BBCCC9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMFeedbackNVEmphasis_t8C52D473E911FE7AF7E423F545C385FFAA5FD30F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool FeedbackTypeAuthorized = true;
		((MMFeedbackNVEmphasis_t8C52D473E911FE7AF7E423F545C385FFAA5FD30F_StaticFields*)il2cpp_codegen_static_fields_for(MMFeedbackNVEmphasis_t8C52D473E911FE7AF7E423F545C385FFAA5FD30F_il2cpp_TypeInfo_var))->set_FeedbackTypeAuthorized_28((bool)1);
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
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackNVPreset::CustomPlayFeedback(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackNVPreset_CustomPlayFeedback_mF60672D1194BBC84D844B18C4CB43415E571886C (MMFeedbackNVPreset_tD2B365A02A8B422BAEBEBD29D88B5C74DD3AC209 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___feedbacksIntensity1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMFeedbackNVPreset_tD2B365A02A8B422BAEBEBD29D88B5C74DD3AC209_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Active || !FeedbackTypeAuthorized || !HapticSettings.CanPlay())
		bool L_0 = ((MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4 *)__this)->get_Active_4();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MMFeedbackNVPreset_tD2B365A02A8B422BAEBEBD29D88B5C74DD3AC209_il2cpp_TypeInfo_var);
		bool L_1 = ((MMFeedbackNVPreset_tD2B365A02A8B422BAEBEBD29D88B5C74DD3AC209_StaticFields*)il2cpp_codegen_static_fields_for(MMFeedbackNVPreset_tD2B365A02A8B422BAEBEBD29D88B5C74DD3AC209_il2cpp_TypeInfo_var))->get_FeedbackTypeAuthorized_28();
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * L_2 = __this->get_HapticSettings_30();
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings::CanPlay() */, L_2);
		if (L_3)
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		// return;
		return;
	}

IL_001d:
	{
		// HapticSettings.SetGamepad();
		MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * L_4 = __this->get_HapticSettings_30();
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(4 /* System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings::SetGamepad() */, L_4);
		// HapticPatterns.PlayPreset(Preset);
		int32_t L_5 = __this->get_Preset_29();
		IL2CPP_RUNTIME_CLASS_INIT(HapticPatterns_tC76F27CE75565BFD7F92AC6C8DB2A8A6E8EE0578_il2cpp_TypeInfo_var);
		HapticPatterns_PlayPreset_mA6ACC826F783F11639CA395E86A63C5ACDBF7770(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackNVPreset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackNVPreset__ctor_mD34BF786F62981629FCE378CCBF2C861516C9BB9 (MMFeedbackNVPreset_tD2B365A02A8B422BAEBEBD29D88B5C74DD3AC209 * __this, const RuntimeMethod* method)
{
	{
		// public HapticPatterns.PresetType Preset = HapticPatterns.PresetType.LightImpact;
		__this->set_Preset_29(4);
		MMFeedback__ctor_m3A0FE0C8FEDD2D759EC31C4432C65DBD4B1A06A0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackNVPreset::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackNVPreset__cctor_m4885C86983AF03789BCA6266378440D873714D7F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMFeedbackNVPreset_tD2B365A02A8B422BAEBEBD29D88B5C74DD3AC209_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool FeedbackTypeAuthorized = true;
		((MMFeedbackNVPreset_tD2B365A02A8B422BAEBEBD29D88B5C74DD3AC209_StaticFields*)il2cpp_codegen_static_fields_for(MMFeedbackNVPreset_tD2B365A02A8B422BAEBEBD29D88B5C74DD3AC209_il2cpp_TypeInfo_var))->set_FeedbackTypeAuthorized_28((bool)1);
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
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings::SetGamepad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackNVSettings_SetGamepad_m2BBD2909DF7898FE0972526ACB9E0522F8651CAA (MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * __this, const RuntimeMethod* method)
{
	{
		// if (ForceGamepadID)
		bool L_0 = __this->get_ForceGamepadID_0();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// GamepadRumbler.SetCurrentGamepad(GamepadID);
		int32_t L_1 = __this->get_GamepadID_1();
		GamepadRumbler_SetCurrentGamepad_m9D3E088E489CCBB7F0B814B0EC883495295E0043(L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings::CanPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MMFeedbackNVSettings_CanPlay_mFC93B0A5233BF41DC4EA72D04B9FDD92D7355215 (MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnlyPlayIfHapticsSupported && !DeviceCapabilities.isVersionSupported)
		bool L_0 = __this->get_OnlyPlayIfHapticsSupported_2();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = DeviceCapabilities_get_isVersionSupported_m4D5A155EEE3ECD5A4388C3E3FEB3EE3E3F3F7EF0_inline(/*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0011:
	{
		// if (OnlyPlayIfAdvancedRequirementsMet && !DeviceCapabilities.meetsAdvancedRequirements)
		bool L_2 = __this->get_OnlyPlayIfAdvancedRequirementsMet_3();
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = DeviceCapabilities_get_meetsAdvancedRequirements_mB898A08DE9870227B4CC654FC7D836E6AEDBB270_inline(/*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0022:
	{
		// if (OnlyPlayIfAmplitudeModulationSupported && !DeviceCapabilities.hasAmplitudeModulation)
		bool L_4 = __this->get_OnlyPlayIfAmplitudeModulationSupported_4();
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = DeviceCapabilities_get_hasAmplitudeModulation_mE44A6E41549EA0A69C2CEBAA8CD37258CD477F7E_inline(/*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0033;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0033:
	{
		// if (OnlyPlayIfFrequencyModulationSupported && !DeviceCapabilities.hasFrequencyModulation)
		bool L_6 = __this->get_OnlyPlayIfFrequencyModulationSupported_5();
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = DeviceCapabilities_get_hasFrequencyModulation_m658E7FD45A9974A68D06EA2C03ADAE3AAF062536_inline(/*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0044;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0044:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackNVSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackNVSettings__ctor_m4DC1B353D3CD02084E291C943EC4210040BEFBA4 (MMFeedbackNVSettings_t1CA46496C90EC01313583FBC3EEE8B504E9B6D26 * __this, const RuntimeMethod* method)
{
	{
		// public bool OnlyPlayIfHapticsSupported = true;
		__this->set_OnlyPlayIfHapticsSupported_2((bool)1);
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
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous/<RealtimeModulationCo>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRealtimeModulationCoU3Ed__17__ctor_m58EA8A1D7F64B87593FB4E1FDE1B76AF91EA81FE (U3CRealtimeModulationCoU3Ed__17_tDCB139E8985AB0539F13E0FF613138C8E6886944 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous/<RealtimeModulationCo>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRealtimeModulationCoU3Ed__17_System_IDisposable_Dispose_m691AD8D1DC2D420D1C3A04542E8A1A7A28BF742D (U3CRealtimeModulationCoU3Ed__17_tDCB139E8985AB0539F13E0FF613138C8E6886944 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous/<RealtimeModulationCo>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRealtimeModulationCoU3Ed__17_MoveNext_mF1103B84D2A1942EA3F4F6C6F6EB94B84CFCD435 (U3CRealtimeModulationCoU3Ed__17_tDCB139E8985AB0539F13E0FF613138C8E6886944 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B * V_1 = NULL;
	float V_2 = 0.0f;
	U3CRealtimeModulationCoU3Ed__17_tDCB139E8985AB0539F13E0FF613138C8E6886944 * G_B4_0 = NULL;
	U3CRealtimeModulationCoU3Ed__17_tDCB139E8985AB0539F13E0FF613138C8E6886944 * G_B3_0 = NULL;
	float G_B5_0 = 0.0f;
	U3CRealtimeModulationCoU3Ed__17_tDCB139E8985AB0539F13E0FF613138C8E6886944 * G_B5_1 = NULL;
	float G_B8_0 = 0.0f;
	U3CRealtimeModulationCoU3Ed__17_tDCB139E8985AB0539F13E0FF613138C8E6886944 * G_B8_1 = NULL;
	float G_B7_0 = 0.0f;
	U3CRealtimeModulationCoU3Ed__17_tDCB139E8985AB0539F13E0FF613138C8E6886944 * G_B7_1 = NULL;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	U3CRealtimeModulationCoU3Ed__17_tDCB139E8985AB0539F13E0FF613138C8E6886944 * G_B9_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00c4;
			}
			case 2:
			{
				goto IL_0140;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// IsPlaying = true;
		MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B * L_3 = V_1;
		NullCheck(L_3);
		VirtActionInvoker1< bool >::Invoke(16 /* System.Void MoreMountains.Feedbacks.MMF_Feedback::set_IsPlaying(System.Boolean) */, L_3, (bool)1);
		// float journey = NormalPlayDirection ? 0f : FeedbackDuration;
		MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B * L_4 = V_1;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtFuncInvoker0< bool >::Invoke(45 /* System.Boolean MoreMountains.Feedbacks.MMF_Feedback::get_NormalPlayDirection() */, L_4);
		G_B3_0 = __this;
		if (L_5)
		{
			G_B4_0 = __this;
			goto IL_0041;
		}
	}
	{
		MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B * L_6 = V_1;
		NullCheck(L_6);
		float L_7;
		L_7 = VirtFuncInvoker0< float >::Invoke(26 /* System.Single MoreMountains.Feedbacks.MMF_Feedback::get_FeedbackDuration() */, L_6);
		G_B5_0 = L_7;
		G_B5_1 = G_B3_0;
		goto IL_0046;
	}

IL_0041:
	{
		G_B5_0 = (0.0f);
		G_B5_1 = G_B4_0;
	}

IL_0046:
	{
		NullCheck(G_B5_1);
		G_B5_1->set_U3CjourneyU3E5__2_3(G_B5_0);
		goto IL_00cb;
	}

IL_004d:
	{
		// float remappedTime = MMFeedbacksHelpers.Remap(journey, 0f, FeedbackDuration, 0f, 1f);
		float L_8 = __this->get_U3CjourneyU3E5__2_3();
		MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B * L_9 = V_1;
		NullCheck(L_9);
		float L_10;
		L_10 = VirtFuncInvoker0< float >::Invoke(26 /* System.Single MoreMountains.Feedbacks.MMF_Feedback::get_FeedbackDuration() */, L_9);
		float L_11;
		L_11 = MMFeedbacksHelpers_Remap_mF91639B3964272F011DC211808184EC25AF9571F(L_8, (0.0f), L_10, (0.0f), (1.0f), /*hidden argument*/NULL);
		V_2 = L_11;
		// HapticController.clipLevel = AmplitudeMultiplication.Evaluate(remappedTime);
		MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B * L_12 = V_1;
		NullCheck(L_12);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_13 = L_12->get_AmplitudeMultiplication_35();
		float L_14 = V_2;
		NullCheck(L_13);
		float L_15;
		L_15 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_13, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_set_clipLevel_m40774F6E28DD87C22CEAF119FD4C1A2B2C6EA997(L_15, /*hidden argument*/NULL);
		// HapticController.clipFrequencyShift = ShiftFrequency.Evaluate(remappedTime);
		MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B * L_16 = V_1;
		NullCheck(L_16);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_17 = L_16->get_ShiftFrequency_36();
		float L_18 = V_2;
		NullCheck(L_17);
		float L_19;
		L_19 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_17, L_18, /*hidden argument*/NULL);
		HapticController_set_clipFrequencyShift_mF62FEFA43B591720BB2513641321749EBB33014E(L_19, /*hidden argument*/NULL);
		// journey += NormalPlayDirection ? FeedbackDeltaTime : -FeedbackDeltaTime;
		float L_20 = __this->get_U3CjourneyU3E5__2_3();
		MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B * L_21 = V_1;
		NullCheck(L_21);
		bool L_22;
		L_22 = VirtFuncInvoker0< bool >::Invoke(45 /* System.Boolean MoreMountains.Feedbacks.MMF_Feedback::get_NormalPlayDirection() */, L_21);
		G_B7_0 = L_20;
		G_B7_1 = __this;
		if (L_22)
		{
			G_B8_0 = L_20;
			G_B8_1 = __this;
			goto IL_00a8;
		}
	}
	{
		MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B * L_23 = V_1;
		NullCheck(L_23);
		float L_24;
		L_24 = VirtFuncInvoker0< float >::Invoke(18 /* System.Single MoreMountains.Feedbacks.MMF_Feedback::get_FeedbackDeltaTime() */, L_23);
		G_B9_0 = ((-L_24));
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_00ae;
	}

IL_00a8:
	{
		MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B * L_25 = V_1;
		NullCheck(L_25);
		float L_26;
		L_26 = VirtFuncInvoker0< float >::Invoke(18 /* System.Single MoreMountains.Feedbacks.MMF_Feedback::get_FeedbackDeltaTime() */, L_25);
		G_B9_0 = L_26;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_00ae:
	{
		NullCheck(G_B9_2);
		G_B9_2->set_U3CjourneyU3E5__2_3(((float)il2cpp_codegen_add((float)G_B9_1, (float)G_B9_0)));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00c4:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00cb:
	{
		// while ((journey >= 0) && (journey <= FeedbackDuration) && (FeedbackDuration > 0))
		float L_27 = __this->get_U3CjourneyU3E5__2_3();
		if ((!(((float)L_27) >= ((float)(0.0f)))))
		{
			goto IL_00f6;
		}
	}
	{
		float L_28 = __this->get_U3CjourneyU3E5__2_3();
		MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B * L_29 = V_1;
		NullCheck(L_29);
		float L_30;
		L_30 = VirtFuncInvoker0< float >::Invoke(26 /* System.Single MoreMountains.Feedbacks.MMF_Feedback::get_FeedbackDuration() */, L_29);
		if ((!(((float)L_28) <= ((float)L_30))))
		{
			goto IL_00f6;
		}
	}
	{
		MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B * L_31 = V_1;
		NullCheck(L_31);
		float L_32;
		L_32 = VirtFuncInvoker0< float >::Invoke(26 /* System.Single MoreMountains.Feedbacks.MMF_Feedback::get_FeedbackDuration() */, L_31);
		if ((((float)L_32) > ((float)(0.0f))))
		{
			goto IL_004d;
		}
	}

IL_00f6:
	{
		// HapticController.clipLevel = AmplitudeMultiplication.Evaluate(FinalNormalizedTime);
		MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B * L_33 = V_1;
		NullCheck(L_33);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_34 = L_33->get_AmplitudeMultiplication_35();
		MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B * L_35 = V_1;
		NullCheck(L_35);
		float L_36;
		L_36 = VirtFuncInvoker0< float >::Invoke(42 /* System.Single MoreMountains.Feedbacks.MMF_Feedback::get_FinalNormalizedTime() */, L_35);
		NullCheck(L_34);
		float L_37;
		L_37 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_34, L_36, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_set_clipLevel_m40774F6E28DD87C22CEAF119FD4C1A2B2C6EA997(L_37, /*hidden argument*/NULL);
		// HapticController.clipFrequencyShift = ShiftFrequency.Evaluate(FinalNormalizedTime);
		MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B * L_38 = V_1;
		NullCheck(L_38);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_39 = L_38->get_ShiftFrequency_36();
		MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B * L_40 = V_1;
		NullCheck(L_40);
		float L_41;
		L_41 = VirtFuncInvoker0< float >::Invoke(42 /* System.Single MoreMountains.Feedbacks.MMF_Feedback::get_FinalNormalizedTime() */, L_40);
		NullCheck(L_39);
		float L_42;
		L_42 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_39, L_41, /*hidden argument*/NULL);
		HapticController_set_clipFrequencyShift_mF62FEFA43B591720BB2513641321749EBB33014E(L_42, /*hidden argument*/NULL);
		// IsPlaying = false;
		MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B * L_43 = V_1;
		NullCheck(L_43);
		VirtActionInvoker1< bool >::Invoke(16 /* System.Void MoreMountains.Feedbacks.MMF_Feedback::set_IsPlaying(System.Boolean) */, L_43, (bool)0);
		// _coroutine = null;
		MMF_NVContinuous_t2BE0737DA19B6B9BC0A40C8AEB3B23F710443F8B * L_44 = V_1;
		NullCheck(L_44);
		L_44->set__coroutine_38((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0140:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous/<RealtimeModulationCo>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRealtimeModulationCoU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA850EB11CB8E44C0C80F07675B064F3A199820D3 (U3CRealtimeModulationCoU3Ed__17_tDCB139E8985AB0539F13E0FF613138C8E6886944 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous/<RealtimeModulationCo>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRealtimeModulationCoU3Ed__17_System_Collections_IEnumerator_Reset_mFAC687527E355906569ABE4F624264DCD4E09D86 (U3CRealtimeModulationCoU3Ed__17_tDCB139E8985AB0539F13E0FF613138C8E6886944 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRealtimeModulationCoU3Ed__17_System_Collections_IEnumerator_Reset_mFAC687527E355906569ABE4F624264DCD4E09D86_RuntimeMethod_var)));
	}
}
// System.Object MoreMountains.FeedbacksForThirdParty.MMF_NVContinuous/<RealtimeModulationCo>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRealtimeModulationCoU3Ed__17_System_Collections_IEnumerator_get_Current_mAB3E3297D7D36D0C896FFA3D6CF1B58D6925CA88 (U3CRealtimeModulationCoU3Ed__17_tDCB139E8985AB0539F13E0FF613138C8E6886944 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous/<RealtimeModulationCo>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRealtimeModulationCoU3Ed__17__ctor_mB9ECF071815E7A99B3B2E468857FA86A0BFB757C (U3CRealtimeModulationCoU3Ed__17_t7EFFEE2F6DA9C5B73DB52A66D963A75B4E9815D3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous/<RealtimeModulationCo>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRealtimeModulationCoU3Ed__17_System_IDisposable_Dispose_m906C6715D1E754304A1FF285256EB74DF6B36261 (U3CRealtimeModulationCoU3Ed__17_t7EFFEE2F6DA9C5B73DB52A66D963A75B4E9815D3 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous/<RealtimeModulationCo>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRealtimeModulationCoU3Ed__17_MoveNext_m8702D5575E7096C5059D8F98C1C040BFD13E7505 (U3CRealtimeModulationCoU3Ed__17_t7EFFEE2F6DA9C5B73DB52A66D963A75B4E9815D3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6 * V_1 = NULL;
	float V_2 = 0.0f;
	U3CRealtimeModulationCoU3Ed__17_t7EFFEE2F6DA9C5B73DB52A66D963A75B4E9815D3 * G_B4_0 = NULL;
	U3CRealtimeModulationCoU3Ed__17_t7EFFEE2F6DA9C5B73DB52A66D963A75B4E9815D3 * G_B3_0 = NULL;
	float G_B5_0 = 0.0f;
	U3CRealtimeModulationCoU3Ed__17_t7EFFEE2F6DA9C5B73DB52A66D963A75B4E9815D3 * G_B5_1 = NULL;
	float G_B8_0 = 0.0f;
	U3CRealtimeModulationCoU3Ed__17_t7EFFEE2F6DA9C5B73DB52A66D963A75B4E9815D3 * G_B8_1 = NULL;
	float G_B7_0 = 0.0f;
	U3CRealtimeModulationCoU3Ed__17_t7EFFEE2F6DA9C5B73DB52A66D963A75B4E9815D3 * G_B7_1 = NULL;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	U3CRealtimeModulationCoU3Ed__17_t7EFFEE2F6DA9C5B73DB52A66D963A75B4E9815D3 * G_B9_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00c4;
			}
			case 2:
			{
				goto IL_0140;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// IsPlaying = true;
		MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6 * L_3 = V_1;
		NullCheck(L_3);
		VirtActionInvoker1< bool >::Invoke(14 /* System.Void MoreMountains.Feedbacks.MMFeedback::set_IsPlaying(System.Boolean) */, L_3, (bool)1);
		// float journey = NormalPlayDirection ? 0f : FeedbackDuration;
		MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6 * L_4 = V_1;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean MoreMountains.Feedbacks.MMFeedback::get_NormalPlayDirection() */, L_4);
		G_B3_0 = __this;
		if (L_5)
		{
			G_B4_0 = __this;
			goto IL_0041;
		}
	}
	{
		MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6 * L_6 = V_1;
		NullCheck(L_6);
		float L_7;
		L_7 = VirtFuncInvoker0< float >::Invoke(16 /* System.Single MoreMountains.Feedbacks.MMFeedback::get_FeedbackDuration() */, L_6);
		G_B5_0 = L_7;
		G_B5_1 = G_B3_0;
		goto IL_0046;
	}

IL_0041:
	{
		G_B5_0 = (0.0f);
		G_B5_1 = G_B4_0;
	}

IL_0046:
	{
		NullCheck(G_B5_1);
		G_B5_1->set_U3CjourneyU3E5__2_3(G_B5_0);
		goto IL_00cb;
	}

IL_004d:
	{
		// float remappedTime = MMFeedbacksHelpers.Remap(journey, 0f, FeedbackDuration, 0f, 1f);
		float L_8 = __this->get_U3CjourneyU3E5__2_3();
		MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6 * L_9 = V_1;
		NullCheck(L_9);
		float L_10;
		L_10 = VirtFuncInvoker0< float >::Invoke(16 /* System.Single MoreMountains.Feedbacks.MMFeedback::get_FeedbackDuration() */, L_9);
		float L_11;
		L_11 = MMFeedbacksHelpers_Remap_mF91639B3964272F011DC211808184EC25AF9571F(L_8, (0.0f), L_10, (0.0f), (1.0f), /*hidden argument*/NULL);
		V_2 = L_11;
		// HapticController.clipLevel = AmplitudeMultiplication.Evaluate(remappedTime);
		MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6 * L_12 = V_1;
		NullCheck(L_12);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_13 = L_12->get_AmplitudeMultiplication_36();
		float L_14 = V_2;
		NullCheck(L_13);
		float L_15;
		L_15 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_13, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_set_clipLevel_m40774F6E28DD87C22CEAF119FD4C1A2B2C6EA997(L_15, /*hidden argument*/NULL);
		// HapticController.clipFrequencyShift = ShiftFrequency.Evaluate(remappedTime);
		MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6 * L_16 = V_1;
		NullCheck(L_16);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_17 = L_16->get_ShiftFrequency_37();
		float L_18 = V_2;
		NullCheck(L_17);
		float L_19;
		L_19 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_17, L_18, /*hidden argument*/NULL);
		HapticController_set_clipFrequencyShift_mF62FEFA43B591720BB2513641321749EBB33014E(L_19, /*hidden argument*/NULL);
		// journey += NormalPlayDirection ? FeedbackDeltaTime : -FeedbackDeltaTime;
		float L_20 = __this->get_U3CjourneyU3E5__2_3();
		MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6 * L_21 = V_1;
		NullCheck(L_21);
		bool L_22;
		L_22 = VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean MoreMountains.Feedbacks.MMFeedback::get_NormalPlayDirection() */, L_21);
		G_B7_0 = L_20;
		G_B7_1 = __this;
		if (L_22)
		{
			G_B8_0 = L_20;
			G_B8_1 = __this;
			goto IL_00a8;
		}
	}
	{
		MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6 * L_23 = V_1;
		NullCheck(L_23);
		float L_24;
		L_24 = MMFeedback_get_FeedbackDeltaTime_m3EF4F11444CD2F00CF1E656478EFC2EC0DF541E7(L_23, /*hidden argument*/NULL);
		G_B9_0 = ((-L_24));
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_00ae;
	}

IL_00a8:
	{
		MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6 * L_25 = V_1;
		NullCheck(L_25);
		float L_26;
		L_26 = MMFeedback_get_FeedbackDeltaTime_m3EF4F11444CD2F00CF1E656478EFC2EC0DF541E7(L_25, /*hidden argument*/NULL);
		G_B9_0 = L_26;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_00ae:
	{
		NullCheck(G_B9_2);
		G_B9_2->set_U3CjourneyU3E5__2_3(((float)il2cpp_codegen_add((float)G_B9_1, (float)G_B9_0)));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00c4:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00cb:
	{
		// while ((journey >= 0) && (journey <= FeedbackDuration) && (FeedbackDuration > 0))
		float L_27 = __this->get_U3CjourneyU3E5__2_3();
		if ((!(((float)L_27) >= ((float)(0.0f)))))
		{
			goto IL_00f6;
		}
	}
	{
		float L_28 = __this->get_U3CjourneyU3E5__2_3();
		MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6 * L_29 = V_1;
		NullCheck(L_29);
		float L_30;
		L_30 = VirtFuncInvoker0< float >::Invoke(16 /* System.Single MoreMountains.Feedbacks.MMFeedback::get_FeedbackDuration() */, L_29);
		if ((!(((float)L_28) <= ((float)L_30))))
		{
			goto IL_00f6;
		}
	}
	{
		MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6 * L_31 = V_1;
		NullCheck(L_31);
		float L_32;
		L_32 = VirtFuncInvoker0< float >::Invoke(16 /* System.Single MoreMountains.Feedbacks.MMFeedback::get_FeedbackDuration() */, L_31);
		if ((((float)L_32) > ((float)(0.0f))))
		{
			goto IL_004d;
		}
	}

IL_00f6:
	{
		// HapticController.clipLevel = AmplitudeMultiplication.Evaluate(FinalNormalizedTime);
		MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6 * L_33 = V_1;
		NullCheck(L_33);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_34 = L_33->get_AmplitudeMultiplication_36();
		MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6 * L_35 = V_1;
		NullCheck(L_35);
		float L_36;
		L_36 = VirtFuncInvoker0< float >::Invoke(35 /* System.Single MoreMountains.Feedbacks.MMFeedback::get_FinalNormalizedTime() */, L_35);
		NullCheck(L_34);
		float L_37;
		L_37 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_34, L_36, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		HapticController_set_clipLevel_m40774F6E28DD87C22CEAF119FD4C1A2B2C6EA997(L_37, /*hidden argument*/NULL);
		// HapticController.clipFrequencyShift = ShiftFrequency.Evaluate(FinalNormalizedTime);
		MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6 * L_38 = V_1;
		NullCheck(L_38);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_39 = L_38->get_ShiftFrequency_37();
		MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6 * L_40 = V_1;
		NullCheck(L_40);
		float L_41;
		L_41 = VirtFuncInvoker0< float >::Invoke(35 /* System.Single MoreMountains.Feedbacks.MMFeedback::get_FinalNormalizedTime() */, L_40);
		NullCheck(L_39);
		float L_42;
		L_42 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_39, L_41, /*hidden argument*/NULL);
		HapticController_set_clipFrequencyShift_mF62FEFA43B591720BB2513641321749EBB33014E(L_42, /*hidden argument*/NULL);
		// IsPlaying = false;
		MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6 * L_43 = V_1;
		NullCheck(L_43);
		VirtActionInvoker1< bool >::Invoke(14 /* System.Void MoreMountains.Feedbacks.MMFeedback::set_IsPlaying(System.Boolean) */, L_43, (bool)0);
		// _coroutine = null;
		MMFeedbackNVContinuous_t8A0764B34544FA58B2A089DF9E942B1C47533BE6 * L_44 = V_1;
		NullCheck(L_44);
		L_44->set__coroutine_39((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0140:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous/<RealtimeModulationCo>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRealtimeModulationCoU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m52F7C9AFB7BEA88794E053A69F55F0056C5E30BB (U3CRealtimeModulationCoU3Ed__17_t7EFFEE2F6DA9C5B73DB52A66D963A75B4E9815D3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous/<RealtimeModulationCo>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRealtimeModulationCoU3Ed__17_System_Collections_IEnumerator_Reset_m0DC944A0941E10976503E48999DA14FA20B47748 (U3CRealtimeModulationCoU3Ed__17_t7EFFEE2F6DA9C5B73DB52A66D963A75B4E9815D3 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRealtimeModulationCoU3Ed__17_System_Collections_IEnumerator_Reset_m0DC944A0941E10976503E48999DA14FA20B47748_RuntimeMethod_var)));
	}
}
// System.Object MoreMountains.FeedbacksForThirdParty.MMFeedbackNVContinuous/<RealtimeModulationCo>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRealtimeModulationCoU3Ed__17_System_Collections_IEnumerator_get_Current_m3B16C02049FA966A00140E64CB171C0172CF8321 (U3CRealtimeModulationCoU3Ed__17_t7EFFEE2F6DA9C5B73DB52A66D963A75B4E9815D3 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HapticController_set_fallbackPreset_m1AF6BD5D44158F810D7941E574E0121677A38A3D_inline (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { _fallbackPreset = value; }
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var);
		((HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_tCF66201AF596D421FA26B175E41175BF665BC230_il2cpp_TypeInfo_var))->set__fallbackPreset_8(L_0);
		// set { _fallbackPreset = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_isVersionSupported_m4D5A155EEE3ECD5A4388C3E3FEB3EE3E3F3F7EF0_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool isVersionSupported { get; }
		IL2CPP_RUNTIME_CLASS_INIT(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var))->get_U3CisVersionSupportedU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_meetsAdvancedRequirements_mB898A08DE9870227B4CC654FC7D836E6AEDBB270_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _meetsAdvancedRequirements;
		IL2CPP_RUNTIME_CLASS_INIT(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var))->get__meetsAdvancedRequirements_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_hasAmplitudeModulation_mE44A6E41549EA0A69C2CEBAA8CD37258CD477F7E_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _hasAmplitudeModulation;
		IL2CPP_RUNTIME_CLASS_INIT(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var))->get__hasAmplitudeModulation_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_hasFrequencyModulation_m658E7FD45A9974A68D06EA2C03ADAE3AAF062536_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _hasFrequencyModulation;
		IL2CPP_RUNTIME_CLASS_INIT(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC5C270C1CFCA2A334C0CBB810D8FE2D8CFDE9065_il2cpp_TypeInfo_var))->get__hasFrequencyModulation_7();
		return L_0;
	}
}

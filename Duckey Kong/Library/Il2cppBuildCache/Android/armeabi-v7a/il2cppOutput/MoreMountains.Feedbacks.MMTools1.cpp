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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<MoreMountains.Feedbacks.MMF_Feedback>
struct List_1_t91011B8E4F4F08323FF95B0F0FD0791995EE8E53;
// System.Collections.Generic.List`1<MoreMountains.Feedbacks.MMFeedback>
struct List_1_t65DB3FDD9079C29778530442558DE4285EB4A794;
// System.Collections.Generic.List`1<MoreMountains.Feedbacks.MMFeedbackBaseTarget>
struct List_1_t7F905B771D6DB41F0D7B6A88AA1D17F87C21CCFB;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.Audio.AudioMixerGroup
struct AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.Gradient
struct Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// MoreMountains.Feedbacks.MMF_Button
struct MMF_Button_tBC99E5B38C53042DF29D5A7F02CC900E8AA4F9D5;
// MoreMountains.Feedbacks.MMF_Player
struct MMF_Player_tC899A947C0F4E42B7461FAB8A051855F7BEF0A7D;
// MoreMountains.Feedbacks.MMF_Property
struct MMF_Property_tE9428377535B5E6742AEB82FD641DD76B9D8520D;
// MoreMountains.Feedbacks.MMF_Sound
struct MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402;
// MoreMountains.Feedbacks.MMFeedback
struct MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4;
// MoreMountains.Feedbacks.MMFeedbackBase
struct MMFeedbackBase_tBFE40896312C5014CBD6AA33309C76A7292B34E3;
// MoreMountains.Feedbacks.MMFeedbackFog
struct MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2;
// MoreMountains.Feedbacks.MMFeedbackImageAlpha
struct MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE;
// MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound
struct MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB;
// MoreMountains.Feedbacks.MMFeedbackProperty
struct MMFeedbackProperty_tD231512F1C1F4D5B36F24A02C90A27E609DEB987;
// MoreMountains.Feedbacks.MMFeedbackSound
struct MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8;
// MoreMountains.Feedbacks.MMFeedbackTiming
struct MMFeedbackTiming_tA2ECBE1844BDDE1A8986173D25959D9A863892A6;
// MoreMountains.Feedbacks.MMFeedbacks
struct MMFeedbacks_t85E1CCEB3EF536B1B61EEA20ACEBB974F3FE2914;
// MoreMountains.Feedbacks.MMFeedbacksEvents
struct MMFeedbacksEvents_tD97C44EABE3B4C421BC47194E569A5333306807A;
// MoreMountains.Tools.MMPropertyReceiver
struct MMPropertyReceiver_tCA9142A4E253A90AD828CFB0428B0E08573899B1;
// MoreMountains.Tools.MMTweenType
struct MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
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
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// MoreMountains.Feedbacks.MMF_Property/<UpdateValueSequence>d__18
struct U3CUpdateValueSequenceU3Ed__18_t18E90725E16FD43169C5634AB67E1585EE970CDD;
// MoreMountains.Feedbacks.MMFeedbackBase/<UpdateValueSequence>d__19
struct U3CUpdateValueSequenceU3Ed__19_tBFFFA4DC9BEB096B2B5840BE43FE60D341AAD7EB;
// MoreMountains.Feedbacks.MMFeedbackFog/<FogSequence>d__28
struct U3CFogSequenceU3Ed__28_t9921F5DCD7C86011CB1A878DEADD8E3446AEBA82;
// MoreMountains.Feedbacks.MMFeedbackImageAlpha/<ImageSequence>d__19
struct U3CImageSequenceU3Ed__19_t8F1110C705CCCDDDA2DC9587B60821DDA4E7600F;
// MoreMountains.Feedbacks.MMFeedbackProperty/<UpdateValueSequence>d__18
struct U3CUpdateValueSequenceU3Ed__18_tBE0124C712FDD6CE1915C9AE0F6B92E1BBCE3451;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0CF1C526BD3872B6F7B223B157F80669490DCBCF;
IL2CPP_EXTERN_C String_t* _stringLiteral6524BEAD3BC85019058034D3B90F6AAD25D87885;
IL2CPP_EXTERN_C String_t* _stringLiteral9706EC31E2B043535F43A0B97CC1AA2377F4A865;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CTestPlaySoundU3Ed__28_t9DDF20BAA74EEFB92905046D489853DF097A7A8C_m78CAE59C8FC9823654AC053CCDA749101BBD7B10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CTestPlaySoundU3Ed__29_tA9A34B5BCD921BAD6224EADD12A268E3A962D52B_m7AC6612FE08543449AB211C113A2265E1CAC248C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CTestPlaySoundU3Ed__47_t34D4D55F28F0D099E86F571722BA46997FBC0E95_m76D574DCB1A78642731A492220F67F7F04038EC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFogSequenceU3Ed__28_System_Collections_IEnumerator_Reset_m88F79D340760B6703000C942FA0EE53C4E4A2CAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CImageSequenceU3Ed__19_System_Collections_IEnumerator_Reset_m66002730BD87B5637D3A60813D59AFB71AF9104E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUpdateValueSequenceU3Ed__18_System_Collections_IEnumerator_Reset_m86C34B0BF0342A2D93565115A909C7244A02F91B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUpdateValueSequenceU3Ed__18_System_Collections_IEnumerator_Reset_mE853E9AC40660D1056A9AD2F6E43DBEC2E34ACCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUpdateValueSequenceU3Ed__19_System_Collections_IEnumerator_Reset_mBFC4E0E3578131D42E0B6ADD277535CE87C7FB5E_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


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

// MoreMountains.Feedbacks.MMF_Property/<UpdateValueSequence>d__18
struct U3CUpdateValueSequenceU3Ed__18_t18E90725E16FD43169C5634AB67E1585EE970CDD  : public RuntimeObject
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMF_Property/<UpdateValueSequence>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MoreMountains.Feedbacks.MMF_Property/<UpdateValueSequence>d__18::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// MoreMountains.Feedbacks.MMF_Property MoreMountains.Feedbacks.MMF_Property/<UpdateValueSequence>d__18::<>4__this
	MMF_Property_tE9428377535B5E6742AEB82FD641DD76B9D8520D * ___U3CU3E4__this_2;
	// System.Single MoreMountains.Feedbacks.MMF_Property/<UpdateValueSequence>d__18::intensityMultiplier
	float ___intensityMultiplier_3;
	// System.Single MoreMountains.Feedbacks.MMF_Property/<UpdateValueSequence>d__18::<journey>5__2
	float ___U3CjourneyU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUpdateValueSequenceU3Ed__18_t18E90725E16FD43169C5634AB67E1585EE970CDD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CUpdateValueSequenceU3Ed__18_t18E90725E16FD43169C5634AB67E1585EE970CDD, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CUpdateValueSequenceU3Ed__18_t18E90725E16FD43169C5634AB67E1585EE970CDD, ___U3CU3E4__this_2)); }
	inline MMF_Property_tE9428377535B5E6742AEB82FD641DD76B9D8520D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MMF_Property_tE9428377535B5E6742AEB82FD641DD76B9D8520D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MMF_Property_tE9428377535B5E6742AEB82FD641DD76B9D8520D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_intensityMultiplier_3() { return static_cast<int32_t>(offsetof(U3CUpdateValueSequenceU3Ed__18_t18E90725E16FD43169C5634AB67E1585EE970CDD, ___intensityMultiplier_3)); }
	inline float get_intensityMultiplier_3() const { return ___intensityMultiplier_3; }
	inline float* get_address_of_intensityMultiplier_3() { return &___intensityMultiplier_3; }
	inline void set_intensityMultiplier_3(float value)
	{
		___intensityMultiplier_3 = value;
	}

	inline static int32_t get_offset_of_U3CjourneyU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CUpdateValueSequenceU3Ed__18_t18E90725E16FD43169C5634AB67E1585EE970CDD, ___U3CjourneyU3E5__2_4)); }
	inline float get_U3CjourneyU3E5__2_4() const { return ___U3CjourneyU3E5__2_4; }
	inline float* get_address_of_U3CjourneyU3E5__2_4() { return &___U3CjourneyU3E5__2_4; }
	inline void set_U3CjourneyU3E5__2_4(float value)
	{
		___U3CjourneyU3E5__2_4 = value;
	}
};


// MoreMountains.Feedbacks.MMFeedbackBase/<UpdateValueSequence>d__19
struct U3CUpdateValueSequenceU3Ed__19_tBFFFA4DC9BEB096B2B5840BE43FE60D341AAD7EB  : public RuntimeObject
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMFeedbackBase/<UpdateValueSequence>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MoreMountains.Feedbacks.MMFeedbackBase/<UpdateValueSequence>d__19::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// MoreMountains.Feedbacks.MMFeedbackBase MoreMountains.Feedbacks.MMFeedbackBase/<UpdateValueSequence>d__19::<>4__this
	MMFeedbackBase_tBFE40896312C5014CBD6AA33309C76A7292B34E3 * ___U3CU3E4__this_2;
	// System.Single MoreMountains.Feedbacks.MMFeedbackBase/<UpdateValueSequence>d__19::feedbacksIntensity
	float ___feedbacksIntensity_3;
	// System.Single MoreMountains.Feedbacks.MMFeedbackBase/<UpdateValueSequence>d__19::<journey>5__2
	float ___U3CjourneyU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUpdateValueSequenceU3Ed__19_tBFFFA4DC9BEB096B2B5840BE43FE60D341AAD7EB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CUpdateValueSequenceU3Ed__19_tBFFFA4DC9BEB096B2B5840BE43FE60D341AAD7EB, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CUpdateValueSequenceU3Ed__19_tBFFFA4DC9BEB096B2B5840BE43FE60D341AAD7EB, ___U3CU3E4__this_2)); }
	inline MMFeedbackBase_tBFE40896312C5014CBD6AA33309C76A7292B34E3 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MMFeedbackBase_tBFE40896312C5014CBD6AA33309C76A7292B34E3 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MMFeedbackBase_tBFE40896312C5014CBD6AA33309C76A7292B34E3 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_feedbacksIntensity_3() { return static_cast<int32_t>(offsetof(U3CUpdateValueSequenceU3Ed__19_tBFFFA4DC9BEB096B2B5840BE43FE60D341AAD7EB, ___feedbacksIntensity_3)); }
	inline float get_feedbacksIntensity_3() const { return ___feedbacksIntensity_3; }
	inline float* get_address_of_feedbacksIntensity_3() { return &___feedbacksIntensity_3; }
	inline void set_feedbacksIntensity_3(float value)
	{
		___feedbacksIntensity_3 = value;
	}

	inline static int32_t get_offset_of_U3CjourneyU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CUpdateValueSequenceU3Ed__19_tBFFFA4DC9BEB096B2B5840BE43FE60D341AAD7EB, ___U3CjourneyU3E5__2_4)); }
	inline float get_U3CjourneyU3E5__2_4() const { return ___U3CjourneyU3E5__2_4; }
	inline float* get_address_of_U3CjourneyU3E5__2_4() { return &___U3CjourneyU3E5__2_4; }
	inline void set_U3CjourneyU3E5__2_4(float value)
	{
		___U3CjourneyU3E5__2_4 = value;
	}
};


// MoreMountains.Feedbacks.MMFeedbackFog/<FogSequence>d__28
struct U3CFogSequenceU3Ed__28_t9921F5DCD7C86011CB1A878DEADD8E3446AEBA82  : public RuntimeObject
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMFeedbackFog/<FogSequence>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MoreMountains.Feedbacks.MMFeedbackFog/<FogSequence>d__28::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// MoreMountains.Feedbacks.MMFeedbackFog MoreMountains.Feedbacks.MMFeedbackFog/<FogSequence>d__28::<>4__this
	MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2 * ___U3CU3E4__this_2;
	// System.Single MoreMountains.Feedbacks.MMFeedbackFog/<FogSequence>d__28::intensityMultiplier
	float ___intensityMultiplier_3;
	// System.Single MoreMountains.Feedbacks.MMFeedbackFog/<FogSequence>d__28::<journey>5__2
	float ___U3CjourneyU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFogSequenceU3Ed__28_t9921F5DCD7C86011CB1A878DEADD8E3446AEBA82, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFogSequenceU3Ed__28_t9921F5DCD7C86011CB1A878DEADD8E3446AEBA82, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFogSequenceU3Ed__28_t9921F5DCD7C86011CB1A878DEADD8E3446AEBA82, ___U3CU3E4__this_2)); }
	inline MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_intensityMultiplier_3() { return static_cast<int32_t>(offsetof(U3CFogSequenceU3Ed__28_t9921F5DCD7C86011CB1A878DEADD8E3446AEBA82, ___intensityMultiplier_3)); }
	inline float get_intensityMultiplier_3() const { return ___intensityMultiplier_3; }
	inline float* get_address_of_intensityMultiplier_3() { return &___intensityMultiplier_3; }
	inline void set_intensityMultiplier_3(float value)
	{
		___intensityMultiplier_3 = value;
	}

	inline static int32_t get_offset_of_U3CjourneyU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CFogSequenceU3Ed__28_t9921F5DCD7C86011CB1A878DEADD8E3446AEBA82, ___U3CjourneyU3E5__2_4)); }
	inline float get_U3CjourneyU3E5__2_4() const { return ___U3CjourneyU3E5__2_4; }
	inline float* get_address_of_U3CjourneyU3E5__2_4() { return &___U3CjourneyU3E5__2_4; }
	inline void set_U3CjourneyU3E5__2_4(float value)
	{
		___U3CjourneyU3E5__2_4 = value;
	}
};


// MoreMountains.Feedbacks.MMFeedbackImageAlpha/<ImageSequence>d__19
struct U3CImageSequenceU3Ed__19_t8F1110C705CCCDDDA2DC9587B60821DDA4E7600F  : public RuntimeObject
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMFeedbackImageAlpha/<ImageSequence>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MoreMountains.Feedbacks.MMFeedbackImageAlpha/<ImageSequence>d__19::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// MoreMountains.Feedbacks.MMFeedbackImageAlpha MoreMountains.Feedbacks.MMFeedbackImageAlpha/<ImageSequence>d__19::<>4__this
	MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE * ___U3CU3E4__this_2;
	// System.Single MoreMountains.Feedbacks.MMFeedbackImageAlpha/<ImageSequence>d__19::<journey>5__2
	float ___U3CjourneyU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CImageSequenceU3Ed__19_t8F1110C705CCCDDDA2DC9587B60821DDA4E7600F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CImageSequenceU3Ed__19_t8F1110C705CCCDDDA2DC9587B60821DDA4E7600F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CImageSequenceU3Ed__19_t8F1110C705CCCDDDA2DC9587B60821DDA4E7600F, ___U3CU3E4__this_2)); }
	inline MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CjourneyU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CImageSequenceU3Ed__19_t8F1110C705CCCDDDA2DC9587B60821DDA4E7600F, ___U3CjourneyU3E5__2_3)); }
	inline float get_U3CjourneyU3E5__2_3() const { return ___U3CjourneyU3E5__2_3; }
	inline float* get_address_of_U3CjourneyU3E5__2_3() { return &___U3CjourneyU3E5__2_3; }
	inline void set_U3CjourneyU3E5__2_3(float value)
	{
		___U3CjourneyU3E5__2_3 = value;
	}
};


// MoreMountains.Feedbacks.MMFeedbackProperty/<UpdateValueSequence>d__18
struct U3CUpdateValueSequenceU3Ed__18_tBE0124C712FDD6CE1915C9AE0F6B92E1BBCE3451  : public RuntimeObject
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMFeedbackProperty/<UpdateValueSequence>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MoreMountains.Feedbacks.MMFeedbackProperty/<UpdateValueSequence>d__18::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// MoreMountains.Feedbacks.MMFeedbackProperty MoreMountains.Feedbacks.MMFeedbackProperty/<UpdateValueSequence>d__18::<>4__this
	MMFeedbackProperty_tD231512F1C1F4D5B36F24A02C90A27E609DEB987 * ___U3CU3E4__this_2;
	// System.Single MoreMountains.Feedbacks.MMFeedbackProperty/<UpdateValueSequence>d__18::intensityMultiplier
	float ___intensityMultiplier_3;
	// System.Single MoreMountains.Feedbacks.MMFeedbackProperty/<UpdateValueSequence>d__18::<journey>5__2
	float ___U3CjourneyU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUpdateValueSequenceU3Ed__18_tBE0124C712FDD6CE1915C9AE0F6B92E1BBCE3451, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CUpdateValueSequenceU3Ed__18_tBE0124C712FDD6CE1915C9AE0F6B92E1BBCE3451, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CUpdateValueSequenceU3Ed__18_tBE0124C712FDD6CE1915C9AE0F6B92E1BBCE3451, ___U3CU3E4__this_2)); }
	inline MMFeedbackProperty_tD231512F1C1F4D5B36F24A02C90A27E609DEB987 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MMFeedbackProperty_tD231512F1C1F4D5B36F24A02C90A27E609DEB987 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MMFeedbackProperty_tD231512F1C1F4D5B36F24A02C90A27E609DEB987 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_intensityMultiplier_3() { return static_cast<int32_t>(offsetof(U3CUpdateValueSequenceU3Ed__18_tBE0124C712FDD6CE1915C9AE0F6B92E1BBCE3451, ___intensityMultiplier_3)); }
	inline float get_intensityMultiplier_3() const { return ___intensityMultiplier_3; }
	inline float* get_address_of_intensityMultiplier_3() { return &___intensityMultiplier_3; }
	inline void set_intensityMultiplier_3(float value)
	{
		___intensityMultiplier_3 = value;
	}

	inline static int32_t get_offset_of_U3CjourneyU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CUpdateValueSequenceU3Ed__18_tBE0124C712FDD6CE1915C9AE0F6B92E1BBCE3451, ___U3CjourneyU3E5__2_4)); }
	inline float get_U3CjourneyU3E5__2_4() const { return ___U3CjourneyU3E5__2_4; }
	inline float* get_address_of_U3CjourneyU3E5__2_4() { return &___U3CjourneyU3E5__2_4; }
	inline void set_U3CjourneyU3E5__2_4(float value)
	{
		___U3CjourneyU3E5__2_4 = value;
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


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
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

// UnityEngine.AudioRolloffMode
struct AudioRolloffMode_tF03AAD2EA769530A00736FF411F5A77B8C753CA1 
{
public:
	// System.Int32 UnityEngine.AudioRolloffMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AudioRolloffMode_tF03AAD2EA769530A00736FF411F5A77B8C753CA1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.Feedbacks.MMF_MMSoundManagerTrackControl/ControlModes
struct ControlModes_t1F38FAA93ACEAF9AD78F8D2247DECC2509E3D3DF 
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMF_MMSoundManagerTrackControl/ControlModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControlModes_t1F38FAA93ACEAF9AD78F8D2247DECC2509E3D3DF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.Feedbacks.MMF_PPMovingFilter/Modes
struct Modes_t9B50C85D631C1D1A12D6CDE99760DC1FC2BF24F4 
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMF_PPMovingFilter/Modes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Modes_t9B50C85D631C1D1A12D6CDE99760DC1FC2BF24F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.Feedbacks.MMF_Playlist/Modes
struct Modes_t6CE9E78064B0043DBC315DE068557BC3B0EA0D1B 
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMF_Playlist/Modes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Modes_t6CE9E78064B0043DBC315DE068557BC3B0EA0D1B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.Feedbacks.MMF_Property/Modes
struct Modes_tFD0803C69BE49085B6E93C4C079D5CEA6C38E59D 
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMF_Property/Modes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Modes_tFD0803C69BE49085B6E93C4C079D5CEA6C38E59D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.Feedbacks.MMF_ShaderController/Modes
struct Modes_t71319D4C5A3FA2CC5086BE9A0AF61F14CEC96085 
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMF_ShaderController/Modes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Modes_t71319D4C5A3FA2CC5086BE9A0AF61F14CEC96085, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.Feedbacks.MMF_Sound/PlayMethods
struct PlayMethods_t3DE8EE08C2FDEF1A7D8204B06EA2A5A21BBBE60A 
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMF_Sound/PlayMethods::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayMethods_t3DE8EE08C2FDEF1A7D8204B06EA2A5A21BBBE60A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.Feedbacks.MMFeedbackBase/Modes
struct Modes_t2027C69933FF83F9DE6351E6CAF1E20CF4FFDCEC 
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMFeedbackBase/Modes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Modes_t2027C69933FF83F9DE6351E6CAF1E20CF4FFDCEC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.Feedbacks.MMFeedbackBlink/BlinkModes
struct BlinkModes_t5784B1E518451DFB1B0FB6BDEEB703DE43AEEBE0 
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMFeedbackBlink/BlinkModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlinkModes_t5784B1E518451DFB1B0FB6BDEEB703DE43AEEBE0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.Feedbacks.MMFeedbackDebugLog/DebugLogModes
struct DebugLogModes_tABE5FA81DECFFFC1EE47E27496407C53203AA681 
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMFeedbackDebugLog/DebugLogModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebugLogModes_tABE5FA81DECFFFC1EE47E27496407C53203AA681, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.Feedbacks.MMFeedbackFade/FadeTypes
struct FadeTypes_t4FBA237887B2D6E151F5E8C1996A2E8123B3425A 
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMFeedbackFade/FadeTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FadeTypes_t4FBA237887B2D6E151F5E8C1996A2E8123B3425A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.Feedbacks.MMFeedbackFade/PositionModes
struct PositionModes_tA55ABA6C79B66886277776B6FFBAAABBEFF5B95D 
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMFeedbackFade/PositionModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PositionModes_tA55ABA6C79B66886277776B6FFBAAABBEFF5B95D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.Feedbacks.MMFeedbackFloatController/Modes
struct Modes_tADB709016C6D5F549BA0E6ADC8C6A79488FE95B7 
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMFeedbackFloatController/Modes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Modes_tADB709016C6D5F549BA0E6ADC8C6A79488FE95B7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.Feedbacks.MMFeedbackFloatingText/PositionModes
struct PositionModes_t1AAD44029F1336F9DA308B9139902683DCAA3D07 
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMFeedbackFloatingText/PositionModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PositionModes_t1AAD44029F1336F9DA308B9139902683DCAA3D07, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.Feedbacks.MMFeedbackFog/Modes
struct Modes_t5C29ED2B766115925A669982A5FB9B9AFD62784B 
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMFeedbackFog/Modes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Modes_t5C29ED2B766115925A669982A5FB9B9AFD62784B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.Feedbacks.MMFeedbackImageAlpha/Modes
struct Modes_t98953ED51968A90CA9A13BEAC2A460F53FE40227 
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMFeedbackImageAlpha/Modes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Modes_t98953ED51968A90CA9A13BEAC2A460F53FE40227, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.Feedbacks.MMFeedbackLoadScene/LoadingModes
struct LoadingModes_tC82F8F9BC12869476E791E577FDCD2B030462883 
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMFeedbackLoadScene/LoadingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadingModes_tC82F8F9BC12869476E791E577FDCD2B030462883, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSaveLoad/Modes
struct Modes_t56B34B3081ECFA17176D4890DE774ED6F6F7E7B5 
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSaveLoad/Modes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Modes_t56B34B3081ECFA17176D4890DE774ED6F6F7E7B5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.Feedbacks.MMFeedbackMMSoundManagerTrackControl/ControlModes
struct ControlModes_t20B5A13BDE53BA9CFE85C8B408727A0ECD7AF256 
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMFeedbackMMSoundManagerTrackControl/ControlModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControlModes_t20B5A13BDE53BA9CFE85C8B408727A0ECD7AF256, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.Feedbacks.MMFeedbackPPMovingFilter/Modes
struct Modes_t8D8C61AB8D377A1F3F4CD1518FCA1CDA4D7E09AA 
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMFeedbackPPMovingFilter/Modes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Modes_t8D8C61AB8D377A1F3F4CD1518FCA1CDA4D7E09AA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.Feedbacks.MMFeedbackPlaylist/Modes
struct Modes_t8FA8D7AD59596ECFED0ACA3D036A3ABFE721CB57 
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMFeedbackPlaylist/Modes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Modes_t8FA8D7AD59596ECFED0ACA3D036A3ABFE721CB57, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.Feedbacks.MMFeedbackProperty/Modes
struct Modes_t6A30F1F44450628509AA16C553B7DD9E6C2B8FD9 
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMFeedbackProperty/Modes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Modes_t6A30F1F44450628509AA16C553B7DD9E6C2B8FD9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.Feedbacks.MMFeedbackShaderController/Modes
struct Modes_t987935C61637A8084904622785435778AD9B7286 
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMFeedbackShaderController/Modes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Modes_t987935C61637A8084904622785435778AD9B7286, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.Feedbacks.MMFeedbackSound/PlayMethods
struct PlayMethods_t15F4B3BFC3647280A21332DF7213D144184F3FAC 
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMFeedbackSound/PlayMethods::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayMethods_t15F4B3BFC3647280A21332DF7213D144184F3FAC, ___value___2)); }
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


// MoreMountains.Tools.MMSoundManager/MMSoundManagerTracks
struct MMSoundManagerTracks_t25F2F95C5EC87B036C2752C2882126D721E1324F 
{
public:
	// System.Int32 MoreMountains.Tools.MMSoundManager/MMSoundManagerTracks::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MMSoundManagerTracks_t25F2F95C5EC87B036C2752C2882126D721E1324F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Audio.AudioMixerGroup
struct AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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


// MoreMountains.Feedbacks.MMF_Property
struct MMF_Property_tE9428377535B5E6742AEB82FD641DD76B9D8520D  : public MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06
{
public:
	// MoreMountains.Tools.MMPropertyReceiver MoreMountains.Feedbacks.MMF_Property::Target
	MMPropertyReceiver_tCA9142A4E253A90AD828CFB0428B0E08573899B1 * ___Target_27;
	// MoreMountains.Feedbacks.MMF_Property/Modes MoreMountains.Feedbacks.MMF_Property::Mode
	int32_t ___Mode_28;
	// System.Single MoreMountains.Feedbacks.MMF_Property::Duration
	float ___Duration_29;
	// System.Boolean MoreMountains.Feedbacks.MMF_Property::StartsOff
	bool ___StartsOff_30;
	// System.Boolean MoreMountains.Feedbacks.MMF_Property::RelativeValues
	bool ___RelativeValues_31;
	// System.Boolean MoreMountains.Feedbacks.MMF_Property::AllowAdditivePlays
	bool ___AllowAdditivePlays_32;
	// MoreMountains.Tools.MMTweenType MoreMountains.Feedbacks.MMF_Property::LevelCurve
	MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175 * ___LevelCurve_33;
	// System.Single MoreMountains.Feedbacks.MMF_Property::RemapLevelZero
	float ___RemapLevelZero_34;
	// System.Single MoreMountains.Feedbacks.MMF_Property::RemapLevelOne
	float ___RemapLevelOne_35;
	// System.Single MoreMountains.Feedbacks.MMF_Property::InstantLevel
	float ___InstantLevel_36;
	// System.Single MoreMountains.Feedbacks.MMF_Property::_initialIntensity
	float ____initialIntensity_37;
	// UnityEngine.Coroutine MoreMountains.Feedbacks.MMF_Property::_coroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____coroutine_38;

public:
	inline static int32_t get_offset_of_Target_27() { return static_cast<int32_t>(offsetof(MMF_Property_tE9428377535B5E6742AEB82FD641DD76B9D8520D, ___Target_27)); }
	inline MMPropertyReceiver_tCA9142A4E253A90AD828CFB0428B0E08573899B1 * get_Target_27() const { return ___Target_27; }
	inline MMPropertyReceiver_tCA9142A4E253A90AD828CFB0428B0E08573899B1 ** get_address_of_Target_27() { return &___Target_27; }
	inline void set_Target_27(MMPropertyReceiver_tCA9142A4E253A90AD828CFB0428B0E08573899B1 * value)
	{
		___Target_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Target_27), (void*)value);
	}

	inline static int32_t get_offset_of_Mode_28() { return static_cast<int32_t>(offsetof(MMF_Property_tE9428377535B5E6742AEB82FD641DD76B9D8520D, ___Mode_28)); }
	inline int32_t get_Mode_28() const { return ___Mode_28; }
	inline int32_t* get_address_of_Mode_28() { return &___Mode_28; }
	inline void set_Mode_28(int32_t value)
	{
		___Mode_28 = value;
	}

	inline static int32_t get_offset_of_Duration_29() { return static_cast<int32_t>(offsetof(MMF_Property_tE9428377535B5E6742AEB82FD641DD76B9D8520D, ___Duration_29)); }
	inline float get_Duration_29() const { return ___Duration_29; }
	inline float* get_address_of_Duration_29() { return &___Duration_29; }
	inline void set_Duration_29(float value)
	{
		___Duration_29 = value;
	}

	inline static int32_t get_offset_of_StartsOff_30() { return static_cast<int32_t>(offsetof(MMF_Property_tE9428377535B5E6742AEB82FD641DD76B9D8520D, ___StartsOff_30)); }
	inline bool get_StartsOff_30() const { return ___StartsOff_30; }
	inline bool* get_address_of_StartsOff_30() { return &___StartsOff_30; }
	inline void set_StartsOff_30(bool value)
	{
		___StartsOff_30 = value;
	}

	inline static int32_t get_offset_of_RelativeValues_31() { return static_cast<int32_t>(offsetof(MMF_Property_tE9428377535B5E6742AEB82FD641DD76B9D8520D, ___RelativeValues_31)); }
	inline bool get_RelativeValues_31() const { return ___RelativeValues_31; }
	inline bool* get_address_of_RelativeValues_31() { return &___RelativeValues_31; }
	inline void set_RelativeValues_31(bool value)
	{
		___RelativeValues_31 = value;
	}

	inline static int32_t get_offset_of_AllowAdditivePlays_32() { return static_cast<int32_t>(offsetof(MMF_Property_tE9428377535B5E6742AEB82FD641DD76B9D8520D, ___AllowAdditivePlays_32)); }
	inline bool get_AllowAdditivePlays_32() const { return ___AllowAdditivePlays_32; }
	inline bool* get_address_of_AllowAdditivePlays_32() { return &___AllowAdditivePlays_32; }
	inline void set_AllowAdditivePlays_32(bool value)
	{
		___AllowAdditivePlays_32 = value;
	}

	inline static int32_t get_offset_of_LevelCurve_33() { return static_cast<int32_t>(offsetof(MMF_Property_tE9428377535B5E6742AEB82FD641DD76B9D8520D, ___LevelCurve_33)); }
	inline MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175 * get_LevelCurve_33() const { return ___LevelCurve_33; }
	inline MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175 ** get_address_of_LevelCurve_33() { return &___LevelCurve_33; }
	inline void set_LevelCurve_33(MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175 * value)
	{
		___LevelCurve_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LevelCurve_33), (void*)value);
	}

	inline static int32_t get_offset_of_RemapLevelZero_34() { return static_cast<int32_t>(offsetof(MMF_Property_tE9428377535B5E6742AEB82FD641DD76B9D8520D, ___RemapLevelZero_34)); }
	inline float get_RemapLevelZero_34() const { return ___RemapLevelZero_34; }
	inline float* get_address_of_RemapLevelZero_34() { return &___RemapLevelZero_34; }
	inline void set_RemapLevelZero_34(float value)
	{
		___RemapLevelZero_34 = value;
	}

	inline static int32_t get_offset_of_RemapLevelOne_35() { return static_cast<int32_t>(offsetof(MMF_Property_tE9428377535B5E6742AEB82FD641DD76B9D8520D, ___RemapLevelOne_35)); }
	inline float get_RemapLevelOne_35() const { return ___RemapLevelOne_35; }
	inline float* get_address_of_RemapLevelOne_35() { return &___RemapLevelOne_35; }
	inline void set_RemapLevelOne_35(float value)
	{
		___RemapLevelOne_35 = value;
	}

	inline static int32_t get_offset_of_InstantLevel_36() { return static_cast<int32_t>(offsetof(MMF_Property_tE9428377535B5E6742AEB82FD641DD76B9D8520D, ___InstantLevel_36)); }
	inline float get_InstantLevel_36() const { return ___InstantLevel_36; }
	inline float* get_address_of_InstantLevel_36() { return &___InstantLevel_36; }
	inline void set_InstantLevel_36(float value)
	{
		___InstantLevel_36 = value;
	}

	inline static int32_t get_offset_of__initialIntensity_37() { return static_cast<int32_t>(offsetof(MMF_Property_tE9428377535B5E6742AEB82FD641DD76B9D8520D, ____initialIntensity_37)); }
	inline float get__initialIntensity_37() const { return ____initialIntensity_37; }
	inline float* get_address_of__initialIntensity_37() { return &____initialIntensity_37; }
	inline void set__initialIntensity_37(float value)
	{
		____initialIntensity_37 = value;
	}

	inline static int32_t get_offset_of__coroutine_38() { return static_cast<int32_t>(offsetof(MMF_Property_tE9428377535B5E6742AEB82FD641DD76B9D8520D, ____coroutine_38)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__coroutine_38() const { return ____coroutine_38; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__coroutine_38() { return &____coroutine_38; }
	inline void set__coroutine_38(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____coroutine_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____coroutine_38), (void*)value);
	}
};


// MoreMountains.Feedbacks.MMF_Sound
struct MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402  : public MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06
{
public:
	// UnityEngine.AudioClip MoreMountains.Feedbacks.MMF_Sound::Sfx
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___Sfx_28;
	// UnityEngine.AudioClip[] MoreMountains.Feedbacks.MMF_Sound::RandomSfx
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___RandomSfx_29;
	// MoreMountains.Feedbacks.MMF_Button MoreMountains.Feedbacks.MMF_Sound::TestPlayButton
	MMF_Button_tBC99E5B38C53042DF29D5A7F02CC900E8AA4F9D5 * ___TestPlayButton_30;
	// MoreMountains.Feedbacks.MMF_Button MoreMountains.Feedbacks.MMF_Sound::TestStopButton
	MMF_Button_tBC99E5B38C53042DF29D5A7F02CC900E8AA4F9D5 * ___TestStopButton_31;
	// MoreMountains.Feedbacks.MMF_Sound/PlayMethods MoreMountains.Feedbacks.MMF_Sound::PlayMethod
	int32_t ___PlayMethod_32;
	// System.Int32 MoreMountains.Feedbacks.MMF_Sound::PoolSize
	int32_t ___PoolSize_33;
	// System.Single MoreMountains.Feedbacks.MMF_Sound::MinVolume
	float ___MinVolume_34;
	// System.Single MoreMountains.Feedbacks.MMF_Sound::MaxVolume
	float ___MaxVolume_35;
	// System.Single MoreMountains.Feedbacks.MMF_Sound::MinPitch
	float ___MinPitch_36;
	// System.Single MoreMountains.Feedbacks.MMF_Sound::MaxPitch
	float ___MaxPitch_37;
	// UnityEngine.Audio.AudioMixerGroup MoreMountains.Feedbacks.MMF_Sound::SfxAudioMixerGroup
	AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * ___SfxAudioMixerGroup_38;
	// UnityEngine.AudioClip MoreMountains.Feedbacks.MMF_Sound::_randomClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ____randomClip_39;
	// UnityEngine.AudioSource MoreMountains.Feedbacks.MMF_Sound::_cachedAudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ____cachedAudioSource_40;
	// UnityEngine.AudioSource[] MoreMountains.Feedbacks.MMF_Sound::_pool
	AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* ____pool_41;
	// UnityEngine.AudioSource MoreMountains.Feedbacks.MMF_Sound::_tempAudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ____tempAudioSource_42;
	// System.Single MoreMountains.Feedbacks.MMF_Sound::_duration
	float ____duration_43;
	// UnityEngine.AudioSource MoreMountains.Feedbacks.MMF_Sound::_editorAudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ____editorAudioSource_44;

public:
	inline static int32_t get_offset_of_Sfx_28() { return static_cast<int32_t>(offsetof(MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402, ___Sfx_28)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_Sfx_28() const { return ___Sfx_28; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_Sfx_28() { return &___Sfx_28; }
	inline void set_Sfx_28(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___Sfx_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Sfx_28), (void*)value);
	}

	inline static int32_t get_offset_of_RandomSfx_29() { return static_cast<int32_t>(offsetof(MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402, ___RandomSfx_29)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get_RandomSfx_29() const { return ___RandomSfx_29; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of_RandomSfx_29() { return &___RandomSfx_29; }
	inline void set_RandomSfx_29(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
	{
		___RandomSfx_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RandomSfx_29), (void*)value);
	}

	inline static int32_t get_offset_of_TestPlayButton_30() { return static_cast<int32_t>(offsetof(MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402, ___TestPlayButton_30)); }
	inline MMF_Button_tBC99E5B38C53042DF29D5A7F02CC900E8AA4F9D5 * get_TestPlayButton_30() const { return ___TestPlayButton_30; }
	inline MMF_Button_tBC99E5B38C53042DF29D5A7F02CC900E8AA4F9D5 ** get_address_of_TestPlayButton_30() { return &___TestPlayButton_30; }
	inline void set_TestPlayButton_30(MMF_Button_tBC99E5B38C53042DF29D5A7F02CC900E8AA4F9D5 * value)
	{
		___TestPlayButton_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TestPlayButton_30), (void*)value);
	}

	inline static int32_t get_offset_of_TestStopButton_31() { return static_cast<int32_t>(offsetof(MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402, ___TestStopButton_31)); }
	inline MMF_Button_tBC99E5B38C53042DF29D5A7F02CC900E8AA4F9D5 * get_TestStopButton_31() const { return ___TestStopButton_31; }
	inline MMF_Button_tBC99E5B38C53042DF29D5A7F02CC900E8AA4F9D5 ** get_address_of_TestStopButton_31() { return &___TestStopButton_31; }
	inline void set_TestStopButton_31(MMF_Button_tBC99E5B38C53042DF29D5A7F02CC900E8AA4F9D5 * value)
	{
		___TestStopButton_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TestStopButton_31), (void*)value);
	}

	inline static int32_t get_offset_of_PlayMethod_32() { return static_cast<int32_t>(offsetof(MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402, ___PlayMethod_32)); }
	inline int32_t get_PlayMethod_32() const { return ___PlayMethod_32; }
	inline int32_t* get_address_of_PlayMethod_32() { return &___PlayMethod_32; }
	inline void set_PlayMethod_32(int32_t value)
	{
		___PlayMethod_32 = value;
	}

	inline static int32_t get_offset_of_PoolSize_33() { return static_cast<int32_t>(offsetof(MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402, ___PoolSize_33)); }
	inline int32_t get_PoolSize_33() const { return ___PoolSize_33; }
	inline int32_t* get_address_of_PoolSize_33() { return &___PoolSize_33; }
	inline void set_PoolSize_33(int32_t value)
	{
		___PoolSize_33 = value;
	}

	inline static int32_t get_offset_of_MinVolume_34() { return static_cast<int32_t>(offsetof(MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402, ___MinVolume_34)); }
	inline float get_MinVolume_34() const { return ___MinVolume_34; }
	inline float* get_address_of_MinVolume_34() { return &___MinVolume_34; }
	inline void set_MinVolume_34(float value)
	{
		___MinVolume_34 = value;
	}

	inline static int32_t get_offset_of_MaxVolume_35() { return static_cast<int32_t>(offsetof(MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402, ___MaxVolume_35)); }
	inline float get_MaxVolume_35() const { return ___MaxVolume_35; }
	inline float* get_address_of_MaxVolume_35() { return &___MaxVolume_35; }
	inline void set_MaxVolume_35(float value)
	{
		___MaxVolume_35 = value;
	}

	inline static int32_t get_offset_of_MinPitch_36() { return static_cast<int32_t>(offsetof(MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402, ___MinPitch_36)); }
	inline float get_MinPitch_36() const { return ___MinPitch_36; }
	inline float* get_address_of_MinPitch_36() { return &___MinPitch_36; }
	inline void set_MinPitch_36(float value)
	{
		___MinPitch_36 = value;
	}

	inline static int32_t get_offset_of_MaxPitch_37() { return static_cast<int32_t>(offsetof(MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402, ___MaxPitch_37)); }
	inline float get_MaxPitch_37() const { return ___MaxPitch_37; }
	inline float* get_address_of_MaxPitch_37() { return &___MaxPitch_37; }
	inline void set_MaxPitch_37(float value)
	{
		___MaxPitch_37 = value;
	}

	inline static int32_t get_offset_of_SfxAudioMixerGroup_38() { return static_cast<int32_t>(offsetof(MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402, ___SfxAudioMixerGroup_38)); }
	inline AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * get_SfxAudioMixerGroup_38() const { return ___SfxAudioMixerGroup_38; }
	inline AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F ** get_address_of_SfxAudioMixerGroup_38() { return &___SfxAudioMixerGroup_38; }
	inline void set_SfxAudioMixerGroup_38(AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * value)
	{
		___SfxAudioMixerGroup_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SfxAudioMixerGroup_38), (void*)value);
	}

	inline static int32_t get_offset_of__randomClip_39() { return static_cast<int32_t>(offsetof(MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402, ____randomClip_39)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get__randomClip_39() const { return ____randomClip_39; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of__randomClip_39() { return &____randomClip_39; }
	inline void set__randomClip_39(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		____randomClip_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____randomClip_39), (void*)value);
	}

	inline static int32_t get_offset_of__cachedAudioSource_40() { return static_cast<int32_t>(offsetof(MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402, ____cachedAudioSource_40)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get__cachedAudioSource_40() const { return ____cachedAudioSource_40; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of__cachedAudioSource_40() { return &____cachedAudioSource_40; }
	inline void set__cachedAudioSource_40(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		____cachedAudioSource_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedAudioSource_40), (void*)value);
	}

	inline static int32_t get_offset_of__pool_41() { return static_cast<int32_t>(offsetof(MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402, ____pool_41)); }
	inline AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* get__pool_41() const { return ____pool_41; }
	inline AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B** get_address_of__pool_41() { return &____pool_41; }
	inline void set__pool_41(AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* value)
	{
		____pool_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pool_41), (void*)value);
	}

	inline static int32_t get_offset_of__tempAudioSource_42() { return static_cast<int32_t>(offsetof(MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402, ____tempAudioSource_42)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get__tempAudioSource_42() const { return ____tempAudioSource_42; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of__tempAudioSource_42() { return &____tempAudioSource_42; }
	inline void set__tempAudioSource_42(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		____tempAudioSource_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tempAudioSource_42), (void*)value);
	}

	inline static int32_t get_offset_of__duration_43() { return static_cast<int32_t>(offsetof(MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402, ____duration_43)); }
	inline float get__duration_43() const { return ____duration_43; }
	inline float* get_address_of__duration_43() { return &____duration_43; }
	inline void set__duration_43(float value)
	{
		____duration_43 = value;
	}

	inline static int32_t get_offset_of__editorAudioSource_44() { return static_cast<int32_t>(offsetof(MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402, ____editorAudioSource_44)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get__editorAudioSource_44() const { return ____editorAudioSource_44; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of__editorAudioSource_44() { return &____editorAudioSource_44; }
	inline void set__editorAudioSource_44(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		____editorAudioSource_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____editorAudioSource_44), (void*)value);
	}
};

struct MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402_StaticFields
{
public:
	// System.Boolean MoreMountains.Feedbacks.MMF_Sound::FeedbackTypeAuthorized
	bool ___FeedbackTypeAuthorized_27;

public:
	inline static int32_t get_offset_of_FeedbackTypeAuthorized_27() { return static_cast<int32_t>(offsetof(MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402_StaticFields, ___FeedbackTypeAuthorized_27)); }
	inline bool get_FeedbackTypeAuthorized_27() const { return ___FeedbackTypeAuthorized_27; }
	inline bool* get_address_of_FeedbackTypeAuthorized_27() { return &___FeedbackTypeAuthorized_27; }
	inline void set_FeedbackTypeAuthorized_27(bool value)
	{
		___FeedbackTypeAuthorized_27 = value;
	}
};


// MoreMountains.Tools.MMSoundManagerPlayOptions
struct MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300 
{
public:
	// MoreMountains.Tools.MMSoundManager/MMSoundManagerTracks MoreMountains.Tools.MMSoundManagerPlayOptions::MmSoundManagerTrack
	int32_t ___MmSoundManagerTrack_0;
	// UnityEngine.Vector3 MoreMountains.Tools.MMSoundManagerPlayOptions::Location
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Location_1;
	// System.Boolean MoreMountains.Tools.MMSoundManagerPlayOptions::Loop
	bool ___Loop_2;
	// System.Single MoreMountains.Tools.MMSoundManagerPlayOptions::Volume
	float ___Volume_3;
	// System.Int32 MoreMountains.Tools.MMSoundManagerPlayOptions::ID
	int32_t ___ID_4;
	// System.Boolean MoreMountains.Tools.MMSoundManagerPlayOptions::Fade
	bool ___Fade_5;
	// System.Single MoreMountains.Tools.MMSoundManagerPlayOptions::FadeInitialVolume
	float ___FadeInitialVolume_6;
	// System.Single MoreMountains.Tools.MMSoundManagerPlayOptions::FadeDuration
	float ___FadeDuration_7;
	// MoreMountains.Tools.MMTweenType MoreMountains.Tools.MMSoundManagerPlayOptions::FadeTween
	MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175 * ___FadeTween_8;
	// System.Boolean MoreMountains.Tools.MMSoundManagerPlayOptions::Persistent
	bool ___Persistent_9;
	// UnityEngine.AudioSource MoreMountains.Tools.MMSoundManagerPlayOptions::RecycleAudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___RecycleAudioSource_10;
	// UnityEngine.Audio.AudioMixerGroup MoreMountains.Tools.MMSoundManagerPlayOptions::AudioGroup
	AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * ___AudioGroup_11;
	// System.Single MoreMountains.Tools.MMSoundManagerPlayOptions::Pitch
	float ___Pitch_12;
	// System.Single MoreMountains.Tools.MMSoundManagerPlayOptions::PlaybackTime
	float ___PlaybackTime_13;
	// System.Single MoreMountains.Tools.MMSoundManagerPlayOptions::PanStereo
	float ___PanStereo_14;
	// System.Single MoreMountains.Tools.MMSoundManagerPlayOptions::SpatialBlend
	float ___SpatialBlend_15;
	// System.Boolean MoreMountains.Tools.MMSoundManagerPlayOptions::SoloSingleTrack
	bool ___SoloSingleTrack_16;
	// System.Boolean MoreMountains.Tools.MMSoundManagerPlayOptions::SoloAllTracks
	bool ___SoloAllTracks_17;
	// System.Boolean MoreMountains.Tools.MMSoundManagerPlayOptions::AutoUnSoloOnEnd
	bool ___AutoUnSoloOnEnd_18;
	// System.Boolean MoreMountains.Tools.MMSoundManagerPlayOptions::BypassEffects
	bool ___BypassEffects_19;
	// System.Boolean MoreMountains.Tools.MMSoundManagerPlayOptions::BypassListenerEffects
	bool ___BypassListenerEffects_20;
	// System.Boolean MoreMountains.Tools.MMSoundManagerPlayOptions::BypassReverbZones
	bool ___BypassReverbZones_21;
	// System.Int32 MoreMountains.Tools.MMSoundManagerPlayOptions::Priority
	int32_t ___Priority_22;
	// System.Single MoreMountains.Tools.MMSoundManagerPlayOptions::ReverbZoneMix
	float ___ReverbZoneMix_23;
	// System.Single MoreMountains.Tools.MMSoundManagerPlayOptions::DopplerLevel
	float ___DopplerLevel_24;
	// System.Int32 MoreMountains.Tools.MMSoundManagerPlayOptions::Spread
	int32_t ___Spread_25;
	// UnityEngine.AudioRolloffMode MoreMountains.Tools.MMSoundManagerPlayOptions::RolloffMode
	int32_t ___RolloffMode_26;
	// System.Single MoreMountains.Tools.MMSoundManagerPlayOptions::MinDistance
	float ___MinDistance_27;
	// System.Single MoreMountains.Tools.MMSoundManagerPlayOptions::MaxDistance
	float ___MaxDistance_28;
	// System.Boolean MoreMountains.Tools.MMSoundManagerPlayOptions::DoNotAutoRecycleIfNotDonePlaying
	bool ___DoNotAutoRecycleIfNotDonePlaying_29;

public:
	inline static int32_t get_offset_of_MmSoundManagerTrack_0() { return static_cast<int32_t>(offsetof(MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300, ___MmSoundManagerTrack_0)); }
	inline int32_t get_MmSoundManagerTrack_0() const { return ___MmSoundManagerTrack_0; }
	inline int32_t* get_address_of_MmSoundManagerTrack_0() { return &___MmSoundManagerTrack_0; }
	inline void set_MmSoundManagerTrack_0(int32_t value)
	{
		___MmSoundManagerTrack_0 = value;
	}

	inline static int32_t get_offset_of_Location_1() { return static_cast<int32_t>(offsetof(MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300, ___Location_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Location_1() const { return ___Location_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Location_1() { return &___Location_1; }
	inline void set_Location_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Location_1 = value;
	}

	inline static int32_t get_offset_of_Loop_2() { return static_cast<int32_t>(offsetof(MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300, ___Loop_2)); }
	inline bool get_Loop_2() const { return ___Loop_2; }
	inline bool* get_address_of_Loop_2() { return &___Loop_2; }
	inline void set_Loop_2(bool value)
	{
		___Loop_2 = value;
	}

	inline static int32_t get_offset_of_Volume_3() { return static_cast<int32_t>(offsetof(MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300, ___Volume_3)); }
	inline float get_Volume_3() const { return ___Volume_3; }
	inline float* get_address_of_Volume_3() { return &___Volume_3; }
	inline void set_Volume_3(float value)
	{
		___Volume_3 = value;
	}

	inline static int32_t get_offset_of_ID_4() { return static_cast<int32_t>(offsetof(MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300, ___ID_4)); }
	inline int32_t get_ID_4() const { return ___ID_4; }
	inline int32_t* get_address_of_ID_4() { return &___ID_4; }
	inline void set_ID_4(int32_t value)
	{
		___ID_4 = value;
	}

	inline static int32_t get_offset_of_Fade_5() { return static_cast<int32_t>(offsetof(MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300, ___Fade_5)); }
	inline bool get_Fade_5() const { return ___Fade_5; }
	inline bool* get_address_of_Fade_5() { return &___Fade_5; }
	inline void set_Fade_5(bool value)
	{
		___Fade_5 = value;
	}

	inline static int32_t get_offset_of_FadeInitialVolume_6() { return static_cast<int32_t>(offsetof(MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300, ___FadeInitialVolume_6)); }
	inline float get_FadeInitialVolume_6() const { return ___FadeInitialVolume_6; }
	inline float* get_address_of_FadeInitialVolume_6() { return &___FadeInitialVolume_6; }
	inline void set_FadeInitialVolume_6(float value)
	{
		___FadeInitialVolume_6 = value;
	}

	inline static int32_t get_offset_of_FadeDuration_7() { return static_cast<int32_t>(offsetof(MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300, ___FadeDuration_7)); }
	inline float get_FadeDuration_7() const { return ___FadeDuration_7; }
	inline float* get_address_of_FadeDuration_7() { return &___FadeDuration_7; }
	inline void set_FadeDuration_7(float value)
	{
		___FadeDuration_7 = value;
	}

	inline static int32_t get_offset_of_FadeTween_8() { return static_cast<int32_t>(offsetof(MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300, ___FadeTween_8)); }
	inline MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175 * get_FadeTween_8() const { return ___FadeTween_8; }
	inline MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175 ** get_address_of_FadeTween_8() { return &___FadeTween_8; }
	inline void set_FadeTween_8(MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175 * value)
	{
		___FadeTween_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FadeTween_8), (void*)value);
	}

	inline static int32_t get_offset_of_Persistent_9() { return static_cast<int32_t>(offsetof(MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300, ___Persistent_9)); }
	inline bool get_Persistent_9() const { return ___Persistent_9; }
	inline bool* get_address_of_Persistent_9() { return &___Persistent_9; }
	inline void set_Persistent_9(bool value)
	{
		___Persistent_9 = value;
	}

	inline static int32_t get_offset_of_RecycleAudioSource_10() { return static_cast<int32_t>(offsetof(MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300, ___RecycleAudioSource_10)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_RecycleAudioSource_10() const { return ___RecycleAudioSource_10; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_RecycleAudioSource_10() { return &___RecycleAudioSource_10; }
	inline void set_RecycleAudioSource_10(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___RecycleAudioSource_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecycleAudioSource_10), (void*)value);
	}

	inline static int32_t get_offset_of_AudioGroup_11() { return static_cast<int32_t>(offsetof(MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300, ___AudioGroup_11)); }
	inline AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * get_AudioGroup_11() const { return ___AudioGroup_11; }
	inline AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F ** get_address_of_AudioGroup_11() { return &___AudioGroup_11; }
	inline void set_AudioGroup_11(AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * value)
	{
		___AudioGroup_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AudioGroup_11), (void*)value);
	}

	inline static int32_t get_offset_of_Pitch_12() { return static_cast<int32_t>(offsetof(MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300, ___Pitch_12)); }
	inline float get_Pitch_12() const { return ___Pitch_12; }
	inline float* get_address_of_Pitch_12() { return &___Pitch_12; }
	inline void set_Pitch_12(float value)
	{
		___Pitch_12 = value;
	}

	inline static int32_t get_offset_of_PlaybackTime_13() { return static_cast<int32_t>(offsetof(MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300, ___PlaybackTime_13)); }
	inline float get_PlaybackTime_13() const { return ___PlaybackTime_13; }
	inline float* get_address_of_PlaybackTime_13() { return &___PlaybackTime_13; }
	inline void set_PlaybackTime_13(float value)
	{
		___PlaybackTime_13 = value;
	}

	inline static int32_t get_offset_of_PanStereo_14() { return static_cast<int32_t>(offsetof(MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300, ___PanStereo_14)); }
	inline float get_PanStereo_14() const { return ___PanStereo_14; }
	inline float* get_address_of_PanStereo_14() { return &___PanStereo_14; }
	inline void set_PanStereo_14(float value)
	{
		___PanStereo_14 = value;
	}

	inline static int32_t get_offset_of_SpatialBlend_15() { return static_cast<int32_t>(offsetof(MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300, ___SpatialBlend_15)); }
	inline float get_SpatialBlend_15() const { return ___SpatialBlend_15; }
	inline float* get_address_of_SpatialBlend_15() { return &___SpatialBlend_15; }
	inline void set_SpatialBlend_15(float value)
	{
		___SpatialBlend_15 = value;
	}

	inline static int32_t get_offset_of_SoloSingleTrack_16() { return static_cast<int32_t>(offsetof(MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300, ___SoloSingleTrack_16)); }
	inline bool get_SoloSingleTrack_16() const { return ___SoloSingleTrack_16; }
	inline bool* get_address_of_SoloSingleTrack_16() { return &___SoloSingleTrack_16; }
	inline void set_SoloSingleTrack_16(bool value)
	{
		___SoloSingleTrack_16 = value;
	}

	inline static int32_t get_offset_of_SoloAllTracks_17() { return static_cast<int32_t>(offsetof(MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300, ___SoloAllTracks_17)); }
	inline bool get_SoloAllTracks_17() const { return ___SoloAllTracks_17; }
	inline bool* get_address_of_SoloAllTracks_17() { return &___SoloAllTracks_17; }
	inline void set_SoloAllTracks_17(bool value)
	{
		___SoloAllTracks_17 = value;
	}

	inline static int32_t get_offset_of_AutoUnSoloOnEnd_18() { return static_cast<int32_t>(offsetof(MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300, ___AutoUnSoloOnEnd_18)); }
	inline bool get_AutoUnSoloOnEnd_18() const { return ___AutoUnSoloOnEnd_18; }
	inline bool* get_address_of_AutoUnSoloOnEnd_18() { return &___AutoUnSoloOnEnd_18; }
	inline void set_AutoUnSoloOnEnd_18(bool value)
	{
		___AutoUnSoloOnEnd_18 = value;
	}

	inline static int32_t get_offset_of_BypassEffects_19() { return static_cast<int32_t>(offsetof(MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300, ___BypassEffects_19)); }
	inline bool get_BypassEffects_19() const { return ___BypassEffects_19; }
	inline bool* get_address_of_BypassEffects_19() { return &___BypassEffects_19; }
	inline void set_BypassEffects_19(bool value)
	{
		___BypassEffects_19 = value;
	}

	inline static int32_t get_offset_of_BypassListenerEffects_20() { return static_cast<int32_t>(offsetof(MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300, ___BypassListenerEffects_20)); }
	inline bool get_BypassListenerEffects_20() const { return ___BypassListenerEffects_20; }
	inline bool* get_address_of_BypassListenerEffects_20() { return &___BypassListenerEffects_20; }
	inline void set_BypassListenerEffects_20(bool value)
	{
		___BypassListenerEffects_20 = value;
	}

	inline static int32_t get_offset_of_BypassReverbZones_21() { return static_cast<int32_t>(offsetof(MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300, ___BypassReverbZones_21)); }
	inline bool get_BypassReverbZones_21() const { return ___BypassReverbZones_21; }
	inline bool* get_address_of_BypassReverbZones_21() { return &___BypassReverbZones_21; }
	inline void set_BypassReverbZones_21(bool value)
	{
		___BypassReverbZones_21 = value;
	}

	inline static int32_t get_offset_of_Priority_22() { return static_cast<int32_t>(offsetof(MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300, ___Priority_22)); }
	inline int32_t get_Priority_22() const { return ___Priority_22; }
	inline int32_t* get_address_of_Priority_22() { return &___Priority_22; }
	inline void set_Priority_22(int32_t value)
	{
		___Priority_22 = value;
	}

	inline static int32_t get_offset_of_ReverbZoneMix_23() { return static_cast<int32_t>(offsetof(MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300, ___ReverbZoneMix_23)); }
	inline float get_ReverbZoneMix_23() const { return ___ReverbZoneMix_23; }
	inline float* get_address_of_ReverbZoneMix_23() { return &___ReverbZoneMix_23; }
	inline void set_ReverbZoneMix_23(float value)
	{
		___ReverbZoneMix_23 = value;
	}

	inline static int32_t get_offset_of_DopplerLevel_24() { return static_cast<int32_t>(offsetof(MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300, ___DopplerLevel_24)); }
	inline float get_DopplerLevel_24() const { return ___DopplerLevel_24; }
	inline float* get_address_of_DopplerLevel_24() { return &___DopplerLevel_24; }
	inline void set_DopplerLevel_24(float value)
	{
		___DopplerLevel_24 = value;
	}

	inline static int32_t get_offset_of_Spread_25() { return static_cast<int32_t>(offsetof(MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300, ___Spread_25)); }
	inline int32_t get_Spread_25() const { return ___Spread_25; }
	inline int32_t* get_address_of_Spread_25() { return &___Spread_25; }
	inline void set_Spread_25(int32_t value)
	{
		___Spread_25 = value;
	}

	inline static int32_t get_offset_of_RolloffMode_26() { return static_cast<int32_t>(offsetof(MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300, ___RolloffMode_26)); }
	inline int32_t get_RolloffMode_26() const { return ___RolloffMode_26; }
	inline int32_t* get_address_of_RolloffMode_26() { return &___RolloffMode_26; }
	inline void set_RolloffMode_26(int32_t value)
	{
		___RolloffMode_26 = value;
	}

	inline static int32_t get_offset_of_MinDistance_27() { return static_cast<int32_t>(offsetof(MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300, ___MinDistance_27)); }
	inline float get_MinDistance_27() const { return ___MinDistance_27; }
	inline float* get_address_of_MinDistance_27() { return &___MinDistance_27; }
	inline void set_MinDistance_27(float value)
	{
		___MinDistance_27 = value;
	}

	inline static int32_t get_offset_of_MaxDistance_28() { return static_cast<int32_t>(offsetof(MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300, ___MaxDistance_28)); }
	inline float get_MaxDistance_28() const { return ___MaxDistance_28; }
	inline float* get_address_of_MaxDistance_28() { return &___MaxDistance_28; }
	inline void set_MaxDistance_28(float value)
	{
		___MaxDistance_28 = value;
	}

	inline static int32_t get_offset_of_DoNotAutoRecycleIfNotDonePlaying_29() { return static_cast<int32_t>(offsetof(MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300, ___DoNotAutoRecycleIfNotDonePlaying_29)); }
	inline bool get_DoNotAutoRecycleIfNotDonePlaying_29() const { return ___DoNotAutoRecycleIfNotDonePlaying_29; }
	inline bool* get_address_of_DoNotAutoRecycleIfNotDonePlaying_29() { return &___DoNotAutoRecycleIfNotDonePlaying_29; }
	inline void set_DoNotAutoRecycleIfNotDonePlaying_29(bool value)
	{
		___DoNotAutoRecycleIfNotDonePlaying_29 = value;
	}
};

// Native definition for P/Invoke marshalling of MoreMountains.Tools.MMSoundManagerPlayOptions
struct MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300_marshaled_pinvoke
{
	int32_t ___MmSoundManagerTrack_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Location_1;
	int32_t ___Loop_2;
	float ___Volume_3;
	int32_t ___ID_4;
	int32_t ___Fade_5;
	float ___FadeInitialVolume_6;
	float ___FadeDuration_7;
	MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175 * ___FadeTween_8;
	int32_t ___Persistent_9;
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___RecycleAudioSource_10;
	AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * ___AudioGroup_11;
	float ___Pitch_12;
	float ___PlaybackTime_13;
	float ___PanStereo_14;
	float ___SpatialBlend_15;
	int32_t ___SoloSingleTrack_16;
	int32_t ___SoloAllTracks_17;
	int32_t ___AutoUnSoloOnEnd_18;
	int32_t ___BypassEffects_19;
	int32_t ___BypassListenerEffects_20;
	int32_t ___BypassReverbZones_21;
	int32_t ___Priority_22;
	float ___ReverbZoneMix_23;
	float ___DopplerLevel_24;
	int32_t ___Spread_25;
	int32_t ___RolloffMode_26;
	float ___MinDistance_27;
	float ___MaxDistance_28;
	int32_t ___DoNotAutoRecycleIfNotDonePlaying_29;
};
// Native definition for COM marshalling of MoreMountains.Tools.MMSoundManagerPlayOptions
struct MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300_marshaled_com
{
	int32_t ___MmSoundManagerTrack_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Location_1;
	int32_t ___Loop_2;
	float ___Volume_3;
	int32_t ___ID_4;
	int32_t ___Fade_5;
	float ___FadeInitialVolume_6;
	float ___FadeDuration_7;
	MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175 * ___FadeTween_8;
	int32_t ___Persistent_9;
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___RecycleAudioSource_10;
	AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * ___AudioGroup_11;
	float ___Pitch_12;
	float ___PlaybackTime_13;
	float ___PanStereo_14;
	float ___SpatialBlend_15;
	int32_t ___SoloSingleTrack_16;
	int32_t ___SoloAllTracks_17;
	int32_t ___AutoUnSoloOnEnd_18;
	int32_t ___BypassEffects_19;
	int32_t ___BypassListenerEffects_20;
	int32_t ___BypassReverbZones_21;
	int32_t ___Priority_22;
	float ___ReverbZoneMix_23;
	float ___DopplerLevel_24;
	int32_t ___Spread_25;
	int32_t ___RolloffMode_26;
	float ___MinDistance_27;
	float ___MaxDistance_28;
	int32_t ___DoNotAutoRecycleIfNotDonePlaying_29;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// MoreMountains.Feedbacks.MMF_Sound/<TestPlaySound>d__29
struct U3CTestPlaySoundU3Ed__29_tA9A34B5BCD921BAD6224EADD12A268E3A962D52B 
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMF_Sound/<TestPlaySound>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder MoreMountains.Feedbacks.MMF_Sound/<TestPlaySound>d__29::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// MoreMountains.Feedbacks.MMF_Sound MoreMountains.Feedbacks.MMF_Sound/<TestPlaySound>d__29::<>4__this
	MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402 * ___U3CU3E4__this_2;
	// UnityEngine.GameObject MoreMountains.Feedbacks.MMF_Sound/<TestPlaySound>d__29::<temporaryAudioHost>5__2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CtemporaryAudioHostU3E5__2_3;
	// System.Runtime.CompilerServices.TaskAwaiter MoreMountains.Feedbacks.MMF_Sound/<TestPlaySound>d__29::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTestPlaySoundU3Ed__29_tA9A34B5BCD921BAD6224EADD12A268E3A962D52B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CTestPlaySoundU3Ed__29_tA9A34B5BCD921BAD6224EADD12A268E3A962D52B, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTestPlaySoundU3Ed__29_tA9A34B5BCD921BAD6224EADD12A268E3A962D52B, ___U3CU3E4__this_2)); }
	inline MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtemporaryAudioHostU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CTestPlaySoundU3Ed__29_tA9A34B5BCD921BAD6224EADD12A268E3A962D52B, ___U3CtemporaryAudioHostU3E5__2_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CtemporaryAudioHostU3E5__2_3() const { return ___U3CtemporaryAudioHostU3E5__2_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CtemporaryAudioHostU3E5__2_3() { return &___U3CtemporaryAudioHostU3E5__2_3; }
	inline void set_U3CtemporaryAudioHostU3E5__2_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CtemporaryAudioHostU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtemporaryAudioHostU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CTestPlaySoundU3Ed__29_tA9A34B5BCD921BAD6224EADD12A268E3A962D52B, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound/<TestPlaySound>d__47
struct U3CTestPlaySoundU3Ed__47_t34D4D55F28F0D099E86F571722BA46997FBC0E95 
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound/<TestPlaySound>d__47::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound/<TestPlaySound>d__47::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound/<TestPlaySound>d__47::<>4__this
	MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB * ___U3CU3E4__this_2;
	// UnityEngine.GameObject MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound/<TestPlaySound>d__47::<temporaryAudioHost>5__2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CtemporaryAudioHostU3E5__2_3;
	// System.Runtime.CompilerServices.TaskAwaiter MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound/<TestPlaySound>d__47::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTestPlaySoundU3Ed__47_t34D4D55F28F0D099E86F571722BA46997FBC0E95, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CTestPlaySoundU3Ed__47_t34D4D55F28F0D099E86F571722BA46997FBC0E95, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTestPlaySoundU3Ed__47_t34D4D55F28F0D099E86F571722BA46997FBC0E95, ___U3CU3E4__this_2)); }
	inline MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtemporaryAudioHostU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CTestPlaySoundU3Ed__47_t34D4D55F28F0D099E86F571722BA46997FBC0E95, ___U3CtemporaryAudioHostU3E5__2_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CtemporaryAudioHostU3E5__2_3() const { return ___U3CtemporaryAudioHostU3E5__2_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CtemporaryAudioHostU3E5__2_3() { return &___U3CtemporaryAudioHostU3E5__2_3; }
	inline void set_U3CtemporaryAudioHostU3E5__2_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CtemporaryAudioHostU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtemporaryAudioHostU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CTestPlaySoundU3Ed__47_t34D4D55F28F0D099E86F571722BA46997FBC0E95, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// MoreMountains.Feedbacks.MMFeedbackSound/<TestPlaySound>d__28
struct U3CTestPlaySoundU3Ed__28_t9DDF20BAA74EEFB92905046D489853DF097A7A8C 
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMFeedbackSound/<TestPlaySound>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder MoreMountains.Feedbacks.MMFeedbackSound/<TestPlaySound>d__28::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// MoreMountains.Feedbacks.MMFeedbackSound MoreMountains.Feedbacks.MMFeedbackSound/<TestPlaySound>d__28::<>4__this
	MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8 * ___U3CU3E4__this_2;
	// UnityEngine.GameObject MoreMountains.Feedbacks.MMFeedbackSound/<TestPlaySound>d__28::<temporaryAudioHost>5__2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CtemporaryAudioHostU3E5__2_3;
	// System.Runtime.CompilerServices.TaskAwaiter MoreMountains.Feedbacks.MMFeedbackSound/<TestPlaySound>d__28::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTestPlaySoundU3Ed__28_t9DDF20BAA74EEFB92905046D489853DF097A7A8C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CTestPlaySoundU3Ed__28_t9DDF20BAA74EEFB92905046D489853DF097A7A8C, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTestPlaySoundU3Ed__28_t9DDF20BAA74EEFB92905046D489853DF097A7A8C, ___U3CU3E4__this_2)); }
	inline MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtemporaryAudioHostU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CTestPlaySoundU3Ed__28_t9DDF20BAA74EEFB92905046D489853DF097A7A8C, ___U3CtemporaryAudioHostU3E5__2_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CtemporaryAudioHostU3E5__2_3() const { return ___U3CtemporaryAudioHostU3E5__2_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CtemporaryAudioHostU3E5__2_3() { return &___U3CtemporaryAudioHostU3E5__2_3; }
	inline void set_U3CtemporaryAudioHostU3E5__2_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CtemporaryAudioHostU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtemporaryAudioHostU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CTestPlaySoundU3Ed__28_t9DDF20BAA74EEFB92905046D489853DF097A7A8C, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
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


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
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


// MoreMountains.Feedbacks.MMFeedbackBase
struct MMFeedbackBase_tBFE40896312C5014CBD6AA33309C76A7292B34E3  : public MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4
{
public:
	// MoreMountains.Feedbacks.MMFeedbackBase/Modes MoreMountains.Feedbacks.MMFeedbackBase::Mode
	int32_t ___Mode_28;
	// System.Single MoreMountains.Feedbacks.MMFeedbackBase::Duration
	float ___Duration_29;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackBase::StartsOff
	bool ___StartsOff_30;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackBase::RelativeValues
	bool ___RelativeValues_31;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackBase::AllowAdditivePlays
	bool ___AllowAdditivePlays_32;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackBase::DisableOnStop
	bool ___DisableOnStop_33;
	// System.Collections.Generic.List`1<MoreMountains.Feedbacks.MMFeedbackBaseTarget> MoreMountains.Feedbacks.MMFeedbackBase::_targets
	List_1_t7F905B771D6DB41F0D7B6A88AA1D17F87C21CCFB * ____targets_34;
	// UnityEngine.Coroutine MoreMountains.Feedbacks.MMFeedbackBase::_coroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____coroutine_35;

public:
	inline static int32_t get_offset_of_Mode_28() { return static_cast<int32_t>(offsetof(MMFeedbackBase_tBFE40896312C5014CBD6AA33309C76A7292B34E3, ___Mode_28)); }
	inline int32_t get_Mode_28() const { return ___Mode_28; }
	inline int32_t* get_address_of_Mode_28() { return &___Mode_28; }
	inline void set_Mode_28(int32_t value)
	{
		___Mode_28 = value;
	}

	inline static int32_t get_offset_of_Duration_29() { return static_cast<int32_t>(offsetof(MMFeedbackBase_tBFE40896312C5014CBD6AA33309C76A7292B34E3, ___Duration_29)); }
	inline float get_Duration_29() const { return ___Duration_29; }
	inline float* get_address_of_Duration_29() { return &___Duration_29; }
	inline void set_Duration_29(float value)
	{
		___Duration_29 = value;
	}

	inline static int32_t get_offset_of_StartsOff_30() { return static_cast<int32_t>(offsetof(MMFeedbackBase_tBFE40896312C5014CBD6AA33309C76A7292B34E3, ___StartsOff_30)); }
	inline bool get_StartsOff_30() const { return ___StartsOff_30; }
	inline bool* get_address_of_StartsOff_30() { return &___StartsOff_30; }
	inline void set_StartsOff_30(bool value)
	{
		___StartsOff_30 = value;
	}

	inline static int32_t get_offset_of_RelativeValues_31() { return static_cast<int32_t>(offsetof(MMFeedbackBase_tBFE40896312C5014CBD6AA33309C76A7292B34E3, ___RelativeValues_31)); }
	inline bool get_RelativeValues_31() const { return ___RelativeValues_31; }
	inline bool* get_address_of_RelativeValues_31() { return &___RelativeValues_31; }
	inline void set_RelativeValues_31(bool value)
	{
		___RelativeValues_31 = value;
	}

	inline static int32_t get_offset_of_AllowAdditivePlays_32() { return static_cast<int32_t>(offsetof(MMFeedbackBase_tBFE40896312C5014CBD6AA33309C76A7292B34E3, ___AllowAdditivePlays_32)); }
	inline bool get_AllowAdditivePlays_32() const { return ___AllowAdditivePlays_32; }
	inline bool* get_address_of_AllowAdditivePlays_32() { return &___AllowAdditivePlays_32; }
	inline void set_AllowAdditivePlays_32(bool value)
	{
		___AllowAdditivePlays_32 = value;
	}

	inline static int32_t get_offset_of_DisableOnStop_33() { return static_cast<int32_t>(offsetof(MMFeedbackBase_tBFE40896312C5014CBD6AA33309C76A7292B34E3, ___DisableOnStop_33)); }
	inline bool get_DisableOnStop_33() const { return ___DisableOnStop_33; }
	inline bool* get_address_of_DisableOnStop_33() { return &___DisableOnStop_33; }
	inline void set_DisableOnStop_33(bool value)
	{
		___DisableOnStop_33 = value;
	}

	inline static int32_t get_offset_of__targets_34() { return static_cast<int32_t>(offsetof(MMFeedbackBase_tBFE40896312C5014CBD6AA33309C76A7292B34E3, ____targets_34)); }
	inline List_1_t7F905B771D6DB41F0D7B6A88AA1D17F87C21CCFB * get__targets_34() const { return ____targets_34; }
	inline List_1_t7F905B771D6DB41F0D7B6A88AA1D17F87C21CCFB ** get_address_of__targets_34() { return &____targets_34; }
	inline void set__targets_34(List_1_t7F905B771D6DB41F0D7B6A88AA1D17F87C21CCFB * value)
	{
		____targets_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____targets_34), (void*)value);
	}

	inline static int32_t get_offset_of__coroutine_35() { return static_cast<int32_t>(offsetof(MMFeedbackBase_tBFE40896312C5014CBD6AA33309C76A7292B34E3, ____coroutine_35)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__coroutine_35() const { return ____coroutine_35; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__coroutine_35() { return &____coroutine_35; }
	inline void set__coroutine_35(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____coroutine_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____coroutine_35), (void*)value);
	}
};


// MoreMountains.Feedbacks.MMFeedbackFog
struct MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2  : public MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4
{
public:
	// MoreMountains.Feedbacks.MMFeedbackFog/Modes MoreMountains.Feedbacks.MMFeedbackFog::Mode
	int32_t ___Mode_29;
	// System.Single MoreMountains.Feedbacks.MMFeedbackFog::Duration
	float ___Duration_30;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackFog::AllowAdditivePlays
	bool ___AllowAdditivePlays_31;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackFog::ModifyFogDensity
	bool ___ModifyFogDensity_32;
	// MoreMountains.Tools.MMTweenType MoreMountains.Feedbacks.MMFeedbackFog::DensityCurve
	MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175 * ___DensityCurve_33;
	// System.Single MoreMountains.Feedbacks.MMFeedbackFog::DensityRemapZero
	float ___DensityRemapZero_34;
	// System.Single MoreMountains.Feedbacks.MMFeedbackFog::DensityRemapOne
	float ___DensityRemapOne_35;
	// System.Single MoreMountains.Feedbacks.MMFeedbackFog::DensityInstantChange
	float ___DensityInstantChange_36;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackFog::ModifyStartDistance
	bool ___ModifyStartDistance_37;
	// MoreMountains.Tools.MMTweenType MoreMountains.Feedbacks.MMFeedbackFog::StartDistanceCurve
	MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175 * ___StartDistanceCurve_38;
	// System.Single MoreMountains.Feedbacks.MMFeedbackFog::StartDistanceRemapZero
	float ___StartDistanceRemapZero_39;
	// System.Single MoreMountains.Feedbacks.MMFeedbackFog::StartDistanceRemapOne
	float ___StartDistanceRemapOne_40;
	// System.Single MoreMountains.Feedbacks.MMFeedbackFog::StartDistanceInstantChange
	float ___StartDistanceInstantChange_41;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackFog::ModifyEndDistance
	bool ___ModifyEndDistance_42;
	// MoreMountains.Tools.MMTweenType MoreMountains.Feedbacks.MMFeedbackFog::EndDistanceCurve
	MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175 * ___EndDistanceCurve_43;
	// System.Single MoreMountains.Feedbacks.MMFeedbackFog::EndDistanceRemapZero
	float ___EndDistanceRemapZero_44;
	// System.Single MoreMountains.Feedbacks.MMFeedbackFog::EndDistanceRemapOne
	float ___EndDistanceRemapOne_45;
	// System.Single MoreMountains.Feedbacks.MMFeedbackFog::EndDistanceInstantChange
	float ___EndDistanceInstantChange_46;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackFog::ModifyColor
	bool ___ModifyColor_47;
	// UnityEngine.Gradient MoreMountains.Feedbacks.MMFeedbackFog::ColorOverTime
	Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * ___ColorOverTime_48;
	// UnityEngine.Color MoreMountains.Feedbacks.MMFeedbackFog::InstantColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___InstantColor_49;
	// UnityEngine.Coroutine MoreMountains.Feedbacks.MMFeedbackFog::_coroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____coroutine_50;

public:
	inline static int32_t get_offset_of_Mode_29() { return static_cast<int32_t>(offsetof(MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2, ___Mode_29)); }
	inline int32_t get_Mode_29() const { return ___Mode_29; }
	inline int32_t* get_address_of_Mode_29() { return &___Mode_29; }
	inline void set_Mode_29(int32_t value)
	{
		___Mode_29 = value;
	}

	inline static int32_t get_offset_of_Duration_30() { return static_cast<int32_t>(offsetof(MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2, ___Duration_30)); }
	inline float get_Duration_30() const { return ___Duration_30; }
	inline float* get_address_of_Duration_30() { return &___Duration_30; }
	inline void set_Duration_30(float value)
	{
		___Duration_30 = value;
	}

	inline static int32_t get_offset_of_AllowAdditivePlays_31() { return static_cast<int32_t>(offsetof(MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2, ___AllowAdditivePlays_31)); }
	inline bool get_AllowAdditivePlays_31() const { return ___AllowAdditivePlays_31; }
	inline bool* get_address_of_AllowAdditivePlays_31() { return &___AllowAdditivePlays_31; }
	inline void set_AllowAdditivePlays_31(bool value)
	{
		___AllowAdditivePlays_31 = value;
	}

	inline static int32_t get_offset_of_ModifyFogDensity_32() { return static_cast<int32_t>(offsetof(MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2, ___ModifyFogDensity_32)); }
	inline bool get_ModifyFogDensity_32() const { return ___ModifyFogDensity_32; }
	inline bool* get_address_of_ModifyFogDensity_32() { return &___ModifyFogDensity_32; }
	inline void set_ModifyFogDensity_32(bool value)
	{
		___ModifyFogDensity_32 = value;
	}

	inline static int32_t get_offset_of_DensityCurve_33() { return static_cast<int32_t>(offsetof(MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2, ___DensityCurve_33)); }
	inline MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175 * get_DensityCurve_33() const { return ___DensityCurve_33; }
	inline MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175 ** get_address_of_DensityCurve_33() { return &___DensityCurve_33; }
	inline void set_DensityCurve_33(MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175 * value)
	{
		___DensityCurve_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DensityCurve_33), (void*)value);
	}

	inline static int32_t get_offset_of_DensityRemapZero_34() { return static_cast<int32_t>(offsetof(MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2, ___DensityRemapZero_34)); }
	inline float get_DensityRemapZero_34() const { return ___DensityRemapZero_34; }
	inline float* get_address_of_DensityRemapZero_34() { return &___DensityRemapZero_34; }
	inline void set_DensityRemapZero_34(float value)
	{
		___DensityRemapZero_34 = value;
	}

	inline static int32_t get_offset_of_DensityRemapOne_35() { return static_cast<int32_t>(offsetof(MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2, ___DensityRemapOne_35)); }
	inline float get_DensityRemapOne_35() const { return ___DensityRemapOne_35; }
	inline float* get_address_of_DensityRemapOne_35() { return &___DensityRemapOne_35; }
	inline void set_DensityRemapOne_35(float value)
	{
		___DensityRemapOne_35 = value;
	}

	inline static int32_t get_offset_of_DensityInstantChange_36() { return static_cast<int32_t>(offsetof(MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2, ___DensityInstantChange_36)); }
	inline float get_DensityInstantChange_36() const { return ___DensityInstantChange_36; }
	inline float* get_address_of_DensityInstantChange_36() { return &___DensityInstantChange_36; }
	inline void set_DensityInstantChange_36(float value)
	{
		___DensityInstantChange_36 = value;
	}

	inline static int32_t get_offset_of_ModifyStartDistance_37() { return static_cast<int32_t>(offsetof(MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2, ___ModifyStartDistance_37)); }
	inline bool get_ModifyStartDistance_37() const { return ___ModifyStartDistance_37; }
	inline bool* get_address_of_ModifyStartDistance_37() { return &___ModifyStartDistance_37; }
	inline void set_ModifyStartDistance_37(bool value)
	{
		___ModifyStartDistance_37 = value;
	}

	inline static int32_t get_offset_of_StartDistanceCurve_38() { return static_cast<int32_t>(offsetof(MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2, ___StartDistanceCurve_38)); }
	inline MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175 * get_StartDistanceCurve_38() const { return ___StartDistanceCurve_38; }
	inline MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175 ** get_address_of_StartDistanceCurve_38() { return &___StartDistanceCurve_38; }
	inline void set_StartDistanceCurve_38(MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175 * value)
	{
		___StartDistanceCurve_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StartDistanceCurve_38), (void*)value);
	}

	inline static int32_t get_offset_of_StartDistanceRemapZero_39() { return static_cast<int32_t>(offsetof(MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2, ___StartDistanceRemapZero_39)); }
	inline float get_StartDistanceRemapZero_39() const { return ___StartDistanceRemapZero_39; }
	inline float* get_address_of_StartDistanceRemapZero_39() { return &___StartDistanceRemapZero_39; }
	inline void set_StartDistanceRemapZero_39(float value)
	{
		___StartDistanceRemapZero_39 = value;
	}

	inline static int32_t get_offset_of_StartDistanceRemapOne_40() { return static_cast<int32_t>(offsetof(MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2, ___StartDistanceRemapOne_40)); }
	inline float get_StartDistanceRemapOne_40() const { return ___StartDistanceRemapOne_40; }
	inline float* get_address_of_StartDistanceRemapOne_40() { return &___StartDistanceRemapOne_40; }
	inline void set_StartDistanceRemapOne_40(float value)
	{
		___StartDistanceRemapOne_40 = value;
	}

	inline static int32_t get_offset_of_StartDistanceInstantChange_41() { return static_cast<int32_t>(offsetof(MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2, ___StartDistanceInstantChange_41)); }
	inline float get_StartDistanceInstantChange_41() const { return ___StartDistanceInstantChange_41; }
	inline float* get_address_of_StartDistanceInstantChange_41() { return &___StartDistanceInstantChange_41; }
	inline void set_StartDistanceInstantChange_41(float value)
	{
		___StartDistanceInstantChange_41 = value;
	}

	inline static int32_t get_offset_of_ModifyEndDistance_42() { return static_cast<int32_t>(offsetof(MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2, ___ModifyEndDistance_42)); }
	inline bool get_ModifyEndDistance_42() const { return ___ModifyEndDistance_42; }
	inline bool* get_address_of_ModifyEndDistance_42() { return &___ModifyEndDistance_42; }
	inline void set_ModifyEndDistance_42(bool value)
	{
		___ModifyEndDistance_42 = value;
	}

	inline static int32_t get_offset_of_EndDistanceCurve_43() { return static_cast<int32_t>(offsetof(MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2, ___EndDistanceCurve_43)); }
	inline MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175 * get_EndDistanceCurve_43() const { return ___EndDistanceCurve_43; }
	inline MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175 ** get_address_of_EndDistanceCurve_43() { return &___EndDistanceCurve_43; }
	inline void set_EndDistanceCurve_43(MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175 * value)
	{
		___EndDistanceCurve_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EndDistanceCurve_43), (void*)value);
	}

	inline static int32_t get_offset_of_EndDistanceRemapZero_44() { return static_cast<int32_t>(offsetof(MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2, ___EndDistanceRemapZero_44)); }
	inline float get_EndDistanceRemapZero_44() const { return ___EndDistanceRemapZero_44; }
	inline float* get_address_of_EndDistanceRemapZero_44() { return &___EndDistanceRemapZero_44; }
	inline void set_EndDistanceRemapZero_44(float value)
	{
		___EndDistanceRemapZero_44 = value;
	}

	inline static int32_t get_offset_of_EndDistanceRemapOne_45() { return static_cast<int32_t>(offsetof(MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2, ___EndDistanceRemapOne_45)); }
	inline float get_EndDistanceRemapOne_45() const { return ___EndDistanceRemapOne_45; }
	inline float* get_address_of_EndDistanceRemapOne_45() { return &___EndDistanceRemapOne_45; }
	inline void set_EndDistanceRemapOne_45(float value)
	{
		___EndDistanceRemapOne_45 = value;
	}

	inline static int32_t get_offset_of_EndDistanceInstantChange_46() { return static_cast<int32_t>(offsetof(MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2, ___EndDistanceInstantChange_46)); }
	inline float get_EndDistanceInstantChange_46() const { return ___EndDistanceInstantChange_46; }
	inline float* get_address_of_EndDistanceInstantChange_46() { return &___EndDistanceInstantChange_46; }
	inline void set_EndDistanceInstantChange_46(float value)
	{
		___EndDistanceInstantChange_46 = value;
	}

	inline static int32_t get_offset_of_ModifyColor_47() { return static_cast<int32_t>(offsetof(MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2, ___ModifyColor_47)); }
	inline bool get_ModifyColor_47() const { return ___ModifyColor_47; }
	inline bool* get_address_of_ModifyColor_47() { return &___ModifyColor_47; }
	inline void set_ModifyColor_47(bool value)
	{
		___ModifyColor_47 = value;
	}

	inline static int32_t get_offset_of_ColorOverTime_48() { return static_cast<int32_t>(offsetof(MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2, ___ColorOverTime_48)); }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * get_ColorOverTime_48() const { return ___ColorOverTime_48; }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 ** get_address_of_ColorOverTime_48() { return &___ColorOverTime_48; }
	inline void set_ColorOverTime_48(Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * value)
	{
		___ColorOverTime_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ColorOverTime_48), (void*)value);
	}

	inline static int32_t get_offset_of_InstantColor_49() { return static_cast<int32_t>(offsetof(MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2, ___InstantColor_49)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_InstantColor_49() const { return ___InstantColor_49; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_InstantColor_49() { return &___InstantColor_49; }
	inline void set_InstantColor_49(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___InstantColor_49 = value;
	}

	inline static int32_t get_offset_of__coroutine_50() { return static_cast<int32_t>(offsetof(MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2, ____coroutine_50)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__coroutine_50() const { return ____coroutine_50; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__coroutine_50() { return &____coroutine_50; }
	inline void set__coroutine_50(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____coroutine_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____coroutine_50), (void*)value);
	}
};

struct MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2_StaticFields
{
public:
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackFog::FeedbackTypeAuthorized
	bool ___FeedbackTypeAuthorized_28;

public:
	inline static int32_t get_offset_of_FeedbackTypeAuthorized_28() { return static_cast<int32_t>(offsetof(MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2_StaticFields, ___FeedbackTypeAuthorized_28)); }
	inline bool get_FeedbackTypeAuthorized_28() const { return ___FeedbackTypeAuthorized_28; }
	inline bool* get_address_of_FeedbackTypeAuthorized_28() { return &___FeedbackTypeAuthorized_28; }
	inline void set_FeedbackTypeAuthorized_28(bool value)
	{
		___FeedbackTypeAuthorized_28 = value;
	}
};


// MoreMountains.Feedbacks.MMFeedbackImageAlpha
struct MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE  : public MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4
{
public:
	// UnityEngine.UI.Image MoreMountains.Feedbacks.MMFeedbackImageAlpha::BoundImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___BoundImage_29;
	// MoreMountains.Feedbacks.MMFeedbackImageAlpha/Modes MoreMountains.Feedbacks.MMFeedbackImageAlpha::Mode
	int32_t ___Mode_30;
	// System.Single MoreMountains.Feedbacks.MMFeedbackImageAlpha::Duration
	float ___Duration_31;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackImageAlpha::AllowAdditivePlays
	bool ___AllowAdditivePlays_32;
	// System.Single MoreMountains.Feedbacks.MMFeedbackImageAlpha::InstantAlpha
	float ___InstantAlpha_33;
	// MoreMountains.Tools.MMTweenType MoreMountains.Feedbacks.MMFeedbackImageAlpha::Curve
	MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175 * ___Curve_34;
	// System.Single MoreMountains.Feedbacks.MMFeedbackImageAlpha::CurveRemapZero
	float ___CurveRemapZero_35;
	// System.Single MoreMountains.Feedbacks.MMFeedbackImageAlpha::CurveRemapOne
	float ___CurveRemapOne_36;
	// System.Single MoreMountains.Feedbacks.MMFeedbackImageAlpha::DestinationAlpha
	float ___DestinationAlpha_37;
	// UnityEngine.Coroutine MoreMountains.Feedbacks.MMFeedbackImageAlpha::_coroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____coroutine_38;
	// UnityEngine.Color MoreMountains.Feedbacks.MMFeedbackImageAlpha::_imageColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____imageColor_39;
	// System.Single MoreMountains.Feedbacks.MMFeedbackImageAlpha::_initialAlpha
	float ____initialAlpha_40;

public:
	inline static int32_t get_offset_of_BoundImage_29() { return static_cast<int32_t>(offsetof(MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE, ___BoundImage_29)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_BoundImage_29() const { return ___BoundImage_29; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_BoundImage_29() { return &___BoundImage_29; }
	inline void set_BoundImage_29(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___BoundImage_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BoundImage_29), (void*)value);
	}

	inline static int32_t get_offset_of_Mode_30() { return static_cast<int32_t>(offsetof(MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE, ___Mode_30)); }
	inline int32_t get_Mode_30() const { return ___Mode_30; }
	inline int32_t* get_address_of_Mode_30() { return &___Mode_30; }
	inline void set_Mode_30(int32_t value)
	{
		___Mode_30 = value;
	}

	inline static int32_t get_offset_of_Duration_31() { return static_cast<int32_t>(offsetof(MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE, ___Duration_31)); }
	inline float get_Duration_31() const { return ___Duration_31; }
	inline float* get_address_of_Duration_31() { return &___Duration_31; }
	inline void set_Duration_31(float value)
	{
		___Duration_31 = value;
	}

	inline static int32_t get_offset_of_AllowAdditivePlays_32() { return static_cast<int32_t>(offsetof(MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE, ___AllowAdditivePlays_32)); }
	inline bool get_AllowAdditivePlays_32() const { return ___AllowAdditivePlays_32; }
	inline bool* get_address_of_AllowAdditivePlays_32() { return &___AllowAdditivePlays_32; }
	inline void set_AllowAdditivePlays_32(bool value)
	{
		___AllowAdditivePlays_32 = value;
	}

	inline static int32_t get_offset_of_InstantAlpha_33() { return static_cast<int32_t>(offsetof(MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE, ___InstantAlpha_33)); }
	inline float get_InstantAlpha_33() const { return ___InstantAlpha_33; }
	inline float* get_address_of_InstantAlpha_33() { return &___InstantAlpha_33; }
	inline void set_InstantAlpha_33(float value)
	{
		___InstantAlpha_33 = value;
	}

	inline static int32_t get_offset_of_Curve_34() { return static_cast<int32_t>(offsetof(MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE, ___Curve_34)); }
	inline MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175 * get_Curve_34() const { return ___Curve_34; }
	inline MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175 ** get_address_of_Curve_34() { return &___Curve_34; }
	inline void set_Curve_34(MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175 * value)
	{
		___Curve_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Curve_34), (void*)value);
	}

	inline static int32_t get_offset_of_CurveRemapZero_35() { return static_cast<int32_t>(offsetof(MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE, ___CurveRemapZero_35)); }
	inline float get_CurveRemapZero_35() const { return ___CurveRemapZero_35; }
	inline float* get_address_of_CurveRemapZero_35() { return &___CurveRemapZero_35; }
	inline void set_CurveRemapZero_35(float value)
	{
		___CurveRemapZero_35 = value;
	}

	inline static int32_t get_offset_of_CurveRemapOne_36() { return static_cast<int32_t>(offsetof(MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE, ___CurveRemapOne_36)); }
	inline float get_CurveRemapOne_36() const { return ___CurveRemapOne_36; }
	inline float* get_address_of_CurveRemapOne_36() { return &___CurveRemapOne_36; }
	inline void set_CurveRemapOne_36(float value)
	{
		___CurveRemapOne_36 = value;
	}

	inline static int32_t get_offset_of_DestinationAlpha_37() { return static_cast<int32_t>(offsetof(MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE, ___DestinationAlpha_37)); }
	inline float get_DestinationAlpha_37() const { return ___DestinationAlpha_37; }
	inline float* get_address_of_DestinationAlpha_37() { return &___DestinationAlpha_37; }
	inline void set_DestinationAlpha_37(float value)
	{
		___DestinationAlpha_37 = value;
	}

	inline static int32_t get_offset_of__coroutine_38() { return static_cast<int32_t>(offsetof(MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE, ____coroutine_38)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__coroutine_38() const { return ____coroutine_38; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__coroutine_38() { return &____coroutine_38; }
	inline void set__coroutine_38(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____coroutine_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____coroutine_38), (void*)value);
	}

	inline static int32_t get_offset_of__imageColor_39() { return static_cast<int32_t>(offsetof(MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE, ____imageColor_39)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__imageColor_39() const { return ____imageColor_39; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__imageColor_39() { return &____imageColor_39; }
	inline void set__imageColor_39(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____imageColor_39 = value;
	}

	inline static int32_t get_offset_of__initialAlpha_40() { return static_cast<int32_t>(offsetof(MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE, ____initialAlpha_40)); }
	inline float get__initialAlpha_40() const { return ____initialAlpha_40; }
	inline float* get_address_of__initialAlpha_40() { return &____initialAlpha_40; }
	inline void set__initialAlpha_40(float value)
	{
		____initialAlpha_40 = value;
	}
};

struct MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE_StaticFields
{
public:
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackImageAlpha::FeedbackTypeAuthorized
	bool ___FeedbackTypeAuthorized_28;

public:
	inline static int32_t get_offset_of_FeedbackTypeAuthorized_28() { return static_cast<int32_t>(offsetof(MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE_StaticFields, ___FeedbackTypeAuthorized_28)); }
	inline bool get_FeedbackTypeAuthorized_28() const { return ___FeedbackTypeAuthorized_28; }
	inline bool* get_address_of_FeedbackTypeAuthorized_28() { return &___FeedbackTypeAuthorized_28; }
	inline void set_FeedbackTypeAuthorized_28(bool value)
	{
		___FeedbackTypeAuthorized_28 = value;
	}
};


// MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound
struct MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB  : public MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4
{
public:
	// UnityEngine.AudioClip MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::Sfx
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___Sfx_29;
	// UnityEngine.AudioClip[] MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::RandomSfx
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___RandomSfx_30;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::TestButton
	bool ___TestButton_31;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::TestStopButton
	bool ___TestStopButton_32;
	// System.Single MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::MinVolume
	float ___MinVolume_33;
	// System.Single MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::MaxVolume
	float ___MaxVolume_34;
	// System.Single MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::MinPitch
	float ___MinPitch_35;
	// System.Single MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::MaxPitch
	float ___MaxPitch_36;
	// MoreMountains.Tools.MMSoundManager/MMSoundManagerTracks MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::MmSoundManagerTrack
	int32_t ___MmSoundManagerTrack_37;
	// System.Int32 MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::ID
	int32_t ___ID_38;
	// UnityEngine.Audio.AudioMixerGroup MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::AudioGroup
	AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * ___AudioGroup_39;
	// UnityEngine.AudioSource MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::RecycleAudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___RecycleAudioSource_40;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::Loop
	bool ___Loop_41;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::Persistent
	bool ___Persistent_42;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::DoNotPlayIfClipAlreadyPlaying
	bool ___DoNotPlayIfClipAlreadyPlaying_43;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::StopSoundOnFeedbackStop
	bool ___StopSoundOnFeedbackStop_44;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::DoNotAutoRecycleIfNotDonePlaying
	bool ___DoNotAutoRecycleIfNotDonePlaying_45;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::Fade
	bool ___Fade_46;
	// System.Single MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::FadeInitialVolume
	float ___FadeInitialVolume_47;
	// System.Single MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::FadeDuration
	float ___FadeDuration_48;
	// MoreMountains.Tools.MMTweenType MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::FadeTween
	MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175 * ___FadeTween_49;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::SoloSingleTrack
	bool ___SoloSingleTrack_50;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::SoloAllTracks
	bool ___SoloAllTracks_51;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::AutoUnSoloOnEnd
	bool ___AutoUnSoloOnEnd_52;
	// System.Single MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::PanStereo
	float ___PanStereo_53;
	// System.Single MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::SpatialBlend
	float ___SpatialBlend_54;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::BypassEffects
	bool ___BypassEffects_55;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::BypassListenerEffects
	bool ___BypassListenerEffects_56;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::BypassReverbZones
	bool ___BypassReverbZones_57;
	// System.Int32 MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::Priority
	int32_t ___Priority_58;
	// System.Single MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::ReverbZoneMix
	float ___ReverbZoneMix_59;
	// System.Single MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::DopplerLevel
	float ___DopplerLevel_60;
	// System.Int32 MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::Spread
	int32_t ___Spread_61;
	// UnityEngine.AudioRolloffMode MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::RolloffMode
	int32_t ___RolloffMode_62;
	// System.Single MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::MinDistance
	float ___MinDistance_63;
	// System.Single MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::MaxDistance
	float ___MaxDistance_64;
	// UnityEngine.AudioClip MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::_randomClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ____randomClip_65;
	// UnityEngine.AudioSource MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::_editorAudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ____editorAudioSource_66;
	// MoreMountains.Tools.MMSoundManagerPlayOptions MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::_options
	MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300  ____options_67;
	// UnityEngine.AudioSource MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::_playedAudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ____playedAudioSource_68;

public:
	inline static int32_t get_offset_of_Sfx_29() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___Sfx_29)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_Sfx_29() const { return ___Sfx_29; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_Sfx_29() { return &___Sfx_29; }
	inline void set_Sfx_29(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___Sfx_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Sfx_29), (void*)value);
	}

	inline static int32_t get_offset_of_RandomSfx_30() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___RandomSfx_30)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get_RandomSfx_30() const { return ___RandomSfx_30; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of_RandomSfx_30() { return &___RandomSfx_30; }
	inline void set_RandomSfx_30(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
	{
		___RandomSfx_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RandomSfx_30), (void*)value);
	}

	inline static int32_t get_offset_of_TestButton_31() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___TestButton_31)); }
	inline bool get_TestButton_31() const { return ___TestButton_31; }
	inline bool* get_address_of_TestButton_31() { return &___TestButton_31; }
	inline void set_TestButton_31(bool value)
	{
		___TestButton_31 = value;
	}

	inline static int32_t get_offset_of_TestStopButton_32() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___TestStopButton_32)); }
	inline bool get_TestStopButton_32() const { return ___TestStopButton_32; }
	inline bool* get_address_of_TestStopButton_32() { return &___TestStopButton_32; }
	inline void set_TestStopButton_32(bool value)
	{
		___TestStopButton_32 = value;
	}

	inline static int32_t get_offset_of_MinVolume_33() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___MinVolume_33)); }
	inline float get_MinVolume_33() const { return ___MinVolume_33; }
	inline float* get_address_of_MinVolume_33() { return &___MinVolume_33; }
	inline void set_MinVolume_33(float value)
	{
		___MinVolume_33 = value;
	}

	inline static int32_t get_offset_of_MaxVolume_34() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___MaxVolume_34)); }
	inline float get_MaxVolume_34() const { return ___MaxVolume_34; }
	inline float* get_address_of_MaxVolume_34() { return &___MaxVolume_34; }
	inline void set_MaxVolume_34(float value)
	{
		___MaxVolume_34 = value;
	}

	inline static int32_t get_offset_of_MinPitch_35() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___MinPitch_35)); }
	inline float get_MinPitch_35() const { return ___MinPitch_35; }
	inline float* get_address_of_MinPitch_35() { return &___MinPitch_35; }
	inline void set_MinPitch_35(float value)
	{
		___MinPitch_35 = value;
	}

	inline static int32_t get_offset_of_MaxPitch_36() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___MaxPitch_36)); }
	inline float get_MaxPitch_36() const { return ___MaxPitch_36; }
	inline float* get_address_of_MaxPitch_36() { return &___MaxPitch_36; }
	inline void set_MaxPitch_36(float value)
	{
		___MaxPitch_36 = value;
	}

	inline static int32_t get_offset_of_MmSoundManagerTrack_37() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___MmSoundManagerTrack_37)); }
	inline int32_t get_MmSoundManagerTrack_37() const { return ___MmSoundManagerTrack_37; }
	inline int32_t* get_address_of_MmSoundManagerTrack_37() { return &___MmSoundManagerTrack_37; }
	inline void set_MmSoundManagerTrack_37(int32_t value)
	{
		___MmSoundManagerTrack_37 = value;
	}

	inline static int32_t get_offset_of_ID_38() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___ID_38)); }
	inline int32_t get_ID_38() const { return ___ID_38; }
	inline int32_t* get_address_of_ID_38() { return &___ID_38; }
	inline void set_ID_38(int32_t value)
	{
		___ID_38 = value;
	}

	inline static int32_t get_offset_of_AudioGroup_39() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___AudioGroup_39)); }
	inline AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * get_AudioGroup_39() const { return ___AudioGroup_39; }
	inline AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F ** get_address_of_AudioGroup_39() { return &___AudioGroup_39; }
	inline void set_AudioGroup_39(AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * value)
	{
		___AudioGroup_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AudioGroup_39), (void*)value);
	}

	inline static int32_t get_offset_of_RecycleAudioSource_40() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___RecycleAudioSource_40)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_RecycleAudioSource_40() const { return ___RecycleAudioSource_40; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_RecycleAudioSource_40() { return &___RecycleAudioSource_40; }
	inline void set_RecycleAudioSource_40(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___RecycleAudioSource_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecycleAudioSource_40), (void*)value);
	}

	inline static int32_t get_offset_of_Loop_41() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___Loop_41)); }
	inline bool get_Loop_41() const { return ___Loop_41; }
	inline bool* get_address_of_Loop_41() { return &___Loop_41; }
	inline void set_Loop_41(bool value)
	{
		___Loop_41 = value;
	}

	inline static int32_t get_offset_of_Persistent_42() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___Persistent_42)); }
	inline bool get_Persistent_42() const { return ___Persistent_42; }
	inline bool* get_address_of_Persistent_42() { return &___Persistent_42; }
	inline void set_Persistent_42(bool value)
	{
		___Persistent_42 = value;
	}

	inline static int32_t get_offset_of_DoNotPlayIfClipAlreadyPlaying_43() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___DoNotPlayIfClipAlreadyPlaying_43)); }
	inline bool get_DoNotPlayIfClipAlreadyPlaying_43() const { return ___DoNotPlayIfClipAlreadyPlaying_43; }
	inline bool* get_address_of_DoNotPlayIfClipAlreadyPlaying_43() { return &___DoNotPlayIfClipAlreadyPlaying_43; }
	inline void set_DoNotPlayIfClipAlreadyPlaying_43(bool value)
	{
		___DoNotPlayIfClipAlreadyPlaying_43 = value;
	}

	inline static int32_t get_offset_of_StopSoundOnFeedbackStop_44() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___StopSoundOnFeedbackStop_44)); }
	inline bool get_StopSoundOnFeedbackStop_44() const { return ___StopSoundOnFeedbackStop_44; }
	inline bool* get_address_of_StopSoundOnFeedbackStop_44() { return &___StopSoundOnFeedbackStop_44; }
	inline void set_StopSoundOnFeedbackStop_44(bool value)
	{
		___StopSoundOnFeedbackStop_44 = value;
	}

	inline static int32_t get_offset_of_DoNotAutoRecycleIfNotDonePlaying_45() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___DoNotAutoRecycleIfNotDonePlaying_45)); }
	inline bool get_DoNotAutoRecycleIfNotDonePlaying_45() const { return ___DoNotAutoRecycleIfNotDonePlaying_45; }
	inline bool* get_address_of_DoNotAutoRecycleIfNotDonePlaying_45() { return &___DoNotAutoRecycleIfNotDonePlaying_45; }
	inline void set_DoNotAutoRecycleIfNotDonePlaying_45(bool value)
	{
		___DoNotAutoRecycleIfNotDonePlaying_45 = value;
	}

	inline static int32_t get_offset_of_Fade_46() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___Fade_46)); }
	inline bool get_Fade_46() const { return ___Fade_46; }
	inline bool* get_address_of_Fade_46() { return &___Fade_46; }
	inline void set_Fade_46(bool value)
	{
		___Fade_46 = value;
	}

	inline static int32_t get_offset_of_FadeInitialVolume_47() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___FadeInitialVolume_47)); }
	inline float get_FadeInitialVolume_47() const { return ___FadeInitialVolume_47; }
	inline float* get_address_of_FadeInitialVolume_47() { return &___FadeInitialVolume_47; }
	inline void set_FadeInitialVolume_47(float value)
	{
		___FadeInitialVolume_47 = value;
	}

	inline static int32_t get_offset_of_FadeDuration_48() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___FadeDuration_48)); }
	inline float get_FadeDuration_48() const { return ___FadeDuration_48; }
	inline float* get_address_of_FadeDuration_48() { return &___FadeDuration_48; }
	inline void set_FadeDuration_48(float value)
	{
		___FadeDuration_48 = value;
	}

	inline static int32_t get_offset_of_FadeTween_49() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___FadeTween_49)); }
	inline MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175 * get_FadeTween_49() const { return ___FadeTween_49; }
	inline MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175 ** get_address_of_FadeTween_49() { return &___FadeTween_49; }
	inline void set_FadeTween_49(MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175 * value)
	{
		___FadeTween_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FadeTween_49), (void*)value);
	}

	inline static int32_t get_offset_of_SoloSingleTrack_50() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___SoloSingleTrack_50)); }
	inline bool get_SoloSingleTrack_50() const { return ___SoloSingleTrack_50; }
	inline bool* get_address_of_SoloSingleTrack_50() { return &___SoloSingleTrack_50; }
	inline void set_SoloSingleTrack_50(bool value)
	{
		___SoloSingleTrack_50 = value;
	}

	inline static int32_t get_offset_of_SoloAllTracks_51() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___SoloAllTracks_51)); }
	inline bool get_SoloAllTracks_51() const { return ___SoloAllTracks_51; }
	inline bool* get_address_of_SoloAllTracks_51() { return &___SoloAllTracks_51; }
	inline void set_SoloAllTracks_51(bool value)
	{
		___SoloAllTracks_51 = value;
	}

	inline static int32_t get_offset_of_AutoUnSoloOnEnd_52() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___AutoUnSoloOnEnd_52)); }
	inline bool get_AutoUnSoloOnEnd_52() const { return ___AutoUnSoloOnEnd_52; }
	inline bool* get_address_of_AutoUnSoloOnEnd_52() { return &___AutoUnSoloOnEnd_52; }
	inline void set_AutoUnSoloOnEnd_52(bool value)
	{
		___AutoUnSoloOnEnd_52 = value;
	}

	inline static int32_t get_offset_of_PanStereo_53() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___PanStereo_53)); }
	inline float get_PanStereo_53() const { return ___PanStereo_53; }
	inline float* get_address_of_PanStereo_53() { return &___PanStereo_53; }
	inline void set_PanStereo_53(float value)
	{
		___PanStereo_53 = value;
	}

	inline static int32_t get_offset_of_SpatialBlend_54() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___SpatialBlend_54)); }
	inline float get_SpatialBlend_54() const { return ___SpatialBlend_54; }
	inline float* get_address_of_SpatialBlend_54() { return &___SpatialBlend_54; }
	inline void set_SpatialBlend_54(float value)
	{
		___SpatialBlend_54 = value;
	}

	inline static int32_t get_offset_of_BypassEffects_55() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___BypassEffects_55)); }
	inline bool get_BypassEffects_55() const { return ___BypassEffects_55; }
	inline bool* get_address_of_BypassEffects_55() { return &___BypassEffects_55; }
	inline void set_BypassEffects_55(bool value)
	{
		___BypassEffects_55 = value;
	}

	inline static int32_t get_offset_of_BypassListenerEffects_56() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___BypassListenerEffects_56)); }
	inline bool get_BypassListenerEffects_56() const { return ___BypassListenerEffects_56; }
	inline bool* get_address_of_BypassListenerEffects_56() { return &___BypassListenerEffects_56; }
	inline void set_BypassListenerEffects_56(bool value)
	{
		___BypassListenerEffects_56 = value;
	}

	inline static int32_t get_offset_of_BypassReverbZones_57() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___BypassReverbZones_57)); }
	inline bool get_BypassReverbZones_57() const { return ___BypassReverbZones_57; }
	inline bool* get_address_of_BypassReverbZones_57() { return &___BypassReverbZones_57; }
	inline void set_BypassReverbZones_57(bool value)
	{
		___BypassReverbZones_57 = value;
	}

	inline static int32_t get_offset_of_Priority_58() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___Priority_58)); }
	inline int32_t get_Priority_58() const { return ___Priority_58; }
	inline int32_t* get_address_of_Priority_58() { return &___Priority_58; }
	inline void set_Priority_58(int32_t value)
	{
		___Priority_58 = value;
	}

	inline static int32_t get_offset_of_ReverbZoneMix_59() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___ReverbZoneMix_59)); }
	inline float get_ReverbZoneMix_59() const { return ___ReverbZoneMix_59; }
	inline float* get_address_of_ReverbZoneMix_59() { return &___ReverbZoneMix_59; }
	inline void set_ReverbZoneMix_59(float value)
	{
		___ReverbZoneMix_59 = value;
	}

	inline static int32_t get_offset_of_DopplerLevel_60() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___DopplerLevel_60)); }
	inline float get_DopplerLevel_60() const { return ___DopplerLevel_60; }
	inline float* get_address_of_DopplerLevel_60() { return &___DopplerLevel_60; }
	inline void set_DopplerLevel_60(float value)
	{
		___DopplerLevel_60 = value;
	}

	inline static int32_t get_offset_of_Spread_61() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___Spread_61)); }
	inline int32_t get_Spread_61() const { return ___Spread_61; }
	inline int32_t* get_address_of_Spread_61() { return &___Spread_61; }
	inline void set_Spread_61(int32_t value)
	{
		___Spread_61 = value;
	}

	inline static int32_t get_offset_of_RolloffMode_62() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___RolloffMode_62)); }
	inline int32_t get_RolloffMode_62() const { return ___RolloffMode_62; }
	inline int32_t* get_address_of_RolloffMode_62() { return &___RolloffMode_62; }
	inline void set_RolloffMode_62(int32_t value)
	{
		___RolloffMode_62 = value;
	}

	inline static int32_t get_offset_of_MinDistance_63() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___MinDistance_63)); }
	inline float get_MinDistance_63() const { return ___MinDistance_63; }
	inline float* get_address_of_MinDistance_63() { return &___MinDistance_63; }
	inline void set_MinDistance_63(float value)
	{
		___MinDistance_63 = value;
	}

	inline static int32_t get_offset_of_MaxDistance_64() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ___MaxDistance_64)); }
	inline float get_MaxDistance_64() const { return ___MaxDistance_64; }
	inline float* get_address_of_MaxDistance_64() { return &___MaxDistance_64; }
	inline void set_MaxDistance_64(float value)
	{
		___MaxDistance_64 = value;
	}

	inline static int32_t get_offset_of__randomClip_65() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ____randomClip_65)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get__randomClip_65() const { return ____randomClip_65; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of__randomClip_65() { return &____randomClip_65; }
	inline void set__randomClip_65(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		____randomClip_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____randomClip_65), (void*)value);
	}

	inline static int32_t get_offset_of__editorAudioSource_66() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ____editorAudioSource_66)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get__editorAudioSource_66() const { return ____editorAudioSource_66; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of__editorAudioSource_66() { return &____editorAudioSource_66; }
	inline void set__editorAudioSource_66(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		____editorAudioSource_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____editorAudioSource_66), (void*)value);
	}

	inline static int32_t get_offset_of__options_67() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ____options_67)); }
	inline MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300  get__options_67() const { return ____options_67; }
	inline MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300 * get_address_of__options_67() { return &____options_67; }
	inline void set__options_67(MMSoundManagerPlayOptions_t4251F3C0413B37741D0955C3778F4E39E688F300  value)
	{
		____options_67 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____options_67))->___FadeTween_8), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____options_67))->___RecycleAudioSource_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____options_67))->___AudioGroup_11), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__playedAudioSource_68() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB, ____playedAudioSource_68)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get__playedAudioSource_68() const { return ____playedAudioSource_68; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of__playedAudioSource_68() { return &____playedAudioSource_68; }
	inline void set__playedAudioSource_68(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		____playedAudioSource_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____playedAudioSource_68), (void*)value);
	}
};

struct MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB_StaticFields
{
public:
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::FeedbackTypeAuthorized
	bool ___FeedbackTypeAuthorized_28;

public:
	inline static int32_t get_offset_of_FeedbackTypeAuthorized_28() { return static_cast<int32_t>(offsetof(MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB_StaticFields, ___FeedbackTypeAuthorized_28)); }
	inline bool get_FeedbackTypeAuthorized_28() const { return ___FeedbackTypeAuthorized_28; }
	inline bool* get_address_of_FeedbackTypeAuthorized_28() { return &___FeedbackTypeAuthorized_28; }
	inline void set_FeedbackTypeAuthorized_28(bool value)
	{
		___FeedbackTypeAuthorized_28 = value;
	}
};


// MoreMountains.Feedbacks.MMFeedbackProperty
struct MMFeedbackProperty_tD231512F1C1F4D5B36F24A02C90A27E609DEB987  : public MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4
{
public:
	// MoreMountains.Tools.MMPropertyReceiver MoreMountains.Feedbacks.MMFeedbackProperty::Target
	MMPropertyReceiver_tCA9142A4E253A90AD828CFB0428B0E08573899B1 * ___Target_28;
	// MoreMountains.Feedbacks.MMFeedbackProperty/Modes MoreMountains.Feedbacks.MMFeedbackProperty::Mode
	int32_t ___Mode_29;
	// System.Single MoreMountains.Feedbacks.MMFeedbackProperty::Duration
	float ___Duration_30;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackProperty::StartsOff
	bool ___StartsOff_31;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackProperty::RelativeValues
	bool ___RelativeValues_32;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackProperty::AllowAdditivePlays
	bool ___AllowAdditivePlays_33;
	// MoreMountains.Tools.MMTweenType MoreMountains.Feedbacks.MMFeedbackProperty::LevelCurve
	MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175 * ___LevelCurve_34;
	// System.Single MoreMountains.Feedbacks.MMFeedbackProperty::RemapLevelZero
	float ___RemapLevelZero_35;
	// System.Single MoreMountains.Feedbacks.MMFeedbackProperty::RemapLevelOne
	float ___RemapLevelOne_36;
	// System.Single MoreMountains.Feedbacks.MMFeedbackProperty::InstantLevel
	float ___InstantLevel_37;
	// System.Single MoreMountains.Feedbacks.MMFeedbackProperty::_initialIntensity
	float ____initialIntensity_38;
	// UnityEngine.Coroutine MoreMountains.Feedbacks.MMFeedbackProperty::_coroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____coroutine_39;

public:
	inline static int32_t get_offset_of_Target_28() { return static_cast<int32_t>(offsetof(MMFeedbackProperty_tD231512F1C1F4D5B36F24A02C90A27E609DEB987, ___Target_28)); }
	inline MMPropertyReceiver_tCA9142A4E253A90AD828CFB0428B0E08573899B1 * get_Target_28() const { return ___Target_28; }
	inline MMPropertyReceiver_tCA9142A4E253A90AD828CFB0428B0E08573899B1 ** get_address_of_Target_28() { return &___Target_28; }
	inline void set_Target_28(MMPropertyReceiver_tCA9142A4E253A90AD828CFB0428B0E08573899B1 * value)
	{
		___Target_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Target_28), (void*)value);
	}

	inline static int32_t get_offset_of_Mode_29() { return static_cast<int32_t>(offsetof(MMFeedbackProperty_tD231512F1C1F4D5B36F24A02C90A27E609DEB987, ___Mode_29)); }
	inline int32_t get_Mode_29() const { return ___Mode_29; }
	inline int32_t* get_address_of_Mode_29() { return &___Mode_29; }
	inline void set_Mode_29(int32_t value)
	{
		___Mode_29 = value;
	}

	inline static int32_t get_offset_of_Duration_30() { return static_cast<int32_t>(offsetof(MMFeedbackProperty_tD231512F1C1F4D5B36F24A02C90A27E609DEB987, ___Duration_30)); }
	inline float get_Duration_30() const { return ___Duration_30; }
	inline float* get_address_of_Duration_30() { return &___Duration_30; }
	inline void set_Duration_30(float value)
	{
		___Duration_30 = value;
	}

	inline static int32_t get_offset_of_StartsOff_31() { return static_cast<int32_t>(offsetof(MMFeedbackProperty_tD231512F1C1F4D5B36F24A02C90A27E609DEB987, ___StartsOff_31)); }
	inline bool get_StartsOff_31() const { return ___StartsOff_31; }
	inline bool* get_address_of_StartsOff_31() { return &___StartsOff_31; }
	inline void set_StartsOff_31(bool value)
	{
		___StartsOff_31 = value;
	}

	inline static int32_t get_offset_of_RelativeValues_32() { return static_cast<int32_t>(offsetof(MMFeedbackProperty_tD231512F1C1F4D5B36F24A02C90A27E609DEB987, ___RelativeValues_32)); }
	inline bool get_RelativeValues_32() const { return ___RelativeValues_32; }
	inline bool* get_address_of_RelativeValues_32() { return &___RelativeValues_32; }
	inline void set_RelativeValues_32(bool value)
	{
		___RelativeValues_32 = value;
	}

	inline static int32_t get_offset_of_AllowAdditivePlays_33() { return static_cast<int32_t>(offsetof(MMFeedbackProperty_tD231512F1C1F4D5B36F24A02C90A27E609DEB987, ___AllowAdditivePlays_33)); }
	inline bool get_AllowAdditivePlays_33() const { return ___AllowAdditivePlays_33; }
	inline bool* get_address_of_AllowAdditivePlays_33() { return &___AllowAdditivePlays_33; }
	inline void set_AllowAdditivePlays_33(bool value)
	{
		___AllowAdditivePlays_33 = value;
	}

	inline static int32_t get_offset_of_LevelCurve_34() { return static_cast<int32_t>(offsetof(MMFeedbackProperty_tD231512F1C1F4D5B36F24A02C90A27E609DEB987, ___LevelCurve_34)); }
	inline MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175 * get_LevelCurve_34() const { return ___LevelCurve_34; }
	inline MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175 ** get_address_of_LevelCurve_34() { return &___LevelCurve_34; }
	inline void set_LevelCurve_34(MMTweenType_tFC19C698DA9BA94FF1935880AE64857EE31C1175 * value)
	{
		___LevelCurve_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LevelCurve_34), (void*)value);
	}

	inline static int32_t get_offset_of_RemapLevelZero_35() { return static_cast<int32_t>(offsetof(MMFeedbackProperty_tD231512F1C1F4D5B36F24A02C90A27E609DEB987, ___RemapLevelZero_35)); }
	inline float get_RemapLevelZero_35() const { return ___RemapLevelZero_35; }
	inline float* get_address_of_RemapLevelZero_35() { return &___RemapLevelZero_35; }
	inline void set_RemapLevelZero_35(float value)
	{
		___RemapLevelZero_35 = value;
	}

	inline static int32_t get_offset_of_RemapLevelOne_36() { return static_cast<int32_t>(offsetof(MMFeedbackProperty_tD231512F1C1F4D5B36F24A02C90A27E609DEB987, ___RemapLevelOne_36)); }
	inline float get_RemapLevelOne_36() const { return ___RemapLevelOne_36; }
	inline float* get_address_of_RemapLevelOne_36() { return &___RemapLevelOne_36; }
	inline void set_RemapLevelOne_36(float value)
	{
		___RemapLevelOne_36 = value;
	}

	inline static int32_t get_offset_of_InstantLevel_37() { return static_cast<int32_t>(offsetof(MMFeedbackProperty_tD231512F1C1F4D5B36F24A02C90A27E609DEB987, ___InstantLevel_37)); }
	inline float get_InstantLevel_37() const { return ___InstantLevel_37; }
	inline float* get_address_of_InstantLevel_37() { return &___InstantLevel_37; }
	inline void set_InstantLevel_37(float value)
	{
		___InstantLevel_37 = value;
	}

	inline static int32_t get_offset_of__initialIntensity_38() { return static_cast<int32_t>(offsetof(MMFeedbackProperty_tD231512F1C1F4D5B36F24A02C90A27E609DEB987, ____initialIntensity_38)); }
	inline float get__initialIntensity_38() const { return ____initialIntensity_38; }
	inline float* get_address_of__initialIntensity_38() { return &____initialIntensity_38; }
	inline void set__initialIntensity_38(float value)
	{
		____initialIntensity_38 = value;
	}

	inline static int32_t get_offset_of__coroutine_39() { return static_cast<int32_t>(offsetof(MMFeedbackProperty_tD231512F1C1F4D5B36F24A02C90A27E609DEB987, ____coroutine_39)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__coroutine_39() const { return ____coroutine_39; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__coroutine_39() { return &____coroutine_39; }
	inline void set__coroutine_39(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____coroutine_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____coroutine_39), (void*)value);
	}
};


// MoreMountains.Feedbacks.MMFeedbackSound
struct MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8  : public MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4
{
public:
	// UnityEngine.AudioClip MoreMountains.Feedbacks.MMFeedbackSound::Sfx
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___Sfx_29;
	// UnityEngine.AudioClip[] MoreMountains.Feedbacks.MMFeedbackSound::RandomSfx
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___RandomSfx_30;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackSound::TestButton
	bool ___TestButton_31;
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackSound::TestStopButton
	bool ___TestStopButton_32;
	// MoreMountains.Feedbacks.MMFeedbackSound/PlayMethods MoreMountains.Feedbacks.MMFeedbackSound::PlayMethod
	int32_t ___PlayMethod_33;
	// System.Int32 MoreMountains.Feedbacks.MMFeedbackSound::PoolSize
	int32_t ___PoolSize_34;
	// System.Single MoreMountains.Feedbacks.MMFeedbackSound::MinVolume
	float ___MinVolume_35;
	// System.Single MoreMountains.Feedbacks.MMFeedbackSound::MaxVolume
	float ___MaxVolume_36;
	// System.Single MoreMountains.Feedbacks.MMFeedbackSound::MinPitch
	float ___MinPitch_37;
	// System.Single MoreMountains.Feedbacks.MMFeedbackSound::MaxPitch
	float ___MaxPitch_38;
	// UnityEngine.Audio.AudioMixerGroup MoreMountains.Feedbacks.MMFeedbackSound::SfxAudioMixerGroup
	AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * ___SfxAudioMixerGroup_39;
	// UnityEngine.AudioClip MoreMountains.Feedbacks.MMFeedbackSound::_randomClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ____randomClip_40;
	// UnityEngine.AudioSource MoreMountains.Feedbacks.MMFeedbackSound::_cachedAudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ____cachedAudioSource_41;
	// UnityEngine.AudioSource[] MoreMountains.Feedbacks.MMFeedbackSound::_pool
	AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* ____pool_42;
	// UnityEngine.AudioSource MoreMountains.Feedbacks.MMFeedbackSound::_tempAudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ____tempAudioSource_43;
	// System.Single MoreMountains.Feedbacks.MMFeedbackSound::_duration
	float ____duration_44;
	// UnityEngine.AudioSource MoreMountains.Feedbacks.MMFeedbackSound::_editorAudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ____editorAudioSource_45;

public:
	inline static int32_t get_offset_of_Sfx_29() { return static_cast<int32_t>(offsetof(MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8, ___Sfx_29)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_Sfx_29() const { return ___Sfx_29; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_Sfx_29() { return &___Sfx_29; }
	inline void set_Sfx_29(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___Sfx_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Sfx_29), (void*)value);
	}

	inline static int32_t get_offset_of_RandomSfx_30() { return static_cast<int32_t>(offsetof(MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8, ___RandomSfx_30)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get_RandomSfx_30() const { return ___RandomSfx_30; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of_RandomSfx_30() { return &___RandomSfx_30; }
	inline void set_RandomSfx_30(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
	{
		___RandomSfx_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RandomSfx_30), (void*)value);
	}

	inline static int32_t get_offset_of_TestButton_31() { return static_cast<int32_t>(offsetof(MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8, ___TestButton_31)); }
	inline bool get_TestButton_31() const { return ___TestButton_31; }
	inline bool* get_address_of_TestButton_31() { return &___TestButton_31; }
	inline void set_TestButton_31(bool value)
	{
		___TestButton_31 = value;
	}

	inline static int32_t get_offset_of_TestStopButton_32() { return static_cast<int32_t>(offsetof(MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8, ___TestStopButton_32)); }
	inline bool get_TestStopButton_32() const { return ___TestStopButton_32; }
	inline bool* get_address_of_TestStopButton_32() { return &___TestStopButton_32; }
	inline void set_TestStopButton_32(bool value)
	{
		___TestStopButton_32 = value;
	}

	inline static int32_t get_offset_of_PlayMethod_33() { return static_cast<int32_t>(offsetof(MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8, ___PlayMethod_33)); }
	inline int32_t get_PlayMethod_33() const { return ___PlayMethod_33; }
	inline int32_t* get_address_of_PlayMethod_33() { return &___PlayMethod_33; }
	inline void set_PlayMethod_33(int32_t value)
	{
		___PlayMethod_33 = value;
	}

	inline static int32_t get_offset_of_PoolSize_34() { return static_cast<int32_t>(offsetof(MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8, ___PoolSize_34)); }
	inline int32_t get_PoolSize_34() const { return ___PoolSize_34; }
	inline int32_t* get_address_of_PoolSize_34() { return &___PoolSize_34; }
	inline void set_PoolSize_34(int32_t value)
	{
		___PoolSize_34 = value;
	}

	inline static int32_t get_offset_of_MinVolume_35() { return static_cast<int32_t>(offsetof(MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8, ___MinVolume_35)); }
	inline float get_MinVolume_35() const { return ___MinVolume_35; }
	inline float* get_address_of_MinVolume_35() { return &___MinVolume_35; }
	inline void set_MinVolume_35(float value)
	{
		___MinVolume_35 = value;
	}

	inline static int32_t get_offset_of_MaxVolume_36() { return static_cast<int32_t>(offsetof(MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8, ___MaxVolume_36)); }
	inline float get_MaxVolume_36() const { return ___MaxVolume_36; }
	inline float* get_address_of_MaxVolume_36() { return &___MaxVolume_36; }
	inline void set_MaxVolume_36(float value)
	{
		___MaxVolume_36 = value;
	}

	inline static int32_t get_offset_of_MinPitch_37() { return static_cast<int32_t>(offsetof(MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8, ___MinPitch_37)); }
	inline float get_MinPitch_37() const { return ___MinPitch_37; }
	inline float* get_address_of_MinPitch_37() { return &___MinPitch_37; }
	inline void set_MinPitch_37(float value)
	{
		___MinPitch_37 = value;
	}

	inline static int32_t get_offset_of_MaxPitch_38() { return static_cast<int32_t>(offsetof(MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8, ___MaxPitch_38)); }
	inline float get_MaxPitch_38() const { return ___MaxPitch_38; }
	inline float* get_address_of_MaxPitch_38() { return &___MaxPitch_38; }
	inline void set_MaxPitch_38(float value)
	{
		___MaxPitch_38 = value;
	}

	inline static int32_t get_offset_of_SfxAudioMixerGroup_39() { return static_cast<int32_t>(offsetof(MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8, ___SfxAudioMixerGroup_39)); }
	inline AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * get_SfxAudioMixerGroup_39() const { return ___SfxAudioMixerGroup_39; }
	inline AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F ** get_address_of_SfxAudioMixerGroup_39() { return &___SfxAudioMixerGroup_39; }
	inline void set_SfxAudioMixerGroup_39(AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * value)
	{
		___SfxAudioMixerGroup_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SfxAudioMixerGroup_39), (void*)value);
	}

	inline static int32_t get_offset_of__randomClip_40() { return static_cast<int32_t>(offsetof(MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8, ____randomClip_40)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get__randomClip_40() const { return ____randomClip_40; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of__randomClip_40() { return &____randomClip_40; }
	inline void set__randomClip_40(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		____randomClip_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____randomClip_40), (void*)value);
	}

	inline static int32_t get_offset_of__cachedAudioSource_41() { return static_cast<int32_t>(offsetof(MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8, ____cachedAudioSource_41)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get__cachedAudioSource_41() const { return ____cachedAudioSource_41; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of__cachedAudioSource_41() { return &____cachedAudioSource_41; }
	inline void set__cachedAudioSource_41(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		____cachedAudioSource_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedAudioSource_41), (void*)value);
	}

	inline static int32_t get_offset_of__pool_42() { return static_cast<int32_t>(offsetof(MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8, ____pool_42)); }
	inline AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* get__pool_42() const { return ____pool_42; }
	inline AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B** get_address_of__pool_42() { return &____pool_42; }
	inline void set__pool_42(AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* value)
	{
		____pool_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pool_42), (void*)value);
	}

	inline static int32_t get_offset_of__tempAudioSource_43() { return static_cast<int32_t>(offsetof(MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8, ____tempAudioSource_43)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get__tempAudioSource_43() const { return ____tempAudioSource_43; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of__tempAudioSource_43() { return &____tempAudioSource_43; }
	inline void set__tempAudioSource_43(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		____tempAudioSource_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tempAudioSource_43), (void*)value);
	}

	inline static int32_t get_offset_of__duration_44() { return static_cast<int32_t>(offsetof(MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8, ____duration_44)); }
	inline float get__duration_44() const { return ____duration_44; }
	inline float* get_address_of__duration_44() { return &____duration_44; }
	inline void set__duration_44(float value)
	{
		____duration_44 = value;
	}

	inline static int32_t get_offset_of__editorAudioSource_45() { return static_cast<int32_t>(offsetof(MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8, ____editorAudioSource_45)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get__editorAudioSource_45() const { return ____editorAudioSource_45; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of__editorAudioSource_45() { return &____editorAudioSource_45; }
	inline void set__editorAudioSource_45(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		____editorAudioSource_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____editorAudioSource_45), (void*)value);
	}
};

struct MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8_StaticFields
{
public:
	// System.Boolean MoreMountains.Feedbacks.MMFeedbackSound::FeedbackTypeAuthorized
	bool ___FeedbackTypeAuthorized_28;

public:
	inline static int32_t get_offset_of_FeedbackTypeAuthorized_28() { return static_cast<int32_t>(offsetof(MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8_StaticFields, ___FeedbackTypeAuthorized_28)); }
	inline bool get_FeedbackTypeAuthorized_28() const { return ___FeedbackTypeAuthorized_28; }
	inline bool* get_address_of_FeedbackTypeAuthorized_28() { return &___FeedbackTypeAuthorized_28; }
	inline void set_FeedbackTypeAuthorized_28(bool value)
	{
		___FeedbackTypeAuthorized_28 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * m_Items[1];

public:
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,MoreMountains.Feedbacks.MMF_Sound/<TestPlaySound>d__29>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CTestPlaySoundU3Ed__29_tA9A34B5BCD921BAD6224EADD12A268E3A962D52B_m7AC6612FE08543449AB211C113A2265E1CAC248C_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CTestPlaySoundU3Ed__29_tA9A34B5BCD921BAD6224EADD12A268E3A962D52B * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound/<TestPlaySound>d__47>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CTestPlaySoundU3Ed__47_t34D4D55F28F0D099E86F571722BA46997FBC0E95_m76D574DCB1A78642731A492220F67F7F04038EC5_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CTestPlaySoundU3Ed__47_t34D4D55F28F0D099E86F571722BA46997FBC0E95 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,MoreMountains.Feedbacks.MMFeedbackSound/<TestPlaySound>d__28>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CTestPlaySoundU3Ed__28_t9DDF20BAA74EEFB92905046D489853DF097A7A8C_m78CAE59C8FC9823654AC053CCDA749101BBD7B10_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CTestPlaySoundU3Ed__28_t9DDF20BAA74EEFB92905046D489853DF097A7A8C * ___stateMachine1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Single MoreMountains.Feedbacks.MMFeedbacksHelpers::Remap(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMFeedbacksHelpers_Remap_mF91639B3964272F011DC211808184EC25AF9571F (float ___x0, float ___A1, float ___B2, float ___C3, float ___D4, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.GameObject::get_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  GameObject_get_scene_m7EBF95ABB5037FEE6811928F2E83C769C53F86C2 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::MoveGameObjectToScene(UnityEngine.GameObject,UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_MoveGameObjectToScene_m6A83C5A83445385BC00FBFD155707732A0C80F39 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go0, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Single UnityEngine.AudioClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_m2223F2281D853F847BE0048620BA6F61F26440E4 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_Delay_mD54722DBAF22507493263E9B1167A7F77EDDF80E (int32_t ___millisecondsDelay0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,MoreMountains.Feedbacks.MMF_Sound/<TestPlaySound>d__29>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CTestPlaySoundU3Ed__29_tA9A34B5BCD921BAD6224EADD12A268E3A962D52B_m7AC6612FE08543449AB211C113A2265E1CAC248C (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CTestPlaySoundU3Ed__29_tA9A34B5BCD921BAD6224EADD12A268E3A962D52B * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CTestPlaySoundU3Ed__29_tA9A34B5BCD921BAD6224EADD12A268E3A962D52B *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CTestPlaySoundU3Ed__29_tA9A34B5BCD921BAD6224EADD12A268E3A962D52B_m7AC6612FE08543449AB211C113A2265E1CAC248C_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMF_Sound/<TestPlaySound>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTestPlaySoundU3Ed__29_MoveNext_m9CFCE4F2F67A3FA9267E4715A6E572AE0C6A395C (U3CTestPlaySoundU3Ed__29_tA9A34B5BCD921BAD6224EADD12A268E3A962D52B * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMF_Sound/<TestPlaySound>d__29::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTestPlaySoundU3Ed__29_SetStateMachine_m64F23F47EB618945DBED517D645FC994BE379CFF (U3CTestPlaySoundU3Ed__29_tA9A34B5BCD921BAD6224EADD12A268E3A962D52B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Single MoreMountains.Feedbacks.MMFeedback::get_FeedbackDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMFeedback_get_FeedbackDeltaTime_m3EF4F11444CD2F00CF1E656478EFC2EC0DF541E7 (MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound/<TestPlaySound>d__47>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CTestPlaySoundU3Ed__47_t34D4D55F28F0D099E86F571722BA46997FBC0E95_m76D574DCB1A78642731A492220F67F7F04038EC5 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CTestPlaySoundU3Ed__47_t34D4D55F28F0D099E86F571722BA46997FBC0E95 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CTestPlaySoundU3Ed__47_t34D4D55F28F0D099E86F571722BA46997FBC0E95 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CTestPlaySoundU3Ed__47_t34D4D55F28F0D099E86F571722BA46997FBC0E95_m76D574DCB1A78642731A492220F67F7F04038EC5_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound/<TestPlaySound>d__47::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTestPlaySoundU3Ed__47_MoveNext_m4229620AF111AED7E0ADF6E3219CCED02098A4E4 (U3CTestPlaySoundU3Ed__47_t34D4D55F28F0D099E86F571722BA46997FBC0E95 * __this, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound/<TestPlaySound>d__47::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTestPlaySoundU3Ed__47_SetStateMachine_m1B877C786D084CBD98D5149249287C997E25E2F3 (U3CTestPlaySoundU3Ed__47_t34D4D55F28F0D099E86F571722BA46997FBC0E95 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,MoreMountains.Feedbacks.MMFeedbackSound/<TestPlaySound>d__28>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CTestPlaySoundU3Ed__28_t9DDF20BAA74EEFB92905046D489853DF097A7A8C_m78CAE59C8FC9823654AC053CCDA749101BBD7B10 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CTestPlaySoundU3Ed__28_t9DDF20BAA74EEFB92905046D489853DF097A7A8C * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CTestPlaySoundU3Ed__28_t9DDF20BAA74EEFB92905046D489853DF097A7A8C *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CTestPlaySoundU3Ed__28_t9DDF20BAA74EEFB92905046D489853DF097A7A8C_m78CAE59C8FC9823654AC053CCDA749101BBD7B10_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void MoreMountains.Feedbacks.MMFeedbackSound/<TestPlaySound>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTestPlaySoundU3Ed__28_MoveNext_m962BDDC76F73C17F8B41412BDEF0CAF7E2BCCC0E (U3CTestPlaySoundU3Ed__28_t9DDF20BAA74EEFB92905046D489853DF097A7A8C * __this, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMFeedbackSound/<TestPlaySound>d__28::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTestPlaySoundU3Ed__28_SetStateMachine_mBA77B6710F3E8EF9F0E67012920F9D86D8A4DC8F (U3CTestPlaySoundU3Ed__28_t9DDF20BAA74EEFB92905046D489853DF097A7A8C * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
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
// System.Void MoreMountains.Feedbacks.MMF_Property/<UpdateValueSequence>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateValueSequenceU3Ed__18__ctor_mC298BFDA66FAB1C3E6A82D78276014E66C12098C (U3CUpdateValueSequenceU3Ed__18_t18E90725E16FD43169C5634AB67E1585EE970CDD * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MoreMountains.Feedbacks.MMF_Property/<UpdateValueSequence>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateValueSequenceU3Ed__18_System_IDisposable_Dispose_mCA2E06EE6BD2AFD55848F2C9E0AD03DD9285AEC7 (U3CUpdateValueSequenceU3Ed__18_t18E90725E16FD43169C5634AB67E1585EE970CDD * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MoreMountains.Feedbacks.MMF_Property/<UpdateValueSequence>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUpdateValueSequenceU3Ed__18_MoveNext_mFECAC1F27F2058D01E08DEBF6D759C000D570696 (U3CUpdateValueSequenceU3Ed__18_t18E90725E16FD43169C5634AB67E1585EE970CDD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	MMF_Property_tE9428377535B5E6742AEB82FD641DD76B9D8520D * V_1 = NULL;
	float V_2 = 0.0f;
	U3CUpdateValueSequenceU3Ed__18_t18E90725E16FD43169C5634AB67E1585EE970CDD * G_B4_0 = NULL;
	U3CUpdateValueSequenceU3Ed__18_t18E90725E16FD43169C5634AB67E1585EE970CDD * G_B3_0 = NULL;
	float G_B5_0 = 0.0f;
	U3CUpdateValueSequenceU3Ed__18_t18E90725E16FD43169C5634AB67E1585EE970CDD * G_B5_1 = NULL;
	float G_B8_0 = 0.0f;
	U3CUpdateValueSequenceU3Ed__18_t18E90725E16FD43169C5634AB67E1585EE970CDD * G_B8_1 = NULL;
	float G_B7_0 = 0.0f;
	U3CUpdateValueSequenceU3Ed__18_t18E90725E16FD43169C5634AB67E1585EE970CDD * G_B7_1 = NULL;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	U3CUpdateValueSequenceU3Ed__18_t18E90725E16FD43169C5634AB67E1585EE970CDD * G_B9_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MMF_Property_tE9428377535B5E6742AEB82FD641DD76B9D8520D * L_1 = __this->get_U3CU3E4__this_2();
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
				goto IL_00a8;
			}
			case 2:
			{
				goto IL_0112;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float journey = NormalPlayDirection ? 0f : FeedbackDuration;
		MMF_Property_tE9428377535B5E6742AEB82FD641DD76B9D8520D * L_3 = V_1;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtFuncInvoker0< bool >::Invoke(45 /* System.Boolean MoreMountains.Feedbacks.MMF_Feedback::get_NormalPlayDirection() */, L_3);
		G_B3_0 = __this;
		if (L_4)
		{
			G_B4_0 = __this;
			goto IL_003a;
		}
	}
	{
		MMF_Property_tE9428377535B5E6742AEB82FD641DD76B9D8520D * L_5 = V_1;
		NullCheck(L_5);
		float L_6;
		L_6 = VirtFuncInvoker0< float >::Invoke(26 /* System.Single MoreMountains.Feedbacks.MMF_Feedback::get_FeedbackDuration() */, L_5);
		G_B5_0 = L_6;
		G_B5_1 = G_B3_0;
		goto IL_003f;
	}

IL_003a:
	{
		G_B5_0 = (0.0f);
		G_B5_1 = G_B4_0;
	}

IL_003f:
	{
		NullCheck(G_B5_1);
		G_B5_1->set_U3CjourneyU3E5__2_4(G_B5_0);
		goto IL_00af;
	}

IL_0046:
	{
		// float remappedTime = MMFeedbacksHelpers.Remap(journey, 0f, FeedbackDuration, 0f, 1f);
		float L_7 = __this->get_U3CjourneyU3E5__2_4();
		MMF_Property_tE9428377535B5E6742AEB82FD641DD76B9D8520D * L_8 = V_1;
		NullCheck(L_8);
		float L_9;
		L_9 = VirtFuncInvoker0< float >::Invoke(26 /* System.Single MoreMountains.Feedbacks.MMF_Feedback::get_FeedbackDuration() */, L_8);
		float L_10;
		L_10 = MMFeedbacksHelpers_Remap_mF91639B3964272F011DC211808184EC25AF9571F(L_7, (0.0f), L_9, (0.0f), (1.0f), /*hidden argument*/NULL);
		V_2 = L_10;
		// SetValues(remappedTime, intensityMultiplier);
		MMF_Property_tE9428377535B5E6742AEB82FD641DD76B9D8520D * L_11 = V_1;
		float L_12 = V_2;
		float L_13 = __this->get_intensityMultiplier_3();
		NullCheck(L_11);
		VirtActionInvoker2< float, float >::Invoke(56 /* System.Void MoreMountains.Feedbacks.MMF_Property::SetValues(System.Single,System.Single) */, L_11, L_12, L_13);
		// journey += NormalPlayDirection ? FeedbackDeltaTime : -FeedbackDeltaTime;
		float L_14 = __this->get_U3CjourneyU3E5__2_4();
		MMF_Property_tE9428377535B5E6742AEB82FD641DD76B9D8520D * L_15 = V_1;
		NullCheck(L_15);
		bool L_16;
		L_16 = VirtFuncInvoker0< bool >::Invoke(45 /* System.Boolean MoreMountains.Feedbacks.MMF_Feedback::get_NormalPlayDirection() */, L_15);
		G_B7_0 = L_14;
		G_B7_1 = __this;
		if (L_16)
		{
			G_B8_0 = L_14;
			G_B8_1 = __this;
			goto IL_008c;
		}
	}
	{
		MMF_Property_tE9428377535B5E6742AEB82FD641DD76B9D8520D * L_17 = V_1;
		NullCheck(L_17);
		float L_18;
		L_18 = VirtFuncInvoker0< float >::Invoke(18 /* System.Single MoreMountains.Feedbacks.MMF_Feedback::get_FeedbackDeltaTime() */, L_17);
		G_B9_0 = ((-L_18));
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_0092;
	}

IL_008c:
	{
		MMF_Property_tE9428377535B5E6742AEB82FD641DD76B9D8520D * L_19 = V_1;
		NullCheck(L_19);
		float L_20;
		L_20 = VirtFuncInvoker0< float >::Invoke(18 /* System.Single MoreMountains.Feedbacks.MMF_Feedback::get_FeedbackDeltaTime() */, L_19);
		G_B9_0 = L_20;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_0092:
	{
		NullCheck(G_B9_2);
		G_B9_2->set_U3CjourneyU3E5__2_4(((float)il2cpp_codegen_add((float)G_B9_1, (float)G_B9_0)));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00a8:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00af:
	{
		// while ((journey >= 0) && (journey <= FeedbackDuration) && (FeedbackDuration > 0))
		float L_21 = __this->get_U3CjourneyU3E5__2_4();
		if ((!(((float)L_21) >= ((float)(0.0f)))))
		{
			goto IL_00da;
		}
	}
	{
		float L_22 = __this->get_U3CjourneyU3E5__2_4();
		MMF_Property_tE9428377535B5E6742AEB82FD641DD76B9D8520D * L_23 = V_1;
		NullCheck(L_23);
		float L_24;
		L_24 = VirtFuncInvoker0< float >::Invoke(26 /* System.Single MoreMountains.Feedbacks.MMF_Feedback::get_FeedbackDuration() */, L_23);
		if ((!(((float)L_22) <= ((float)L_24))))
		{
			goto IL_00da;
		}
	}
	{
		MMF_Property_tE9428377535B5E6742AEB82FD641DD76B9D8520D * L_25 = V_1;
		NullCheck(L_25);
		float L_26;
		L_26 = VirtFuncInvoker0< float >::Invoke(26 /* System.Single MoreMountains.Feedbacks.MMF_Feedback::get_FeedbackDuration() */, L_25);
		if ((((float)L_26) > ((float)(0.0f))))
		{
			goto IL_0046;
		}
	}

IL_00da:
	{
		// SetValues(FinalNormalizedTime, intensityMultiplier);
		MMF_Property_tE9428377535B5E6742AEB82FD641DD76B9D8520D * L_27 = V_1;
		MMF_Property_tE9428377535B5E6742AEB82FD641DD76B9D8520D * L_28 = V_1;
		NullCheck(L_28);
		float L_29;
		L_29 = VirtFuncInvoker0< float >::Invoke(42 /* System.Single MoreMountains.Feedbacks.MMF_Feedback::get_FinalNormalizedTime() */, L_28);
		float L_30 = __this->get_intensityMultiplier_3();
		NullCheck(L_27);
		VirtActionInvoker2< float, float >::Invoke(56 /* System.Void MoreMountains.Feedbacks.MMF_Property::SetValues(System.Single,System.Single) */, L_27, L_29, L_30);
		// if (StartsOff)
		MMF_Property_tE9428377535B5E6742AEB82FD641DD76B9D8520D * L_31 = V_1;
		NullCheck(L_31);
		bool L_32 = L_31->get_StartsOff_30();
		if (!L_32)
		{
			goto IL_00fb;
		}
	}
	{
		// Turn(false);
		MMF_Property_tE9428377535B5E6742AEB82FD641DD76B9D8520D * L_33 = V_1;
		NullCheck(L_33);
		VirtActionInvoker1< bool >::Invoke(57 /* System.Void MoreMountains.Feedbacks.MMF_Property::Turn(System.Boolean) */, L_33, (bool)0);
	}

IL_00fb:
	{
		// _coroutine = null;
		MMF_Property_tE9428377535B5E6742AEB82FD641DD76B9D8520D * L_34 = V_1;
		NullCheck(L_34);
		L_34->set__coroutine_38((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0112:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object MoreMountains.Feedbacks.MMF_Property/<UpdateValueSequence>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUpdateValueSequenceU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m89778D978FA9ACFB7153E7A34FD4F9E13910F729 (U3CUpdateValueSequenceU3Ed__18_t18E90725E16FD43169C5634AB67E1585EE970CDD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MoreMountains.Feedbacks.MMF_Property/<UpdateValueSequence>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateValueSequenceU3Ed__18_System_Collections_IEnumerator_Reset_m86C34B0BF0342A2D93565115A909C7244A02F91B (U3CUpdateValueSequenceU3Ed__18_t18E90725E16FD43169C5634AB67E1585EE970CDD * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdateValueSequenceU3Ed__18_System_Collections_IEnumerator_Reset_m86C34B0BF0342A2D93565115A909C7244A02F91B_RuntimeMethod_var)));
	}
}
// System.Object MoreMountains.Feedbacks.MMF_Property/<UpdateValueSequence>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUpdateValueSequenceU3Ed__18_System_Collections_IEnumerator_get_Current_mFA08B537F12B56F1DCD036DF2DA2B71F05349663 (U3CUpdateValueSequenceU3Ed__18_t18E90725E16FD43169C5634AB67E1585EE970CDD * __this, const RuntimeMethod* method)
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
// System.Void MoreMountains.Feedbacks.MMF_Sound/<TestPlaySound>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTestPlaySoundU3Ed__29_MoveNext_m9CFCE4F2F67A3FA9267E4715A6E572AE0C6A395C (U3CTestPlaySoundU3Ed__29_tA9A34B5BCD921BAD6224EADD12A268E3A962D52B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CTestPlaySoundU3Ed__29_tA9A34B5BCD921BAD6224EADD12A268E3A962D52B_m7AC6612FE08543449AB211C113A2265E1CAC248C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CF1C526BD3872B6F7B223B157F80669490DCBCF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6524BEAD3BC85019058034D3B90F6AAD25D87885);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9706EC31E2B043535F43A0B97CC1AA2377F4A865);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402 * V_1 = NULL;
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * V_2 = NULL;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_015d;
			}
		}

IL_0014:
		{
			// AudioClip tmpAudioClip = null;
			V_2 = (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)NULL;
			// if (Sfx != null)
			MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402 * L_3 = V_1;
			NullCheck(L_3);
			AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_4 = L_3->get_Sfx_28();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_5;
			L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_002b;
			}
		}

IL_0024:
		{
			// tmpAudioClip = Sfx;
			MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402 * L_6 = V_1;
			NullCheck(L_6);
			AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_7 = L_6->get_Sfx_28();
			V_2 = L_7;
		}

IL_002b:
		{
			// if (RandomSfx.Length > 0)
			MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402 * L_8 = V_1;
			NullCheck(L_8);
			AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_9 = L_8->get_RandomSfx_29();
			NullCheck(L_9);
			if (!(((RuntimeArray*)L_9)->max_length))
			{
				goto IL_004a;
			}
		}

IL_0034:
		{
			// tmpAudioClip = RandomSfx[Random.Range(0, RandomSfx.Length)];
			MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402 * L_10 = V_1;
			NullCheck(L_10);
			AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_11 = L_10->get_RandomSfx_29();
			MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402 * L_12 = V_1;
			NullCheck(L_12);
			AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_13 = L_12->get_RandomSfx_29();
			NullCheck(L_13);
			int32_t L_14;
			L_14 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))), /*hidden argument*/NULL);
			NullCheck(L_11);
			int32_t L_15 = L_14;
			AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_16 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
			V_2 = L_16;
		}

IL_004a:
		{
			// if (tmpAudioClip == null)
			AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_17 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_18;
			L_18 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_17, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_18)
			{
				goto IL_0082;
			}
		}

IL_0053:
		{
			// Debug.LogError(Label + " on " + Owner.gameObject.name + " can't play in editor mode, you haven't set its Sfx.");
			MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402 * L_19 = V_1;
			NullCheck(L_19);
			String_t* L_20 = ((MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06 *)L_19)->get_Label_2();
			MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402 * L_21 = V_1;
			NullCheck(L_21);
			MMF_Player_tC899A947C0F4E42B7461FAB8A051855F7BEF0A7D * L_22 = ((MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06 *)L_21)->get_Owner_7();
			NullCheck(L_22);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
			L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_22, /*hidden argument*/NULL);
			NullCheck(L_23);
			String_t* L_24;
			L_24 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_23, /*hidden argument*/NULL);
			String_t* L_25;
			L_25 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_20, _stringLiteral0CF1C526BD3872B6F7B223B157F80669490DCBCF, L_24, _stringLiteral9706EC31E2B043535F43A0B97CC1AA2377F4A865, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_25, /*hidden argument*/NULL);
			// return;
			goto IL_01b4;
		}

IL_0082:
		{
			// float volume = Random.Range(MinVolume, MaxVolume);
			MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402 * L_26 = V_1;
			NullCheck(L_26);
			float L_27 = L_26->get_MinVolume_34();
			MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402 * L_28 = V_1;
			NullCheck(L_28);
			float L_29 = L_28->get_MaxVolume_35();
			float L_30;
			L_30 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_27, L_29, /*hidden argument*/NULL);
			V_3 = L_30;
			// float pitch = Random.Range(MinPitch, MaxPitch);
			MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402 * L_31 = V_1;
			NullCheck(L_31);
			float L_32 = L_31->get_MinPitch_36();
			MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402 * L_33 = V_1;
			NullCheck(L_33);
			float L_34 = L_33->get_MaxPitch_37();
			float L_35;
			L_35 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_32, L_34, /*hidden argument*/NULL);
			V_4 = L_35;
			// GameObject temporaryAudioHost = new GameObject("EditorTestAS_WillAutoDestroy");
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
			GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_36, _stringLiteral6524BEAD3BC85019058034D3B90F6AAD25D87885, /*hidden argument*/NULL);
			__this->set_U3CtemporaryAudioHostU3E5__2_3(L_36);
			// SceneManager.MoveGameObjectToScene(temporaryAudioHost.gameObject, Owner.gameObject.scene);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = __this->get_U3CtemporaryAudioHostU3E5__2_3();
			NullCheck(L_37);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38;
			L_38 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_37, /*hidden argument*/NULL);
			MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402 * L_39 = V_1;
			NullCheck(L_39);
			MMF_Player_tC899A947C0F4E42B7461FAB8A051855F7BEF0A7D * L_40 = ((MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06 *)L_39)->get_Owner_7();
			NullCheck(L_40);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41;
			L_41 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_40, /*hidden argument*/NULL);
			NullCheck(L_41);
			Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_42;
			L_42 = GameObject_get_scene_m7EBF95ABB5037FEE6811928F2E83C769C53F86C2(L_41, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
			SceneManager_MoveGameObjectToScene_m6A83C5A83445385BC00FBFD155707732A0C80F39(L_38, L_42, /*hidden argument*/NULL);
			// temporaryAudioHost.transform.position = Owner.transform.position;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43 = __this->get_U3CtemporaryAudioHostU3E5__2_3();
			NullCheck(L_43);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
			L_44 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_43, /*hidden argument*/NULL);
			MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402 * L_45 = V_1;
			NullCheck(L_45);
			MMF_Player_tC899A947C0F4E42B7461FAB8A051855F7BEF0A7D * L_46 = ((MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06 *)L_45)->get_Owner_7();
			NullCheck(L_46);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47;
			L_47 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_46, /*hidden argument*/NULL);
			NullCheck(L_47);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
			L_48 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_47, /*hidden argument*/NULL);
			NullCheck(L_44);
			Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_44, L_48, /*hidden argument*/NULL);
			// _editorAudioSource = temporaryAudioHost.AddComponent<AudioSource>() as AudioSource;
			MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402 * L_49 = V_1;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50 = __this->get_U3CtemporaryAudioHostU3E5__2_3();
			NullCheck(L_50);
			AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_51;
			L_51 = GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76(L_50, /*hidden argument*/GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var);
			NullCheck(L_49);
			L_49->set__editorAudioSource_44(L_51);
			// PlayAudioSource(_editorAudioSource, tmpAudioClip, volume, pitch, 0);
			MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402 * L_52 = V_1;
			MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402 * L_53 = V_1;
			NullCheck(L_53);
			AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_54 = L_53->get__editorAudioSource_44();
			AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_55 = V_2;
			float L_56 = V_3;
			float L_57 = V_4;
			NullCheck(L_52);
			VirtActionInvoker6< AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *, float, float, int32_t, AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * >::Invoke(58 /* System.Void MoreMountains.Feedbacks.MMF_Sound::PlayAudioSource(UnityEngine.AudioSource,UnityEngine.AudioClip,System.Single,System.Single,System.Int32,UnityEngine.Audio.AudioMixerGroup) */, L_52, L_54, L_55, L_56, L_57, 0, (AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F *)NULL);
			// float length = 1000 * tmpAudioClip.length;
			AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_58 = V_2;
			NullCheck(L_58);
			float L_59;
			L_59 = AudioClip_get_length_m2223F2281D853F847BE0048620BA6F61F26440E4(L_58, /*hidden argument*/NULL);
			// await Task.Delay((int)length);
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_60;
			L_60 = Task_Delay_mD54722DBAF22507493263E9B1167A7F77EDDF80E(il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply((float)(1000.0f), (float)L_59))), /*hidden argument*/NULL);
			NullCheck(L_60);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_61;
			L_61 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_60, /*hidden argument*/NULL);
			V_5 = L_61;
			bool L_62;
			L_62 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_5), /*hidden argument*/NULL);
			if (L_62)
			{
				goto IL_017a;
			}
		}

IL_013c:
		{
			int32_t L_63 = 0;
			V_0 = L_63;
			__this->set_U3CU3E1__state_0(L_63);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_64 = V_5;
			__this->set_U3CU3Eu__1_4(L_64);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_65 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CTestPlaySoundU3Ed__29_tA9A34B5BCD921BAD6224EADD12A268E3A962D52B_m7AC6612FE08543449AB211C113A2265E1CAC248C((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_65, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_5), (U3CTestPlaySoundU3Ed__29_tA9A34B5BCD921BAD6224EADD12A268E3A962D52B *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CTestPlaySoundU3Ed__29_tA9A34B5BCD921BAD6224EADD12A268E3A962D52B_m7AC6612FE08543449AB211C113A2265E1CAC248C_RuntimeMethod_var);
			goto IL_01ce;
		}

IL_015d:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_66 = __this->get_U3CU3Eu__1_4();
			V_5 = L_66;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_67 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_67, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_68 = (-1);
			V_0 = L_68;
			__this->set_U3CU3E1__state_0(L_68);
		}

IL_017a:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_5), /*hidden argument*/NULL);
			// Owner.ProxyDestroyImmediate(temporaryAudioHost);
			MMF_Sound_t69E66CA9EA4BE258E80534A0967B2AE7F347F402 * L_69 = V_1;
			NullCheck(L_69);
			MMF_Player_tC899A947C0F4E42B7461FAB8A051855F7BEF0A7D * L_70 = ((MMF_Feedback_tDEEB766BEC5EAB7AB693DDD30A825565ED11BF06 *)L_69)->get_Owner_7();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_71 = __this->get_U3CtemporaryAudioHostU3E5__2_3();
			NullCheck(L_70);
			VirtActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(49 /* System.Void MoreMountains.Feedbacks.MMF_Player::ProxyDestroyImmediate(UnityEngine.GameObject) */, L_70, L_71);
			goto IL_01b4;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0194;
		}
		throw e;
	}

CATCH_0194:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CtemporaryAudioHostU3E5__2_3((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_72 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_73 = V_6;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_72, L_73, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01ce;
	} // end catch (depth: 1)

IL_01b4:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CtemporaryAudioHostU3E5__2_3((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_74 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_74, /*hidden argument*/NULL);
	}

IL_01ce:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CTestPlaySoundU3Ed__29_MoveNext_m9CFCE4F2F67A3FA9267E4715A6E572AE0C6A395C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CTestPlaySoundU3Ed__29_tA9A34B5BCD921BAD6224EADD12A268E3A962D52B * _thisAdjusted = reinterpret_cast<U3CTestPlaySoundU3Ed__29_tA9A34B5BCD921BAD6224EADD12A268E3A962D52B *>(__this + _offset);
	U3CTestPlaySoundU3Ed__29_MoveNext_m9CFCE4F2F67A3FA9267E4715A6E572AE0C6A395C(_thisAdjusted, method);
}
// System.Void MoreMountains.Feedbacks.MMF_Sound/<TestPlaySound>d__29::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTestPlaySoundU3Ed__29_SetStateMachine_m64F23F47EB618945DBED517D645FC994BE379CFF (U3CTestPlaySoundU3Ed__29_tA9A34B5BCD921BAD6224EADD12A268E3A962D52B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CTestPlaySoundU3Ed__29_SetStateMachine_m64F23F47EB618945DBED517D645FC994BE379CFF_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CTestPlaySoundU3Ed__29_tA9A34B5BCD921BAD6224EADD12A268E3A962D52B * _thisAdjusted = reinterpret_cast<U3CTestPlaySoundU3Ed__29_tA9A34B5BCD921BAD6224EADD12A268E3A962D52B *>(__this + _offset);
	U3CTestPlaySoundU3Ed__29_SetStateMachine_m64F23F47EB618945DBED517D645FC994BE379CFF(_thisAdjusted, ___stateMachine0, method);
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
// System.Void MoreMountains.Feedbacks.MMFeedbackBase/<UpdateValueSequence>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateValueSequenceU3Ed__19__ctor_m73B5E3808CA94AC81E4A20ADE1DF7E21AF532720 (U3CUpdateValueSequenceU3Ed__19_tBFFFA4DC9BEB096B2B5840BE43FE60D341AAD7EB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MoreMountains.Feedbacks.MMFeedbackBase/<UpdateValueSequence>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateValueSequenceU3Ed__19_System_IDisposable_Dispose_mBA58188CF701BF9CD0A85AC64A43FC9572624B17 (U3CUpdateValueSequenceU3Ed__19_tBFFFA4DC9BEB096B2B5840BE43FE60D341AAD7EB * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MoreMountains.Feedbacks.MMFeedbackBase/<UpdateValueSequence>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUpdateValueSequenceU3Ed__19_MoveNext_m144A4AA034836BC7FFBD1938ABA7A67C9493ADD4 (U3CUpdateValueSequenceU3Ed__19_tBFFFA4DC9BEB096B2B5840BE43FE60D341AAD7EB * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	MMFeedbackBase_tBFE40896312C5014CBD6AA33309C76A7292B34E3 * V_1 = NULL;
	float V_2 = 0.0f;
	U3CUpdateValueSequenceU3Ed__19_tBFFFA4DC9BEB096B2B5840BE43FE60D341AAD7EB * G_B4_0 = NULL;
	U3CUpdateValueSequenceU3Ed__19_tBFFFA4DC9BEB096B2B5840BE43FE60D341AAD7EB * G_B3_0 = NULL;
	float G_B5_0 = 0.0f;
	U3CUpdateValueSequenceU3Ed__19_tBFFFA4DC9BEB096B2B5840BE43FE60D341AAD7EB * G_B5_1 = NULL;
	float G_B8_0 = 0.0f;
	U3CUpdateValueSequenceU3Ed__19_tBFFFA4DC9BEB096B2B5840BE43FE60D341AAD7EB * G_B8_1 = NULL;
	float G_B7_0 = 0.0f;
	U3CUpdateValueSequenceU3Ed__19_tBFFFA4DC9BEB096B2B5840BE43FE60D341AAD7EB * G_B7_1 = NULL;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	U3CUpdateValueSequenceU3Ed__19_tBFFFA4DC9BEB096B2B5840BE43FE60D341AAD7EB * G_B9_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MMFeedbackBase_tBFE40896312C5014CBD6AA33309C76A7292B34E3 * L_1 = __this->get_U3CU3E4__this_2();
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
				goto IL_00af;
			}
			case 2:
			{
				goto IL_0120;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float journey = NormalPlayDirection ? 0f : FeedbackDuration;
		MMFeedbackBase_tBFE40896312C5014CBD6AA33309C76A7292B34E3 * L_3 = V_1;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean MoreMountains.Feedbacks.MMFeedback::get_NormalPlayDirection() */, L_3);
		G_B3_0 = __this;
		if (L_4)
		{
			G_B4_0 = __this;
			goto IL_003a;
		}
	}
	{
		MMFeedbackBase_tBFE40896312C5014CBD6AA33309C76A7292B34E3 * L_5 = V_1;
		NullCheck(L_5);
		float L_6;
		L_6 = VirtFuncInvoker0< float >::Invoke(16 /* System.Single MoreMountains.Feedbacks.MMFeedback::get_FeedbackDuration() */, L_5);
		G_B5_0 = L_6;
		G_B5_1 = G_B3_0;
		goto IL_003f;
	}

IL_003a:
	{
		G_B5_0 = (0.0f);
		G_B5_1 = G_B4_0;
	}

IL_003f:
	{
		NullCheck(G_B5_1);
		G_B5_1->set_U3CjourneyU3E5__2_4(G_B5_0);
		// IsPlaying = true;
		MMFeedbackBase_tBFE40896312C5014CBD6AA33309C76A7292B34E3 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker1< bool >::Invoke(14 /* System.Void MoreMountains.Feedbacks.MMFeedback::set_IsPlaying(System.Boolean) */, L_7, (bool)1);
		goto IL_00b6;
	}

IL_004d:
	{
		// float remappedTime = MMFeedbacksHelpers.Remap(journey, 0f, FeedbackDuration, 0f, 1f);
		float L_8 = __this->get_U3CjourneyU3E5__2_4();
		MMFeedbackBase_tBFE40896312C5014CBD6AA33309C76A7292B34E3 * L_9 = V_1;
		NullCheck(L_9);
		float L_10;
		L_10 = VirtFuncInvoker0< float >::Invoke(16 /* System.Single MoreMountains.Feedbacks.MMFeedback::get_FeedbackDuration() */, L_9);
		float L_11;
		L_11 = MMFeedbacksHelpers_Remap_mF91639B3964272F011DC211808184EC25AF9571F(L_8, (0.0f), L_10, (0.0f), (1.0f), /*hidden argument*/NULL);
		V_2 = L_11;
		// SetValues(remappedTime, feedbacksIntensity);
		MMFeedbackBase_tBFE40896312C5014CBD6AA33309C76A7292B34E3 * L_12 = V_1;
		float L_13 = V_2;
		float L_14 = __this->get_feedbacksIntensity_3();
		NullCheck(L_12);
		VirtActionInvoker2< float, float >::Invoke(47 /* System.Void MoreMountains.Feedbacks.MMFeedbackBase::SetValues(System.Single,System.Single) */, L_12, L_13, L_14);
		// journey += NormalPlayDirection ? FeedbackDeltaTime : -FeedbackDeltaTime;
		float L_15 = __this->get_U3CjourneyU3E5__2_4();
		MMFeedbackBase_tBFE40896312C5014CBD6AA33309C76A7292B34E3 * L_16 = V_1;
		NullCheck(L_16);
		bool L_17;
		L_17 = VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean MoreMountains.Feedbacks.MMFeedback::get_NormalPlayDirection() */, L_16);
		G_B7_0 = L_15;
		G_B7_1 = __this;
		if (L_17)
		{
			G_B8_0 = L_15;
			G_B8_1 = __this;
			goto IL_0093;
		}
	}
	{
		MMFeedbackBase_tBFE40896312C5014CBD6AA33309C76A7292B34E3 * L_18 = V_1;
		NullCheck(L_18);
		float L_19;
		L_19 = MMFeedback_get_FeedbackDeltaTime_m3EF4F11444CD2F00CF1E656478EFC2EC0DF541E7(L_18, /*hidden argument*/NULL);
		G_B9_0 = ((-L_19));
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_0099;
	}

IL_0093:
	{
		MMFeedbackBase_tBFE40896312C5014CBD6AA33309C76A7292B34E3 * L_20 = V_1;
		NullCheck(L_20);
		float L_21;
		L_21 = MMFeedback_get_FeedbackDeltaTime_m3EF4F11444CD2F00CF1E656478EFC2EC0DF541E7(L_20, /*hidden argument*/NULL);
		G_B9_0 = L_21;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_0099:
	{
		NullCheck(G_B9_2);
		G_B9_2->set_U3CjourneyU3E5__2_4(((float)il2cpp_codegen_add((float)G_B9_1, (float)G_B9_0)));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00af:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00b6:
	{
		// while ((journey >= 0) && (journey <= FeedbackDuration) && (FeedbackDuration > 0))
		float L_22 = __this->get_U3CjourneyU3E5__2_4();
		if ((!(((float)L_22) >= ((float)(0.0f)))))
		{
			goto IL_00e1;
		}
	}
	{
		float L_23 = __this->get_U3CjourneyU3E5__2_4();
		MMFeedbackBase_tBFE40896312C5014CBD6AA33309C76A7292B34E3 * L_24 = V_1;
		NullCheck(L_24);
		float L_25;
		L_25 = VirtFuncInvoker0< float >::Invoke(16 /* System.Single MoreMountains.Feedbacks.MMFeedback::get_FeedbackDuration() */, L_24);
		if ((!(((float)L_23) <= ((float)L_25))))
		{
			goto IL_00e1;
		}
	}
	{
		MMFeedbackBase_tBFE40896312C5014CBD6AA33309C76A7292B34E3 * L_26 = V_1;
		NullCheck(L_26);
		float L_27;
		L_27 = VirtFuncInvoker0< float >::Invoke(16 /* System.Single MoreMountains.Feedbacks.MMFeedback::get_FeedbackDuration() */, L_26);
		if ((((float)L_27) > ((float)(0.0f))))
		{
			goto IL_004d;
		}
	}

IL_00e1:
	{
		// SetValues(FinalNormalizedTime, feedbacksIntensity);
		MMFeedbackBase_tBFE40896312C5014CBD6AA33309C76A7292B34E3 * L_28 = V_1;
		MMFeedbackBase_tBFE40896312C5014CBD6AA33309C76A7292B34E3 * L_29 = V_1;
		NullCheck(L_29);
		float L_30;
		L_30 = VirtFuncInvoker0< float >::Invoke(35 /* System.Single MoreMountains.Feedbacks.MMFeedback::get_FinalNormalizedTime() */, L_29);
		float L_31 = __this->get_feedbacksIntensity_3();
		NullCheck(L_28);
		VirtActionInvoker2< float, float >::Invoke(47 /* System.Void MoreMountains.Feedbacks.MMFeedbackBase::SetValues(System.Single,System.Single) */, L_28, L_30, L_31);
		// if (StartsOff)
		MMFeedbackBase_tBFE40896312C5014CBD6AA33309C76A7292B34E3 * L_32 = V_1;
		NullCheck(L_32);
		bool L_33 = L_32->get_StartsOff_30();
		if (!L_33)
		{
			goto IL_0102;
		}
	}
	{
		// Turn(false);
		MMFeedbackBase_tBFE40896312C5014CBD6AA33309C76A7292B34E3 * L_34 = V_1;
		NullCheck(L_34);
		VirtActionInvoker1< bool >::Invoke(48 /* System.Void MoreMountains.Feedbacks.MMFeedbackBase::Turn(System.Boolean) */, L_34, (bool)0);
	}

IL_0102:
	{
		// IsPlaying = false;
		MMFeedbackBase_tBFE40896312C5014CBD6AA33309C76A7292B34E3 * L_35 = V_1;
		NullCheck(L_35);
		VirtActionInvoker1< bool >::Invoke(14 /* System.Void MoreMountains.Feedbacks.MMFeedback::set_IsPlaying(System.Boolean) */, L_35, (bool)0);
		// _coroutine = null;
		MMFeedbackBase_tBFE40896312C5014CBD6AA33309C76A7292B34E3 * L_36 = V_1;
		NullCheck(L_36);
		L_36->set__coroutine_35((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0120:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object MoreMountains.Feedbacks.MMFeedbackBase/<UpdateValueSequence>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUpdateValueSequenceU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE3888CC71BA047A5751321A2377BF70FB3A5B406 (U3CUpdateValueSequenceU3Ed__19_tBFFFA4DC9BEB096B2B5840BE43FE60D341AAD7EB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MoreMountains.Feedbacks.MMFeedbackBase/<UpdateValueSequence>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateValueSequenceU3Ed__19_System_Collections_IEnumerator_Reset_mBFC4E0E3578131D42E0B6ADD277535CE87C7FB5E (U3CUpdateValueSequenceU3Ed__19_tBFFFA4DC9BEB096B2B5840BE43FE60D341AAD7EB * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdateValueSequenceU3Ed__19_System_Collections_IEnumerator_Reset_mBFC4E0E3578131D42E0B6ADD277535CE87C7FB5E_RuntimeMethod_var)));
	}
}
// System.Object MoreMountains.Feedbacks.MMFeedbackBase/<UpdateValueSequence>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUpdateValueSequenceU3Ed__19_System_Collections_IEnumerator_get_Current_mA0CBBD419CA2F389AA86C866194C38BEA0D8C8C6 (U3CUpdateValueSequenceU3Ed__19_tBFFFA4DC9BEB096B2B5840BE43FE60D341AAD7EB * __this, const RuntimeMethod* method)
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
// System.Void MoreMountains.Feedbacks.MMFeedbackFog/<FogSequence>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFogSequenceU3Ed__28__ctor_mCAF7EC8DCCF78CA99AF7DC525C398F6E0D972E29 (U3CFogSequenceU3Ed__28_t9921F5DCD7C86011CB1A878DEADD8E3446AEBA82 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MoreMountains.Feedbacks.MMFeedbackFog/<FogSequence>d__28::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFogSequenceU3Ed__28_System_IDisposable_Dispose_m9522B4268CC3C1A92928C9F56B3B59526D751B8A (U3CFogSequenceU3Ed__28_t9921F5DCD7C86011CB1A878DEADD8E3446AEBA82 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MoreMountains.Feedbacks.MMFeedbackFog/<FogSequence>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFogSequenceU3Ed__28_MoveNext_m5962CC94F925879575B539DF103A2B72B2336B75 (U3CFogSequenceU3Ed__28_t9921F5DCD7C86011CB1A878DEADD8E3446AEBA82 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2 * V_1 = NULL;
	float V_2 = 0.0f;
	U3CFogSequenceU3Ed__28_t9921F5DCD7C86011CB1A878DEADD8E3446AEBA82 * G_B4_0 = NULL;
	U3CFogSequenceU3Ed__28_t9921F5DCD7C86011CB1A878DEADD8E3446AEBA82 * G_B3_0 = NULL;
	float G_B5_0 = 0.0f;
	U3CFogSequenceU3Ed__28_t9921F5DCD7C86011CB1A878DEADD8E3446AEBA82 * G_B5_1 = NULL;
	float G_B8_0 = 0.0f;
	U3CFogSequenceU3Ed__28_t9921F5DCD7C86011CB1A878DEADD8E3446AEBA82 * G_B8_1 = NULL;
	float G_B7_0 = 0.0f;
	U3CFogSequenceU3Ed__28_t9921F5DCD7C86011CB1A878DEADD8E3446AEBA82 * G_B7_1 = NULL;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	U3CFogSequenceU3Ed__28_t9921F5DCD7C86011CB1A878DEADD8E3446AEBA82 * G_B9_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2 * L_1 = __this->get_U3CU3E4__this_2();
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
				goto IL_00af;
			}
			case 2:
			{
				goto IL_0111;
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
		MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2 * L_3 = V_1;
		NullCheck(L_3);
		VirtActionInvoker1< bool >::Invoke(14 /* System.Void MoreMountains.Feedbacks.MMFeedback::set_IsPlaying(System.Boolean) */, L_3, (bool)1);
		// float journey = NormalPlayDirection ? 0f : FeedbackDuration;
		MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2 * L_4 = V_1;
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
		MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2 * L_6 = V_1;
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
		G_B5_1->set_U3CjourneyU3E5__2_4(G_B5_0);
		goto IL_00b6;
	}

IL_004d:
	{
		// float remappedTime = MMFeedbacksHelpers.Remap(journey, 0f, FeedbackDuration, 0f, 1f);
		float L_8 = __this->get_U3CjourneyU3E5__2_4();
		MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2 * L_9 = V_1;
		NullCheck(L_9);
		float L_10;
		L_10 = VirtFuncInvoker0< float >::Invoke(16 /* System.Single MoreMountains.Feedbacks.MMFeedback::get_FeedbackDuration() */, L_9);
		float L_11;
		L_11 = MMFeedbacksHelpers_Remap_mF91639B3964272F011DC211808184EC25AF9571F(L_8, (0.0f), L_10, (0.0f), (1.0f), /*hidden argument*/NULL);
		V_2 = L_11;
		// SetFogValues(remappedTime, intensityMultiplier);
		MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2 * L_12 = V_1;
		float L_13 = V_2;
		float L_14 = __this->get_intensityMultiplier_3();
		NullCheck(L_12);
		VirtActionInvoker2< float, float >::Invoke(42 /* System.Void MoreMountains.Feedbacks.MMFeedbackFog::SetFogValues(System.Single,System.Single) */, L_12, L_13, L_14);
		// journey += NormalPlayDirection ? FeedbackDeltaTime : -FeedbackDeltaTime;
		float L_15 = __this->get_U3CjourneyU3E5__2_4();
		MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2 * L_16 = V_1;
		NullCheck(L_16);
		bool L_17;
		L_17 = VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean MoreMountains.Feedbacks.MMFeedback::get_NormalPlayDirection() */, L_16);
		G_B7_0 = L_15;
		G_B7_1 = __this;
		if (L_17)
		{
			G_B8_0 = L_15;
			G_B8_1 = __this;
			goto IL_0093;
		}
	}
	{
		MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2 * L_18 = V_1;
		NullCheck(L_18);
		float L_19;
		L_19 = MMFeedback_get_FeedbackDeltaTime_m3EF4F11444CD2F00CF1E656478EFC2EC0DF541E7(L_18, /*hidden argument*/NULL);
		G_B9_0 = ((-L_19));
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_0099;
	}

IL_0093:
	{
		MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2 * L_20 = V_1;
		NullCheck(L_20);
		float L_21;
		L_21 = MMFeedback_get_FeedbackDeltaTime_m3EF4F11444CD2F00CF1E656478EFC2EC0DF541E7(L_20, /*hidden argument*/NULL);
		G_B9_0 = L_21;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_0099:
	{
		NullCheck(G_B9_2);
		G_B9_2->set_U3CjourneyU3E5__2_4(((float)il2cpp_codegen_add((float)G_B9_1, (float)G_B9_0)));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00af:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00b6:
	{
		// while ((journey >= 0) && (journey <= FeedbackDuration) && (FeedbackDuration > 0))
		float L_22 = __this->get_U3CjourneyU3E5__2_4();
		if ((!(((float)L_22) >= ((float)(0.0f)))))
		{
			goto IL_00e1;
		}
	}
	{
		float L_23 = __this->get_U3CjourneyU3E5__2_4();
		MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2 * L_24 = V_1;
		NullCheck(L_24);
		float L_25;
		L_25 = VirtFuncInvoker0< float >::Invoke(16 /* System.Single MoreMountains.Feedbacks.MMFeedback::get_FeedbackDuration() */, L_24);
		if ((!(((float)L_23) <= ((float)L_25))))
		{
			goto IL_00e1;
		}
	}
	{
		MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2 * L_26 = V_1;
		NullCheck(L_26);
		float L_27;
		L_27 = VirtFuncInvoker0< float >::Invoke(16 /* System.Single MoreMountains.Feedbacks.MMFeedback::get_FeedbackDuration() */, L_26);
		if ((((float)L_27) > ((float)(0.0f))))
		{
			goto IL_004d;
		}
	}

IL_00e1:
	{
		// SetFogValues(FinalNormalizedTime, intensityMultiplier);
		MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2 * L_28 = V_1;
		MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2 * L_29 = V_1;
		NullCheck(L_29);
		float L_30;
		L_30 = VirtFuncInvoker0< float >::Invoke(35 /* System.Single MoreMountains.Feedbacks.MMFeedback::get_FinalNormalizedTime() */, L_29);
		float L_31 = __this->get_intensityMultiplier_3();
		NullCheck(L_28);
		VirtActionInvoker2< float, float >::Invoke(42 /* System.Void MoreMountains.Feedbacks.MMFeedbackFog::SetFogValues(System.Single,System.Single) */, L_28, L_30, L_31);
		// _coroutine = null;
		MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2 * L_32 = V_1;
		NullCheck(L_32);
		L_32->set__coroutine_50((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
		// IsPlaying = false;
		MMFeedbackFog_tDE54F585880569581CAEB7C56BED4DDEF361F8E2 * L_33 = V_1;
		NullCheck(L_33);
		VirtActionInvoker1< bool >::Invoke(14 /* System.Void MoreMountains.Feedbacks.MMFeedback::set_IsPlaying(System.Boolean) */, L_33, (bool)0);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0111:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object MoreMountains.Feedbacks.MMFeedbackFog/<FogSequence>d__28::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFogSequenceU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBB3DB1F10DCB9CEE70DF71B65E0418E38AA44558 (U3CFogSequenceU3Ed__28_t9921F5DCD7C86011CB1A878DEADD8E3446AEBA82 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MoreMountains.Feedbacks.MMFeedbackFog/<FogSequence>d__28::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFogSequenceU3Ed__28_System_Collections_IEnumerator_Reset_m88F79D340760B6703000C942FA0EE53C4E4A2CAB (U3CFogSequenceU3Ed__28_t9921F5DCD7C86011CB1A878DEADD8E3446AEBA82 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFogSequenceU3Ed__28_System_Collections_IEnumerator_Reset_m88F79D340760B6703000C942FA0EE53C4E4A2CAB_RuntimeMethod_var)));
	}
}
// System.Object MoreMountains.Feedbacks.MMFeedbackFog/<FogSequence>d__28::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFogSequenceU3Ed__28_System_Collections_IEnumerator_get_Current_m2E365DCDA6AA009D025F0A3BCB826047D17BC36E (U3CFogSequenceU3Ed__28_t9921F5DCD7C86011CB1A878DEADD8E3446AEBA82 * __this, const RuntimeMethod* method)
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
// System.Void MoreMountains.Feedbacks.MMFeedbackImageAlpha/<ImageSequence>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CImageSequenceU3Ed__19__ctor_mA37DD87118F2FD1B44D30943F0CEB74559AADD55 (U3CImageSequenceU3Ed__19_t8F1110C705CCCDDDA2DC9587B60821DDA4E7600F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MoreMountains.Feedbacks.MMFeedbackImageAlpha/<ImageSequence>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CImageSequenceU3Ed__19_System_IDisposable_Dispose_m1768D91FF601EAC2B045769F65DAF19F2E67C846 (U3CImageSequenceU3Ed__19_t8F1110C705CCCDDDA2DC9587B60821DDA4E7600F * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MoreMountains.Feedbacks.MMFeedbackImageAlpha/<ImageSequence>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CImageSequenceU3Ed__19_MoveNext_mE75910CFAC3D4F4DF06B1790C953FDDD94D53E9A (U3CImageSequenceU3Ed__19_t8F1110C705CCCDDDA2DC9587B60821DDA4E7600F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE * V_1 = NULL;
	float V_2 = 0.0f;
	U3CImageSequenceU3Ed__19_t8F1110C705CCCDDDA2DC9587B60821DDA4E7600F * G_B4_0 = NULL;
	U3CImageSequenceU3Ed__19_t8F1110C705CCCDDDA2DC9587B60821DDA4E7600F * G_B3_0 = NULL;
	float G_B5_0 = 0.0f;
	U3CImageSequenceU3Ed__19_t8F1110C705CCCDDDA2DC9587B60821DDA4E7600F * G_B5_1 = NULL;
	float G_B8_0 = 0.0f;
	U3CImageSequenceU3Ed__19_t8F1110C705CCCDDDA2DC9587B60821DDA4E7600F * G_B8_1 = NULL;
	float G_B7_0 = 0.0f;
	U3CImageSequenceU3Ed__19_t8F1110C705CCCDDDA2DC9587B60821DDA4E7600F * G_B7_1 = NULL;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	U3CImageSequenceU3Ed__19_t8F1110C705CCCDDDA2DC9587B60821DDA4E7600F * G_B9_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE * L_1 = __this->get_U3CU3E4__this_2();
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
				goto IL_00d0;
			}
			case 2:
			{
				goto IL_012c;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float journey = NormalPlayDirection ? 0f : FeedbackDuration;
		MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE * L_3 = V_1;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean MoreMountains.Feedbacks.MMFeedback::get_NormalPlayDirection() */, L_3);
		G_B3_0 = __this;
		if (L_4)
		{
			G_B4_0 = __this;
			goto IL_003a;
		}
	}
	{
		MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE * L_5 = V_1;
		NullCheck(L_5);
		float L_6;
		L_6 = VirtFuncInvoker0< float >::Invoke(16 /* System.Single MoreMountains.Feedbacks.MMFeedback::get_FeedbackDuration() */, L_5);
		G_B5_0 = L_6;
		G_B5_1 = G_B3_0;
		goto IL_003f;
	}

IL_003a:
	{
		G_B5_0 = (0.0f);
		G_B5_1 = G_B4_0;
	}

IL_003f:
	{
		NullCheck(G_B5_1);
		G_B5_1->set_U3CjourneyU3E5__2_3(G_B5_0);
		// _imageColor = BoundImage.color;
		MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE * L_7 = V_1;
		MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE * L_8 = V_1;
		NullCheck(L_8);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9 = L_8->get_BoundImage_29();
		NullCheck(L_9);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10;
		L_10 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_9);
		NullCheck(L_7);
		L_7->set__imageColor_39(L_10);
		// _initialAlpha = BoundImage.color.a;
		MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE * L_11 = V_1;
		MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE * L_12 = V_1;
		NullCheck(L_12);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_13 = L_12->get_BoundImage_29();
		NullCheck(L_13);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14;
		L_14 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_13);
		float L_15 = L_14.get_a_3();
		NullCheck(L_11);
		L_11->set__initialAlpha_40(L_15);
		// IsPlaying = true;
		MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE * L_16 = V_1;
		NullCheck(L_16);
		VirtActionInvoker1< bool >::Invoke(14 /* System.Void MoreMountains.Feedbacks.MMFeedback::set_IsPlaying(System.Boolean) */, L_16, (bool)1);
		goto IL_00d7;
	}

IL_0074:
	{
		// float remappedTime = MMFeedbacksHelpers.Remap(journey, 0f, FeedbackDuration, 0f, 1f);
		float L_17 = __this->get_U3CjourneyU3E5__2_3();
		MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE * L_18 = V_1;
		NullCheck(L_18);
		float L_19;
		L_19 = VirtFuncInvoker0< float >::Invoke(16 /* System.Single MoreMountains.Feedbacks.MMFeedback::get_FeedbackDuration() */, L_18);
		float L_20;
		L_20 = MMFeedbacksHelpers_Remap_mF91639B3964272F011DC211808184EC25AF9571F(L_17, (0.0f), L_19, (0.0f), (1.0f), /*hidden argument*/NULL);
		V_2 = L_20;
		// SetAlpha(remappedTime);
		MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE * L_21 = V_1;
		float L_22 = V_2;
		NullCheck(L_21);
		VirtActionInvoker1< float >::Invoke(42 /* System.Void MoreMountains.Feedbacks.MMFeedbackImageAlpha::SetAlpha(System.Single) */, L_21, L_22);
		// journey += NormalPlayDirection ? FeedbackDeltaTime : -FeedbackDeltaTime;
		float L_23 = __this->get_U3CjourneyU3E5__2_3();
		MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE * L_24 = V_1;
		NullCheck(L_24);
		bool L_25;
		L_25 = VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean MoreMountains.Feedbacks.MMFeedback::get_NormalPlayDirection() */, L_24);
		G_B7_0 = L_23;
		G_B7_1 = __this;
		if (L_25)
		{
			G_B8_0 = L_23;
			G_B8_1 = __this;
			goto IL_00b4;
		}
	}
	{
		MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE * L_26 = V_1;
		NullCheck(L_26);
		float L_27;
		L_27 = MMFeedback_get_FeedbackDeltaTime_m3EF4F11444CD2F00CF1E656478EFC2EC0DF541E7(L_26, /*hidden argument*/NULL);
		G_B9_0 = ((-L_27));
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_00ba;
	}

IL_00b4:
	{
		MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE * L_28 = V_1;
		NullCheck(L_28);
		float L_29;
		L_29 = MMFeedback_get_FeedbackDeltaTime_m3EF4F11444CD2F00CF1E656478EFC2EC0DF541E7(L_28, /*hidden argument*/NULL);
		G_B9_0 = L_29;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_00ba:
	{
		NullCheck(G_B9_2);
		G_B9_2->set_U3CjourneyU3E5__2_3(((float)il2cpp_codegen_add((float)G_B9_1, (float)G_B9_0)));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00d0:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00d7:
	{
		// while ((journey >= 0) && (journey <= FeedbackDuration) && (FeedbackDuration > 0))
		float L_30 = __this->get_U3CjourneyU3E5__2_3();
		if ((!(((float)L_30) >= ((float)(0.0f)))))
		{
			goto IL_0102;
		}
	}
	{
		float L_31 = __this->get_U3CjourneyU3E5__2_3();
		MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE * L_32 = V_1;
		NullCheck(L_32);
		float L_33;
		L_33 = VirtFuncInvoker0< float >::Invoke(16 /* System.Single MoreMountains.Feedbacks.MMFeedback::get_FeedbackDuration() */, L_32);
		if ((!(((float)L_31) <= ((float)L_33))))
		{
			goto IL_0102;
		}
	}
	{
		MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE * L_34 = V_1;
		NullCheck(L_34);
		float L_35;
		L_35 = VirtFuncInvoker0< float >::Invoke(16 /* System.Single MoreMountains.Feedbacks.MMFeedback::get_FeedbackDuration() */, L_34);
		if ((((float)L_35) > ((float)(0.0f))))
		{
			goto IL_0074;
		}
	}

IL_0102:
	{
		// SetAlpha(FinalNormalizedTime);
		MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE * L_36 = V_1;
		MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE * L_37 = V_1;
		NullCheck(L_37);
		float L_38;
		L_38 = VirtFuncInvoker0< float >::Invoke(35 /* System.Single MoreMountains.Feedbacks.MMFeedback::get_FinalNormalizedTime() */, L_37);
		NullCheck(L_36);
		VirtActionInvoker1< float >::Invoke(42 /* System.Void MoreMountains.Feedbacks.MMFeedbackImageAlpha::SetAlpha(System.Single) */, L_36, L_38);
		// _coroutine = null;
		MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE * L_39 = V_1;
		NullCheck(L_39);
		L_39->set__coroutine_38((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
		// IsPlaying = false;
		MMFeedbackImageAlpha_t8B58EA9D6802F0F24B0B4492C7EC937BD94578DE * L_40 = V_1;
		NullCheck(L_40);
		VirtActionInvoker1< bool >::Invoke(14 /* System.Void MoreMountains.Feedbacks.MMFeedback::set_IsPlaying(System.Boolean) */, L_40, (bool)0);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_012c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object MoreMountains.Feedbacks.MMFeedbackImageAlpha/<ImageSequence>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CImageSequenceU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC2F5B29BBB37E370A6A6FA817B2583007F31C67E (U3CImageSequenceU3Ed__19_t8F1110C705CCCDDDA2DC9587B60821DDA4E7600F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MoreMountains.Feedbacks.MMFeedbackImageAlpha/<ImageSequence>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CImageSequenceU3Ed__19_System_Collections_IEnumerator_Reset_m66002730BD87B5637D3A60813D59AFB71AF9104E (U3CImageSequenceU3Ed__19_t8F1110C705CCCDDDA2DC9587B60821DDA4E7600F * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CImageSequenceU3Ed__19_System_Collections_IEnumerator_Reset_m66002730BD87B5637D3A60813D59AFB71AF9104E_RuntimeMethod_var)));
	}
}
// System.Object MoreMountains.Feedbacks.MMFeedbackImageAlpha/<ImageSequence>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CImageSequenceU3Ed__19_System_Collections_IEnumerator_get_Current_m227F3889A1081264152CD427D5BD5424EF80D8D4 (U3CImageSequenceU3Ed__19_t8F1110C705CCCDDDA2DC9587B60821DDA4E7600F * __this, const RuntimeMethod* method)
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
// System.Void MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound/<TestPlaySound>d__47::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTestPlaySoundU3Ed__47_MoveNext_m4229620AF111AED7E0ADF6E3219CCED02098A4E4 (U3CTestPlaySoundU3Ed__47_t34D4D55F28F0D099E86F571722BA46997FBC0E95 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CTestPlaySoundU3Ed__47_t34D4D55F28F0D099E86F571722BA46997FBC0E95_m76D574DCB1A78642731A492220F67F7F04038EC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CF1C526BD3872B6F7B223B157F80669490DCBCF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6524BEAD3BC85019058034D3B90F6AAD25D87885);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9706EC31E2B043535F43A0B97CC1AA2377F4A865);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB * V_1 = NULL;
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * V_2 = NULL;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0155;
			}
		}

IL_0014:
		{
			// AudioClip tmpAudioClip = null;
			V_2 = (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)NULL;
			// if (Sfx != null)
			MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB * L_3 = V_1;
			NullCheck(L_3);
			AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_4 = L_3->get_Sfx_29();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_5;
			L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_002b;
			}
		}

IL_0024:
		{
			// tmpAudioClip = Sfx;
			MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB * L_6 = V_1;
			NullCheck(L_6);
			AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_7 = L_6->get_Sfx_29();
			V_2 = L_7;
		}

IL_002b:
		{
			// if (RandomSfx.Length > 0)
			MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB * L_8 = V_1;
			NullCheck(L_8);
			AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_9 = L_8->get_RandomSfx_30();
			NullCheck(L_9);
			if (!(((RuntimeArray*)L_9)->max_length))
			{
				goto IL_004a;
			}
		}

IL_0034:
		{
			// tmpAudioClip = RandomSfx[Random.Range(0, RandomSfx.Length)];
			MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB * L_10 = V_1;
			NullCheck(L_10);
			AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_11 = L_10->get_RandomSfx_30();
			MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB * L_12 = V_1;
			NullCheck(L_12);
			AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_13 = L_12->get_RandomSfx_30();
			NullCheck(L_13);
			int32_t L_14;
			L_14 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))), /*hidden argument*/NULL);
			NullCheck(L_11);
			int32_t L_15 = L_14;
			AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_16 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
			V_2 = L_16;
		}

IL_004a:
		{
			// if (tmpAudioClip == null)
			AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_17 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_18;
			L_18 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_17, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_18)
			{
				goto IL_007d;
			}
		}

IL_0053:
		{
			// Debug.LogError(Label + " on " + this.gameObject.name + " can't play in editor mode, you haven't set its Sfx.");
			MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB * L_19 = V_1;
			NullCheck(L_19);
			String_t* L_20 = ((MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4 *)L_19)->get_Label_5();
			MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB * L_21 = V_1;
			NullCheck(L_21);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
			L_22 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_21, /*hidden argument*/NULL);
			NullCheck(L_22);
			String_t* L_23;
			L_23 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_22, /*hidden argument*/NULL);
			String_t* L_24;
			L_24 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_20, _stringLiteral0CF1C526BD3872B6F7B223B157F80669490DCBCF, L_23, _stringLiteral9706EC31E2B043535F43A0B97CC1AA2377F4A865, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_24, /*hidden argument*/NULL);
			// return;
			goto IL_01a6;
		}

IL_007d:
		{
			// float volume = Random.Range(MinVolume, MaxVolume);
			MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB * L_25 = V_1;
			NullCheck(L_25);
			float L_26 = L_25->get_MinVolume_33();
			MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB * L_27 = V_1;
			NullCheck(L_27);
			float L_28 = L_27->get_MaxVolume_34();
			float L_29;
			L_29 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_26, L_28, /*hidden argument*/NULL);
			V_3 = L_29;
			// float pitch = Random.Range(MinPitch, MaxPitch);
			MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB * L_30 = V_1;
			NullCheck(L_30);
			float L_31 = L_30->get_MinPitch_35();
			MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB * L_32 = V_1;
			NullCheck(L_32);
			float L_33 = L_32->get_MaxPitch_36();
			float L_34;
			L_34 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_31, L_33, /*hidden argument*/NULL);
			V_4 = L_34;
			// GameObject temporaryAudioHost = new GameObject("EditorTestAS_WillAutoDestroy");
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
			GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_35, _stringLiteral6524BEAD3BC85019058034D3B90F6AAD25D87885, /*hidden argument*/NULL);
			__this->set_U3CtemporaryAudioHostU3E5__2_3(L_35);
			// SceneManager.MoveGameObjectToScene(temporaryAudioHost.gameObject, this.gameObject.scene);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = __this->get_U3CtemporaryAudioHostU3E5__2_3();
			NullCheck(L_36);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37;
			L_37 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_36, /*hidden argument*/NULL);
			MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB * L_38 = V_1;
			NullCheck(L_38);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39;
			L_39 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_38, /*hidden argument*/NULL);
			NullCheck(L_39);
			Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_40;
			L_40 = GameObject_get_scene_m7EBF95ABB5037FEE6811928F2E83C769C53F86C2(L_39, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
			SceneManager_MoveGameObjectToScene_m6A83C5A83445385BC00FBFD155707732A0C80F39(L_37, L_40, /*hidden argument*/NULL);
			// temporaryAudioHost.transform.position = this.transform.position;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = __this->get_U3CtemporaryAudioHostU3E5__2_3();
			NullCheck(L_41);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
			L_42 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_41, /*hidden argument*/NULL);
			MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB * L_43 = V_1;
			NullCheck(L_43);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
			L_44 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_43, /*hidden argument*/NULL);
			NullCheck(L_44);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
			L_45 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_44, /*hidden argument*/NULL);
			NullCheck(L_42);
			Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_42, L_45, /*hidden argument*/NULL);
			// _editorAudioSource = temporaryAudioHost.AddComponent<AudioSource>() as AudioSource;
			MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB * L_46 = V_1;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47 = __this->get_U3CtemporaryAudioHostU3E5__2_3();
			NullCheck(L_47);
			AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_48;
			L_48 = GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76(L_47, /*hidden argument*/GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var);
			NullCheck(L_46);
			L_46->set__editorAudioSource_66(L_48);
			// PlayAudioSource(_editorAudioSource, tmpAudioClip, volume, pitch, 0);
			MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB * L_49 = V_1;
			MMFeedbackMMSoundManagerSound_t8C9E649D80966DCEA682F34BF82253AF2E114BBB * L_50 = V_1;
			NullCheck(L_50);
			AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_51 = L_50->get__editorAudioSource_66();
			AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_52 = V_2;
			float L_53 = V_3;
			float L_54 = V_4;
			NullCheck(L_49);
			VirtActionInvoker5< AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *, float, float, int32_t >::Invoke(45 /* System.Void MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound::PlayAudioSource(UnityEngine.AudioSource,UnityEngine.AudioClip,System.Single,System.Single,System.Int32) */, L_49, L_51, L_52, L_53, L_54, 0);
			// float length = 1000 * tmpAudioClip.length;
			AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_55 = V_2;
			NullCheck(L_55);
			float L_56;
			L_56 = AudioClip_get_length_m2223F2281D853F847BE0048620BA6F61F26440E4(L_55, /*hidden argument*/NULL);
			// length = length / Mathf.Abs(pitch);
			float L_57 = V_4;
			float L_58;
			L_58 = fabsf(L_57);
			// await Task.Delay((int)length);
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_59;
			L_59 = Task_Delay_mD54722DBAF22507493263E9B1167A7F77EDDF80E(il2cpp_codegen_cast_double_to_int<int32_t>(((float)((float)((float)il2cpp_codegen_multiply((float)(1000.0f), (float)L_56))/(float)L_58))), /*hidden argument*/NULL);
			NullCheck(L_59);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_60;
			L_60 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_59, /*hidden argument*/NULL);
			V_5 = L_60;
			bool L_61;
			L_61 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_5), /*hidden argument*/NULL);
			if (L_61)
			{
				goto IL_0172;
			}
		}

IL_0134:
		{
			int32_t L_62 = 0;
			V_0 = L_62;
			__this->set_U3CU3E1__state_0(L_62);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_63 = V_5;
			__this->set_U3CU3Eu__1_4(L_63);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_64 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CTestPlaySoundU3Ed__47_t34D4D55F28F0D099E86F571722BA46997FBC0E95_m76D574DCB1A78642731A492220F67F7F04038EC5((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_64, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_5), (U3CTestPlaySoundU3Ed__47_t34D4D55F28F0D099E86F571722BA46997FBC0E95 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CTestPlaySoundU3Ed__47_t34D4D55F28F0D099E86F571722BA46997FBC0E95_m76D574DCB1A78642731A492220F67F7F04038EC5_RuntimeMethod_var);
			goto IL_01c0;
		}

IL_0155:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_65 = __this->get_U3CU3Eu__1_4();
			V_5 = L_65;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_66 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_66, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_67 = (-1);
			V_0 = L_67;
			__this->set_U3CU3E1__state_0(L_67);
		}

IL_0172:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_5), /*hidden argument*/NULL);
			// DestroyImmediate(temporaryAudioHost);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_68 = __this->get_U3CtemporaryAudioHostU3E5__2_3();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_68, /*hidden argument*/NULL);
			goto IL_01a6;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0186;
		}
		throw e;
	}

CATCH_0186:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CtemporaryAudioHostU3E5__2_3((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_69 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_70 = V_6;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_69, L_70, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01c0;
	} // end catch (depth: 1)

IL_01a6:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CtemporaryAudioHostU3E5__2_3((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_71 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_71, /*hidden argument*/NULL);
	}

IL_01c0:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CTestPlaySoundU3Ed__47_MoveNext_m4229620AF111AED7E0ADF6E3219CCED02098A4E4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CTestPlaySoundU3Ed__47_t34D4D55F28F0D099E86F571722BA46997FBC0E95 * _thisAdjusted = reinterpret_cast<U3CTestPlaySoundU3Ed__47_t34D4D55F28F0D099E86F571722BA46997FBC0E95 *>(__this + _offset);
	U3CTestPlaySoundU3Ed__47_MoveNext_m4229620AF111AED7E0ADF6E3219CCED02098A4E4(_thisAdjusted, method);
}
// System.Void MoreMountains.Feedbacks.MMFeedbackMMSoundManagerSound/<TestPlaySound>d__47::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTestPlaySoundU3Ed__47_SetStateMachine_m1B877C786D084CBD98D5149249287C997E25E2F3 (U3CTestPlaySoundU3Ed__47_t34D4D55F28F0D099E86F571722BA46997FBC0E95 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CTestPlaySoundU3Ed__47_SetStateMachine_m1B877C786D084CBD98D5149249287C997E25E2F3_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CTestPlaySoundU3Ed__47_t34D4D55F28F0D099E86F571722BA46997FBC0E95 * _thisAdjusted = reinterpret_cast<U3CTestPlaySoundU3Ed__47_t34D4D55F28F0D099E86F571722BA46997FBC0E95 *>(__this + _offset);
	U3CTestPlaySoundU3Ed__47_SetStateMachine_m1B877C786D084CBD98D5149249287C997E25E2F3(_thisAdjusted, ___stateMachine0, method);
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
// System.Void MoreMountains.Feedbacks.MMFeedbackProperty/<UpdateValueSequence>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateValueSequenceU3Ed__18__ctor_mC82CB1B1AC9C08C52E8F1CA2F331FB5F2064F3AC (U3CUpdateValueSequenceU3Ed__18_tBE0124C712FDD6CE1915C9AE0F6B92E1BBCE3451 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MoreMountains.Feedbacks.MMFeedbackProperty/<UpdateValueSequence>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateValueSequenceU3Ed__18_System_IDisposable_Dispose_m489B292D15B11A90E4C2C9A5E9318E60E2902C8D (U3CUpdateValueSequenceU3Ed__18_tBE0124C712FDD6CE1915C9AE0F6B92E1BBCE3451 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MoreMountains.Feedbacks.MMFeedbackProperty/<UpdateValueSequence>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUpdateValueSequenceU3Ed__18_MoveNext_m597A5660B20E23B58B4F3A5AC59BC9DAFB099CA6 (U3CUpdateValueSequenceU3Ed__18_tBE0124C712FDD6CE1915C9AE0F6B92E1BBCE3451 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	MMFeedbackProperty_tD231512F1C1F4D5B36F24A02C90A27E609DEB987 * V_1 = NULL;
	float V_2 = 0.0f;
	U3CUpdateValueSequenceU3Ed__18_tBE0124C712FDD6CE1915C9AE0F6B92E1BBCE3451 * G_B4_0 = NULL;
	U3CUpdateValueSequenceU3Ed__18_tBE0124C712FDD6CE1915C9AE0F6B92E1BBCE3451 * G_B3_0 = NULL;
	float G_B5_0 = 0.0f;
	U3CUpdateValueSequenceU3Ed__18_tBE0124C712FDD6CE1915C9AE0F6B92E1BBCE3451 * G_B5_1 = NULL;
	float G_B8_0 = 0.0f;
	U3CUpdateValueSequenceU3Ed__18_tBE0124C712FDD6CE1915C9AE0F6B92E1BBCE3451 * G_B8_1 = NULL;
	float G_B7_0 = 0.0f;
	U3CUpdateValueSequenceU3Ed__18_tBE0124C712FDD6CE1915C9AE0F6B92E1BBCE3451 * G_B7_1 = NULL;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	U3CUpdateValueSequenceU3Ed__18_tBE0124C712FDD6CE1915C9AE0F6B92E1BBCE3451 * G_B9_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MMFeedbackProperty_tD231512F1C1F4D5B36F24A02C90A27E609DEB987 * L_1 = __this->get_U3CU3E4__this_2();
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
				goto IL_00a8;
			}
			case 2:
			{
				goto IL_0112;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float journey = NormalPlayDirection ? 0f : FeedbackDuration;
		MMFeedbackProperty_tD231512F1C1F4D5B36F24A02C90A27E609DEB987 * L_3 = V_1;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean MoreMountains.Feedbacks.MMFeedback::get_NormalPlayDirection() */, L_3);
		G_B3_0 = __this;
		if (L_4)
		{
			G_B4_0 = __this;
			goto IL_003a;
		}
	}
	{
		MMFeedbackProperty_tD231512F1C1F4D5B36F24A02C90A27E609DEB987 * L_5 = V_1;
		NullCheck(L_5);
		float L_6;
		L_6 = VirtFuncInvoker0< float >::Invoke(16 /* System.Single MoreMountains.Feedbacks.MMFeedback::get_FeedbackDuration() */, L_5);
		G_B5_0 = L_6;
		G_B5_1 = G_B3_0;
		goto IL_003f;
	}

IL_003a:
	{
		G_B5_0 = (0.0f);
		G_B5_1 = G_B4_0;
	}

IL_003f:
	{
		NullCheck(G_B5_1);
		G_B5_1->set_U3CjourneyU3E5__2_4(G_B5_0);
		goto IL_00af;
	}

IL_0046:
	{
		// float remappedTime = MMFeedbacksHelpers.Remap(journey, 0f, FeedbackDuration, 0f, 1f);
		float L_7 = __this->get_U3CjourneyU3E5__2_4();
		MMFeedbackProperty_tD231512F1C1F4D5B36F24A02C90A27E609DEB987 * L_8 = V_1;
		NullCheck(L_8);
		float L_9;
		L_9 = VirtFuncInvoker0< float >::Invoke(16 /* System.Single MoreMountains.Feedbacks.MMFeedback::get_FeedbackDuration() */, L_8);
		float L_10;
		L_10 = MMFeedbacksHelpers_Remap_mF91639B3964272F011DC211808184EC25AF9571F(L_7, (0.0f), L_9, (0.0f), (1.0f), /*hidden argument*/NULL);
		V_2 = L_10;
		// SetValues(remappedTime, intensityMultiplier);
		MMFeedbackProperty_tD231512F1C1F4D5B36F24A02C90A27E609DEB987 * L_11 = V_1;
		float L_12 = V_2;
		float L_13 = __this->get_intensityMultiplier_3();
		NullCheck(L_11);
		VirtActionInvoker2< float, float >::Invoke(42 /* System.Void MoreMountains.Feedbacks.MMFeedbackProperty::SetValues(System.Single,System.Single) */, L_11, L_12, L_13);
		// journey += NormalPlayDirection ? FeedbackDeltaTime : -FeedbackDeltaTime;
		float L_14 = __this->get_U3CjourneyU3E5__2_4();
		MMFeedbackProperty_tD231512F1C1F4D5B36F24A02C90A27E609DEB987 * L_15 = V_1;
		NullCheck(L_15);
		bool L_16;
		L_16 = VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean MoreMountains.Feedbacks.MMFeedback::get_NormalPlayDirection() */, L_15);
		G_B7_0 = L_14;
		G_B7_1 = __this;
		if (L_16)
		{
			G_B8_0 = L_14;
			G_B8_1 = __this;
			goto IL_008c;
		}
	}
	{
		MMFeedbackProperty_tD231512F1C1F4D5B36F24A02C90A27E609DEB987 * L_17 = V_1;
		NullCheck(L_17);
		float L_18;
		L_18 = MMFeedback_get_FeedbackDeltaTime_m3EF4F11444CD2F00CF1E656478EFC2EC0DF541E7(L_17, /*hidden argument*/NULL);
		G_B9_0 = ((-L_18));
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_0092;
	}

IL_008c:
	{
		MMFeedbackProperty_tD231512F1C1F4D5B36F24A02C90A27E609DEB987 * L_19 = V_1;
		NullCheck(L_19);
		float L_20;
		L_20 = MMFeedback_get_FeedbackDeltaTime_m3EF4F11444CD2F00CF1E656478EFC2EC0DF541E7(L_19, /*hidden argument*/NULL);
		G_B9_0 = L_20;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_0092:
	{
		NullCheck(G_B9_2);
		G_B9_2->set_U3CjourneyU3E5__2_4(((float)il2cpp_codegen_add((float)G_B9_1, (float)G_B9_0)));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00a8:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00af:
	{
		// while ((journey >= 0) && (journey <= FeedbackDuration) && (FeedbackDuration > 0))
		float L_21 = __this->get_U3CjourneyU3E5__2_4();
		if ((!(((float)L_21) >= ((float)(0.0f)))))
		{
			goto IL_00da;
		}
	}
	{
		float L_22 = __this->get_U3CjourneyU3E5__2_4();
		MMFeedbackProperty_tD231512F1C1F4D5B36F24A02C90A27E609DEB987 * L_23 = V_1;
		NullCheck(L_23);
		float L_24;
		L_24 = VirtFuncInvoker0< float >::Invoke(16 /* System.Single MoreMountains.Feedbacks.MMFeedback::get_FeedbackDuration() */, L_23);
		if ((!(((float)L_22) <= ((float)L_24))))
		{
			goto IL_00da;
		}
	}
	{
		MMFeedbackProperty_tD231512F1C1F4D5B36F24A02C90A27E609DEB987 * L_25 = V_1;
		NullCheck(L_25);
		float L_26;
		L_26 = VirtFuncInvoker0< float >::Invoke(16 /* System.Single MoreMountains.Feedbacks.MMFeedback::get_FeedbackDuration() */, L_25);
		if ((((float)L_26) > ((float)(0.0f))))
		{
			goto IL_0046;
		}
	}

IL_00da:
	{
		// SetValues(FinalNormalizedTime, intensityMultiplier);
		MMFeedbackProperty_tD231512F1C1F4D5B36F24A02C90A27E609DEB987 * L_27 = V_1;
		MMFeedbackProperty_tD231512F1C1F4D5B36F24A02C90A27E609DEB987 * L_28 = V_1;
		NullCheck(L_28);
		float L_29;
		L_29 = VirtFuncInvoker0< float >::Invoke(35 /* System.Single MoreMountains.Feedbacks.MMFeedback::get_FinalNormalizedTime() */, L_28);
		float L_30 = __this->get_intensityMultiplier_3();
		NullCheck(L_27);
		VirtActionInvoker2< float, float >::Invoke(42 /* System.Void MoreMountains.Feedbacks.MMFeedbackProperty::SetValues(System.Single,System.Single) */, L_27, L_29, L_30);
		// if (StartsOff)
		MMFeedbackProperty_tD231512F1C1F4D5B36F24A02C90A27E609DEB987 * L_31 = V_1;
		NullCheck(L_31);
		bool L_32 = L_31->get_StartsOff_31();
		if (!L_32)
		{
			goto IL_00fb;
		}
	}
	{
		// Turn(false);
		MMFeedbackProperty_tD231512F1C1F4D5B36F24A02C90A27E609DEB987 * L_33 = V_1;
		NullCheck(L_33);
		VirtActionInvoker1< bool >::Invoke(43 /* System.Void MoreMountains.Feedbacks.MMFeedbackProperty::Turn(System.Boolean) */, L_33, (bool)0);
	}

IL_00fb:
	{
		// _coroutine = null;
		MMFeedbackProperty_tD231512F1C1F4D5B36F24A02C90A27E609DEB987 * L_34 = V_1;
		NullCheck(L_34);
		L_34->set__coroutine_39((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0112:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object MoreMountains.Feedbacks.MMFeedbackProperty/<UpdateValueSequence>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUpdateValueSequenceU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m089CC1ADF8047CEC8FEF01C474D8C694E4158D85 (U3CUpdateValueSequenceU3Ed__18_tBE0124C712FDD6CE1915C9AE0F6B92E1BBCE3451 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MoreMountains.Feedbacks.MMFeedbackProperty/<UpdateValueSequence>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateValueSequenceU3Ed__18_System_Collections_IEnumerator_Reset_mE853E9AC40660D1056A9AD2F6E43DBEC2E34ACCC (U3CUpdateValueSequenceU3Ed__18_tBE0124C712FDD6CE1915C9AE0F6B92E1BBCE3451 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdateValueSequenceU3Ed__18_System_Collections_IEnumerator_Reset_mE853E9AC40660D1056A9AD2F6E43DBEC2E34ACCC_RuntimeMethod_var)));
	}
}
// System.Object MoreMountains.Feedbacks.MMFeedbackProperty/<UpdateValueSequence>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUpdateValueSequenceU3Ed__18_System_Collections_IEnumerator_get_Current_m0CDB2D36F8F6A1ABA503FB604C6FB8998E4AF824 (U3CUpdateValueSequenceU3Ed__18_tBE0124C712FDD6CE1915C9AE0F6B92E1BBCE3451 * __this, const RuntimeMethod* method)
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
// System.Void MoreMountains.Feedbacks.MMFeedbackSound/<TestPlaySound>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTestPlaySoundU3Ed__28_MoveNext_m962BDDC76F73C17F8B41412BDEF0CAF7E2BCCC0E (U3CTestPlaySoundU3Ed__28_t9DDF20BAA74EEFB92905046D489853DF097A7A8C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CTestPlaySoundU3Ed__28_t9DDF20BAA74EEFB92905046D489853DF097A7A8C_m78CAE59C8FC9823654AC053CCDA749101BBD7B10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CF1C526BD3872B6F7B223B157F80669490DCBCF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6524BEAD3BC85019058034D3B90F6AAD25D87885);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9706EC31E2B043535F43A0B97CC1AA2377F4A865);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8 * V_1 = NULL;
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * V_2 = NULL;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_014e;
			}
		}

IL_0014:
		{
			// AudioClip tmpAudioClip = null;
			V_2 = (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)NULL;
			// if (Sfx != null)
			MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8 * L_3 = V_1;
			NullCheck(L_3);
			AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_4 = L_3->get_Sfx_29();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_5;
			L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_002b;
			}
		}

IL_0024:
		{
			// tmpAudioClip = Sfx;
			MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8 * L_6 = V_1;
			NullCheck(L_6);
			AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_7 = L_6->get_Sfx_29();
			V_2 = L_7;
		}

IL_002b:
		{
			// if (RandomSfx.Length > 0)
			MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8 * L_8 = V_1;
			NullCheck(L_8);
			AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_9 = L_8->get_RandomSfx_30();
			NullCheck(L_9);
			if (!(((RuntimeArray*)L_9)->max_length))
			{
				goto IL_004a;
			}
		}

IL_0034:
		{
			// tmpAudioClip = RandomSfx[Random.Range(0, RandomSfx.Length)];
			MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8 * L_10 = V_1;
			NullCheck(L_10);
			AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_11 = L_10->get_RandomSfx_30();
			MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8 * L_12 = V_1;
			NullCheck(L_12);
			AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_13 = L_12->get_RandomSfx_30();
			NullCheck(L_13);
			int32_t L_14;
			L_14 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))), /*hidden argument*/NULL);
			NullCheck(L_11);
			int32_t L_15 = L_14;
			AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_16 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
			V_2 = L_16;
		}

IL_004a:
		{
			// if (tmpAudioClip == null)
			AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_17 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_18;
			L_18 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_17, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_18)
			{
				goto IL_007d;
			}
		}

IL_0053:
		{
			// Debug.LogError(Label + " on " + this.gameObject.name + " can't play in editor mode, you haven't set its Sfx.");
			MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8 * L_19 = V_1;
			NullCheck(L_19);
			String_t* L_20 = ((MMFeedback_t2F8D23D2254B4FDA6B88DE22430F36F4FC5880C4 *)L_19)->get_Label_5();
			MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8 * L_21 = V_1;
			NullCheck(L_21);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
			L_22 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_21, /*hidden argument*/NULL);
			NullCheck(L_22);
			String_t* L_23;
			L_23 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_22, /*hidden argument*/NULL);
			String_t* L_24;
			L_24 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_20, _stringLiteral0CF1C526BD3872B6F7B223B157F80669490DCBCF, L_23, _stringLiteral9706EC31E2B043535F43A0B97CC1AA2377F4A865, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_24, /*hidden argument*/NULL);
			// return;
			goto IL_019f;
		}

IL_007d:
		{
			// float volume = Random.Range(MinVolume, MaxVolume);
			MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8 * L_25 = V_1;
			NullCheck(L_25);
			float L_26 = L_25->get_MinVolume_35();
			MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8 * L_27 = V_1;
			NullCheck(L_27);
			float L_28 = L_27->get_MaxVolume_36();
			float L_29;
			L_29 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_26, L_28, /*hidden argument*/NULL);
			V_3 = L_29;
			// float pitch = Random.Range(MinPitch, MaxPitch);
			MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8 * L_30 = V_1;
			NullCheck(L_30);
			float L_31 = L_30->get_MinPitch_37();
			MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8 * L_32 = V_1;
			NullCheck(L_32);
			float L_33 = L_32->get_MaxPitch_38();
			float L_34;
			L_34 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_31, L_33, /*hidden argument*/NULL);
			V_4 = L_34;
			// GameObject temporaryAudioHost = new GameObject("EditorTestAS_WillAutoDestroy");
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
			GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_35, _stringLiteral6524BEAD3BC85019058034D3B90F6AAD25D87885, /*hidden argument*/NULL);
			__this->set_U3CtemporaryAudioHostU3E5__2_3(L_35);
			// SceneManager.MoveGameObjectToScene(temporaryAudioHost.gameObject, this.gameObject.scene);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = __this->get_U3CtemporaryAudioHostU3E5__2_3();
			NullCheck(L_36);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37;
			L_37 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_36, /*hidden argument*/NULL);
			MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8 * L_38 = V_1;
			NullCheck(L_38);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39;
			L_39 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_38, /*hidden argument*/NULL);
			NullCheck(L_39);
			Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_40;
			L_40 = GameObject_get_scene_m7EBF95ABB5037FEE6811928F2E83C769C53F86C2(L_39, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
			SceneManager_MoveGameObjectToScene_m6A83C5A83445385BC00FBFD155707732A0C80F39(L_37, L_40, /*hidden argument*/NULL);
			// temporaryAudioHost.transform.position = this.transform.position;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = __this->get_U3CtemporaryAudioHostU3E5__2_3();
			NullCheck(L_41);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
			L_42 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_41, /*hidden argument*/NULL);
			MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8 * L_43 = V_1;
			NullCheck(L_43);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
			L_44 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_43, /*hidden argument*/NULL);
			NullCheck(L_44);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
			L_45 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_44, /*hidden argument*/NULL);
			NullCheck(L_42);
			Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_42, L_45, /*hidden argument*/NULL);
			// _editorAudioSource = temporaryAudioHost.AddComponent<AudioSource>() as AudioSource;
			MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8 * L_46 = V_1;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47 = __this->get_U3CtemporaryAudioHostU3E5__2_3();
			NullCheck(L_47);
			AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_48;
			L_48 = GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76(L_47, /*hidden argument*/GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var);
			NullCheck(L_46);
			L_46->set__editorAudioSource_45(L_48);
			// PlayAudioSource(_editorAudioSource, tmpAudioClip, volume, pitch, 0);
			MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8 * L_49 = V_1;
			MMFeedbackSound_t037DF4049279599309EA50CF053D415FAC7696F8 * L_50 = V_1;
			NullCheck(L_50);
			AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_51 = L_50->get__editorAudioSource_45();
			AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_52 = V_2;
			float L_53 = V_3;
			float L_54 = V_4;
			NullCheck(L_49);
			VirtActionInvoker6< AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *, float, float, int32_t, AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * >::Invoke(44 /* System.Void MoreMountains.Feedbacks.MMFeedbackSound::PlayAudioSource(UnityEngine.AudioSource,UnityEngine.AudioClip,System.Single,System.Single,System.Int32,UnityEngine.Audio.AudioMixerGroup) */, L_49, L_51, L_52, L_53, L_54, 0, (AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F *)NULL);
			// float length = 1000 * tmpAudioClip.length;
			AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_55 = V_2;
			NullCheck(L_55);
			float L_56;
			L_56 = AudioClip_get_length_m2223F2281D853F847BE0048620BA6F61F26440E4(L_55, /*hidden argument*/NULL);
			// await Task.Delay((int)length);
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_57;
			L_57 = Task_Delay_mD54722DBAF22507493263E9B1167A7F77EDDF80E(il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply((float)(1000.0f), (float)L_56))), /*hidden argument*/NULL);
			NullCheck(L_57);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_58;
			L_58 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_57, /*hidden argument*/NULL);
			V_5 = L_58;
			bool L_59;
			L_59 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_5), /*hidden argument*/NULL);
			if (L_59)
			{
				goto IL_016b;
			}
		}

IL_012d:
		{
			int32_t L_60 = 0;
			V_0 = L_60;
			__this->set_U3CU3E1__state_0(L_60);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_61 = V_5;
			__this->set_U3CU3Eu__1_4(L_61);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_62 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CTestPlaySoundU3Ed__28_t9DDF20BAA74EEFB92905046D489853DF097A7A8C_m78CAE59C8FC9823654AC053CCDA749101BBD7B10((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_62, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_5), (U3CTestPlaySoundU3Ed__28_t9DDF20BAA74EEFB92905046D489853DF097A7A8C *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CTestPlaySoundU3Ed__28_t9DDF20BAA74EEFB92905046D489853DF097A7A8C_m78CAE59C8FC9823654AC053CCDA749101BBD7B10_RuntimeMethod_var);
			goto IL_01b9;
		}

IL_014e:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_63 = __this->get_U3CU3Eu__1_4();
			V_5 = L_63;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_64 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_64, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_65 = (-1);
			V_0 = L_65;
			__this->set_U3CU3E1__state_0(L_65);
		}

IL_016b:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_5), /*hidden argument*/NULL);
			// DestroyImmediate(temporaryAudioHost);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_66 = __this->get_U3CtemporaryAudioHostU3E5__2_3();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_66, /*hidden argument*/NULL);
			goto IL_019f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_017f;
		}
		throw e;
	}

CATCH_017f:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CtemporaryAudioHostU3E5__2_3((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_67 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_68 = V_6;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_67, L_68, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01b9;
	} // end catch (depth: 1)

IL_019f:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CtemporaryAudioHostU3E5__2_3((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_69 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_69, /*hidden argument*/NULL);
	}

IL_01b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CTestPlaySoundU3Ed__28_MoveNext_m962BDDC76F73C17F8B41412BDEF0CAF7E2BCCC0E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CTestPlaySoundU3Ed__28_t9DDF20BAA74EEFB92905046D489853DF097A7A8C * _thisAdjusted = reinterpret_cast<U3CTestPlaySoundU3Ed__28_t9DDF20BAA74EEFB92905046D489853DF097A7A8C *>(__this + _offset);
	U3CTestPlaySoundU3Ed__28_MoveNext_m962BDDC76F73C17F8B41412BDEF0CAF7E2BCCC0E(_thisAdjusted, method);
}
// System.Void MoreMountains.Feedbacks.MMFeedbackSound/<TestPlaySound>d__28::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTestPlaySoundU3Ed__28_SetStateMachine_mBA77B6710F3E8EF9F0E67012920F9D86D8A4DC8F (U3CTestPlaySoundU3Ed__28_t9DDF20BAA74EEFB92905046D489853DF097A7A8C * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CTestPlaySoundU3Ed__28_SetStateMachine_mBA77B6710F3E8EF9F0E67012920F9D86D8A4DC8F_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CTestPlaySoundU3Ed__28_t9DDF20BAA74EEFB92905046D489853DF097A7A8C * _thisAdjusted = reinterpret_cast<U3CTestPlaySoundU3Ed__28_t9DDF20BAA74EEFB92905046D489853DF097A7A8C *>(__this + _offset);
	U3CTestPlaySoundU3Ed__28_SetStateMachine_mBA77B6710F3E8EF9F0E67012920F9D86D8A4DC8F(_thisAdjusted, ___stateMachine0, method);
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

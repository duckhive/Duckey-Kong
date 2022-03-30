#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// MoreMountains.Tools.MMEventListener`1<MoreMountains.Tools.MMAchievementUnlockedEvent>
struct MMEventListener_1_t4762559FBB3B979E8ECDE93DAEFA73E09F8C0CAA;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.Audio.AudioMixerGroup
struct AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// MoreMountains.Tools.JoystickEvent
struct JoystickEvent_t3E8916F012303AE70FF13261017E9F031D54737B;
// MoreMountains.Tools.MMAchievement
struct MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3;
// MoreMountains.Tools.MMAchievementDisplayItem
struct MMAchievementDisplayItem_t7B078B470604860F459A4BE6BCB4C051235CA506;
// MoreMountains.Tools.MMAchievementDisplayer
struct MMAchievementDisplayer_tA626A5C9362BF2DCA81A860D792778B5682589BA;
// MoreMountains.Tools.MMAutoRotate
struct MMAutoRotate_t53B4EE4D099D54E664495149767C3099EBD4C36E;
// MoreMountains.Tools.MMGhostCamera
struct MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7;
// MoreMountains.Tools.MMProgressBar
struct MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E;
// MoreMountains.Tools.MMTouchJoystick
struct MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
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
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// MoreMountains.Tools.MMAchievementDisplayer/<DisplayAchievement>d__4
struct U3CDisplayAchievementU3Ed__4_t58CD4D621DDEC2C1271FD89429825E17115F1A3C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDisplayAchievementU3Ed__4_t58CD4D621DDEC2C1271FD89429825E17115F1A3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C const RuntimeMethod* EventRegister_MMEventStartListening_TisMMAchievementUnlockedEvent_t2B63151D7FE8F928F93B43DEAD70F0DE80746DBB_m80F61CD4E4666EB25DCF5197B500DC2D7F50BEC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventRegister_MMEventStopListening_TisMMAchievementUnlockedEvent_t2B63151D7FE8F928F93B43DEAD70F0DE80746DBB_m22BCBA6E98B57C50A1CD283601549F2987B62DA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_m06FB4232ED756E269BDAE846E32BC8B0EA40B83A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMMAchievementDisplayItem_t7B078B470604860F459A4BE6BCB4C051235CA506_m9BEB7D697C7094B8B76B2621ECE6F8B9CF6E1E0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDisplayAchievementU3Ed__4_System_Collections_IEnumerator_Reset_mD6BE78F30B1C08DA6CA86E439F8915AB1338B04B_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t925566783AA7FBB4F0B78CCF288D7238BBCF30A3 
{
public:

public:
};


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

// MoreMountains.Tools.MMAchievementDisplayer/<DisplayAchievement>d__4
struct U3CDisplayAchievementU3Ed__4_t58CD4D621DDEC2C1271FD89429825E17115F1A3C  : public RuntimeObject
{
public:
	// System.Int32 MoreMountains.Tools.MMAchievementDisplayer/<DisplayAchievement>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MoreMountains.Tools.MMAchievementDisplayer/<DisplayAchievement>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// MoreMountains.Tools.MMAchievementDisplayer MoreMountains.Tools.MMAchievementDisplayer/<DisplayAchievement>d__4::<>4__this
	MMAchievementDisplayer_tA626A5C9362BF2DCA81A860D792778B5682589BA * ___U3CU3E4__this_2;
	// MoreMountains.Tools.MMAchievement MoreMountains.Tools.MMAchievementDisplayer/<DisplayAchievement>d__4::achievement
	MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3 * ___achievement_3;
	// UnityEngine.CanvasGroup MoreMountains.Tools.MMAchievementDisplayer/<DisplayAchievement>d__4::<achievementCanvasGroup>5__2
	CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * ___U3CachievementCanvasGroupU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDisplayAchievementU3Ed__4_t58CD4D621DDEC2C1271FD89429825E17115F1A3C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDisplayAchievementU3Ed__4_t58CD4D621DDEC2C1271FD89429825E17115F1A3C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDisplayAchievementU3Ed__4_t58CD4D621DDEC2C1271FD89429825E17115F1A3C, ___U3CU3E4__this_2)); }
	inline MMAchievementDisplayer_tA626A5C9362BF2DCA81A860D792778B5682589BA * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MMAchievementDisplayer_tA626A5C9362BF2DCA81A860D792778B5682589BA ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MMAchievementDisplayer_tA626A5C9362BF2DCA81A860D792778B5682589BA * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_achievement_3() { return static_cast<int32_t>(offsetof(U3CDisplayAchievementU3Ed__4_t58CD4D621DDEC2C1271FD89429825E17115F1A3C, ___achievement_3)); }
	inline MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3 * get_achievement_3() const { return ___achievement_3; }
	inline MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3 ** get_address_of_achievement_3() { return &___achievement_3; }
	inline void set_achievement_3(MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3 * value)
	{
		___achievement_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___achievement_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CachievementCanvasGroupU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CDisplayAchievementU3Ed__4_t58CD4D621DDEC2C1271FD89429825E17115F1A3C, ___U3CachievementCanvasGroupU3E5__2_4)); }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * get_U3CachievementCanvasGroupU3E5__2_4() const { return ___U3CachievementCanvasGroupU3E5__2_4; }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F ** get_address_of_U3CachievementCanvasGroupU3E5__2_4() { return &___U3CachievementCanvasGroupU3E5__2_4; }
	inline void set_U3CachievementCanvasGroupU3E5__2_4(CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * value)
	{
		___U3CachievementCanvasGroupU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CachievementCanvasGroupU3E5__2_4), (void*)value);
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


// MoreMountains.Tools.MMAchievementUnlockedEvent
struct MMAchievementUnlockedEvent_t2B63151D7FE8F928F93B43DEAD70F0DE80746DBB 
{
public:
	// MoreMountains.Tools.MMAchievement MoreMountains.Tools.MMAchievementUnlockedEvent::Achievement
	MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3 * ___Achievement_0;

public:
	inline static int32_t get_offset_of_Achievement_0() { return static_cast<int32_t>(offsetof(MMAchievementUnlockedEvent_t2B63151D7FE8F928F93B43DEAD70F0DE80746DBB, ___Achievement_0)); }
	inline MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3 * get_Achievement_0() const { return ___Achievement_0; }
	inline MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3 ** get_address_of_Achievement_0() { return &___Achievement_0; }
	inline void set_Achievement_0(MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3 * value)
	{
		___Achievement_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Achievement_0), (void*)value);
	}
};

struct MMAchievementUnlockedEvent_t2B63151D7FE8F928F93B43DEAD70F0DE80746DBB_StaticFields
{
public:
	// MoreMountains.Tools.MMAchievementUnlockedEvent MoreMountains.Tools.MMAchievementUnlockedEvent::e
	MMAchievementUnlockedEvent_t2B63151D7FE8F928F93B43DEAD70F0DE80746DBB  ___e_1;

public:
	inline static int32_t get_offset_of_e_1() { return static_cast<int32_t>(offsetof(MMAchievementUnlockedEvent_t2B63151D7FE8F928F93B43DEAD70F0DE80746DBB_StaticFields, ___e_1)); }
	inline MMAchievementUnlockedEvent_t2B63151D7FE8F928F93B43DEAD70F0DE80746DBB  get_e_1() const { return ___e_1; }
	inline MMAchievementUnlockedEvent_t2B63151D7FE8F928F93B43DEAD70F0DE80746DBB * get_address_of_e_1() { return &___e_1; }
	inline void set_e_1(MMAchievementUnlockedEvent_t2B63151D7FE8F928F93B43DEAD70F0DE80746DBB  value)
	{
		___e_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___e_1))->___Achievement_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of MoreMountains.Tools.MMAchievementUnlockedEvent
struct MMAchievementUnlockedEvent_t2B63151D7FE8F928F93B43DEAD70F0DE80746DBB_marshaled_pinvoke
{
	MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3 * ___Achievement_0;
};
// Native definition for COM marshalling of MoreMountains.Tools.MMAchievementUnlockedEvent
struct MMAchievementUnlockedEvent_t2B63151D7FE8F928F93B43DEAD70F0DE80746DBB_marshaled_com
{
	MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3 * ___Achievement_0;
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

// MoreMountains.Tools.AchievementTypes
struct AchievementTypes_t2048615FD91D1461421F6DE08FEA193D0C5C369B 
{
public:
	// System.Int32 MoreMountains.Tools.AchievementTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AchievementTypes_t2048615FD91D1461421F6DE08FEA193D0C5C369B, ___value___2)); }
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

// UnityEngine.CursorLockMode
struct CursorLockMode_t247B41EE9632E4AD759EDADDB351AE0075162D04 
{
public:
	// System.Int32 UnityEngine.CursorLockMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CursorLockMode_t247B41EE9632E4AD759EDADDB351AE0075162D04, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// MoreMountains.Feedbacks.MMTimeScaleMethods
struct MMTimeScaleMethods_tD88E28609762D4DEA61E293671C7020D238052AF 
{
public:
	// System.Int32 MoreMountains.Feedbacks.MMTimeScaleMethods::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MMTimeScaleMethods_tD88E28609762D4DEA61E293671C7020D238052AF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// UnityEngine.Plane
struct Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;

public:
	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_Distance_2() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Distance_2)); }
	inline float get_m_Distance_2() const { return ___m_Distance_2; }
	inline float* get_address_of_m_Distance_2() { return &___m_Distance_2; }
	inline void set_m_Distance_2(float value)
	{
		___m_Distance_2 = value;
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


// UnityEngine.Space
struct Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// MoreMountains.Tools.MMAutoRotate/UpdateModes
struct UpdateModes_t102D36FAEE71B517DDD58F9FF4EE5A7FB91DFB44 
{
public:
	// System.Int32 MoreMountains.Tools.MMAutoRotate/UpdateModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateModes_t102D36FAEE71B517DDD58F9FF4EE5A7FB91DFB44, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.Tools.MMProgressBar/BarDirections
struct BarDirections_tBB3613C90FCF5DFC38DBBA74BA2592CB4E7EA3F3 
{
public:
	// System.Int32 MoreMountains.Tools.MMProgressBar/BarDirections::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BarDirections_tBB3613C90FCF5DFC38DBBA74BA2592CB4E7EA3F3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.Tools.MMProgressBar/BarFillModes
struct BarFillModes_t75E30AA0B75C6A0DA758502BF0F447DC9D968AF6 
{
public:
	// System.Int32 MoreMountains.Tools.MMProgressBar/BarFillModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BarFillModes_t75E30AA0B75C6A0DA758502BF0F447DC9D968AF6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.Tools.MMProgressBar/FillModes
struct FillModes_t9615432DA7C9D9C661D5272140FDAB05C47749D0 
{
public:
	// System.Int32 MoreMountains.Tools.MMProgressBar/FillModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillModes_t9615432DA7C9D9C661D5272140FDAB05C47749D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.Tools.MMProgressBar/MMProgressBarStates
struct MMProgressBarStates_t3F5564F2994119559279A01DF975852B097568ED 
{
public:
	// System.Int32 MoreMountains.Tools.MMProgressBar/MMProgressBarStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MMProgressBarStates_t3F5564F2994119559279A01DF975852B097568ED, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MoreMountains.Tools.MMProgressBar/TimeScales
struct TimeScales_t69CA1F45107D2E290BC0A61CF5C5FCC5FB692B5E 
{
public:
	// System.Int32 MoreMountains.Tools.MMProgressBar/TimeScales::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimeScales_t69CA1F45107D2E290BC0A61CF5C5FCC5FB692B5E, ___value___2)); }
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


// MoreMountains.Tools.MMAchievement
struct MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3  : public RuntimeObject
{
public:
	// System.String MoreMountains.Tools.MMAchievement::AchievementID
	String_t* ___AchievementID_0;
	// MoreMountains.Tools.AchievementTypes MoreMountains.Tools.MMAchievement::AchievementType
	int32_t ___AchievementType_1;
	// System.Boolean MoreMountains.Tools.MMAchievement::HiddenAchievement
	bool ___HiddenAchievement_2;
	// System.Boolean MoreMountains.Tools.MMAchievement::UnlockedStatus
	bool ___UnlockedStatus_3;
	// System.String MoreMountains.Tools.MMAchievement::Title
	String_t* ___Title_4;
	// System.String MoreMountains.Tools.MMAchievement::Description
	String_t* ___Description_5;
	// System.Int32 MoreMountains.Tools.MMAchievement::Points
	int32_t ___Points_6;
	// UnityEngine.Sprite MoreMountains.Tools.MMAchievement::LockedImage
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___LockedImage_7;
	// UnityEngine.Sprite MoreMountains.Tools.MMAchievement::UnlockedImage
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___UnlockedImage_8;
	// UnityEngine.AudioClip MoreMountains.Tools.MMAchievement::UnlockedSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___UnlockedSound_9;
	// System.Int32 MoreMountains.Tools.MMAchievement::ProgressTarget
	int32_t ___ProgressTarget_10;
	// System.Int32 MoreMountains.Tools.MMAchievement::ProgressCurrent
	int32_t ___ProgressCurrent_11;
	// MoreMountains.Tools.MMAchievementDisplayItem MoreMountains.Tools.MMAchievement::_achievementDisplayItem
	MMAchievementDisplayItem_t7B078B470604860F459A4BE6BCB4C051235CA506 * ____achievementDisplayItem_12;

public:
	inline static int32_t get_offset_of_AchievementID_0() { return static_cast<int32_t>(offsetof(MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3, ___AchievementID_0)); }
	inline String_t* get_AchievementID_0() const { return ___AchievementID_0; }
	inline String_t** get_address_of_AchievementID_0() { return &___AchievementID_0; }
	inline void set_AchievementID_0(String_t* value)
	{
		___AchievementID_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AchievementID_0), (void*)value);
	}

	inline static int32_t get_offset_of_AchievementType_1() { return static_cast<int32_t>(offsetof(MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3, ___AchievementType_1)); }
	inline int32_t get_AchievementType_1() const { return ___AchievementType_1; }
	inline int32_t* get_address_of_AchievementType_1() { return &___AchievementType_1; }
	inline void set_AchievementType_1(int32_t value)
	{
		___AchievementType_1 = value;
	}

	inline static int32_t get_offset_of_HiddenAchievement_2() { return static_cast<int32_t>(offsetof(MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3, ___HiddenAchievement_2)); }
	inline bool get_HiddenAchievement_2() const { return ___HiddenAchievement_2; }
	inline bool* get_address_of_HiddenAchievement_2() { return &___HiddenAchievement_2; }
	inline void set_HiddenAchievement_2(bool value)
	{
		___HiddenAchievement_2 = value;
	}

	inline static int32_t get_offset_of_UnlockedStatus_3() { return static_cast<int32_t>(offsetof(MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3, ___UnlockedStatus_3)); }
	inline bool get_UnlockedStatus_3() const { return ___UnlockedStatus_3; }
	inline bool* get_address_of_UnlockedStatus_3() { return &___UnlockedStatus_3; }
	inline void set_UnlockedStatus_3(bool value)
	{
		___UnlockedStatus_3 = value;
	}

	inline static int32_t get_offset_of_Title_4() { return static_cast<int32_t>(offsetof(MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3, ___Title_4)); }
	inline String_t* get_Title_4() const { return ___Title_4; }
	inline String_t** get_address_of_Title_4() { return &___Title_4; }
	inline void set_Title_4(String_t* value)
	{
		___Title_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Title_4), (void*)value);
	}

	inline static int32_t get_offset_of_Description_5() { return static_cast<int32_t>(offsetof(MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3, ___Description_5)); }
	inline String_t* get_Description_5() const { return ___Description_5; }
	inline String_t** get_address_of_Description_5() { return &___Description_5; }
	inline void set_Description_5(String_t* value)
	{
		___Description_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Description_5), (void*)value);
	}

	inline static int32_t get_offset_of_Points_6() { return static_cast<int32_t>(offsetof(MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3, ___Points_6)); }
	inline int32_t get_Points_6() const { return ___Points_6; }
	inline int32_t* get_address_of_Points_6() { return &___Points_6; }
	inline void set_Points_6(int32_t value)
	{
		___Points_6 = value;
	}

	inline static int32_t get_offset_of_LockedImage_7() { return static_cast<int32_t>(offsetof(MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3, ___LockedImage_7)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_LockedImage_7() const { return ___LockedImage_7; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_LockedImage_7() { return &___LockedImage_7; }
	inline void set_LockedImage_7(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___LockedImage_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LockedImage_7), (void*)value);
	}

	inline static int32_t get_offset_of_UnlockedImage_8() { return static_cast<int32_t>(offsetof(MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3, ___UnlockedImage_8)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_UnlockedImage_8() const { return ___UnlockedImage_8; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_UnlockedImage_8() { return &___UnlockedImage_8; }
	inline void set_UnlockedImage_8(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___UnlockedImage_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnlockedImage_8), (void*)value);
	}

	inline static int32_t get_offset_of_UnlockedSound_9() { return static_cast<int32_t>(offsetof(MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3, ___UnlockedSound_9)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_UnlockedSound_9() const { return ___UnlockedSound_9; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_UnlockedSound_9() { return &___UnlockedSound_9; }
	inline void set_UnlockedSound_9(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___UnlockedSound_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnlockedSound_9), (void*)value);
	}

	inline static int32_t get_offset_of_ProgressTarget_10() { return static_cast<int32_t>(offsetof(MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3, ___ProgressTarget_10)); }
	inline int32_t get_ProgressTarget_10() const { return ___ProgressTarget_10; }
	inline int32_t* get_address_of_ProgressTarget_10() { return &___ProgressTarget_10; }
	inline void set_ProgressTarget_10(int32_t value)
	{
		___ProgressTarget_10 = value;
	}

	inline static int32_t get_offset_of_ProgressCurrent_11() { return static_cast<int32_t>(offsetof(MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3, ___ProgressCurrent_11)); }
	inline int32_t get_ProgressCurrent_11() const { return ___ProgressCurrent_11; }
	inline int32_t* get_address_of_ProgressCurrent_11() { return &___ProgressCurrent_11; }
	inline void set_ProgressCurrent_11(int32_t value)
	{
		___ProgressCurrent_11 = value;
	}

	inline static int32_t get_offset_of__achievementDisplayItem_12() { return static_cast<int32_t>(offsetof(MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3, ____achievementDisplayItem_12)); }
	inline MMAchievementDisplayItem_t7B078B470604860F459A4BE6BCB4C051235CA506 * get__achievementDisplayItem_12() const { return ____achievementDisplayItem_12; }
	inline MMAchievementDisplayItem_t7B078B470604860F459A4BE6BCB4C051235CA506 ** get_address_of__achievementDisplayItem_12() { return &____achievementDisplayItem_12; }
	inline void set__achievementDisplayItem_12(MMAchievementDisplayItem_t7B078B470604860F459A4BE6BCB4C051235CA506 * value)
	{
		____achievementDisplayItem_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____achievementDisplayItem_12), (void*)value);
	}
};


// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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


// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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


// MoreMountains.Tools.MMAchievementDisplayItem
struct MMAchievementDisplayItem_t7B078B470604860F459A4BE6BCB4C051235CA506  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Image MoreMountains.Tools.MMAchievementDisplayItem::BackgroundLocked
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___BackgroundLocked_4;
	// UnityEngine.UI.Image MoreMountains.Tools.MMAchievementDisplayItem::BackgroundUnlocked
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___BackgroundUnlocked_5;
	// UnityEngine.UI.Image MoreMountains.Tools.MMAchievementDisplayItem::Icon
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___Icon_6;
	// UnityEngine.UI.Text MoreMountains.Tools.MMAchievementDisplayItem::Title
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Title_7;
	// UnityEngine.UI.Text MoreMountains.Tools.MMAchievementDisplayItem::Description
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Description_8;
	// MoreMountains.Tools.MMProgressBar MoreMountains.Tools.MMAchievementDisplayItem::ProgressBarDisplay
	MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E * ___ProgressBarDisplay_9;

public:
	inline static int32_t get_offset_of_BackgroundLocked_4() { return static_cast<int32_t>(offsetof(MMAchievementDisplayItem_t7B078B470604860F459A4BE6BCB4C051235CA506, ___BackgroundLocked_4)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_BackgroundLocked_4() const { return ___BackgroundLocked_4; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_BackgroundLocked_4() { return &___BackgroundLocked_4; }
	inline void set_BackgroundLocked_4(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___BackgroundLocked_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BackgroundLocked_4), (void*)value);
	}

	inline static int32_t get_offset_of_BackgroundUnlocked_5() { return static_cast<int32_t>(offsetof(MMAchievementDisplayItem_t7B078B470604860F459A4BE6BCB4C051235CA506, ___BackgroundUnlocked_5)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_BackgroundUnlocked_5() const { return ___BackgroundUnlocked_5; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_BackgroundUnlocked_5() { return &___BackgroundUnlocked_5; }
	inline void set_BackgroundUnlocked_5(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___BackgroundUnlocked_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BackgroundUnlocked_5), (void*)value);
	}

	inline static int32_t get_offset_of_Icon_6() { return static_cast<int32_t>(offsetof(MMAchievementDisplayItem_t7B078B470604860F459A4BE6BCB4C051235CA506, ___Icon_6)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_Icon_6() const { return ___Icon_6; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_Icon_6() { return &___Icon_6; }
	inline void set_Icon_6(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___Icon_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Icon_6), (void*)value);
	}

	inline static int32_t get_offset_of_Title_7() { return static_cast<int32_t>(offsetof(MMAchievementDisplayItem_t7B078B470604860F459A4BE6BCB4C051235CA506, ___Title_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Title_7() const { return ___Title_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Title_7() { return &___Title_7; }
	inline void set_Title_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Title_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Title_7), (void*)value);
	}

	inline static int32_t get_offset_of_Description_8() { return static_cast<int32_t>(offsetof(MMAchievementDisplayItem_t7B078B470604860F459A4BE6BCB4C051235CA506, ___Description_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Description_8() const { return ___Description_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Description_8() { return &___Description_8; }
	inline void set_Description_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Description_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Description_8), (void*)value);
	}

	inline static int32_t get_offset_of_ProgressBarDisplay_9() { return static_cast<int32_t>(offsetof(MMAchievementDisplayItem_t7B078B470604860F459A4BE6BCB4C051235CA506, ___ProgressBarDisplay_9)); }
	inline MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E * get_ProgressBarDisplay_9() const { return ___ProgressBarDisplay_9; }
	inline MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E ** get_address_of_ProgressBarDisplay_9() { return &___ProgressBarDisplay_9; }
	inline void set_ProgressBarDisplay_9(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E * value)
	{
		___ProgressBarDisplay_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProgressBarDisplay_9), (void*)value);
	}
};


// MoreMountains.Tools.MMAchievementDisplayer
struct MMAchievementDisplayer_tA626A5C9362BF2DCA81A860D792778B5682589BA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// MoreMountains.Tools.MMAchievementDisplayItem MoreMountains.Tools.MMAchievementDisplayer::AchievementDisplayPrefab
	MMAchievementDisplayItem_t7B078B470604860F459A4BE6BCB4C051235CA506 * ___AchievementDisplayPrefab_4;
	// System.Single MoreMountains.Tools.MMAchievementDisplayer::AchievementDisplayDuration
	float ___AchievementDisplayDuration_5;
	// System.Single MoreMountains.Tools.MMAchievementDisplayer::AchievementFadeDuration
	float ___AchievementFadeDuration_6;
	// UnityEngine.WaitForSeconds MoreMountains.Tools.MMAchievementDisplayer::_achievementFadeOutWFS
	WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * ____achievementFadeOutWFS_7;

public:
	inline static int32_t get_offset_of_AchievementDisplayPrefab_4() { return static_cast<int32_t>(offsetof(MMAchievementDisplayer_tA626A5C9362BF2DCA81A860D792778B5682589BA, ___AchievementDisplayPrefab_4)); }
	inline MMAchievementDisplayItem_t7B078B470604860F459A4BE6BCB4C051235CA506 * get_AchievementDisplayPrefab_4() const { return ___AchievementDisplayPrefab_4; }
	inline MMAchievementDisplayItem_t7B078B470604860F459A4BE6BCB4C051235CA506 ** get_address_of_AchievementDisplayPrefab_4() { return &___AchievementDisplayPrefab_4; }
	inline void set_AchievementDisplayPrefab_4(MMAchievementDisplayItem_t7B078B470604860F459A4BE6BCB4C051235CA506 * value)
	{
		___AchievementDisplayPrefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AchievementDisplayPrefab_4), (void*)value);
	}

	inline static int32_t get_offset_of_AchievementDisplayDuration_5() { return static_cast<int32_t>(offsetof(MMAchievementDisplayer_tA626A5C9362BF2DCA81A860D792778B5682589BA, ___AchievementDisplayDuration_5)); }
	inline float get_AchievementDisplayDuration_5() const { return ___AchievementDisplayDuration_5; }
	inline float* get_address_of_AchievementDisplayDuration_5() { return &___AchievementDisplayDuration_5; }
	inline void set_AchievementDisplayDuration_5(float value)
	{
		___AchievementDisplayDuration_5 = value;
	}

	inline static int32_t get_offset_of_AchievementFadeDuration_6() { return static_cast<int32_t>(offsetof(MMAchievementDisplayer_tA626A5C9362BF2DCA81A860D792778B5682589BA, ___AchievementFadeDuration_6)); }
	inline float get_AchievementFadeDuration_6() const { return ___AchievementFadeDuration_6; }
	inline float* get_address_of_AchievementFadeDuration_6() { return &___AchievementFadeDuration_6; }
	inline void set_AchievementFadeDuration_6(float value)
	{
		___AchievementFadeDuration_6 = value;
	}

	inline static int32_t get_offset_of__achievementFadeOutWFS_7() { return static_cast<int32_t>(offsetof(MMAchievementDisplayer_tA626A5C9362BF2DCA81A860D792778B5682589BA, ____achievementFadeOutWFS_7)); }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * get__achievementFadeOutWFS_7() const { return ____achievementFadeOutWFS_7; }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 ** get_address_of__achievementFadeOutWFS_7() { return &____achievementFadeOutWFS_7; }
	inline void set__achievementFadeOutWFS_7(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * value)
	{
		____achievementFadeOutWFS_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____achievementFadeOutWFS_7), (void*)value);
	}
};


// MoreMountains.Tools.MMAutoRotate
struct MMAutoRotate_t53B4EE4D099D54E664495149767C3099EBD4C36E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean MoreMountains.Tools.MMAutoRotate::Rotating
	bool ___Rotating_4;
	// UnityEngine.Space MoreMountains.Tools.MMAutoRotate::RotationSpace
	int32_t ___RotationSpace_5;
	// MoreMountains.Tools.MMAutoRotate/UpdateModes MoreMountains.Tools.MMAutoRotate::UpdateMode
	int32_t ___UpdateMode_6;
	// UnityEngine.Vector3 MoreMountains.Tools.MMAutoRotate::RotationSpeed
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___RotationSpeed_7;
	// System.Boolean MoreMountains.Tools.MMAutoRotate::Orbiting
	bool ___Orbiting_8;
	// System.Boolean MoreMountains.Tools.MMAutoRotate::AdditiveOrbitRotation
	bool ___AdditiveOrbitRotation_9;
	// UnityEngine.Transform MoreMountains.Tools.MMAutoRotate::OrbitCenterTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___OrbitCenterTransform_10;
	// UnityEngine.Vector3 MoreMountains.Tools.MMAutoRotate::OrbitCenterOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___OrbitCenterOffset_11;
	// UnityEngine.Vector3 MoreMountains.Tools.MMAutoRotate::OrbitRotationAxis
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___OrbitRotationAxis_12;
	// System.Single MoreMountains.Tools.MMAutoRotate::OrbitRotationSpeed
	float ___OrbitRotationSpeed_13;
	// System.Single MoreMountains.Tools.MMAutoRotate::OrbitRadius
	float ___OrbitRadius_14;
	// System.Single MoreMountains.Tools.MMAutoRotate::OrbitCorrectionSpeed
	float ___OrbitCorrectionSpeed_15;
	// System.Boolean MoreMountains.Tools.MMAutoRotate::DrawGizmos
	bool ___DrawGizmos_16;
	// UnityEngine.Color MoreMountains.Tools.MMAutoRotate::OrbitPlaneColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___OrbitPlaneColor_17;
	// UnityEngine.Color MoreMountains.Tools.MMAutoRotate::OrbitLineColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___OrbitLineColor_18;
	// UnityEngine.Vector3 MoreMountains.Tools.MMAutoRotate::_orbitCenter
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____orbitCenter_19;
	// UnityEngine.Vector3 MoreMountains.Tools.MMAutoRotate::_worldRotationAxis
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____worldRotationAxis_20;
	// UnityEngine.Plane MoreMountains.Tools.MMAutoRotate::_rotationPlane
	Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ____rotationPlane_21;
	// UnityEngine.Vector3 MoreMountains.Tools.MMAutoRotate::_snappedPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____snappedPosition_22;
	// UnityEngine.Vector3 MoreMountains.Tools.MMAutoRotate::_radius
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____radius_23;
	// UnityEngine.Quaternion MoreMountains.Tools.MMAutoRotate::_newRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ____newRotation_24;
	// UnityEngine.Vector3 MoreMountains.Tools.MMAutoRotate::_desiredOrbitPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____desiredOrbitPosition_25;
	// UnityEngine.Vector3 MoreMountains.Tools.MMAutoRotate::_previousPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____previousPosition_26;

public:
	inline static int32_t get_offset_of_Rotating_4() { return static_cast<int32_t>(offsetof(MMAutoRotate_t53B4EE4D099D54E664495149767C3099EBD4C36E, ___Rotating_4)); }
	inline bool get_Rotating_4() const { return ___Rotating_4; }
	inline bool* get_address_of_Rotating_4() { return &___Rotating_4; }
	inline void set_Rotating_4(bool value)
	{
		___Rotating_4 = value;
	}

	inline static int32_t get_offset_of_RotationSpace_5() { return static_cast<int32_t>(offsetof(MMAutoRotate_t53B4EE4D099D54E664495149767C3099EBD4C36E, ___RotationSpace_5)); }
	inline int32_t get_RotationSpace_5() const { return ___RotationSpace_5; }
	inline int32_t* get_address_of_RotationSpace_5() { return &___RotationSpace_5; }
	inline void set_RotationSpace_5(int32_t value)
	{
		___RotationSpace_5 = value;
	}

	inline static int32_t get_offset_of_UpdateMode_6() { return static_cast<int32_t>(offsetof(MMAutoRotate_t53B4EE4D099D54E664495149767C3099EBD4C36E, ___UpdateMode_6)); }
	inline int32_t get_UpdateMode_6() const { return ___UpdateMode_6; }
	inline int32_t* get_address_of_UpdateMode_6() { return &___UpdateMode_6; }
	inline void set_UpdateMode_6(int32_t value)
	{
		___UpdateMode_6 = value;
	}

	inline static int32_t get_offset_of_RotationSpeed_7() { return static_cast<int32_t>(offsetof(MMAutoRotate_t53B4EE4D099D54E664495149767C3099EBD4C36E, ___RotationSpeed_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_RotationSpeed_7() const { return ___RotationSpeed_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_RotationSpeed_7() { return &___RotationSpeed_7; }
	inline void set_RotationSpeed_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___RotationSpeed_7 = value;
	}

	inline static int32_t get_offset_of_Orbiting_8() { return static_cast<int32_t>(offsetof(MMAutoRotate_t53B4EE4D099D54E664495149767C3099EBD4C36E, ___Orbiting_8)); }
	inline bool get_Orbiting_8() const { return ___Orbiting_8; }
	inline bool* get_address_of_Orbiting_8() { return &___Orbiting_8; }
	inline void set_Orbiting_8(bool value)
	{
		___Orbiting_8 = value;
	}

	inline static int32_t get_offset_of_AdditiveOrbitRotation_9() { return static_cast<int32_t>(offsetof(MMAutoRotate_t53B4EE4D099D54E664495149767C3099EBD4C36E, ___AdditiveOrbitRotation_9)); }
	inline bool get_AdditiveOrbitRotation_9() const { return ___AdditiveOrbitRotation_9; }
	inline bool* get_address_of_AdditiveOrbitRotation_9() { return &___AdditiveOrbitRotation_9; }
	inline void set_AdditiveOrbitRotation_9(bool value)
	{
		___AdditiveOrbitRotation_9 = value;
	}

	inline static int32_t get_offset_of_OrbitCenterTransform_10() { return static_cast<int32_t>(offsetof(MMAutoRotate_t53B4EE4D099D54E664495149767C3099EBD4C36E, ___OrbitCenterTransform_10)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_OrbitCenterTransform_10() const { return ___OrbitCenterTransform_10; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_OrbitCenterTransform_10() { return &___OrbitCenterTransform_10; }
	inline void set_OrbitCenterTransform_10(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___OrbitCenterTransform_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OrbitCenterTransform_10), (void*)value);
	}

	inline static int32_t get_offset_of_OrbitCenterOffset_11() { return static_cast<int32_t>(offsetof(MMAutoRotate_t53B4EE4D099D54E664495149767C3099EBD4C36E, ___OrbitCenterOffset_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_OrbitCenterOffset_11() const { return ___OrbitCenterOffset_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_OrbitCenterOffset_11() { return &___OrbitCenterOffset_11; }
	inline void set_OrbitCenterOffset_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___OrbitCenterOffset_11 = value;
	}

	inline static int32_t get_offset_of_OrbitRotationAxis_12() { return static_cast<int32_t>(offsetof(MMAutoRotate_t53B4EE4D099D54E664495149767C3099EBD4C36E, ___OrbitRotationAxis_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_OrbitRotationAxis_12() const { return ___OrbitRotationAxis_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_OrbitRotationAxis_12() { return &___OrbitRotationAxis_12; }
	inline void set_OrbitRotationAxis_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___OrbitRotationAxis_12 = value;
	}

	inline static int32_t get_offset_of_OrbitRotationSpeed_13() { return static_cast<int32_t>(offsetof(MMAutoRotate_t53B4EE4D099D54E664495149767C3099EBD4C36E, ___OrbitRotationSpeed_13)); }
	inline float get_OrbitRotationSpeed_13() const { return ___OrbitRotationSpeed_13; }
	inline float* get_address_of_OrbitRotationSpeed_13() { return &___OrbitRotationSpeed_13; }
	inline void set_OrbitRotationSpeed_13(float value)
	{
		___OrbitRotationSpeed_13 = value;
	}

	inline static int32_t get_offset_of_OrbitRadius_14() { return static_cast<int32_t>(offsetof(MMAutoRotate_t53B4EE4D099D54E664495149767C3099EBD4C36E, ___OrbitRadius_14)); }
	inline float get_OrbitRadius_14() const { return ___OrbitRadius_14; }
	inline float* get_address_of_OrbitRadius_14() { return &___OrbitRadius_14; }
	inline void set_OrbitRadius_14(float value)
	{
		___OrbitRadius_14 = value;
	}

	inline static int32_t get_offset_of_OrbitCorrectionSpeed_15() { return static_cast<int32_t>(offsetof(MMAutoRotate_t53B4EE4D099D54E664495149767C3099EBD4C36E, ___OrbitCorrectionSpeed_15)); }
	inline float get_OrbitCorrectionSpeed_15() const { return ___OrbitCorrectionSpeed_15; }
	inline float* get_address_of_OrbitCorrectionSpeed_15() { return &___OrbitCorrectionSpeed_15; }
	inline void set_OrbitCorrectionSpeed_15(float value)
	{
		___OrbitCorrectionSpeed_15 = value;
	}

	inline static int32_t get_offset_of_DrawGizmos_16() { return static_cast<int32_t>(offsetof(MMAutoRotate_t53B4EE4D099D54E664495149767C3099EBD4C36E, ___DrawGizmos_16)); }
	inline bool get_DrawGizmos_16() const { return ___DrawGizmos_16; }
	inline bool* get_address_of_DrawGizmos_16() { return &___DrawGizmos_16; }
	inline void set_DrawGizmos_16(bool value)
	{
		___DrawGizmos_16 = value;
	}

	inline static int32_t get_offset_of_OrbitPlaneColor_17() { return static_cast<int32_t>(offsetof(MMAutoRotate_t53B4EE4D099D54E664495149767C3099EBD4C36E, ___OrbitPlaneColor_17)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_OrbitPlaneColor_17() const { return ___OrbitPlaneColor_17; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_OrbitPlaneColor_17() { return &___OrbitPlaneColor_17; }
	inline void set_OrbitPlaneColor_17(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___OrbitPlaneColor_17 = value;
	}

	inline static int32_t get_offset_of_OrbitLineColor_18() { return static_cast<int32_t>(offsetof(MMAutoRotate_t53B4EE4D099D54E664495149767C3099EBD4C36E, ___OrbitLineColor_18)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_OrbitLineColor_18() const { return ___OrbitLineColor_18; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_OrbitLineColor_18() { return &___OrbitLineColor_18; }
	inline void set_OrbitLineColor_18(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___OrbitLineColor_18 = value;
	}

	inline static int32_t get_offset_of__orbitCenter_19() { return static_cast<int32_t>(offsetof(MMAutoRotate_t53B4EE4D099D54E664495149767C3099EBD4C36E, ____orbitCenter_19)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__orbitCenter_19() const { return ____orbitCenter_19; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__orbitCenter_19() { return &____orbitCenter_19; }
	inline void set__orbitCenter_19(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____orbitCenter_19 = value;
	}

	inline static int32_t get_offset_of__worldRotationAxis_20() { return static_cast<int32_t>(offsetof(MMAutoRotate_t53B4EE4D099D54E664495149767C3099EBD4C36E, ____worldRotationAxis_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__worldRotationAxis_20() const { return ____worldRotationAxis_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__worldRotationAxis_20() { return &____worldRotationAxis_20; }
	inline void set__worldRotationAxis_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____worldRotationAxis_20 = value;
	}

	inline static int32_t get_offset_of__rotationPlane_21() { return static_cast<int32_t>(offsetof(MMAutoRotate_t53B4EE4D099D54E664495149767C3099EBD4C36E, ____rotationPlane_21)); }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  get__rotationPlane_21() const { return ____rotationPlane_21; }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * get_address_of__rotationPlane_21() { return &____rotationPlane_21; }
	inline void set__rotationPlane_21(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  value)
	{
		____rotationPlane_21 = value;
	}

	inline static int32_t get_offset_of__snappedPosition_22() { return static_cast<int32_t>(offsetof(MMAutoRotate_t53B4EE4D099D54E664495149767C3099EBD4C36E, ____snappedPosition_22)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__snappedPosition_22() const { return ____snappedPosition_22; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__snappedPosition_22() { return &____snappedPosition_22; }
	inline void set__snappedPosition_22(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____snappedPosition_22 = value;
	}

	inline static int32_t get_offset_of__radius_23() { return static_cast<int32_t>(offsetof(MMAutoRotate_t53B4EE4D099D54E664495149767C3099EBD4C36E, ____radius_23)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__radius_23() const { return ____radius_23; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__radius_23() { return &____radius_23; }
	inline void set__radius_23(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____radius_23 = value;
	}

	inline static int32_t get_offset_of__newRotation_24() { return static_cast<int32_t>(offsetof(MMAutoRotate_t53B4EE4D099D54E664495149767C3099EBD4C36E, ____newRotation_24)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get__newRotation_24() const { return ____newRotation_24; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of__newRotation_24() { return &____newRotation_24; }
	inline void set__newRotation_24(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		____newRotation_24 = value;
	}

	inline static int32_t get_offset_of__desiredOrbitPosition_25() { return static_cast<int32_t>(offsetof(MMAutoRotate_t53B4EE4D099D54E664495149767C3099EBD4C36E, ____desiredOrbitPosition_25)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__desiredOrbitPosition_25() const { return ____desiredOrbitPosition_25; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__desiredOrbitPosition_25() { return &____desiredOrbitPosition_25; }
	inline void set__desiredOrbitPosition_25(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____desiredOrbitPosition_25 = value;
	}

	inline static int32_t get_offset_of__previousPosition_26() { return static_cast<int32_t>(offsetof(MMAutoRotate_t53B4EE4D099D54E664495149767C3099EBD4C36E, ____previousPosition_26)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__previousPosition_26() const { return ____previousPosition_26; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__previousPosition_26() { return &____previousPosition_26; }
	inline void set__previousPosition_26(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____previousPosition_26 = value;
	}
};


// MoreMountains.Tools.MMGhostCamera
struct MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single MoreMountains.Tools.MMGhostCamera::MovementSpeed
	float ___MovementSpeed_4;
	// System.Single MoreMountains.Tools.MMGhostCamera::RunFactor
	float ___RunFactor_5;
	// System.Single MoreMountains.Tools.MMGhostCamera::Acceleration
	float ___Acceleration_6;
	// System.Single MoreMountains.Tools.MMGhostCamera::Deceleration
	float ___Deceleration_7;
	// System.Single MoreMountains.Tools.MMGhostCamera::RotationSpeed
	float ___RotationSpeed_8;
	// UnityEngine.KeyCode MoreMountains.Tools.MMGhostCamera::ActivateButton
	int32_t ___ActivateButton_9;
	// System.String MoreMountains.Tools.MMGhostCamera::HorizontalAxisName
	String_t* ___HorizontalAxisName_10;
	// System.String MoreMountains.Tools.MMGhostCamera::VerticalAxisName
	String_t* ___VerticalAxisName_11;
	// UnityEngine.KeyCode MoreMountains.Tools.MMGhostCamera::UpButton
	int32_t ___UpButton_12;
	// UnityEngine.KeyCode MoreMountains.Tools.MMGhostCamera::DownButton
	int32_t ___DownButton_13;
	// UnityEngine.KeyCode MoreMountains.Tools.MMGhostCamera::ControlsModeSwitch
	int32_t ___ControlsModeSwitch_14;
	// UnityEngine.KeyCode MoreMountains.Tools.MMGhostCamera::TimescaleModificationButton
	int32_t ___TimescaleModificationButton_15;
	// UnityEngine.KeyCode MoreMountains.Tools.MMGhostCamera::RunButton
	int32_t ___RunButton_16;
	// System.Single MoreMountains.Tools.MMGhostCamera::MouseSensitivity
	float ___MouseSensitivity_17;
	// System.Single MoreMountains.Tools.MMGhostCamera::MobileStickSensitivity
	float ___MobileStickSensitivity_18;
	// System.Single MoreMountains.Tools.MMGhostCamera::TimescaleModifier
	float ___TimescaleModifier_19;
	// System.Boolean MoreMountains.Tools.MMGhostCamera::AutoActivation
	bool ___AutoActivation_20;
	// System.Boolean MoreMountains.Tools.MMGhostCamera::MovementEnabled
	bool ___MovementEnabled_21;
	// System.Boolean MoreMountains.Tools.MMGhostCamera::RotationEnabled
	bool ___RotationEnabled_22;
	// System.Boolean MoreMountains.Tools.MMGhostCamera::Active
	bool ___Active_23;
	// System.Boolean MoreMountains.Tools.MMGhostCamera::TimeAltered
	bool ___TimeAltered_24;
	// System.Boolean MoreMountains.Tools.MMGhostCamera::UseMobileControls
	bool ___UseMobileControls_25;
	// UnityEngine.GameObject MoreMountains.Tools.MMGhostCamera::LeftStickContainer
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LeftStickContainer_26;
	// UnityEngine.GameObject MoreMountains.Tools.MMGhostCamera::RightStickContainer
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___RightStickContainer_27;
	// MoreMountains.Tools.MMTouchJoystick MoreMountains.Tools.MMGhostCamera::LeftStick
	MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE * ___LeftStick_28;
	// MoreMountains.Tools.MMTouchJoystick MoreMountains.Tools.MMGhostCamera::RightStick
	MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE * ___RightStick_29;
	// UnityEngine.Vector3 MoreMountains.Tools.MMGhostCamera::_currentInput
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____currentInput_30;
	// UnityEngine.Vector3 MoreMountains.Tools.MMGhostCamera::_lerpedInput
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____lerpedInput_31;
	// UnityEngine.Vector3 MoreMountains.Tools.MMGhostCamera::_normalizedInput
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____normalizedInput_32;
	// System.Single MoreMountains.Tools.MMGhostCamera::_acceleration
	float ____acceleration_33;
	// System.Single MoreMountains.Tools.MMGhostCamera::_deceleration
	float ____deceleration_34;
	// UnityEngine.Vector3 MoreMountains.Tools.MMGhostCamera::_movementVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____movementVector_35;
	// System.Single MoreMountains.Tools.MMGhostCamera::_speedMultiplier
	float ____speedMultiplier_36;
	// UnityEngine.Vector3 MoreMountains.Tools.MMGhostCamera::_newEulerAngles
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____newEulerAngles_37;

public:
	inline static int32_t get_offset_of_MovementSpeed_4() { return static_cast<int32_t>(offsetof(MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7, ___MovementSpeed_4)); }
	inline float get_MovementSpeed_4() const { return ___MovementSpeed_4; }
	inline float* get_address_of_MovementSpeed_4() { return &___MovementSpeed_4; }
	inline void set_MovementSpeed_4(float value)
	{
		___MovementSpeed_4 = value;
	}

	inline static int32_t get_offset_of_RunFactor_5() { return static_cast<int32_t>(offsetof(MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7, ___RunFactor_5)); }
	inline float get_RunFactor_5() const { return ___RunFactor_5; }
	inline float* get_address_of_RunFactor_5() { return &___RunFactor_5; }
	inline void set_RunFactor_5(float value)
	{
		___RunFactor_5 = value;
	}

	inline static int32_t get_offset_of_Acceleration_6() { return static_cast<int32_t>(offsetof(MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7, ___Acceleration_6)); }
	inline float get_Acceleration_6() const { return ___Acceleration_6; }
	inline float* get_address_of_Acceleration_6() { return &___Acceleration_6; }
	inline void set_Acceleration_6(float value)
	{
		___Acceleration_6 = value;
	}

	inline static int32_t get_offset_of_Deceleration_7() { return static_cast<int32_t>(offsetof(MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7, ___Deceleration_7)); }
	inline float get_Deceleration_7() const { return ___Deceleration_7; }
	inline float* get_address_of_Deceleration_7() { return &___Deceleration_7; }
	inline void set_Deceleration_7(float value)
	{
		___Deceleration_7 = value;
	}

	inline static int32_t get_offset_of_RotationSpeed_8() { return static_cast<int32_t>(offsetof(MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7, ___RotationSpeed_8)); }
	inline float get_RotationSpeed_8() const { return ___RotationSpeed_8; }
	inline float* get_address_of_RotationSpeed_8() { return &___RotationSpeed_8; }
	inline void set_RotationSpeed_8(float value)
	{
		___RotationSpeed_8 = value;
	}

	inline static int32_t get_offset_of_ActivateButton_9() { return static_cast<int32_t>(offsetof(MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7, ___ActivateButton_9)); }
	inline int32_t get_ActivateButton_9() const { return ___ActivateButton_9; }
	inline int32_t* get_address_of_ActivateButton_9() { return &___ActivateButton_9; }
	inline void set_ActivateButton_9(int32_t value)
	{
		___ActivateButton_9 = value;
	}

	inline static int32_t get_offset_of_HorizontalAxisName_10() { return static_cast<int32_t>(offsetof(MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7, ___HorizontalAxisName_10)); }
	inline String_t* get_HorizontalAxisName_10() const { return ___HorizontalAxisName_10; }
	inline String_t** get_address_of_HorizontalAxisName_10() { return &___HorizontalAxisName_10; }
	inline void set_HorizontalAxisName_10(String_t* value)
	{
		___HorizontalAxisName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HorizontalAxisName_10), (void*)value);
	}

	inline static int32_t get_offset_of_VerticalAxisName_11() { return static_cast<int32_t>(offsetof(MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7, ___VerticalAxisName_11)); }
	inline String_t* get_VerticalAxisName_11() const { return ___VerticalAxisName_11; }
	inline String_t** get_address_of_VerticalAxisName_11() { return &___VerticalAxisName_11; }
	inline void set_VerticalAxisName_11(String_t* value)
	{
		___VerticalAxisName_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VerticalAxisName_11), (void*)value);
	}

	inline static int32_t get_offset_of_UpButton_12() { return static_cast<int32_t>(offsetof(MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7, ___UpButton_12)); }
	inline int32_t get_UpButton_12() const { return ___UpButton_12; }
	inline int32_t* get_address_of_UpButton_12() { return &___UpButton_12; }
	inline void set_UpButton_12(int32_t value)
	{
		___UpButton_12 = value;
	}

	inline static int32_t get_offset_of_DownButton_13() { return static_cast<int32_t>(offsetof(MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7, ___DownButton_13)); }
	inline int32_t get_DownButton_13() const { return ___DownButton_13; }
	inline int32_t* get_address_of_DownButton_13() { return &___DownButton_13; }
	inline void set_DownButton_13(int32_t value)
	{
		___DownButton_13 = value;
	}

	inline static int32_t get_offset_of_ControlsModeSwitch_14() { return static_cast<int32_t>(offsetof(MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7, ___ControlsModeSwitch_14)); }
	inline int32_t get_ControlsModeSwitch_14() const { return ___ControlsModeSwitch_14; }
	inline int32_t* get_address_of_ControlsModeSwitch_14() { return &___ControlsModeSwitch_14; }
	inline void set_ControlsModeSwitch_14(int32_t value)
	{
		___ControlsModeSwitch_14 = value;
	}

	inline static int32_t get_offset_of_TimescaleModificationButton_15() { return static_cast<int32_t>(offsetof(MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7, ___TimescaleModificationButton_15)); }
	inline int32_t get_TimescaleModificationButton_15() const { return ___TimescaleModificationButton_15; }
	inline int32_t* get_address_of_TimescaleModificationButton_15() { return &___TimescaleModificationButton_15; }
	inline void set_TimescaleModificationButton_15(int32_t value)
	{
		___TimescaleModificationButton_15 = value;
	}

	inline static int32_t get_offset_of_RunButton_16() { return static_cast<int32_t>(offsetof(MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7, ___RunButton_16)); }
	inline int32_t get_RunButton_16() const { return ___RunButton_16; }
	inline int32_t* get_address_of_RunButton_16() { return &___RunButton_16; }
	inline void set_RunButton_16(int32_t value)
	{
		___RunButton_16 = value;
	}

	inline static int32_t get_offset_of_MouseSensitivity_17() { return static_cast<int32_t>(offsetof(MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7, ___MouseSensitivity_17)); }
	inline float get_MouseSensitivity_17() const { return ___MouseSensitivity_17; }
	inline float* get_address_of_MouseSensitivity_17() { return &___MouseSensitivity_17; }
	inline void set_MouseSensitivity_17(float value)
	{
		___MouseSensitivity_17 = value;
	}

	inline static int32_t get_offset_of_MobileStickSensitivity_18() { return static_cast<int32_t>(offsetof(MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7, ___MobileStickSensitivity_18)); }
	inline float get_MobileStickSensitivity_18() const { return ___MobileStickSensitivity_18; }
	inline float* get_address_of_MobileStickSensitivity_18() { return &___MobileStickSensitivity_18; }
	inline void set_MobileStickSensitivity_18(float value)
	{
		___MobileStickSensitivity_18 = value;
	}

	inline static int32_t get_offset_of_TimescaleModifier_19() { return static_cast<int32_t>(offsetof(MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7, ___TimescaleModifier_19)); }
	inline float get_TimescaleModifier_19() const { return ___TimescaleModifier_19; }
	inline float* get_address_of_TimescaleModifier_19() { return &___TimescaleModifier_19; }
	inline void set_TimescaleModifier_19(float value)
	{
		___TimescaleModifier_19 = value;
	}

	inline static int32_t get_offset_of_AutoActivation_20() { return static_cast<int32_t>(offsetof(MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7, ___AutoActivation_20)); }
	inline bool get_AutoActivation_20() const { return ___AutoActivation_20; }
	inline bool* get_address_of_AutoActivation_20() { return &___AutoActivation_20; }
	inline void set_AutoActivation_20(bool value)
	{
		___AutoActivation_20 = value;
	}

	inline static int32_t get_offset_of_MovementEnabled_21() { return static_cast<int32_t>(offsetof(MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7, ___MovementEnabled_21)); }
	inline bool get_MovementEnabled_21() const { return ___MovementEnabled_21; }
	inline bool* get_address_of_MovementEnabled_21() { return &___MovementEnabled_21; }
	inline void set_MovementEnabled_21(bool value)
	{
		___MovementEnabled_21 = value;
	}

	inline static int32_t get_offset_of_RotationEnabled_22() { return static_cast<int32_t>(offsetof(MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7, ___RotationEnabled_22)); }
	inline bool get_RotationEnabled_22() const { return ___RotationEnabled_22; }
	inline bool* get_address_of_RotationEnabled_22() { return &___RotationEnabled_22; }
	inline void set_RotationEnabled_22(bool value)
	{
		___RotationEnabled_22 = value;
	}

	inline static int32_t get_offset_of_Active_23() { return static_cast<int32_t>(offsetof(MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7, ___Active_23)); }
	inline bool get_Active_23() const { return ___Active_23; }
	inline bool* get_address_of_Active_23() { return &___Active_23; }
	inline void set_Active_23(bool value)
	{
		___Active_23 = value;
	}

	inline static int32_t get_offset_of_TimeAltered_24() { return static_cast<int32_t>(offsetof(MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7, ___TimeAltered_24)); }
	inline bool get_TimeAltered_24() const { return ___TimeAltered_24; }
	inline bool* get_address_of_TimeAltered_24() { return &___TimeAltered_24; }
	inline void set_TimeAltered_24(bool value)
	{
		___TimeAltered_24 = value;
	}

	inline static int32_t get_offset_of_UseMobileControls_25() { return static_cast<int32_t>(offsetof(MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7, ___UseMobileControls_25)); }
	inline bool get_UseMobileControls_25() const { return ___UseMobileControls_25; }
	inline bool* get_address_of_UseMobileControls_25() { return &___UseMobileControls_25; }
	inline void set_UseMobileControls_25(bool value)
	{
		___UseMobileControls_25 = value;
	}

	inline static int32_t get_offset_of_LeftStickContainer_26() { return static_cast<int32_t>(offsetof(MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7, ___LeftStickContainer_26)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LeftStickContainer_26() const { return ___LeftStickContainer_26; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LeftStickContainer_26() { return &___LeftStickContainer_26; }
	inline void set_LeftStickContainer_26(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LeftStickContainer_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LeftStickContainer_26), (void*)value);
	}

	inline static int32_t get_offset_of_RightStickContainer_27() { return static_cast<int32_t>(offsetof(MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7, ___RightStickContainer_27)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_RightStickContainer_27() const { return ___RightStickContainer_27; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_RightStickContainer_27() { return &___RightStickContainer_27; }
	inline void set_RightStickContainer_27(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___RightStickContainer_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RightStickContainer_27), (void*)value);
	}

	inline static int32_t get_offset_of_LeftStick_28() { return static_cast<int32_t>(offsetof(MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7, ___LeftStick_28)); }
	inline MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE * get_LeftStick_28() const { return ___LeftStick_28; }
	inline MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE ** get_address_of_LeftStick_28() { return &___LeftStick_28; }
	inline void set_LeftStick_28(MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE * value)
	{
		___LeftStick_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LeftStick_28), (void*)value);
	}

	inline static int32_t get_offset_of_RightStick_29() { return static_cast<int32_t>(offsetof(MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7, ___RightStick_29)); }
	inline MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE * get_RightStick_29() const { return ___RightStick_29; }
	inline MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE ** get_address_of_RightStick_29() { return &___RightStick_29; }
	inline void set_RightStick_29(MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE * value)
	{
		___RightStick_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RightStick_29), (void*)value);
	}

	inline static int32_t get_offset_of__currentInput_30() { return static_cast<int32_t>(offsetof(MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7, ____currentInput_30)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__currentInput_30() const { return ____currentInput_30; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__currentInput_30() { return &____currentInput_30; }
	inline void set__currentInput_30(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____currentInput_30 = value;
	}

	inline static int32_t get_offset_of__lerpedInput_31() { return static_cast<int32_t>(offsetof(MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7, ____lerpedInput_31)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__lerpedInput_31() const { return ____lerpedInput_31; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__lerpedInput_31() { return &____lerpedInput_31; }
	inline void set__lerpedInput_31(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____lerpedInput_31 = value;
	}

	inline static int32_t get_offset_of__normalizedInput_32() { return static_cast<int32_t>(offsetof(MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7, ____normalizedInput_32)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__normalizedInput_32() const { return ____normalizedInput_32; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__normalizedInput_32() { return &____normalizedInput_32; }
	inline void set__normalizedInput_32(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____normalizedInput_32 = value;
	}

	inline static int32_t get_offset_of__acceleration_33() { return static_cast<int32_t>(offsetof(MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7, ____acceleration_33)); }
	inline float get__acceleration_33() const { return ____acceleration_33; }
	inline float* get_address_of__acceleration_33() { return &____acceleration_33; }
	inline void set__acceleration_33(float value)
	{
		____acceleration_33 = value;
	}

	inline static int32_t get_offset_of__deceleration_34() { return static_cast<int32_t>(offsetof(MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7, ____deceleration_34)); }
	inline float get__deceleration_34() const { return ____deceleration_34; }
	inline float* get_address_of__deceleration_34() { return &____deceleration_34; }
	inline void set__deceleration_34(float value)
	{
		____deceleration_34 = value;
	}

	inline static int32_t get_offset_of__movementVector_35() { return static_cast<int32_t>(offsetof(MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7, ____movementVector_35)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__movementVector_35() const { return ____movementVector_35; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__movementVector_35() { return &____movementVector_35; }
	inline void set__movementVector_35(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____movementVector_35 = value;
	}

	inline static int32_t get_offset_of__speedMultiplier_36() { return static_cast<int32_t>(offsetof(MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7, ____speedMultiplier_36)); }
	inline float get__speedMultiplier_36() const { return ____speedMultiplier_36; }
	inline float* get_address_of__speedMultiplier_36() { return &____speedMultiplier_36; }
	inline void set__speedMultiplier_36(float value)
	{
		____speedMultiplier_36 = value;
	}

	inline static int32_t get_offset_of__newEulerAngles_37() { return static_cast<int32_t>(offsetof(MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7, ____newEulerAngles_37)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__newEulerAngles_37() const { return ____newEulerAngles_37; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__newEulerAngles_37() { return &____newEulerAngles_37; }
	inline void set__newEulerAngles_37(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____newEulerAngles_37 = value;
	}
};


// MoreMountains.Tools.MMMonoBehaviour
struct MMMonoBehaviour_tCF4A374C5050AB4B331002CA4B9CF6ACA984B03C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// MoreMountains.Tools.MMTouchJoystick
struct MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Camera MoreMountains.Tools.MMTouchJoystick::TargetCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___TargetCamera_4;
	// System.Single MoreMountains.Tools.MMTouchJoystick::PressedOpacity
	float ___PressedOpacity_5;
	// System.Boolean MoreMountains.Tools.MMTouchJoystick::HorizontalAxisEnabled
	bool ___HorizontalAxisEnabled_6;
	// System.Boolean MoreMountains.Tools.MMTouchJoystick::VerticalAxisEnabled
	bool ___VerticalAxisEnabled_7;
	// System.Single MoreMountains.Tools.MMTouchJoystick::MaxRange
	float ___MaxRange_8;
	// MoreMountains.Tools.JoystickEvent MoreMountains.Tools.MMTouchJoystick::JoystickValue
	JoystickEvent_t3E8916F012303AE70FF13261017E9F031D54737B * ___JoystickValue_9;
	// UnityEngine.Transform MoreMountains.Tools.MMTouchJoystick::RotatingIndicator
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___RotatingIndicator_10;
	// System.Single MoreMountains.Tools.MMTouchJoystick::RotatingIndicatorThreshold
	float ___RotatingIndicatorThreshold_11;
	// UnityEngine.RenderMode MoreMountains.Tools.MMTouchJoystick::<ParentCanvasRenderMode>k__BackingField
	int32_t ___U3CParentCanvasRenderModeU3Ek__BackingField_12;
	// UnityEngine.Vector2 MoreMountains.Tools.MMTouchJoystick::_neutralPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ____neutralPosition_13;
	// UnityEngine.Vector2 MoreMountains.Tools.MMTouchJoystick::_joystickValue
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ____joystickValue_14;
	// UnityEngine.RectTransform MoreMountains.Tools.MMTouchJoystick::_canvasRectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ____canvasRectTransform_15;
	// UnityEngine.Vector2 MoreMountains.Tools.MMTouchJoystick::_newTargetPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ____newTargetPosition_16;
	// UnityEngine.Vector3 MoreMountains.Tools.MMTouchJoystick::_newJoystickPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____newJoystickPosition_17;
	// System.Single MoreMountains.Tools.MMTouchJoystick::_initialZPosition
	float ____initialZPosition_18;
	// UnityEngine.CanvasGroup MoreMountains.Tools.MMTouchJoystick::_canvasGroup
	CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * ____canvasGroup_19;
	// System.Single MoreMountains.Tools.MMTouchJoystick::_initialOpacity
	float ____initialOpacity_20;
	// UnityEngine.Transform MoreMountains.Tools.MMTouchJoystick::_knobTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____knobTransform_21;
	// System.Boolean MoreMountains.Tools.MMTouchJoystick::_rotatingIndicatorIsNotNull
	bool ____rotatingIndicatorIsNotNull_22;

public:
	inline static int32_t get_offset_of_TargetCamera_4() { return static_cast<int32_t>(offsetof(MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE, ___TargetCamera_4)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_TargetCamera_4() const { return ___TargetCamera_4; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_TargetCamera_4() { return &___TargetCamera_4; }
	inline void set_TargetCamera_4(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___TargetCamera_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetCamera_4), (void*)value);
	}

	inline static int32_t get_offset_of_PressedOpacity_5() { return static_cast<int32_t>(offsetof(MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE, ___PressedOpacity_5)); }
	inline float get_PressedOpacity_5() const { return ___PressedOpacity_5; }
	inline float* get_address_of_PressedOpacity_5() { return &___PressedOpacity_5; }
	inline void set_PressedOpacity_5(float value)
	{
		___PressedOpacity_5 = value;
	}

	inline static int32_t get_offset_of_HorizontalAxisEnabled_6() { return static_cast<int32_t>(offsetof(MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE, ___HorizontalAxisEnabled_6)); }
	inline bool get_HorizontalAxisEnabled_6() const { return ___HorizontalAxisEnabled_6; }
	inline bool* get_address_of_HorizontalAxisEnabled_6() { return &___HorizontalAxisEnabled_6; }
	inline void set_HorizontalAxisEnabled_6(bool value)
	{
		___HorizontalAxisEnabled_6 = value;
	}

	inline static int32_t get_offset_of_VerticalAxisEnabled_7() { return static_cast<int32_t>(offsetof(MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE, ___VerticalAxisEnabled_7)); }
	inline bool get_VerticalAxisEnabled_7() const { return ___VerticalAxisEnabled_7; }
	inline bool* get_address_of_VerticalAxisEnabled_7() { return &___VerticalAxisEnabled_7; }
	inline void set_VerticalAxisEnabled_7(bool value)
	{
		___VerticalAxisEnabled_7 = value;
	}

	inline static int32_t get_offset_of_MaxRange_8() { return static_cast<int32_t>(offsetof(MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE, ___MaxRange_8)); }
	inline float get_MaxRange_8() const { return ___MaxRange_8; }
	inline float* get_address_of_MaxRange_8() { return &___MaxRange_8; }
	inline void set_MaxRange_8(float value)
	{
		___MaxRange_8 = value;
	}

	inline static int32_t get_offset_of_JoystickValue_9() { return static_cast<int32_t>(offsetof(MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE, ___JoystickValue_9)); }
	inline JoystickEvent_t3E8916F012303AE70FF13261017E9F031D54737B * get_JoystickValue_9() const { return ___JoystickValue_9; }
	inline JoystickEvent_t3E8916F012303AE70FF13261017E9F031D54737B ** get_address_of_JoystickValue_9() { return &___JoystickValue_9; }
	inline void set_JoystickValue_9(JoystickEvent_t3E8916F012303AE70FF13261017E9F031D54737B * value)
	{
		___JoystickValue_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___JoystickValue_9), (void*)value);
	}

	inline static int32_t get_offset_of_RotatingIndicator_10() { return static_cast<int32_t>(offsetof(MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE, ___RotatingIndicator_10)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_RotatingIndicator_10() const { return ___RotatingIndicator_10; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_RotatingIndicator_10() { return &___RotatingIndicator_10; }
	inline void set_RotatingIndicator_10(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___RotatingIndicator_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RotatingIndicator_10), (void*)value);
	}

	inline static int32_t get_offset_of_RotatingIndicatorThreshold_11() { return static_cast<int32_t>(offsetof(MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE, ___RotatingIndicatorThreshold_11)); }
	inline float get_RotatingIndicatorThreshold_11() const { return ___RotatingIndicatorThreshold_11; }
	inline float* get_address_of_RotatingIndicatorThreshold_11() { return &___RotatingIndicatorThreshold_11; }
	inline void set_RotatingIndicatorThreshold_11(float value)
	{
		___RotatingIndicatorThreshold_11 = value;
	}

	inline static int32_t get_offset_of_U3CParentCanvasRenderModeU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE, ___U3CParentCanvasRenderModeU3Ek__BackingField_12)); }
	inline int32_t get_U3CParentCanvasRenderModeU3Ek__BackingField_12() const { return ___U3CParentCanvasRenderModeU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CParentCanvasRenderModeU3Ek__BackingField_12() { return &___U3CParentCanvasRenderModeU3Ek__BackingField_12; }
	inline void set_U3CParentCanvasRenderModeU3Ek__BackingField_12(int32_t value)
	{
		___U3CParentCanvasRenderModeU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of__neutralPosition_13() { return static_cast<int32_t>(offsetof(MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE, ____neutralPosition_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get__neutralPosition_13() const { return ____neutralPosition_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of__neutralPosition_13() { return &____neutralPosition_13; }
	inline void set__neutralPosition_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		____neutralPosition_13 = value;
	}

	inline static int32_t get_offset_of__joystickValue_14() { return static_cast<int32_t>(offsetof(MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE, ____joystickValue_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get__joystickValue_14() const { return ____joystickValue_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of__joystickValue_14() { return &____joystickValue_14; }
	inline void set__joystickValue_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		____joystickValue_14 = value;
	}

	inline static int32_t get_offset_of__canvasRectTransform_15() { return static_cast<int32_t>(offsetof(MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE, ____canvasRectTransform_15)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get__canvasRectTransform_15() const { return ____canvasRectTransform_15; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of__canvasRectTransform_15() { return &____canvasRectTransform_15; }
	inline void set__canvasRectTransform_15(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		____canvasRectTransform_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____canvasRectTransform_15), (void*)value);
	}

	inline static int32_t get_offset_of__newTargetPosition_16() { return static_cast<int32_t>(offsetof(MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE, ____newTargetPosition_16)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get__newTargetPosition_16() const { return ____newTargetPosition_16; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of__newTargetPosition_16() { return &____newTargetPosition_16; }
	inline void set__newTargetPosition_16(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		____newTargetPosition_16 = value;
	}

	inline static int32_t get_offset_of__newJoystickPosition_17() { return static_cast<int32_t>(offsetof(MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE, ____newJoystickPosition_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__newJoystickPosition_17() const { return ____newJoystickPosition_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__newJoystickPosition_17() { return &____newJoystickPosition_17; }
	inline void set__newJoystickPosition_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____newJoystickPosition_17 = value;
	}

	inline static int32_t get_offset_of__initialZPosition_18() { return static_cast<int32_t>(offsetof(MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE, ____initialZPosition_18)); }
	inline float get__initialZPosition_18() const { return ____initialZPosition_18; }
	inline float* get_address_of__initialZPosition_18() { return &____initialZPosition_18; }
	inline void set__initialZPosition_18(float value)
	{
		____initialZPosition_18 = value;
	}

	inline static int32_t get_offset_of__canvasGroup_19() { return static_cast<int32_t>(offsetof(MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE, ____canvasGroup_19)); }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * get__canvasGroup_19() const { return ____canvasGroup_19; }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F ** get_address_of__canvasGroup_19() { return &____canvasGroup_19; }
	inline void set__canvasGroup_19(CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * value)
	{
		____canvasGroup_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____canvasGroup_19), (void*)value);
	}

	inline static int32_t get_offset_of__initialOpacity_20() { return static_cast<int32_t>(offsetof(MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE, ____initialOpacity_20)); }
	inline float get__initialOpacity_20() const { return ____initialOpacity_20; }
	inline float* get_address_of__initialOpacity_20() { return &____initialOpacity_20; }
	inline void set__initialOpacity_20(float value)
	{
		____initialOpacity_20 = value;
	}

	inline static int32_t get_offset_of__knobTransform_21() { return static_cast<int32_t>(offsetof(MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE, ____knobTransform_21)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__knobTransform_21() const { return ____knobTransform_21; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__knobTransform_21() { return &____knobTransform_21; }
	inline void set__knobTransform_21(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____knobTransform_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____knobTransform_21), (void*)value);
	}

	inline static int32_t get_offset_of__rotatingIndicatorIsNotNull_22() { return static_cast<int32_t>(offsetof(MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE, ____rotatingIndicatorIsNotNull_22)); }
	inline bool get__rotatingIndicatorIsNotNull_22() const { return ____rotatingIndicatorIsNotNull_22; }
	inline bool* get_address_of__rotatingIndicatorIsNotNull_22() { return &____rotatingIndicatorIsNotNull_22; }
	inline void set__rotatingIndicatorIsNotNull_22(bool value)
	{
		____rotatingIndicatorIsNotNull_22 = value;
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


// MoreMountains.Tools.MMProgressBar
struct MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E  : public MMMonoBehaviour_tCF4A374C5050AB4B331002CA4B9CF6ACA984B03C
{
public:
	// System.String MoreMountains.Tools.MMProgressBar::PlayerID
	String_t* ___PlayerID_4;
	// UnityEngine.Transform MoreMountains.Tools.MMProgressBar::ForegroundBar
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___ForegroundBar_5;
	// UnityEngine.Transform MoreMountains.Tools.MMProgressBar::DelayedBarDecreasing
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___DelayedBarDecreasing_6;
	// UnityEngine.Transform MoreMountains.Tools.MMProgressBar::DelayedBarIncreasing
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___DelayedBarIncreasing_7;
	// System.Single MoreMountains.Tools.MMProgressBar::MinimumBarFillValue
	float ___MinimumBarFillValue_8;
	// System.Single MoreMountains.Tools.MMProgressBar::MaximumBarFillValue
	float ___MaximumBarFillValue_9;
	// System.Boolean MoreMountains.Tools.MMProgressBar::SetInitialFillValueOnStart
	bool ___SetInitialFillValueOnStart_10;
	// System.Single MoreMountains.Tools.MMProgressBar::InitialFillValue
	float ___InitialFillValue_11;
	// MoreMountains.Tools.MMProgressBar/BarDirections MoreMountains.Tools.MMProgressBar::BarDirection
	int32_t ___BarDirection_12;
	// MoreMountains.Tools.MMProgressBar/FillModes MoreMountains.Tools.MMProgressBar::FillMode
	int32_t ___FillMode_13;
	// MoreMountains.Tools.MMProgressBar/TimeScales MoreMountains.Tools.MMProgressBar::TimeScale
	int32_t ___TimeScale_14;
	// MoreMountains.Tools.MMProgressBar/BarFillModes MoreMountains.Tools.MMProgressBar::BarFillMode
	int32_t ___BarFillMode_15;
	// System.Boolean MoreMountains.Tools.MMProgressBar::LerpForegroundBar
	bool ___LerpForegroundBar_16;
	// System.Single MoreMountains.Tools.MMProgressBar::LerpForegroundBarSpeedDecreasing
	float ___LerpForegroundBarSpeedDecreasing_17;
	// System.Single MoreMountains.Tools.MMProgressBar::LerpForegroundBarSpeedIncreasing
	float ___LerpForegroundBarSpeedIncreasing_18;
	// System.Single MoreMountains.Tools.MMProgressBar::LerpForegroundBarDurationDecreasing
	float ___LerpForegroundBarDurationDecreasing_19;
	// System.Single MoreMountains.Tools.MMProgressBar::LerpForegroundBarDurationIncreasing
	float ___LerpForegroundBarDurationIncreasing_20;
	// UnityEngine.AnimationCurve MoreMountains.Tools.MMProgressBar::LerpForegroundBarCurveDecreasing
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___LerpForegroundBarCurveDecreasing_21;
	// UnityEngine.AnimationCurve MoreMountains.Tools.MMProgressBar::LerpForegroundBarCurveIncreasing
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___LerpForegroundBarCurveIncreasing_22;
	// System.Single MoreMountains.Tools.MMProgressBar::DecreasingDelay
	float ___DecreasingDelay_23;
	// System.Boolean MoreMountains.Tools.MMProgressBar::LerpDecreasingDelayedBar
	bool ___LerpDecreasingDelayedBar_24;
	// System.Single MoreMountains.Tools.MMProgressBar::LerpDecreasingDelayedBarSpeed
	float ___LerpDecreasingDelayedBarSpeed_25;
	// System.Single MoreMountains.Tools.MMProgressBar::LerpDecreasingDelayedBarDuration
	float ___LerpDecreasingDelayedBarDuration_26;
	// UnityEngine.AnimationCurve MoreMountains.Tools.MMProgressBar::LerpDecreasingDelayedBarCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___LerpDecreasingDelayedBarCurve_27;
	// System.Single MoreMountains.Tools.MMProgressBar::IncreasingDelay
	float ___IncreasingDelay_28;
	// System.Boolean MoreMountains.Tools.MMProgressBar::LerpIncreasingDelayedBar
	bool ___LerpIncreasingDelayedBar_29;
	// System.Single MoreMountains.Tools.MMProgressBar::LerpIncreasingDelayedBarSpeed
	float ___LerpIncreasingDelayedBarSpeed_30;
	// System.Single MoreMountains.Tools.MMProgressBar::LerpIncreasingDelayedBarDuration
	float ___LerpIncreasingDelayedBarDuration_31;
	// UnityEngine.AnimationCurve MoreMountains.Tools.MMProgressBar::LerpIncreasingDelayedBarCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___LerpIncreasingDelayedBarCurve_32;
	// System.Boolean MoreMountains.Tools.MMProgressBar::BumpScaleOnChange
	bool ___BumpScaleOnChange_33;
	// System.Boolean MoreMountains.Tools.MMProgressBar::BumpOnIncrease
	bool ___BumpOnIncrease_34;
	// System.Boolean MoreMountains.Tools.MMProgressBar::BumpOnDecrease
	bool ___BumpOnDecrease_35;
	// System.Single MoreMountains.Tools.MMProgressBar::BumpDuration
	float ___BumpDuration_36;
	// System.Boolean MoreMountains.Tools.MMProgressBar::ChangeColorWhenBumping
	bool ___ChangeColorWhenBumping_37;
	// UnityEngine.Color MoreMountains.Tools.MMProgressBar::BumpColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___BumpColor_38;
	// UnityEngine.AnimationCurve MoreMountains.Tools.MMProgressBar::BumpScaleAnimationCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___BumpScaleAnimationCurve_39;
	// UnityEngine.AnimationCurve MoreMountains.Tools.MMProgressBar::BumpColorAnimationCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___BumpColorAnimationCurve_40;
	// System.Boolean MoreMountains.Tools.MMProgressBar::<Bumping>k__BackingField
	bool ___U3CBumpingU3Ek__BackingField_41;
	// UnityEngine.Events.UnityEvent MoreMountains.Tools.MMProgressBar::OnBump
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnBump_42;
	// UnityEngine.Events.UnityEvent MoreMountains.Tools.MMProgressBar::OnBarMovementDecreasingStart
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnBarMovementDecreasingStart_43;
	// UnityEngine.Events.UnityEvent MoreMountains.Tools.MMProgressBar::OnBarMovementDecreasingStop
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnBarMovementDecreasingStop_44;
	// UnityEngine.Events.UnityEvent MoreMountains.Tools.MMProgressBar::OnBarMovementIncreasingStart
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnBarMovementIncreasingStart_45;
	// UnityEngine.Events.UnityEvent MoreMountains.Tools.MMProgressBar::OnBarMovementIncreasingStop
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnBarMovementIncreasingStop_46;
	// UnityEngine.UI.Text MoreMountains.Tools.MMProgressBar::PercentageText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___PercentageText_47;
	// System.String MoreMountains.Tools.MMProgressBar::TextPrefix
	String_t* ___TextPrefix_48;
	// System.String MoreMountains.Tools.MMProgressBar::TextSuffix
	String_t* ___TextSuffix_49;
	// System.Single MoreMountains.Tools.MMProgressBar::TextValueMultiplier
	float ___TextValueMultiplier_50;
	// System.String MoreMountains.Tools.MMProgressBar::TextFormat
	String_t* ___TextFormat_51;
	// System.Single MoreMountains.Tools.MMProgressBar::DebugNewTargetValue
	float ___DebugNewTargetValue_52;
	// System.Boolean MoreMountains.Tools.MMProgressBar::DebugUpdateBarButton
	bool ___DebugUpdateBarButton_53;
	// System.Boolean MoreMountains.Tools.MMProgressBar::DebugSetBarButton
	bool ___DebugSetBarButton_54;
	// System.Boolean MoreMountains.Tools.MMProgressBar::TestBumpButton
	bool ___TestBumpButton_55;
	// System.Boolean MoreMountains.Tools.MMProgressBar::Plus10PercentButton
	bool ___Plus10PercentButton_56;
	// System.Boolean MoreMountains.Tools.MMProgressBar::Minus10PercentButton
	bool ___Minus10PercentButton_57;
	// System.Single MoreMountains.Tools.MMProgressBar::BarProgress
	float ___BarProgress_58;
	// System.Single MoreMountains.Tools.MMProgressBar::BarTarget
	float ___BarTarget_59;
	// System.Single MoreMountains.Tools.MMProgressBar::DelayedBarIncreasingProgress
	float ___DelayedBarIncreasingProgress_60;
	// System.Single MoreMountains.Tools.MMProgressBar::DelayedBarDecreasingProgress
	float ___DelayedBarDecreasingProgress_61;
	// System.Boolean MoreMountains.Tools.MMProgressBar::_initialized
	bool ____initialized_62;
	// UnityEngine.Vector2 MoreMountains.Tools.MMProgressBar::_initialBarSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ____initialBarSize_63;
	// UnityEngine.Color MoreMountains.Tools.MMProgressBar::_initialColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____initialColor_64;
	// UnityEngine.Vector3 MoreMountains.Tools.MMProgressBar::_initialScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____initialScale_65;
	// UnityEngine.UI.Image MoreMountains.Tools.MMProgressBar::_foregroundImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ____foregroundImage_66;
	// UnityEngine.UI.Image MoreMountains.Tools.MMProgressBar::_delayedDecreasingImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ____delayedDecreasingImage_67;
	// UnityEngine.UI.Image MoreMountains.Tools.MMProgressBar::_delayedIncreasingImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ____delayedIncreasingImage_68;
	// UnityEngine.Vector3 MoreMountains.Tools.MMProgressBar::_targetLocalScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____targetLocalScale_69;
	// System.Single MoreMountains.Tools.MMProgressBar::_newPercent
	float ____newPercent_70;
	// System.Single MoreMountains.Tools.MMProgressBar::_percentLastTimeBarWasUpdated
	float ____percentLastTimeBarWasUpdated_71;
	// System.Single MoreMountains.Tools.MMProgressBar::_lastUpdateTimestamp
	float ____lastUpdateTimestamp_72;
	// System.Single MoreMountains.Tools.MMProgressBar::_time
	float ____time_73;
	// System.Single MoreMountains.Tools.MMProgressBar::_deltaTime
	float ____deltaTime_74;
	// System.Int32 MoreMountains.Tools.MMProgressBar::_direction
	int32_t ____direction_75;
	// UnityEngine.Coroutine MoreMountains.Tools.MMProgressBar::_coroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____coroutine_76;
	// System.Boolean MoreMountains.Tools.MMProgressBar::_coroutineShouldRun
	bool ____coroutineShouldRun_77;
	// System.Boolean MoreMountains.Tools.MMProgressBar::_isDelayedBarIncreasingNotNull
	bool ____isDelayedBarIncreasingNotNull_78;
	// System.Boolean MoreMountains.Tools.MMProgressBar::_isDelayedBarDecreasingNotNull
	bool ____isDelayedBarDecreasingNotNull_79;
	// System.Boolean MoreMountains.Tools.MMProgressBar::_actualUpdate
	bool ____actualUpdate_80;
	// UnityEngine.Vector2 MoreMountains.Tools.MMProgressBar::_anchorVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ____anchorVector_81;
	// System.Single MoreMountains.Tools.MMProgressBar::_delayedBarDecreasingProgress
	float ____delayedBarDecreasingProgress_82;
	// System.Single MoreMountains.Tools.MMProgressBar::_delayedBarIncreasingProgress
	float ____delayedBarIncreasingProgress_83;
	// MoreMountains.Tools.MMProgressBar/MMProgressBarStates MoreMountains.Tools.MMProgressBar::CurrentState
	int32_t ___CurrentState_84;

public:
	inline static int32_t get_offset_of_PlayerID_4() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___PlayerID_4)); }
	inline String_t* get_PlayerID_4() const { return ___PlayerID_4; }
	inline String_t** get_address_of_PlayerID_4() { return &___PlayerID_4; }
	inline void set_PlayerID_4(String_t* value)
	{
		___PlayerID_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayerID_4), (void*)value);
	}

	inline static int32_t get_offset_of_ForegroundBar_5() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___ForegroundBar_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_ForegroundBar_5() const { return ___ForegroundBar_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_ForegroundBar_5() { return &___ForegroundBar_5; }
	inline void set_ForegroundBar_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___ForegroundBar_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ForegroundBar_5), (void*)value);
	}

	inline static int32_t get_offset_of_DelayedBarDecreasing_6() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___DelayedBarDecreasing_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_DelayedBarDecreasing_6() const { return ___DelayedBarDecreasing_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_DelayedBarDecreasing_6() { return &___DelayedBarDecreasing_6; }
	inline void set_DelayedBarDecreasing_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___DelayedBarDecreasing_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DelayedBarDecreasing_6), (void*)value);
	}

	inline static int32_t get_offset_of_DelayedBarIncreasing_7() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___DelayedBarIncreasing_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_DelayedBarIncreasing_7() const { return ___DelayedBarIncreasing_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_DelayedBarIncreasing_7() { return &___DelayedBarIncreasing_7; }
	inline void set_DelayedBarIncreasing_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___DelayedBarIncreasing_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DelayedBarIncreasing_7), (void*)value);
	}

	inline static int32_t get_offset_of_MinimumBarFillValue_8() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___MinimumBarFillValue_8)); }
	inline float get_MinimumBarFillValue_8() const { return ___MinimumBarFillValue_8; }
	inline float* get_address_of_MinimumBarFillValue_8() { return &___MinimumBarFillValue_8; }
	inline void set_MinimumBarFillValue_8(float value)
	{
		___MinimumBarFillValue_8 = value;
	}

	inline static int32_t get_offset_of_MaximumBarFillValue_9() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___MaximumBarFillValue_9)); }
	inline float get_MaximumBarFillValue_9() const { return ___MaximumBarFillValue_9; }
	inline float* get_address_of_MaximumBarFillValue_9() { return &___MaximumBarFillValue_9; }
	inline void set_MaximumBarFillValue_9(float value)
	{
		___MaximumBarFillValue_9 = value;
	}

	inline static int32_t get_offset_of_SetInitialFillValueOnStart_10() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___SetInitialFillValueOnStart_10)); }
	inline bool get_SetInitialFillValueOnStart_10() const { return ___SetInitialFillValueOnStart_10; }
	inline bool* get_address_of_SetInitialFillValueOnStart_10() { return &___SetInitialFillValueOnStart_10; }
	inline void set_SetInitialFillValueOnStart_10(bool value)
	{
		___SetInitialFillValueOnStart_10 = value;
	}

	inline static int32_t get_offset_of_InitialFillValue_11() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___InitialFillValue_11)); }
	inline float get_InitialFillValue_11() const { return ___InitialFillValue_11; }
	inline float* get_address_of_InitialFillValue_11() { return &___InitialFillValue_11; }
	inline void set_InitialFillValue_11(float value)
	{
		___InitialFillValue_11 = value;
	}

	inline static int32_t get_offset_of_BarDirection_12() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___BarDirection_12)); }
	inline int32_t get_BarDirection_12() const { return ___BarDirection_12; }
	inline int32_t* get_address_of_BarDirection_12() { return &___BarDirection_12; }
	inline void set_BarDirection_12(int32_t value)
	{
		___BarDirection_12 = value;
	}

	inline static int32_t get_offset_of_FillMode_13() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___FillMode_13)); }
	inline int32_t get_FillMode_13() const { return ___FillMode_13; }
	inline int32_t* get_address_of_FillMode_13() { return &___FillMode_13; }
	inline void set_FillMode_13(int32_t value)
	{
		___FillMode_13 = value;
	}

	inline static int32_t get_offset_of_TimeScale_14() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___TimeScale_14)); }
	inline int32_t get_TimeScale_14() const { return ___TimeScale_14; }
	inline int32_t* get_address_of_TimeScale_14() { return &___TimeScale_14; }
	inline void set_TimeScale_14(int32_t value)
	{
		___TimeScale_14 = value;
	}

	inline static int32_t get_offset_of_BarFillMode_15() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___BarFillMode_15)); }
	inline int32_t get_BarFillMode_15() const { return ___BarFillMode_15; }
	inline int32_t* get_address_of_BarFillMode_15() { return &___BarFillMode_15; }
	inline void set_BarFillMode_15(int32_t value)
	{
		___BarFillMode_15 = value;
	}

	inline static int32_t get_offset_of_LerpForegroundBar_16() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___LerpForegroundBar_16)); }
	inline bool get_LerpForegroundBar_16() const { return ___LerpForegroundBar_16; }
	inline bool* get_address_of_LerpForegroundBar_16() { return &___LerpForegroundBar_16; }
	inline void set_LerpForegroundBar_16(bool value)
	{
		___LerpForegroundBar_16 = value;
	}

	inline static int32_t get_offset_of_LerpForegroundBarSpeedDecreasing_17() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___LerpForegroundBarSpeedDecreasing_17)); }
	inline float get_LerpForegroundBarSpeedDecreasing_17() const { return ___LerpForegroundBarSpeedDecreasing_17; }
	inline float* get_address_of_LerpForegroundBarSpeedDecreasing_17() { return &___LerpForegroundBarSpeedDecreasing_17; }
	inline void set_LerpForegroundBarSpeedDecreasing_17(float value)
	{
		___LerpForegroundBarSpeedDecreasing_17 = value;
	}

	inline static int32_t get_offset_of_LerpForegroundBarSpeedIncreasing_18() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___LerpForegroundBarSpeedIncreasing_18)); }
	inline float get_LerpForegroundBarSpeedIncreasing_18() const { return ___LerpForegroundBarSpeedIncreasing_18; }
	inline float* get_address_of_LerpForegroundBarSpeedIncreasing_18() { return &___LerpForegroundBarSpeedIncreasing_18; }
	inline void set_LerpForegroundBarSpeedIncreasing_18(float value)
	{
		___LerpForegroundBarSpeedIncreasing_18 = value;
	}

	inline static int32_t get_offset_of_LerpForegroundBarDurationDecreasing_19() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___LerpForegroundBarDurationDecreasing_19)); }
	inline float get_LerpForegroundBarDurationDecreasing_19() const { return ___LerpForegroundBarDurationDecreasing_19; }
	inline float* get_address_of_LerpForegroundBarDurationDecreasing_19() { return &___LerpForegroundBarDurationDecreasing_19; }
	inline void set_LerpForegroundBarDurationDecreasing_19(float value)
	{
		___LerpForegroundBarDurationDecreasing_19 = value;
	}

	inline static int32_t get_offset_of_LerpForegroundBarDurationIncreasing_20() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___LerpForegroundBarDurationIncreasing_20)); }
	inline float get_LerpForegroundBarDurationIncreasing_20() const { return ___LerpForegroundBarDurationIncreasing_20; }
	inline float* get_address_of_LerpForegroundBarDurationIncreasing_20() { return &___LerpForegroundBarDurationIncreasing_20; }
	inline void set_LerpForegroundBarDurationIncreasing_20(float value)
	{
		___LerpForegroundBarDurationIncreasing_20 = value;
	}

	inline static int32_t get_offset_of_LerpForegroundBarCurveDecreasing_21() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___LerpForegroundBarCurveDecreasing_21)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_LerpForegroundBarCurveDecreasing_21() const { return ___LerpForegroundBarCurveDecreasing_21; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_LerpForegroundBarCurveDecreasing_21() { return &___LerpForegroundBarCurveDecreasing_21; }
	inline void set_LerpForegroundBarCurveDecreasing_21(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___LerpForegroundBarCurveDecreasing_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LerpForegroundBarCurveDecreasing_21), (void*)value);
	}

	inline static int32_t get_offset_of_LerpForegroundBarCurveIncreasing_22() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___LerpForegroundBarCurveIncreasing_22)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_LerpForegroundBarCurveIncreasing_22() const { return ___LerpForegroundBarCurveIncreasing_22; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_LerpForegroundBarCurveIncreasing_22() { return &___LerpForegroundBarCurveIncreasing_22; }
	inline void set_LerpForegroundBarCurveIncreasing_22(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___LerpForegroundBarCurveIncreasing_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LerpForegroundBarCurveIncreasing_22), (void*)value);
	}

	inline static int32_t get_offset_of_DecreasingDelay_23() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___DecreasingDelay_23)); }
	inline float get_DecreasingDelay_23() const { return ___DecreasingDelay_23; }
	inline float* get_address_of_DecreasingDelay_23() { return &___DecreasingDelay_23; }
	inline void set_DecreasingDelay_23(float value)
	{
		___DecreasingDelay_23 = value;
	}

	inline static int32_t get_offset_of_LerpDecreasingDelayedBar_24() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___LerpDecreasingDelayedBar_24)); }
	inline bool get_LerpDecreasingDelayedBar_24() const { return ___LerpDecreasingDelayedBar_24; }
	inline bool* get_address_of_LerpDecreasingDelayedBar_24() { return &___LerpDecreasingDelayedBar_24; }
	inline void set_LerpDecreasingDelayedBar_24(bool value)
	{
		___LerpDecreasingDelayedBar_24 = value;
	}

	inline static int32_t get_offset_of_LerpDecreasingDelayedBarSpeed_25() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___LerpDecreasingDelayedBarSpeed_25)); }
	inline float get_LerpDecreasingDelayedBarSpeed_25() const { return ___LerpDecreasingDelayedBarSpeed_25; }
	inline float* get_address_of_LerpDecreasingDelayedBarSpeed_25() { return &___LerpDecreasingDelayedBarSpeed_25; }
	inline void set_LerpDecreasingDelayedBarSpeed_25(float value)
	{
		___LerpDecreasingDelayedBarSpeed_25 = value;
	}

	inline static int32_t get_offset_of_LerpDecreasingDelayedBarDuration_26() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___LerpDecreasingDelayedBarDuration_26)); }
	inline float get_LerpDecreasingDelayedBarDuration_26() const { return ___LerpDecreasingDelayedBarDuration_26; }
	inline float* get_address_of_LerpDecreasingDelayedBarDuration_26() { return &___LerpDecreasingDelayedBarDuration_26; }
	inline void set_LerpDecreasingDelayedBarDuration_26(float value)
	{
		___LerpDecreasingDelayedBarDuration_26 = value;
	}

	inline static int32_t get_offset_of_LerpDecreasingDelayedBarCurve_27() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___LerpDecreasingDelayedBarCurve_27)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_LerpDecreasingDelayedBarCurve_27() const { return ___LerpDecreasingDelayedBarCurve_27; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_LerpDecreasingDelayedBarCurve_27() { return &___LerpDecreasingDelayedBarCurve_27; }
	inline void set_LerpDecreasingDelayedBarCurve_27(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___LerpDecreasingDelayedBarCurve_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LerpDecreasingDelayedBarCurve_27), (void*)value);
	}

	inline static int32_t get_offset_of_IncreasingDelay_28() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___IncreasingDelay_28)); }
	inline float get_IncreasingDelay_28() const { return ___IncreasingDelay_28; }
	inline float* get_address_of_IncreasingDelay_28() { return &___IncreasingDelay_28; }
	inline void set_IncreasingDelay_28(float value)
	{
		___IncreasingDelay_28 = value;
	}

	inline static int32_t get_offset_of_LerpIncreasingDelayedBar_29() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___LerpIncreasingDelayedBar_29)); }
	inline bool get_LerpIncreasingDelayedBar_29() const { return ___LerpIncreasingDelayedBar_29; }
	inline bool* get_address_of_LerpIncreasingDelayedBar_29() { return &___LerpIncreasingDelayedBar_29; }
	inline void set_LerpIncreasingDelayedBar_29(bool value)
	{
		___LerpIncreasingDelayedBar_29 = value;
	}

	inline static int32_t get_offset_of_LerpIncreasingDelayedBarSpeed_30() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___LerpIncreasingDelayedBarSpeed_30)); }
	inline float get_LerpIncreasingDelayedBarSpeed_30() const { return ___LerpIncreasingDelayedBarSpeed_30; }
	inline float* get_address_of_LerpIncreasingDelayedBarSpeed_30() { return &___LerpIncreasingDelayedBarSpeed_30; }
	inline void set_LerpIncreasingDelayedBarSpeed_30(float value)
	{
		___LerpIncreasingDelayedBarSpeed_30 = value;
	}

	inline static int32_t get_offset_of_LerpIncreasingDelayedBarDuration_31() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___LerpIncreasingDelayedBarDuration_31)); }
	inline float get_LerpIncreasingDelayedBarDuration_31() const { return ___LerpIncreasingDelayedBarDuration_31; }
	inline float* get_address_of_LerpIncreasingDelayedBarDuration_31() { return &___LerpIncreasingDelayedBarDuration_31; }
	inline void set_LerpIncreasingDelayedBarDuration_31(float value)
	{
		___LerpIncreasingDelayedBarDuration_31 = value;
	}

	inline static int32_t get_offset_of_LerpIncreasingDelayedBarCurve_32() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___LerpIncreasingDelayedBarCurve_32)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_LerpIncreasingDelayedBarCurve_32() const { return ___LerpIncreasingDelayedBarCurve_32; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_LerpIncreasingDelayedBarCurve_32() { return &___LerpIncreasingDelayedBarCurve_32; }
	inline void set_LerpIncreasingDelayedBarCurve_32(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___LerpIncreasingDelayedBarCurve_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LerpIncreasingDelayedBarCurve_32), (void*)value);
	}

	inline static int32_t get_offset_of_BumpScaleOnChange_33() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___BumpScaleOnChange_33)); }
	inline bool get_BumpScaleOnChange_33() const { return ___BumpScaleOnChange_33; }
	inline bool* get_address_of_BumpScaleOnChange_33() { return &___BumpScaleOnChange_33; }
	inline void set_BumpScaleOnChange_33(bool value)
	{
		___BumpScaleOnChange_33 = value;
	}

	inline static int32_t get_offset_of_BumpOnIncrease_34() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___BumpOnIncrease_34)); }
	inline bool get_BumpOnIncrease_34() const { return ___BumpOnIncrease_34; }
	inline bool* get_address_of_BumpOnIncrease_34() { return &___BumpOnIncrease_34; }
	inline void set_BumpOnIncrease_34(bool value)
	{
		___BumpOnIncrease_34 = value;
	}

	inline static int32_t get_offset_of_BumpOnDecrease_35() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___BumpOnDecrease_35)); }
	inline bool get_BumpOnDecrease_35() const { return ___BumpOnDecrease_35; }
	inline bool* get_address_of_BumpOnDecrease_35() { return &___BumpOnDecrease_35; }
	inline void set_BumpOnDecrease_35(bool value)
	{
		___BumpOnDecrease_35 = value;
	}

	inline static int32_t get_offset_of_BumpDuration_36() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___BumpDuration_36)); }
	inline float get_BumpDuration_36() const { return ___BumpDuration_36; }
	inline float* get_address_of_BumpDuration_36() { return &___BumpDuration_36; }
	inline void set_BumpDuration_36(float value)
	{
		___BumpDuration_36 = value;
	}

	inline static int32_t get_offset_of_ChangeColorWhenBumping_37() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___ChangeColorWhenBumping_37)); }
	inline bool get_ChangeColorWhenBumping_37() const { return ___ChangeColorWhenBumping_37; }
	inline bool* get_address_of_ChangeColorWhenBumping_37() { return &___ChangeColorWhenBumping_37; }
	inline void set_ChangeColorWhenBumping_37(bool value)
	{
		___ChangeColorWhenBumping_37 = value;
	}

	inline static int32_t get_offset_of_BumpColor_38() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___BumpColor_38)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_BumpColor_38() const { return ___BumpColor_38; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_BumpColor_38() { return &___BumpColor_38; }
	inline void set_BumpColor_38(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___BumpColor_38 = value;
	}

	inline static int32_t get_offset_of_BumpScaleAnimationCurve_39() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___BumpScaleAnimationCurve_39)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_BumpScaleAnimationCurve_39() const { return ___BumpScaleAnimationCurve_39; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_BumpScaleAnimationCurve_39() { return &___BumpScaleAnimationCurve_39; }
	inline void set_BumpScaleAnimationCurve_39(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___BumpScaleAnimationCurve_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BumpScaleAnimationCurve_39), (void*)value);
	}

	inline static int32_t get_offset_of_BumpColorAnimationCurve_40() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___BumpColorAnimationCurve_40)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_BumpColorAnimationCurve_40() const { return ___BumpColorAnimationCurve_40; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_BumpColorAnimationCurve_40() { return &___BumpColorAnimationCurve_40; }
	inline void set_BumpColorAnimationCurve_40(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___BumpColorAnimationCurve_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BumpColorAnimationCurve_40), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBumpingU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___U3CBumpingU3Ek__BackingField_41)); }
	inline bool get_U3CBumpingU3Ek__BackingField_41() const { return ___U3CBumpingU3Ek__BackingField_41; }
	inline bool* get_address_of_U3CBumpingU3Ek__BackingField_41() { return &___U3CBumpingU3Ek__BackingField_41; }
	inline void set_U3CBumpingU3Ek__BackingField_41(bool value)
	{
		___U3CBumpingU3Ek__BackingField_41 = value;
	}

	inline static int32_t get_offset_of_OnBump_42() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___OnBump_42)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnBump_42() const { return ___OnBump_42; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnBump_42() { return &___OnBump_42; }
	inline void set_OnBump_42(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnBump_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnBump_42), (void*)value);
	}

	inline static int32_t get_offset_of_OnBarMovementDecreasingStart_43() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___OnBarMovementDecreasingStart_43)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnBarMovementDecreasingStart_43() const { return ___OnBarMovementDecreasingStart_43; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnBarMovementDecreasingStart_43() { return &___OnBarMovementDecreasingStart_43; }
	inline void set_OnBarMovementDecreasingStart_43(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnBarMovementDecreasingStart_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnBarMovementDecreasingStart_43), (void*)value);
	}

	inline static int32_t get_offset_of_OnBarMovementDecreasingStop_44() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___OnBarMovementDecreasingStop_44)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnBarMovementDecreasingStop_44() const { return ___OnBarMovementDecreasingStop_44; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnBarMovementDecreasingStop_44() { return &___OnBarMovementDecreasingStop_44; }
	inline void set_OnBarMovementDecreasingStop_44(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnBarMovementDecreasingStop_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnBarMovementDecreasingStop_44), (void*)value);
	}

	inline static int32_t get_offset_of_OnBarMovementIncreasingStart_45() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___OnBarMovementIncreasingStart_45)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnBarMovementIncreasingStart_45() const { return ___OnBarMovementIncreasingStart_45; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnBarMovementIncreasingStart_45() { return &___OnBarMovementIncreasingStart_45; }
	inline void set_OnBarMovementIncreasingStart_45(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnBarMovementIncreasingStart_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnBarMovementIncreasingStart_45), (void*)value);
	}

	inline static int32_t get_offset_of_OnBarMovementIncreasingStop_46() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___OnBarMovementIncreasingStop_46)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnBarMovementIncreasingStop_46() const { return ___OnBarMovementIncreasingStop_46; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnBarMovementIncreasingStop_46() { return &___OnBarMovementIncreasingStop_46; }
	inline void set_OnBarMovementIncreasingStop_46(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnBarMovementIncreasingStop_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnBarMovementIncreasingStop_46), (void*)value);
	}

	inline static int32_t get_offset_of_PercentageText_47() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___PercentageText_47)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_PercentageText_47() const { return ___PercentageText_47; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_PercentageText_47() { return &___PercentageText_47; }
	inline void set_PercentageText_47(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___PercentageText_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PercentageText_47), (void*)value);
	}

	inline static int32_t get_offset_of_TextPrefix_48() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___TextPrefix_48)); }
	inline String_t* get_TextPrefix_48() const { return ___TextPrefix_48; }
	inline String_t** get_address_of_TextPrefix_48() { return &___TextPrefix_48; }
	inline void set_TextPrefix_48(String_t* value)
	{
		___TextPrefix_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TextPrefix_48), (void*)value);
	}

	inline static int32_t get_offset_of_TextSuffix_49() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___TextSuffix_49)); }
	inline String_t* get_TextSuffix_49() const { return ___TextSuffix_49; }
	inline String_t** get_address_of_TextSuffix_49() { return &___TextSuffix_49; }
	inline void set_TextSuffix_49(String_t* value)
	{
		___TextSuffix_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TextSuffix_49), (void*)value);
	}

	inline static int32_t get_offset_of_TextValueMultiplier_50() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___TextValueMultiplier_50)); }
	inline float get_TextValueMultiplier_50() const { return ___TextValueMultiplier_50; }
	inline float* get_address_of_TextValueMultiplier_50() { return &___TextValueMultiplier_50; }
	inline void set_TextValueMultiplier_50(float value)
	{
		___TextValueMultiplier_50 = value;
	}

	inline static int32_t get_offset_of_TextFormat_51() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___TextFormat_51)); }
	inline String_t* get_TextFormat_51() const { return ___TextFormat_51; }
	inline String_t** get_address_of_TextFormat_51() { return &___TextFormat_51; }
	inline void set_TextFormat_51(String_t* value)
	{
		___TextFormat_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TextFormat_51), (void*)value);
	}

	inline static int32_t get_offset_of_DebugNewTargetValue_52() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___DebugNewTargetValue_52)); }
	inline float get_DebugNewTargetValue_52() const { return ___DebugNewTargetValue_52; }
	inline float* get_address_of_DebugNewTargetValue_52() { return &___DebugNewTargetValue_52; }
	inline void set_DebugNewTargetValue_52(float value)
	{
		___DebugNewTargetValue_52 = value;
	}

	inline static int32_t get_offset_of_DebugUpdateBarButton_53() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___DebugUpdateBarButton_53)); }
	inline bool get_DebugUpdateBarButton_53() const { return ___DebugUpdateBarButton_53; }
	inline bool* get_address_of_DebugUpdateBarButton_53() { return &___DebugUpdateBarButton_53; }
	inline void set_DebugUpdateBarButton_53(bool value)
	{
		___DebugUpdateBarButton_53 = value;
	}

	inline static int32_t get_offset_of_DebugSetBarButton_54() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___DebugSetBarButton_54)); }
	inline bool get_DebugSetBarButton_54() const { return ___DebugSetBarButton_54; }
	inline bool* get_address_of_DebugSetBarButton_54() { return &___DebugSetBarButton_54; }
	inline void set_DebugSetBarButton_54(bool value)
	{
		___DebugSetBarButton_54 = value;
	}

	inline static int32_t get_offset_of_TestBumpButton_55() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___TestBumpButton_55)); }
	inline bool get_TestBumpButton_55() const { return ___TestBumpButton_55; }
	inline bool* get_address_of_TestBumpButton_55() { return &___TestBumpButton_55; }
	inline void set_TestBumpButton_55(bool value)
	{
		___TestBumpButton_55 = value;
	}

	inline static int32_t get_offset_of_Plus10PercentButton_56() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___Plus10PercentButton_56)); }
	inline bool get_Plus10PercentButton_56() const { return ___Plus10PercentButton_56; }
	inline bool* get_address_of_Plus10PercentButton_56() { return &___Plus10PercentButton_56; }
	inline void set_Plus10PercentButton_56(bool value)
	{
		___Plus10PercentButton_56 = value;
	}

	inline static int32_t get_offset_of_Minus10PercentButton_57() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___Minus10PercentButton_57)); }
	inline bool get_Minus10PercentButton_57() const { return ___Minus10PercentButton_57; }
	inline bool* get_address_of_Minus10PercentButton_57() { return &___Minus10PercentButton_57; }
	inline void set_Minus10PercentButton_57(bool value)
	{
		___Minus10PercentButton_57 = value;
	}

	inline static int32_t get_offset_of_BarProgress_58() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___BarProgress_58)); }
	inline float get_BarProgress_58() const { return ___BarProgress_58; }
	inline float* get_address_of_BarProgress_58() { return &___BarProgress_58; }
	inline void set_BarProgress_58(float value)
	{
		___BarProgress_58 = value;
	}

	inline static int32_t get_offset_of_BarTarget_59() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___BarTarget_59)); }
	inline float get_BarTarget_59() const { return ___BarTarget_59; }
	inline float* get_address_of_BarTarget_59() { return &___BarTarget_59; }
	inline void set_BarTarget_59(float value)
	{
		___BarTarget_59 = value;
	}

	inline static int32_t get_offset_of_DelayedBarIncreasingProgress_60() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___DelayedBarIncreasingProgress_60)); }
	inline float get_DelayedBarIncreasingProgress_60() const { return ___DelayedBarIncreasingProgress_60; }
	inline float* get_address_of_DelayedBarIncreasingProgress_60() { return &___DelayedBarIncreasingProgress_60; }
	inline void set_DelayedBarIncreasingProgress_60(float value)
	{
		___DelayedBarIncreasingProgress_60 = value;
	}

	inline static int32_t get_offset_of_DelayedBarDecreasingProgress_61() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___DelayedBarDecreasingProgress_61)); }
	inline float get_DelayedBarDecreasingProgress_61() const { return ___DelayedBarDecreasingProgress_61; }
	inline float* get_address_of_DelayedBarDecreasingProgress_61() { return &___DelayedBarDecreasingProgress_61; }
	inline void set_DelayedBarDecreasingProgress_61(float value)
	{
		___DelayedBarDecreasingProgress_61 = value;
	}

	inline static int32_t get_offset_of__initialized_62() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ____initialized_62)); }
	inline bool get__initialized_62() const { return ____initialized_62; }
	inline bool* get_address_of__initialized_62() { return &____initialized_62; }
	inline void set__initialized_62(bool value)
	{
		____initialized_62 = value;
	}

	inline static int32_t get_offset_of__initialBarSize_63() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ____initialBarSize_63)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get__initialBarSize_63() const { return ____initialBarSize_63; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of__initialBarSize_63() { return &____initialBarSize_63; }
	inline void set__initialBarSize_63(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		____initialBarSize_63 = value;
	}

	inline static int32_t get_offset_of__initialColor_64() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ____initialColor_64)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__initialColor_64() const { return ____initialColor_64; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__initialColor_64() { return &____initialColor_64; }
	inline void set__initialColor_64(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____initialColor_64 = value;
	}

	inline static int32_t get_offset_of__initialScale_65() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ____initialScale_65)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__initialScale_65() const { return ____initialScale_65; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__initialScale_65() { return &____initialScale_65; }
	inline void set__initialScale_65(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____initialScale_65 = value;
	}

	inline static int32_t get_offset_of__foregroundImage_66() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ____foregroundImage_66)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get__foregroundImage_66() const { return ____foregroundImage_66; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of__foregroundImage_66() { return &____foregroundImage_66; }
	inline void set__foregroundImage_66(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		____foregroundImage_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____foregroundImage_66), (void*)value);
	}

	inline static int32_t get_offset_of__delayedDecreasingImage_67() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ____delayedDecreasingImage_67)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get__delayedDecreasingImage_67() const { return ____delayedDecreasingImage_67; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of__delayedDecreasingImage_67() { return &____delayedDecreasingImage_67; }
	inline void set__delayedDecreasingImage_67(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		____delayedDecreasingImage_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____delayedDecreasingImage_67), (void*)value);
	}

	inline static int32_t get_offset_of__delayedIncreasingImage_68() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ____delayedIncreasingImage_68)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get__delayedIncreasingImage_68() const { return ____delayedIncreasingImage_68; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of__delayedIncreasingImage_68() { return &____delayedIncreasingImage_68; }
	inline void set__delayedIncreasingImage_68(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		____delayedIncreasingImage_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____delayedIncreasingImage_68), (void*)value);
	}

	inline static int32_t get_offset_of__targetLocalScale_69() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ____targetLocalScale_69)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__targetLocalScale_69() const { return ____targetLocalScale_69; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__targetLocalScale_69() { return &____targetLocalScale_69; }
	inline void set__targetLocalScale_69(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____targetLocalScale_69 = value;
	}

	inline static int32_t get_offset_of__newPercent_70() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ____newPercent_70)); }
	inline float get__newPercent_70() const { return ____newPercent_70; }
	inline float* get_address_of__newPercent_70() { return &____newPercent_70; }
	inline void set__newPercent_70(float value)
	{
		____newPercent_70 = value;
	}

	inline static int32_t get_offset_of__percentLastTimeBarWasUpdated_71() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ____percentLastTimeBarWasUpdated_71)); }
	inline float get__percentLastTimeBarWasUpdated_71() const { return ____percentLastTimeBarWasUpdated_71; }
	inline float* get_address_of__percentLastTimeBarWasUpdated_71() { return &____percentLastTimeBarWasUpdated_71; }
	inline void set__percentLastTimeBarWasUpdated_71(float value)
	{
		____percentLastTimeBarWasUpdated_71 = value;
	}

	inline static int32_t get_offset_of__lastUpdateTimestamp_72() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ____lastUpdateTimestamp_72)); }
	inline float get__lastUpdateTimestamp_72() const { return ____lastUpdateTimestamp_72; }
	inline float* get_address_of__lastUpdateTimestamp_72() { return &____lastUpdateTimestamp_72; }
	inline void set__lastUpdateTimestamp_72(float value)
	{
		____lastUpdateTimestamp_72 = value;
	}

	inline static int32_t get_offset_of__time_73() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ____time_73)); }
	inline float get__time_73() const { return ____time_73; }
	inline float* get_address_of__time_73() { return &____time_73; }
	inline void set__time_73(float value)
	{
		____time_73 = value;
	}

	inline static int32_t get_offset_of__deltaTime_74() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ____deltaTime_74)); }
	inline float get__deltaTime_74() const { return ____deltaTime_74; }
	inline float* get_address_of__deltaTime_74() { return &____deltaTime_74; }
	inline void set__deltaTime_74(float value)
	{
		____deltaTime_74 = value;
	}

	inline static int32_t get_offset_of__direction_75() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ____direction_75)); }
	inline int32_t get__direction_75() const { return ____direction_75; }
	inline int32_t* get_address_of__direction_75() { return &____direction_75; }
	inline void set__direction_75(int32_t value)
	{
		____direction_75 = value;
	}

	inline static int32_t get_offset_of__coroutine_76() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ____coroutine_76)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__coroutine_76() const { return ____coroutine_76; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__coroutine_76() { return &____coroutine_76; }
	inline void set__coroutine_76(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____coroutine_76 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____coroutine_76), (void*)value);
	}

	inline static int32_t get_offset_of__coroutineShouldRun_77() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ____coroutineShouldRun_77)); }
	inline bool get__coroutineShouldRun_77() const { return ____coroutineShouldRun_77; }
	inline bool* get_address_of__coroutineShouldRun_77() { return &____coroutineShouldRun_77; }
	inline void set__coroutineShouldRun_77(bool value)
	{
		____coroutineShouldRun_77 = value;
	}

	inline static int32_t get_offset_of__isDelayedBarIncreasingNotNull_78() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ____isDelayedBarIncreasingNotNull_78)); }
	inline bool get__isDelayedBarIncreasingNotNull_78() const { return ____isDelayedBarIncreasingNotNull_78; }
	inline bool* get_address_of__isDelayedBarIncreasingNotNull_78() { return &____isDelayedBarIncreasingNotNull_78; }
	inline void set__isDelayedBarIncreasingNotNull_78(bool value)
	{
		____isDelayedBarIncreasingNotNull_78 = value;
	}

	inline static int32_t get_offset_of__isDelayedBarDecreasingNotNull_79() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ____isDelayedBarDecreasingNotNull_79)); }
	inline bool get__isDelayedBarDecreasingNotNull_79() const { return ____isDelayedBarDecreasingNotNull_79; }
	inline bool* get_address_of__isDelayedBarDecreasingNotNull_79() { return &____isDelayedBarDecreasingNotNull_79; }
	inline void set__isDelayedBarDecreasingNotNull_79(bool value)
	{
		____isDelayedBarDecreasingNotNull_79 = value;
	}

	inline static int32_t get_offset_of__actualUpdate_80() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ____actualUpdate_80)); }
	inline bool get__actualUpdate_80() const { return ____actualUpdate_80; }
	inline bool* get_address_of__actualUpdate_80() { return &____actualUpdate_80; }
	inline void set__actualUpdate_80(bool value)
	{
		____actualUpdate_80 = value;
	}

	inline static int32_t get_offset_of__anchorVector_81() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ____anchorVector_81)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get__anchorVector_81() const { return ____anchorVector_81; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of__anchorVector_81() { return &____anchorVector_81; }
	inline void set__anchorVector_81(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		____anchorVector_81 = value;
	}

	inline static int32_t get_offset_of__delayedBarDecreasingProgress_82() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ____delayedBarDecreasingProgress_82)); }
	inline float get__delayedBarDecreasingProgress_82() const { return ____delayedBarDecreasingProgress_82; }
	inline float* get_address_of__delayedBarDecreasingProgress_82() { return &____delayedBarDecreasingProgress_82; }
	inline void set__delayedBarDecreasingProgress_82(float value)
	{
		____delayedBarDecreasingProgress_82 = value;
	}

	inline static int32_t get_offset_of__delayedBarIncreasingProgress_83() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ____delayedBarIncreasingProgress_83)); }
	inline float get__delayedBarIncreasingProgress_83() const { return ____delayedBarIncreasingProgress_83; }
	inline float* get_address_of__delayedBarIncreasingProgress_83() { return &____delayedBarIncreasingProgress_83; }
	inline void set__delayedBarIncreasingProgress_83(float value)
	{
		____delayedBarIncreasingProgress_83 = value;
	}

	inline static int32_t get_offset_of_CurrentState_84() { return static_cast<int32_t>(offsetof(MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E, ___CurrentState_84)); }
	inline int32_t get_CurrentState_84() const { return ___CurrentState_84; }
	inline int32_t* get_address_of_CurrentState_84() { return &___CurrentState_84; }
	inline void set_CurrentState_84(int32_t value)
	{
		___CurrentState_84 = value;
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


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void MoreMountains.Tools.EventRegister::MMEventStartListening<MoreMountains.Tools.MMAchievementUnlockedEvent>(MoreMountains.Tools.MMEventListener`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventRegister_MMEventStartListening_TisMMAchievementUnlockedEvent_t2B63151D7FE8F928F93B43DEAD70F0DE80746DBB_m80F61CD4E4666EB25DCF5197B500DC2D7F50BEC4_gshared (RuntimeObject* ___caller0, const RuntimeMethod* method);
// System.Void MoreMountains.Tools.EventRegister::MMEventStopListening<MoreMountains.Tools.MMAchievementUnlockedEvent>(MoreMountains.Tools.MMEventListener`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventRegister_MMEventStopListening_TisMMAchievementUnlockedEvent_t2B63151D7FE8F928F93B43DEAD70F0DE80746DBB_m22BCBA6E98B57C50A1CD283601549F2987B62DA7_gshared (RuntimeObject* ___caller0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// System.Void MoreMountains.Tools.MMAchievementDisplayer/<DisplayAchievement>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayAchievementU3Ed__4__ctor_m98D649B074C25478A8F859A7C530D527F17C5D43 (U3CDisplayAchievementU3Ed__4_t58CD4D621DDEC2C1271FD89429825E17115F1A3C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void MoreMountains.Tools.EventRegister::MMEventStartListening<MoreMountains.Tools.MMAchievementUnlockedEvent>(MoreMountains.Tools.MMEventListener`1<!!0>)
inline void EventRegister_MMEventStartListening_TisMMAchievementUnlockedEvent_t2B63151D7FE8F928F93B43DEAD70F0DE80746DBB_m80F61CD4E4666EB25DCF5197B500DC2D7F50BEC4 (RuntimeObject* ___caller0, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))EventRegister_MMEventStartListening_TisMMAchievementUnlockedEvent_t2B63151D7FE8F928F93B43DEAD70F0DE80746DBB_m80F61CD4E4666EB25DCF5197B500DC2D7F50BEC4_gshared)(___caller0, method);
}
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void MoreMountains.Tools.EventRegister::MMEventStopListening<MoreMountains.Tools.MMAchievementUnlockedEvent>(MoreMountains.Tools.MMEventListener`1<!!0>)
inline void EventRegister_MMEventStopListening_TisMMAchievementUnlockedEvent_t2B63151D7FE8F928F93B43DEAD70F0DE80746DBB_m22BCBA6E98B57C50A1CD283601549F2987B62DA7 (RuntimeObject* ___caller0, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))EventRegister_MMEventStopListening_TisMMAchievementUnlockedEvent_t2B63151D7FE8F928F93B43DEAD70F0DE80746DBB_m22BCBA6E98B57C50A1CD283601549F2987B62DA7_gshared)(___caller0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m61816C8A09C86A5E157EA89965A9CC0510A1B378 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eulers0, int32_t ___relativeTo1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformDirection_m6B5E3F0A7C6323159DEC6D9BC035FB53ADD96E91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Plane::SetNormalAndPosition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane_SetNormalAndPosition_mD51692E4487808FFD1F881A577B8AAA5716D301E (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___inNormal0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___inPoint1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Plane::ClosestPointOnPlane(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Plane_ClosestPointOnPlane_mDBB63D79FA643E10949FEE1AE692975940716BCE (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Normalize_m7C9B0E84BCB84D54A16D1212F3DE5AB2A386FCD9 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398 (float ___angle0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217 (int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_m4747F0DC20D06D1932EC740C5CCC738C1664903D (bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::ClampMagnitude(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_ClampMagnitude_mF85598307D6CF3B4E5BEEB218CEDDCE39CDF3336 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, float ___maxLength1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void MoreMountains.Feedbacks.MMTimeScaleEvent::Trigger(MoreMountains.Feedbacks.MMTimeScaleMethods,System.Single,System.Single,System.Boolean,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMTimeScaleEvent_Trigger_mF54D807E19DF44F9EB1E07B9A76C8E294632741E (int32_t ___timeScaleMethod0, float ___timeScale1, float ___duration2, bool ___lerp3, float ___lerpSpeed4, bool ___infinite5, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<MoreMountains.Tools.MMAchievementDisplayItem>()
inline MMAchievementDisplayItem_t7B078B470604860F459A4BE6BCB4C051235CA506 * GameObject_GetComponent_TisMMAchievementDisplayItem_t7B078B470604860F459A4BE6BCB4C051235CA506_m9BEB7D697C7094B8B76B2621ECE6F8B9CF6E1E0A (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MMAchievementDisplayItem_t7B078B470604860F459A4BE6BCB4C051235CA506 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void MoreMountains.Tools.MMSfxEvent::Trigger(UnityEngine.AudioClip,UnityEngine.Audio.AudioMixerGroup,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMSfxEvent_Trigger_mE6094519738D6FD07B1B244D580802BD99B9C6A7 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clipToPlay0, AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * ___audioGroup1, float ___volume2, float ___pitch3, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.CanvasGroup>()
inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * GameObject_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_m06FB4232ED756E269BDAE846E32BC8B0EA40B83A (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53 (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * __this, float ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator MoreMountains.Tools.MMFade::FadeCanvasGroup(UnityEngine.CanvasGroup,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MMFade_FadeCanvasGroup_m0746D55530A02D5EC943A532C1916D52D6A209BA (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * ___target0, float ___duration1, float ___targetAlpha2, bool ___unscaled3, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
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
// System.Collections.IEnumerator MoreMountains.Tools.MMAchievementDisplayer::DisplayAchievement(MoreMountains.Tools.MMAchievement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MMAchievementDisplayer_DisplayAchievement_mA41A34B704BD4DE944059FD5763D38AE2CC9E868 (MMAchievementDisplayer_tA626A5C9362BF2DCA81A860D792778B5682589BA * __this, MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3 * ___achievement0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDisplayAchievementU3Ed__4_t58CD4D621DDEC2C1271FD89429825E17115F1A3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDisplayAchievementU3Ed__4_t58CD4D621DDEC2C1271FD89429825E17115F1A3C * L_0 = (U3CDisplayAchievementU3Ed__4_t58CD4D621DDEC2C1271FD89429825E17115F1A3C *)il2cpp_codegen_object_new(U3CDisplayAchievementU3Ed__4_t58CD4D621DDEC2C1271FD89429825E17115F1A3C_il2cpp_TypeInfo_var);
		U3CDisplayAchievementU3Ed__4__ctor_m98D649B074C25478A8F859A7C530D527F17C5D43(L_0, 0, /*hidden argument*/NULL);
		U3CDisplayAchievementU3Ed__4_t58CD4D621DDEC2C1271FD89429825E17115F1A3C * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CDisplayAchievementU3Ed__4_t58CD4D621DDEC2C1271FD89429825E17115F1A3C * L_2 = L_1;
		MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3 * L_3 = ___achievement0;
		NullCheck(L_2);
		L_2->set_achievement_3(L_3);
		return L_2;
	}
}
// System.Void MoreMountains.Tools.MMAchievementDisplayer::OnMMEvent(MoreMountains.Tools.MMAchievementUnlockedEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMAchievementDisplayer_OnMMEvent_mD301CD682EB18C9EA2670D9C294E4EC1E2AFA904 (MMAchievementDisplayer_tA626A5C9362BF2DCA81A860D792778B5682589BA * __this, MMAchievementUnlockedEvent_t2B63151D7FE8F928F93B43DEAD70F0DE80746DBB  ___achievementUnlockedEvent0, const RuntimeMethod* method)
{
	{
		// StartCoroutine(DisplayAchievement (achievementUnlockedEvent.Achievement));
		MMAchievementUnlockedEvent_t2B63151D7FE8F928F93B43DEAD70F0DE80746DBB  L_0 = ___achievementUnlockedEvent0;
		MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3 * L_1 = L_0.get_Achievement_0();
		RuntimeObject* L_2;
		L_2 = VirtFuncInvoker1< RuntimeObject*, MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3 * >::Invoke(5 /* System.Collections.IEnumerator MoreMountains.Tools.MMAchievementDisplayer::DisplayAchievement(MoreMountains.Tools.MMAchievement) */, __this, L_1);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMAchievementDisplayer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMAchievementDisplayer_OnEnable_mC2A0499BF0B11E15BFE002BBAD617DC0A350058B (MMAchievementDisplayer_tA626A5C9362BF2DCA81A860D792778B5682589BA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventRegister_MMEventStartListening_TisMMAchievementUnlockedEvent_t2B63151D7FE8F928F93B43DEAD70F0DE80746DBB_m80F61CD4E4666EB25DCF5197B500DC2D7F50BEC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.MMEventStartListening<MMAchievementUnlockedEvent>();
		EventRegister_MMEventStartListening_TisMMAchievementUnlockedEvent_t2B63151D7FE8F928F93B43DEAD70F0DE80746DBB_m80F61CD4E4666EB25DCF5197B500DC2D7F50BEC4(__this, /*hidden argument*/EventRegister_MMEventStartListening_TisMMAchievementUnlockedEvent_t2B63151D7FE8F928F93B43DEAD70F0DE80746DBB_m80F61CD4E4666EB25DCF5197B500DC2D7F50BEC4_RuntimeMethod_var);
		// _achievementFadeOutWFS = new WaitForSeconds (AchievementFadeDuration + AchievementDisplayDuration);
		float L_0 = __this->get_AchievementFadeDuration_6();
		float L_1 = __this->get_AchievementDisplayDuration_5();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_2 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_2, ((float)il2cpp_codegen_add((float)L_0, (float)L_1)), /*hidden argument*/NULL);
		__this->set__achievementFadeOutWFS_7(L_2);
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMAchievementDisplayer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMAchievementDisplayer_OnDisable_m2BB45B35307780ACFFCA3335C4604B26F644056D (MMAchievementDisplayer_tA626A5C9362BF2DCA81A860D792778B5682589BA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventRegister_MMEventStopListening_TisMMAchievementUnlockedEvent_t2B63151D7FE8F928F93B43DEAD70F0DE80746DBB_m22BCBA6E98B57C50A1CD283601549F2987B62DA7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.MMEventStopListening<MMAchievementUnlockedEvent>();
		EventRegister_MMEventStopListening_TisMMAchievementUnlockedEvent_t2B63151D7FE8F928F93B43DEAD70F0DE80746DBB_m22BCBA6E98B57C50A1CD283601549F2987B62DA7(__this, /*hidden argument*/EventRegister_MMEventStopListening_TisMMAchievementUnlockedEvent_t2B63151D7FE8F928F93B43DEAD70F0DE80746DBB_m22BCBA6E98B57C50A1CD283601549F2987B62DA7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMAchievementDisplayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMAchievementDisplayer__ctor_m07CA0EBE1D0C4B1BE806CACA21466AFD895D34D4 (MMAchievementDisplayer_tA626A5C9362BF2DCA81A860D792778B5682589BA * __this, const RuntimeMethod* method)
{
	{
		// public float AchievementDisplayDuration = 5f;
		__this->set_AchievementDisplayDuration_5((5.0f));
		// public float AchievementFadeDuration = 0.2f;
		__this->set_AchievementFadeDuration_6((0.200000003f));
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
// System.Void MoreMountains.Tools.MMAutoRotate::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMAutoRotate_Start_mC469121456D990179BA23122E6AD09126C160170 (MMAutoRotate_t53B4EE4D099D54E664495149767C3099EBD4C36E * __this, const RuntimeMethod* method)
{
	{
		// _rotationPlane = new Plane();
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * L_0 = __this->get_address_of__rotationPlane_21();
		il2cpp_codegen_initobj(L_0, sizeof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 ));
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMAutoRotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMAutoRotate_Update_m9BC13C3D4DE236651111163213F034F6E4FC0ECA (MMAutoRotate_t53B4EE4D099D54E664495149767C3099EBD4C36E * __this, const RuntimeMethod* method)
{
	{
		// if (UpdateMode == UpdateModes.Update)
		int32_t L_0 = __this->get_UpdateMode_6();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Rotate();
		VirtActionInvoker0::Invoke(10 /* System.Void MoreMountains.Tools.MMAutoRotate::Rotate() */, __this);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMAutoRotate::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMAutoRotate_FixedUpdate_m54F61864D6CF7C6B9727CBF9ADFED9E5151466C9 (MMAutoRotate_t53B4EE4D099D54E664495149767C3099EBD4C36E * __this, const RuntimeMethod* method)
{
	{
		// if (UpdateMode == UpdateModes.FixedUpdate)
		int32_t L_0 = __this->get_UpdateMode_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_000f;
		}
	}
	{
		// Rotate();
		VirtActionInvoker0::Invoke(10 /* System.Void MoreMountains.Tools.MMAutoRotate::Rotate() */, __this);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMAutoRotate::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMAutoRotate_LateUpdate_m9D74B1438AEA3A74B60BBCC202B93C571A3E8FE4 (MMAutoRotate_t53B4EE4D099D54E664495149767C3099EBD4C36E * __this, const RuntimeMethod* method)
{
	{
		// if (UpdateMode == UpdateModes.LateUpdate)
		int32_t L_0 = __this->get_UpdateMode_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000f;
		}
	}
	{
		// Rotate();
		VirtActionInvoker0::Invoke(10 /* System.Void MoreMountains.Tools.MMAutoRotate::Rotate() */, __this);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMAutoRotate::Rotate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMAutoRotate_Rotate_mA6ABB39795E1F4F0E8FAD93DA47BF466D2206A20 (MMAutoRotate_t53B4EE4D099D54E664495149767C3099EBD4C36E * __this, bool ___status0, const RuntimeMethod* method)
{
	{
		// Rotating = status;
		bool L_0 = ___status0;
		__this->set_Rotating_4(L_0);
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMAutoRotate::Orbit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMAutoRotate_Orbit_m058456464D18C7899F3F973C0A129793241B8780 (MMAutoRotate_t53B4EE4D099D54E664495149767C3099EBD4C36E * __this, bool ___status0, const RuntimeMethod* method)
{
	{
		// Orbiting = status;
		bool L_0 = ___status0;
		__this->set_Orbiting_8(L_0);
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMAutoRotate::Rotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMAutoRotate_Rotate_m43091CE3FCCA038878F4F8959A0F071CD22270E9 (MMAutoRotate_t53B4EE4D099D54E664495149767C3099EBD4C36E * __this, const RuntimeMethod* method)
{
	{
		// if (Rotating)
		bool L_0 = __this->get_Rotating_4();
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// transform.Rotate(RotationSpeed * Time.deltaTime, RotationSpace);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get_RotationSpeed_7();
		float L_3;
		L_3 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_2, L_3, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_RotationSpace_5();
		NullCheck(L_1);
		Transform_Rotate_m61816C8A09C86A5E157EA89965A9CC0510A1B378(L_1, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		// if (Orbiting)
		bool L_6 = __this->get_Orbiting_8();
		if (!L_6)
		{
			goto IL_0159;
		}
	}
	{
		// _orbitCenter = OrbitCenterTransform.transform.position + OrbitCenterOffset;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = __this->get_OrbitCenterTransform_10();
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = __this->get_OrbitCenterOffset_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_9, L_10, /*hidden argument*/NULL);
		__this->set__orbitCenter_19(L_11);
		// if (AdditiveOrbitRotation)
		bool L_12 = __this->get_AdditiveOrbitRotation_9();
		if (!L_12)
		{
			goto IL_0076;
		}
	}
	{
		// _worldRotationAxis = OrbitCenterTransform.TransformDirection(OrbitRotationAxis);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = __this->get_OrbitCenterTransform_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = __this->get_OrbitRotationAxis_12();
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_TransformDirection_m6B5E3F0A7C6323159DEC6D9BC035FB53ADD96E91(L_13, L_14, /*hidden argument*/NULL);
		__this->set__worldRotationAxis_20(L_15);
		// }
		goto IL_0082;
	}

IL_0076:
	{
		// _worldRotationAxis = OrbitRotationAxis;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = __this->get_OrbitRotationAxis_12();
		__this->set__worldRotationAxis_20(L_16);
	}

IL_0082:
	{
		// _rotationPlane.SetNormalAndPosition(_worldRotationAxis.normalized, _orbitCenter);
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * L_17 = __this->get_address_of__rotationPlane_21();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_18 = __this->get_address_of__worldRotationAxis_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = __this->get__orbitCenter_19();
		Plane_SetNormalAndPosition_mD51692E4487808FFD1F881A577B8AAA5716D301E((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)L_17, L_19, L_20, /*hidden argument*/NULL);
		// _snappedPosition = _rotationPlane.ClosestPointOnPlane(this.transform.position);
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * L_21 = __this->get_address_of__rotationPlane_21();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Plane_ClosestPointOnPlane_mDBB63D79FA643E10949FEE1AE692975940716BCE((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)L_21, L_23, /*hidden argument*/NULL);
		__this->set__snappedPosition_22(L_24);
		// _radius = OrbitRadius * Vector3.Normalize(_snappedPosition - _orbitCenter);
		float L_25 = __this->get_OrbitRadius_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = __this->get__snappedPosition_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = __this->get__orbitCenter_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_26, L_27, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_Normalize_m7C9B0E84BCB84D54A16D1212F3DE5AB2A386FCD9(L_28, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(L_25, L_29, /*hidden argument*/NULL);
		__this->set__radius_23(L_30);
		// _newRotation = Quaternion.AngleAxis(OrbitRotationSpeed * Time.deltaTime, _worldRotationAxis);
		float L_31 = __this->get_OrbitRotationSpeed_13();
		float L_32;
		L_32 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = __this->get__worldRotationAxis_20();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_34;
		L_34 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398(((float)il2cpp_codegen_multiply((float)L_31, (float)L_32)), L_33, /*hidden argument*/NULL);
		__this->set__newRotation_24(L_34);
		// _desiredOrbitPosition = _orbitCenter + _newRotation * _radius;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = __this->get__orbitCenter_19();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_36 = __this->get__newRotation_24();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = __this->get__radius_23();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_36, L_37, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_35, L_38, /*hidden argument*/NULL);
		__this->set__desiredOrbitPosition_25(L_39);
		// this.transform.position = Vector3.Lerp(this.transform.position, _desiredOrbitPosition, OrbitCorrectionSpeed * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_41);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_41, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43 = __this->get__desiredOrbitPosition_25();
		float L_44 = __this->get_OrbitCorrectionSpeed_15();
		float L_45;
		L_45 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_42, L_43, ((float)il2cpp_codegen_multiply((float)L_44, (float)L_45)), /*hidden argument*/NULL);
		NullCheck(L_40);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_40, L_46, /*hidden argument*/NULL);
		// _previousPosition = _desiredOrbitPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47 = __this->get__desiredOrbitPosition_25();
		__this->set__previousPosition_26(L_47);
	}

IL_0159:
	{
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMAutoRotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMAutoRotate__ctor_m1213341DB3B4AD222307F048B6BFD4EBEFCB1AC6 (MMAutoRotate_t53B4EE4D099D54E664495149767C3099EBD4C36E * __this, const RuntimeMethod* method)
{
	{
		// public bool Rotating = true;
		__this->set_Rotating_4((bool)1);
		// public Space RotationSpace = Space.Self;
		__this->set_RotationSpace_5(1);
		// public Vector3 RotationSpeed = new Vector3(100f, 0f, 0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (100.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_RotationSpeed_7(L_0);
		// public Vector3 OrbitCenterOffset = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_OrbitCenterOffset_11(L_1);
		// public Vector3 OrbitRotationAxis = new Vector3(0f, 1f, 0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_OrbitRotationAxis_12(L_2);
		// public float OrbitRotationSpeed = 10f;
		__this->set_OrbitRotationSpeed_13((10.0f));
		// public float OrbitRadius = 3f;
		__this->set_OrbitRadius_14((3.0f));
		// public float OrbitCorrectionSpeed = 10f;
		__this->set_OrbitCorrectionSpeed_15((10.0f));
		// public bool DrawGizmos = true;
		__this->set_DrawGizmos_16((bool)1);
		// public Color OrbitPlaneColor = new Color(54f, 169f, 225f, 0.02f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_3), (54.0f), (169.0f), (225.0f), (0.0199999996f), /*hidden argument*/NULL);
		__this->set_OrbitPlaneColor_17(L_3);
		// public Color OrbitLineColor = new Color(225f, 225f, 225f, 0.1f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_4), (225.0f), (225.0f), (225.0f), (0.100000001f), /*hidden argument*/NULL);
		__this->set_OrbitLineColor_18(L_4);
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
// System.Void MoreMountains.Tools.MMGhostCamera::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMGhostCamera_Start_mE397AD714F65C2C1323E0E1D329B1C9184BF35D4 (MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7 * __this, const RuntimeMethod* method)
{
	{
		// if (AutoActivation)
		bool L_0 = __this->get_AutoActivation_20();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// ToggleFreeCamera();
		VirtActionInvoker0::Invoke(12 /* System.Void MoreMountains.Tools.MMGhostCamera::ToggleFreeCamera() */, __this);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMGhostCamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMGhostCamera_Update_mB584B37D3D10843F26362197714866B3CEFD94CE (MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7 * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetKeyDown(ActivateButton))
		int32_t L_0 = __this->get_ActivateButton_9();
		bool L_1;
		L_1 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// ToggleFreeCamera();
		VirtActionInvoker0::Invoke(12 /* System.Void MoreMountains.Tools.MMGhostCamera::ToggleFreeCamera() */, __this);
	}

IL_0013:
	{
		// if (!Active)
		bool L_2 = __this->get_Active_23();
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		// return;
		return;
	}

IL_001c:
	{
		// GetInput();
		VirtActionInvoker0::Invoke(6 /* System.Void MoreMountains.Tools.MMGhostCamera::GetInput() */, __this);
		// Translate();
		VirtActionInvoker0::Invoke(8 /* System.Void MoreMountains.Tools.MMGhostCamera::Translate() */, __this);
		// Rotate();
		VirtActionInvoker0::Invoke(9 /* System.Void MoreMountains.Tools.MMGhostCamera::Rotate() */, __this);
		// Move();
		VirtActionInvoker0::Invoke(10 /* System.Void MoreMountains.Tools.MMGhostCamera::Move() */, __this);
		// HandleMobileControls();
		VirtActionInvoker0::Invoke(7 /* System.Void MoreMountains.Tools.MMGhostCamera::HandleMobileControls() */, __this);
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMGhostCamera::GetInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMGhostCamera_GetInput_m13328C354C32FF1E8341EDB2CBF6B36D1EE27A9A (MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7 * G_B10_0 = NULL;
	MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7 * G_B9_0 = NULL;
	float G_B11_0 = 0.0f;
	MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7 * G_B11_1 = NULL;
	{
		// if (!UseMobileControls || (LeftStick == null))
		bool L_0 = __this->get_UseMobileControls_25();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE * L_1 = __this->get_LeftStick_28();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0052;
		}
	}

IL_0016:
	{
		// _currentInput.x = Input.GetAxis("Horizontal");
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_3 = __this->get_address_of__currentInput_30();
		float L_4;
		L_4 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		L_3->set_x_2(L_4);
		// _currentInput.y = 0f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = __this->get_address_of__currentInput_30();
		L_5->set_y_3((0.0f));
		// _currentInput.z = Input.GetAxis("Vertical");
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_6 = __this->get_address_of__currentInput_30();
		float L_7;
		L_7 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		L_6->set_z_4(L_7);
		// }
		goto IL_0098;
	}

IL_0052:
	{
		// _currentInput.x = LeftStick._joystickValue.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_8 = __this->get_address_of__currentInput_30();
		MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE * L_9 = __this->get_LeftStick_28();
		NullCheck(L_9);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_10 = L_9->get_address_of__joystickValue_14();
		float L_11 = L_10->get_x_0();
		L_8->set_x_2(L_11);
		// _currentInput.y = 0f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_12 = __this->get_address_of__currentInput_30();
		L_12->set_y_3((0.0f));
		// _currentInput.z = LeftStick._joystickValue.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_13 = __this->get_address_of__currentInput_30();
		MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE * L_14 = __this->get_LeftStick_28();
		NullCheck(L_14);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_15 = L_14->get_address_of__joystickValue_14();
		float L_16 = L_15->get_y_1();
		L_13->set_z_4(L_16);
	}

IL_0098:
	{
		// if (Input.GetKey(UpButton))
		int32_t L_17 = __this->get_UpButton_12();
		bool L_18;
		L_18 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00b5;
		}
	}
	{
		// _currentInput.y = 1f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_19 = __this->get_address_of__currentInput_30();
		L_19->set_y_3((1.0f));
	}

IL_00b5:
	{
		// if (Input.GetKey(DownButton))
		int32_t L_20 = __this->get_DownButton_13();
		bool L_21;
		L_21 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00d2;
		}
	}
	{
		// _currentInput.y = -1f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_22 = __this->get_address_of__currentInput_30();
		L_22->set_y_3((-1.0f));
	}

IL_00d2:
	{
		// _speedMultiplier = Input.GetKey(RunButton) ? RunFactor : 1f;
		int32_t L_23 = __this->get_RunButton_16();
		bool L_24;
		L_24 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_23, /*hidden argument*/NULL);
		G_B9_0 = __this;
		if (L_24)
		{
			G_B10_0 = __this;
			goto IL_00e7;
		}
	}
	{
		G_B11_0 = (1.0f);
		G_B11_1 = G_B9_0;
		goto IL_00ed;
	}

IL_00e7:
	{
		float L_25 = __this->get_RunFactor_5();
		G_B11_0 = L_25;
		G_B11_1 = G_B10_0;
	}

IL_00ed:
	{
		NullCheck(G_B11_1);
		G_B11_1->set__speedMultiplier_36(G_B11_0);
		// _normalizedInput = _currentInput.normalized;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_26 = __this->get_address_of__currentInput_30();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_26, /*hidden argument*/NULL);
		__this->set__normalizedInput_32(L_27);
		// if (Input.GetKeyDown(TimescaleModificationButton))
		int32_t L_28 = __this->get_TimescaleModificationButton_15();
		bool L_29;
		L_29 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(L_28, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_0116;
		}
	}
	{
		// ToggleSlowMotion();
		VirtActionInvoker0::Invoke(11 /* System.Void MoreMountains.Tools.MMGhostCamera::ToggleSlowMotion() */, __this);
	}

IL_0116:
	{
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMGhostCamera::HandleMobileControls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMGhostCamera_HandleMobileControls_mDAAB558267145457431BB9D79C49A2D290DE990E (MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B9_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B8_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B13_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B12_0 = NULL;
	{
		// if (Input.GetKeyDown(ControlsModeSwitch))
		int32_t L_0 = __this->get_ControlsModeSwitch_14();
		bool L_1;
		L_1 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// UseMobileControls = !UseMobileControls;
		bool L_2 = __this->get_UseMobileControls_25();
		__this->set_UseMobileControls_25((bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0));
	}

IL_001c:
	{
		// if (UseMobileControls)
		bool L_3 = __this->get_UseMobileControls_25();
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217(0, /*hidden argument*/NULL);
		// Cursor.visible = true;
		Cursor_set_visible_m4747F0DC20D06D1932EC740C5CCC738C1664903D((bool)1, /*hidden argument*/NULL);
		// }
		goto IL_0046;
	}

IL_0032:
	{
		// else if (Active)
		bool L_4 = __this->get_Active_23();
		if (!L_4)
		{
			goto IL_0046;
		}
	}
	{
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217(1, /*hidden argument*/NULL);
		// Cursor.visible = false;
		Cursor_set_visible_m4747F0DC20D06D1932EC740C5CCC738C1664903D((bool)0, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// if (LeftStickContainer != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_LeftStickContainer_26();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_006b;
		}
	}
	{
		// LeftStickContainer?.SetActive(UseMobileControls);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_LeftStickContainer_26();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = L_7;
		G_B8_0 = L_8;
		if (L_8)
		{
			G_B9_0 = L_8;
			goto IL_0060;
		}
	}
	{
		goto IL_006b;
	}

IL_0060:
	{
		bool L_9 = __this->get_UseMobileControls_25();
		NullCheck(G_B9_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(G_B9_0, L_9, /*hidden argument*/NULL);
	}

IL_006b:
	{
		// if (RightStickContainer != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_RightStickContainer_27();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_008f;
		}
	}
	{
		// RightStickContainer?.SetActive(UseMobileControls);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_RightStickContainer_27();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = L_12;
		G_B12_0 = L_13;
		if (L_13)
		{
			G_B13_0 = L_13;
			goto IL_0084;
		}
	}
	{
		return;
	}

IL_0084:
	{
		bool L_14 = __this->get_UseMobileControls_25();
		NullCheck(G_B13_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(G_B13_0, L_14, /*hidden argument*/NULL);
	}

IL_008f:
	{
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMGhostCamera::Translate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMGhostCamera_Translate_m9A5C83F94430DD4914892C9BAA6120361C05225D (MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7 * __this, const RuntimeMethod* method)
{
	{
		// if (!MovementEnabled)
		bool L_0 = __this->get_MovementEnabled_21();
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
		// if ((Acceleration == 0) || (Deceleration == 0))
		float L_1 = __this->get_Acceleration_6();
		if ((((float)L_1) == ((float)(0.0f))))
		{
			goto IL_0023;
		}
	}
	{
		float L_2 = __this->get_Deceleration_7();
		if ((!(((float)L_2) == ((float)(0.0f)))))
		{
			goto IL_0034;
		}
	}

IL_0023:
	{
		// _lerpedInput = _currentInput;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get__currentInput_30();
		__this->set__lerpedInput_31(L_3);
		// }
		goto IL_00d1;
	}

IL_0034:
	{
		// if (_normalizedInput.magnitude == 0)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = __this->get_address_of__normalizedInput_32();
		float L_5;
		L_5 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_4, /*hidden argument*/NULL);
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			goto IL_0098;
		}
	}
	{
		// _acceleration = Mathf.Lerp(_acceleration, 0f, Deceleration * Time.deltaTime);
		float L_6 = __this->get__acceleration_33();
		float L_7 = __this->get_Deceleration_7();
		float L_8;
		L_8 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_9;
		L_9 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_6, (0.0f), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		__this->set__acceleration_33(L_9);
		// _lerpedInput = Vector3.Lerp(_lerpedInput, _lerpedInput * _acceleration, Time.deltaTime * Deceleration);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = __this->get__lerpedInput_31();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = __this->get__lerpedInput_31();
		float L_12 = __this->get__acceleration_33();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_11, L_12, /*hidden argument*/NULL);
		float L_14;
		L_14 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_15 = __this->get_Deceleration_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_10, L_13, ((float)il2cpp_codegen_multiply((float)L_14, (float)L_15)), /*hidden argument*/NULL);
		__this->set__lerpedInput_31(L_16);
		// }
		goto IL_00d1;
	}

IL_0098:
	{
		// _acceleration = Mathf.Lerp(_acceleration, 1f, Acceleration * Time.deltaTime);
		float L_17 = __this->get__acceleration_33();
		float L_18 = __this->get_Acceleration_6();
		float L_19;
		L_19 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_20;
		L_20 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_17, (1.0f), ((float)il2cpp_codegen_multiply((float)L_18, (float)L_19)), /*hidden argument*/NULL);
		__this->set__acceleration_33(L_20);
		// _lerpedInput = Vector3.ClampMagnitude(_normalizedInput, _acceleration);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = __this->get__normalizedInput_32();
		float L_22 = __this->get__acceleration_33();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_ClampMagnitude_mF85598307D6CF3B4E5BEEB218CEDDCE39CDF3336(L_21, L_22, /*hidden argument*/NULL);
		__this->set__lerpedInput_31(L_23);
	}

IL_00d1:
	{
		// _movementVector = _lerpedInput;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = __this->get__lerpedInput_31();
		__this->set__movementVector_35(L_24);
		// _movementVector *= MovementSpeed * _speedMultiplier;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = __this->get__movementVector_35();
		float L_26 = __this->get_MovementSpeed_4();
		float L_27 = __this->get__speedMultiplier_36();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_25, ((float)il2cpp_codegen_multiply((float)L_26, (float)L_27)), /*hidden argument*/NULL);
		__this->set__movementVector_35(L_28);
		// if (_movementVector.magnitude > MovementSpeed * _speedMultiplier)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_29 = __this->get_address_of__movementVector_35();
		float L_30;
		L_30 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_29, /*hidden argument*/NULL);
		float L_31 = __this->get_MovementSpeed_4();
		float L_32 = __this->get__speedMultiplier_36();
		if ((!(((float)L_30) > ((float)((float)il2cpp_codegen_multiply((float)L_31, (float)L_32))))))
		{
			goto IL_0133;
		}
	}
	{
		// _movementVector = Vector3.ClampMagnitude(_movementVector, MovementSpeed * _speedMultiplier);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = __this->get__movementVector_35();
		float L_34 = __this->get_MovementSpeed_4();
		float L_35 = __this->get__speedMultiplier_36();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector3_ClampMagnitude_mF85598307D6CF3B4E5BEEB218CEDDCE39CDF3336(L_33, ((float)il2cpp_codegen_multiply((float)L_34, (float)L_35)), /*hidden argument*/NULL);
		__this->set__movementVector_35(L_36);
	}

IL_0133:
	{
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMGhostCamera::Rotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMGhostCamera_Rotate_m6851EA8B6E30F62134E761B2E2EC0A631F4580EF (MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!RotationEnabled)
		bool L_0 = __this->get_RotationEnabled_22();
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
		// _newEulerAngles = this.transform.eulerAngles;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_1, /*hidden argument*/NULL);
		__this->set__newEulerAngles_37(L_2);
		// if (!UseMobileControls || (LeftStick == null))
		bool L_3 = __this->get_UseMobileControls_25();
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE * L_4 = __this->get_LeftStick_28();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_007f;
		}
	}

IL_0030:
	{
		// _newEulerAngles.x += -Input.GetAxis("Mouse Y") * 359f * MouseSensitivity;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_6 = __this->get_address_of__newEulerAngles_37();
		float* L_7 = L_6->get_address_of_x_2();
		float* L_8 = L_7;
		float L_9 = *((float*)L_8);
		float L_10;
		L_10 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, /*hidden argument*/NULL);
		float L_11 = __this->get_MouseSensitivity_17();
		*((float*)L_8) = (float)((float)il2cpp_codegen_add((float)L_9, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((-L_10)), (float)(359.0f))), (float)L_11))));
		// _newEulerAngles.y += Input.GetAxis("Mouse X") * 359f * MouseSensitivity;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_12 = __this->get_address_of__newEulerAngles_37();
		float* L_13 = L_12->get_address_of_y_3();
		float* L_14 = L_13;
		float L_15 = *((float*)L_14);
		float L_16;
		L_16 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, /*hidden argument*/NULL);
		float L_17 = __this->get_MouseSensitivity_17();
		*((float*)L_14) = (float)((float)il2cpp_codegen_add((float)L_15, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_16, (float)(359.0f))), (float)L_17))));
		// }
		goto IL_00cc;
	}

IL_007f:
	{
		// _newEulerAngles.x += -RightStick._joystickValue.y * MobileStickSensitivity;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_18 = __this->get_address_of__newEulerAngles_37();
		float* L_19 = L_18->get_address_of_x_2();
		float* L_20 = L_19;
		float L_21 = *((float*)L_20);
		MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE * L_22 = __this->get_RightStick_29();
		NullCheck(L_22);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_23 = L_22->get_address_of__joystickValue_14();
		float L_24 = L_23->get_y_1();
		float L_25 = __this->get_MobileStickSensitivity_18();
		*((float*)L_20) = (float)((float)il2cpp_codegen_add((float)L_21, (float)((float)il2cpp_codegen_multiply((float)((-L_24)), (float)L_25))));
		// _newEulerAngles.y += RightStick._joystickValue.x * MobileStickSensitivity;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_26 = __this->get_address_of__newEulerAngles_37();
		float* L_27 = L_26->get_address_of_y_3();
		float* L_28 = L_27;
		float L_29 = *((float*)L_28);
		MMTouchJoystick_t9EDC8AC8D5D457D45D845EC6D6C8D43DBAF92ABE * L_30 = __this->get_RightStick_29();
		NullCheck(L_30);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_31 = L_30->get_address_of__joystickValue_14();
		float L_32 = L_31->get_x_0();
		float L_33 = __this->get_MobileStickSensitivity_18();
		*((float*)L_28) = (float)((float)il2cpp_codegen_add((float)L_29, (float)((float)il2cpp_codegen_multiply((float)L_32, (float)L_33))));
	}

IL_00cc:
	{
		// _newEulerAngles = Vector3.Lerp(this.transform.eulerAngles, _newEulerAngles, Time.deltaTime * RotationSpeed);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_34, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = __this->get__newEulerAngles_37();
		float L_37;
		L_37 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_38 = __this->get_RotationSpeed_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_35, L_36, ((float)il2cpp_codegen_multiply((float)L_37, (float)L_38)), /*hidden argument*/NULL);
		__this->set__newEulerAngles_37(L_39);
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMGhostCamera::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMGhostCamera_Move_m445382E0FF417E94B703CE5224C9897FF4422A83 (MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7 * __this, const RuntimeMethod* method)
{
	{
		// transform.eulerAngles = _newEulerAngles;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get__newEulerAngles_37();
		NullCheck(L_0);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_0, L_1, /*hidden argument*/NULL);
		// transform.position += transform.rotation * _movementVector * Time.deltaTime;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2;
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = __this->get__movementVector_35();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_6, L_7, /*hidden argument*/NULL);
		float L_9;
		L_9 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_8, L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_4, L_10, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMGhostCamera::ToggleSlowMotion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMGhostCamera_ToggleSlowMotion_m8F97EA0C128FCD0E56B9B649BEE12EB134BC991F (MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7 * __this, const RuntimeMethod* method)
{
	{
		// TimeAltered = !TimeAltered;
		bool L_0 = __this->get_TimeAltered_24();
		__this->set_TimeAltered_24((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// if (TimeAltered)
		bool L_1 = __this->get_TimeAltered_24();
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// MMTimeScaleEvent.Trigger(MMTimeScaleMethods.For, TimescaleModifier, 1f, true, 5f, true);
		float L_2 = __this->get_TimescaleModifier_19();
		MMTimeScaleEvent_Trigger_mF54D807E19DF44F9EB1E07B9A76C8E294632741E(0, L_2, (1.0f), (bool)1, (5.0f), (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0030:
	{
		// MMTimeScaleEvent.Trigger(MMTimeScaleMethods.Unfreeze, 1f, 0f, false, 0f, false);
		MMTimeScaleEvent_Trigger_mF54D807E19DF44F9EB1E07B9A76C8E294632741E(2, (1.0f), (0.0f), (bool)0, (0.0f), (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMGhostCamera::ToggleFreeCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMGhostCamera_ToggleFreeCamera_m48EA53E8EFA7C798977EB801A4CF6EEC8680770A (MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		// Active = !Active;
		bool L_0 = __this->get_Active_23();
		__this->set_Active_23((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// Cursor.lockState = Active ? CursorLockMode.Locked : CursorLockMode.None;
		bool L_1 = __this->get_Active_23();
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 1;
	}

IL_001b:
	{
		Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217(G_B3_0, /*hidden argument*/NULL);
		// Cursor.visible = !Active;
		bool L_2 = __this->get_Active_23();
		Cursor_set_visible_m4747F0DC20D06D1932EC740C5CCC738C1664903D((bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoreMountains.Tools.MMGhostCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMGhostCamera__ctor_m26FCD52A8FF30F8D355AB484C8C39A058C85EA97 (MMGhostCamera_tAA4EEFDBEAD6D17C7C35D6BB69B1C0E23BDB13E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float MovementSpeed = 10f;
		__this->set_MovementSpeed_4((10.0f));
		// public float RunFactor = 4f;
		__this->set_RunFactor_5((4.0f));
		// public float Acceleration = 5f;
		__this->set_Acceleration_6((5.0f));
		// public float Deceleration = 5f;
		__this->set_Deceleration_7((5.0f));
		// public float RotationSpeed = 40f;
		__this->set_RotationSpeed_8((40.0f));
		// public KeyCode ActivateButton = KeyCode.RightShift;
		__this->set_ActivateButton_9(((int32_t)303));
		// public string HorizontalAxisName = "Horizontal";
		__this->set_HorizontalAxisName_10(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		// public string VerticalAxisName = "Vertical";
		__this->set_VerticalAxisName_11(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		// public KeyCode UpButton = KeyCode.Space;
		__this->set_UpButton_12(((int32_t)32));
		// public KeyCode DownButton = KeyCode.C;
		__this->set_DownButton_13(((int32_t)99));
		// public KeyCode ControlsModeSwitch = KeyCode.M;
		__this->set_ControlsModeSwitch_14(((int32_t)109));
		// public KeyCode TimescaleModificationButton = KeyCode.F;
		__this->set_TimescaleModificationButton_15(((int32_t)102));
		// public KeyCode RunButton = KeyCode.LeftShift;
		__this->set_RunButton_16(((int32_t)304));
		// public float MouseSensitivity = 0.02f;
		__this->set_MouseSensitivity_17((0.0199999996f));
		// public float MobileStickSensitivity = 2f;
		__this->set_MobileStickSensitivity_18((2.0f));
		// public float TimescaleModifier = 0.5f;
		__this->set_TimescaleModifier_19((0.5f));
		// public bool AutoActivation = true;
		__this->set_AutoActivation_20((bool)1);
		// public bool MovementEnabled = true;
		__this->set_MovementEnabled_21((bool)1);
		// public bool RotationEnabled = true;
		__this->set_RotationEnabled_22((bool)1);
		// protected Vector3 _movementVector = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set__movementVector_35(L_0);
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
// System.Void MoreMountains.Tools.MMAchievementDisplayer/<DisplayAchievement>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayAchievementU3Ed__4__ctor_m98D649B074C25478A8F859A7C530D527F17C5D43 (U3CDisplayAchievementU3Ed__4_t58CD4D621DDEC2C1271FD89429825E17115F1A3C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MoreMountains.Tools.MMAchievementDisplayer/<DisplayAchievement>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayAchievementU3Ed__4_System_IDisposable_Dispose_m9C835A488FBD8FAD6D045154E42559AFDF0B17E9 (U3CDisplayAchievementU3Ed__4_t58CD4D621DDEC2C1271FD89429825E17115F1A3C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MoreMountains.Tools.MMAchievementDisplayer/<DisplayAchievement>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDisplayAchievementU3Ed__4_MoveNext_m5F6BD8B29E6B8F965C5D88BABBF76867E77EFF76 (U3CDisplayAchievementU3Ed__4_t58CD4D621DDEC2C1271FD89429825E17115F1A3C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_m06FB4232ED756E269BDAE846E32BC8B0EA40B83A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMMAchievementDisplayItem_t7B078B470604860F459A4BE6BCB4C051235CA506_m9BEB7D697C7094B8B76B2621ECE6F8B9CF6E1E0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MMAchievementDisplayer_tA626A5C9362BF2DCA81A860D792778B5682589BA * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	MMAchievementDisplayItem_t7B078B470604860F459A4BE6BCB4C051235CA506 * V_3 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MMAchievementDisplayer_tA626A5C9362BF2DCA81A860D792778B5682589BA * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0173;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if ((this.transform == null) || (AchievementDisplayPrefab == null))
		MMAchievementDisplayer_tA626A5C9362BF2DCA81A860D792778B5682589BA * L_4 = V_1;
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_003d;
		}
	}
	{
		MMAchievementDisplayer_tA626A5C9362BF2DCA81A860D792778B5682589BA * L_7 = V_1;
		NullCheck(L_7);
		MMAchievementDisplayItem_t7B078B470604860F459A4BE6BCB4C051235CA506 * L_8 = L_7->get_AchievementDisplayPrefab_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003f;
		}
	}

IL_003d:
	{
		// yield break;
		return (bool)0;
	}

IL_003f:
	{
		// GameObject instance = (GameObject)Instantiate(AchievementDisplayPrefab.gameObject);
		MMAchievementDisplayer_tA626A5C9362BF2DCA81A860D792778B5682589BA * L_10 = V_1;
		NullCheck(L_10);
		MMAchievementDisplayItem_t7B078B470604860F459A4BE6BCB4C051235CA506 * L_11 = L_10->get_AchievementDisplayPrefab_4();
		NullCheck(L_11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_12, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		V_2 = L_13;
		// instance.transform.SetParent(this.transform,false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = V_2;
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		MMAchievementDisplayer_tA626A5C9362BF2DCA81A860D792778B5682589BA * L_16 = V_1;
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A(L_15, L_17, (bool)0, /*hidden argument*/NULL);
		// MMAchievementDisplayItem achievementDisplay = instance.GetComponent<MMAchievementDisplayItem> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = V_2;
		NullCheck(L_18);
		MMAchievementDisplayItem_t7B078B470604860F459A4BE6BCB4C051235CA506 * L_19;
		L_19 = GameObject_GetComponent_TisMMAchievementDisplayItem_t7B078B470604860F459A4BE6BCB4C051235CA506_m9BEB7D697C7094B8B76B2621ECE6F8B9CF6E1E0A(L_18, /*hidden argument*/GameObject_GetComponent_TisMMAchievementDisplayItem_t7B078B470604860F459A4BE6BCB4C051235CA506_m9BEB7D697C7094B8B76B2621ECE6F8B9CF6E1E0A_RuntimeMethod_var);
		V_3 = L_19;
		// if (achievementDisplay == null)
		MMAchievementDisplayItem_t7B078B470604860F459A4BE6BCB4C051235CA506 * L_20 = V_3;
		bool L_21;
		L_21 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_20, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0074;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_0074:
	{
		// achievementDisplay.Title.text = achievement.Title;
		MMAchievementDisplayItem_t7B078B470604860F459A4BE6BCB4C051235CA506 * L_22 = V_3;
		NullCheck(L_22);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_23 = L_22->get_Title_7();
		MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3 * L_24 = __this->get_achievement_3();
		NullCheck(L_24);
		String_t* L_25 = L_24->get_Title_4();
		NullCheck(L_23);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, L_25);
		// achievementDisplay.Description.text = achievement.Description;
		MMAchievementDisplayItem_t7B078B470604860F459A4BE6BCB4C051235CA506 * L_26 = V_3;
		NullCheck(L_26);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_27 = L_26->get_Description_8();
		MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3 * L_28 = __this->get_achievement_3();
		NullCheck(L_28);
		String_t* L_29 = L_28->get_Description_5();
		NullCheck(L_27);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_27, L_29);
		// achievementDisplay.Icon.sprite = achievement.UnlockedImage;
		MMAchievementDisplayItem_t7B078B470604860F459A4BE6BCB4C051235CA506 * L_30 = V_3;
		NullCheck(L_30);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_31 = L_30->get_Icon_6();
		MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3 * L_32 = __this->get_achievement_3();
		NullCheck(L_32);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_33 = L_32->get_UnlockedImage_8();
		NullCheck(L_31);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_31, L_33, /*hidden argument*/NULL);
		// if (achievement.AchievementType == AchievementTypes.Progress)
		MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3 * L_34 = __this->get_achievement_3();
		NullCheck(L_34);
		int32_t L_35 = L_34->get_AchievementType_1();
		if ((!(((uint32_t)L_35) == ((uint32_t)1))))
		{
			goto IL_00d7;
		}
	}
	{
		// achievementDisplay.ProgressBarDisplay.gameObject.SetActive(true);
		MMAchievementDisplayItem_t7B078B470604860F459A4BE6BCB4C051235CA506 * L_36 = V_3;
		NullCheck(L_36);
		MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E * L_37 = L_36->get_ProgressBarDisplay_9();
		NullCheck(L_37);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38;
		L_38 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_37, /*hidden argument*/NULL);
		NullCheck(L_38);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_38, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_00e8;
	}

IL_00d7:
	{
		// achievementDisplay.ProgressBarDisplay.gameObject.SetActive(false);
		MMAchievementDisplayItem_t7B078B470604860F459A4BE6BCB4C051235CA506 * L_39 = V_3;
		NullCheck(L_39);
		MMProgressBar_tEC31EB0379EBDA1271DBBF6FED3260820DB5EC2E * L_40 = L_39->get_ProgressBarDisplay_9();
		NullCheck(L_40);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41;
		L_41 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_41, (bool)0, /*hidden argument*/NULL);
	}

IL_00e8:
	{
		// if (achievement.UnlockedSound != null)
		MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3 * L_42 = __this->get_achievement_3();
		NullCheck(L_42);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_43 = L_42->get_UnlockedSound_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_43, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_0116;
		}
	}
	{
		// MMSfxEvent.Trigger (achievement.UnlockedSound);
		MMAchievement_tC25412B487976F2E3BF4D8E813790A0C27B07BF3 * L_45 = __this->get_achievement_3();
		NullCheck(L_45);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_46 = L_45->get_UnlockedSound_9();
		MMSfxEvent_Trigger_mE6094519738D6FD07B1B244D580802BD99B9C6A7(L_46, (AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F *)NULL, (1.0f), (1.0f), /*hidden argument*/NULL);
	}

IL_0116:
	{
		// CanvasGroup achievementCanvasGroup = instance.GetComponent<CanvasGroup> ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47 = V_2;
		NullCheck(L_47);
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_48;
		L_48 = GameObject_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_m06FB4232ED756E269BDAE846E32BC8B0EA40B83A(L_47, /*hidden argument*/GameObject_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_m06FB4232ED756E269BDAE846E32BC8B0EA40B83A_RuntimeMethod_var);
		__this->set_U3CachievementCanvasGroupU3E5__2_4(L_48);
		// if (achievementCanvasGroup != null)
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_49 = __this->get_U3CachievementCanvasGroupU3E5__2_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_50;
		L_50 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_49, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_0198;
		}
	}
	{
		// achievementCanvasGroup.alpha = 0;
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_51 = __this->get_U3CachievementCanvasGroupU3E5__2_4();
		NullCheck(L_51);
		CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53(L_51, (0.0f), /*hidden argument*/NULL);
		// StartCoroutine(MMFade.FadeCanvasGroup(achievementCanvasGroup, AchievementFadeDuration, 1));
		MMAchievementDisplayer_tA626A5C9362BF2DCA81A860D792778B5682589BA * L_52 = V_1;
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_53 = __this->get_U3CachievementCanvasGroupU3E5__2_4();
		MMAchievementDisplayer_tA626A5C9362BF2DCA81A860D792778B5682589BA * L_54 = V_1;
		NullCheck(L_54);
		float L_55 = L_54->get_AchievementFadeDuration_6();
		RuntimeObject* L_56;
		L_56 = MMFade_FadeCanvasGroup_m0746D55530A02D5EC943A532C1916D52D6A209BA(L_53, L_55, (1.0f), (bool)1, /*hidden argument*/NULL);
		NullCheck(L_52);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_57;
		L_57 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_52, L_56, /*hidden argument*/NULL);
		// yield return _achievementFadeOutWFS;
		MMAchievementDisplayer_tA626A5C9362BF2DCA81A860D792778B5682589BA * L_58 = V_1;
		NullCheck(L_58);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_59 = L_58->get__achievementFadeOutWFS_7();
		__this->set_U3CU3E2__current_1(L_59);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0173:
	{
		__this->set_U3CU3E1__state_0((-1));
		// StartCoroutine(MMFade.FadeCanvasGroup(achievementCanvasGroup, AchievementFadeDuration, 0));
		MMAchievementDisplayer_tA626A5C9362BF2DCA81A860D792778B5682589BA * L_60 = V_1;
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_61 = __this->get_U3CachievementCanvasGroupU3E5__2_4();
		MMAchievementDisplayer_tA626A5C9362BF2DCA81A860D792778B5682589BA * L_62 = V_1;
		NullCheck(L_62);
		float L_63 = L_62->get_AchievementFadeDuration_6();
		RuntimeObject* L_64;
		L_64 = MMFade_FadeCanvasGroup_m0746D55530A02D5EC943A532C1916D52D6A209BA(L_61, L_63, (0.0f), (bool)1, /*hidden argument*/NULL);
		NullCheck(L_60);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_65;
		L_65 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_60, L_64, /*hidden argument*/NULL);
	}

IL_0198:
	{
		// }
		return (bool)0;
	}
}
// System.Object MoreMountains.Tools.MMAchievementDisplayer/<DisplayAchievement>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDisplayAchievementU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4BEA96FC1994FB3D43B5BB000563871763BB1CBA (U3CDisplayAchievementU3Ed__4_t58CD4D621DDEC2C1271FD89429825E17115F1A3C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MoreMountains.Tools.MMAchievementDisplayer/<DisplayAchievement>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayAchievementU3Ed__4_System_Collections_IEnumerator_Reset_mD6BE78F30B1C08DA6CA86E439F8915AB1338B04B (U3CDisplayAchievementU3Ed__4_t58CD4D621DDEC2C1271FD89429825E17115F1A3C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDisplayAchievementU3Ed__4_System_Collections_IEnumerator_Reset_mD6BE78F30B1C08DA6CA86E439F8915AB1338B04B_RuntimeMethod_var)));
	}
}
// System.Object MoreMountains.Tools.MMAchievementDisplayer/<DisplayAchievement>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDisplayAchievementU3Ed__4_System_Collections_IEnumerator_get_Current_m79EB08950B50F317067D7F089BCA2DCBEC85FC74 (U3CDisplayAchievementU3Ed__4_t58CD4D621DDEC2C1271FD89429825E17115F1A3C * __this, const RuntimeMethod* method)
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a1;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a1;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a1;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
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

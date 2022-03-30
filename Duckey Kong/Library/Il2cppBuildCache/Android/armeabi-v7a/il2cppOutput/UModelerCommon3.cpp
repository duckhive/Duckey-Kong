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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Mesh>
struct Dictionary_2_t6F3E5D64D7744603C2D69379B71AD0438DBC18A4;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// tripolygon.UModeler.EditableMesh
struct EditableMesh_tEB3DF9482B43D4211A32570D18706394BF29BD68;
// tripolygon.UModeler.EngineResourceManager
struct EngineResourceManager_t2913C879F7F95D3CACB9DF531B56454D4931F7F7;
// tripolygon.UModeler.HotspotLayout
struct HotspotLayout_tE905545E1FA893FE5A4EB34AAAE76D1B5746AB13;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// tripolygon.UModeler.UModeler
struct UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686;
// tripolygon.UModeler.Vertex
struct Vertex_t7306327CAF84974D189B7F295BD8BF50D455E7AC;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// tripolygon.UModeler.Triangulator/Point
struct Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801;
// tripolygon.UModeler.Triangulator/PointPair
struct PointPair_t4C4D25D7D1E464E8D7E3E1E45ACF49BC2CBE674F;
// tripolygon.UModeler.Triangulator/PointPairComparer
struct PointPairComparer_tFF5ED52CC3EF2FB4324EBA41DBF52B594D3D5366;
// tripolygon.UModeler.UModeler/ModelerDelegate
struct ModelerDelegate_t35824108F7DA93CFA61B61F5960DEA60EC4562DA;

IL2CPP_EXTERN_C RuntimeClass* PointPair_t4C4D25D7D1E464E8D7E3E1E45ACF49BC2CBE674F_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

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

// tripolygon.UModeler.Triangulator/PointPair
struct PointPair_t4C4D25D7D1E464E8D7E3E1E45ACF49BC2CBE674F  : public RuntimeObject
{
public:
	// tripolygon.UModeler.Triangulator/Point tripolygon.UModeler.Triangulator/PointPair::p0
	Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 * ___p0_0;
	// tripolygon.UModeler.Triangulator/Point tripolygon.UModeler.Triangulator/PointPair::p1
	Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 * ___p1_1;

public:
	inline static int32_t get_offset_of_p0_0() { return static_cast<int32_t>(offsetof(PointPair_t4C4D25D7D1E464E8D7E3E1E45ACF49BC2CBE674F, ___p0_0)); }
	inline Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 * get_p0_0() const { return ___p0_0; }
	inline Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 ** get_address_of_p0_0() { return &___p0_0; }
	inline void set_p0_0(Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 * value)
	{
		___p0_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___p0_0), (void*)value);
	}

	inline static int32_t get_offset_of_p1_1() { return static_cast<int32_t>(offsetof(PointPair_t4C4D25D7D1E464E8D7E3E1E45ACF49BC2CBE674F, ___p1_1)); }
	inline Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 * get_p1_1() const { return ___p1_1; }
	inline Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 ** get_address_of_p1_1() { return &___p1_1; }
	inline void set_p1_1(Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 * value)
	{
		___p1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___p1_1), (void*)value);
	}
};


// tripolygon.UModeler.Triangulator/PointPairComparer
struct PointPairComparer_tFF5ED52CC3EF2FB4324EBA41DBF52B594D3D5366  : public RuntimeObject
{
public:

public:
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

// tripolygon.UModeler.EDirection
struct EDirection_tE099F3D471EF3DE6B0DC9634D99C233A5A3E6D33 
{
public:
	// System.Int32 tripolygon.UModeler.EDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EDirection_tE099F3D471EF3DE6B0DC9634D99C233A5A3E6D33, ___value___2)); }
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

// tripolygon.UModeler.Vertex
struct Vertex_t7306327CAF84974D189B7F295BD8BF50D455E7AC  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 tripolygon.UModeler.Vertex::pos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos_0;
	// UnityEngine.Vector2 tripolygon.UModeler.Vertex::uv
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___uv_1;
	// UnityEngine.Color tripolygon.UModeler.Vertex::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_2;

public:
	inline static int32_t get_offset_of_pos_0() { return static_cast<int32_t>(offsetof(Vertex_t7306327CAF84974D189B7F295BD8BF50D455E7AC, ___pos_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_pos_0() const { return ___pos_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_pos_0() { return &___pos_0; }
	inline void set_pos_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___pos_0 = value;
	}

	inline static int32_t get_offset_of_uv_1() { return static_cast<int32_t>(offsetof(Vertex_t7306327CAF84974D189B7F295BD8BF50D455E7AC, ___uv_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_uv_1() const { return ___uv_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_uv_1() { return &___uv_1; }
	inline void set_uv_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___uv_1 = value;
	}

	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(Vertex_t7306327CAF84974D189B7F295BD8BF50D455E7AC, ___color_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_2() const { return ___color_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_2 = value;
	}
};


// tripolygon.UModeler.Triangulator/EPointType
struct EPointType_t76C3078A23AD7E5F897DF2B2C960E0EFDD11E49B 
{
public:
	// System.Int32 tripolygon.UModeler.Triangulator/EPointType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EPointType_t76C3078A23AD7E5F897DF2B2C960E0EFDD11E49B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// tripolygon.UModeler.Util/EClippingVertexType
struct EClippingVertexType_t31F09B63F6833AF758A94D366EBAC72214CAD904 
{
public:
	// System.Int32 tripolygon.UModeler.Util/EClippingVertexType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EClippingVertexType_t31F09B63F6833AF758A94D366EBAC72214CAD904, ___value___2)); }
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

// tripolygon.UModeler.Triangulator/Point
struct Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801  : public RuntimeObject
{
public:
	// UnityEngine.Vector2 tripolygon.UModeler.Triangulator/Point::pos
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos_0;
	// tripolygon.UModeler.Vertex tripolygon.UModeler.Triangulator/Point::originalVtx
	Vertex_t7306327CAF84974D189B7F295BD8BF50D455E7AC * ___originalVtx_1;
	// System.Int32 tripolygon.UModeler.Triangulator/Point::referringvtx
	int32_t ___referringvtx_2;
	// tripolygon.UModeler.Triangulator/Point tripolygon.UModeler.Triangulator/Point::next
	Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 * ___next_3;
	// tripolygon.UModeler.Triangulator/Point tripolygon.UModeler.Triangulator/Point::prev
	Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 * ___prev_4;
	// tripolygon.UModeler.Triangulator/EPointType tripolygon.UModeler.Triangulator/Point::type
	int32_t ___type_5;
	// tripolygon.UModeler.EDirection tripolygon.UModeler.Triangulator/Point::interiorDir
	int32_t ___interiorDir_6;
	// tripolygon.UModeler.EDirection tripolygon.UModeler.Triangulator/Point::whichSideInMonotone
	int32_t ___whichSideInMonotone_7;

public:
	inline static int32_t get_offset_of_pos_0() { return static_cast<int32_t>(offsetof(Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801, ___pos_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_pos_0() const { return ___pos_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_pos_0() { return &___pos_0; }
	inline void set_pos_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___pos_0 = value;
	}

	inline static int32_t get_offset_of_originalVtx_1() { return static_cast<int32_t>(offsetof(Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801, ___originalVtx_1)); }
	inline Vertex_t7306327CAF84974D189B7F295BD8BF50D455E7AC * get_originalVtx_1() const { return ___originalVtx_1; }
	inline Vertex_t7306327CAF84974D189B7F295BD8BF50D455E7AC ** get_address_of_originalVtx_1() { return &___originalVtx_1; }
	inline void set_originalVtx_1(Vertex_t7306327CAF84974D189B7F295BD8BF50D455E7AC * value)
	{
		___originalVtx_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___originalVtx_1), (void*)value);
	}

	inline static int32_t get_offset_of_referringvtx_2() { return static_cast<int32_t>(offsetof(Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801, ___referringvtx_2)); }
	inline int32_t get_referringvtx_2() const { return ___referringvtx_2; }
	inline int32_t* get_address_of_referringvtx_2() { return &___referringvtx_2; }
	inline void set_referringvtx_2(int32_t value)
	{
		___referringvtx_2 = value;
	}

	inline static int32_t get_offset_of_next_3() { return static_cast<int32_t>(offsetof(Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801, ___next_3)); }
	inline Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 * get_next_3() const { return ___next_3; }
	inline Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 ** get_address_of_next_3() { return &___next_3; }
	inline void set_next_3(Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 * value)
	{
		___next_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_3), (void*)value);
	}

	inline static int32_t get_offset_of_prev_4() { return static_cast<int32_t>(offsetof(Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801, ___prev_4)); }
	inline Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 * get_prev_4() const { return ___prev_4; }
	inline Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 ** get_address_of_prev_4() { return &___prev_4; }
	inline void set_prev_4(Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 * value)
	{
		___prev_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prev_4), (void*)value);
	}

	inline static int32_t get_offset_of_type_5() { return static_cast<int32_t>(offsetof(Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801, ___type_5)); }
	inline int32_t get_type_5() const { return ___type_5; }
	inline int32_t* get_address_of_type_5() { return &___type_5; }
	inline void set_type_5(int32_t value)
	{
		___type_5 = value;
	}

	inline static int32_t get_offset_of_interiorDir_6() { return static_cast<int32_t>(offsetof(Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801, ___interiorDir_6)); }
	inline int32_t get_interiorDir_6() const { return ___interiorDir_6; }
	inline int32_t* get_address_of_interiorDir_6() { return &___interiorDir_6; }
	inline void set_interiorDir_6(int32_t value)
	{
		___interiorDir_6 = value;
	}

	inline static int32_t get_offset_of_whichSideInMonotone_7() { return static_cast<int32_t>(offsetof(Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801, ___whichSideInMonotone_7)); }
	inline int32_t get_whichSideInMonotone_7() const { return ___whichSideInMonotone_7; }
	inline int32_t* get_address_of_whichSideInMonotone_7() { return &___whichSideInMonotone_7; }
	inline void set_whichSideInMonotone_7(int32_t value)
	{
		___whichSideInMonotone_7 = value;
	}
};


// tripolygon.UModeler.Util/ClippingVertex
struct ClippingVertex_t1037F934182244CCD6278CB2FEAE8D0BF10583DF 
{
public:
	// tripolygon.UModeler.Vertex tripolygon.UModeler.Util/ClippingVertex::vtx
	Vertex_t7306327CAF84974D189B7F295BD8BF50D455E7AC * ___vtx_0;
	// tripolygon.UModeler.Util/EClippingVertexType tripolygon.UModeler.Util/ClippingVertex::type
	int32_t ___type_1;
	// System.Boolean tripolygon.UModeler.Util/ClippingVertex::zeroDistAndNoCreated
	bool ___zeroDistAndNoCreated_2;

public:
	inline static int32_t get_offset_of_vtx_0() { return static_cast<int32_t>(offsetof(ClippingVertex_t1037F934182244CCD6278CB2FEAE8D0BF10583DF, ___vtx_0)); }
	inline Vertex_t7306327CAF84974D189B7F295BD8BF50D455E7AC * get_vtx_0() const { return ___vtx_0; }
	inline Vertex_t7306327CAF84974D189B7F295BD8BF50D455E7AC ** get_address_of_vtx_0() { return &___vtx_0; }
	inline void set_vtx_0(Vertex_t7306327CAF84974D189B7F295BD8BF50D455E7AC * value)
	{
		___vtx_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vtx_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ClippingVertex_t1037F934182244CCD6278CB2FEAE8D0BF10583DF, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_zeroDistAndNoCreated_2() { return static_cast<int32_t>(offsetof(ClippingVertex_t1037F934182244CCD6278CB2FEAE8D0BF10583DF, ___zeroDistAndNoCreated_2)); }
	inline bool get_zeroDistAndNoCreated_2() const { return ___zeroDistAndNoCreated_2; }
	inline bool* get_address_of_zeroDistAndNoCreated_2() { return &___zeroDistAndNoCreated_2; }
	inline void set_zeroDistAndNoCreated_2(bool value)
	{
		___zeroDistAndNoCreated_2 = value;
	}
};

// Native definition for P/Invoke marshalling of tripolygon.UModeler.Util/ClippingVertex
struct ClippingVertex_t1037F934182244CCD6278CB2FEAE8D0BF10583DF_marshaled_pinvoke
{
	Vertex_t7306327CAF84974D189B7F295BD8BF50D455E7AC * ___vtx_0;
	int32_t ___type_1;
	int32_t ___zeroDistAndNoCreated_2;
};
// Native definition for COM marshalling of tripolygon.UModeler.Util/ClippingVertex
struct ClippingVertex_t1037F934182244CCD6278CB2FEAE8D0BF10583DF_marshaled_com
{
	Vertex_t7306327CAF84974D189B7F295BD8BF50D455E7AC * ___vtx_0;
	int32_t ___type_1;
	int32_t ___zeroDistAndNoCreated_2;
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


// tripolygon.UModeler.UModeler/ModelerDelegate
struct ModelerDelegate_t35824108F7DA93CFA61B61F5960DEA60EC4562DA  : public MulticastDelegate_t
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


// tripolygon.UModeler.UModeler
struct UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// tripolygon.UModeler.EditableMesh tripolygon.UModeler.UModeler::editableMesh_
	EditableMesh_tEB3DF9482B43D4211A32570D18706394BF29BD68 * ___editableMesh__11;
	// System.Boolean tripolygon.UModeler.UModeler::backfaces_
	bool ___backfaces__12;
	// System.Collections.Generic.List`1<UnityEngine.Material> tripolygon.UModeler.UModeler::materials
	List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * ___materials_13;
	// UnityEngine.Material[] tripolygon.UModeler.UModeler::originalMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___originalMaterials_14;
	// System.Boolean tripolygon.UModeler.UModeler::editMode
	bool ___editMode_15;
	// System.Boolean tripolygon.UModeler.UModeler::recalculateTangents
	bool ___recalculateTangents_16;
	// System.String tripolygon.UModeler.UModeler::serializedGuid
	String_t* ___serializedGuid_17;
	// System.String tripolygon.UModeler.UModeler::assetPath
	String_t* ___assetPath_18;
	// System.Boolean tripolygon.UModeler.UModeler::isInvisibleObject
	bool ___isInvisibleObject_19;
	// UnityEngine.Mesh tripolygon.UModeler.UModeler::mainRenderableMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mainRenderableMesh_20;
	// tripolygon.UModeler.HotspotLayout tripolygon.UModeler.UModeler::hotspotLayout
	HotspotLayout_tE905545E1FA893FE5A4EB34AAAE76D1B5746AB13 * ___hotspotLayout_21;
	// System.Single tripolygon.UModeler.UModeler::hotspotScale
	float ___hotspotScale_22;
	// System.Int32 tripolygon.UModeler.UModeler::hotspotPadding
	int32_t ___hotspotPadding_23;
	// System.Boolean tripolygon.UModeler.UModeler::autoHotspotLayout
	bool ___autoHotspotLayout_24;
	// System.Boolean tripolygon.UModeler.UModeler::hotspotGroup
	bool ___hotspotGroup_25;
	// System.Boolean tripolygon.UModeler.UModeler::<LockGenerateMesh>k__BackingField
	bool ___U3CLockGenerateMeshU3Ek__BackingField_26;
	// tripolygon.UModeler.EngineResourceManager tripolygon.UModeler.UModeler::engineResources_
	EngineResourceManager_t2913C879F7F95D3CACB9DF531B56454D4931F7F7 * ___engineResources__28;
	// System.Int32 tripolygon.UModeler.UModeler::totalTriangleCount_
	int32_t ___totalTriangleCount__29;
	// System.Int32 tripolygon.UModeler.UModeler::totalPolygonCount_
	int32_t ___totalPolygonCount__30;
	// UnityEngine.MeshFilter tripolygon.UModeler.UModeler::renderableMeshFilter_
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ___renderableMeshFilter__31;
	// UnityEngine.MeshRenderer tripolygon.UModeler.UModeler::meshRenderer_
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * ___meshRenderer__32;

public:
	inline static int32_t get_offset_of_editableMesh__11() { return static_cast<int32_t>(offsetof(UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686, ___editableMesh__11)); }
	inline EditableMesh_tEB3DF9482B43D4211A32570D18706394BF29BD68 * get_editableMesh__11() const { return ___editableMesh__11; }
	inline EditableMesh_tEB3DF9482B43D4211A32570D18706394BF29BD68 ** get_address_of_editableMesh__11() { return &___editableMesh__11; }
	inline void set_editableMesh__11(EditableMesh_tEB3DF9482B43D4211A32570D18706394BF29BD68 * value)
	{
		___editableMesh__11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___editableMesh__11), (void*)value);
	}

	inline static int32_t get_offset_of_backfaces__12() { return static_cast<int32_t>(offsetof(UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686, ___backfaces__12)); }
	inline bool get_backfaces__12() const { return ___backfaces__12; }
	inline bool* get_address_of_backfaces__12() { return &___backfaces__12; }
	inline void set_backfaces__12(bool value)
	{
		___backfaces__12 = value;
	}

	inline static int32_t get_offset_of_materials_13() { return static_cast<int32_t>(offsetof(UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686, ___materials_13)); }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * get_materials_13() const { return ___materials_13; }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 ** get_address_of_materials_13() { return &___materials_13; }
	inline void set_materials_13(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * value)
	{
		___materials_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___materials_13), (void*)value);
	}

	inline static int32_t get_offset_of_originalMaterials_14() { return static_cast<int32_t>(offsetof(UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686, ___originalMaterials_14)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_originalMaterials_14() const { return ___originalMaterials_14; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_originalMaterials_14() { return &___originalMaterials_14; }
	inline void set_originalMaterials_14(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___originalMaterials_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___originalMaterials_14), (void*)value);
	}

	inline static int32_t get_offset_of_editMode_15() { return static_cast<int32_t>(offsetof(UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686, ___editMode_15)); }
	inline bool get_editMode_15() const { return ___editMode_15; }
	inline bool* get_address_of_editMode_15() { return &___editMode_15; }
	inline void set_editMode_15(bool value)
	{
		___editMode_15 = value;
	}

	inline static int32_t get_offset_of_recalculateTangents_16() { return static_cast<int32_t>(offsetof(UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686, ___recalculateTangents_16)); }
	inline bool get_recalculateTangents_16() const { return ___recalculateTangents_16; }
	inline bool* get_address_of_recalculateTangents_16() { return &___recalculateTangents_16; }
	inline void set_recalculateTangents_16(bool value)
	{
		___recalculateTangents_16 = value;
	}

	inline static int32_t get_offset_of_serializedGuid_17() { return static_cast<int32_t>(offsetof(UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686, ___serializedGuid_17)); }
	inline String_t* get_serializedGuid_17() const { return ___serializedGuid_17; }
	inline String_t** get_address_of_serializedGuid_17() { return &___serializedGuid_17; }
	inline void set_serializedGuid_17(String_t* value)
	{
		___serializedGuid_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializedGuid_17), (void*)value);
	}

	inline static int32_t get_offset_of_assetPath_18() { return static_cast<int32_t>(offsetof(UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686, ___assetPath_18)); }
	inline String_t* get_assetPath_18() const { return ___assetPath_18; }
	inline String_t** get_address_of_assetPath_18() { return &___assetPath_18; }
	inline void set_assetPath_18(String_t* value)
	{
		___assetPath_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assetPath_18), (void*)value);
	}

	inline static int32_t get_offset_of_isInvisibleObject_19() { return static_cast<int32_t>(offsetof(UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686, ___isInvisibleObject_19)); }
	inline bool get_isInvisibleObject_19() const { return ___isInvisibleObject_19; }
	inline bool* get_address_of_isInvisibleObject_19() { return &___isInvisibleObject_19; }
	inline void set_isInvisibleObject_19(bool value)
	{
		___isInvisibleObject_19 = value;
	}

	inline static int32_t get_offset_of_mainRenderableMesh_20() { return static_cast<int32_t>(offsetof(UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686, ___mainRenderableMesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_mainRenderableMesh_20() const { return ___mainRenderableMesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_mainRenderableMesh_20() { return &___mainRenderableMesh_20; }
	inline void set_mainRenderableMesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___mainRenderableMesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainRenderableMesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_hotspotLayout_21() { return static_cast<int32_t>(offsetof(UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686, ___hotspotLayout_21)); }
	inline HotspotLayout_tE905545E1FA893FE5A4EB34AAAE76D1B5746AB13 * get_hotspotLayout_21() const { return ___hotspotLayout_21; }
	inline HotspotLayout_tE905545E1FA893FE5A4EB34AAAE76D1B5746AB13 ** get_address_of_hotspotLayout_21() { return &___hotspotLayout_21; }
	inline void set_hotspotLayout_21(HotspotLayout_tE905545E1FA893FE5A4EB34AAAE76D1B5746AB13 * value)
	{
		___hotspotLayout_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hotspotLayout_21), (void*)value);
	}

	inline static int32_t get_offset_of_hotspotScale_22() { return static_cast<int32_t>(offsetof(UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686, ___hotspotScale_22)); }
	inline float get_hotspotScale_22() const { return ___hotspotScale_22; }
	inline float* get_address_of_hotspotScale_22() { return &___hotspotScale_22; }
	inline void set_hotspotScale_22(float value)
	{
		___hotspotScale_22 = value;
	}

	inline static int32_t get_offset_of_hotspotPadding_23() { return static_cast<int32_t>(offsetof(UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686, ___hotspotPadding_23)); }
	inline int32_t get_hotspotPadding_23() const { return ___hotspotPadding_23; }
	inline int32_t* get_address_of_hotspotPadding_23() { return &___hotspotPadding_23; }
	inline void set_hotspotPadding_23(int32_t value)
	{
		___hotspotPadding_23 = value;
	}

	inline static int32_t get_offset_of_autoHotspotLayout_24() { return static_cast<int32_t>(offsetof(UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686, ___autoHotspotLayout_24)); }
	inline bool get_autoHotspotLayout_24() const { return ___autoHotspotLayout_24; }
	inline bool* get_address_of_autoHotspotLayout_24() { return &___autoHotspotLayout_24; }
	inline void set_autoHotspotLayout_24(bool value)
	{
		___autoHotspotLayout_24 = value;
	}

	inline static int32_t get_offset_of_hotspotGroup_25() { return static_cast<int32_t>(offsetof(UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686, ___hotspotGroup_25)); }
	inline bool get_hotspotGroup_25() const { return ___hotspotGroup_25; }
	inline bool* get_address_of_hotspotGroup_25() { return &___hotspotGroup_25; }
	inline void set_hotspotGroup_25(bool value)
	{
		___hotspotGroup_25 = value;
	}

	inline static int32_t get_offset_of_U3CLockGenerateMeshU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686, ___U3CLockGenerateMeshU3Ek__BackingField_26)); }
	inline bool get_U3CLockGenerateMeshU3Ek__BackingField_26() const { return ___U3CLockGenerateMeshU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CLockGenerateMeshU3Ek__BackingField_26() { return &___U3CLockGenerateMeshU3Ek__BackingField_26; }
	inline void set_U3CLockGenerateMeshU3Ek__BackingField_26(bool value)
	{
		___U3CLockGenerateMeshU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_engineResources__28() { return static_cast<int32_t>(offsetof(UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686, ___engineResources__28)); }
	inline EngineResourceManager_t2913C879F7F95D3CACB9DF531B56454D4931F7F7 * get_engineResources__28() const { return ___engineResources__28; }
	inline EngineResourceManager_t2913C879F7F95D3CACB9DF531B56454D4931F7F7 ** get_address_of_engineResources__28() { return &___engineResources__28; }
	inline void set_engineResources__28(EngineResourceManager_t2913C879F7F95D3CACB9DF531B56454D4931F7F7 * value)
	{
		___engineResources__28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___engineResources__28), (void*)value);
	}

	inline static int32_t get_offset_of_totalTriangleCount__29() { return static_cast<int32_t>(offsetof(UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686, ___totalTriangleCount__29)); }
	inline int32_t get_totalTriangleCount__29() const { return ___totalTriangleCount__29; }
	inline int32_t* get_address_of_totalTriangleCount__29() { return &___totalTriangleCount__29; }
	inline void set_totalTriangleCount__29(int32_t value)
	{
		___totalTriangleCount__29 = value;
	}

	inline static int32_t get_offset_of_totalPolygonCount__30() { return static_cast<int32_t>(offsetof(UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686, ___totalPolygonCount__30)); }
	inline int32_t get_totalPolygonCount__30() const { return ___totalPolygonCount__30; }
	inline int32_t* get_address_of_totalPolygonCount__30() { return &___totalPolygonCount__30; }
	inline void set_totalPolygonCount__30(int32_t value)
	{
		___totalPolygonCount__30 = value;
	}

	inline static int32_t get_offset_of_renderableMeshFilter__31() { return static_cast<int32_t>(offsetof(UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686, ___renderableMeshFilter__31)); }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * get_renderableMeshFilter__31() const { return ___renderableMeshFilter__31; }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A ** get_address_of_renderableMeshFilter__31() { return &___renderableMeshFilter__31; }
	inline void set_renderableMeshFilter__31(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * value)
	{
		___renderableMeshFilter__31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderableMeshFilter__31), (void*)value);
	}

	inline static int32_t get_offset_of_meshRenderer__32() { return static_cast<int32_t>(offsetof(UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686, ___meshRenderer__32)); }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * get_meshRenderer__32() const { return ___meshRenderer__32; }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** get_address_of_meshRenderer__32() { return &___meshRenderer__32; }
	inline void set_meshRenderer__32(MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		___meshRenderer__32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshRenderer__32), (void*)value);
	}
};

struct UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686_StaticFields
{
public:
	// System.Boolean tripolygon.UModeler.UModeler::enableDelegate
	bool ___enableDelegate_4;
	// tripolygon.UModeler.UModeler/ModelerDelegate tripolygon.UModeler.UModeler::OnAwakeDelegate
	ModelerDelegate_t35824108F7DA93CFA61B61F5960DEA60EC4562DA * ___OnAwakeDelegate_5;
	// tripolygon.UModeler.UModeler/ModelerDelegate tripolygon.UModeler.UModeler::OnDestroyDelegate
	ModelerDelegate_t35824108F7DA93CFA61B61F5960DEA60EC4562DA * ___OnDestroyDelegate_6;
	// tripolygon.UModeler.UModeler/ModelerDelegate tripolygon.UModeler.UModeler::OnDisableDelegate
	ModelerDelegate_t35824108F7DA93CFA61B61F5960DEA60EC4562DA * ___OnDisableDelegate_7;
	// tripolygon.UModeler.UModeler/ModelerDelegate tripolygon.UModeler.UModeler::OnEnableDelegate
	ModelerDelegate_t35824108F7DA93CFA61B61F5960DEA60EC4562DA * ___OnEnableDelegate_8;
	// tripolygon.UModeler.UModeler/ModelerDelegate tripolygon.UModeler.UModeler::OnStartDelegate
	ModelerDelegate_t35824108F7DA93CFA61B61F5960DEA60EC4562DA * ___OnStartDelegate_9;
	// System.UInt64 tripolygon.UModeler.UModeler::latestID_
	uint64_t ___latestID__10;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Mesh> tripolygon.UModeler.UModeler::meshContainer
	Dictionary_2_t6F3E5D64D7744603C2D69379B71AD0438DBC18A4 * ___meshContainer_27;

public:
	inline static int32_t get_offset_of_enableDelegate_4() { return static_cast<int32_t>(offsetof(UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686_StaticFields, ___enableDelegate_4)); }
	inline bool get_enableDelegate_4() const { return ___enableDelegate_4; }
	inline bool* get_address_of_enableDelegate_4() { return &___enableDelegate_4; }
	inline void set_enableDelegate_4(bool value)
	{
		___enableDelegate_4 = value;
	}

	inline static int32_t get_offset_of_OnAwakeDelegate_5() { return static_cast<int32_t>(offsetof(UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686_StaticFields, ___OnAwakeDelegate_5)); }
	inline ModelerDelegate_t35824108F7DA93CFA61B61F5960DEA60EC4562DA * get_OnAwakeDelegate_5() const { return ___OnAwakeDelegate_5; }
	inline ModelerDelegate_t35824108F7DA93CFA61B61F5960DEA60EC4562DA ** get_address_of_OnAwakeDelegate_5() { return &___OnAwakeDelegate_5; }
	inline void set_OnAwakeDelegate_5(ModelerDelegate_t35824108F7DA93CFA61B61F5960DEA60EC4562DA * value)
	{
		___OnAwakeDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAwakeDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnDestroyDelegate_6() { return static_cast<int32_t>(offsetof(UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686_StaticFields, ___OnDestroyDelegate_6)); }
	inline ModelerDelegate_t35824108F7DA93CFA61B61F5960DEA60EC4562DA * get_OnDestroyDelegate_6() const { return ___OnDestroyDelegate_6; }
	inline ModelerDelegate_t35824108F7DA93CFA61B61F5960DEA60EC4562DA ** get_address_of_OnDestroyDelegate_6() { return &___OnDestroyDelegate_6; }
	inline void set_OnDestroyDelegate_6(ModelerDelegate_t35824108F7DA93CFA61B61F5960DEA60EC4562DA * value)
	{
		___OnDestroyDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDestroyDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnDisableDelegate_7() { return static_cast<int32_t>(offsetof(UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686_StaticFields, ___OnDisableDelegate_7)); }
	inline ModelerDelegate_t35824108F7DA93CFA61B61F5960DEA60EC4562DA * get_OnDisableDelegate_7() const { return ___OnDisableDelegate_7; }
	inline ModelerDelegate_t35824108F7DA93CFA61B61F5960DEA60EC4562DA ** get_address_of_OnDisableDelegate_7() { return &___OnDisableDelegate_7; }
	inline void set_OnDisableDelegate_7(ModelerDelegate_t35824108F7DA93CFA61B61F5960DEA60EC4562DA * value)
	{
		___OnDisableDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDisableDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnEnableDelegate_8() { return static_cast<int32_t>(offsetof(UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686_StaticFields, ___OnEnableDelegate_8)); }
	inline ModelerDelegate_t35824108F7DA93CFA61B61F5960DEA60EC4562DA * get_OnEnableDelegate_8() const { return ___OnEnableDelegate_8; }
	inline ModelerDelegate_t35824108F7DA93CFA61B61F5960DEA60EC4562DA ** get_address_of_OnEnableDelegate_8() { return &___OnEnableDelegate_8; }
	inline void set_OnEnableDelegate_8(ModelerDelegate_t35824108F7DA93CFA61B61F5960DEA60EC4562DA * value)
	{
		___OnEnableDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnEnableDelegate_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnStartDelegate_9() { return static_cast<int32_t>(offsetof(UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686_StaticFields, ___OnStartDelegate_9)); }
	inline ModelerDelegate_t35824108F7DA93CFA61B61F5960DEA60EC4562DA * get_OnStartDelegate_9() const { return ___OnStartDelegate_9; }
	inline ModelerDelegate_t35824108F7DA93CFA61B61F5960DEA60EC4562DA ** get_address_of_OnStartDelegate_9() { return &___OnStartDelegate_9; }
	inline void set_OnStartDelegate_9(ModelerDelegate_t35824108F7DA93CFA61B61F5960DEA60EC4562DA * value)
	{
		___OnStartDelegate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStartDelegate_9), (void*)value);
	}

	inline static int32_t get_offset_of_latestID__10() { return static_cast<int32_t>(offsetof(UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686_StaticFields, ___latestID__10)); }
	inline uint64_t get_latestID__10() const { return ___latestID__10; }
	inline uint64_t* get_address_of_latestID__10() { return &___latestID__10; }
	inline void set_latestID__10(uint64_t value)
	{
		___latestID__10 = value;
	}

	inline static int32_t get_offset_of_meshContainer_27() { return static_cast<int32_t>(offsetof(UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686_StaticFields, ___meshContainer_27)); }
	inline Dictionary_2_t6F3E5D64D7744603C2D69379B71AD0438DBC18A4 * get_meshContainer_27() const { return ___meshContainer_27; }
	inline Dictionary_2_t6F3E5D64D7744603C2D69379B71AD0438DBC18A4 ** get_address_of_meshContainer_27() { return &___meshContainer_27; }
	inline void set_meshContainer_27(Dictionary_2_t6F3E5D64D7744603C2D69379B71AD0438DBC18A4 * value)
	{
		___meshContainer_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshContainer_27), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void tripolygon.UModeler.Triangulator/PointPair::.ctor(tripolygon.UModeler.Triangulator/Point,tripolygon.UModeler.Triangulator/Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointPair__ctor_m7A46B8C865392DACB8150DF7381208D918FDCEE2 (PointPair_t4C4D25D7D1E464E8D7E3E1E45ACF49BC2CBE674F * __this, Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 * ____p00, Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 * ____p11, const RuntimeMethod* method);
// System.Void tripolygon.UModeler.Util/ClippingVertex::.ctor(tripolygon.UModeler.Vertex,tripolygon.UModeler.Util/EClippingVertexType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClippingVertex__ctor_m809B019BB6F8A194D2C5810D17EB434D2A0F36D7 (ClippingVertex_t1037F934182244CCD6278CB2FEAE8D0BF10583DF * __this, Vertex_t7306327CAF84974D189B7F295BD8BF50D455E7AC * ____vtx0, int32_t ____type1, bool ____zero_dist_no_created2, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void tripolygon.UModeler.Triangulator/PointPair::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointPair__ctor_mDD90FCD05C7789A0158B23C517C07EB463428E65 (PointPair_t4C4D25D7D1E464E8D7E3E1E45ACF49BC2CBE674F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void tripolygon.UModeler.Triangulator/PointPair::.ctor(tripolygon.UModeler.Triangulator/Point,tripolygon.UModeler.Triangulator/Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointPair__ctor_m7A46B8C865392DACB8150DF7381208D918FDCEE2 (PointPair_t4C4D25D7D1E464E8D7E3E1E45ACF49BC2CBE674F * __this, Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 * ____p00, Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 * ____p11, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 * L_0 = ____p00;
		__this->set_p0_0(L_0);
		Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 * L_1 = ____p11;
		__this->set_p1_1(L_1);
		return;
	}
}
// tripolygon.UModeler.Triangulator/PointPair tripolygon.UModeler.Triangulator/PointPair::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointPair_t4C4D25D7D1E464E8D7E3E1E45ACF49BC2CBE674F * PointPair_Clone_m97569FBB18CEF60AF0898A273D19E3A7CE671F7F (PointPair_t4C4D25D7D1E464E8D7E3E1E45ACF49BC2CBE674F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointPair_t4C4D25D7D1E464E8D7E3E1E45ACF49BC2CBE674F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 * L_0 = __this->get_p0_0();
		Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 * L_1 = __this->get_p1_1();
		PointPair_t4C4D25D7D1E464E8D7E3E1E45ACF49BC2CBE674F * L_2 = (PointPair_t4C4D25D7D1E464E8D7E3E1E45ACF49BC2CBE674F *)il2cpp_codegen_object_new(PointPair_t4C4D25D7D1E464E8D7E3E1E45ACF49BC2CBE674F_il2cpp_TypeInfo_var);
		PointPair__ctor_m7A46B8C865392DACB8150DF7381208D918FDCEE2(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// tripolygon.UModeler.Triangulator/PointPair tripolygon.UModeler.Triangulator/PointPair::Swap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointPair_t4C4D25D7D1E464E8D7E3E1E45ACF49BC2CBE674F * PointPair_Swap_m4C22AD7B1BED96D977757432B6152B07B40DAC95 (PointPair_t4C4D25D7D1E464E8D7E3E1E45ACF49BC2CBE674F * __this, const RuntimeMethod* method)
{
	Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 * V_0 = NULL;
	{
		Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 * L_0 = __this->get_p1_1();
		V_0 = L_0;
		Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 * L_1 = __this->get_p0_0();
		__this->set_p1_1(L_1);
		Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 * L_2 = V_0;
		__this->set_p0_0(L_2);
		return __this;
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
// System.Int32 tripolygon.UModeler.Triangulator/PointPairComparer::Compare(tripolygon.UModeler.Triangulator/PointPair,tripolygon.UModeler.Triangulator/PointPair)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointPairComparer_Compare_m15844CBA3BEADAAA244413E2805FE2C7A8D0FA0D (PointPairComparer_tFF5ED52CC3EF2FB4324EBA41DBF52B594D3D5366 * __this, PointPair_t4C4D25D7D1E464E8D7E3E1E45ACF49BC2CBE674F * ___x0, PointPair_t4C4D25D7D1E464E8D7E3E1E45ACF49BC2CBE674F * ___y1, const RuntimeMethod* method)
{
	{
		PointPair_t4C4D25D7D1E464E8D7E3E1E45ACF49BC2CBE674F * L_0 = ___x0;
		NullCheck(L_0);
		Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 * L_1 = L_0->get_p0_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		PointPair_t4C4D25D7D1E464E8D7E3E1E45ACF49BC2CBE674F * L_3 = ___y1;
		NullCheck(L_3);
		Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 * L_4 = L_3->get_p0_0();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_5))))
		{
			goto IL_0032;
		}
	}
	{
		PointPair_t4C4D25D7D1E464E8D7E3E1E45ACF49BC2CBE674F * L_6 = ___x0;
		NullCheck(L_6);
		Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 * L_7 = L_6->get_p1_1();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_7);
		PointPair_t4C4D25D7D1E464E8D7E3E1E45ACF49BC2CBE674F * L_9 = ___y1;
		NullCheck(L_9);
		Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 * L_10 = L_9->get_p1_1();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_10);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_11))))
		{
			goto IL_0032;
		}
	}
	{
		return 0;
	}

IL_0032:
	{
		PointPair_t4C4D25D7D1E464E8D7E3E1E45ACF49BC2CBE674F * L_12 = ___x0;
		NullCheck(L_12);
		Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 * L_13 = L_12->get_p0_0();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_13);
		PointPair_t4C4D25D7D1E464E8D7E3E1E45ACF49BC2CBE674F * L_15 = ___y1;
		NullCheck(L_15);
		Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 * L_16 = L_15->get_p0_0();
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_16);
		if ((((int32_t)L_14) < ((int32_t)L_17)))
		{
			goto IL_007a;
		}
	}
	{
		PointPair_t4C4D25D7D1E464E8D7E3E1E45ACF49BC2CBE674F * L_18 = ___x0;
		NullCheck(L_18);
		Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 * L_19 = L_18->get_p0_0();
		NullCheck(L_19);
		int32_t L_20;
		L_20 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_19);
		PointPair_t4C4D25D7D1E464E8D7E3E1E45ACF49BC2CBE674F * L_21 = ___y1;
		NullCheck(L_21);
		Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 * L_22 = L_21->get_p0_0();
		NullCheck(L_22);
		int32_t L_23;
		L_23 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_22);
		if ((!(((uint32_t)L_20) == ((uint32_t)L_23))))
		{
			goto IL_007c;
		}
	}
	{
		PointPair_t4C4D25D7D1E464E8D7E3E1E45ACF49BC2CBE674F * L_24 = ___x0;
		NullCheck(L_24);
		Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 * L_25 = L_24->get_p1_1();
		NullCheck(L_25);
		int32_t L_26;
		L_26 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_25);
		PointPair_t4C4D25D7D1E464E8D7E3E1E45ACF49BC2CBE674F * L_27 = ___y1;
		NullCheck(L_27);
		Point_tBF869ACB1FCFA44292BB93E77DFFF321560C1801 * L_28 = L_27->get_p1_1();
		NullCheck(L_28);
		int32_t L_29;
		L_29 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_28);
		if ((((int32_t)L_26) >= ((int32_t)L_29)))
		{
			goto IL_007c;
		}
	}

IL_007a:
	{
		return (-1);
	}

IL_007c:
	{
		return 1;
	}
}
// System.Void tripolygon.UModeler.Triangulator/PointPairComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointPairComparer__ctor_mABB7BAF2B5FD95A06556BB30437897860571C504 (PointPairComparer_tFF5ED52CC3EF2FB4324EBA41DBF52B594D3D5366 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void tripolygon.UModeler.UModeler/ModelerDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelerDelegate__ctor_m98312D22363F4AE9C98CE9EFB14ED2F2460A2187 (ModelerDelegate_t35824108F7DA93CFA61B61F5960DEA60EC4562DA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void tripolygon.UModeler.UModeler/ModelerDelegate::Invoke(tripolygon.UModeler.UModeler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelerDelegate_Invoke_mF8E8F85C8A55F567813ADC1F50D4449D2FD34B72 (ModelerDelegate_t35824108F7DA93CFA61B61F5960DEA60EC4562DA * __this, UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686 * ___modeler0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___modeler0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___modeler0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___modeler0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___modeler0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___modeler0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___modeler0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___modeler0, targetMethod);
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
						GenericInterfaceActionInvoker1< UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686 * >::Invoke(targetMethod, targetThis, ___modeler0);
					else
						GenericVirtActionInvoker1< UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686 * >::Invoke(targetMethod, targetThis, ___modeler0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___modeler0);
					else
						VirtActionInvoker1< UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___modeler0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___modeler0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___modeler0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult tripolygon.UModeler.UModeler/ModelerDelegate::BeginInvoke(tripolygon.UModeler.UModeler,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ModelerDelegate_BeginInvoke_mFFD29B10D4DD2585FAD9A81688DD7630ED4001EB (ModelerDelegate_t35824108F7DA93CFA61B61F5960DEA60EC4562DA * __this, UModeler_t324E0C2F6176FB07A4DA887BE05F227D67093686 * ___modeler0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___modeler0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void tripolygon.UModeler.UModeler/ModelerDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelerDelegate_EndInvoke_m5C673D93D12156989E028FEB964AABA5A00CC23D (ModelerDelegate_t35824108F7DA93CFA61B61F5960DEA60EC4562DA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: tripolygon.UModeler.Util/ClippingVertex
IL2CPP_EXTERN_C void ClippingVertex_t1037F934182244CCD6278CB2FEAE8D0BF10583DF_marshal_pinvoke(const ClippingVertex_t1037F934182244CCD6278CB2FEAE8D0BF10583DF& unmarshaled, ClippingVertex_t1037F934182244CCD6278CB2FEAE8D0BF10583DF_marshaled_pinvoke& marshaled)
{
	Exception_t* ___vtx_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'vtx' of type 'ClippingVertex': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___vtx_0Exception, NULL);
}
IL2CPP_EXTERN_C void ClippingVertex_t1037F934182244CCD6278CB2FEAE8D0BF10583DF_marshal_pinvoke_back(const ClippingVertex_t1037F934182244CCD6278CB2FEAE8D0BF10583DF_marshaled_pinvoke& marshaled, ClippingVertex_t1037F934182244CCD6278CB2FEAE8D0BF10583DF& unmarshaled)
{
	Exception_t* ___vtx_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'vtx' of type 'ClippingVertex': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___vtx_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: tripolygon.UModeler.Util/ClippingVertex
IL2CPP_EXTERN_C void ClippingVertex_t1037F934182244CCD6278CB2FEAE8D0BF10583DF_marshal_pinvoke_cleanup(ClippingVertex_t1037F934182244CCD6278CB2FEAE8D0BF10583DF_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: tripolygon.UModeler.Util/ClippingVertex
IL2CPP_EXTERN_C void ClippingVertex_t1037F934182244CCD6278CB2FEAE8D0BF10583DF_marshal_com(const ClippingVertex_t1037F934182244CCD6278CB2FEAE8D0BF10583DF& unmarshaled, ClippingVertex_t1037F934182244CCD6278CB2FEAE8D0BF10583DF_marshaled_com& marshaled)
{
	Exception_t* ___vtx_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'vtx' of type 'ClippingVertex': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___vtx_0Exception, NULL);
}
IL2CPP_EXTERN_C void ClippingVertex_t1037F934182244CCD6278CB2FEAE8D0BF10583DF_marshal_com_back(const ClippingVertex_t1037F934182244CCD6278CB2FEAE8D0BF10583DF_marshaled_com& marshaled, ClippingVertex_t1037F934182244CCD6278CB2FEAE8D0BF10583DF& unmarshaled)
{
	Exception_t* ___vtx_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'vtx' of type 'ClippingVertex': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___vtx_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: tripolygon.UModeler.Util/ClippingVertex
IL2CPP_EXTERN_C void ClippingVertex_t1037F934182244CCD6278CB2FEAE8D0BF10583DF_marshal_com_cleanup(ClippingVertex_t1037F934182244CCD6278CB2FEAE8D0BF10583DF_marshaled_com& marshaled)
{
}
// System.Void tripolygon.UModeler.Util/ClippingVertex::.ctor(tripolygon.UModeler.Vertex,tripolygon.UModeler.Util/EClippingVertexType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClippingVertex__ctor_m809B019BB6F8A194D2C5810D17EB434D2A0F36D7 (ClippingVertex_t1037F934182244CCD6278CB2FEAE8D0BF10583DF * __this, Vertex_t7306327CAF84974D189B7F295BD8BF50D455E7AC * ____vtx0, int32_t ____type1, bool ____zero_dist_no_created2, const RuntimeMethod* method)
{
	{
		Vertex_t7306327CAF84974D189B7F295BD8BF50D455E7AC * L_0 = ____vtx0;
		__this->set_vtx_0(L_0);
		int32_t L_1 = ____type1;
		__this->set_type_1(L_1);
		bool L_2 = ____zero_dist_no_created2;
		__this->set_zeroDistAndNoCreated_2(L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void ClippingVertex__ctor_m809B019BB6F8A194D2C5810D17EB434D2A0F36D7_AdjustorThunk (RuntimeObject * __this, Vertex_t7306327CAF84974D189B7F295BD8BF50D455E7AC * ____vtx0, int32_t ____type1, bool ____zero_dist_no_created2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ClippingVertex_t1037F934182244CCD6278CB2FEAE8D0BF10583DF * _thisAdjusted = reinterpret_cast<ClippingVertex_t1037F934182244CCD6278CB2FEAE8D0BF10583DF *>(__this + _offset);
	ClippingVertex__ctor_m809B019BB6F8A194D2C5810D17EB434D2A0F36D7(_thisAdjusted, ____vtx0, ____type1, ____zero_dist_no_created2, method);
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

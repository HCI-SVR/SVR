﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_t02799BBC9B1026304B6E2664C0C04E11B49C1534;
// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_tCDFCCEC591DFD3C6FEF79A5DA42BAE55BC34AA25;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_t2A0A98B91AB85C25A1A55C5154A6C4BEB33222FA;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t37408A99C1C9139C195AB7DE6CEFFE40C3FDBC77;
// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource
struct IMixedRealityEventSource_t7D80DB8943FF26868808491F3D06613AC2351019;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_tA366CA6D3EDB57F957426EBE9EAC91A169DA3F37;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t51DE3E6D80CC3F88E678D864EC94450C52351CB4;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_t8B056268027051905768F6E5B780F7155BBF5B63;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityTeleportPointer
struct IMixedRealityTeleportPointer_t84CA4E51D9A509030B4C4CC3547116F413482036;
// Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler
struct IMixedRealityTeleportHandler_t445C38614620E395CD0197449AC5789C14D71011;
// Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotspot
struct IMixedRealityTeleportHotspot_t668A8421A97740C94BE18FA99E4FA9F24F47FC6D;
// Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem
struct MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F;
// Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c
struct U3CU3Ec_t9E5A9D3DCFFE80E813E2E913E342B0607E063144;
// Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData
struct TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_t88F561EFE30EB81D8FE00D65ABF0BB14614E6D4F;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_tCD0760DAD59C0C741466FB99F581682E79DB21CE;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_t16F75C1BCFBC514E79D54E8AF72AC9F60F1C5678;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Type
struct Type_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler>
struct EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;

IL2CPP_EXTERN_C RuntimeClass* CoreServices_tB284CAD260668D8742F59ED5DDC128A38712D7F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityPointer_t8B056268027051905768F6E5B780F7155BBF5B63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityTeleportHandler_t445C38614620E395CD0197449AC5789C14D71011_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityTeleportHotspot_t668A8421A97740C94BE18FA99E4FA9F24F47FC6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityTeleportPointer_t84CA4E51D9A509030B4C4CC3547116F413482036_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPointerResult_t5C352F2262EFB8113AF4E80EACAEB1BA73D3153B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPlayspace_t404E204FBB102703CFF7911FC37DE496EC7F63C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9E5A9D3DCFFE80E813E2E913E342B0607E063144_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2726084170C33D344E979943C3BB7C09052C51D5;
IL2CPP_EXTERN_C String_t* _stringLiteral4D1D987217C94047D95253BDAA70342271726366;
IL2CPP_EXTERN_C String_t* _stringLiteral531921F117445C4BFE3CEC4018D5B4CE84733F15;
IL2CPP_EXTERN_C String_t* _stringLiteral89B99DE69D115DD421416AB51E52A78974B1F94E;
IL2CPP_EXTERN_C String_t* _stringLiteral8AAF4DB2092074ABA4A5019AC2944FE5D941200F;
IL2CPP_EXTERN_C String_t* _stringLiteral8C21D7D9FAB4CC65E3A0BDB2FCDD394590E39A4B;
IL2CPP_EXTERN_C String_t* _stringLiteral92F6DF9B96DD0FCF6C38DAFC129A3865004F1C43;
IL2CPP_EXTERN_C String_t* _stringLiteralA2C3B4F13A9AEDF231CE7539948BBECC158BC016;
IL2CPP_EXTERN_C String_t* _stringLiteralEFE6B56A9DC4DB2A042FF69F417FF18EE1734789;
IL2CPP_EXTERN_C String_t* _stringLiteralFE4C1AA9295D744656D3EBC80FD145E6DD76CA87;
IL2CPP_EXTERN_C const RuntimeMethod* BaseEventSystem_HandleEvent_TisIMixedRealityTeleportHandler_t445C38614620E395CD0197449AC5789C14D71011_mB3D8D67AA666DE9AE6FA2BB6BB746D9EF3C05CA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventFunction_1__ctor_mC234CF3C6EF9B1138819D6F0CC67960E4DB3F4D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisTeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5_m6B7FA44FD98D8D4685A58942B1C6F440D527DCB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__39_0_mF6DA75DB54FEAF0B9B2955EB628C91D44C780199_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__39_1_mF8A1C1056D4C066AF47D81E937A877063B6A9009_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__39_2_m61C0D38023DBC88AB84AF8951FDF93EDD7BD0036_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__39_3_mF2B0C9E58E9A9554270ED1704BCA25069737EDEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityObjectExtensions_IsNull_TisIMixedRealityTeleportPointer_t84CA4E51D9A509030B4C4CC3547116F413482036_mA90EA53D12EA0A3BE8C9F37463038504F44C2A1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t MixedRealityTeleportSystem_Destroy_mDB730B8C75444D5E3E9E0813A5988FD902FFBA05_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityTeleportSystem_InitializeInternal_m7DEC0164A8F9EBF2EC8E6DD330F4481A84B8B9EB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityTeleportSystem_ProcessTeleportationRequest_m988F6A43BA0F767B17139B476E6FFF38045B0FB5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityTeleportSystem_RaiseTeleportCanceled_m304881F994AE393D703FA7FC1A59C183E6C336F6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityTeleportSystem_RaiseTeleportComplete_m548B123FDC5B992606EED8885BF05970C2216797_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityTeleportSystem_RaiseTeleportRequest_m74C50EF970E8893484BC99ACE472AE2E8E145ECC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityTeleportSystem_RaiseTeleportStarted_m9FCFA1808568F85D45D511ACAF70A0F65D43BDE0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityTeleportSystem__cctor_m3E0A9150FA9A8EB0FF9B1F809F4B04B74EAFA334_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityTeleportSystem__ctor_m26F8684ED7331E7CACEDBC2F408616D7304A1BD1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityTeleportSystem__ctor_mC80CFEBBF3E8AD822C1D9E09335EC28A07888F46_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityTeleportSystem_get_IsInputSystemEnabled_m6B28D66C356D6EE8B422DC2ABC8145AE843BA403_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityTeleportSystem_set_TeleportDuration_m7DD9D8D6C83DB586ACBE7DE58B999A04428AACFF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__39_0_mF6DA75DB54FEAF0B9B2955EB628C91D44C780199_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__39_1_mF8A1C1056D4C066AF47D81E937A877063B6A9009_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__39_2_m61C0D38023DBC88AB84AF8951FDF93EDD7BD0036_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__39_3_mF2B0C9E58E9A9554270ED1704BCA25069737EDEB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m4AED9F0DEB78F314090930246524D8DFFA33B5BF_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tCF72D7A4A1ADC50F18B034CF3896EDE964F3E6F2 
{
public:

public:
};


// System.Object


// Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c
struct U3CU3Ec_t9E5A9D3DCFFE80E813E2E913E342B0607E063144  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t9E5A9D3DCFFE80E813E2E913E342B0607E063144_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c::<>9
	U3CU3Ec_t9E5A9D3DCFFE80E813E2E913E342B0607E063144 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9E5A9D3DCFFE80E813E2E913E342B0607E063144_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t9E5A9D3DCFFE80E813E2E913E342B0607E063144 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t9E5A9D3DCFFE80E813E2E913E342B0607E063144 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t9E5A9D3DCFFE80E813E2E913E342B0607E063144 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};

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
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// System.Boolean
struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.DateTime
struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
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


// System.Nullable`1<System.Boolean>
struct Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Single
struct Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t37408A99C1C9139C195AB7DE6CEFFE40C3FDBC77  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_t2A0A98B91AB85C25A1A55C5154A6C4BEB33222FA * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___isInitialized_4;
	// System.String[] Microsoft.MixedReality.Toolkit.BaseService::typeName
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___typeName_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___isEnabled_9;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___isMarkedDestroyed_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_11;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_t37408A99C1C9139C195AB7DE6CEFFE40C3FDBC77, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_t37408A99C1C9139C195AB7DE6CEFFE40C3FDBC77, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_t37408A99C1C9139C195AB7DE6CEFFE40C3FDBC77, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_t2A0A98B91AB85C25A1A55C5154A6C4BEB33222FA * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_t2A0A98B91AB85C25A1A55C5154A6C4BEB33222FA ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_t2A0A98B91AB85C25A1A55C5154A6C4BEB33222FA * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_4() { return static_cast<int32_t>(offsetof(BaseService_t37408A99C1C9139C195AB7DE6CEFFE40C3FDBC77, ___isInitialized_4)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_isInitialized_4() const { return ___isInitialized_4; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_isInitialized_4() { return &___isInitialized_4; }
	inline void set_isInitialized_4(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___isInitialized_4 = value;
	}

	inline static int32_t get_offset_of_typeName_5() { return static_cast<int32_t>(offsetof(BaseService_t37408A99C1C9139C195AB7DE6CEFFE40C3FDBC77, ___typeName_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_typeName_5() const { return ___typeName_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_typeName_5() { return &___typeName_5; }
	inline void set_typeName_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___typeName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeName_5), (void*)value);
	}

	inline static int32_t get_offset_of_isEnabled_9() { return static_cast<int32_t>(offsetof(BaseService_t37408A99C1C9139C195AB7DE6CEFFE40C3FDBC77, ___isEnabled_9)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_isEnabled_9() const { return ___isEnabled_9; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_isEnabled_9() { return &___isEnabled_9; }
	inline void set_isEnabled_9(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___isEnabled_9 = value;
	}

	inline static int32_t get_offset_of_isMarkedDestroyed_10() { return static_cast<int32_t>(offsetof(BaseService_t37408A99C1C9139C195AB7DE6CEFFE40C3FDBC77, ___isMarkedDestroyed_10)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_isMarkedDestroyed_10() const { return ___isMarkedDestroyed_10; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_isMarkedDestroyed_10() { return &___isMarkedDestroyed_10; }
	inline void set_isMarkedDestroyed_10(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___isMarkedDestroyed_10 = value;
	}

	inline static int32_t get_offset_of_disposed_11() { return static_cast<int32_t>(offsetof(BaseService_t37408A99C1C9139C195AB7DE6CEFFE40C3FDBC77, ___disposed_11)); }
	inline bool get_disposed_11() const { return ___disposed_11; }
	inline bool* get_address_of_disposed_11() { return &___disposed_11; }
	inline void set_disposed_11(bool value)
	{
		___disposed_11 = value;
	}
};


// Microsoft.MixedReality.Toolkit.GenericBaseEventData
struct GenericBaseEventData_t7FBAB059E910743F743533F1724490CDCEC29A5A  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource Microsoft.MixedReality.Toolkit.GenericBaseEventData::<EventSource>k__BackingField
	RuntimeObject* ___U3CEventSourceU3Ek__BackingField_2;
	// System.DateTime Microsoft.MixedReality.Toolkit.GenericBaseEventData::<EventTime>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CEventTimeU3Ek__BackingField_3;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.GenericBaseEventData::<selectedObject>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CselectedObjectU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CEventSourceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GenericBaseEventData_t7FBAB059E910743F743533F1724490CDCEC29A5A, ___U3CEventSourceU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CEventSourceU3Ek__BackingField_2() const { return ___U3CEventSourceU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CEventSourceU3Ek__BackingField_2() { return &___U3CEventSourceU3Ek__BackingField_2; }
	inline void set_U3CEventSourceU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CEventSourceU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventSourceU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventTimeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GenericBaseEventData_t7FBAB059E910743F743533F1724490CDCEC29A5A, ___U3CEventTimeU3Ek__BackingField_3)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CEventTimeU3Ek__BackingField_3() const { return ___U3CEventTimeU3Ek__BackingField_3; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CEventTimeU3Ek__BackingField_3() { return &___U3CEventTimeU3Ek__BackingField_3; }
	inline void set_U3CEventTimeU3Ek__BackingField_3(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CEventTimeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CselectedObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GenericBaseEventData_t7FBAB059E910743F743533F1724490CDCEC29A5A, ___U3CselectedObjectU3Ek__BackingField_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CselectedObjectU3Ek__BackingField_4() const { return ___U3CselectedObjectU3Ek__BackingField_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CselectedObjectU3Ek__BackingField_4() { return &___U3CselectedObjectU3Ek__BackingField_4; }
	inline void set_U3CselectedObjectU3Ek__BackingField_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CselectedObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CselectedObjectU3Ek__BackingField_4), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_tE0333FD0AF73593CC15889C35F8610A9C957B497 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::point
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normal_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::barycentricCoordinate
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___barycentricCoordinate_2;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::distance
	float ___distance_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::triangleIndex
	int32_t ___triangleIndex_4;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::textureCoord
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___textureCoord_5;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::textureCoord2
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___textureCoord2_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::transform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform_7;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::lightmapCoord
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___lightmapCoord_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::raycastValid
	bool ___raycastValid_9;
	// UnityEngine.Collider Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::collider
	Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___collider_10;

public:
	inline static int32_t get_offset_of_point_0() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_tE0333FD0AF73593CC15889C35F8610A9C957B497, ___point_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_point_0() const { return ___point_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_point_0() { return &___point_0; }
	inline void set_point_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___point_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_tE0333FD0AF73593CC15889C35F8610A9C957B497, ___normal_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_normal_1() const { return ___normal_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_barycentricCoordinate_2() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_tE0333FD0AF73593CC15889C35F8610A9C957B497, ___barycentricCoordinate_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_barycentricCoordinate_2() const { return ___barycentricCoordinate_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_barycentricCoordinate_2() { return &___barycentricCoordinate_2; }
	inline void set_barycentricCoordinate_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___barycentricCoordinate_2 = value;
	}

	inline static int32_t get_offset_of_distance_3() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_tE0333FD0AF73593CC15889C35F8610A9C957B497, ___distance_3)); }
	inline float get_distance_3() const { return ___distance_3; }
	inline float* get_address_of_distance_3() { return &___distance_3; }
	inline void set_distance_3(float value)
	{
		___distance_3 = value;
	}

	inline static int32_t get_offset_of_triangleIndex_4() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_tE0333FD0AF73593CC15889C35F8610A9C957B497, ___triangleIndex_4)); }
	inline int32_t get_triangleIndex_4() const { return ___triangleIndex_4; }
	inline int32_t* get_address_of_triangleIndex_4() { return &___triangleIndex_4; }
	inline void set_triangleIndex_4(int32_t value)
	{
		___triangleIndex_4 = value;
	}

	inline static int32_t get_offset_of_textureCoord_5() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_tE0333FD0AF73593CC15889C35F8610A9C957B497, ___textureCoord_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_textureCoord_5() const { return ___textureCoord_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_textureCoord_5() { return &___textureCoord_5; }
	inline void set_textureCoord_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___textureCoord_5 = value;
	}

	inline static int32_t get_offset_of_textureCoord2_6() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_tE0333FD0AF73593CC15889C35F8610A9C957B497, ___textureCoord2_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_textureCoord2_6() const { return ___textureCoord2_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_textureCoord2_6() { return &___textureCoord2_6; }
	inline void set_textureCoord2_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___textureCoord2_6 = value;
	}

	inline static int32_t get_offset_of_transform_7() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_tE0333FD0AF73593CC15889C35F8610A9C957B497, ___transform_7)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_transform_7() const { return ___transform_7; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_transform_7() { return &___transform_7; }
	inline void set_transform_7(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___transform_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transform_7), (void*)value);
	}

	inline static int32_t get_offset_of_lightmapCoord_8() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_tE0333FD0AF73593CC15889C35F8610A9C957B497, ___lightmapCoord_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_lightmapCoord_8() const { return ___lightmapCoord_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_lightmapCoord_8() { return &___lightmapCoord_8; }
	inline void set_lightmapCoord_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___lightmapCoord_8 = value;
	}

	inline static int32_t get_offset_of_raycastValid_9() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_tE0333FD0AF73593CC15889C35F8610A9C957B497, ___raycastValid_9)); }
	inline bool get_raycastValid_9() const { return ___raycastValid_9; }
	inline bool* get_address_of_raycastValid_9() { return &___raycastValid_9; }
	inline void set_raycastValid_9(bool value)
	{
		___raycastValid_9 = value;
	}

	inline static int32_t get_offset_of_collider_10() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_tE0333FD0AF73593CC15889C35F8610A9C957B497, ___collider_10)); }
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * get_collider_10() const { return ___collider_10; }
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF ** get_address_of_collider_10() { return &___collider_10; }
	inline void set_collider_10(Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * value)
	{
		___collider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collider_10), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_tE0333FD0AF73593CC15889C35F8610A9C957B497_marshaled_pinvoke
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point_0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normal_1;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___barycentricCoordinate_2;
	float ___distance_3;
	int32_t ___triangleIndex_4;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___textureCoord_5;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___textureCoord2_6;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform_7;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___lightmapCoord_8;
	int32_t ___raycastValid_9;
	Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___collider_10;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_tE0333FD0AF73593CC15889C35F8610A9C957B497_marshaled_com
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point_0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normal_1;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___barycentricCoordinate_2;
	float ___distance_3;
	int32_t ___triangleIndex_4;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___textureCoord_5;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___textureCoord2_6;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform_7;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___lightmapCoord_8;
	int32_t ___raycastValid_9;
	Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___collider_10;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
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
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___m_GameObject_0)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___module_1)); }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___worldPosition_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___worldNormal_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___screenPosition_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_pinvoke
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_com
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_tCDFCCEC591DFD3C6FEF79A5DA42BAE55BC34AA25  : public BaseService_t37408A99C1C9139C195AB7DE6CEFFE40C3FDBC77
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.BaseEventSystem::eventExecutionDepth
	int32_t ___eventExecutionDepth_13;
	// System.Type Microsoft.MixedReality.Toolkit.BaseEventSystem::eventSystemHandlerType
	Type_t * ___eventSystemHandlerType_14;
	// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedActions
	List_1_t16F75C1BCFBC514E79D54E8AF72AC9F60F1C5678 * ___postponedActions_15;
	// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedObjectActions
	List_1_tCD0760DAD59C0C741466FB99F581682E79DB21CE * ___postponedObjectActions_16;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventHandlersByType>k__BackingField
	Dictionary_2_t88F561EFE30EB81D8FE00D65ABF0BB14614E6D4F * ___U3CEventHandlersByTypeU3Ek__BackingField_17;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventListeners>k__BackingField
	List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___U3CEventListenersU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_eventExecutionDepth_13() { return static_cast<int32_t>(offsetof(BaseEventSystem_tCDFCCEC591DFD3C6FEF79A5DA42BAE55BC34AA25, ___eventExecutionDepth_13)); }
	inline int32_t get_eventExecutionDepth_13() const { return ___eventExecutionDepth_13; }
	inline int32_t* get_address_of_eventExecutionDepth_13() { return &___eventExecutionDepth_13; }
	inline void set_eventExecutionDepth_13(int32_t value)
	{
		___eventExecutionDepth_13 = value;
	}

	inline static int32_t get_offset_of_eventSystemHandlerType_14() { return static_cast<int32_t>(offsetof(BaseEventSystem_tCDFCCEC591DFD3C6FEF79A5DA42BAE55BC34AA25, ___eventSystemHandlerType_14)); }
	inline Type_t * get_eventSystemHandlerType_14() const { return ___eventSystemHandlerType_14; }
	inline Type_t ** get_address_of_eventSystemHandlerType_14() { return &___eventSystemHandlerType_14; }
	inline void set_eventSystemHandlerType_14(Type_t * value)
	{
		___eventSystemHandlerType_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystemHandlerType_14), (void*)value);
	}

	inline static int32_t get_offset_of_postponedActions_15() { return static_cast<int32_t>(offsetof(BaseEventSystem_tCDFCCEC591DFD3C6FEF79A5DA42BAE55BC34AA25, ___postponedActions_15)); }
	inline List_1_t16F75C1BCFBC514E79D54E8AF72AC9F60F1C5678 * get_postponedActions_15() const { return ___postponedActions_15; }
	inline List_1_t16F75C1BCFBC514E79D54E8AF72AC9F60F1C5678 ** get_address_of_postponedActions_15() { return &___postponedActions_15; }
	inline void set_postponedActions_15(List_1_t16F75C1BCFBC514E79D54E8AF72AC9F60F1C5678 * value)
	{
		___postponedActions_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedActions_15), (void*)value);
	}

	inline static int32_t get_offset_of_postponedObjectActions_16() { return static_cast<int32_t>(offsetof(BaseEventSystem_tCDFCCEC591DFD3C6FEF79A5DA42BAE55BC34AA25, ___postponedObjectActions_16)); }
	inline List_1_tCD0760DAD59C0C741466FB99F581682E79DB21CE * get_postponedObjectActions_16() const { return ___postponedObjectActions_16; }
	inline List_1_tCD0760DAD59C0C741466FB99F581682E79DB21CE ** get_address_of_postponedObjectActions_16() { return &___postponedObjectActions_16; }
	inline void set_postponedObjectActions_16(List_1_tCD0760DAD59C0C741466FB99F581682E79DB21CE * value)
	{
		___postponedObjectActions_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedObjectActions_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventHandlersByTypeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(BaseEventSystem_tCDFCCEC591DFD3C6FEF79A5DA42BAE55BC34AA25, ___U3CEventHandlersByTypeU3Ek__BackingField_17)); }
	inline Dictionary_2_t88F561EFE30EB81D8FE00D65ABF0BB14614E6D4F * get_U3CEventHandlersByTypeU3Ek__BackingField_17() const { return ___U3CEventHandlersByTypeU3Ek__BackingField_17; }
	inline Dictionary_2_t88F561EFE30EB81D8FE00D65ABF0BB14614E6D4F ** get_address_of_U3CEventHandlersByTypeU3Ek__BackingField_17() { return &___U3CEventHandlersByTypeU3Ek__BackingField_17; }
	inline void set_U3CEventHandlersByTypeU3Ek__BackingField_17(Dictionary_2_t88F561EFE30EB81D8FE00D65ABF0BB14614E6D4F * value)
	{
		___U3CEventHandlersByTypeU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventHandlersByTypeU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventListenersU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(BaseEventSystem_tCDFCCEC591DFD3C6FEF79A5DA42BAE55BC34AA25, ___U3CEventListenersU3Ek__BackingField_18)); }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * get_U3CEventListenersU3Ek__BackingField_18() const { return ___U3CEventListenersU3Ek__BackingField_18; }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 ** get_address_of_U3CEventListenersU3Ek__BackingField_18() { return &___U3CEventListenersU3Ek__BackingField_18; }
	inline void set_U3CEventListenersU3Ek__BackingField_18(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * value)
	{
		___U3CEventListenersU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventListenersU3Ek__BackingField_18), (void*)value);
	}
};

struct BaseEventSystem_tCDFCCEC591DFD3C6FEF79A5DA42BAE55BC34AA25_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseEventSystem::enableDanglingHandlerDiagnostics
	bool ___enableDanglingHandlerDiagnostics_12;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseEventSystem::TraverseEventSystemHandlerHierarchyPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___TraverseEventSystemHandlerHierarchyPerfMarker_19;

public:
	inline static int32_t get_offset_of_enableDanglingHandlerDiagnostics_12() { return static_cast<int32_t>(offsetof(BaseEventSystem_tCDFCCEC591DFD3C6FEF79A5DA42BAE55BC34AA25_StaticFields, ___enableDanglingHandlerDiagnostics_12)); }
	inline bool get_enableDanglingHandlerDiagnostics_12() const { return ___enableDanglingHandlerDiagnostics_12; }
	inline bool* get_address_of_enableDanglingHandlerDiagnostics_12() { return &___enableDanglingHandlerDiagnostics_12; }
	inline void set_enableDanglingHandlerDiagnostics_12(bool value)
	{
		___enableDanglingHandlerDiagnostics_12 = value;
	}

	inline static int32_t get_offset_of_TraverseEventSystemHandlerHierarchyPerfMarker_19() { return static_cast<int32_t>(offsetof(BaseEventSystem_tCDFCCEC591DFD3C6FEF79A5DA42BAE55BC34AA25_StaticFields, ___TraverseEventSystemHandlerHierarchyPerfMarker_19)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_TraverseEventSystemHandlerHierarchyPerfMarker_19() const { return ___TraverseEventSystemHandlerHierarchyPerfMarker_19; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_TraverseEventSystemHandlerHierarchyPerfMarker_19() { return &___TraverseEventSystemHandlerHierarchyPerfMarker_19; }
	inline void set_TraverseEventSystemHandlerHierarchyPerfMarker_19(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___TraverseEventSystemHandlerHierarchyPerfMarker_19 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Physics.FocusDetails
struct FocusDetails_t7F7F59BF7BDE713E1BF821AB1BD414A616D0DC96 
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<RayDistance>k__BackingField
	float ___U3CRayDistanceU3Ek__BackingField_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<Point>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPointU3Ek__BackingField_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<Normal>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CNormalU3Ek__BackingField_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<Object>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CObjectU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<LastRaycastHit>k__BackingField
	MixedRealityRaycastHit_tE0333FD0AF73593CC15889C35F8610A9C957B497  ___U3CLastRaycastHitU3Ek__BackingField_4;
	// UnityEngine.EventSystems.RaycastResult Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<LastGraphicsRaycastResult>k__BackingField
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<PointLocalSpace>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPointLocalSpaceU3Ek__BackingField_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<NormalLocalSpace>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CNormalLocalSpaceU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CRayDistanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FocusDetails_t7F7F59BF7BDE713E1BF821AB1BD414A616D0DC96, ___U3CRayDistanceU3Ek__BackingField_0)); }
	inline float get_U3CRayDistanceU3Ek__BackingField_0() const { return ___U3CRayDistanceU3Ek__BackingField_0; }
	inline float* get_address_of_U3CRayDistanceU3Ek__BackingField_0() { return &___U3CRayDistanceU3Ek__BackingField_0; }
	inline void set_U3CRayDistanceU3Ek__BackingField_0(float value)
	{
		___U3CRayDistanceU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CPointU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FocusDetails_t7F7F59BF7BDE713E1BF821AB1BD414A616D0DC96, ___U3CPointU3Ek__BackingField_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CPointU3Ek__BackingField_1() const { return ___U3CPointU3Ek__BackingField_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CPointU3Ek__BackingField_1() { return &___U3CPointU3Ek__BackingField_1; }
	inline void set_U3CPointU3Ek__BackingField_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CPointU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CNormalU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FocusDetails_t7F7F59BF7BDE713E1BF821AB1BD414A616D0DC96, ___U3CNormalU3Ek__BackingField_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CNormalU3Ek__BackingField_2() const { return ___U3CNormalU3Ek__BackingField_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CNormalU3Ek__BackingField_2() { return &___U3CNormalU3Ek__BackingField_2; }
	inline void set_U3CNormalU3Ek__BackingField_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CNormalU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CObjectU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FocusDetails_t7F7F59BF7BDE713E1BF821AB1BD414A616D0DC96, ___U3CObjectU3Ek__BackingField_3)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CObjectU3Ek__BackingField_3() const { return ___U3CObjectU3Ek__BackingField_3; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CObjectU3Ek__BackingField_3() { return &___U3CObjectU3Ek__BackingField_3; }
	inline void set_U3CObjectU3Ek__BackingField_3(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CObjectU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CObjectU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLastRaycastHitU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FocusDetails_t7F7F59BF7BDE713E1BF821AB1BD414A616D0DC96, ___U3CLastRaycastHitU3Ek__BackingField_4)); }
	inline MixedRealityRaycastHit_tE0333FD0AF73593CC15889C35F8610A9C957B497  get_U3CLastRaycastHitU3Ek__BackingField_4() const { return ___U3CLastRaycastHitU3Ek__BackingField_4; }
	inline MixedRealityRaycastHit_tE0333FD0AF73593CC15889C35F8610A9C957B497 * get_address_of_U3CLastRaycastHitU3Ek__BackingField_4() { return &___U3CLastRaycastHitU3Ek__BackingField_4; }
	inline void set_U3CLastRaycastHitU3Ek__BackingField_4(MixedRealityRaycastHit_tE0333FD0AF73593CC15889C35F8610A9C957B497  value)
	{
		___U3CLastRaycastHitU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CLastRaycastHitU3Ek__BackingField_4))->___transform_7), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CLastRaycastHitU3Ek__BackingField_4))->___collider_10), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CLastGraphicsRaycastResultU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(FocusDetails_t7F7F59BF7BDE713E1BF821AB1BD414A616D0DC96, ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5)); }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  get_U3CLastGraphicsRaycastResultU3Ek__BackingField_5() const { return ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5; }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 * get_address_of_U3CLastGraphicsRaycastResultU3Ek__BackingField_5() { return &___U3CLastGraphicsRaycastResultU3Ek__BackingField_5; }
	inline void set_U3CLastGraphicsRaycastResultU3Ek__BackingField_5(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  value)
	{
		___U3CLastGraphicsRaycastResultU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CLastGraphicsRaycastResultU3Ek__BackingField_5))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CLastGraphicsRaycastResultU3Ek__BackingField_5))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CPointLocalSpaceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(FocusDetails_t7F7F59BF7BDE713E1BF821AB1BD414A616D0DC96, ___U3CPointLocalSpaceU3Ek__BackingField_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CPointLocalSpaceU3Ek__BackingField_6() const { return ___U3CPointLocalSpaceU3Ek__BackingField_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CPointLocalSpaceU3Ek__BackingField_6() { return &___U3CPointLocalSpaceU3Ek__BackingField_6; }
	inline void set_U3CPointLocalSpaceU3Ek__BackingField_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CPointLocalSpaceU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CNormalLocalSpaceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(FocusDetails_t7F7F59BF7BDE713E1BF821AB1BD414A616D0DC96, ___U3CNormalLocalSpaceU3Ek__BackingField_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CNormalLocalSpaceU3Ek__BackingField_7() const { return ___U3CNormalLocalSpaceU3Ek__BackingField_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CNormalLocalSpaceU3Ek__BackingField_7() { return &___U3CNormalLocalSpaceU3Ek__BackingField_7; }
	inline void set_U3CNormalLocalSpaceU3Ek__BackingField_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CNormalLocalSpaceU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Physics.FocusDetails
struct FocusDetails_t7F7F59BF7BDE713E1BF821AB1BD414A616D0DC96_marshaled_pinvoke
{
	float ___U3CRayDistanceU3Ek__BackingField_0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPointU3Ek__BackingField_1;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CNormalU3Ek__BackingField_2;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CObjectU3Ek__BackingField_3;
	MixedRealityRaycastHit_tE0333FD0AF73593CC15889C35F8610A9C957B497_marshaled_pinvoke ___U3CLastRaycastHitU3Ek__BackingField_4;
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_pinvoke ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPointLocalSpaceU3Ek__BackingField_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CNormalLocalSpaceU3Ek__BackingField_7;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Physics.FocusDetails
struct FocusDetails_t7F7F59BF7BDE713E1BF821AB1BD414A616D0DC96_marshaled_com
{
	float ___U3CRayDistanceU3Ek__BackingField_0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPointU3Ek__BackingField_1;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CNormalU3Ek__BackingField_2;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CObjectU3Ek__BackingField_3;
	MixedRealityRaycastHit_tE0333FD0AF73593CC15889C35F8610A9C957B497_marshaled_com ___U3CLastRaycastHitU3Ek__BackingField_4;
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_com ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPointLocalSpaceU3Ek__BackingField_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CNormalLocalSpaceU3Ek__BackingField_7;
};

// Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData
struct TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5  : public GenericBaseEventData_t7FBAB059E910743F743533F1724490CDCEC29A5A
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_5;
	// Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotspot Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData::<Hotspot>k__BackingField
	RuntimeObject* ___U3CHotspotU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5, ___U3CPointerU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CPointerU3Ek__BackingField_5() const { return ___U3CPointerU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CPointerU3Ek__BackingField_5() { return &___U3CPointerU3Ek__BackingField_5; }
	inline void set_U3CPointerU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CPointerU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointerU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHotspotU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5, ___U3CHotspotU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CHotspotU3Ek__BackingField_6() const { return ___U3CHotspotU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CHotspotU3Ek__BackingField_6() { return &___U3CHotspotU3Ek__BackingField_6; }
	inline void set_U3CHotspotU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CHotspotU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHotspotU3Ek__BackingField_6), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
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

// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_t02799BBC9B1026304B6E2664C0C04E11B49C1534  : public BaseEventSystem_tCDFCCEC591DFD3C6FEF79A5DA42BAE55BC34AA25
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseCoreSystem::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(BaseCoreSystem_t02799BBC9B1026304B6E2664C0C04E11B49C1534, ___U3CRegistrarU3Ek__BackingField_20)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_20() const { return ___U3CRegistrarU3Ek__BackingField_20; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_20() { return &___U3CRegistrarU3Ek__BackingField_20; }
	inline void set_U3CRegistrarU3Ek__BackingField_20(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_20), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_t2A0A98B91AB85C25A1A55C5154A6C4BEB33222FA  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_t2A0A98B91AB85C25A1A55C5154A6C4BEB33222FA, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler>
struct EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem
struct MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F  : public BaseCoreSystem_t02799BBC9B1026304B6E2664C0C04E11B49C1534
{
public:
	// Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::teleportEventData
	TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * ___teleportEventData_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::isTeleporting
	bool ___isTeleporting_22;
	// System.Boolean Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::isProcessingTeleportRequest
	bool ___isProcessingTeleportRequest_23;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::targetPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___targetPosition_24;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::targetRotation
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___targetRotation_25;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::eventSystemReference
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___eventSystemReference_26;
	// System.String Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_27;
	// System.Single Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::teleportDuration
	float ___teleportDuration_29;

public:
	inline static int32_t get_offset_of_teleportEventData_21() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F, ___teleportEventData_21)); }
	inline TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * get_teleportEventData_21() const { return ___teleportEventData_21; }
	inline TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 ** get_address_of_teleportEventData_21() { return &___teleportEventData_21; }
	inline void set_teleportEventData_21(TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * value)
	{
		___teleportEventData_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___teleportEventData_21), (void*)value);
	}

	inline static int32_t get_offset_of_isTeleporting_22() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F, ___isTeleporting_22)); }
	inline bool get_isTeleporting_22() const { return ___isTeleporting_22; }
	inline bool* get_address_of_isTeleporting_22() { return &___isTeleporting_22; }
	inline void set_isTeleporting_22(bool value)
	{
		___isTeleporting_22 = value;
	}

	inline static int32_t get_offset_of_isProcessingTeleportRequest_23() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F, ___isProcessingTeleportRequest_23)); }
	inline bool get_isProcessingTeleportRequest_23() const { return ___isProcessingTeleportRequest_23; }
	inline bool* get_address_of_isProcessingTeleportRequest_23() { return &___isProcessingTeleportRequest_23; }
	inline void set_isProcessingTeleportRequest_23(bool value)
	{
		___isProcessingTeleportRequest_23 = value;
	}

	inline static int32_t get_offset_of_targetPosition_24() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F, ___targetPosition_24)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_targetPosition_24() const { return ___targetPosition_24; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_targetPosition_24() { return &___targetPosition_24; }
	inline void set_targetPosition_24(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___targetPosition_24 = value;
	}

	inline static int32_t get_offset_of_targetRotation_25() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F, ___targetRotation_25)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_targetRotation_25() const { return ___targetRotation_25; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_targetRotation_25() { return &___targetRotation_25; }
	inline void set_targetRotation_25(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___targetRotation_25 = value;
	}

	inline static int32_t get_offset_of_eventSystemReference_26() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F, ___eventSystemReference_26)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_eventSystemReference_26() const { return ___eventSystemReference_26; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_eventSystemReference_26() { return &___eventSystemReference_26; }
	inline void set_eventSystemReference_26(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___eventSystemReference_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystemReference_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F, ___U3CNameU3Ek__BackingField_27)); }
	inline String_t* get_U3CNameU3Ek__BackingField_27() const { return ___U3CNameU3Ek__BackingField_27; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_27() { return &___U3CNameU3Ek__BackingField_27; }
	inline void set_U3CNameU3Ek__BackingField_27(String_t* value)
	{
		___U3CNameU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_teleportDuration_29() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F, ___teleportDuration_29)); }
	inline float get_teleportDuration_29() const { return ___teleportDuration_29; }
	inline float* get_address_of_teleportDuration_29() { return &___teleportDuration_29; }
	inline void set_teleportDuration_29(float value)
	{
		___teleportDuration_29 = value;
	}
};

struct MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::HandleEventPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___HandleEventPerfMarker_28;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler> Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::OnTeleportRequestHandler
	EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF * ___OnTeleportRequestHandler_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportRequestPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___RaiseTeleportRequestPerfMarker_31;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler> Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::OnTeleportStartedHandler
	EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF * ___OnTeleportStartedHandler_32;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportStartedPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___RaiseTeleportStartedPerfMarker_33;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler> Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::OnTeleportCompletedHandler
	EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF * ___OnTeleportCompletedHandler_34;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportCompletePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___RaiseTeleportCompletePerfMarker_35;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler> Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::OnTeleportCanceledHandler
	EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF * ___OnTeleportCanceledHandler_36;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportCanceledPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___RaiseTeleportCanceledPerfMarker_37;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::ProcessTeleportationRequestPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ProcessTeleportationRequestPerfMarker_38;

public:
	inline static int32_t get_offset_of_HandleEventPerfMarker_28() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_StaticFields, ___HandleEventPerfMarker_28)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_HandleEventPerfMarker_28() const { return ___HandleEventPerfMarker_28; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_HandleEventPerfMarker_28() { return &___HandleEventPerfMarker_28; }
	inline void set_HandleEventPerfMarker_28(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___HandleEventPerfMarker_28 = value;
	}

	inline static int32_t get_offset_of_OnTeleportRequestHandler_30() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_StaticFields, ___OnTeleportRequestHandler_30)); }
	inline EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF * get_OnTeleportRequestHandler_30() const { return ___OnTeleportRequestHandler_30; }
	inline EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF ** get_address_of_OnTeleportRequestHandler_30() { return &___OnTeleportRequestHandler_30; }
	inline void set_OnTeleportRequestHandler_30(EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF * value)
	{
		___OnTeleportRequestHandler_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTeleportRequestHandler_30), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseTeleportRequestPerfMarker_31() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_StaticFields, ___RaiseTeleportRequestPerfMarker_31)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_RaiseTeleportRequestPerfMarker_31() const { return ___RaiseTeleportRequestPerfMarker_31; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_RaiseTeleportRequestPerfMarker_31() { return &___RaiseTeleportRequestPerfMarker_31; }
	inline void set_RaiseTeleportRequestPerfMarker_31(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___RaiseTeleportRequestPerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_OnTeleportStartedHandler_32() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_StaticFields, ___OnTeleportStartedHandler_32)); }
	inline EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF * get_OnTeleportStartedHandler_32() const { return ___OnTeleportStartedHandler_32; }
	inline EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF ** get_address_of_OnTeleportStartedHandler_32() { return &___OnTeleportStartedHandler_32; }
	inline void set_OnTeleportStartedHandler_32(EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF * value)
	{
		___OnTeleportStartedHandler_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTeleportStartedHandler_32), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseTeleportStartedPerfMarker_33() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_StaticFields, ___RaiseTeleportStartedPerfMarker_33)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_RaiseTeleportStartedPerfMarker_33() const { return ___RaiseTeleportStartedPerfMarker_33; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_RaiseTeleportStartedPerfMarker_33() { return &___RaiseTeleportStartedPerfMarker_33; }
	inline void set_RaiseTeleportStartedPerfMarker_33(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___RaiseTeleportStartedPerfMarker_33 = value;
	}

	inline static int32_t get_offset_of_OnTeleportCompletedHandler_34() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_StaticFields, ___OnTeleportCompletedHandler_34)); }
	inline EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF * get_OnTeleportCompletedHandler_34() const { return ___OnTeleportCompletedHandler_34; }
	inline EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF ** get_address_of_OnTeleportCompletedHandler_34() { return &___OnTeleportCompletedHandler_34; }
	inline void set_OnTeleportCompletedHandler_34(EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF * value)
	{
		___OnTeleportCompletedHandler_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTeleportCompletedHandler_34), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseTeleportCompletePerfMarker_35() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_StaticFields, ___RaiseTeleportCompletePerfMarker_35)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_RaiseTeleportCompletePerfMarker_35() const { return ___RaiseTeleportCompletePerfMarker_35; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_RaiseTeleportCompletePerfMarker_35() { return &___RaiseTeleportCompletePerfMarker_35; }
	inline void set_RaiseTeleportCompletePerfMarker_35(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___RaiseTeleportCompletePerfMarker_35 = value;
	}

	inline static int32_t get_offset_of_OnTeleportCanceledHandler_36() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_StaticFields, ___OnTeleportCanceledHandler_36)); }
	inline EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF * get_OnTeleportCanceledHandler_36() const { return ___OnTeleportCanceledHandler_36; }
	inline EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF ** get_address_of_OnTeleportCanceledHandler_36() { return &___OnTeleportCanceledHandler_36; }
	inline void set_OnTeleportCanceledHandler_36(EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF * value)
	{
		___OnTeleportCanceledHandler_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTeleportCanceledHandler_36), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseTeleportCanceledPerfMarker_37() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_StaticFields, ___RaiseTeleportCanceledPerfMarker_37)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_RaiseTeleportCanceledPerfMarker_37() const { return ___RaiseTeleportCanceledPerfMarker_37; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_RaiseTeleportCanceledPerfMarker_37() { return &___RaiseTeleportCanceledPerfMarker_37; }
	inline void set_RaiseTeleportCanceledPerfMarker_37(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___RaiseTeleportCanceledPerfMarker_37 = value;
	}

	inline static int32_t get_offset_of_ProcessTeleportationRequestPerfMarker_38() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_StaticFields, ___ProcessTeleportationRequestPerfMarker_38)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ProcessTeleportationRequestPerfMarker_38() const { return ___ProcessTeleportationRequestPerfMarker_38; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ProcessTeleportationRequestPerfMarker_38() { return &___ProcessTeleportationRequestPerfMarker_38; }
	inline void set_ProcessTeleportationRequestPerfMarker_38(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ProcessTeleportationRequestPerfMarker_38 = value;
	}
};


// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_SystemInputModules_4)); }
	inline List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_FirstSelected_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_CurrentSelected_10)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_DummyData_13)); }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___m_EventSystems_6)); }
	inline List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityObjectExtensions_IsNull_TisRuntimeObject_mF999DFAAF9363443DB3C9EE264E2DE64620B37DB_gshared (RuntimeObject * ___interface0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventFunction_1__ctor_mC3690E11086D102EEB1BCC561DCA0ACD61D055D1_gshared (EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<System.Object>(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ExecuteEvents_ValidateEventData_TisRuntimeObject_m6AC645E74FA8C753DD50130438B2D226EF2478E4_gshared (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___data0, const RuntimeMethod* method);

// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCoreSystem__ctor_mD9CE949051DE46F081D9B1C5538072EB933D8FD0 (BaseCoreSystem_t02799BBC9B1026304B6E2664C0C04E11B49C1534 * __this, RuntimeObject* ___registrar0, BaseMixedRealityProfile_t2A0A98B91AB85C25A1A55C5154A6C4BEB33222FA * ___profile1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_m1E6909512BFCC255E98AA130F055CABF7CE2AB6B_inline (BaseCoreSystem_t02799BBC9B1026304B6E2664C0C04E11B49C1534 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::.ctor(Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCoreSystem__ctor_mD2FB778AD980AAB1FE87F483B190EA5DD6A2915D (BaseCoreSystem_t02799BBC9B1026304B6E2664C0C04E11B49C1534 * __this, BaseMixedRealityProfile_t2A0A98B91AB85C25A1A55C5154A6C4BEB33222FA * ___profile0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Initialize_mFCB9B6171C9F4AA09D2BA1D69C386669A626C432 (BaseService_t37408A99C1C9139C195AB7DE6CEFFE40C3FDBC77 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::InitializeInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_InitializeInternal_m7DEC0164A8F9EBF2EC8E6DD330F4481A84B8B9EB (MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F * __this, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportEventData__ctor_mCFF80BA5C0E39BED63F381241891C9F2E1A7580B (TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * __this, EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___eventSystem0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseEventSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseEventSystem_Destroy_mEE8D503A5D270795ED2E8D30B873E1995E20EB53 (BaseEventSystem_tCDFCCEC591DFD3C6FEF79A5DA42BAE55BC34AA25 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5 (const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseEventSystem::Register(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseEventSystem_Register_mE440575EB0A993764E219305E271851DE365F303 (BaseEventSystem_tCDFCCEC591DFD3C6FEF79A5DA42BAE55BC34AA25 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___listener0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseEventSystem::Unregister(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseEventSystem_Unregister_mBDA9817199AC131A30F5A71DB3E5944B46A8B1B0 (BaseEventSystem_tCDFCCEC591DFD3C6FEF79A5DA42BAE55BC34AA25 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___listener0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m37F8BF26FAFB4976BAAD92492214E58DC868DC27 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData::Initialize(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotspot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportEventData_Initialize_mD58D1D826E95ED8AB4B8EFED357C0C55D2118B26 (TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * __this, RuntimeObject* ___pointer0, RuntimeObject* ___target1, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::ProcessTeleportationRequest(Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_ProcessTeleportationRequest_m988F6A43BA0F767B17139B476E6FFF38045B0FB5 (MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F * __this, TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * ___eventData0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData::get_Pointer()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* TeleportEventData_get_Pointer_m8DD348FB38E248D9953308C19295D5839D88D2A1_inline (TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTeleportPointer>(!!0)
inline bool UnityObjectExtensions_IsNull_TisIMixedRealityTeleportPointer_t84CA4E51D9A509030B4C4CC3547116F413482036_mA90EA53D12EA0A3BE8C9F37463038504F44C2A1F (RuntimeObject* ___interface0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))UnityObjectExtensions_IsNull_TisRuntimeObject_mF999DFAAF9363443DB3C9EE264E2DE64620B37DB_gshared)(___interface0, method);
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::get_Point()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  FocusDetails_get_Point_m53BB8CD96FFB7FCFE916CC01920E96AF31BD1E14_inline (FocusDetails_t7F7F59BF7BDE713E1BF821AB1BD414A616D0DC96 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotspot Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData::get_Hotspot()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* TeleportEventData_get_Hotspot_m832452B73FF2FF6A6F7DE38734643292F01C9ABF_inline (TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * __this, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * CameraCache_get_Main_m7E8C960AE7377D88571B34D5FC306D9F3F8108BA (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityPlayspace_get_Position_m4845734DD078199B8C1C464AC7827AC2D445F40C (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::set_Position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPlayspace_set_Position_m8DF9F5823179B93EE977B7320A3601CFB967F5A3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPlayspace_RotateAround_mFCCFB6556BB4ECE8A7C05F3FC15458C33A3C8A77 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___axis1, float ___angle2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportComplete(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotspot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_RaiseTeleportComplete_m548B123FDC5B992606EED8885BF05970C2216797 (MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F * __this, RuntimeObject* ___pointer0, RuntimeObject* ___hotSpot1, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler>::.ctor(System.Object,System.IntPtr)
inline void EventFunction_1__ctor_mC234CF3C6EF9B1138819D6F0CC67960E4DB3F4D8 (EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventFunction_1__ctor_mC3690E11086D102EEB1BCC561DCA0ACD61D055D1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAEA82A9D0727240FB70B54C7E1D35AAB8FA8DE04 (U3CU3Ec_t9E5A9D3DCFFE80E813E2E913E342B0607E063144 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData>(UnityEngine.EventSystems.BaseEventData)
inline TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * ExecuteEvents_ValidateEventData_TisTeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5_m6B7FA44FD98D8D4685A58942B1C6F440D527DCB3 (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___data0, const RuntimeMethod* method)
{
	return ((  TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * (*) (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m6AC645E74FA8C753DD50130438B2D226EF2478E4_gshared)(___data0, method);
}
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::Internal_End(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerMarker_Internal_End_mE25FE55A23DF111614CE890359972D96A65B499A (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.ProfilerMarker::Internal_Create(System.String,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerMarker_Internal_Create_m92F2A7651D4BF3F3D0CB62078DD79B71839FA370 (String_t* ___name0, uint16_t ___flags1, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::Internal_Begin(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerMarker_Internal_Begin_m79272E72708A53AFDEEEB81CF66C7D62920AC5B5 (intptr_t ___markerPtr0, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem__ctor_m26F8684ED7331E7CACEDBC2F408616D7304A1BD1 (MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F * __this, RuntimeObject* ___registrar0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityTeleportSystem__ctor_m26F8684ED7331E7CACEDBC2F408616D7304A1BD1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool isTeleporting = false;
		__this->set_isTeleporting_22((bool)0);
		// private bool isProcessingTeleportRequest = false;
		__this->set_isProcessingTeleportRequest_23((bool)0);
		// private Vector3 targetPosition = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_targetPosition_24(L_0);
		// private Vector3 targetRotation = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_targetRotation_25(L_1);
		// private GameObject eventSystemReference = null;
		__this->set_eventSystemReference_26((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
		// public override string Name { get; protected set; } = "Mixed Reality Teleport System";
		__this->set_U3CNameU3Ek__BackingField_27(_stringLiteralFE4C1AA9295D744656D3EBC80FD145E6DD76CA87);
		// private float teleportDuration = 0.25f;
		__this->set_teleportDuration_29((0.25f));
		// IMixedRealityServiceRegistrar registrar) : base(registrar, null) // Teleport system does not use a profile
		RuntimeObject* L_2 = ___registrar0;
		BaseCoreSystem__ctor_mD9CE949051DE46F081D9B1C5538072EB933D8FD0(__this, L_2, (BaseMixedRealityProfile_t2A0A98B91AB85C25A1A55C5154A6C4BEB33222FA *)NULL, /*hidden argument*/NULL);
		// Registrar = registrar;
		RuntimeObject* L_3 = ___registrar0;
		BaseCoreSystem_set_Registrar_m1E6909512BFCC255E98AA130F055CABF7CE2AB6B_inline(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem__ctor_mC80CFEBBF3E8AD822C1D9E09335EC28A07888F46 (MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityTeleportSystem__ctor_mC80CFEBBF3E8AD822C1D9E09335EC28A07888F46_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool isTeleporting = false;
		__this->set_isTeleporting_22((bool)0);
		// private bool isProcessingTeleportRequest = false;
		__this->set_isProcessingTeleportRequest_23((bool)0);
		// private Vector3 targetPosition = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_targetPosition_24(L_0);
		// private Vector3 targetRotation = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_targetRotation_25(L_1);
		// private GameObject eventSystemReference = null;
		__this->set_eventSystemReference_26((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
		// public override string Name { get; protected set; } = "Mixed Reality Teleport System";
		__this->set_U3CNameU3Ek__BackingField_27(_stringLiteralFE4C1AA9295D744656D3EBC80FD145E6DD76CA87);
		// private float teleportDuration = 0.25f;
		__this->set_teleportDuration_29((0.25f));
		// public MixedRealityTeleportSystem() : base(null) { } // Teleport system does not use a profile
		BaseCoreSystem__ctor_mD2FB778AD980AAB1FE87F483B190EA5DD6A2915D(__this, (BaseMixedRealityProfile_t2A0A98B91AB85C25A1A55C5154A6C4BEB33222FA *)NULL, /*hidden argument*/NULL);
		// public MixedRealityTeleportSystem() : base(null) { } // Teleport system does not use a profile
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityTeleportSystem_get_Name_mC9229F37D453555A1BCCB0330E2144F2200F6DD5 (MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F * __this, const RuntimeMethod* method)
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Teleport System";
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_27();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_set_Name_m4D5A794FFA12083AF786CFDFFBFC0C34009E6D6A (MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Teleport System";
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_27(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_Initialize_mC0987A2D2930181672DBE6A5D586D61C88B25FE4 (MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F * __this, const RuntimeMethod* method)
{
	{
		// base.Initialize();
		BaseService_Initialize_mFCB9B6171C9F4AA09D2BA1D69C386669A626C432(__this, /*hidden argument*/NULL);
		// InitializeInternal();
		MixedRealityTeleportSystem_InitializeInternal_m7DEC0164A8F9EBF2EC8E6DD330F4481A84B8B9EB(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::InitializeInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_InitializeInternal_m7DEC0164A8F9EBF2EC8E6DD330F4481A84B8B9EB (MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityTeleportSystem_InitializeInternal_m7DEC0164A8F9EBF2EC8E6DD330F4481A84B8B9EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// teleportEventData = new TeleportEventData(EventSystem.current);
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var);
		EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * L_0 = EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD(/*hidden argument*/NULL);
		TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * L_1 = (TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 *)il2cpp_codegen_object_new(TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5_il2cpp_TypeInfo_var);
		TeleportEventData__ctor_mCFF80BA5C0E39BED63F381241891C9F2E1A7580B(L_1, L_0, /*hidden argument*/NULL);
		__this->set_teleportEventData_21(L_1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_Destroy_mDB730B8C75444D5E3E9E0813A5988FD902FFBA05 (MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityTeleportSystem_Destroy_mDB730B8C75444D5E3E9E0813A5988FD902FFBA05_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// base.Destroy();
		BaseEventSystem_Destroy_mEE8D503A5D270795ED2E8D30B873E1995E20EB53(__this, /*hidden argument*/NULL);
		// if (eventSystemReference != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_eventSystemReference_26();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0044;
		}
	}
	{
		// if (!Application.isPlaying)
		bool L_3 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		// Object.DestroyImmediate(eventSystemReference);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_eventSystemReference_26();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_5, /*hidden argument*/NULL);
		goto IL_0043;
	}

IL_0035:
	{
		// Object.Destroy(eventSystemReference);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_eventSystemReference_26();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_6, /*hidden argument*/NULL);
	}

IL_0043:
	{
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::Register(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_Register_mC38ECD3A4384AA97D51CEF9F485E0FEEBC461790 (MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___listener0, const RuntimeMethod* method)
{
	{
		// public override void Register(GameObject listener) => base.Register(listener);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___listener0;
		BaseEventSystem_Register_mE440575EB0A993764E219305E271851DE365F303(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::Unregister(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_Unregister_m01DAF093C020E26042D2FED67A04414B36C1D0D0 (MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___listener0, const RuntimeMethod* method)
{
	{
		// public override void Unregister(GameObject listener) => base.Unregister(listener);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___listener0;
		BaseEventSystem_Unregister_mBDA9817199AC131A30F5A71DB3E5944B46A8B1B0(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::get_IsInputSystemEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityTeleportSystem_get_IsInputSystemEnabled_m6B28D66C356D6EE8B422DC2ABC8145AE843BA403 (MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityTeleportSystem_get_IsInputSystemEnabled_m6B28D66C356D6EE8B422DC2ABC8145AE843BA403_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool IsInputSystemEnabled => CoreServices.InputSystem != null;
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB284CAD260668D8742F59ED5DDC128A38712D7F4_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = CoreServices_get_InputSystem_m37F8BF26FAFB4976BAAD92492214E58DC868DC27(/*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::get_TeleportDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityTeleportSystem_get_TeleportDuration_mD33E1B2A10E7A340505C7CA32198CD7E5908CC17 (MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F * __this, const RuntimeMethod* method)
{
	{
		// get => teleportDuration;
		float L_0 = __this->get_teleportDuration_29();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::set_TeleportDuration(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_set_TeleportDuration_m7DD9D8D6C83DB586ACBE7DE58B999A04428AACFF (MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityTeleportSystem_set_TeleportDuration_m7DD9D8D6C83DB586ACBE7DE58B999A04428AACFF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (isProcessingTeleportRequest)
		bool L_0 = __this->get_isProcessingTeleportRequest_23();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Debug.LogWarning("Couldn't change teleport duration. Teleport in progress.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralEFE6B56A9DC4DB2A042FF69F417FF18EE1734789, /*hidden argument*/NULL);
		// return;
		goto IL_0020;
	}

IL_0019:
	{
		// teleportDuration = value;
		float L_2 = ___value0;
		__this->set_teleportDuration_29(L_2);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportRequest(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotspot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_RaiseTeleportRequest_m74C50EF970E8893484BC99ACE472AE2E8E145ECC (MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F * __this, RuntimeObject* ___pointer0, RuntimeObject* ___hotSpot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityTeleportSystem_RaiseTeleportRequest_m74C50EF970E8893484BC99ACE472AE2E8E145ECC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (RaiseTeleportRequestPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_il2cpp_TypeInfo_var))->get_RaiseTeleportRequestPerfMarker_31();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		// teleportEventData.Initialize(pointer, hotSpot);
		TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * L_2 = __this->get_teleportEventData_21();
		RuntimeObject* L_3 = ___pointer0;
		RuntimeObject* L_4 = ___hotSpot1;
		NullCheck(L_2);
		TeleportEventData_Initialize_mD58D1D826E95ED8AB4B8EFED357C0C55D2118B26(L_2, L_3, L_4, /*hidden argument*/NULL);
		// HandleEvent(teleportEventData, OnTeleportRequestHandler);
		TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * L_5 = __this->get_teleportEventData_21();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_il2cpp_TypeInfo_var);
		EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF * L_6 = ((MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_il2cpp_TypeInfo_var))->get_OnTeleportRequestHandler_30();
		GenericVirtActionInvoker2< BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF * >::Invoke(BaseEventSystem_HandleEvent_TisIMixedRealityTeleportHandler_t445C38614620E395CD0197449AC5789C14D71011_mB3D8D67AA666DE9AE6FA2BB6BB746D9EF3C05CA2_RuntimeMethod_var, __this, L_5, L_6);
		IL2CPP_LEAVE(0x42, FINALLY_0033);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(51)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportStarted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotspot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_RaiseTeleportStarted_m9FCFA1808568F85D45D511ACAF70A0F65D43BDE0 (MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F * __this, RuntimeObject* ___pointer0, RuntimeObject* ___hotSpot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityTeleportSystem_RaiseTeleportStarted_m9FCFA1808568F85D45D511ACAF70A0F65D43BDE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (isTeleporting)
		bool L_0 = __this->get_isTeleporting_22();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Debug.LogError("Teleportation already in progress");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral8AAF4DB2092074ABA4A5019AC2944FE5D941200F, /*hidden argument*/NULL);
		// return;
		goto IL_006e;
	}

IL_0019:
	{
		// using (RaiseTeleportStartedPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_2 = ((MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_il2cpp_TypeInfo_var))->get_RaiseTeleportStartedPerfMarker_33();
		V_2 = L_2;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_3 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_2), /*hidden argument*/NULL);
		V_1 = L_3;
	}

IL_0027:
	try
	{ // begin try (depth: 1)
		// isTeleporting = true;
		__this->set_isTeleporting_22((bool)1);
		// teleportEventData.Initialize(pointer, hotSpot);
		TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * L_4 = __this->get_teleportEventData_21();
		RuntimeObject* L_5 = ___pointer0;
		RuntimeObject* L_6 = ___hotSpot1;
		NullCheck(L_4);
		TeleportEventData_Initialize_mD58D1D826E95ED8AB4B8EFED357C0C55D2118B26(L_4, L_5, L_6, /*hidden argument*/NULL);
		// HandleEvent(teleportEventData, OnTeleportStartedHandler);
		TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * L_7 = __this->get_teleportEventData_21();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_il2cpp_TypeInfo_var);
		EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF * L_8 = ((MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_il2cpp_TypeInfo_var))->get_OnTeleportStartedHandler_32();
		GenericVirtActionInvoker2< BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF * >::Invoke(BaseEventSystem_HandleEvent_TisIMixedRealityTeleportHandler_t445C38614620E395CD0197449AC5789C14D71011_mB3D8D67AA666DE9AE6FA2BB6BB746D9EF3C05CA2_RuntimeMethod_var, __this, L_7, L_8);
		// ProcessTeleportationRequest(teleportEventData);
		TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * L_9 = __this->get_teleportEventData_21();
		MixedRealityTeleportSystem_ProcessTeleportationRequest_m988F6A43BA0F767B17139B476E6FFF38045B0FB5(__this, L_9, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x6E, FINALLY_005f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(95)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportComplete(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotspot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_RaiseTeleportComplete_m548B123FDC5B992606EED8885BF05970C2216797 (MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F * __this, RuntimeObject* ___pointer0, RuntimeObject* ___hotSpot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityTeleportSystem_RaiseTeleportComplete_m548B123FDC5B992606EED8885BF05970C2216797_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (!isTeleporting)
		bool L_0 = __this->get_isTeleporting_22();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// Debug.LogError("No Active Teleportation in progress.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral4D1D987217C94047D95253BDAA70342271726366, /*hidden argument*/NULL);
		// return;
		goto IL_0064;
	}

IL_001c:
	{
		// using (RaiseTeleportCompletePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_2 = ((MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_il2cpp_TypeInfo_var))->get_RaiseTeleportCompletePerfMarker_35();
		V_2 = L_2;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_3 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_2), /*hidden argument*/NULL);
		V_1 = L_3;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		// teleportEventData.Initialize(pointer, hotSpot);
		TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * L_4 = __this->get_teleportEventData_21();
		RuntimeObject* L_5 = ___pointer0;
		RuntimeObject* L_6 = ___hotSpot1;
		NullCheck(L_4);
		TeleportEventData_Initialize_mD58D1D826E95ED8AB4B8EFED357C0C55D2118B26(L_4, L_5, L_6, /*hidden argument*/NULL);
		// HandleEvent(teleportEventData, OnTeleportCompletedHandler);
		TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * L_7 = __this->get_teleportEventData_21();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_il2cpp_TypeInfo_var);
		EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF * L_8 = ((MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_il2cpp_TypeInfo_var))->get_OnTeleportCompletedHandler_34();
		GenericVirtActionInvoker2< BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF * >::Invoke(BaseEventSystem_HandleEvent_TisIMixedRealityTeleportHandler_t445C38614620E395CD0197449AC5789C14D71011_mB3D8D67AA666DE9AE6FA2BB6BB746D9EF3C05CA2_RuntimeMethod_var, __this, L_7, L_8);
		// isTeleporting = false;
		__this->set_isTeleporting_22((bool)0);
		IL2CPP_LEAVE(0x64, FINALLY_0055);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0055;
	}

FINALLY_0055:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(85)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(85)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x64, IL_0064)
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportCanceled(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotspot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_RaiseTeleportCanceled_m304881F994AE393D703FA7FC1A59C183E6C336F6 (MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F * __this, RuntimeObject* ___pointer0, RuntimeObject* ___hotSpot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityTeleportSystem_RaiseTeleportCanceled_m304881F994AE393D703FA7FC1A59C183E6C336F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (RaiseTeleportCanceledPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_il2cpp_TypeInfo_var))->get_RaiseTeleportCanceledPerfMarker_37();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		// teleportEventData.Initialize(pointer, hotSpot);
		TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * L_2 = __this->get_teleportEventData_21();
		RuntimeObject* L_3 = ___pointer0;
		RuntimeObject* L_4 = ___hotSpot1;
		NullCheck(L_2);
		TeleportEventData_Initialize_mD58D1D826E95ED8AB4B8EFED357C0C55D2118B26(L_2, L_3, L_4, /*hidden argument*/NULL);
		// HandleEvent(teleportEventData, OnTeleportCanceledHandler);
		TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * L_5 = __this->get_teleportEventData_21();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_il2cpp_TypeInfo_var);
		EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF * L_6 = ((MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_il2cpp_TypeInfo_var))->get_OnTeleportCanceledHandler_36();
		GenericVirtActionInvoker2< BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF * >::Invoke(BaseEventSystem_HandleEvent_TisIMixedRealityTeleportHandler_t445C38614620E395CD0197449AC5789C14D71011_mB3D8D67AA666DE9AE6FA2BB6BB746D9EF3C05CA2_RuntimeMethod_var, __this, L_5, L_6);
		IL2CPP_LEAVE(0x42, FINALLY_0033);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(51)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::ProcessTeleportationRequest(Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem_ProcessTeleportationRequest_m988F6A43BA0F767B17139B476E6FFF38045B0FB5 (MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F * __this, TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityTeleportSystem_ProcessTeleportationRequest_m988F6A43BA0F767B17139B476E6FFF38045B0FB5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	float V_3 = 0.0f;
	bool V_4 = false;
	FocusDetails_t7F7F59BF7BDE713E1BF821AB1BD414A616D0DC96  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B4_0 = 0;
	{
		// using (ProcessTeleportationRequestPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_il2cpp_TypeInfo_var))->get_ProcessTeleportationRequestPerfMarker_38();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// isProcessingTeleportRequest = true;
			__this->set_isProcessingTeleportRequest_23((bool)1);
			// targetRotation = Vector3.zero;
			IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
			__this->set_targetRotation_25(L_2);
			// if (eventData.Pointer is IMixedRealityTeleportPointer teleportPointer && !teleportPointer.IsNull())
			TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * L_3 = ___eventData0;
			NullCheck(L_3);
			RuntimeObject* L_4 = TeleportEventData_get_Pointer_m8DD348FB38E248D9953308C19295D5839D88D2A1_inline(L_3, /*hidden argument*/NULL);
			RuntimeObject* L_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IMixedRealityTeleportPointer_t84CA4E51D9A509030B4C4CC3547116F413482036_il2cpp_TypeInfo_var));
			V_2 = L_5;
			if (!L_5)
			{
				goto IL_003c;
			}
		}

IL_0031:
		{
			RuntimeObject* L_6 = V_2;
			bool L_7 = UnityObjectExtensions_IsNull_TisIMixedRealityTeleportPointer_t84CA4E51D9A509030B4C4CC3547116F413482036_mA90EA53D12EA0A3BE8C9F37463038504F44C2A1F(L_6, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityTeleportPointer_t84CA4E51D9A509030B4C4CC3547116F413482036_mA90EA53D12EA0A3BE8C9F37463038504F44C2A1F_RuntimeMethod_var);
			G_B4_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
			goto IL_003d;
		}

IL_003c:
		{
			G_B4_0 = 0;
		}

IL_003d:
		{
			V_4 = (bool)G_B4_0;
			bool L_8 = V_4;
			if (!L_8)
			{
				goto IL_0056;
			}
		}

IL_0043:
		{
			// targetRotation.y = teleportPointer.PointerOrientation;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_9 = __this->get_address_of_targetRotation_25();
			RuntimeObject* L_10 = V_2;
			NullCheck(L_10);
			float L_11 = InterfaceFuncInvoker0< float >::Invoke(3 /* System.Single Microsoft.MixedReality.Toolkit.Input.IMixedRealityTeleportPointer::get_PointerOrientation() */, IMixedRealityTeleportPointer_t84CA4E51D9A509030B4C4CC3547116F413482036_il2cpp_TypeInfo_var, L_10);
			L_9->set_y_3(L_11);
		}

IL_0056:
		{
			// targetPosition = eventData.Pointer.Result.Details.Point;
			TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * L_12 = ___eventData0;
			NullCheck(L_12);
			RuntimeObject* L_13 = TeleportEventData_get_Pointer_m8DD348FB38E248D9953308C19295D5839D88D2A1_inline(L_12, /*hidden argument*/NULL);
			NullCheck(L_13);
			RuntimeObject* L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(22 /* Microsoft.MixedReality.Toolkit.Input.IPointerResult Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Result() */, IMixedRealityPointer_t8B056268027051905768F6E5B780F7155BBF5B63_il2cpp_TypeInfo_var, L_13);
			NullCheck(L_14);
			FocusDetails_t7F7F59BF7BDE713E1BF821AB1BD414A616D0DC96  L_15 = InterfaceFuncInvoker0< FocusDetails_t7F7F59BF7BDE713E1BF821AB1BD414A616D0DC96  >::Invoke(1 /* Microsoft.MixedReality.Toolkit.Physics.FocusDetails Microsoft.MixedReality.Toolkit.Input.IPointerResult::get_Details() */, IPointerResult_t5C352F2262EFB8113AF4E80EACAEB1BA73D3153B_il2cpp_TypeInfo_var, L_14);
			V_5 = L_15;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = FocusDetails_get_Point_m53BB8CD96FFB7FCFE916CC01920E96AF31BD1E14_inline((FocusDetails_t7F7F59BF7BDE713E1BF821AB1BD414A616D0DC96 *)(&V_5), /*hidden argument*/NULL);
			__this->set_targetPosition_24(L_16);
			// if (eventData.Hotspot != null)
			TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * L_17 = ___eventData0;
			NullCheck(L_17);
			RuntimeObject* L_18 = TeleportEventData_get_Hotspot_m832452B73FF2FF6A6F7DE38734643292F01C9ABF_inline(L_17, /*hidden argument*/NULL);
			V_6 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_18) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_19 = V_6;
			if (!L_19)
			{
				goto IL_00c0;
			}
		}

IL_0084:
		{
			// targetPosition = eventData.Hotspot.Position;
			TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * L_20 = ___eventData0;
			NullCheck(L_20);
			RuntimeObject* L_21 = TeleportEventData_get_Hotspot_m832452B73FF2FF6A6F7DE38734643292F01C9ABF_inline(L_20, /*hidden argument*/NULL);
			NullCheck(L_21);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = InterfaceFuncInvoker0< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(0 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotspot::get_Position() */, IMixedRealityTeleportHotspot_t668A8421A97740C94BE18FA99E4FA9F24F47FC6D_il2cpp_TypeInfo_var, L_21);
			__this->set_targetPosition_24(L_22);
			// if (eventData.Hotspot.OverrideOrientation)
			TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * L_23 = ___eventData0;
			NullCheck(L_23);
			RuntimeObject* L_24 = TeleportEventData_get_Hotspot_m832452B73FF2FF6A6F7DE38734643292F01C9ABF_inline(L_23, /*hidden argument*/NULL);
			NullCheck(L_24);
			bool L_25 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotspot::get_OverrideOrientation() */, IMixedRealityTeleportHotspot_t668A8421A97740C94BE18FA99E4FA9F24F47FC6D_il2cpp_TypeInfo_var, L_24);
			V_7 = L_25;
			bool L_26 = V_7;
			if (!L_26)
			{
				goto IL_00bf;
			}
		}

IL_00a7:
		{
			// targetRotation.y = eventData.Hotspot.TargetRotation;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_27 = __this->get_address_of_targetRotation_25();
			TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * L_28 = ___eventData0;
			NullCheck(L_28);
			RuntimeObject* L_29 = TeleportEventData_get_Hotspot_m832452B73FF2FF6A6F7DE38734643292F01C9ABF_inline(L_28, /*hidden argument*/NULL);
			NullCheck(L_29);
			float L_30 = InterfaceFuncInvoker0< float >::Invoke(4 /* System.Single Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotspot::get_TargetRotation() */, IMixedRealityTeleportHotspot_t668A8421A97740C94BE18FA99E4FA9F24F47FC6D_il2cpp_TypeInfo_var, L_29);
			L_27->set_y_3(L_30);
		}

IL_00bf:
		{
		}

IL_00c0:
		{
			// float height = targetPosition.y;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_31 = __this->get_address_of_targetPosition_24();
			float L_32 = L_31->get_y_3();
			V_3 = L_32;
			// targetPosition -= CameraCache.Main.transform.position - MixedRealityPlayspace.Position;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = __this->get_targetPosition_24();
			Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_34 = CameraCache_get_Main_m7E8C960AE7377D88571B34D5FC306D9F3F8108BA(/*hidden argument*/NULL);
			NullCheck(L_34);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_35 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_34, /*hidden argument*/NULL);
			NullCheck(L_35);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_35, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_t404E204FBB102703CFF7911FC37DE496EC7F63C9_il2cpp_TypeInfo_var);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = MixedRealityPlayspace_get_Position_m4845734DD078199B8C1C464AC7827AC2D445F40C(/*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_36, L_37, /*hidden argument*/NULL);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_33, L_38, /*hidden argument*/NULL);
			__this->set_targetPosition_24(L_39);
			// targetPosition.y = height;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_40 = __this->get_address_of_targetPosition_24();
			float L_41 = V_3;
			L_40->set_y_3(L_41);
			// MixedRealityPlayspace.Position = targetPosition;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = __this->get_targetPosition_24();
			MixedRealityPlayspace_set_Position_m8DF9F5823179B93EE977B7320A3601CFB967F5A3(L_42, /*hidden argument*/NULL);
			// MixedRealityPlayspace.RotateAround(
			//             CameraCache.Main.transform.position,
			//             Vector3.up,
			//             targetRotation.y - CameraCache.Main.transform.eulerAngles.y);
			Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_43 = CameraCache_get_Main_m7E8C960AE7377D88571B34D5FC306D9F3F8108BA(/*hidden argument*/NULL);
			NullCheck(L_43);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_44 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_43, /*hidden argument*/NULL);
			NullCheck(L_44);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_44, /*hidden argument*/NULL);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_47 = __this->get_address_of_targetRotation_25();
			float L_48 = L_47->get_y_3();
			Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_49 = CameraCache_get_Main_m7E8C960AE7377D88571B34D5FC306D9F3F8108BA(/*hidden argument*/NULL);
			NullCheck(L_49);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_50 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_49, /*hidden argument*/NULL);
			NullCheck(L_50);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_51 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_50, /*hidden argument*/NULL);
			float L_52 = L_51.get_y_3();
			MixedRealityPlayspace_RotateAround_mFCCFB6556BB4ECE8A7C05F3FC15458C33A3C8A77(L_45, L_46, ((float)il2cpp_codegen_subtract((float)L_48, (float)L_52)), /*hidden argument*/NULL);
			// isProcessingTeleportRequest = false;
			__this->set_isProcessingTeleportRequest_23((bool)0);
			// RaiseTeleportComplete(eventData.Pointer, eventData.Hotspot);
			TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * L_53 = ___eventData0;
			NullCheck(L_53);
			RuntimeObject* L_54 = TeleportEventData_get_Pointer_m8DD348FB38E248D9953308C19295D5839D88D2A1_inline(L_53, /*hidden argument*/NULL);
			TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * L_55 = ___eventData0;
			NullCheck(L_55);
			RuntimeObject* L_56 = TeleportEventData_get_Hotspot_m832452B73FF2FF6A6F7DE38734643292F01C9ABF_inline(L_55, /*hidden argument*/NULL);
			MixedRealityTeleportSystem_RaiseTeleportComplete_m548B123FDC5B992606EED8885BF05970C2216797(__this, L_54, L_56, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x174, FINALLY_0165);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0165;
	}

FINALLY_0165:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(357)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(357)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x174, IL_0174)
	}

IL_0174:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTeleportSystem__cctor_m3E0A9150FA9A8EB0FF9B1F809F4B04B74EAFA334 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityTeleportSystem__cctor_m3E0A9150FA9A8EB0FF9B1F809F4B04B74EAFA334_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker HandleEventPerfMarker = new ProfilerMarker("[MRTK] MixedRealityTeleportSystem.HandleEvent");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_0), _stringLiteral89B99DE69D115DD421416AB51E52A78974B1F94E, /*hidden argument*/NULL);
		((MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_il2cpp_TypeInfo_var))->set_HandleEventPerfMarker_28(L_0);
		// private static readonly ExecuteEvents.EventFunction<IMixedRealityTeleportHandler> OnTeleportRequestHandler =
		//     delegate (IMixedRealityTeleportHandler handler, BaseEventData eventData)
		//     {
		//         var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		//         handler.OnTeleportRequest(casted);
		//     };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t9E5A9D3DCFFE80E813E2E913E342B0607E063144_il2cpp_TypeInfo_var);
		U3CU3Ec_t9E5A9D3DCFFE80E813E2E913E342B0607E063144 * L_1 = ((U3CU3Ec_t9E5A9D3DCFFE80E813E2E913E342B0607E063144_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9E5A9D3DCFFE80E813E2E913E342B0607E063144_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF * L_2 = (EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF *)il2cpp_codegen_object_new(EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF_il2cpp_TypeInfo_var);
		EventFunction_1__ctor_mC234CF3C6EF9B1138819D6F0CC67960E4DB3F4D8(L_2, L_1, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__39_0_mF6DA75DB54FEAF0B9B2955EB628C91D44C780199_RuntimeMethod_var), /*hidden argument*/EventFunction_1__ctor_mC234CF3C6EF9B1138819D6F0CC67960E4DB3F4D8_RuntimeMethod_var);
		((MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_il2cpp_TypeInfo_var))->set_OnTeleportRequestHandler_30(L_2);
		// private static readonly ProfilerMarker RaiseTeleportRequestPerfMarker = new ProfilerMarker("[MRTK] MixedRealityTeleportSystem.RaiseTeleportRequest");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_3), _stringLiteral2726084170C33D344E979943C3BB7C09052C51D5, /*hidden argument*/NULL);
		((MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_il2cpp_TypeInfo_var))->set_RaiseTeleportRequestPerfMarker_31(L_3);
		// private static readonly ExecuteEvents.EventFunction<IMixedRealityTeleportHandler> OnTeleportStartedHandler =
		//     delegate (IMixedRealityTeleportHandler handler, BaseEventData eventData)
		//     {
		//         var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		//         handler.OnTeleportStarted(casted);
		//     };
		U3CU3Ec_t9E5A9D3DCFFE80E813E2E913E342B0607E063144 * L_4 = ((U3CU3Ec_t9E5A9D3DCFFE80E813E2E913E342B0607E063144_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9E5A9D3DCFFE80E813E2E913E342B0607E063144_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF * L_5 = (EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF *)il2cpp_codegen_object_new(EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF_il2cpp_TypeInfo_var);
		EventFunction_1__ctor_mC234CF3C6EF9B1138819D6F0CC67960E4DB3F4D8(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__39_1_mF8A1C1056D4C066AF47D81E937A877063B6A9009_RuntimeMethod_var), /*hidden argument*/EventFunction_1__ctor_mC234CF3C6EF9B1138819D6F0CC67960E4DB3F4D8_RuntimeMethod_var);
		((MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_il2cpp_TypeInfo_var))->set_OnTeleportStartedHandler_32(L_5);
		// private static readonly ProfilerMarker RaiseTeleportStartedPerfMarker = new ProfilerMarker("[MRTK] MixedRealityTeleportSystem.RaiseTeleportStarted");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_6;
		memset((&L_6), 0, sizeof(L_6));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_6), _stringLiteral8C21D7D9FAB4CC65E3A0BDB2FCDD394590E39A4B, /*hidden argument*/NULL);
		((MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_il2cpp_TypeInfo_var))->set_RaiseTeleportStartedPerfMarker_33(L_6);
		// private static readonly ExecuteEvents.EventFunction<IMixedRealityTeleportHandler> OnTeleportCompletedHandler =
		//     delegate (IMixedRealityTeleportHandler handler, BaseEventData eventData)
		//     {
		//         var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		//         handler.OnTeleportCompleted(casted);
		//     };
		U3CU3Ec_t9E5A9D3DCFFE80E813E2E913E342B0607E063144 * L_7 = ((U3CU3Ec_t9E5A9D3DCFFE80E813E2E913E342B0607E063144_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9E5A9D3DCFFE80E813E2E913E342B0607E063144_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF * L_8 = (EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF *)il2cpp_codegen_object_new(EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF_il2cpp_TypeInfo_var);
		EventFunction_1__ctor_mC234CF3C6EF9B1138819D6F0CC67960E4DB3F4D8(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__39_2_m61C0D38023DBC88AB84AF8951FDF93EDD7BD0036_RuntimeMethod_var), /*hidden argument*/EventFunction_1__ctor_mC234CF3C6EF9B1138819D6F0CC67960E4DB3F4D8_RuntimeMethod_var);
		((MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_il2cpp_TypeInfo_var))->set_OnTeleportCompletedHandler_34(L_8);
		// private static readonly ProfilerMarker RaiseTeleportCompletePerfMarker = new ProfilerMarker("[MRTK] MixedRealityTeleportSystem.RaiseTeleportComplete");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_9;
		memset((&L_9), 0, sizeof(L_9));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_9), _stringLiteral92F6DF9B96DD0FCF6C38DAFC129A3865004F1C43, /*hidden argument*/NULL);
		((MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_il2cpp_TypeInfo_var))->set_RaiseTeleportCompletePerfMarker_35(L_9);
		// private static readonly ExecuteEvents.EventFunction<IMixedRealityTeleportHandler> OnTeleportCanceledHandler =
		//     delegate (IMixedRealityTeleportHandler handler, BaseEventData eventData)
		//     {
		//         var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		//         handler.OnTeleportCanceled(casted);
		//     };
		U3CU3Ec_t9E5A9D3DCFFE80E813E2E913E342B0607E063144 * L_10 = ((U3CU3Ec_t9E5A9D3DCFFE80E813E2E913E342B0607E063144_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9E5A9D3DCFFE80E813E2E913E342B0607E063144_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF * L_11 = (EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF *)il2cpp_codegen_object_new(EventFunction_1_t6D4E2C76508F1539B2A03E71C3A526B7CADA21CF_il2cpp_TypeInfo_var);
		EventFunction_1__ctor_mC234CF3C6EF9B1138819D6F0CC67960E4DB3F4D8(L_11, L_10, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__39_3_mF2B0C9E58E9A9554270ED1704BCA25069737EDEB_RuntimeMethod_var), /*hidden argument*/EventFunction_1__ctor_mC234CF3C6EF9B1138819D6F0CC67960E4DB3F4D8_RuntimeMethod_var);
		((MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_il2cpp_TypeInfo_var))->set_OnTeleportCanceledHandler_36(L_11);
		// private static readonly ProfilerMarker RaiseTeleportCanceledPerfMarker = new ProfilerMarker("[MRTK] MixedRealityTeleportSystem.RaiseTeleportHandled");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_12;
		memset((&L_12), 0, sizeof(L_12));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_12), _stringLiteralA2C3B4F13A9AEDF231CE7539948BBECC158BC016, /*hidden argument*/NULL);
		((MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_il2cpp_TypeInfo_var))->set_RaiseTeleportCanceledPerfMarker_37(L_12);
		// private static readonly ProfilerMarker ProcessTeleportationRequestPerfMarker = new ProfilerMarker("[MRTK] MixedRealityTeleportSystem.ProcessTeleportationRequest");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_13;
		memset((&L_13), 0, sizeof(L_13));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_13), _stringLiteral531921F117445C4BFE3CEC4018D5B4CE84733F15, /*hidden argument*/NULL);
		((MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityTeleportSystem_t7690D1EF73E5F9AE17E1F645B42834A324E3D10F_il2cpp_TypeInfo_var))->set_ProcessTeleportationRequestPerfMarker_38(L_13);
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
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m4AED9F0DEB78F314090930246524D8DFFA33B5BF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m4AED9F0DEB78F314090930246524D8DFFA33B5BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9E5A9D3DCFFE80E813E2E913E342B0607E063144 * L_0 = (U3CU3Ec_t9E5A9D3DCFFE80E813E2E913E342B0607E063144 *)il2cpp_codegen_object_new(U3CU3Ec_t9E5A9D3DCFFE80E813E2E913E342B0607E063144_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mAEA82A9D0727240FB70B54C7E1D35AAB8FA8DE04(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t9E5A9D3DCFFE80E813E2E913E342B0607E063144_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9E5A9D3DCFFE80E813E2E913E342B0607E063144_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAEA82A9D0727240FB70B54C7E1D35AAB8FA8DE04 (U3CU3Ec_t9E5A9D3DCFFE80E813E2E913E342B0607E063144 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c::<.cctor>b__39_0(Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__39_0_mF6DA75DB54FEAF0B9B2955EB628C91D44C780199 (U3CU3Ec_t9E5A9D3DCFFE80E813E2E913E342B0607E063144 * __this, RuntimeObject* ___handler0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__39_0_mF6DA75DB54FEAF0B9B2955EB628C91D44C780199_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * L_1 = ExecuteEvents_ValidateEventData_TisTeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5_m6B7FA44FD98D8D4685A58942B1C6F440D527DCB3(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisTeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5_m6B7FA44FD98D8D4685A58942B1C6F440D527DCB3_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTeleportRequest(casted);
		RuntimeObject* L_2 = ___handler0;
		TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler::OnTeleportRequest(Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData) */, IMixedRealityTeleportHandler_t445C38614620E395CD0197449AC5789C14D71011_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c::<.cctor>b__39_1(Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__39_1_mF8A1C1056D4C066AF47D81E937A877063B6A9009 (U3CU3Ec_t9E5A9D3DCFFE80E813E2E913E342B0607E063144 * __this, RuntimeObject* ___handler0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__39_1_mF8A1C1056D4C066AF47D81E937A877063B6A9009_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * L_1 = ExecuteEvents_ValidateEventData_TisTeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5_m6B7FA44FD98D8D4685A58942B1C6F440D527DCB3(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisTeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5_m6B7FA44FD98D8D4685A58942B1C6F440D527DCB3_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTeleportStarted(casted);
		RuntimeObject* L_2 = ___handler0;
		TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler::OnTeleportStarted(Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData) */, IMixedRealityTeleportHandler_t445C38614620E395CD0197449AC5789C14D71011_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c::<.cctor>b__39_2(Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__39_2_m61C0D38023DBC88AB84AF8951FDF93EDD7BD0036 (U3CU3Ec_t9E5A9D3DCFFE80E813E2E913E342B0607E063144 * __this, RuntimeObject* ___handler0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__39_2_m61C0D38023DBC88AB84AF8951FDF93EDD7BD0036_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * L_1 = ExecuteEvents_ValidateEventData_TisTeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5_m6B7FA44FD98D8D4685A58942B1C6F440D527DCB3(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisTeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5_m6B7FA44FD98D8D4685A58942B1C6F440D527DCB3_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTeleportCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler::OnTeleportCompleted(Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData) */, IMixedRealityTeleportHandler_t445C38614620E395CD0197449AC5789C14D71011_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem/<>c::<.cctor>b__39_3(Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__39_3_mF2B0C9E58E9A9554270ED1704BCA25069737EDEB (U3CU3Ec_t9E5A9D3DCFFE80E813E2E913E342B0607E063144 * __this, RuntimeObject* ___handler0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__39_3_mF2B0C9E58E9A9554270ED1704BCA25069737EDEB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<TeleportEventData>(eventData);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * L_1 = ExecuteEvents_ValidateEventData_TisTeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5_m6B7FA44FD98D8D4685A58942B1C6F440D527DCB3(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisTeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5_m6B7FA44FD98D8D4685A58942B1C6F440D527DCB3_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTeleportCanceled(casted);
		RuntimeObject* L_2 = ___handler0;
		TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler::OnTeleportCanceled(Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData) */, IMixedRealityTeleportHandler_t445C38614620E395CD0197449AC5789C14D71011_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_m1E6909512BFCC255E98AA130F055CABF7CE2AB6B_inline (BaseCoreSystem_t02799BBC9B1026304B6E2664C0C04E11B49C1534 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// protected IMixedRealityServiceRegistrar Registrar { get; set; } = null;
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CRegistrarU3Ek__BackingField_20(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method)
{
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_inline((&L_1), (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerMarker_Internal_End_mE25FE55A23DF111614CE890359972D96A65B499A((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* TeleportEventData_get_Pointer_m8DD348FB38E248D9953308C19295D5839D88D2A1_inline (TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * __this, const RuntimeMethod* method)
{
	{
		// public IMixedRealityPointer Pointer { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CPointerU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  FocusDetails_get_Point_m53BB8CD96FFB7FCFE916CC01920E96AF31BD1E14_inline (FocusDetails_t7F7F59BF7BDE713E1BF821AB1BD414A616D0DC96 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Point { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CPointU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* TeleportEventData_get_Hotspot_m832452B73FF2FF6A6F7DE38734643292F01C9ABF_inline (TeleportEventData_t4C38E8D8512036324C5463B5FC535733412CE7E5 * __this, const RuntimeMethod* method)
{
	{
		// public IMixedRealityTeleportHotspot Hotspot { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CHotspotU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1 = ProfilerMarker_Internal_Create_m92F2A7651D4BF3F3D0CB62078DD79B71839FA370(L_0, (uint16_t)0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, intptr_t ___markerPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->set_m_Ptr_0((intptr_t)L_0);
		intptr_t L_1 = ___markerPtr0;
		ProfilerMarker_Internal_Begin_m79272E72708A53AFDEEEB81CF66C7D62920AC5B5((intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}

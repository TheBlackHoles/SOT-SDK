﻿// Name: S, Version: 2.2.1

#include "../SDK.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Set Colour on All Materials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_SmallShipNetProxy_C::Set_Colour_on_All_Materials(const struct FName& ParameterName, const struct FLinearColor& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Set Colour on All Materials");

	ABP_SmallShipNetProxy_C_Set_Colour_on_All_Materials_Params params;
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Set Value on All Materials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Variable_Name                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_SmallShipNetProxy_C::Set_Value_on_All_Materials(const struct FName& Variable_Name, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Set Value on All Materials");

	ABP_SmallShipNetProxy_C_Set_Value_on_All_Materials_Params params;
	params.Variable_Name = Variable_Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Apply Bits to Lanterns
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Bits                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_SmallShipNetProxy_C::Apply_Bits_to_Lanterns(int Bits)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Apply Bits to Lanterns");

	ABP_SmallShipNetProxy_C_Apply_Bits_to_Lanterns_Params params;
	params.Bits = Bits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Create Dynamic Materials
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_SmallShipNetProxy_C::Create_Dynamic_Materials()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Create Dynamic Materials");

	ABP_SmallShipNetProxy_C_Create_Dynamic_Materials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_SmallShipNetProxy_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.UserConstructionScript");

	ABP_SmallShipNetProxy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_SmallShipNetProxy_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.ReceiveBeginPlay");

	ABP_SmallShipNetProxy_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.OnLanternStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            LanternStateBits               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_SmallShipNetProxy_C::OnLanternStateChanged(int LanternStateBits)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.OnLanternStateChanged");

	ABP_SmallShipNetProxy_C_OnLanternStateChanged_Params params;
	params.LanternStateBits = LanternStateBits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.OnEmissaryActiveStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           InNewEmissaryActiveState       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_SmallShipNetProxy_C::OnEmissaryActiveStateChanged(bool InNewEmissaryActiveState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.OnEmissaryActiveStateChanged");

	ABP_SmallShipNetProxy_C_OnEmissaryActiveStateChanged_Params params;
	params.InNewEmissaryActiveState = InNewEmissaryActiveState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.ExecuteUbergraph_BP_SmallShipNetProxy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_SmallShipNetProxy_C::ExecuteUbergraph_BP_SmallShipNetProxy(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.ExecuteUbergraph_BP_SmallShipNetProxy");

	ABP_SmallShipNetProxy_C_ExecuteUbergraph_BP_SmallShipNetProxy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

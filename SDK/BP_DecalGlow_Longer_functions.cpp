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

// Function BP_DecalGlow_Longer.BP_DecalGlow_Longer_C.StartGlowEffect
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_DecalGlow_Longer_C::StartGlowEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DecalGlow_Longer.BP_DecalGlow_Longer_C.StartGlowEffect");

	ABP_DecalGlow_Longer_C_StartGlowEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DecalGlow_Longer.BP_DecalGlow_Longer_C.StartReaction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_DecalGlow_Longer_C::StartReaction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DecalGlow_Longer.BP_DecalGlow_Longer_C.StartReaction");

	ABP_DecalGlow_Longer_C_StartReaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_DecalGlow_Longer.BP_DecalGlow_Longer_C.StopReaction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_DecalGlow_Longer_C::StopReaction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DecalGlow_Longer.BP_DecalGlow_Longer_C.StopReaction");

	ABP_DecalGlow_Longer_C_StopReaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_DecalGlow_Longer.BP_DecalGlow_Longer_C.CollectDecalMaterials
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_DecalGlow_Longer_C::CollectDecalMaterials()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DecalGlow_Longer.BP_DecalGlow_Longer_C.CollectDecalMaterials");

	ABP_DecalGlow_Longer_C_CollectDecalMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DecalGlow_Longer.BP_DecalGlow_Longer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_DecalGlow_Longer_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DecalGlow_Longer.BP_DecalGlow_Longer_C.UserConstructionScript");

	ABP_DecalGlow_Longer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DecalGlow_Longer.BP_DecalGlow_Longer_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_DecalGlow_Longer_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DecalGlow_Longer.BP_DecalGlow_Longer_C.ReceiveBeginPlay");

	ABP_DecalGlow_Longer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DecalGlow_Longer.BP_DecalGlow_Longer_C.ExecuteUbergraph_BP_DecalGlow_Longer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DecalGlow_Longer_C::ExecuteUbergraph_BP_DecalGlow_Longer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DecalGlow_Longer.BP_DecalGlow_Longer_C.ExecuteUbergraph_BP_DecalGlow_Longer");

	ABP_DecalGlow_Longer_C_ExecuteUbergraph_BP_DecalGlow_Longer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

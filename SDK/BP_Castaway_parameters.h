﻿#pragma once

// Name: S, Version: 2.2.1

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
// Parameters
//---------------------------------------------------------------------------

// Function BP_Castaway.BP_Castaway_C.UserConstructionScript
struct ABP_Castaway_C_UserConstructionScript_Params
{
};

// Function BP_Castaway.BP_Castaway_C.TriggerAudioEvent
struct ABP_Castaway_C_TriggerAudioEvent_Params
{
	class UWwiseEvent*                                 AudioEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Castaway.BP_Castaway_C.StopCurrentAudioEvent
struct ABP_Castaway_C_StopCurrentAudioEvent_Params
{
};

// Function BP_Castaway.BP_Castaway_C.Multicast_TriggerAudioEvent
struct ABP_Castaway_C_Multicast_TriggerAudioEvent_Params
{
	int                                                EventIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Castaway.BP_Castaway_C.ResetVisibility
struct ABP_Castaway_C_ResetVisibility_Params
{
};

// Function BP_Castaway.BP_Castaway_C.ExecuteUbergraph_BP_Castaway
struct ABP_Castaway_C_ExecuteUbergraph_BP_Castaway_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

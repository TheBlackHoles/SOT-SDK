﻿#pragma once

// Name: S, Version: 2.2.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Castaway.BP_Castaway_C
// 0x0028 (FullSize[0x05F8] - InheritedSize[0x05D0])
class ABP_Castaway_C : public ABP_Orderofsouls_TallTales_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UActorPhasingComponent*                      ActorPhasing;                                              // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter_1;                                  // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	TArray<class UWwiseEvent*>                         AudioEvents;                                               // 0x05E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Castaway.BP_Castaway_C");
		return ptr;
	}



	void UserConstructionScript();
	void TriggerAudioEvent(class UWwiseEvent* AudioEvent);
	void StopCurrentAudioEvent();
	void Multicast_TriggerAudioEvent(int EventIdx);
	void ResetVisibility();
	void ExecuteUbergraph_BP_Castaway(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_NPC_AnimatedItemInterface.BP_NPC_AnimatedItemInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBP_NPC_AnimatedItemInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_NPC_AnimatedItemInterface.BP_NPC_AnimatedItemInterface_C");
		return ptr;
	}



	void PlayItemAnimation();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

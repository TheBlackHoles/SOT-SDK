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
// Enums
//---------------------------------------------------------------------------

// Enum Music.EAISpawnerMusicZoneState
enum class Music_EAISpawnerMusicZoneState : uint8_t
{
	EAISpawnerMusicZoneState__Passive = 0,
	EAISpawnerMusicZoneState__InCombat = 1,
	EAISpawnerMusicZoneState__BattleWon = 2,
	EAISpawnerMusicZoneState__EAISpawnerMusicZoneState_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Music.MusicZoneDestroyedEvent
// 0x0010
struct FMusicZoneDestroyedEvent
{
	unsigned char                                      UnknownData_EF2S[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Music.MusicZoneSpawnedEvent
// 0x0010
struct FMusicZoneSpawnedEvent
{
	unsigned char                                      UnknownData_HWNY[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

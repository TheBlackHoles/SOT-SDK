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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SessionMessages.SessionServiceLogUnsubscribe
// 0x0001
struct FSessionServiceLogUnsubscribe
{
	unsigned char                                      UnknownData_19U1[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct SessionMessages.SessionServiceLogSubscribe
// 0x0001
struct FSessionServiceLogSubscribe
{
	unsigned char                                      UnknownData_WFZ5[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct SessionMessages.SessionServiceLog
// 0x0038
struct FSessionServiceLog
{
	struct FName                                       Category;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Data;                                                      // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FGuid                                       InstanceId;                                                // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                             TimeSeconds;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Verbosity;                                                 // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WYQO[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct SessionMessages.SessionServicePong
// 0x0090
struct FSessionServicePong
{
	struct FString                                     BuildDate;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     DeviceName;                                                // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FGuid                                       InstanceId;                                                // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     InstanceName;                                              // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	bool                                               IsConsoleBuild;                                            // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2NPI[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlatformName;                                              // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FGuid                                       SessionId;                                                 // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     SessionName;                                               // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     SessionOwner;                                              // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	bool                                               Standalone;                                                // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HOZ1[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct SessionMessages.SessionServicePing
// 0x0001
struct FSessionServicePing
{
	unsigned char                                      UnknownData_POPT[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

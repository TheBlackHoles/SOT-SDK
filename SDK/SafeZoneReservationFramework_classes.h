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

// Class SafeZoneReservationFramework.SafeZoneComponent
// 0x0140 (FullSize[0x06F0] - InheritedSize[0x05B0])
class USafeZoneComponent : public UCapsuleComponent
{
public:
	struct FScriptMulticastDelegate                    OnSafeZoneIsEmptyDelegate;                                 // 0x05B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              ExclusionRadius;                                           // 0x05C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NKVT[0x4];                                     // 0x05C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ExclusionHeight;                                           // 0x05C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SafeZoneEmptyCollisionProfile;                             // 0x05CC(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AutoActivateSafeZone;                                      // 0x05D4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DeactivateSafeZoneAfterExclusionRadiusIsEmpty;             // 0x05D5(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UsePlayerTeleport;                                         // 0x05D6(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1Z9A[0x1];                                     // 0x05D7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PlayerTeleportRadius;                                      // 0x05D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Y4WO[0x4];                                     // 0x05DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               UseRepelForce;                                             // 0x05E0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_P6WL[0x3];                                     // 0x05E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RepelForceRadius;                                          // 0x05E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1K5K[0x4];                                     // 0x05E8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RepelForceExtents;                                         // 0x05EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RepelForceMin;                                             // 0x05F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RepelForceMax;                                             // 0x05F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ApplyRepelForceAtCentreOfMass;                             // 0x05F8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HVLL[0x7];                                     // 0x05F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRuntimeFloatCurve                          RepelForceGradientCurve;                                   // 0x0600(0x0080) (Edit, DisableEditOnInstance)
	bool                                               UseAngularImpulse;                                         // 0x0680(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VRDX[0x3];                                     // 0x0681(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AngularImpulseRadius;                                      // 0x0684(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HDKB[0x4];                                     // 0x0688(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AngularImpulseForce;                                       // 0x068C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetDeflectionAngle;                                     // 0x0690(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSafeZoneEmpty;                                           // 0x0694(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               StopAISpawning;                                            // 0x0695(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FVAG[0x2];                                     // 0x0696(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       CurrentCollisionProfile;                                   // 0x0698(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SafeZoneReservationFramework_ESafeZoneState> SafeZoneState;                                             // 0x06A0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_U87O[0x4F];                                    // 0x06A1(0x004F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SafeZoneReservationFramework.SafeZoneComponent");
		return ptr;
	}



	void SafeZoneIsEmpty__DelegateSignature();
	void OnRep_UpdateCollisionProfile();
	void OnRep_EmptyStateChanged();
	void DeactivateSafeZone();
	void DeactivateCollider();
	void ActivateSafeZone();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

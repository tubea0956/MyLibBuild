// SDK BY - @Manish8x (4.2.0 -- 64Bit) SDK 工具 By 无名 @Manish8x
// Telegram频道:- @Manish8x
// 此文件生成时间Thu Jan 15 10:48:21 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------By 无名 @Manish8x---------------------------
//Functions
//---------------------By 无名 @Manish8x---------------------------

// Function ZLevel.ZLevelData.ReBindLevelDataComponent
// (Final, Native, Public)

void AZLevelData::ReBindLevelDataComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ZLevel.ZLevelData.ReBindLevelDataComponent");

	AZLevelData_ReBindLevelDataComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ZLevel.ZLevelData.CheckMonsterSpotIsOnLand
// (Final, Native, Public)
// Parameters:
// class UZMonsterSpot*           MonsterSpot                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UZMonsterSpotGroup*      SpotGroup                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AZLevelData::CheckMonsterSpotIsOnLand(class UZMonsterSpot* MonsterSpot, class UZMonsterSpotGroup* SpotGroup)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ZLevel.ZLevelData.CheckMonsterSpotIsOnLand");

	AZLevelData_CheckMonsterSpotIsOnLand_Params params;
	params.MonsterSpot = MonsterSpot;
	params.SpotGroup = SpotGroup;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}


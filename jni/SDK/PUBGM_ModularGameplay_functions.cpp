// PUBG MOBILE (4.2.0 -- 64bit Beta) SDK Generate By @ByDwoz
// Telegram Channel:- @XelahotOfficial
// Generate on Thu Jan 15 07:36:30 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------❣︎➪ 𝗕𝗬𝗗𝗪𝗢𝗭 𝗗𝗘𝗩𝗘𝗟𝗢𝗣𝗘𝗥༆✈︎🇪🇬---------------------------
//Functions
//---------------------❣︎➪𝗕𝗬𝗗𝗪𝗢𝗭 𝗗𝗘𝗩𝗘𝗟𝗢𝗣𝗘𝗥༆✈︎🇪🇬---------------------------

// Function ModularGameplay.GameFrameworkComponentManager.RemoveReceiver
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Receiver                       (Parm, ZeroConstructor, IsPlainOldData)

void UGameFrameworkComponentManager::RemoveReceiver(class AActor* Receiver)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ModularGameplay.GameFrameworkComponentManager.RemoveReceiver");

	UGameFrameworkComponentManager_RemoveReceiver_Params params;
	params.Receiver = Receiver;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ModularGameplay.GameFrameworkComponentManager.AddReceiver
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Receiver                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAddOnlyInGameWorlds           (Parm, ZeroConstructor, IsPlainOldData)

void UGameFrameworkComponentManager::AddReceiver(class AActor* Receiver, bool bAddOnlyInGameWorlds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ModularGameplay.GameFrameworkComponentManager.AddReceiver");

	UGameFrameworkComponentManager_AddReceiver_Params params;
	params.Receiver = Receiver;
	params.bAddOnlyInGameWorlds = bAddOnlyInGameWorlds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}


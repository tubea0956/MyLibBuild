#pragma once

// SDK BY - @Manish8x (4.2.0 -- 64Bit) SDK 工具 By 无名 @Manish8x
// Telegram频道:- @Manish8x
// 此文件生成时间Thu Jan 15 10:48:22 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------By 无名 @Manish8x---------------------------
//Parameters
//---------------------By 无名 @Manish8x---------------------------

// Function ModularGameplay.GameFrameworkComponentManager.RemoveReceiver
struct UGameFrameworkComponentManager_RemoveReceiver_Params
{
	class AActor*                                      Receiver;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ModularGameplay.GameFrameworkComponentManager.AddReceiver
struct UGameFrameworkComponentManager_AddReceiver_Params
{
	class AActor*                                      Receiver;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAddOnlyInGameWorlds;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

}


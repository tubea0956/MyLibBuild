#pragma once

// SDK BY - @Manish8x (4.2.0 -- 64Bit) SDK 工具 By 无名 @Manish8x
// Telegram频道:- @Manish8x
// 此文件生成时间Thu Jan 15 10:48:29 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------By 无名 @Manish8x---------------------------
//Parameters
//---------------------By 无名 @Manish8x---------------------------

// Function VirtualBackpackEmoteHandleBase_BP.VirtualBackpackEmoteHandleBase_BP_C.ExtractItemData
struct UVirtualBackpackEmoteHandleBase_BP_C_ExtractItemData_Params
{
	struct FBattleItemData                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VirtualBackpackEmoteHandleBase_BP.VirtualBackpackEmoteHandleBase_BP_C.HandleDisuse
struct UVirtualBackpackEmoteHandleBase_BP_C_HandleDisuse_Params
{
	EBattleItemDisuseReason*                           Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VirtualBackpackEmoteHandleBase_BP.VirtualBackpackEmoteHandleBase_BP_C.HandleUse
struct UVirtualBackpackEmoteHandleBase_BP_C_HandleUse_Params
{
	struct FBattleItemUseTarget*                       Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBattleItemUseReason*                              Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VirtualBackpackEmoteHandleBase_BP.VirtualBackpackEmoteHandleBase_BP_C.HandlePickup
struct UVirtualBackpackEmoteHandleBase_BP_C_HandlePickup_Params
{
	TScriptInterface<class UItemContainerInterface>    ItemContainer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FBattleItemPickupInfo*                      PickupInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	EBattleItemPickupReason*                           Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}


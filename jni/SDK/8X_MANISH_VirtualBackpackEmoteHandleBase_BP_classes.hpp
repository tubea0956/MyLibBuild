#pragma once

// SDK BY - @Manish8x (4.2.0 -- 64Bit) SDK 工具 By 无名 @Manish8x
// Telegram频道:- @Manish8x
// 此文件生成时间Thu Jan 15 10:48:29 2026
 
namespace SDK
{
//---------------------By 无名 @Manish8x---------------------------
//Classes
//---------------------By 无名 @Manish8x---------------------------

// BlueprintGeneratedClass VirtualBackpackEmoteHandleBase_BP.VirtualBackpackEmoteHandleBase_BP_C
// 0x0000 (0x01E8 - 0x01E8)
class UVirtualBackpackEmoteHandleBase_BP_C : public UBackpackEmoteHandle
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass VirtualBackpackEmoteHandleBase_BP.VirtualBackpackEmoteHandleBase_BP_C");
		return pStaticClass;
	}


	struct FBattleItemData ExtractItemData();
	bool HandleDisuse(EBattleItemDisuseReason* Reason);
	bool HandleUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason);
	bool HandlePickup(struct FBattleItemPickupInfo* PickupInfo, EBattleItemPickupReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer);
};


}


#pragma once

// SDK BY - @Manish8x (4.2.0 -- 64Bit) SDK 工具 By 无名 @Manish8x
// Telegram频道:- @Manish8x
// 此文件生成时间Thu Jan 15 10:48:29 2026
 
namespace SDK
{
//---------------------By 无名 @Manish8x---------------------------
//Classes
//---------------------By 无名 @Manish8x---------------------------

// BlueprintGeneratedClass BattleItemHandle_VirtualCharacter.BattleItemHandle_VirtualCharacter_C
// 0x0000 (0x0138 - 0x0138)
class UBattleItemHandle_VirtualCharacter_C : public UBattleItemHandle_VirtualItem_C
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BattleItemHandle_VirtualCharacter.BattleItemHandle_VirtualCharacter_C");
		return pStaticClass;
	}


	struct FBattleItemData ExtractItemData();
};


}


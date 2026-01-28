#pragma once

// SDK BY - @Manish8x (4.2.0 -- 64Bit) SDK 工具 By 无名 @Manish8x
// Telegram频道:- @Manish8x
// 此文件生成时间Thu Jan 15 10:48:29 2026
 
namespace SDK
{
//---------------------By 无名 @Manish8x---------------------------
//Classes
//---------------------By 无名 @Manish8x---------------------------

// BlueprintGeneratedClass VirtualBattleItemHandle_AvatarBP.VirtualBattleItemHandle_AvatarBP_C
// 0x000E (0x0B90 - 0x0B82)
class UVirtualBattleItemHandle_AvatarBP_C : public UBattleItemHandle_AvatarBP_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0B82(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B88(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass VirtualBattleItemHandle_AvatarBP.VirtualBattleItemHandle_AvatarBP_C");
		return pStaticClass;
	}


	void GetWrapperClass(class UClass** WrapperClass);
	void Constuct(struct FItemDefineID* InDefineID);
	void ExecuteUbergraph_VirtualBattleItemHandle_AvatarBP(int EntryPoint);
};


}


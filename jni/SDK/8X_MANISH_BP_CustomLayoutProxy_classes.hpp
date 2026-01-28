#pragma once

// SDK BY - @Manish8x (4.2.0 -- 64Bit) SDK 工具 By 无名 @Manish8x
// Telegram频道:- @Manish8x
// 此文件生成时间Thu Jan 15 10:48:26 2026
 
namespace SDK
{
//---------------------By 无名 @Manish8x---------------------------
//Classes
//---------------------By 无名 @Manish8x---------------------------

// BlueprintGeneratedClass BP_CustomLayoutProxy.BP_CustomLayoutProxy_C
// 0x0000 (0x01D0 - 0x01D0)
class UBP_CustomLayoutProxy_C : public UCustomLayoutProxy
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_CustomLayoutProxy.BP_CustomLayoutProxy_C");
		return pStaticClass;
	}


	void AddLayoutDetailCache(bool Invalid, struct FBP_STRUCT_UIElemLayoutDetail* BPStruct);
};


}


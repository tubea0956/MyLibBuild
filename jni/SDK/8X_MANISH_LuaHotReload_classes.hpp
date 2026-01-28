#pragma once

// SDK BY - @Manish8x (4.2.0 -- 64Bit) SDK 工具 By 无名 @Manish8x
// Telegram频道:- @Manish8x
// 此文件生成时间Thu Jan 15 10:48:23 2026
 
namespace SDK
{
//---------------------By 无名 @Manish8x---------------------------
//Classes
//---------------------By 无名 @Manish8x---------------------------

// Class LuaHotReload.LuaHotReloadHelper
// 0x0010 (0x0038 - 0x0028)
class ULuaHotReloadHelper : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnScriptChangedDelegate;                                  // 0x0028(0x0010) (ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LuaHotReload.LuaHotReloadHelper");
		return pStaticClass;
	}


	void OnLuaFileHotUpdate(const struct FString& NotifyMessage);
};


}


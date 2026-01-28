#pragma once

// SDK BY - @Manish8x (4.2.0 -- 64Bit) SDK 工具 By 无名 @Manish8x
// Telegram频道:- @Manish8x
// 此文件生成时间Thu Jan 15 10:48:28 2026
 
namespace SDK
{
//---------------------By 无名 @Manish8x---------------------------
//Classes
//---------------------By 无名 @Manish8x---------------------------

// BlueprintGeneratedClass Editor_login.Editor_login_C
// 0x0008 (0x04B8 - 0x04B0)
class AEditor_login_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass Editor_login.Editor_login_C");
		return pStaticClass;
	}


	void SetFpsByIndex(int idx);
	void InpActEvt_Android_Back_K2Node_InputKeyEvent_12(const struct FKey& Key);
	void InpActEvt_E_K2Node_InputKeyEvent_11(const struct FKey& Key);
	void InpActEvt_BackSpace_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt_B_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_G_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_N_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Editor_login(int EntryPoint);
};


}


// SDK BY - @Manish8x (4.2.0 -- 64Bit) SDK 工具 By 无名 @Manish8x
// Telegram频道:- @Manish8x
// 此文件生成时间Thu Jan 15 10:48:26 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------By 无名 @Manish8x---------------------------
//Functions
//---------------------By 无名 @Manish8x---------------------------

// Function BP_CustomLayoutProxy.BP_CustomLayoutProxy_C.AddLayoutDetailCache
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBP_STRUCT_UIElemLayoutDetail BPStruct                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Invalid                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CustomLayoutProxy_C::AddLayoutDetailCache(bool Invalid, struct FBP_STRUCT_UIElemLayoutDetail* BPStruct)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_CustomLayoutProxy.BP_CustomLayoutProxy_C.AddLayoutDetailCache");

	UBP_CustomLayoutProxy_C_AddLayoutDetailCache_Params params;
	params.Invalid = Invalid;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (BPStruct != nullptr)
		*BPStruct = params.BPStruct;
}


}


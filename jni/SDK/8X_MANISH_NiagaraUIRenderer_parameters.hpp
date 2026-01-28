#pragma once

// SDK BY - @Manish8x (4.2.0 -- 64Bit) SDK 工具 By 无名 @Manish8x
// Telegram频道:- @Manish8x
// 此文件生成时间Thu Jan 15 10:48:24 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------By 无名 @Manish8x---------------------------
//Parameters
//---------------------By 无名 @Manish8x---------------------------

// Function NiagaraUIRenderer.NiagaraSystemWidget.SetIsActivated
struct UNiagaraSystemWidget_SetIsActivated_Params
{
	bool                                               bInIsActive;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NiagaraUIRenderer.NiagaraSystemWidget.GetNiagaraComponent
struct UNiagaraSystemWidget_GetNiagaraComponent_Params
{
	class UNiagaraUIComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function NiagaraUIRenderer.NiagaraSystemWidget.GetIsActivated
struct UNiagaraSystemWidget_GetIsActivated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NiagaraUIRenderer.NiagaraSystemWidget.DeactivateSystem
struct UNiagaraSystemWidget_DeactivateSystem_Params
{
};

// Function NiagaraUIRenderer.NiagaraSystemWidget.ActivateSystem
struct UNiagaraSystemWidget_ActivateSystem_Params
{
	bool                                               Reset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}


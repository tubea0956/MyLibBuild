#pragma once

// SDK BY - @Manish8x (4.2.0 -- 64Bit) SDK 工具 By 无名 @Manish8x
// Telegram频道:- @Manish8x
// 此文件生成时间Thu Jan 15 10:48:23 2026
 
namespace SDK
{
//---------------------By 无名 @Manish8x---------------------------
//Script Structs
//---------------------By 无名 @Manish8x---------------------------

// ScriptStruct UAEStateMachine.UAETransitionState
// 0x0010
struct FUAETransitionState
{
	struct FString                                     StateName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct UAEStateMachine.UAEStateMachineTransition
// 0x0028
struct FUAEStateMachineTransition
{
	TArray<struct FUAETransitionState>                 TransiteFromStates;                                       // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FUAETransitionState                         TransitToState;                                           // 0x0010(0x0010) (Edit)
	float                                              AutoFiredDelayTime;                                       // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AutoFiredForcedTransit;                                   // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct UAEStateMachine.UAEStatesGather
// 0x0010
struct FUAEStatesGather
{
	TArray<class UUAEState*>                           States;                                                   // 0x0000(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
};

}


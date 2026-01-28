#pragma once

// SDK BY - @Manish8x (4.2.0 -- 64Bit) SDK 工具 By 无名 @Manish8x
// Telegram频道:- @Manish8x
// 此文件生成时间Thu Jan 15 10:48:23 2026
 
namespace SDK
{
//---------------------By 无名 @Manish8x---------------------------
//Script Structs
//---------------------By 无名 @Manish8x---------------------------

// ScriptStruct TPlanGame.SyncRelevantPlayerTask
// 0x0018
struct FSyncRelevantPlayerTask
{
	int                                                TaskId;                                                   // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<class AActor*>                              TaskTargets;                                              // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct TPlanGame.XTBetrayInfo
// 0x0008
struct FXTBetrayInfo
{
	bool                                               IsInBetray;                                               // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                BetrayTime;                                               // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct TPlanGame.PreciousItem
// 0x000C
struct FPreciousItem
{
	int                                                TypeSpecificID;                                           // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SellPrice;                                                // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}


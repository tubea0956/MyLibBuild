#pragma once

// SDK BY - @Manish8x (4.2.0 -- 64Bit) SDK 工具 By 无名 @Manish8x
// Telegram频道:- @Manish8x
// 此文件生成时间Thu Jan 15 10:48:23 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------By 无名 @Manish8x---------------------------
//Parameters
//---------------------By 无名 @Manish8x---------------------------

// Function UITweens.TweenManager.TweenScale
struct UTweenManager_TweenScale_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D                                   from;                                                     // (Parm, IsPlainOldData)
	struct FVector2D                                   to;                                                       // (Parm, IsPlainOldData)
	float                                              Timespan;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UITweens.TweenManager.TweenPosition
struct UTweenManager_TweenPosition_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D                                   from;                                                     // (Parm, IsPlainOldData)
	struct FVector2D                                   to;                                                       // (Parm, IsPlainOldData)
	float                                              Timespan;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UITweens.TweenManager.TweenAlpha
struct UTweenManager_TweenAlpha_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              from;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Timespan;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UITweens.TweenManager.Tick
struct UTweenManager_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

}


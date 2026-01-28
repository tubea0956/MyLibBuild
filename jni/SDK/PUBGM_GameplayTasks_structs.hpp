#pragma once

// PUBG MOBILE (4.2.0 -- 64bit Beta) SDK Generate By @ByDwoz
// Telegram Channel:- @XelahotOfficial
// Generate on Thu Jan 15 07:36:28 2026
 
namespace SDK
{
//---------------------❣︎➪ 𝗕𝗬𝗗𝗪𝗢𝗭 𝗗𝗘𝗩𝗘𝗟𝗢𝗣𝗘𝗥༆✈︎🇪🇬---------------------------
//Enums
//---------------------❣︎➪𝗕𝗬𝗗𝗪𝗢𝗭 𝗗𝗘𝗩𝗘𝗟𝗢𝗣𝗘𝗥༆✈︎🇪🇬---------------------------

// Enum GameplayTasks.ETaskResourceOverlapPolicy
enum class ETaskResourceOverlapPolicy : uint8_t
{
	ETaskResourceOverlapPolicy__StartOnTop = 0,
	ETaskResourceOverlapPolicy__StartAtEnd = 1,
	ETaskResourceOverlapPolicy__ETaskResourceOverlapPolicy_MAX = 2
};


// Enum GameplayTasks.EGameplayTaskState
enum class EGameplayTaskState : uint8_t
{
	EGameplayTaskState__Uninitialized = 0,
	EGameplayTaskState__AwaitingActivation = 1,
	EGameplayTaskState__Paused     = 2,
	EGameplayTaskState__Active     = 3,
	EGameplayTaskState__Finished   = 4,
	EGameplayTaskState__EGameplayTaskState_MAX = 5
};


// Enum GameplayTasks.EGameplayTaskRunResult
enum class EGameplayTaskRunResult : uint8_t
{
	EGameplayTaskRunResult__Error  = 0,
	EGameplayTaskRunResult__Failed = 1,
	EGameplayTaskRunResult__Success_Paused = 2,
	EGameplayTaskRunResult__Success_Active = 3,
	EGameplayTaskRunResult__Success_Finished = 4,
	EGameplayTaskRunResult__EGameplayTaskRunResult_MAX = 5
};



//---------------------❣︎➪ 𝗕𝗬𝗗𝗪𝗢𝗭 𝗗𝗘𝗩𝗘𝗟𝗢𝗣𝗘𝗥༆✈︎🇪🇬---------------------------
//Script Structs
//---------------------❣︎➪𝗕𝗬𝗗𝗪𝗢𝗭 𝗗𝗘𝗩𝗘𝗟𝗢𝗣𝗘𝗥༆✈︎🇪🇬---------------------------

// ScriptStruct GameplayTasks.GameplayResourceSet
// 0x0002
struct FGameplayResourceSet
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

}


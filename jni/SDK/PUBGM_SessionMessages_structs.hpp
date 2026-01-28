#pragma once

// PUBG MOBILE (4.2.0 -- 64bit Beta) SDK Generate By @ByDwoz
// Telegram Channel:- @XelahotOfficial
// Generate on Thu Jan 15 07:36:31 2026
 
namespace SDK
{
//---------------------❣︎➪ 𝗕𝗬𝗗𝗪𝗢𝗭 𝗗𝗘𝗩𝗘𝗟𝗢𝗣𝗘𝗥༆✈︎🇪🇬---------------------------
//Script Structs
//---------------------❣︎➪𝗕𝗬𝗗𝗪𝗢𝗭 𝗗𝗘𝗩𝗘𝗟𝗢𝗣𝗘𝗥༆✈︎🇪🇬---------------------------

// ScriptStruct SessionMessages.SessionServiceLogUnsubscribe
// 0x0001
struct FSessionServiceLogUnsubscribe
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct SessionMessages.SessionServiceLogSubscribe
// 0x0001
struct FSessionServiceLogSubscribe
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct SessionMessages.SessionServiceLog
// 0x0038
struct FSessionServiceLog
{
	struct FName                                       Category;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     Data;                                                     // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       InstanceID;                                               // 0x0018(0x0010) (Edit, IsPlainOldData)
	double                                             TimeSeconds;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Verbosity;                                                // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct SessionMessages.SessionServicePong
// 0x0098
struct FSessionServicePong
{
	bool                                               Authorized;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     BuildDate;                                                // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FString                                     DeviceName;                                               // 0x0018(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       InstanceID;                                               // 0x0028(0x0010) (Edit, IsPlainOldData)
	struct FString                                     InstanceName;                                             // 0x0038(0x0010) (Edit, ZeroConstructor)
	bool                                               IsConsoleBuild;                                           // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct FString                                     PlatformName;                                             // 0x0050(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       SessionId;                                                // 0x0060(0x0010) (Edit, IsPlainOldData)
	struct FString                                     SessionName;                                              // 0x0070(0x0010) (Edit, ZeroConstructor)
	struct FString                                     SessionOwner;                                             // 0x0080(0x0010) (Edit, ZeroConstructor)
	bool                                               Standalone;                                               // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
};

// ScriptStruct SessionMessages.SessionServicePing
// 0x0010
struct FSessionServicePing
{
	struct FString                                     UserName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
};

}


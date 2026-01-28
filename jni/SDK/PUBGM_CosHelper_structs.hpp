#pragma once

// PUBG MOBILE (4.2.0 -- 64bit Beta) SDK Generate By @ByDwoz
// Telegram Channel:- @XelahotOfficial
// Generate on Thu Jan 15 07:36:30 2026
 
namespace SDK
{
//---------------------❣︎➪ 𝗕𝗬𝗗𝗪𝗢𝗭 𝗗𝗘𝗩𝗘𝗟𝗢𝗣𝗘𝗥༆✈︎🇪🇬---------------------------
//Enums
//---------------------❣︎➪𝗕𝗬𝗗𝗪𝗢𝗭 𝗗𝗘𝗩𝗘𝗟𝗢𝗣𝗘𝗥༆✈︎🇪🇬---------------------------

// Enum CosHelper.ECosHelperFileInfoType
enum class ECosHelperFileInfoType : uint8_t
{
	ECosHelperFileInfoType__None   = 0,
	ECosHelperFileInfoType__ContentLength = 1,
	ECosHelperFileInfoType__ETag   = 2,
	ECosHelperFileInfoType__LastModifiedUtcTimestamp = 3,
	ECosHelperFileInfoType__ECosHelperFileInfoType_MAX = 4
};



//---------------------❣︎➪ 𝗕𝗬𝗗𝗪𝗢𝗭 𝗗𝗘𝗩𝗘𝗟𝗢𝗣𝗘𝗥༆✈︎🇪🇬---------------------------
//Script Structs
//---------------------❣︎➪𝗕𝗬𝗗𝗪𝗢𝗭 𝗗𝗘𝗩𝗘𝗟𝗢𝗣𝗘𝗥༆✈︎🇪🇬---------------------------

// ScriptStruct CosHelper.CosHelperInitializeInfo
// 0x0058
struct FCosHelperInitializeInfo
{
	bool                                               bUseAuthorization;                                        // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                SignExpirationTime;                                       // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     AppID;                                                    // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     BucketName;                                               // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     Region;                                                   // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     SecretId;                                                 // 0x0038(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     SecretKey;                                                // 0x0048(0x0010) (BlueprintVisible, ZeroConstructor)
};

}


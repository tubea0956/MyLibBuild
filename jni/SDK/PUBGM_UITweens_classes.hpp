#pragma once

// PUBG MOBILE (4.2.0 -- 64bit Beta) SDK Generate By @ByDwoz
// Telegram Channel:- @XelahotOfficial
// Generate on Thu Jan 15 07:36:31 2026
 
namespace SDK
{
//---------------------❣︎➪ 𝗕𝗬𝗗𝗪𝗢𝗭 𝗗𝗘𝗩𝗘𝗟𝗢𝗣𝗘𝗥༆✈︎🇪🇬---------------------------
//Classes
//---------------------❣︎➪𝗕𝗬𝗗𝗪𝗢𝗭 𝗗𝗘𝗩𝗘𝗟𝗢𝗣𝗘𝗥༆✈︎🇪🇬---------------------------

// Class UITweens.TweenManager
// 0x0028 (0x0050 - 0x0028)
class UTweenManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UITweens.TweenManager");
		return pStaticClass;
	}


	void TweenScale(class UWidget* Widget, const struct FVector2D& from, const struct FVector2D& to, float Timespan, int Type);
	void TweenPosition(class UWidget* Widget, const struct FVector2D& from, const struct FVector2D& to, float Timespan, int Type);
	void TweenAlpha(class UWidget* Widget, float from, float to, float Timespan, int Type);
	void Tick(float DeltaTime);
};


}


#pragma once

// SDK BY - @Manish8x (4.2.0 -- 64Bit) SDK 工具 By 无名 @Manish8x
// Telegram频道:- @Manish8x
// 此文件生成时间Thu Jan 15 10:48:23 2026
 
namespace SDK
{
//---------------------By 无名 @Manish8x---------------------------
//Classes
//---------------------By 无名 @Manish8x---------------------------

// Class CommonGameFeatures.ActorRepControlComponent
// 0x0050 (0x0288 - 0x0238)
class UActorRepControlComponent : public ULuaActorComponent
{
public:
	TMap<int, struct FRepControlGroupData>             ItemRepBlockingUIDMap;                                    // 0x0238(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CommonGameFeatures.ActorRepControlComponent");
		return pStaticClass;
	}


	void ToggleGroupedRepControlByUID(int64_t UID, int ControlMark, int RepControlGroup);
	bool ShouldBlockRepByUID(int64_t UID, int RepControlGroup);
	bool GetControlGroupData(int RepControlGroup, struct FRepControlGroupData* OutData);
};


// Class CommonGameFeatures.RepControlActorBase
// 0x0008 (0x0578 - 0x0570)
class ARepControlActorBase : public ALuaActor
{
public:
	class UActorRepControlComponent*                   CachedBlockingComp;                                       // 0x0570(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CommonGameFeatures.RepControlActorBase");
		return pStaticClass;
	}


	bool IsNetRelevantForCustomCheck(class AActor* RealViewer, class AActor* ViewTarget, const struct FVector& SrcLocation);
};


}


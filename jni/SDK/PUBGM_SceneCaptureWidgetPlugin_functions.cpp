// PUBG MOBILE (4.2.0 -- 64bit Beta) SDK Generate By @ByDwoz
// Telegram Channel:- @XelahotOfficial
// Generate on Thu Jan 15 07:36:29 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------❣︎➪ 𝗕𝗬𝗗𝗪𝗢𝗭 𝗗𝗘𝗩𝗘𝗟𝗢𝗣𝗘𝗥༆✈︎🇪🇬---------------------------
//Functions
//---------------------❣︎➪𝗕𝗬𝗗𝗪𝗢𝗭 𝗗𝗘𝗩𝗘𝗟𝗢𝗣𝗘𝗥༆✈︎🇪🇬---------------------------

// Function SceneCaptureWidgetPlugin.SceneCaptureWidget.SetSceneCaptureCameraActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASceneCaptureCameraActor* InSceneCaptureCameraActor      (Parm, ZeroConstructor, IsPlainOldData)

void USceneCaptureWidget::SetSceneCaptureCameraActor(class ASceneCaptureCameraActor* InSceneCaptureCameraActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SceneCaptureWidgetPlugin.SceneCaptureWidget.SetSceneCaptureCameraActor");

	USceneCaptureWidget_SetSceneCaptureCameraActor_Params params;
	params.InSceneCaptureCameraActor = InSceneCaptureCameraActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}


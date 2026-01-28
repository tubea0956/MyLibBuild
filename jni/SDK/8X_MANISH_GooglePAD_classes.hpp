#pragma once

// SDK BY - @Manish8x (4.2.0 -- 64Bit) SDK 工具 By 无名 @Manish8x
// Telegram频道:- @Manish8x
// 此文件生成时间Thu Jan 15 10:48:24 2026
 
namespace SDK
{
//---------------------By 无名 @Manish8x---------------------------
//Classes
//---------------------By 无名 @Manish8x---------------------------

// Class GooglePAD.GooglePADFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UGooglePADFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GooglePAD.GooglePADFunctionLibrary");
		return pStaticClass;
	}


	static EGooglePADErrorCode ShowCellularDataConfirmation();
	static EGooglePADErrorCode RequestRemoval(const struct FString& Name);
	static EGooglePADErrorCode RequestInfo(TArray<struct FString> AssetPacks);
	static EGooglePADErrorCode RequestDownload(TArray<struct FString> AssetPacks);
	static void ReleaseDownloadState(int State);
	static void ReleaseAssetPackLocation(int Location);
	static int GetTotalBytesToDownload(int State);
	static EGooglePADStorageMethod GetStorageMethod(int Location);
	static EGooglePADErrorCode GetShowCellularDataConfirmationStatus(EGooglePADCellularDataConfirmStatus* status);
	static EGooglePADDownloadStatus GetDownloadStatus(int State);
	static EGooglePADErrorCode GetDownloadState(const struct FString& Name, int* State);
	static int GetBytesDownloaded(int State);
	static struct FString GetAssetsPath(int Location);
	static EGooglePADErrorCode GetAssetPackLocation(const struct FString& Name, int* Location);
	static EGooglePADErrorCode CancelDownload(TArray<struct FString> AssetPacks);
};


}


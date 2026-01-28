#pragma once

// SDK BY - @Manish8x (4.2.0 -- 64Bit) SDK 工具 By 无名 @Manish8x
// Telegram频道:- @Manish8x
// 此文件生成时间Thu Jan 15 10:48:23 2026
 
namespace SDK
{
//---------------------By 无名 @Manish8x---------------------------
//Classes
//---------------------By 无名 @Manish8x---------------------------

// Class MMKVUnreal.MMKVObject
// 0x0008 (0x0030 - 0x0028)
class UMMKVObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MMKVUnreal.MMKVObject");
		return pStaticClass;
	}


	uint32_t TotalSize();
	bool SetString(const struct FString& Key, const struct FString& Value);
	bool SetInt32(const struct FString& Key, int Value);
	static void SetErrorLogDelegate(const struct FScriptDelegate& handler);
	bool SetDouble(const struct FString& Key, double Value);
	bool SetBuffer(const struct FString& Key, TArray<unsigned char> Buffer);
	bool SetBool(const struct FString& Key, bool Value);
	void Remove(const struct FString& Key);
	void MMKVLogError__DelegateSignature(const struct FString& MapID, int ErrorType);
	void Init(const struct FString& MMapID, const struct FString& RootPath);
	uint32_t GetValueSize(const struct FString& Key);
	struct FString GetString(const struct FString& Key);
	int GetInt32(const struct FString& Key);
	double GetDouble(const struct FString& Key);
	TArray<unsigned char> GetBuffer(const struct FString& Key);
	bool GetBool(const struct FString& Key);
	TMap<struct FString, bool> GetAllKeys();
	bool ContainsKey(const struct FString& Key);
};


}


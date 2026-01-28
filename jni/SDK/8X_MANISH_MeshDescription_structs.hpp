#pragma once

// SDK BY - @Manish8x (4.2.0 -- 64Bit) SDK 工具 By 无名 @Manish8x
// Telegram频道:- @Manish8x
// 此文件生成时间Thu Jan 15 10:48:21 2026
 
namespace SDK
{
//---------------------By 无名 @Manish8x---------------------------
//Enums
//---------------------By 无名 @Manish8x---------------------------

// Enum MeshDescription.EComputeNTBsOptions
enum class EComputeNTBsOptions : uint8_t
{
	EComputeNTBsOptions__None      = 0,
	EComputeNTBsOptions__Normals   = 1,
	EComputeNTBsOptions__Tangents  = 2,
	EComputeNTBsOptions__WeightedNTBs = 3,
	EComputeNTBsOptions__EComputeNTBsOptions_MAX = 4
};



//---------------------By 无名 @Manish8x---------------------------
//Script Structs
//---------------------By 无名 @Manish8x---------------------------

// ScriptStruct MeshDescription.ElementID
// 0x0004
struct FElementID
{
	int                                                IDValue;                                                  // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MeshDescription.VertexInstanceID
// 0x0000 (0x0004 - 0x0004)
struct FVertexInstanceID : public FElementID
{

};

// ScriptStruct MeshDescription.MeshTriangle
// 0x000C
struct FMeshTriangle
{
	struct FVertexInstanceID                           VertexInstanceID0;                                        // 0x0000(0x0004) (BlueprintVisible)
	struct FVertexInstanceID                           VertexInstanceID1;                                        // 0x0004(0x0004) (BlueprintVisible)
	struct FVertexInstanceID                           VertexInstanceID2;                                        // 0x0008(0x0004) (BlueprintVisible)
};

// ScriptStruct MeshDescription.PolygonID
// 0x0000 (0x0004 - 0x0004)
struct FPolygonID : public FElementID
{

};

// ScriptStruct MeshDescription.PolygonGroupID
// 0x0000 (0x0004 - 0x0004)
struct FPolygonGroupID : public FElementID
{

};

// ScriptStruct MeshDescription.EdgeID
// 0x0000 (0x0004 - 0x0004)
struct FEdgeID : public FElementID
{

};

// ScriptStruct MeshDescription.VertexID
// 0x0000 (0x0004 - 0x0004)
struct FVertexID : public FElementID
{

};

}


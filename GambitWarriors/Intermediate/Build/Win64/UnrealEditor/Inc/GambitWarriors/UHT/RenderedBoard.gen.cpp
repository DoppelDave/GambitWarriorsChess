// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GambitWarriors/Public/RenderedBoard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderedBoard() {}

// Begin Cross Module References
GAMBITWARRIORS_API UClass* Z_Construct_UClass_ABoardBase();
GAMBITWARRIORS_API UClass* Z_Construct_UClass_ARenderedBoard();
GAMBITWARRIORS_API UClass* Z_Construct_UClass_ARenderedBoard_NoRegister();
UPackage* Z_Construct_UPackage__Script_GambitWarriors();
// End Cross Module References

// Begin Class ARenderedBoard
void ARenderedBoard::StaticRegisterNativesARenderedBoard()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARenderedBoard);
UClass* Z_Construct_UClass_ARenderedBoard_NoRegister()
{
	return ARenderedBoard::StaticClass();
}
struct Z_Construct_UClass_ARenderedBoard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "RenderedBoard.h" },
		{ "ModuleRelativePath", "Public/RenderedBoard.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARenderedBoard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARenderedBoard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABoardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GambitWarriors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARenderedBoard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARenderedBoard_Statics::ClassParams = {
	&ARenderedBoard::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARenderedBoard_Statics::Class_MetaDataParams), Z_Construct_UClass_ARenderedBoard_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARenderedBoard()
{
	if (!Z_Registration_Info_UClass_ARenderedBoard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARenderedBoard.OuterSingleton, Z_Construct_UClass_ARenderedBoard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARenderedBoard.OuterSingleton;
}
template<> GAMBITWARRIORS_API UClass* StaticClass<ARenderedBoard>()
{
	return ARenderedBoard::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARenderedBoard);
ARenderedBoard::~ARenderedBoard() {}
// End Class ARenderedBoard

// Begin Registration
struct Z_CompiledInDeferFile_FID_GambitWarriors_Source_GambitWarriors_Public_RenderedBoard_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARenderedBoard, ARenderedBoard::StaticClass, TEXT("ARenderedBoard"), &Z_Registration_Info_UClass_ARenderedBoard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARenderedBoard), 381570738U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GambitWarriors_Source_GambitWarriors_Public_RenderedBoard_h_350022198(TEXT("/Script/GambitWarriors"),
	Z_CompiledInDeferFile_FID_GambitWarriors_Source_GambitWarriors_Public_RenderedBoard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GambitWarriors_Source_GambitWarriors_Public_RenderedBoard_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

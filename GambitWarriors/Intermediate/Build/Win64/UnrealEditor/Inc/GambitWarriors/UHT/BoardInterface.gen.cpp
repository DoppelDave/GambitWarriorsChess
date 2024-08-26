// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GambitWarriors/Public/BoardInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoardInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GAMBITWARRIORS_API UClass* Z_Construct_UClass_UBoardInterface();
GAMBITWARRIORS_API UClass* Z_Construct_UClass_UBoardInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_GambitWarriors();
// End Cross Module References

// Begin Interface UBoardInterface
void UBoardInterface::StaticRegisterNativesUBoardInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBoardInterface);
UClass* Z_Construct_UClass_UBoardInterface_NoRegister()
{
	return UBoardInterface::StaticClass();
}
struct Z_Construct_UClass_UBoardInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoardInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBoardInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBoardInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_GambitWarriors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBoardInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoardInterface_Statics::ClassParams = {
	&UBoardInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBoardInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UBoardInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBoardInterface()
{
	if (!Z_Registration_Info_UClass_UBoardInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoardInterface.OuterSingleton, Z_Construct_UClass_UBoardInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBoardInterface.OuterSingleton;
}
template<> GAMBITWARRIORS_API UClass* StaticClass<UBoardInterface>()
{
	return UBoardInterface::StaticClass();
}
UBoardInterface::UBoardInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBoardInterface);
UBoardInterface::~UBoardInterface() {}
// End Interface UBoardInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_GambitWarriors_Source_GambitWarriors_Public_BoardInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBoardInterface, UBoardInterface::StaticClass, TEXT("UBoardInterface"), &Z_Registration_Info_UClass_UBoardInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoardInterface), 3978453938U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GambitWarriors_Source_GambitWarriors_Public_BoardInterface_h_2917680913(TEXT("/Script/GambitWarriors"),
	Z_CompiledInDeferFile_FID_GambitWarriors_Source_GambitWarriors_Public_BoardInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GambitWarriors_Source_GambitWarriors_Public_BoardInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

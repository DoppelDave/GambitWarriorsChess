// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GambitWarriors/UBoardInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUBoardInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GAMBITWARRIORS_API UClass* Z_Construct_UClass_UUBoardInterface();
GAMBITWARRIORS_API UClass* Z_Construct_UClass_UUBoardInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_GambitWarriors();
// End Cross Module References

// Begin Interface UUBoardInterface
void UUBoardInterface::StaticRegisterNativesUUBoardInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUBoardInterface);
UClass* Z_Construct_UClass_UUBoardInterface_NoRegister()
{
	return UUBoardInterface::StaticClass();
}
struct Z_Construct_UClass_UUBoardInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "UBoardInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUBoardInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUBoardInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_GambitWarriors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUBoardInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUBoardInterface_Statics::ClassParams = {
	&UUBoardInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUBoardInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UUBoardInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUBoardInterface()
{
	if (!Z_Registration_Info_UClass_UUBoardInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUBoardInterface.OuterSingleton, Z_Construct_UClass_UUBoardInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUBoardInterface.OuterSingleton;
}
template<> GAMBITWARRIORS_API UClass* StaticClass<UUBoardInterface>()
{
	return UUBoardInterface::StaticClass();
}
UUBoardInterface::UUBoardInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUBoardInterface);
UUBoardInterface::~UUBoardInterface() {}
// End Interface UUBoardInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_d_babuczki_Documents_Unreal_Projects_GambitWarriors_Source_GambitWarriors_UBoardInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUBoardInterface, UUBoardInterface::StaticClass, TEXT("UUBoardInterface"), &Z_Registration_Info_UClass_UUBoardInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUBoardInterface), 2994171158U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_d_babuczki_Documents_Unreal_Projects_GambitWarriors_Source_GambitWarriors_UBoardInterface_h_2091869729(TEXT("/Script/GambitWarriors"),
	Z_CompiledInDeferFile_FID_Users_d_babuczki_Documents_Unreal_Projects_GambitWarriors_Source_GambitWarriors_UBoardInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_d_babuczki_Documents_Unreal_Projects_GambitWarriors_Source_GambitWarriors_UBoardInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

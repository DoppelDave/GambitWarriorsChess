// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GambitWarriors/Public/BoardBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoardBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
GAMBITWARRIORS_API UClass* Z_Construct_UClass_ABoardBase();
GAMBITWARRIORS_API UClass* Z_Construct_UClass_ABoardBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_GambitWarriors();
// End Cross Module References

// Begin Class ABoardBase
void ABoardBase::StaticRegisterNativesABoardBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABoardBase);
UClass* Z_Construct_UClass_ABoardBase_NoRegister()
{
	return ABoardBase::StaticClass();
}
struct Z_Construct_UClass_ABoardBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BoardBase.h" },
		{ "ModuleRelativePath", "Public/BoardBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoardBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABoardBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GambitWarriors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoardBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoardBase_Statics::ClassParams = {
	&ABoardBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoardBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ABoardBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABoardBase()
{
	if (!Z_Registration_Info_UClass_ABoardBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoardBase.OuterSingleton, Z_Construct_UClass_ABoardBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABoardBase.OuterSingleton;
}
template<> GAMBITWARRIORS_API UClass* StaticClass<ABoardBase>()
{
	return ABoardBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABoardBase);
ABoardBase::~ABoardBase() {}
// End Class ABoardBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_d_babuczki_Documents_GitHub_GambitWarriorsChess_GambitWarriors_Source_GambitWarriors_Public_BoardBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABoardBase, ABoardBase::StaticClass, TEXT("ABoardBase"), &Z_Registration_Info_UClass_ABoardBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoardBase), 1552308343U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_d_babuczki_Documents_GitHub_GambitWarriorsChess_GambitWarriors_Source_GambitWarriors_Public_BoardBase_h_2039505394(TEXT("/Script/GambitWarriors"),
	Z_CompiledInDeferFile_FID_Users_d_babuczki_Documents_GitHub_GambitWarriorsChess_GambitWarriors_Source_GambitWarriors_Public_BoardBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_d_babuczki_Documents_GitHub_GambitWarriorsChess_GambitWarriors_Source_GambitWarriors_Public_BoardBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

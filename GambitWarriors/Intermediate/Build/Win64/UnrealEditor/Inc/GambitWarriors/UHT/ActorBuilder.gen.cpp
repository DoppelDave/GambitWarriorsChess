// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GambitWarriors/Public/ActorBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorBuilder() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GAMBITWARRIORS_API UClass* Z_Construct_UClass_UActorBuilder();
GAMBITWARRIORS_API UClass* Z_Construct_UClass_UActorBuilder_NoRegister();
UPackage* Z_Construct_UPackage__Script_GambitWarriors();
// End Cross Module References

// Begin Class UActorBuilder
void UActorBuilder::StaticRegisterNativesUActorBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorBuilder);
UClass* Z_Construct_UClass_UActorBuilder_NoRegister()
{
	return UActorBuilder::StaticClass();
}
struct Z_Construct_UClass_UActorBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ActorBuilder.h" },
		{ "ModuleRelativePath", "Public/ActorBuilder.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UActorBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GambitWarriors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorBuilder_Statics::ClassParams = {
	&UActorBuilder::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActorBuilder()
{
	if (!Z_Registration_Info_UClass_UActorBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorBuilder.OuterSingleton, Z_Construct_UClass_UActorBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorBuilder.OuterSingleton;
}
template<> GAMBITWARRIORS_API UClass* StaticClass<UActorBuilder>()
{
	return UActorBuilder::StaticClass();
}
UActorBuilder::UActorBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActorBuilder);
UActorBuilder::~UActorBuilder() {}
// End Class UActorBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_GambitWarriors_Source_GambitWarriors_Public_ActorBuilder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActorBuilder, UActorBuilder::StaticClass, TEXT("UActorBuilder"), &Z_Registration_Info_UClass_UActorBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorBuilder), 1848687208U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GambitWarriors_Source_GambitWarriors_Public_ActorBuilder_h_576693286(TEXT("/Script/GambitWarriors"),
	Z_CompiledInDeferFile_FID_GambitWarriors_Source_GambitWarriors_Public_ActorBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GambitWarriors_Source_GambitWarriors_Public_ActorBuilder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

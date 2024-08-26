// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GambitWarriors/Public/FigureBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFigureBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
GAMBITWARRIORS_API UClass* Z_Construct_UClass_AFigureBase();
GAMBITWARRIORS_API UClass* Z_Construct_UClass_AFigureBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_GambitWarriors();
// End Cross Module References

// Begin Class AFigureBase
void AFigureBase::StaticRegisterNativesAFigureBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFigureBase);
UClass* Z_Construct_UClass_AFigureBase_NoRegister()
{
	return AFigureBase::StaticClass();
}
struct Z_Construct_UClass_AFigureBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FigureBase.h" },
		{ "ModuleRelativePath", "Public/FigureBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "DisplayName", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FigureBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFigureBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFigureBase_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0144000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFigureBase, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFigureBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFigureBase_Statics::NewProp_MeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFigureBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFigureBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GambitWarriors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFigureBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFigureBase_Statics::ClassParams = {
	&AFigureBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFigureBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFigureBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFigureBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AFigureBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFigureBase()
{
	if (!Z_Registration_Info_UClass_AFigureBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFigureBase.OuterSingleton, Z_Construct_UClass_AFigureBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFigureBase.OuterSingleton;
}
template<> GAMBITWARRIORS_API UClass* StaticClass<AFigureBase>()
{
	return AFigureBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFigureBase);
AFigureBase::~AFigureBase() {}
// End Class AFigureBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_GambitWarriors_Source_GambitWarriors_Public_FigureBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFigureBase, AFigureBase::StaticClass, TEXT("AFigureBase"), &Z_Registration_Info_UClass_AFigureBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFigureBase), 536502372U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GambitWarriors_Source_GambitWarriors_Public_FigureBase_h_2895676118(TEXT("/Script/GambitWarriors"),
	Z_CompiledInDeferFile_FID_GambitWarriors_Source_GambitWarriors_Public_FigureBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GambitWarriors_Source_GambitWarriors_Public_FigureBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

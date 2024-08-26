// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GambitWarriors/Public/ChessField.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChessField() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
GAMBITWARRIORS_API UClass* Z_Construct_UClass_AChessField();
GAMBITWARRIORS_API UClass* Z_Construct_UClass_AChessField_NoRegister();
UPackage* Z_Construct_UPackage__Script_GambitWarriors();
// End Cross Module References

// Begin Class AChessField
void AChessField::StaticRegisterNativesAChessField()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChessField);
UClass* Z_Construct_UClass_AChessField_NoRegister()
{
	return AChessField::StaticClass();
}
struct Z_Construct_UClass_AChessField_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ChessField.h" },
		{ "ModuleRelativePath", "Public/ChessField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[] = {
		{ "Category", "ChessField" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ChessField.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChessField>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChessField_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x0114000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChessField, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionBox_MetaData), NewProp_CollisionBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChessField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChessField_Statics::NewProp_CollisionBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChessField_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AChessField_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GambitWarriors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChessField_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AChessField_Statics::ClassParams = {
	&AChessField::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AChessField_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AChessField_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChessField_Statics::Class_MetaDataParams), Z_Construct_UClass_AChessField_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AChessField()
{
	if (!Z_Registration_Info_UClass_AChessField.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChessField.OuterSingleton, Z_Construct_UClass_AChessField_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AChessField.OuterSingleton;
}
template<> GAMBITWARRIORS_API UClass* StaticClass<AChessField>()
{
	return AChessField::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AChessField);
AChessField::~AChessField() {}
// End Class AChessField

// Begin Registration
struct Z_CompiledInDeferFile_FID_GambitWarriors_Source_GambitWarriors_Public_ChessField_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AChessField, AChessField::StaticClass, TEXT("AChessField"), &Z_Registration_Info_UClass_AChessField, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChessField), 3113526108U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GambitWarriors_Source_GambitWarriors_Public_ChessField_h_1301465632(TEXT("/Script/GambitWarriors"),
	Z_CompiledInDeferFile_FID_GambitWarriors_Source_GambitWarriors_Public_ChessField_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GambitWarriors_Source_GambitWarriors_Public_ChessField_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

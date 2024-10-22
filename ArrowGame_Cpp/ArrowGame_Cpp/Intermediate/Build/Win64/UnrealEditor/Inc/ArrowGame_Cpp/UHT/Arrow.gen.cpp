// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArrowGame_Cpp/Arrow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArrow() {}

// Begin Cross Module References
ARROWGAME_CPP_API UClass* Z_Construct_UClass_AArrow();
ARROWGAME_CPP_API UClass* Z_Construct_UClass_AArrow_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArrowGame_Cpp();
// End Cross Module References

// Begin Class AArrow
void AArrow::StaticRegisterNativesAArrow()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArrow);
UClass* Z_Construct_UClass_AArrow_NoRegister()
{
	return AArrow::StaticClass();
}
struct Z_Construct_UClass_AArrow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Arrow.h" },
		{ "ModuleRelativePath", "Arrow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRoot_MetaData[] = {
		{ "Category", "Arrow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Arrow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Arrow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Arrow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[] = {
		{ "Category", "Arrow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Arrow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[] = {
		{ "Category", "Arrow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Arrow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArrow>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArrow_Statics::NewProp_DefaultRoot = { "DefaultRoot", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArrow, DefaultRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultRoot_MetaData), NewProp_DefaultRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArrow_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArrow, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArrow_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArrow, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionBox_MetaData), NewProp_CollisionBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArrow_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArrow, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMovement_MetaData), NewProp_ProjectileMovement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArrow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArrow_Statics::NewProp_DefaultRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArrow_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArrow_Statics::NewProp_CollisionBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArrow_Statics::NewProp_ProjectileMovement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArrow_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AArrow_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ArrowGame_Cpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArrow_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AArrow_Statics::ClassParams = {
	&AArrow::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AArrow_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AArrow_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArrow_Statics::Class_MetaDataParams), Z_Construct_UClass_AArrow_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AArrow()
{
	if (!Z_Registration_Info_UClass_AArrow.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArrow.OuterSingleton, Z_Construct_UClass_AArrow_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AArrow.OuterSingleton;
}
template<> ARROWGAME_CPP_API UClass* StaticClass<AArrow>()
{
	return AArrow::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AArrow);
AArrow::~AArrow() {}
// End Class AArrow

// Begin Registration
struct Z_CompiledInDeferFile_FID_ArrowGame_Cpp_Source_ArrowGame_Cpp_Arrow_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AArrow, AArrow::StaticClass, TEXT("AArrow"), &Z_Registration_Info_UClass_AArrow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArrow), 3590021339U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArrowGame_Cpp_Source_ArrowGame_Cpp_Arrow_h_3494346836(TEXT("/Script/ArrowGame_Cpp"),
	Z_CompiledInDeferFile_FID_ArrowGame_Cpp_Source_ArrowGame_Cpp_Arrow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArrowGame_Cpp_Source_ArrowGame_Cpp_Arrow_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

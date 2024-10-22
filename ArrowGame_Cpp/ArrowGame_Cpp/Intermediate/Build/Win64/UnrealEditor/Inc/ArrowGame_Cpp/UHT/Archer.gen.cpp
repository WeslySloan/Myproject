// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArrowGame_Cpp/Archer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArcher() {}

// Begin Cross Module References
ARROWGAME_CPP_API UClass* Z_Construct_UClass_AArcher();
ARROWGAME_CPP_API UClass* Z_Construct_UClass_AArcher_NoRegister();
ARROWGAME_CPP_API UClass* Z_Construct_UClass_UPlayerAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArrowGame_Cpp();
// End Cross Module References

// Begin Class AArcher
void AArcher::StaticRegisterNativesAArcher()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArcher);
UClass* Z_Construct_UClass_AArcher_NoRegister()
{
	return AArcher::StaticClass();
}
struct Z_Construct_UClass_AArcher_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Archer.h" },
		{ "ModuleRelativePath", "Archer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "Archer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Archer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Archer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Archer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerAnimInstance_MetaData[] = {
		{ "Category", "Archer" },
		{ "ModuleRelativePath", "Archer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerAnimInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArcher>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArcher_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArcher, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArcher_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArcher, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArcher_Statics::NewProp_PlayerAnimInstance = { "PlayerAnimInstance", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArcher, PlayerAnimInstance), Z_Construct_UClass_UPlayerAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerAnimInstance_MetaData), NewProp_PlayerAnimInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArcher_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcher_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcher_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcher_Statics::NewProp_PlayerAnimInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArcher_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AArcher_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ArrowGame_Cpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArcher_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AArcher_Statics::ClassParams = {
	&AArcher::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AArcher_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AArcher_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArcher_Statics::Class_MetaDataParams), Z_Construct_UClass_AArcher_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AArcher()
{
	if (!Z_Registration_Info_UClass_AArcher.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArcher.OuterSingleton, Z_Construct_UClass_AArcher_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AArcher.OuterSingleton;
}
template<> ARROWGAME_CPP_API UClass* StaticClass<AArcher>()
{
	return AArcher::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AArcher);
AArcher::~AArcher() {}
// End Class AArcher

// Begin Registration
struct Z_CompiledInDeferFile_FID_ArrowGame_Cpp_Source_ArrowGame_Cpp_Archer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AArcher, AArcher::StaticClass, TEXT("AArcher"), &Z_Registration_Info_UClass_AArcher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArcher), 1959776769U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArrowGame_Cpp_Source_ArrowGame_Cpp_Archer_h_2541186818(TEXT("/Script/ArrowGame_Cpp"),
	Z_CompiledInDeferFile_FID_ArrowGame_Cpp_Source_ArrowGame_Cpp_Archer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArrowGame_Cpp_Source_ArrowGame_Cpp_Archer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

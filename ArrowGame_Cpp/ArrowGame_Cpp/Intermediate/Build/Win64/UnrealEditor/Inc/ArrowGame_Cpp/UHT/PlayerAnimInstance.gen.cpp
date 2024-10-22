// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArrowGame_Cpp/PlayerAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAnimInstance() {}

// Begin Cross Module References
ARROWGAME_CPP_API UClass* Z_Construct_UClass_AArcher_NoRegister();
ARROWGAME_CPP_API UClass* Z_Construct_UClass_UPlayerAnimInstance();
ARROWGAME_CPP_API UClass* Z_Construct_UClass_UPlayerAnimInstance_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ArrowGame_Cpp();
// End Cross Module References

// Begin Class UPlayerAnimInstance
void UPlayerAnimInstance::StaticRegisterNativesUPlayerAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerAnimInstance);
UClass* Z_Construct_UClass_UPlayerAnimInstance_NoRegister()
{
	return UPlayerAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UPlayerAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "PlayerAnimInstance.h" },
		{ "ModuleRelativePath", "PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShouldMove_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsFalling_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Archer_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMovement_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireMontage_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "PlayerAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static void NewProp_ShouldMove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldMove;
	static void NewProp_IsFalling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFalling;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YawOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AimRotation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Archer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterMovement;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
void Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_ShouldMove_SetBit(void* Obj)
{
	((UPlayerAnimInstance*)Obj)->ShouldMove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_ShouldMove = { "ShouldMove", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlayerAnimInstance), &Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_ShouldMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShouldMove_MetaData), NewProp_ShouldMove_MetaData) };
void Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_IsFalling_SetBit(void* Obj)
{
	((UPlayerAnimInstance*)Obj)->IsFalling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_IsFalling = { "IsFalling", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlayerAnimInstance), &Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_IsFalling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsFalling_MetaData), NewProp_IsFalling_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_YawOffset = { "YawOffset", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, YawOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawOffset_MetaData), NewProp_YawOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_AimRotation = { "AimRotation", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, AimRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimRotation_MetaData), NewProp_AimRotation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_Archer = { "Archer", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, Archer), Z_Construct_UClass_AArcher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Archer_MetaData), NewProp_Archer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_CharacterMovement = { "CharacterMovement", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, CharacterMovement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterMovement_MetaData), NewProp_CharacterMovement_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_FireMontage = { "FireMontage", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, FireMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireMontage_MetaData), NewProp_FireMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_ShouldMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_IsFalling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_YawOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_AimRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_Archer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_CharacterMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_FireMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_ArrowGame_Cpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAnimInstance_Statics::ClassParams = {
	&UPlayerAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerAnimInstance()
{
	if (!Z_Registration_Info_UClass_UPlayerAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerAnimInstance.OuterSingleton, Z_Construct_UClass_UPlayerAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerAnimInstance.OuterSingleton;
}
template<> ARROWGAME_CPP_API UClass* StaticClass<UPlayerAnimInstance>()
{
	return UPlayerAnimInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAnimInstance);
UPlayerAnimInstance::~UPlayerAnimInstance() {}
// End Class UPlayerAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_ArrowGame_Cpp_Source_ArrowGame_Cpp_PlayerAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerAnimInstance, UPlayerAnimInstance::StaticClass, TEXT("UPlayerAnimInstance"), &Z_Registration_Info_UClass_UPlayerAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerAnimInstance), 3390768164U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArrowGame_Cpp_Source_ArrowGame_Cpp_PlayerAnimInstance_h_3120839095(TEXT("/Script/ArrowGame_Cpp"),
	Z_CompiledInDeferFile_FID_ArrowGame_Cpp_Source_ArrowGame_Cpp_PlayerAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArrowGame_Cpp_Source_ArrowGame_Cpp_PlayerAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

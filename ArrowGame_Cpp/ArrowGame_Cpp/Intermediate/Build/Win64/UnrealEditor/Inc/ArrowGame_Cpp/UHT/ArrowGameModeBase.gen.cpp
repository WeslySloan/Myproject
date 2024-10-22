// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArrowGame_Cpp/ArrowGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArrowGameModeBase() {}

// Begin Cross Module References
ARROWGAME_CPP_API UClass* Z_Construct_UClass_AArrowGameModeBase();
ARROWGAME_CPP_API UClass* Z_Construct_UClass_AArrowGameModeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_ArrowGame_Cpp();
// End Cross Module References

// Begin Class AArrowGameModeBase
void AArrowGameModeBase::StaticRegisterNativesAArrowGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArrowGameModeBase);
UClass* Z_Construct_UClass_AArrowGameModeBase_NoRegister()
{
	return AArrowGameModeBase::StaticClass();
}
struct Z_Construct_UClass_AArrowGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ArrowGameModeBase.h" },
		{ "ModuleRelativePath", "ArrowGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArrowGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AArrowGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ArrowGame_Cpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArrowGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AArrowGameModeBase_Statics::ClassParams = {
	&AArrowGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArrowGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AArrowGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AArrowGameModeBase()
{
	if (!Z_Registration_Info_UClass_AArrowGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArrowGameModeBase.OuterSingleton, Z_Construct_UClass_AArrowGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AArrowGameModeBase.OuterSingleton;
}
template<> ARROWGAME_CPP_API UClass* StaticClass<AArrowGameModeBase>()
{
	return AArrowGameModeBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AArrowGameModeBase);
AArrowGameModeBase::~AArrowGameModeBase() {}
// End Class AArrowGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_ArrowGame_Cpp_Source_ArrowGame_Cpp_ArrowGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AArrowGameModeBase, AArrowGameModeBase::StaticClass, TEXT("AArrowGameModeBase"), &Z_Registration_Info_UClass_AArrowGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArrowGameModeBase), 594570684U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArrowGame_Cpp_Source_ArrowGame_Cpp_ArrowGameModeBase_h_954145428(TEXT("/Script/ArrowGame_Cpp"),
	Z_CompiledInDeferFile_FID_ArrowGame_Cpp_Source_ArrowGame_Cpp_ArrowGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArrowGame_Cpp_Source_ArrowGame_Cpp_ArrowGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

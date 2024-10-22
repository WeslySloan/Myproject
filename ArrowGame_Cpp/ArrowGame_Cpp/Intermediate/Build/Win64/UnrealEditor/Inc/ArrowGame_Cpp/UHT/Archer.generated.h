// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Archer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARROWGAME_CPP_Archer_generated_h
#error "Archer.generated.h already included, missing '#pragma once' in Archer.h"
#endif
#define ARROWGAME_CPP_Archer_generated_h

#define FID_ArrowGame_Cpp_Source_ArrowGame_Cpp_Archer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArcher(); \
	friend struct Z_Construct_UClass_AArcher_Statics; \
public: \
	DECLARE_CLASS(AArcher, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArrowGame_Cpp"), NO_API) \
	DECLARE_SERIALIZER(AArcher)


#define FID_ArrowGame_Cpp_Source_ArrowGame_Cpp_Archer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AArcher(AArcher&&); \
	AArcher(const AArcher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArcher); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArcher) \
	NO_API virtual ~AArcher();


#define FID_ArrowGame_Cpp_Source_ArrowGame_Cpp_Archer_h_9_PROLOG
#define FID_ArrowGame_Cpp_Source_ArrowGame_Cpp_Archer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ArrowGame_Cpp_Source_ArrowGame_Cpp_Archer_h_12_INCLASS_NO_PURE_DECLS \
	FID_ArrowGame_Cpp_Source_ArrowGame_Cpp_Archer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARROWGAME_CPP_API UClass* StaticClass<class AArcher>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ArrowGame_Cpp_Source_ArrowGame_Cpp_Archer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

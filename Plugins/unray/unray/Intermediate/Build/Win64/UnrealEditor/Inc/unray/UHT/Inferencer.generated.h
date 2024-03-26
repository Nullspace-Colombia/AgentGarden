// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inferencer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNRAY_Inferencer_generated_h
#error "Inferencer.generated.h already included, missing '#pragma once' in Inferencer.h"
#endif
#define UNRAY_Inferencer_generated_h

#define FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Inferencer_h_28_SPARSE_DATA
#define FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Inferencer_h_28_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Inferencer_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Inferencer_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execmakeInference);


#define FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Inferencer_h_28_ACCESSORS
#define FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Inferencer_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInferencer(); \
	friend struct Z_Construct_UClass_AInferencer_Statics; \
public: \
	DECLARE_CLASS(AInferencer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/unray"), NO_API) \
	DECLARE_SERIALIZER(AInferencer)


#define FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Inferencer_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInferencer(AInferencer&&); \
	NO_API AInferencer(const AInferencer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInferencer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInferencer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInferencer) \
	NO_API virtual ~AInferencer();


#define FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Inferencer_h_25_PROLOG
#define FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Inferencer_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Inferencer_h_28_SPARSE_DATA \
	FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Inferencer_h_28_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Inferencer_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Inferencer_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Inferencer_h_28_ACCESSORS \
	FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Inferencer_h_28_INCLASS_NO_PURE_DECLS \
	FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Inferencer_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNRAY_API UClass* StaticClass<class AInferencer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Inferencer_h


#define FOREACH_ENUM_ACTIONSPACETYPE(op) \
	op(Discrete) \
	op(MultiDiscrete) \
	op(Box) \
	op(MultiBinary) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

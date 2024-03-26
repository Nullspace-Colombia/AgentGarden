// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Connector.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNRAY_Connector_generated_h
#error "Connector.generated.h already included, missing '#pragma once' in Connector.h"
#endif
#define UNRAY_Connector_generated_h

#define FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Connector_h_14_DELEGATE \
UNRAY_API void FOnDataReception_DelegateWrapper(const FMulticastScriptDelegate& OnDataReception, TArray<uint8> const& Arr);


#define FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Connector_h_19_SPARSE_DATA
#define FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Connector_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Connector_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Connector_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartServer); \
	DECLARE_FUNCTION(execSendMultiagentsInfo); \
	DECLARE_FUNCTION(execGetAgentsInfo); \
	DECLARE_FUNCTION(execAddAgent); \
	DECLARE_FUNCTION(execSendState); \
	DECLARE_FUNCTION(execGetAction); \
	DECLARE_FUNCTION(execConduct_Connection);


#define FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Connector_h_19_ACCESSORS
#define FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Connector_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAConnector(); \
	friend struct Z_Construct_UClass_AConnector_Statics; \
public: \
	DECLARE_CLASS(AConnector, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/unray"), NO_API) \
	DECLARE_SERIALIZER(AConnector)


#define FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Connector_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AConnector(AConnector&&); \
	NO_API AConnector(const AConnector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AConnector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AConnector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AConnector) \
	NO_API virtual ~AConnector();


#define FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Connector_h_16_PROLOG
#define FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Connector_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Connector_h_19_SPARSE_DATA \
	FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Connector_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Connector_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Connector_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Connector_h_19_ACCESSORS \
	FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Connector_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Connector_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNRAY_API UClass* StaticClass<class AConnector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Connector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

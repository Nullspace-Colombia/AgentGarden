// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "unray/Classes/Inferencer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInferencer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NNE_API UClass* Z_Construct_UClass_UNNEModelData_NoRegister();
	UNRAY_API UClass* Z_Construct_UClass_AInferencer();
	UNRAY_API UClass* Z_Construct_UClass_AInferencer_NoRegister();
	UNRAY_API UEnum* Z_Construct_UEnum_unray_ActionSpaceType();
	UPackage* Z_Construct_UPackage__Script_unray();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ActionSpaceType;
	static UEnum* ActionSpaceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ActionSpaceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ActionSpaceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_unray_ActionSpaceType, (UObject*)Z_Construct_UPackage__Script_unray(), TEXT("ActionSpaceType"));
		}
		return Z_Registration_Info_UEnum_ActionSpaceType.OuterSingleton;
	}
	template<> UNRAY_API UEnum* StaticEnum<ActionSpaceType>()
	{
		return ActionSpaceType_StaticEnum();
	}
	struct Z_Construct_UEnum_unray_ActionSpaceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_unray_ActionSpaceType_Statics::Enumerators[] = {
		{ "Discrete", (int64)Discrete },
		{ "MultiDiscrete", (int64)MultiDiscrete },
		{ "Box", (int64)Box },
		{ "MultiBinary", (int64)MultiBinary },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_unray_ActionSpaceType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Box.DisplayName", "Box" },
		{ "Box.Name", "Box" },
		{ "Discrete.DisplayName", "Discrete" },
		{ "Discrete.Name", "Discrete" },
		{ "ModuleRelativePath", "Classes/Inferencer.h" },
		{ "MultiBinary.DisplayName", "MultiBinary" },
		{ "MultiBinary.Name", "MultiBinary" },
		{ "MultiDiscrete.DisplayName", "MultiDiscrete" },
		{ "MultiDiscrete.Name", "MultiDiscrete" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_unray_ActionSpaceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_unray,
		nullptr,
		"ActionSpaceType",
		"ActionSpaceType",
		Z_Construct_UEnum_unray_ActionSpaceType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_unray_ActionSpaceType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_unray_ActionSpaceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_unray_ActionSpaceType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_unray_ActionSpaceType()
	{
		if (!Z_Registration_Info_UEnum_ActionSpaceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ActionSpaceType.InnerSingleton, Z_Construct_UEnum_unray_ActionSpaceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ActionSpaceType.InnerSingleton;
	}
	DEFINE_FUNCTION(AInferencer::execmakeInference)
	{
		P_GET_TARRAY(double,Z_Param_observations);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->makeInference(Z_Param_observations);
		P_NATIVE_END;
	}
	void AInferencer::StaticRegisterNativesAInferencer()
	{
		UClass* Class = AInferencer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "makeInference", &AInferencer::execmakeInference },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInferencer_makeInference_Statics
	{
		struct Inferencer_eventmakeInference_Parms
		{
			TArray<double> observations;
			TArray<float> ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_observations_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_observations;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AInferencer_makeInference_Statics::NewProp_observations_Inner = { "observations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AInferencer_makeInference_Statics::NewProp_observations = { "observations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inferencer_eventmakeInference_Parms, observations), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AInferencer_makeInference_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AInferencer_makeInference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inferencer_eventmakeInference_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInferencer_makeInference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInferencer_makeInference_Statics::NewProp_observations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInferencer_makeInference_Statics::NewProp_observations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInferencer_makeInference_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInferencer_makeInference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInferencer_makeInference_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inference" },
		{ "ModuleRelativePath", "Classes/Inferencer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInferencer_makeInference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInferencer, nullptr, "makeInference", nullptr, nullptr, Z_Construct_UFunction_AInferencer_makeInference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInferencer_makeInference_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInferencer_makeInference_Statics::Inferencer_eventmakeInference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInferencer_makeInference_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInferencer_makeInference_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInferencer_makeInference_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AInferencer_makeInference_Statics::Inferencer_eventmakeInference_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AInferencer_makeInference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInferencer_makeInference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInferencer);
	UClass* Z_Construct_UClass_AInferencer_NoRegister()
	{
		return AInferencer::StaticClass();
	}
	struct Z_Construct_UClass_AInferencer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModelData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ModelData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_actionSpaceType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_actionSpaceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Shape;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInferencer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_unray,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInferencer_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AInferencer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInferencer_makeInference, "makeInference" }, // 2620066978
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInferencer_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInferencer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Inferencer.h" },
		{ "ModuleRelativePath", "Classes/Inferencer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInferencer_Statics::NewProp_ModelData_MetaData[] = {
		{ "Category", "Inference" },
		{ "ModuleRelativePath", "Classes/Inferencer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AInferencer_Statics::NewProp_ModelData = { "ModelData", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInferencer, ModelData), Z_Construct_UClass_UNNEModelData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInferencer_Statics::NewProp_ModelData_MetaData), Z_Construct_UClass_AInferencer_Statics::NewProp_ModelData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInferencer_Statics::NewProp_actionSpaceType_MetaData[] = {
		{ "Category", "Inference" },
		{ "ModuleRelativePath", "Classes/Inferencer.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AInferencer_Statics::NewProp_actionSpaceType = { "actionSpaceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInferencer, actionSpaceType), Z_Construct_UEnum_unray_ActionSpaceType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInferencer_Statics::NewProp_actionSpaceType_MetaData), Z_Construct_UClass_AInferencer_Statics::NewProp_actionSpaceType_MetaData) }; // 747088115
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInferencer_Statics::NewProp_Shape_MetaData[] = {
		{ "Category", "Inference" },
		{ "ModuleRelativePath", "Classes/Inferencer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AInferencer_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInferencer, Shape), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInferencer_Statics::NewProp_Shape_MetaData), Z_Construct_UClass_AInferencer_Statics::NewProp_Shape_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInferencer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInferencer_Statics::NewProp_ModelData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInferencer_Statics::NewProp_actionSpaceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInferencer_Statics::NewProp_Shape,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInferencer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInferencer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInferencer_Statics::ClassParams = {
		&AInferencer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AInferencer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AInferencer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInferencer_Statics::Class_MetaDataParams), Z_Construct_UClass_AInferencer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInferencer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AInferencer()
	{
		if (!Z_Registration_Info_UClass_AInferencer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInferencer.OuterSingleton, Z_Construct_UClass_AInferencer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInferencer.OuterSingleton;
	}
	template<> UNRAY_API UClass* StaticClass<AInferencer>()
	{
		return AInferencer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInferencer);
	AInferencer::~AInferencer() {}
	struct Z_CompiledInDeferFile_FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Inferencer_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Inferencer_h_Statics::EnumInfo[] = {
		{ ActionSpaceType_StaticEnum, TEXT("ActionSpaceType"), &Z_Registration_Info_UEnum_ActionSpaceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 747088115U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Inferencer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInferencer, AInferencer::StaticClass, TEXT("AInferencer"), &Z_Registration_Info_UClass_AInferencer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInferencer), 2311071528U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Inferencer_h_2102467366(TEXT("/Script/unray"),
		Z_CompiledInDeferFile_FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Inferencer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Inferencer_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Inferencer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Inferencer_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "unray/Classes/Connector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConnector() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UNRAY_API UClass* Z_Construct_UClass_AConnector();
	UNRAY_API UClass* Z_Construct_UClass_AConnector_NoRegister();
	UNRAY_API UFunction* Z_Construct_UDelegateFunction_unray_OnDataReception__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_unray();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_unray_OnDataReception__DelegateSignature_Statics
	{
		struct _Script_unray_eventOnDataReception_Parms
		{
			TArray<uint8> Arr;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Arr_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arr_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Arr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_unray_OnDataReception__DelegateSignature_Statics::NewProp_Arr_Inner = { "Arr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_unray_OnDataReception__DelegateSignature_Statics::NewProp_Arr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_unray_OnDataReception__DelegateSignature_Statics::NewProp_Arr = { "Arr", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_unray_eventOnDataReception_Parms, Arr), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_unray_OnDataReception__DelegateSignature_Statics::NewProp_Arr_MetaData), Z_Construct_UDelegateFunction_unray_OnDataReception__DelegateSignature_Statics::NewProp_Arr_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_unray_OnDataReception__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_unray_OnDataReception__DelegateSignature_Statics::NewProp_Arr_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_unray_OnDataReception__DelegateSignature_Statics::NewProp_Arr,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_unray_OnDataReception__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Declaring the delegates signature\n" },
		{ "ModuleRelativePath", "Classes/Connector.h" },
		{ "ToolTip", "Declaring the delegates signature" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_unray_OnDataReception__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_unray, nullptr, "OnDataReception__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_unray_OnDataReception__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_unray_OnDataReception__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_unray_OnDataReception__DelegateSignature_Statics::_Script_unray_eventOnDataReception_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_unray_OnDataReception__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_unray_OnDataReception__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_unray_OnDataReception__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_unray_OnDataReception__DelegateSignature_Statics::_Script_unray_eventOnDataReception_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_unray_OnDataReception__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_unray_OnDataReception__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDataReception_DelegateWrapper(const FMulticastScriptDelegate& OnDataReception, TArray<uint8> const& Arr)
{
	struct _Script_unray_eventOnDataReception_Parms
	{
		TArray<uint8> Arr;
	};
	_Script_unray_eventOnDataReception_Parms Parms;
	Parms.Arr=Arr;
	OnDataReception.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(AConnector::execStartServer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ipAddress);
		P_GET_PROPERTY(FIntProperty,Z_Param_port);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartServer(Z_Param_ipAddress,Z_Param_port);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AConnector::execSendMultiagentsInfo)
	{
		P_GET_TARRAY(double,Z_Param_Multiagents);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendMultiagentsInfo(Z_Param_Multiagents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AConnector::execGetAgentsInfo)
	{
		P_GET_TARRAY(double,Z_Param_A);
		P_GET_TARRAY(double,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<double>*)Z_Param__Result=P_THIS->GetAgentsInfo(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AConnector::execAddAgent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_TARRAY(float,Z_Param_Observations);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Reward);
		P_GET_UBOOL(Z_Param_Done);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<double>*)Z_Param__Result=P_THIS->AddAgent(Z_Param_ID,Z_Param_Observations,Z_Param_Reward,Z_Param_Done);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AConnector::execSendState)
	{
		P_GET_TARRAY(float,Z_Param_Observations);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Reward);
		P_GET_UBOOL(Z_Param_Done);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendState(Z_Param_Observations,Z_Param_Reward,Z_Param_Done);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AConnector::execGetAction)
	{
		P_GET_TARRAY(uint8,Z_Param_msg);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetAction(Z_Param_msg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AConnector::execConduct_Connection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Conduct_Connection();
		P_NATIVE_END;
	}
	void AConnector::StaticRegisterNativesAConnector()
	{
		UClass* Class = AConnector::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAgent", &AConnector::execAddAgent },
			{ "Conduct_Connection", &AConnector::execConduct_Connection },
			{ "GetAction", &AConnector::execGetAction },
			{ "GetAgentsInfo", &AConnector::execGetAgentsInfo },
			{ "SendMultiagentsInfo", &AConnector::execSendMultiagentsInfo },
			{ "SendState", &AConnector::execSendState },
			{ "StartServer", &AConnector::execStartServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AConnector_AddAgent_Statics
	{
		struct Connector_eventAddAgent_Parms
		{
			int32 ID;
			TArray<float> Observations;
			float Reward;
			bool Done;
			TArray<double> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Observations_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Observations;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Reward;
		static void NewProp_Done_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Done;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AConnector_AddAgent_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Connector_eventAddAgent_Parms, ID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AConnector_AddAgent_Statics::NewProp_Observations_Inner = { "Observations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AConnector_AddAgent_Statics::NewProp_Observations = { "Observations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Connector_eventAddAgent_Parms, Observations), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AConnector_AddAgent_Statics::NewProp_Reward = { "Reward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Connector_eventAddAgent_Parms, Reward), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AConnector_AddAgent_Statics::NewProp_Done_SetBit(void* Obj)
	{
		((Connector_eventAddAgent_Parms*)Obj)->Done = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AConnector_AddAgent_Statics::NewProp_Done = { "Done", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Connector_eventAddAgent_Parms), &Z_Construct_UFunction_AConnector_AddAgent_Statics::NewProp_Done_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AConnector_AddAgent_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AConnector_AddAgent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Connector_eventAddAgent_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AConnector_AddAgent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConnector_AddAgent_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConnector_AddAgent_Statics::NewProp_Observations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConnector_AddAgent_Statics::NewProp_Observations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConnector_AddAgent_Statics::NewProp_Reward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConnector_AddAgent_Statics::NewProp_Done,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConnector_AddAgent_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConnector_AddAgent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConnector_AddAgent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Socket" },
		{ "ModuleRelativePath", "Classes/Connector.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AConnector_AddAgent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AConnector, nullptr, "AddAgent", nullptr, nullptr, Z_Construct_UFunction_AConnector_AddAgent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AConnector_AddAgent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AConnector_AddAgent_Statics::Connector_eventAddAgent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AConnector_AddAgent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AConnector_AddAgent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AConnector_AddAgent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AConnector_AddAgent_Statics::Connector_eventAddAgent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AConnector_AddAgent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AConnector_AddAgent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AConnector_Conduct_Connection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConnector_Conduct_Connection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Socket" },
		{ "ModuleRelativePath", "Classes/Connector.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AConnector_Conduct_Connection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AConnector, nullptr, "Conduct_Connection", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AConnector_Conduct_Connection_Statics::Function_MetaDataParams), Z_Construct_UFunction_AConnector_Conduct_Connection_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AConnector_Conduct_Connection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AConnector_Conduct_Connection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AConnector_GetAction_Statics
	{
		struct Connector_eventGetAction_Parms
		{
			TArray<uint8> msg;
			TArray<float> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_msg_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_msg;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AConnector_GetAction_Statics::NewProp_msg_Inner = { "msg", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AConnector_GetAction_Statics::NewProp_msg = { "msg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Connector_eventGetAction_Parms, msg), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AConnector_GetAction_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AConnector_GetAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Connector_eventGetAction_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AConnector_GetAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConnector_GetAction_Statics::NewProp_msg_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConnector_GetAction_Statics::NewProp_msg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConnector_GetAction_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConnector_GetAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConnector_GetAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Socket" },
		{ "ModuleRelativePath", "Classes/Connector.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AConnector_GetAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AConnector, nullptr, "GetAction", nullptr, nullptr, Z_Construct_UFunction_AConnector_GetAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AConnector_GetAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_AConnector_GetAction_Statics::Connector_eventGetAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AConnector_GetAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AConnector_GetAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AConnector_GetAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AConnector_GetAction_Statics::Connector_eventGetAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AConnector_GetAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AConnector_GetAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AConnector_GetAgentsInfo_Statics
	{
		struct Connector_eventGetAgentsInfo_Parms
		{
			TArray<double> A;
			TArray<double> B;
			TArray<double> ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_A_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_A;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_B_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_B;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AConnector_GetAgentsInfo_Statics::NewProp_A_Inner = { "A", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AConnector_GetAgentsInfo_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Connector_eventGetAgentsInfo_Parms, A), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AConnector_GetAgentsInfo_Statics::NewProp_B_Inner = { "B", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AConnector_GetAgentsInfo_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Connector_eventGetAgentsInfo_Parms, B), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AConnector_GetAgentsInfo_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AConnector_GetAgentsInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Connector_eventGetAgentsInfo_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AConnector_GetAgentsInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConnector_GetAgentsInfo_Statics::NewProp_A_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConnector_GetAgentsInfo_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConnector_GetAgentsInfo_Statics::NewProp_B_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConnector_GetAgentsInfo_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConnector_GetAgentsInfo_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConnector_GetAgentsInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConnector_GetAgentsInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Socket" },
		{ "CommutativeAssociativeBinaryOperator", "true" },
		{ "ModuleRelativePath", "Classes/Connector.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AConnector_GetAgentsInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AConnector, nullptr, "GetAgentsInfo", nullptr, nullptr, Z_Construct_UFunction_AConnector_GetAgentsInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AConnector_GetAgentsInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AConnector_GetAgentsInfo_Statics::Connector_eventGetAgentsInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AConnector_GetAgentsInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AConnector_GetAgentsInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AConnector_GetAgentsInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AConnector_GetAgentsInfo_Statics::Connector_eventGetAgentsInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AConnector_GetAgentsInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AConnector_GetAgentsInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AConnector_SendMultiagentsInfo_Statics
	{
		struct Connector_eventSendMultiagentsInfo_Parms
		{
			TArray<double> Multiagents;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Multiagents_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Multiagents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AConnector_SendMultiagentsInfo_Statics::NewProp_Multiagents_Inner = { "Multiagents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AConnector_SendMultiagentsInfo_Statics::NewProp_Multiagents = { "Multiagents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Connector_eventSendMultiagentsInfo_Parms, Multiagents), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AConnector_SendMultiagentsInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConnector_SendMultiagentsInfo_Statics::NewProp_Multiagents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConnector_SendMultiagentsInfo_Statics::NewProp_Multiagents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConnector_SendMultiagentsInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Socket" },
		{ "ModuleRelativePath", "Classes/Connector.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AConnector_SendMultiagentsInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AConnector, nullptr, "SendMultiagentsInfo", nullptr, nullptr, Z_Construct_UFunction_AConnector_SendMultiagentsInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AConnector_SendMultiagentsInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AConnector_SendMultiagentsInfo_Statics::Connector_eventSendMultiagentsInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AConnector_SendMultiagentsInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AConnector_SendMultiagentsInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AConnector_SendMultiagentsInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AConnector_SendMultiagentsInfo_Statics::Connector_eventSendMultiagentsInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AConnector_SendMultiagentsInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AConnector_SendMultiagentsInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AConnector_SendState_Statics
	{
		struct Connector_eventSendState_Parms
		{
			TArray<float> Observations;
			float Reward;
			bool Done;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Observations_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Observations;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Reward;
		static void NewProp_Done_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Done;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AConnector_SendState_Statics::NewProp_Observations_Inner = { "Observations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AConnector_SendState_Statics::NewProp_Observations = { "Observations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Connector_eventSendState_Parms, Observations), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AConnector_SendState_Statics::NewProp_Reward = { "Reward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Connector_eventSendState_Parms, Reward), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AConnector_SendState_Statics::NewProp_Done_SetBit(void* Obj)
	{
		((Connector_eventSendState_Parms*)Obj)->Done = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AConnector_SendState_Statics::NewProp_Done = { "Done", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Connector_eventSendState_Parms), &Z_Construct_UFunction_AConnector_SendState_Statics::NewProp_Done_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AConnector_SendState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConnector_SendState_Statics::NewProp_Observations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConnector_SendState_Statics::NewProp_Observations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConnector_SendState_Statics::NewProp_Reward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConnector_SendState_Statics::NewProp_Done,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConnector_SendState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Socket" },
		{ "ModuleRelativePath", "Classes/Connector.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AConnector_SendState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AConnector, nullptr, "SendState", nullptr, nullptr, Z_Construct_UFunction_AConnector_SendState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AConnector_SendState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AConnector_SendState_Statics::Connector_eventSendState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AConnector_SendState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AConnector_SendState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AConnector_SendState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AConnector_SendState_Statics::Connector_eventSendState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AConnector_SendState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AConnector_SendState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AConnector_StartServer_Statics
	{
		struct Connector_eventStartServer_Parms
		{
			FString ipAddress;
			int32 port;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ipAddress;
		static const UECodeGen_Private::FIntPropertyParams NewProp_port;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AConnector_StartServer_Statics::NewProp_ipAddress = { "ipAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Connector_eventStartServer_Parms, ipAddress), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AConnector_StartServer_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Connector_eventStartServer_Parms, port), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AConnector_StartServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConnector_StartServer_Statics::NewProp_ipAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConnector_StartServer_Statics::NewProp_port,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConnector_StartServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Socket" },
		{ "ModuleRelativePath", "Classes/Connector.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AConnector_StartServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AConnector, nullptr, "StartServer", nullptr, nullptr, Z_Construct_UFunction_AConnector_StartServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AConnector_StartServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AConnector_StartServer_Statics::Connector_eventStartServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AConnector_StartServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AConnector_StartServer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AConnector_StartServer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AConnector_StartServer_Statics::Connector_eventStartServer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AConnector_StartServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AConnector_StartServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AConnector);
	UClass* Z_Construct_UClass_AConnector_NoRegister()
	{
		return AConnector::StaticClass();
	}
	struct Z_Construct_UClass_AConnector_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsConnectionOpen_MetaData[];
#endif
		static void NewProp_IsConnectionOpen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsConnectionOpen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_connected_MetaData[];
#endif
		static void NewProp_connected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_connected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDataReceptionDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDataReceptionDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConnector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_unray,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AConnector_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AConnector_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AConnector_AddAgent, "AddAgent" }, // 2067895947
		{ &Z_Construct_UFunction_AConnector_Conduct_Connection, "Conduct_Connection" }, // 1667868958
		{ &Z_Construct_UFunction_AConnector_GetAction, "GetAction" }, // 1816078372
		{ &Z_Construct_UFunction_AConnector_GetAgentsInfo, "GetAgentsInfo" }, // 1138661315
		{ &Z_Construct_UFunction_AConnector_SendMultiagentsInfo, "SendMultiagentsInfo" }, // 323767229
		{ &Z_Construct_UFunction_AConnector_SendState, "SendState" }, // 1685035383
		{ &Z_Construct_UFunction_AConnector_StartServer, "StartServer" }, // 3834605095
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AConnector_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConnector_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Connector.h" },
		{ "ModuleRelativePath", "Classes/Connector.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConnector_Statics::NewProp_IsConnectionOpen_MetaData[] = {
		{ "Category", "Socket" },
		{ "ModuleRelativePath", "Classes/Connector.h" },
	};
#endif
	void Z_Construct_UClass_AConnector_Statics::NewProp_IsConnectionOpen_SetBit(void* Obj)
	{
		((AConnector*)Obj)->IsConnectionOpen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AConnector_Statics::NewProp_IsConnectionOpen = { "IsConnectionOpen", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AConnector), &Z_Construct_UClass_AConnector_Statics::NewProp_IsConnectionOpen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AConnector_Statics::NewProp_IsConnectionOpen_MetaData), Z_Construct_UClass_AConnector_Statics::NewProp_IsConnectionOpen_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConnector_Statics::NewProp_connected_MetaData[] = {
		{ "Category", "Socket" },
		{ "ModuleRelativePath", "Classes/Connector.h" },
	};
#endif
	void Z_Construct_UClass_AConnector_Statics::NewProp_connected_SetBit(void* Obj)
	{
		((AConnector*)Obj)->connected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AConnector_Statics::NewProp_connected = { "connected", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AConnector), &Z_Construct_UClass_AConnector_Statics::NewProp_connected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AConnector_Statics::NewProp_connected_MetaData), Z_Construct_UClass_AConnector_Statics::NewProp_connected_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConnector_Statics::NewProp_OnDataReceptionDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Connector.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AConnector_Statics::NewProp_OnDataReceptionDelegate = { "OnDataReceptionDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AConnector, OnDataReceptionDelegate), Z_Construct_UDelegateFunction_unray_OnDataReception__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AConnector_Statics::NewProp_OnDataReceptionDelegate_MetaData), Z_Construct_UClass_AConnector_Statics::NewProp_OnDataReceptionDelegate_MetaData) }; // 692653579
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AConnector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConnector_Statics::NewProp_IsConnectionOpen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConnector_Statics::NewProp_connected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConnector_Statics::NewProp_OnDataReceptionDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConnector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConnector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AConnector_Statics::ClassParams = {
		&AConnector::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AConnector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AConnector_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AConnector_Statics::Class_MetaDataParams), Z_Construct_UClass_AConnector_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AConnector_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AConnector()
	{
		if (!Z_Registration_Info_UClass_AConnector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AConnector.OuterSingleton, Z_Construct_UClass_AConnector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AConnector.OuterSingleton;
	}
	template<> UNRAY_API UClass* StaticClass<AConnector>()
	{
		return AConnector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConnector);
	AConnector::~AConnector() {}
	struct Z_CompiledInDeferFile_FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Connector_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Connector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AConnector, AConnector::StaticClass, TEXT("AConnector"), &Z_Registration_Info_UClass_AConnector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AConnector), 3157061039U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Connector_h_753406466(TEXT("/Script/unray"),
		Z_CompiledInDeferFile_FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Connector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Valentina_Documents_1_Universidad_AI_unray_unray_HostProject_Plugins_unray_Source_unray_Classes_Connector_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

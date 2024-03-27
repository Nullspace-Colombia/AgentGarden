// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeunray_init() {}
	UNRAY_API UFunction* Z_Construct_UDelegateFunction_unray_OnDataReception__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_unray;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_unray()
	{
		if (!Z_Registration_Info_UPackage__Script_unray.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_unray_OnDataReception__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/unray",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x6911C076,
				0xD174E9CE,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_unray.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_unray.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_unray(Z_Construct_UPackage__Script_unray, TEXT("/Script/unray"), Z_Registration_Info_UPackage__Script_unray, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x6911C076, 0xD174E9CE));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TYP_13_01_24/TYP_13_01_24GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTYP_13_01_24GameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TYP_13_01_24_API UClass* Z_Construct_UClass_ATYP_13_01_24GameMode();
	TYP_13_01_24_API UClass* Z_Construct_UClass_ATYP_13_01_24GameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TYP_13_01_24();
// End Cross Module References
	void ATYP_13_01_24GameMode::StaticRegisterNativesATYP_13_01_24GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATYP_13_01_24GameMode);
	UClass* Z_Construct_UClass_ATYP_13_01_24GameMode_NoRegister()
	{
		return ATYP_13_01_24GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATYP_13_01_24GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATYP_13_01_24GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TYP_13_01_24,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATYP_13_01_24GameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATYP_13_01_24GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TYP_13_01_24GameMode.h" },
		{ "ModuleRelativePath", "TYP_13_01_24GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATYP_13_01_24GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATYP_13_01_24GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATYP_13_01_24GameMode_Statics::ClassParams = {
		&ATYP_13_01_24GameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATYP_13_01_24GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATYP_13_01_24GameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATYP_13_01_24GameMode()
	{
		if (!Z_Registration_Info_UClass_ATYP_13_01_24GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATYP_13_01_24GameMode.OuterSingleton, Z_Construct_UClass_ATYP_13_01_24GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATYP_13_01_24GameMode.OuterSingleton;
	}
	template<> TYP_13_01_24_API UClass* StaticClass<ATYP_13_01_24GameMode>()
	{
		return ATYP_13_01_24GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATYP_13_01_24GameMode);
	ATYP_13_01_24GameMode::~ATYP_13_01_24GameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_TYP_130124_TYP_13_01_24_Source_TYP_13_01_24_TYP_13_01_24GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_TYP_130124_TYP_13_01_24_Source_TYP_13_01_24_TYP_13_01_24GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATYP_13_01_24GameMode, ATYP_13_01_24GameMode::StaticClass, TEXT("ATYP_13_01_24GameMode"), &Z_Registration_Info_UClass_ATYP_13_01_24GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATYP_13_01_24GameMode), 1084056488U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_TYP_130124_TYP_13_01_24_Source_TYP_13_01_24_TYP_13_01_24GameMode_h_1494186848(TEXT("/Script/TYP_13_01_24"),
		Z_CompiledInDeferFile_FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_TYP_130124_TYP_13_01_24_Source_TYP_13_01_24_TYP_13_01_24GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_TYP_130124_TYP_13_01_24_Source_TYP_13_01_24_TYP_13_01_24GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

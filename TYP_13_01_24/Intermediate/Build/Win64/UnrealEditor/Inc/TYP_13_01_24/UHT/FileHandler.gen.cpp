// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TYP_13_01_24/FileHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileHandler() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	TYP_13_01_24_API UClass* Z_Construct_UClass_UFileHandler();
	TYP_13_01_24_API UClass* Z_Construct_UClass_UFileHandler_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TYP_13_01_24();
// End Cross Module References
	DEFINE_FUNCTION(UFileHandler::execWriteValues)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value1);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value2);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value3);
		P_GET_UBOOL(Z_Param_Append);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileHandler::WriteValues(Z_Param_Filename,Z_Param_Value1,Z_Param_Value2,Z_Param_Value3,Z_Param_Append);
		P_NATIVE_END;
	}
	void UFileHandler::StaticRegisterNativesUFileHandler()
	{
		UClass* Class = UFileHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WriteValues", &UFileHandler::execWriteValues },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFileHandler_WriteValues_Statics
	{
		struct FileHandler_eventWriteValues_Parms
		{
			FString Filename;
			FString Value1;
			FString Value2;
			FString Value3;
			bool Append;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value1_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value2_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value3_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value3;
		static void NewProp_Append_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Append;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHandler_WriteValues_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHandler_WriteValues_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileHandler_eventWriteValues_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHandler_WriteValues_Statics::NewProp_Filename_MetaData), Z_Construct_UFunction_UFileHandler_WriteValues_Statics::NewProp_Filename_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHandler_WriteValues_Statics::NewProp_Value1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHandler_WriteValues_Statics::NewProp_Value1 = { "Value1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileHandler_eventWriteValues_Parms, Value1), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHandler_WriteValues_Statics::NewProp_Value1_MetaData), Z_Construct_UFunction_UFileHandler_WriteValues_Statics::NewProp_Value1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHandler_WriteValues_Statics::NewProp_Value2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHandler_WriteValues_Statics::NewProp_Value2 = { "Value2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileHandler_eventWriteValues_Parms, Value2), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHandler_WriteValues_Statics::NewProp_Value2_MetaData), Z_Construct_UFunction_UFileHandler_WriteValues_Statics::NewProp_Value2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHandler_WriteValues_Statics::NewProp_Value3_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileHandler_WriteValues_Statics::NewProp_Value3 = { "Value3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileHandler_eventWriteValues_Parms, Value3), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHandler_WriteValues_Statics::NewProp_Value3_MetaData), Z_Construct_UFunction_UFileHandler_WriteValues_Statics::NewProp_Value3_MetaData) };
	void Z_Construct_UFunction_UFileHandler_WriteValues_Statics::NewProp_Append_SetBit(void* Obj)
	{
		((FileHandler_eventWriteValues_Parms*)Obj)->Append = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileHandler_WriteValues_Statics::NewProp_Append = { "Append", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileHandler_eventWriteValues_Parms), &Z_Construct_UFunction_UFileHandler_WriteValues_Statics::NewProp_Append_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileHandler_WriteValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHandler_WriteValues_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHandler_WriteValues_Statics::NewProp_Value1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHandler_WriteValues_Statics::NewProp_Value2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHandler_WriteValues_Statics::NewProp_Value3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileHandler_WriteValues_Statics::NewProp_Append,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileHandler_WriteValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "File Handling" },
		{ "CPP_Default_Append", "false" },
		{ "ModuleRelativePath", "FileHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileHandler_WriteValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileHandler, nullptr, "WriteValues", nullptr, nullptr, Z_Construct_UFunction_UFileHandler_WriteValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHandler_WriteValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileHandler_WriteValues_Statics::FileHandler_eventWriteValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHandler_WriteValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileHandler_WriteValues_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileHandler_WriteValues_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFileHandler_WriteValues_Statics::FileHandler_eventWriteValues_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFileHandler_WriteValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileHandler_WriteValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFileHandler);
	UClass* Z_Construct_UClass_UFileHandler_NoRegister()
	{
		return UFileHandler::StaticClass();
	}
	struct Z_Construct_UClass_UFileHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFileHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TYP_13_01_24,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFileHandler_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UFileHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFileHandler_WriteValues, "WriteValues" }, // 277933655
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFileHandler_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FileHandler.h" },
		{ "ModuleRelativePath", "FileHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFileHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFileHandler_Statics::ClassParams = {
		&UFileHandler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFileHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_UFileHandler_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UFileHandler()
	{
		if (!Z_Registration_Info_UClass_UFileHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFileHandler.OuterSingleton, Z_Construct_UClass_UFileHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFileHandler.OuterSingleton;
	}
	template<> TYP_13_01_24_API UClass* StaticClass<UFileHandler>()
	{
		return UFileHandler::StaticClass();
	}
	UFileHandler::UFileHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFileHandler);
	UFileHandler::~UFileHandler() {}
	struct Z_CompiledInDeferFile_FID_TYP_13_01_24_Source_TYP_13_01_24_FileHandler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TYP_13_01_24_Source_TYP_13_01_24_FileHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFileHandler, UFileHandler::StaticClass, TEXT("UFileHandler"), &Z_Registration_Info_UClass_UFileHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFileHandler), 747387874U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TYP_13_01_24_Source_TYP_13_01_24_FileHandler_h_2878620820(TEXT("/Script/TYP_13_01_24"),
		Z_CompiledInDeferFile_FID_TYP_13_01_24_Source_TYP_13_01_24_FileHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TYP_13_01_24_Source_TYP_13_01_24_FileHandler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

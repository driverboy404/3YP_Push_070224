// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TYP_13_01_24/TYP_13_01_24Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTYP_13_01_24Character() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	TYP_13_01_24_API UClass* Z_Construct_UClass_ATYP_13_01_24Character();
	TYP_13_01_24_API UClass* Z_Construct_UClass_ATYP_13_01_24Character_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TYP_13_01_24();
// End Cross Module References
	DEFINE_FUNCTION(ATYP_13_01_24Character::execFinishReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishReload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATYP_13_01_24Character::execPerformReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformReload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATYP_13_01_24Character::execReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATYP_13_01_24Character::execGetAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAmmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATYP_13_01_24Character::execGetHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATYP_13_01_24Character::execTakeDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamage(Z_Param_DamageAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATYP_13_01_24Character::execGetHasRifle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHasRifle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATYP_13_01_24Character::execSetHasRifle)
	{
		P_GET_UBOOL(Z_Param_bNewHasRifle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHasRifle(Z_Param_bNewHasRifle);
		P_NATIVE_END;
	}
	void ATYP_13_01_24Character::StaticRegisterNativesATYP_13_01_24Character()
	{
		UClass* Class = ATYP_13_01_24Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishReload", &ATYP_13_01_24Character::execFinishReload },
			{ "GetAmmo", &ATYP_13_01_24Character::execGetAmmo },
			{ "GetHasRifle", &ATYP_13_01_24Character::execGetHasRifle },
			{ "GetHealth", &ATYP_13_01_24Character::execGetHealth },
			{ "PerformReload", &ATYP_13_01_24Character::execPerformReload },
			{ "Reload", &ATYP_13_01_24Character::execReload },
			{ "SetHasRifle", &ATYP_13_01_24Character::execSetHasRifle },
			{ "TakeDamage", &ATYP_13_01_24Character::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATYP_13_01_24Character_FinishReload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATYP_13_01_24Character_FinishReload_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "TYP_13_01_24Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATYP_13_01_24Character_FinishReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATYP_13_01_24Character, nullptr, "FinishReload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATYP_13_01_24Character_FinishReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATYP_13_01_24Character_FinishReload_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATYP_13_01_24Character_FinishReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATYP_13_01_24Character_FinishReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATYP_13_01_24Character_GetAmmo_Statics
	{
		struct TYP_13_01_24Character_eventGetAmmo_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATYP_13_01_24Character_GetAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TYP_13_01_24Character_eventGetAmmo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATYP_13_01_24Character_GetAmmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATYP_13_01_24Character_GetAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATYP_13_01_24Character_GetAmmo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Function to get Ammo\n" },
#endif
		{ "ModuleRelativePath", "TYP_13_01_24Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to get Ammo" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATYP_13_01_24Character_GetAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATYP_13_01_24Character, nullptr, "GetAmmo", nullptr, nullptr, Z_Construct_UFunction_ATYP_13_01_24Character_GetAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATYP_13_01_24Character_GetAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATYP_13_01_24Character_GetAmmo_Statics::TYP_13_01_24Character_eventGetAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATYP_13_01_24Character_GetAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATYP_13_01_24Character_GetAmmo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATYP_13_01_24Character_GetAmmo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATYP_13_01_24Character_GetAmmo_Statics::TYP_13_01_24Character_eventGetAmmo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATYP_13_01_24Character_GetAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATYP_13_01_24Character_GetAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATYP_13_01_24Character_GetHasRifle_Statics
	{
		struct TYP_13_01_24Character_eventGetHasRifle_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATYP_13_01_24Character_GetHasRifle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TYP_13_01_24Character_eventGetHasRifle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATYP_13_01_24Character_GetHasRifle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TYP_13_01_24Character_eventGetHasRifle_Parms), &Z_Construct_UFunction_ATYP_13_01_24Character_GetHasRifle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATYP_13_01_24Character_GetHasRifle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATYP_13_01_24Character_GetHasRifle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATYP_13_01_24Character_GetHasRifle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Getter for the bool */" },
#endif
		{ "ModuleRelativePath", "TYP_13_01_24Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter for the bool" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATYP_13_01_24Character_GetHasRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATYP_13_01_24Character, nullptr, "GetHasRifle", nullptr, nullptr, Z_Construct_UFunction_ATYP_13_01_24Character_GetHasRifle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATYP_13_01_24Character_GetHasRifle_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATYP_13_01_24Character_GetHasRifle_Statics::TYP_13_01_24Character_eventGetHasRifle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATYP_13_01_24Character_GetHasRifle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATYP_13_01_24Character_GetHasRifle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATYP_13_01_24Character_GetHasRifle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATYP_13_01_24Character_GetHasRifle_Statics::TYP_13_01_24Character_eventGetHasRifle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATYP_13_01_24Character_GetHasRifle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATYP_13_01_24Character_GetHasRifle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATYP_13_01_24Character_GetHealth_Statics
	{
		struct TYP_13_01_24Character_eventGetHealth_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATYP_13_01_24Character_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TYP_13_01_24Character_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATYP_13_01_24Character_GetHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATYP_13_01_24Character_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATYP_13_01_24Character_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to get current health\n" },
#endif
		{ "ModuleRelativePath", "TYP_13_01_24Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to get current health" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATYP_13_01_24Character_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATYP_13_01_24Character, nullptr, "GetHealth", nullptr, nullptr, Z_Construct_UFunction_ATYP_13_01_24Character_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATYP_13_01_24Character_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATYP_13_01_24Character_GetHealth_Statics::TYP_13_01_24Character_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATYP_13_01_24Character_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATYP_13_01_24Character_GetHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATYP_13_01_24Character_GetHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATYP_13_01_24Character_GetHealth_Statics::TYP_13_01_24Character_eventGetHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATYP_13_01_24Character_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATYP_13_01_24Character_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATYP_13_01_24Character_PerformReload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATYP_13_01_24Character_PerformReload_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "TYP_13_01_24Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATYP_13_01_24Character_PerformReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATYP_13_01_24Character, nullptr, "PerformReload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATYP_13_01_24Character_PerformReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATYP_13_01_24Character_PerformReload_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATYP_13_01_24Character_PerformReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATYP_13_01_24Character_PerformReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATYP_13_01_24Character_Reload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATYP_13_01_24Character_Reload_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Functions to handle reload input\n" },
#endif
		{ "ModuleRelativePath", "TYP_13_01_24Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Functions to handle reload input" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATYP_13_01_24Character_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATYP_13_01_24Character, nullptr, "Reload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATYP_13_01_24Character_Reload_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATYP_13_01_24Character_Reload_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATYP_13_01_24Character_Reload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATYP_13_01_24Character_Reload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATYP_13_01_24Character_SetHasRifle_Statics
	{
		struct TYP_13_01_24Character_eventSetHasRifle_Parms
		{
			bool bNewHasRifle;
		};
		static void NewProp_bNewHasRifle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewHasRifle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATYP_13_01_24Character_SetHasRifle_Statics::NewProp_bNewHasRifle_SetBit(void* Obj)
	{
		((TYP_13_01_24Character_eventSetHasRifle_Parms*)Obj)->bNewHasRifle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATYP_13_01_24Character_SetHasRifle_Statics::NewProp_bNewHasRifle = { "bNewHasRifle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TYP_13_01_24Character_eventSetHasRifle_Parms), &Z_Construct_UFunction_ATYP_13_01_24Character_SetHasRifle_Statics::NewProp_bNewHasRifle_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATYP_13_01_24Character_SetHasRifle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATYP_13_01_24Character_SetHasRifle_Statics::NewProp_bNewHasRifle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATYP_13_01_24Character_SetHasRifle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Setter to set the bool */" },
#endif
		{ "ModuleRelativePath", "TYP_13_01_24Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Setter to set the bool" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATYP_13_01_24Character_SetHasRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATYP_13_01_24Character, nullptr, "SetHasRifle", nullptr, nullptr, Z_Construct_UFunction_ATYP_13_01_24Character_SetHasRifle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATYP_13_01_24Character_SetHasRifle_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATYP_13_01_24Character_SetHasRifle_Statics::TYP_13_01_24Character_eventSetHasRifle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATYP_13_01_24Character_SetHasRifle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATYP_13_01_24Character_SetHasRifle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATYP_13_01_24Character_SetHasRifle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATYP_13_01_24Character_SetHasRifle_Statics::TYP_13_01_24Character_eventSetHasRifle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATYP_13_01_24Character_SetHasRifle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATYP_13_01_24Character_SetHasRifle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATYP_13_01_24Character_TakeDamage_Statics
	{
		struct TYP_13_01_24Character_eventTakeDamage_Parms
		{
			float DamageAmount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATYP_13_01_24Character_TakeDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TYP_13_01_24Character_eventTakeDamage_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATYP_13_01_24Character_TakeDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATYP_13_01_24Character_TakeDamage_Statics::NewProp_DamageAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATYP_13_01_24Character_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to apply damage to the character\n" },
#endif
		{ "ModuleRelativePath", "TYP_13_01_24Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to apply damage to the character" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATYP_13_01_24Character_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATYP_13_01_24Character, nullptr, "TakeDamage", nullptr, nullptr, Z_Construct_UFunction_ATYP_13_01_24Character_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATYP_13_01_24Character_TakeDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATYP_13_01_24Character_TakeDamage_Statics::TYP_13_01_24Character_eventTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATYP_13_01_24Character_TakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATYP_13_01_24Character_TakeDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATYP_13_01_24Character_TakeDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATYP_13_01_24Character_TakeDamage_Statics::TYP_13_01_24Character_eventTakeDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATYP_13_01_24Character_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATYP_13_01_24Character_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATYP_13_01_24Character);
	UClass* Z_Construct_UClass_ATYP_13_01_24Character_NoRegister()
	{
		return ATYP_13_01_24Character::StaticClass();
	}
	struct Z_Construct_UClass_ATYP_13_01_24Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasRifle_MetaData[];
#endif
		static void NewProp_bHasRifle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRifle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ammo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Ammo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReloadTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATYP_13_01_24Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TYP_13_01_24,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATYP_13_01_24Character_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATYP_13_01_24Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATYP_13_01_24Character_FinishReload, "FinishReload" }, // 1997686508
		{ &Z_Construct_UFunction_ATYP_13_01_24Character_GetAmmo, "GetAmmo" }, // 2703864629
		{ &Z_Construct_UFunction_ATYP_13_01_24Character_GetHasRifle, "GetHasRifle" }, // 839923493
		{ &Z_Construct_UFunction_ATYP_13_01_24Character_GetHealth, "GetHealth" }, // 2443267192
		{ &Z_Construct_UFunction_ATYP_13_01_24Character_PerformReload, "PerformReload" }, // 1534966023
		{ &Z_Construct_UFunction_ATYP_13_01_24Character_Reload, "Reload" }, // 3438340244
		{ &Z_Construct_UFunction_ATYP_13_01_24Character_SetHasRifle, "SetHasRifle" }, // 3580820491
		{ &Z_Construct_UFunction_ATYP_13_01_24Character_TakeDamage, "TakeDamage" }, // 110356484
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATYP_13_01_24Character_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATYP_13_01_24Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TYP_13_01_24Character.h" },
		{ "ModuleRelativePath", "TYP_13_01_24Character.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TYP_13_01_24Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATYP_13_01_24Character, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_Mesh1P_MetaData), Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_Mesh1P_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TYP_13_01_24Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATYP_13_01_24Character, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_FirstPersonCameraComponent_MetaData), Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_FirstPersonCameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "TYP_13_01_24Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATYP_13_01_24Character, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "TYP_13_01_24Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATYP_13_01_24Character, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_JumpAction_MetaData), Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_JumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "TYP_13_01_24Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATYP_13_01_24Character, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_ReloadAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "TYP_13_01_24Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_ReloadAction = { "ReloadAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATYP_13_01_24Character, ReloadAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_ReloadAction_MetaData), Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_ReloadAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "TYP_13_01_24Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATYP_13_01_24Character, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_bHasRifle_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Bool for AnimBP to switch to another animation set */" },
#endif
		{ "ModuleRelativePath", "TYP_13_01_24Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bool for AnimBP to switch to another animation set" },
#endif
	};
#endif
	void Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_bHasRifle_SetBit(void* Obj)
	{
		((ATYP_13_01_24Character*)Obj)->bHasRifle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_bHasRifle = { "bHasRifle", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATYP_13_01_24Character), &Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_bHasRifle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_bHasRifle_MetaData), Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_bHasRifle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_Health_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Health variable\n" },
#endif
		{ "ModuleRelativePath", "TYP_13_01_24Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health variable" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATYP_13_01_24Character, Health), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_Health_MetaData), Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_Health_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_Ammo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Health variable\n" },
#endif
		{ "ModuleRelativePath", "TYP_13_01_24Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health variable" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_Ammo = { "Ammo", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATYP_13_01_24Character, Ammo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_Ammo_MetaData), Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_Ammo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_ReloadTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "TYP_13_01_24Character.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_ReloadTime = { "ReloadTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATYP_13_01_24Character, ReloadTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_ReloadTime_MetaData), Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_ReloadTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATYP_13_01_24Character_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_Mesh1P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_ReloadAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_bHasRifle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_Ammo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATYP_13_01_24Character_Statics::NewProp_ReloadTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATYP_13_01_24Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATYP_13_01_24Character>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATYP_13_01_24Character_Statics::ClassParams = {
		&ATYP_13_01_24Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATYP_13_01_24Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATYP_13_01_24Character_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATYP_13_01_24Character_Statics::Class_MetaDataParams), Z_Construct_UClass_ATYP_13_01_24Character_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATYP_13_01_24Character_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATYP_13_01_24Character()
	{
		if (!Z_Registration_Info_UClass_ATYP_13_01_24Character.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATYP_13_01_24Character.OuterSingleton, Z_Construct_UClass_ATYP_13_01_24Character_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATYP_13_01_24Character.OuterSingleton;
	}
	template<> TYP_13_01_24_API UClass* StaticClass<ATYP_13_01_24Character>()
	{
		return ATYP_13_01_24Character::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATYP_13_01_24Character);
	ATYP_13_01_24Character::~ATYP_13_01_24Character() {}
	struct Z_CompiledInDeferFile_FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_TYP_130124_TYP_13_01_24_Source_TYP_13_01_24_TYP_13_01_24Character_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_TYP_130124_TYP_13_01_24_Source_TYP_13_01_24_TYP_13_01_24Character_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATYP_13_01_24Character, ATYP_13_01_24Character::StaticClass, TEXT("ATYP_13_01_24Character"), &Z_Registration_Info_UClass_ATYP_13_01_24Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATYP_13_01_24Character), 1821080168U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_TYP_130124_TYP_13_01_24_Source_TYP_13_01_24_TYP_13_01_24Character_h_4237846717(TEXT("/Script/TYP_13_01_24"),
		Z_CompiledInDeferFile_FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_TYP_130124_TYP_13_01_24_Source_TYP_13_01_24_TYP_13_01_24Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_TYP_130124_TYP_13_01_24_Source_TYP_13_01_24_TYP_13_01_24Character_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

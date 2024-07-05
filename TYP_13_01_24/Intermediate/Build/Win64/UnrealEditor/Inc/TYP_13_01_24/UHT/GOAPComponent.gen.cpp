// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TYP_13_01_24/GOAPComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGOAPComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TYP_13_01_24_API UClass* Z_Construct_UClass_UGOAPComponent();
	TYP_13_01_24_API UClass* Z_Construct_UClass_UGOAPComponent_NoRegister();
	TYP_13_01_24_API UScriptStruct* Z_Construct_UScriptStruct_FAction();
	TYP_13_01_24_API UScriptStruct* Z_Construct_UScriptStruct_FGoal();
	TYP_13_01_24_API UScriptStruct* Z_Construct_UScriptStruct_FWorldState();
	UPackage* Z_Construct_UPackage__Script_TYP_13_01_24();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldState;
class UScriptStruct* FWorldState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldState, (UObject*)Z_Construct_UPackage__Script_TYP_13_01_24(), TEXT("WorldState"));
	}
	return Z_Registration_Info_UScriptStruct_WorldState.OuterSingleton;
}
template<> TYP_13_01_24_API UScriptStruct* StaticStruct<FWorldState>()
{
	return FWorldState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWorldState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBoolPropertyParams NewProp_States_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_States_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_States_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_States;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GOAPComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldState>();
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWorldState_Statics::NewProp_States_ValueProp = { "States", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWorldState_Statics::NewProp_States_Key_KeyProp = { "States_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldState_Statics::NewProp_States_MetaData[] = {
		{ "Category", "GOAP" },
		{ "ModuleRelativePath", "GOAPComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWorldState_Statics::NewProp_States = { "States", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldState, States), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldState_Statics::NewProp_States_MetaData), Z_Construct_UScriptStruct_FWorldState_Statics::NewProp_States_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldState_Statics::NewProp_States_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldState_Statics::NewProp_States_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldState_Statics::NewProp_States,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TYP_13_01_24,
		nullptr,
		&NewStructOps,
		"WorldState",
		Z_Construct_UScriptStruct_FWorldState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldState_Statics::PropPointers),
		sizeof(FWorldState),
		alignof(FWorldState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWorldState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FWorldState()
	{
		if (!Z_Registration_Info_UScriptStruct_WorldState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldState.InnerSingleton, Z_Construct_UScriptStruct_FWorldState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorldState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Action;
class UScriptStruct* FAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Action.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Action.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAction, (UObject*)Z_Construct_UPackage__Script_TYP_13_01_24(), TEXT("Action"));
	}
	return Z_Registration_Info_UScriptStruct_Action.OuterSingleton;
}
template<> TYP_13_01_24_API UScriptStruct* StaticStruct<FAction>()
{
	return FAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Preconditions_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Preconditions_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Preconditions_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Preconditions;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Effects_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Effects_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effects_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Effects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Cost;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GOAPComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAction_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "GOAP" },
		{ "ModuleRelativePath", "GOAPComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAction_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAction, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAction_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FAction_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAction_Statics::NewProp_Preconditions_ValueProp = { "Preconditions", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAction_Statics::NewProp_Preconditions_Key_KeyProp = { "Preconditions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAction_Statics::NewProp_Preconditions_MetaData[] = {
		{ "Category", "GOAP" },
		{ "ModuleRelativePath", "GOAPComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAction_Statics::NewProp_Preconditions = { "Preconditions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAction, Preconditions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAction_Statics::NewProp_Preconditions_MetaData), Z_Construct_UScriptStruct_FAction_Statics::NewProp_Preconditions_MetaData) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAction_Statics::NewProp_Effects_ValueProp = { "Effects", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAction_Statics::NewProp_Effects_Key_KeyProp = { "Effects_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAction_Statics::NewProp_Effects_MetaData[] = {
		{ "Category", "GOAP" },
		{ "ModuleRelativePath", "GOAPComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAction_Statics::NewProp_Effects = { "Effects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAction, Effects), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAction_Statics::NewProp_Effects_MetaData), Z_Construct_UScriptStruct_FAction_Statics::NewProp_Effects_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAction_Statics::NewProp_Cost_MetaData[] = {
		{ "Category", "GOAP" },
		{ "ModuleRelativePath", "GOAPComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAction_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAction, Cost), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAction_Statics::NewProp_Cost_MetaData), Z_Construct_UScriptStruct_FAction_Statics::NewProp_Cost_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAction_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAction_Statics::NewProp_Preconditions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAction_Statics::NewProp_Preconditions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAction_Statics::NewProp_Preconditions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAction_Statics::NewProp_Effects_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAction_Statics::NewProp_Effects_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAction_Statics::NewProp_Effects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAction_Statics::NewProp_Cost,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TYP_13_01_24,
		nullptr,
		&NewStructOps,
		"Action",
		Z_Construct_UScriptStruct_FAction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAction_Statics::PropPointers),
		sizeof(FAction),
		alignof(FAction),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAction_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAction_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAction()
	{
		if (!Z_Registration_Info_UScriptStruct_Action.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Action.InnerSingleton, Z_Construct_UScriptStruct_FAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Action.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Goal;
class UScriptStruct* FGoal::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Goal.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Goal.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGoal, (UObject*)Z_Construct_UPackage__Script_TYP_13_01_24(), TEXT("Goal"));
	}
	return Z_Registration_Info_UScriptStruct_Goal.OuterSingleton;
}
template<> TYP_13_01_24_API UScriptStruct* StaticStruct<FGoal>()
{
	return FGoal::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGoal_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Conditions_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Conditions_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Conditions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoal_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GOAPComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGoal_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGoal>();
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGoal_Statics::NewProp_Conditions_ValueProp = { "Conditions", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGoal_Statics::NewProp_Conditions_Key_KeyProp = { "Conditions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoal_Statics::NewProp_Conditions_MetaData[] = {
		{ "Category", "GOAP" },
		{ "ModuleRelativePath", "GOAPComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGoal_Statics::NewProp_Conditions = { "Conditions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGoal, Conditions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoal_Statics::NewProp_Conditions_MetaData), Z_Construct_UScriptStruct_FGoal_Statics::NewProp_Conditions_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGoal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoal_Statics::NewProp_Conditions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoal_Statics::NewProp_Conditions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoal_Statics::NewProp_Conditions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGoal_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TYP_13_01_24,
		nullptr,
		&NewStructOps,
		"Goal",
		Z_Construct_UScriptStruct_FGoal_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoal_Statics::PropPointers),
		sizeof(FGoal),
		alignof(FGoal),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoal_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGoal_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoal_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGoal()
	{
		if (!Z_Registration_Info_UScriptStruct_Goal.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Goal.InnerSingleton, Z_Construct_UScriptStruct_FGoal_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Goal.InnerSingleton;
	}
	DEFINE_FUNCTION(UGOAPComponent::execFindPlanAStar)
	{
		P_GET_STRUCT_REF(FWorldState,Z_Param_Out_InitialState);
		P_GET_STRUCT_REF(FGoal,Z_Param_Out_Goal);
		P_GET_TARRAY_REF(FAction,Z_Param_Out_Actions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAction>*)Z_Param__Result=P_THIS->FindPlanAStar(Z_Param_Out_InitialState,Z_Param_Out_Goal,Z_Param_Out_Actions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGOAPComponent::execTestGOAP3)
	{
		P_GET_STRUCT(FWorldState,Z_Param_InitialState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAction>*)Z_Param__Result=P_THIS->TestGOAP3(Z_Param_InitialState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGOAPComponent::execTestGOAP2)
	{
		P_GET_STRUCT(FWorldState,Z_Param_InitialState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TestGOAP2(Z_Param_InitialState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGOAPComponent::execTestGOAP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TestGOAP();
		P_NATIVE_END;
	}
	void UGOAPComponent::StaticRegisterNativesUGOAPComponent()
	{
		UClass* Class = UGOAPComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindPlanAStar", &UGOAPComponent::execFindPlanAStar },
			{ "TestGOAP", &UGOAPComponent::execTestGOAP },
			{ "TestGOAP2", &UGOAPComponent::execTestGOAP2 },
			{ "TestGOAP3", &UGOAPComponent::execTestGOAP3 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGOAPComponent_FindPlanAStar_Statics
	{
		struct GOAPComponent_eventFindPlanAStar_Parms
		{
			FWorldState InitialState;
			FGoal Goal;
			TArray<FAction> Actions;
			TArray<FAction> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Goal;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Actions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGOAPComponent_FindPlanAStar_Statics::NewProp_InitialState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGOAPComponent_FindPlanAStar_Statics::NewProp_InitialState = { "InitialState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GOAPComponent_eventFindPlanAStar_Parms, InitialState), Z_Construct_UScriptStruct_FWorldState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGOAPComponent_FindPlanAStar_Statics::NewProp_InitialState_MetaData), Z_Construct_UFunction_UGOAPComponent_FindPlanAStar_Statics::NewProp_InitialState_MetaData) }; // 462655785
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGOAPComponent_FindPlanAStar_Statics::NewProp_Goal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGOAPComponent_FindPlanAStar_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GOAPComponent_eventFindPlanAStar_Parms, Goal), Z_Construct_UScriptStruct_FGoal, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGOAPComponent_FindPlanAStar_Statics::NewProp_Goal_MetaData), Z_Construct_UFunction_UGOAPComponent_FindPlanAStar_Statics::NewProp_Goal_MetaData) }; // 88261655
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGOAPComponent_FindPlanAStar_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAction, METADATA_PARAMS(0, nullptr) }; // 2595321673
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGOAPComponent_FindPlanAStar_Statics::NewProp_Actions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGOAPComponent_FindPlanAStar_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GOAPComponent_eventFindPlanAStar_Parms, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGOAPComponent_FindPlanAStar_Statics::NewProp_Actions_MetaData), Z_Construct_UFunction_UGOAPComponent_FindPlanAStar_Statics::NewProp_Actions_MetaData) }; // 2595321673
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGOAPComponent_FindPlanAStar_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAction, METADATA_PARAMS(0, nullptr) }; // 2595321673
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGOAPComponent_FindPlanAStar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GOAPComponent_eventFindPlanAStar_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2595321673
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGOAPComponent_FindPlanAStar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGOAPComponent_FindPlanAStar_Statics::NewProp_InitialState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGOAPComponent_FindPlanAStar_Statics::NewProp_Goal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGOAPComponent_FindPlanAStar_Statics::NewProp_Actions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGOAPComponent_FindPlanAStar_Statics::NewProp_Actions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGOAPComponent_FindPlanAStar_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGOAPComponent_FindPlanAStar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGOAPComponent_FindPlanAStar_Statics::Function_MetaDataParams[] = {
		{ "Category", "GOAP" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called every frame\n//virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;\n" },
#endif
		{ "ModuleRelativePath", "GOAPComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called every frame\nvirtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGOAPComponent_FindPlanAStar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGOAPComponent, nullptr, "FindPlanAStar", nullptr, nullptr, Z_Construct_UFunction_UGOAPComponent_FindPlanAStar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGOAPComponent_FindPlanAStar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGOAPComponent_FindPlanAStar_Statics::GOAPComponent_eventFindPlanAStar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGOAPComponent_FindPlanAStar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGOAPComponent_FindPlanAStar_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGOAPComponent_FindPlanAStar_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGOAPComponent_FindPlanAStar_Statics::GOAPComponent_eventFindPlanAStar_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGOAPComponent_FindPlanAStar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGOAPComponent_FindPlanAStar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGOAPComponent_TestGOAP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGOAPComponent_TestGOAP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GOAPComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGOAPComponent_TestGOAP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGOAPComponent, nullptr, "TestGOAP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGOAPComponent_TestGOAP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGOAPComponent_TestGOAP_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGOAPComponent_TestGOAP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGOAPComponent_TestGOAP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGOAPComponent_TestGOAP2_Statics
	{
		struct GOAPComponent_eventTestGOAP2_Parms
		{
			FWorldState InitialState;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGOAPComponent_TestGOAP2_Statics::NewProp_InitialState = { "InitialState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GOAPComponent_eventTestGOAP2_Parms, InitialState), Z_Construct_UScriptStruct_FWorldState, METADATA_PARAMS(0, nullptr) }; // 462655785
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGOAPComponent_TestGOAP2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGOAPComponent_TestGOAP2_Statics::NewProp_InitialState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGOAPComponent_TestGOAP2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GOAPComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGOAPComponent_TestGOAP2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGOAPComponent, nullptr, "TestGOAP2", nullptr, nullptr, Z_Construct_UFunction_UGOAPComponent_TestGOAP2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGOAPComponent_TestGOAP2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGOAPComponent_TestGOAP2_Statics::GOAPComponent_eventTestGOAP2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGOAPComponent_TestGOAP2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGOAPComponent_TestGOAP2_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGOAPComponent_TestGOAP2_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGOAPComponent_TestGOAP2_Statics::GOAPComponent_eventTestGOAP2_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGOAPComponent_TestGOAP2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGOAPComponent_TestGOAP2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGOAPComponent_TestGOAP3_Statics
	{
		struct GOAPComponent_eventTestGOAP3_Parms
		{
			FWorldState InitialState;
			TArray<FAction> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialState;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGOAPComponent_TestGOAP3_Statics::NewProp_InitialState = { "InitialState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GOAPComponent_eventTestGOAP3_Parms, InitialState), Z_Construct_UScriptStruct_FWorldState, METADATA_PARAMS(0, nullptr) }; // 462655785
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGOAPComponent_TestGOAP3_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAction, METADATA_PARAMS(0, nullptr) }; // 2595321673
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGOAPComponent_TestGOAP3_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GOAPComponent_eventTestGOAP3_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2595321673
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGOAPComponent_TestGOAP3_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGOAPComponent_TestGOAP3_Statics::NewProp_InitialState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGOAPComponent_TestGOAP3_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGOAPComponent_TestGOAP3_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGOAPComponent_TestGOAP3_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GOAPComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGOAPComponent_TestGOAP3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGOAPComponent, nullptr, "TestGOAP3", nullptr, nullptr, Z_Construct_UFunction_UGOAPComponent_TestGOAP3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGOAPComponent_TestGOAP3_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGOAPComponent_TestGOAP3_Statics::GOAPComponent_eventTestGOAP3_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGOAPComponent_TestGOAP3_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGOAPComponent_TestGOAP3_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGOAPComponent_TestGOAP3_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGOAPComponent_TestGOAP3_Statics::GOAPComponent_eventTestGOAP3_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGOAPComponent_TestGOAP3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGOAPComponent_TestGOAP3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGOAPComponent);
	UClass* Z_Construct_UClass_UGOAPComponent_NoRegister()
	{
		return UGOAPComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGOAPComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Actions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Actions2_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actions2_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGOAPComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TYP_13_01_24,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGOAPComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGOAPComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGOAPComponent_FindPlanAStar, "FindPlanAStar" }, // 2966349590
		{ &Z_Construct_UFunction_UGOAPComponent_TestGOAP, "TestGOAP" }, // 3071004679
		{ &Z_Construct_UFunction_UGOAPComponent_TestGOAP2, "TestGOAP2" }, // 3930329729
		{ &Z_Construct_UFunction_UGOAPComponent_TestGOAP3, "TestGOAP3" }, // 3881661777
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGOAPComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGOAPComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "GOAPComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "GOAPComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGOAPComponent_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAction, METADATA_PARAMS(0, nullptr) }; // 2595321673
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGOAPComponent_Statics::NewProp_Actions_MetaData[] = {
		{ "Category", "GOAP" },
		{ "ModuleRelativePath", "GOAPComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGOAPComponent_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGOAPComponent, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGOAPComponent_Statics::NewProp_Actions_MetaData), Z_Construct_UClass_UGOAPComponent_Statics::NewProp_Actions_MetaData) }; // 2595321673
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGOAPComponent_Statics::NewProp_Actions2_Inner = { "Actions2", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAction, METADATA_PARAMS(0, nullptr) }; // 2595321673
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGOAPComponent_Statics::NewProp_Actions2_MetaData[] = {
		{ "Category", "GOAP" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Store actions for easy access\n" },
#endif
		{ "ModuleRelativePath", "GOAPComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Store actions for easy access" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGOAPComponent_Statics::NewProp_Actions2 = { "Actions2", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGOAPComponent, Actions2), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGOAPComponent_Statics::NewProp_Actions2_MetaData), Z_Construct_UClass_UGOAPComponent_Statics::NewProp_Actions2_MetaData) }; // 2595321673
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGOAPComponent_Statics::NewProp_CurrentState_MetaData[] = {
		{ "Category", "GOAP" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Store actions for easy access\n" },
#endif
		{ "ModuleRelativePath", "GOAPComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Store actions for easy access" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGOAPComponent_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGOAPComponent, CurrentState), Z_Construct_UScriptStruct_FWorldState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGOAPComponent_Statics::NewProp_CurrentState_MetaData), Z_Construct_UClass_UGOAPComponent_Statics::NewProp_CurrentState_MetaData) }; // 462655785
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGOAPComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGOAPComponent_Statics::NewProp_Actions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGOAPComponent_Statics::NewProp_Actions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGOAPComponent_Statics::NewProp_Actions2_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGOAPComponent_Statics::NewProp_Actions2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGOAPComponent_Statics::NewProp_CurrentState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGOAPComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGOAPComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGOAPComponent_Statics::ClassParams = {
		&UGOAPComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGOAPComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGOAPComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGOAPComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGOAPComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGOAPComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGOAPComponent()
	{
		if (!Z_Registration_Info_UClass_UGOAPComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGOAPComponent.OuterSingleton, Z_Construct_UClass_UGOAPComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGOAPComponent.OuterSingleton;
	}
	template<> TYP_13_01_24_API UClass* StaticClass<UGOAPComponent>()
	{
		return UGOAPComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGOAPComponent);
	UGOAPComponent::~UGOAPComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_3YP_Push_070224_TYP_13_01_24_Source_TYP_13_01_24_GOAPComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_3YP_Push_070224_TYP_13_01_24_Source_TYP_13_01_24_GOAPComponent_h_Statics::ScriptStructInfo[] = {
		{ FWorldState::StaticStruct, Z_Construct_UScriptStruct_FWorldState_Statics::NewStructOps, TEXT("WorldState"), &Z_Registration_Info_UScriptStruct_WorldState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldState), 462655785U) },
		{ FAction::StaticStruct, Z_Construct_UScriptStruct_FAction_Statics::NewStructOps, TEXT("Action"), &Z_Registration_Info_UScriptStruct_Action, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAction), 2595321673U) },
		{ FGoal::StaticStruct, Z_Construct_UScriptStruct_FGoal_Statics::NewStructOps, TEXT("Goal"), &Z_Registration_Info_UScriptStruct_Goal, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGoal), 88261655U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_3YP_Push_070224_TYP_13_01_24_Source_TYP_13_01_24_GOAPComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGOAPComponent, UGOAPComponent::StaticClass, TEXT("UGOAPComponent"), &Z_Registration_Info_UClass_UGOAPComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGOAPComponent), 3893073586U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_3YP_Push_070224_TYP_13_01_24_Source_TYP_13_01_24_GOAPComponent_h_2378710448(TEXT("/Script/TYP_13_01_24"),
		Z_CompiledInDeferFile_FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_3YP_Push_070224_TYP_13_01_24_Source_TYP_13_01_24_GOAPComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_3YP_Push_070224_TYP_13_01_24_Source_TYP_13_01_24_GOAPComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_3YP_Push_070224_TYP_13_01_24_Source_TYP_13_01_24_GOAPComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ywe21afu_Documents_UnrealProjects_3YP_SEM2_130124_3YP_Push_070224_TYP_13_01_24_Source_TYP_13_01_24_GOAPComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

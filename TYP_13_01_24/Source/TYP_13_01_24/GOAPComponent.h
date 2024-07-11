// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GOAPComponent.generated.h"


USTRUCT(BlueprintType)
struct FWorldState
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GOAP")
	TMap<FString, bool> States;
};

USTRUCT(BlueprintType)
struct FAction
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GOAP")
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GOAP")
	TMap<FString, bool> Preconditions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GOAP")
	TMap<FString, bool>Effects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GOAP")
	int32 Cost;
};

USTRUCT(BlueprintType)
struct FGoal
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GOAP")
	TMap<FString, bool> Conditions;
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable )
class TYP_13_01_24_API UGOAPComponent : public UActorComponent
{
	GENERATED_BODY()

public:	

	UGOAPComponent();

	UFUNCTION(BlueprintCallable)
	void TestGOAP();


	UFUNCTION(BlueprintCallable)
	void TestGOAP2(FWorldState InitialState);

	UFUNCTION(BlueprintCallable)
	TArray<FAction> TestGOAP3(FWorldState InitialState);

protected:
	
	virtual void BeginPlay() override;

public:	

	UFUNCTION(BlueprintCallable, Category = "GOAP")
	TArray<FAction> FindPlanAStar(const FWorldState& InitialState, const FGoal& Goal, const TArray<FAction>& Actions);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GOAP")
	TArray<FAction> Actions; 

	UPROPERTY(BlueprintReadOnly, Category = "GOAP")
	TArray<FAction> Actions2; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GOAP")
	FWorldState CurrentState;


private:
	bool CheckPreconditions(const FWorldState& State, const TMap<FString, bool>& Preconditions) const;
	void ApplyEffects(FWorldState& State, const TMap<FString, bool>& Effects) const;

	int32 CalculateHeuristic(const FWorldState& State, const FGoal& Goal) const;
	FString StateToString(const FWorldState& State) const;

	void PushNode(TArray<struct FNode*>& Queue, struct FNode* Node);
	struct FNode* PopNode(TArray<struct FNode*>& Queue);



		
};

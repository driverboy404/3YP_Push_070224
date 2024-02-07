// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_FindPlayer.generated.h"

/**
 * 
 */
UCLASS()
class TYP_13_01_24_API UBTT_FindPlayer : public UBTTaskNode
{
	GENERATED_BODY()


public:

	UBTT_FindPlayer();

	UPROPERTY(EditAnywhere)
		FBlackboardKeySelector PlayerKey;

	UPROPERTY(EditAnywhere)
		FBlackboardKeySelector PlayerLocationKey;


	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
};

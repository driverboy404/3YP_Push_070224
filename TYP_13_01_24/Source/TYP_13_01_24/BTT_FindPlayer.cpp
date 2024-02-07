// Fill out your copyright notice in the Description page of Project Settings.


#include "BTT_FindPlayer.h"

#include "Kismet/GameplayStatics.h"
#include "AIModule/Classes/BehaviorTree/BlackboardComponent.h"

//Constructor for Node
UBTT_FindPlayer::UBTT_FindPlayer(){
	NodeName = "Find Player";
}

//Gets the player's current location and the player object itself
EBTNodeResult::Type UBTT_FindPlayer::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//Checks if player exists
	if (APawn* Player = UGameplayStatics::GetPlayerPawn(GetWorld(), 0)) {

		//Sets Player Object in the Blackboard
		auto Blackboard = OwnerComp.GetBlackboardComponent();
		Blackboard->SetValueAsObject(PlayerKey.SelectedKeyName, Player);

		//Sets Player Vector in the Blackboard
		//FVector PlayerLocation = Player->GetActorLocation();
		//Blackboard->SetValueAsVector(PlayerLocationKey.SelectedKeyName, PlayerLocation);
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Succeeded!"));
		return EBTNodeResult::Succeeded;
	}

	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Failed"));
	return EBTNodeResult::Failed;
}
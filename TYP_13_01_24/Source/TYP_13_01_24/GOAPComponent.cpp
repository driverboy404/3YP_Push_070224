// Fill out your copyright notice in the Description page of Project Settings.


#include "GOAPComponent.h"

UGOAPComponent::UGOAPComponent()
{
    PrimaryComponentTick.bCanEverTick = true;

    // Define initial state
    //FWorldState InitialState;
    //InitialState.States.Add(TEXT("lowHealth"), false);
    //InitialState.States.Add(TEXT("lowAmmo"), true);
    //InitialState.States.Add(TEXT("hasEnemy"), false);

    
    CurrentState.States.Add(TEXT("lowHealth"), false);
    CurrentState.States.Add(TEXT("lowAmmo"), true);
    CurrentState.States.Add(TEXT("hasEnemy"), false);


    FAction GatherAmmo;
    GatherAmmo.Name = TEXT("GatherAmmo");
    GatherAmmo.Preconditions.Add(TEXT("lowAmmo"), true);
    GatherAmmo.Effects.Add(TEXT("lowAmmo"), false);
    GatherAmmo.Cost = 10;
    Actions.Add(GatherAmmo);

    FAction GatherAmmoAndShoot;
    GatherAmmoAndShoot.Name = TEXT("GatherAmmoAndShoot");
    GatherAmmoAndShoot.Preconditions.Add(TEXT("lowAmmo"), true);
    GatherAmmoAndShoot.Preconditions.Add(TEXT("hasEnemy"), true);
    GatherAmmoAndShoot.Effects.Add(TEXT("lowAmmo"), false);
    GatherAmmoAndShoot.Cost = 1;
    Actions.Add(GatherAmmoAndShoot);

    FAction GatherHealth;
    GatherHealth.Name = TEXT("GatherHealth");
    GatherHealth.Preconditions.Add(TEXT("lowHealth"), true);
    GatherHealth.Effects.Add(TEXT("lowHealth"), false);
    GatherHealth.Cost = 1;
    Actions.Add(GatherHealth);

    FAction Patrol;
    Patrol.Name = TEXT("Patrol");
    Patrol.Preconditions.Add(TEXT("hasEnemy"), false);
    Patrol.Effects.Add(TEXT("hasEnemy"), true);
    Patrol.Cost = 1;
    Actions.Add(Patrol);
}

void UGOAPComponent::BeginPlay()
{
    Super::BeginPlay();


}

bool UGOAPComponent::CheckPreconditions(const FWorldState& State, const TMap<FString, bool>& Preconditions) const
{
    for (const auto& Precondition : Preconditions)
    {
        const bool* Value = State.States.Find(Precondition.Key);
        if (!Value || *Value != Precondition.Value)
        {
            return false;
        }
    }
    return true;
}

void UGOAPComponent::ApplyEffects(FWorldState& State, const TMap<FString, bool>& Effects) const
{
    for (const auto& Effect : Effects)
    {
        State.States.Add(Effect.Key, Effect.Value);
    }
}

int32 UGOAPComponent::CalculateHeuristic(const FWorldState& State, const FGoal& Goal) const
{
    int32 Heuristic = 0;
    for (const auto& GoalItem : Goal.Conditions)
    {
        const bool* Value = State.States.Find(GoalItem.Key);
        if (!Value || *Value != GoalItem.Value)
        {
            Heuristic++;
        }
    }
    return Heuristic;
}

FString UGOAPComponent::StateToString(const FWorldState& State) const
{
    FString Result;
    for (const auto& Pair : State.States)
    {
        Result += Pair.Key + "=" + (Pair.Value ? "true" : "false") + ";";
    }
    return Result;
}

struct FNode
{
    FWorldState State;
    int32 Cost;
    int32 Heuristic;
    FNode* Parent;
    FAction Action;

    FNode(FWorldState _State, int32 _Cost, int32 _Heuristic, FNode* _Parent, FAction _Action)
        : State(_State), Cost(_Cost), Heuristic(_Heuristic), Parent(_Parent), Action(_Action) {}
};

void UGOAPComponent::PushNode(TArray<FNode*>& Queue, FNode* Node)
{
    Queue.Add(Node);
    Queue.Sort([](const FNode& A, const FNode& B) {
        return (A.Cost + A.Heuristic) < (B.Cost + B.Heuristic);
        });
}

FNode* UGOAPComponent::PopNode(TArray<FNode*>& Queue)
{
    if (Queue.Num() == 0)
    {
        return nullptr;
    }

    FNode* Node = Queue[0];
    Queue.RemoveAt(0);
    return Node;
}





TArray<FAction> UGOAPComponent::FindPlanAStar(const FWorldState& InitialState, const FGoal& Goal, const TArray<FAction>& MyActions)
{
    TArray<FNode*> OpenList;
    
    FNode* StartNode = new FNode(InitialState, 0, CalculateHeuristic(InitialState, Goal), nullptr, { "", {}, {}, 0 });
    PushNode(OpenList, StartNode);

    while (OpenList.Num() > 0)
    {
        FNode* CurrentNode = PopNode(OpenList);
        

        if (CheckPreconditions(CurrentNode->State, Goal.Conditions))
        {
            
            TArray<FAction> Plan;
            FNode* Node = CurrentNode;
            while (Node->Parent != nullptr)
            {
                Plan.Add(Node->Action);
                Node = Node->Parent;
            }
            Algo::Reverse(Plan);
            return Plan;
        }

        for (const auto& Action : MyActions)
        {
            
            if (CheckPreconditions(CurrentNode->State, Action.Preconditions))
            {
                
                FWorldState NewState = CurrentNode->State;
                ApplyEffects(NewState, Action.Effects);

                int32 NewCost = CurrentNode->Cost + Action.Cost;
                FNode* NewNode = new FNode(NewState, NewCost, CalculateHeuristic(NewState, Goal), CurrentNode, Action);
                PushNode(OpenList, NewNode);
            }
        }
    }
    
    return {};
}




void UGOAPComponent::TestGOAP()
{
    
    FWorldState InitialState;
    InitialState.States.Add(TEXT("lowHealth"), true);
    InitialState.States.Add(TEXT("lowAmmo"), true);
    InitialState.States.Add(TEXT("hasEnemy"), false);

    
    FGoal Goal;
    Goal.Conditions.Add(TEXT("lowAmmo"), false);
    Goal.Conditions.Add(TEXT("lowHealth"), false);
    Goal.Conditions.Add(TEXT("hasEnemy"), true);

    
    TArray<FAction> PlanActions = FindPlanAStar(InitialState, Goal, Actions);

    
    int32 TotalCost = 0;
    UE_LOG(LogTemp, Warning, TEXT("Plan found with %d actions:"), PlanActions.Num());
    for (const auto& Action : PlanActions)
    {
        TotalCost += Action.Cost;
        UE_LOG(LogTemp, Warning, TEXT("Action: %s"), *Action.Name);
    }
    UE_LOG(LogTemp, Warning, TEXT("Total cost: %d"), TotalCost);
}


void UGOAPComponent::TestGOAP2(FWorldState InitialState){
    FGoal Goal;
    Goal.Conditions.Add(TEXT("lowAmmo"), false);
    Goal.Conditions.Add(TEXT("lowHealth"), false);
    Goal.Conditions.Add(TEXT("hasEnemy"), true);


    /*UE_LOG(LogTemp, Warning, TEXT("Initial State values:"));
    for (const auto& Pair : InitialState.States)
    {
        UE_LOG(LogTemp, Warning, TEXT("%s = %s"), *Pair.Key, Pair.Value ? TEXT("true") : TEXT("false"));
    }*/


    TArray<FAction> PlanActions = FindPlanAStar(InitialState, Goal, Actions);


    int32 TotalCost = 0;
    UE_LOG(LogTemp, Warning, TEXT("Plan found with %d actions:"), PlanActions.Num());
    for (const auto& Action : PlanActions)
    {
        TotalCost += Action.Cost;
        UE_LOG(LogTemp, Warning, TEXT("Action: %s"), *Action.Name);
    }
    UE_LOG(LogTemp, Warning, TEXT("Total cost: %d"), TotalCost);
}


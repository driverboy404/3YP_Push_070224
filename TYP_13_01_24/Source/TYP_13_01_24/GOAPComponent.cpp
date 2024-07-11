// Fill out your copyright notice in the Description page of Project Settings.


#include "GOAPComponent.h"


//Constructor, setting up the actions that the GOAP NPC can do
UGOAPComponent::UGOAPComponent()
{
    PrimaryComponentTick.bCanEverTick = true;



    FAction GatherAmmo;
    GatherAmmo.Name = TEXT("GatherAmmo");
    GatherAmmo.Preconditions.Add(TEXT("ammoGreater0"), false);
    GatherAmmo.Effects.Add(TEXT("ammoGreater0"), true);
    GatherAmmo.Cost = 1;
    Actions.Add(GatherAmmo);
    Actions2.Add(GatherAmmo);


    FAction GatherHealth;
    GatherHealth.Name = TEXT("GatherHealth");
    GatherHealth.Preconditions.Add(TEXT("healthGreater50"), false);
    GatherHealth.Preconditions.Add(TEXT("healthPackNearby"), true);
    GatherHealth.Effects.Add(TEXT("healthGreater50"), true);
    GatherHealth.Cost = 1;
    Actions.Add(GatherHealth);
    Actions2.Add(GatherHealth);


    FAction GatherHealthFromCover;
    GatherHealthFromCover.Name = TEXT("GatherHealthFromCover");
    GatherHealthFromCover.Preconditions.Add(TEXT("healthGreater50"), false);
    GatherHealthFromCover.Preconditions.Add(TEXT("hasEnemy"), false);
    GatherHealthFromCover.Effects.Add(TEXT("healthGreater50"), true);
    GatherHealthFromCover.Cost = 1;
    Actions.Add(GatherHealthFromCover);
    Actions2.Add(GatherHealthFromCover);


    FAction MoveToCover;
    MoveToCover.Name = TEXT("MoveToCover");
    MoveToCover.Preconditions.Add(TEXT("healthGreater50"), false);
    MoveToCover.Preconditions.Add(TEXT("healthPackNearby"), false);
    MoveToCover.Effects.Add(TEXT("healthPackNearby"), true);
    MoveToCover.Cost = 2;
    Actions.Add(MoveToCover);
    Actions2.Add(MoveToCover) ;



    FAction AttackEnemy;
    AttackEnemy.Name = TEXT("AttackEnemy");
    AttackEnemy.Preconditions.Add(TEXT("hasEnemy"), true);
    AttackEnemy.Preconditions.Add(TEXT("healthGreater50"), true);
    AttackEnemy.Preconditions.Add(TEXT("ammoGreater0"), true);
    AttackEnemy.Effects.Add(TEXT("isAttacking"), true);
    AttackEnemy.Cost = 1;
    Actions.Add(AttackEnemy);
    Actions2.Add(AttackEnemy);


    FAction Patrol;
    Patrol.Name = TEXT("Patrol");
    Patrol.Preconditions.Add(TEXT("hasEnemy"), false);
    Patrol.Effects.Add(TEXT("hasEnemy"), true);
    Patrol.Cost = 2;
    Actions.Add(Patrol);
    Actions2.Add(Patrol);

}



//Implementation for this is in the blueprint
void UGOAPComponent::BeginPlay()
{
    Super::BeginPlay();


}



//Checks if all of an actions preconditions are met with a given world state
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


//Applies all of the effects of an action to an NPCs world state
void UGOAPComponent::ApplyEffects(FWorldState& State, const TMap<FString, bool>& Effects) const
{
    for (const auto& Effect : Effects)
    {
        State.States.Add(Effect.Key, Effect.Value);
    }
}



//Calculates the heuristic for a node - calculated as +1 for every state that differs from the goal states
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




//Debug function to print out a given world state
FString UGOAPComponent::StateToString(const FWorldState& State) const
{
    FString Result;
    for (const auto& Pair : State.States)
    {
        Result += Pair.Key + "=" + (Pair.Value ? "true" : "false") + ";";
    }
    return Result;
}




//Struct used in the linked list of actions used for a full plan
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




//Functions used to create a priority queue needed for the planning method
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





// Function to create a plan based on a given start world state, a target state, and a set of actions
TArray<FAction> UGOAPComponent::FindPlanAStar(const FWorldState& InitialState, const FGoal& Goal, const TArray<FAction>& MyActions)
{
    TArray<FNode*> OpenList;

    int length = 0;

    FString InitialStateString = StateToString(InitialState);
    
    
    FNode* StartNode = new FNode(InitialState, 0, CalculateHeuristic(InitialState, Goal), nullptr, { "", {}, {}, 0 });
    PushNode(OpenList, StartNode);

    while (OpenList.Num() > 0 && length < 5)
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

        length++;
    }
    
    return {};
}



//UNUSED TEST FUNCTION
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
    
    for (const auto& Action : PlanActions)
    {
        TotalCost += Action.Cost;
        
    }
    
}





//UNUSED TEST FUNCTION
void UGOAPComponent::TestGOAP2(FWorldState InitialState){
    FGoal Goal;
    Goal.Conditions.Add(TEXT("isAttacking"), true);
    TArray<FAction> PlanActions = FindPlanAStar(InitialState, Goal, Actions);
    int32 TotalCost = 0;
    
    for (const auto& Action : PlanActions)
    {
        TotalCost += Action.Cost;
        
    }
    
}





//Function used in blueprint code to return a plan for the NPC to perform
TArray<FAction> UGOAPComponent::TestGOAP3(FWorldState InitialState)
{   
    FGoal Goal;

    Goal.Conditions.Add(TEXT("isAttacking"), true);
    Goal.Conditions.Add(TEXT("healthGreater50"), true);
    Goal.Conditions.Add(TEXT("ammoGreater0"), true);


    TArray<FAction> PlanActions = FindPlanAStar(InitialState, Goal, Actions);
    return PlanActions;
}


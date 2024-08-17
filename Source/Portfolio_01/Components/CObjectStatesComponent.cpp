#include "CObjectStatesComponent.h"

// Sets default values for this component's properties
UCObjectStatesComponent::UCObjectStatesComponent()
{
	CanAttack = false;
	CanUes = false;
	Atk = 0.f;
	Durability = 0.f;
	StorageSpace = 0;
	Weight = 0;
	Size = 0;
}


// Called when the game starts
void UCObjectStatesComponent::BeginPlay()
{
	Super::BeginPlay();

	
}

void UCObjectStatesComponent::SetCanAttack(bool Value)
{
	CanAttack = Value;
}

void UCObjectStatesComponent::SetCanUes(bool Value)
{
	CanUes = Value;
}

void UCObjectStatesComponent::SetAtk(float Value)
{
	Atk = Value;
}

void UCObjectStatesComponent::SetDurability(float Value)
{
	Durability = Value;
}

void UCObjectStatesComponent::SetStorageSpace(int32 Value)
{
	StorageSpace = Value;
}

void UCObjectStatesComponent::SetWeight(int32 Value)
{
	Weight = Value;
}

void UCObjectStatesComponent::SetSize(int32 Value)
{
	Size = Value;
}


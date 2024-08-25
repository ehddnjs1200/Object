#include "CCharacterStatusComponent.h"

UCCharacterStatusComponent::UCCharacterStatusComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features	// off to improve performance if you don't need them.

	// ...
}


// Called when the game starts
void UCCharacterStatusComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UCCharacterStatusComponent::SetHealth(float Value)
{
	Health = Value;
}

void UCCharacterStatusComponent::SetStamina(float Value)
{
	Stamina = Value;
}

void UCCharacterStatusComponent::SetLevel(int32 Value)
{
	Level = Value;
}

void UCCharacterStatusComponent::SetExp(float Value)
{
	Exp = Value;
}

void UCCharacterStatusComponent::SetCriticalRate(float Value)
{
	CriticalRate = Value;
}

void UCCharacterStatusComponent::SetDefense(float Value)
{
	Defense = Value;
}

void UCCharacterStatusComponent::SetSkillPoints(int32 Value)
{
	SkillPoints = Value;
}

void UCCharacterStatusComponent::SetStrength(int32 Value)
{
	Strength = Value;
}

void UCCharacterStatusComponent::SetDexterity(int32 Value)
{
	Dexterity = Value;
}

void UCCharacterStatusComponent::SetIntelligence(int32 Value)
{
	Intelligence = Value;
}

void UCCharacterStatusComponent::SetVitality(int32 Value)
{
	Vitality = Value;
}

void UCCharacterStatusComponent::SetEndurance(int32 Value)
{
	Endurance = Value;
}



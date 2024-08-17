#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CCharacterStatusComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PORTFOLIO_01_API UCCharacterStatusComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCCharacterStatusComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	




public:	
	float Health;
	float Stamina;
	int32 Level;
	float Exp;

	float CriticalRate;
	float Defense;
	int32 SkillPoints;

	int32 Strength;
	int32 Dexterity;
	int32 Intelligence;
	int32 Vitality;
	int32 Endurance;

};

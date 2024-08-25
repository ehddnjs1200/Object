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
	
	void SetHealth(float Value);
	void SetStamina(float Value);
	void SetLevel(int32 Value);
	void SetExp(float Value);
		 
	void SetCriticalRate(float Value);
	void SetDefense(float Value);
	void SetSkillPoints(int32 Value);
		 
	void SetStrength(int32 Value);
	void SetDexterity(int32 Value);
	void SetIntelligence(int32 Value);
	void SetVitality(int32 Value);
	void SetEndurance(int32 Value);
	

	float GetHealth() { return Health; };
	float GetStamina() { return Stamina; };
	int32 GetLevel() { return Level; };
	float GetExp() { return Exp; };
		  
	float GetCriticalRate() { return CriticalRate; }
	float GetDefense() { return Defense; }
	int32 GetSkillPoints() { return SkillPoints; }
		  
	int32 GetStrength() { return Strength; }
	int32 GetDexterity() { return Dexterity; }
	int32 GetIntelligence() { return Intelligence; }
	int32 GetVitality() { return Vitality; }
	int32 GetEndurance() { return Endurance; }



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

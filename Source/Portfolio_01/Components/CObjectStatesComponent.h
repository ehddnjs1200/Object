#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CObjectStatesComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PORTFOLIO_01_API UCObjectStatesComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCObjectStatesComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;


public:

	void SetCanAttack(bool Value);
	void SetCanUes(bool Value);
	
	void SetAtk(float Value);
	void  SetDurability(float Value);
	
	void  SetStorageSpace(int32 Value);
	void  SetWeight(int32 Value);
	void  SetSize(int32 Value);


	bool GetCanAttack() { return CanAttack; }
	bool GetCanUes() { return CanUes; }

	float GetAtk() { return Atk; }
	float GetDurability() { return Durability; }

	int32 GetStorageSpace() { return StorageSpace; }
	int32 GetWeight() { return Weight; }
	int32 GetSize() { return Size; }


public:	
	bool CanAttack;
	bool CanUes;

	float Atk;
	float Durability;
	
	int32 StorageSpace;
	int32 Weight;
	int32 Size;


};

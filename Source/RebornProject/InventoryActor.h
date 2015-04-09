// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "InventoryActor.generated.h"

/**
 * 
 */
UCLASS()
class REBORNPROJECT_API AInventoryActor : public AActor
{
	GENERATED_BODY()
	
public:

	/* Simple Collision primitive to use as the root component 
	UPROPERTY(VisibleDefaultsOnly,BlueprintReadOnly, Category = Inventory)
		TSubobjectPtr<USphereComponent> BaseCollisionComponent;
	
	StaticMeshComponent to represent the pickup in the level 
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Inventory)
		TSubobjectPtr<UStaticMeshComponent> InventoryActorMesh;*/

	/*********************** Attributes *****************/
	
	/* True when the actor is food and can be eat 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Inventory)
		bool isFood;

	 Nom de l'objet pour un affichage 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Inventory)
	FString displayName;

	Classe à ramasser 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Inventory)
		AInventoryActor* PickupClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Inventory)
		UTexture2D* assignedTextureForHUD;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Inventory)
		AInventoryActor* InventoryClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Inventory)
		FTransform SpawnTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Inventory)
		bool isWeapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Inventory)
		uint16 DammageOccur;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Inventory)
		double valueIfEat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Inventory)
		ACharacter* itemOwner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Inventory)
		bool loseRightWhenDrop;


	UFUNCTION(BlueprintImplementableEvent, Category = "Inventory")
		void SendItem(ACharacter* character);*/
};
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Objective.generated.h"

class UBoxComponenet;
class UPointLightComponent;
class UStaticMechComponent;

UCLASS()

class RAT_RACE_API AObjectivePoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AObjectivePoint();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BluePrintReadOnly, Category = "Components")
	UStaticMeshComponent* MeshComp;

	UPROPERTY(VisibleAnywhere, BluePrintReadOnly, Category = "Components")
	UStaticMeshComponent* BoxCollision;

	UPROPERTY(VisibleAnywhere, BluePrintReadOnly, Category = "Components")
	UPointLightComponent* PointLight;



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

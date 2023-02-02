// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingBall.generated.h"

UCLASS()
class YARL2_API AMovingBall : public AActor
{
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* VisualMesh;

	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingBall();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

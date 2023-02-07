// Fill out your copyright notice in the Description page of Project Settings.


#include "FloatingCube.h"

// Sets default values for this component's properties
UFloatingCube::UFloatingCube()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UFloatingCube::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UFloatingCube::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	/*FVector NewLocation = GetActorLocation();
	FRotator NewRotation = GetActorRotation();
	float RunningTime = GetGameTimeSinceCreation();
	float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
	NewLocation.Z += DeltaHeight * 20;		//Scale our Height by a factor of 20
	float DeltaRotation = DeltaTime * 20;	//Rotate by 20 degrees per second
	NewRotation.Yaw += DeltaRotation;
	(NewLocation, NewRotation);*/
}


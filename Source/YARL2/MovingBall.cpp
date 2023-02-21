// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingBall.h"

float timeAlive;
const float TIME_TO_LIVE = 3;

// Sets default values
AMovingBall::AMovingBall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	VisualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	VisualMesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeVisualAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));

	if (CubeVisualAsset.Succeeded()) {
		VisualMesh->SetStaticMesh(CubeVisualAsset.Object);
		VisualMesh->SetRelativeLocation(FVector(0, 0, 0));
	}
}

// Called when the game starts or when spawned
void AMovingBall::BeginPlay()
{
	Super::BeginPlay();
	timeAlive = 0;
}

// Called every frame
void AMovingBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewLocation = GetActorLocation();
	FRotator NewRotation = GetActorRotation();
	float RunningTime = GetGameTimeSinceCreation();
	float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
	NewLocation.Z += DeltaHeight * 20;		//Scale our Height by a factor of 20
	float DeltaRotation = DeltaTime * 20;	//Rotate by 20 degrees per second
	NewRotation.Yaw += DeltaRotation;
	SetActorLocationAndRotation(NewLocation, NewRotation);

	timeAlive += DeltaTime;
	if (timeAlive >= TIME_TO_LIVE) Die();

}

void AMovingBall::Die() {
	Destroy();
}

void AMovingBall::Nice() {
	int x = 0;
}


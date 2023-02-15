// Fill out your copyright notice in the Description page of Project Settings.


#include "YARL_Character.h"

// Sets default values
AYARL_Character::AYARL_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AYARL_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AYARL_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AYARL_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &AYARL_Character::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &AYARL_Character::MoveRight);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &AYARL_Character::AddControllerYawInput);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &AYARL_Character::AddControllerPitchInput);

}

void AYARL_Character::MoveForward(float AxisVal)
{
	AddMovementInput(GetActorForwardVector() * AxisVal);
}

void AYARL_Character::MoveRight(float AxisVal)
{
	AddMovementInput(GetActorRightVector() * AxisVal);
}


// Fill out your copyright notice in the Description page of Project Settings.


#include "APW_Paddle.h"

// Sets default values
AAPW_Paddle::AAPW_Paddle()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAPW_Paddle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAPW_Paddle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAPW_Paddle::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AAPW_Paddle::shootPaddle()
{
}

float AAPW_Paddle::MovePaddle()
{
	return 0.0f;
}

bool AAPW_Paddle::turnPaddle()
{
	return false;
}


// Fill out your copyright notice in the Description page of Project Settings.


#include "AC_Bricks.h"

// Sets default values
AAC_Bricks::AAC_Bricks()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAC_Bricks::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAC_Bricks::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AAC_Bricks::cloneBrick()
{
	return false;
}

bool AAC_Bricks::vanishBrick()
{
	return false;
}

float AAC_Bricks::reduceResistance()
{
	return 0.0f;
}


// Fill out your copyright notice in the Description page of Project Settings.


#include "AC_Capsule.h"

// Sets default values
AAC_Capsule::AAC_Capsule()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAC_Capsule::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAC_Capsule::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AAC_Capsule::vanish()
{
	return false;
}


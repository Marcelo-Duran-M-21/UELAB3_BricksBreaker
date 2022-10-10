// Fill out your copyright notice in the Description page of Project Settings.


#include "AC_Ball.h"

// Sets default values
AAC_Ball::AAC_Ball()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAC_Ball::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAC_Ball::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


// Fill out your copyright notice in the Description page of Project Settings.


#include "AC_ScoreGame.h"

// Sets default values
AAC_ScoreGame::AAC_ScoreGame()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAC_ScoreGame::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAC_ScoreGame::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

float AAC_ScoreGame::place()
{
	return 0.0f;
}

float AAC_ScoreGame::subtract()
{
	return 0.0f;
}

bool AAC_ScoreGame::exitGame()
{
	return false;
}

bool AAC_ScoreGame::saveGame()
{
	return false;
}


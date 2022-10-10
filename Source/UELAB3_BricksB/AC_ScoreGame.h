// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AC_ScoreGame.generated.h"

UCLASS()
class UELAB3_BRICKSB_API AAC_ScoreGame : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAC_ScoreGame();
	FString namePlayer;
	float scoreDead;
	float live;
	float level;
	float numberEnemy;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//Method set and get

	void setNamePlayer(FString _namePlayer) { namePlayer = _namePlayer; }
	FString getNamePlayer() { return namePlayer; }

	void setScoreDead(float _scoreDead) { scoreDead = _scoreDead; }
	float getScoreDead() { return scoreDead; }


	void setLive(float _live) { live = _live; }
	float getLive() { return live; }

	void setLevel(float _level) { level = _level; }
	float getLevel() { return level; }

	void setNumberEnemy(float _numberEnemy) { numberEnemy = _numberEnemy; }
	float getNumberEnemy() { return numberEnemy; }

	//method
	float place();
	float subtract();
	bool exitGame();
	bool saveGame();
};

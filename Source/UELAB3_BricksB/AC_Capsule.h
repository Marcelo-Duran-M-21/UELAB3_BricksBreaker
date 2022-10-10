// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AC_Capsule.generated.h"

UCLASS()
class UELAB3_BRICKSB_API AAC_Capsule : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAC_Capsule();
private:
	FString name;
	FString form;
	float time;//tiempo de la capsula
	float speed;//la velocidad de la capsula 
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//method set and get of this class
	void setName(FString _name) { name = _name; }
	FString getName() { return name; }

	void setForm(FString _form) { form = _form; }
	FString getForm() { return form; }

	void setTime(float _time) { time = _time; }
	float getTime() { return time; }

	void setSpeed(float _speed) { speed = _speed; }
	float getSpeed() { return speed; }

	//Method 
	bool vanish();//method desaparecer
	
};

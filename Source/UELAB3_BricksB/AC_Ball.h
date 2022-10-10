// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AC_Ball.generated.h"

UCLASS()
class UELAB3_BRICKSB_API AAC_Ball : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAC_Ball();
private:
	//atributos de ball
	FString color;
	FString form;
	float size;
	float speed;
	FVector trajectory;
	float weight;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Method set and get 
	void setColor(FString _color) { color = _color; };
	FString getColor() { return color; };

	void setForm(FString _form) { form = _form; };
	FString getForm() { return form; };

	void setSize(float _size) { size = _size; };
	float getSize() { return size; };

	void setSpeed(float _speed) { speed = _speed; };
	float getSpeed() { return speed; };

	void setTrajectory(FVector _trajectory) { trajectory = _trajectory; };
	FVector getTrajectory() { return trajectory; };

	void setWeight(float _weight) { weight = _weight; };
	float getWeight() { return weight; }


	//Method of the class 

	bool multiplyBricks();
	float growBrick();
	float modifySpeed();
};

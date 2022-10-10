// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AC_Bricks.generated.h"

UCLASS()
class UELAB3_BRICKSB_API AAC_Bricks : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAC_Bricks();
private:
	float color;
	FString form;
	bool protection;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Method access set and get

	void  setColor(float _color) { color = _color; };
	float getColor() { return color; }

	void setForm(FString _form) { form = _form; };
	FString getForm() { return form; }

	void setProtection(bool _protection) { protection = _protection; };
	bool getProtection() { return protection; }

	//Method of this class //vanish =desaparecer

	bool cloneBrick();
	bool vanishBrick();
	float reduceResistance();
};

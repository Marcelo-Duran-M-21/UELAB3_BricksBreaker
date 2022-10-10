// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "APW_Paddle.generated.h"

UCLASS()
class UELAB3_BRICKSB_API AAPW_Paddle : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AAPW_Paddle();
private:
	FString color;
	float size;
	float speed;
	bool shoot;
	FString texture;
	float positionX;
	float positionZ;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	//method set and get 

	void setColor(FString _color) { color = _color; }
	FString getColor() { return color; }

	void setSize(float _size) { size = _size; };
	float getSize() { return size; }

	void setShoot(bool _shoot) { shoot = _shoot; };
	bool getShoot() { return shoot; }

	void setTexture(FString _texture) { texture = _texture; };
	FString getTexture() { return texture; }

	void setPositionX(float _positionx) { positionX = _positionx; };
	float getPositionX() { return positionX; }

	void setPositionZ(float _positionz) { positionZ = _positionz; };
	float getPositionZ() { return positionZ; }


	//Method class Paddle
	void shootPaddle();
	float MovePaddle();
	bool turnPaddle();
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Tank.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class LEARNINGCPLUSPLUS_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public :
	ATank* GetControllerTank() const;
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	void AimTowardsCrosshair();
private:
	bool GetSightRayHitLocation(FVector& OutHitLocation) const;

	
};

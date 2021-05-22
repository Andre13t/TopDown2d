// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LimitOfFieldComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TOPDOWN2DUE4_API ULimitOfFieldComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	ULimitOfFieldComponent();

	UPROPERTY(BlueprintReadWrite) FVector newPoss1{};
	UPROPERTY(BlueprintReadWrite) FVector newPoss2{};
	UPROPERTY(BlueprintReadWrite) FVector newPoss3{};
	UPROPERTY(BlueprintReadWrite) FVector newPoss4{};
	
	UPROPERTY(BlueprintReadWrite) bool TopLeft{};
	UPROPERTY(BlueprintReadWrite) bool TopRight{};	
	UPROPERTY(BlueprintReadWrite) bool BottomLeft{};
	UPROPERTY(BlueprintReadWrite) bool BottomRight{};

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UFUNCTION(BlueprintCallable)void SetupBoxToChangeCamera(int32 widthMAP, int32 heightMAP, FVector BoxExtent);
	UFUNCTION(BlueprintCallable)void setCameras(bool tL, bool tR, bool bL, bool bR);
	UFUNCTION(BlueprintCallable) bool setTopLeftT();
	UFUNCTION(BlueprintCallable) bool setTopLeftF();
};

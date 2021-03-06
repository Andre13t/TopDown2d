// Fill out your copyright notice in the Description page of Project Settings.


#include "LimitOfFieldComponent.h"

// Sets default values for this component's properties
ULimitOfFieldComponent::ULimitOfFieldComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void ULimitOfFieldComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void ULimitOfFieldComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void ULimitOfFieldComponent::SetupBoxToChangeCamera(int32 widthMAP, int32 heightMAP, FVector BoxExtent)
{

	int32 sizeTotalPixelWidh = widthMAP * 16;
	int32 sizeTotalPixelHeight = heightMAP * 16;
	
	newPoss1.X -= - 8;
	newPoss1.Z +=  + 8;
	newPoss1.Y = 0;
	
	newPoss2.X = sizeTotalPixelWidh  - 8;
	newPoss2.Z +=  8;
	newPoss2.Y = 0;
		
	newPoss3.X -= 8;
	newPoss3.Z +=  + 8;
	newPoss3.Y = 0;

	newPoss4.X = sizeTotalPixelWidh - 8;
	newPoss4.Z = -sizeTotalPixelHeight + 8;
	newPoss4.Y = 0;
}

UFUNCTION(BlueprintCallable) void ULimitOfFieldComponent::setCameras(bool tL, bool tR, bool bL, bool bR)
{
	if (tL)
	{
		setTopLeftT();
	}
	else
	{
		setTopLeftF();
	}
}

UFUNCTION(BlueprintCallable) bool ULimitOfFieldComponent::setTopLeftT()
{
	return true;
}
UFUNCTION(BlueprintCallable) bool ULimitOfFieldComponent::setTopLeftF()
{
	return false;
}


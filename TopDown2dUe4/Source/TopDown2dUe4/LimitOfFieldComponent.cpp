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
	
	newPoss1.X = BoxExtent.X - 8;
	newPoss1.Z =  - BoxExtent.Z + 8;
	newPoss1.Y = 0;
	
	newPoss2.X = sizeTotalPixelWidh - BoxExtent.X - 8;//298 -42
	newPoss2.Z = -BoxExtent.Z + 8;
	newPoss2.Y = 0;
		
	newPoss3.X = BoxExtent.X - 8;
	newPoss3.Z = -sizeTotalPixelHeight + BoxExtent.Z + 8;
	newPoss3.Y = 0;

	newPoss4.X = sizeTotalPixelWidh - BoxExtent.X - 8;
	newPoss4.Z = -sizeTotalPixelHeight + BoxExtent.Z + 8;
	newPoss4.Y = 0;
}


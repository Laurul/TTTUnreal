// Fill out your copyright notice in the Description page of Project Settings.


#include "PhysicsActorCPP.h"

// Sets default values
APhysicsActorCPP::APhysicsActorCPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APhysicsActorCPP::BeginPlay()
{
	
	Super::BeginPlay();
	wrld = GetWorld();
	
}

// Called every frame
void APhysicsActorCPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	time -= DeltaTime;
	if (time <= 0) {
		time = 1.0f;
		spawnActor(FVector(FMath::RandRange(0, 7900), FMath::RandRange(0,3950), FMath::RandRange(1000, 3000)));
			
	}
}

void APhysicsActorCPP::spawnActor(FVector vec)
{
	
	wrld->SpawnActor(actorToSpawn, &vec);
}


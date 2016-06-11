// Fill out your copyright notice in the Description page of Project Settings.

#include "SGame.h"
#include "SGSkillBase.h"


// Sets default values
ASGSkillBase::ASGSkillBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASGSkillBase::BeginPlay()
{
	Super::BeginPlay();
	
	// Set the skill CD
	CurrentCD = BaseSkillInfo.DefaultCD;
	RemainingCD = CurrentCD;
}

// Called every frame
void ASGSkillBase::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );
}


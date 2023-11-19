// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAssetManager.h"
#include "AbilitySystemGlobals.h"


void UMyassetManager::StartInitialLoading()
{
	Super::StartInitialLoading();
	UAbilitySystemGlobals::Get().InitGlobalData;
}
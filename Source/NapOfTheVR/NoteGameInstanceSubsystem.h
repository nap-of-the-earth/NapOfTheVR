// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "NoteGameInstanceSubsystem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSpawnModelButtonClicked);

/**
 * 
 */
UCLASS()
class NAPOFTHEVR_API UNoteGameInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	// USubsystem interface
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	// // 取得子系統實例的靜態函數
	// UFUNCTION(BlueprintCallable, Category = "Global Events")
	// static UNoteGameInstanceSubsystem* Get(const UObject* WorldContext);

	UPROPERTY(BlueprintAssignable, Category = "Global Events")
	FOnSpawnModelButtonClicked OnSpawnModelButtonClicked;
	UFUNCTION(BlueprintCallable, Category = "Global Events")
	void TriggerSpawnModelButtonClicked();
};

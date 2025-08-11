//----------------------------------------------------------------------------------------------------
// NoteGameInstanceSubsystem.h
//----------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------
#pragma once

#include <CoreMinimal.h>
#include <Subsystems/GameInstanceSubsystem.h>
#include <NoteGameInstanceSubsystem.generated.h>

//----------------------------------------------------------------------------------------------------
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSpawnModelButtonClicked);

//----------------------------------------------------------------------------------------------------
UCLASS()
class NAPOFTHEVR_API UNoteGameInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

private:
	UPROPERTY(BlueprintAssignable, Category = "Global Events")
	FOnSpawnModelButtonClicked OnSpawnModelButtonClicked;
	UFUNCTION(BlueprintCallable, Category = "Global Events")
	void CallSpawnModelButtonClicked() const;
};

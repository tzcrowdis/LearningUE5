// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MainCharacter.generated.h"

DECLARE_DELEGATE(FRotateDelegate);
DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(float, FDynamicRotateDelegate, float, RotationSpeed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDynamicMulticastRotateDelegate, bool, bPlaySound);

UCLASS()
class FIRSTGAME_API AMainCharacter : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Controller", meta = (AllowPrivateAccess = "true"))
	class AMainPlayerController* MainPlayerController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	float RotatingActorRotate;

public:
	// Sets default values for this character's properties
	AMainCharacter();

	FORCEINLINE float GetHealth() { return Health; }
	void SetHealth(float Amount);
	FORCEINLINE float GetMaxHealth() { return MaxHealth; }
	FORCEINLINE void SetMaxHealth(float Amount) { MaxHealth = Amount; }

	FRotateDelegate RotateDelegate;
	FDynamicRotateDelegate DynamicRotateDelegate;

	UPROPERTY(BlueprintAssignable)
	FDynamicMulticastRotateDelegate DynamicMulticastRotateDelegate;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Delegates")
	bool bShouldRotatorsPlaySound;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void MoveForward(float Value);
	void MoveRight(float Value);

	void LMBDown();

	void ESCDown();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Combat")
	bool bAttacking;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Anims")
	class UAnimMontage* CountessAttackMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerStats")
	float Health;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "PlayerStats")
	float MaxHealth;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void SaveGame();

	UFUNCTION(BlueprintCallable)
	void LoadGame();

	UFUNCTION(BlueprintCallable)
	void ToggleAllRotators();

	UFUNCTION(BlueprintCallable)
	void SetRotatingActorRates(float Rate);

	UFUNCTION(BlueprintCallable)
	void PlaySoundAtRotatingActors(bool PlaySound);
};

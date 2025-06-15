// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "Animation/AnimInstance.h"
#include "MainPlayerController.h"
#include "CountessSaveGame.h"
#include "Kismet/GameplayStatics.h"
#include "FirstGame.h"
#include "DrawDebugHelpers.h"
#include "RotatingActor.h"

// Sets default values
AMainCharacter::AMainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 540.f, 0.f);

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.f;
	CameraBoom->bUsePawnControlRotation = true;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	Health = 85.f;
	MaxHealth = 100.f;

	RotatingActorRotate = 180.f;

	bShouldRotatorsPlaySound = true;
}

void AMainCharacter::SetHealth(float Amount)
{
	if (Amount > MaxHealth)
	{
		Health = MaxHealth;
	}
	else if (Amount < 0)
	{
		Health = 0;
	}
	else
	{
		Health = Amount;
	}
}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();

	MainPlayerController = Cast<AMainPlayerController>(GetController());

	UE_LOG(CountessLog, VeryVerbose, TEXT("CountessLog VeryVerbose"));
	UE_LOG(CountessLog, Verbose, TEXT("CountessLog Verbose"));
	UE_LOG(CountessLog, Warning, TEXT("CountessLog Warning"));
	UE_LOG(CountessLog, Display, TEXT("CountessLog Display"));
	UE_LOG(CountessLog, Log, TEXT("CountessLog Log"));
	UE_LOG(CountessLog, Error, TEXT("CountessLog Error"));
	//UE_LOG(CountessLog, Fatal, TEXT("CountessLog Fatal - this will crash the game!"));

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.5f, FColor::Blue, TEXT("Printing a message to the screen!"), false);
	}

	print("use of print macro");

	print_k(2, "you will only see one of these print_k messages");
	print_k(2, "you will only see one of these print_k messages");
	print_k(2, "you will only see one of these print_k messages");
	print_k(2, "you will only see one of these print_k messages");

	printf("Formatting the string with Actor name: %s", *GetName());
}

void AMainCharacter::MoveForward(float Value)
{
	if (Controller != NULL && Value != 0.f)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void AMainCharacter::MoveRight(float Value)
{
	if (Controller != NULL && Value != 0.f)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, Value);
	}
}

void AMainCharacter::LMBDown()
{
	if (bAttacking) return;
	
	bAttacking = true;

	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && CountessAttackMontage)
	{
		AnimInstance->Montage_Play(CountessAttackMontage);
	}
}

void AMainCharacter::ESCDown()
{
	if (MainPlayerController)
		MainPlayerController->TogglePauseMenu();
}

// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
	/*printf_k(1, "DeltaTime: %f", DeltaTime);

	DrawDebugPoint(GetWorld(), GetActorLocation() + FVector(0.f, 0.f, 50.f), 5.f, FColor::Blue, false, 3.f);
	DrawDebugLine(GetWorld(), FVector(0.f, 0.f, 400.f), GetActorLocation(), FColor::Red, false, -1.f);

	// single channel ray trace
	
	FHitResult HitResult;
	FVector Start = GetActorLocation() + FVector(0.f, 0.f, 75.f);
	FVector End = Start + GetActorForwardVector() * 500.f;
	FCollisionQueryParams CollisionQueryParams;
	CollisionQueryParams.AddIgnoredActor(this);
	/*
	//GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECollisionChannel::ECC_Visibility, CollisionQueryParams);
	if (HitResult.bBlockingHit)
	{
		DrawDebugSphere(GetWorld(), HitResult.Location, 15.f, 12, FColor::Red, false, 5.f);
	}
	*/
	
	// multi channel ray trace
	/*
	TArray<FHitResult> HitResults;
	GetWorld()->LineTraceMultiByChannel(HitResults, Start, End, ECollisionChannel::ECC_Visibility);
	for (int32 i = 0; i < HitResults.Num(); i++)
	{
		if (HitResults[i].bBlockingHit)
		{
			FString ActorName = HitResults[i].GetActor()->GetName();
			printf_k(i, "%d Actor Name: %s", i, *ActorName);
		}
		else
		{
			printf_k(i, "%d Failed Hit!", i);
		}
	}
	*/

	// single box trace by object (not channel)
	/*TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
	ObjectTypes.Add(EObjectTypeQuery::ObjectTypeQuery2);
	TArray<AActor*> ActorsToIgnore;
	ActorsToIgnore.Add(this);
	FHitResult BoxTraceResult;
	UKismetSystemLibrary::BoxTraceSingleForObjects(GetWorld(), Start, End, FVector(32.f, 32.f, 32.f), FRotator(), ObjectTypes, true, ActorsToIgnore, EDrawDebugTrace::ForOneFrame, BoxTraceResult, true, FColor::Red, FColor::Blue);
	if (BoxTraceResult.bBlockingHit)
		print_k(1, "Blocking Hit");*/
}

// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AMainCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMainCharacter::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAction("LMBDown", IE_Pressed, this, &AMainCharacter::LMBDown);

	PlayerInputComponent->BindAction("ESC", IE_Pressed, this, &AMainCharacter::ESCDown);
}

void AMainCharacter::SaveGame()
{
	UCountessSaveGame* SaveGameInstance = Cast<UCountessSaveGame>(UGameplayStatics::CreateSaveGameObject(UCountessSaveGame::StaticClass()));

	SaveGameInstance->Health = Health;
	SaveGameInstance->MaxHealth = MaxHealth;

	SaveGameInstance->WorldLocation = GetActorLocation();
	SaveGameInstance->WorldRotation = GetActorRotation();

	UGameplayStatics::SaveGameToSlot(SaveGameInstance, SaveGameInstance->PlayerName, SaveGameInstance->UserSlot);
}

void AMainCharacter::LoadGame()
{
	UCountessSaveGame* LoadGameInstance = Cast<UCountessSaveGame>(UGameplayStatics::CreateSaveGameObject(UCountessSaveGame::StaticClass()));

	LoadGameInstance = Cast<UCountessSaveGame>(UGameplayStatics::LoadGameFromSlot(LoadGameInstance->PlayerName, LoadGameInstance->UserSlot));

	Health = LoadGameInstance->Health;
	MaxHealth = LoadGameInstance->MaxHealth;

	SetActorLocation(LoadGameInstance->WorldLocation);
	SetActorRotation(LoadGameInstance->WorldRotation);
}

void AMainCharacter::ToggleAllRotators()
{
	RotateDelegate.ExecuteIfBound();
	
	/*
	TSubclassOf<AActor> WorldClassObject = ARotatingActor::StaticClass();
	TArray<AActor*> ActorsOfClass;
	UGameplayStatics::GetAllActorsOfClass(this, WorldClassObject, ActorsOfClass);
	for (AActor* Actor : ActorsOfClass)
	{
		ARotatingActor* RotatingActor = Cast<ARotatingActor>(Actor);
		if (RotatingActor)
			RotatingActor->ToggleRotate();
	}
	*/
}

void AMainCharacter::SetRotatingActorRates(float Rate)
{
	float PreviousRotationRate = DynamicRotateDelegate.Execute(Rate);
	printf("Previous Rotation Rate: %f", PreviousRotationRate);
}

void AMainCharacter::PlaySoundAtRotatingActors(bool PlaySound)
{
	DynamicMulticastRotateDelegate.Broadcast(PlaySound);
	print("playing sound");
}
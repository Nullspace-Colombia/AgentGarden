 //  Copyright (c) 2023 Unray. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Networking.h"
#include "Sockets.h"
#include "Async/Async.h"
#include "SocketSubsystem.h"
#include "Connector.generated.h"

//Declaring the delegates signature
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDataReception, const TArray<uint8>&, Arr);

UCLASS()
class UNRAY_API AConnector : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AConnector();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadOnly, Category = "Socket")
		bool IsConnectionOpen = false;

	UPROPERTY(BlueprintReadOnly, Category = "Socket")
		bool connected = false;

	bool WaitingForConnection = false;

	TFuture<void> ClientConnectionFinishedFuture;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called when the game ends
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	float data = 0;

	int32 bytesread = 0;

	float* data_ptr;
	void Close_Connection();

	UFUNCTION(BlueprintCallable, Category = "Socket")
		void Conduct_Connection();

	UFUNCTION(BlueprintCallable, Category = "Socket")
		TArray<float>  GetAction(TArray<uint8> msg);

	UFUNCTION(BlueprintCallable, Category = "Socket")
		void SendState(TArray<float> Observations, float Reward, bool Done);

	UFUNCTION(BlueprintCallable, Category = "Socket")
		TArray<double> AddAgent(int ID, TArray<float> Observations, float Reward, bool Done);

	UFUNCTION(BlueprintPure, meta = (CommutativeAssociativeBinaryOperator = "true"), Category = "Socket")
		TArray<double> GetAgentsInfo(TArray<double> A, TArray<double> B);


	UFUNCTION(BlueprintCallable, Category = "Socket")
		void SendMultiagentsInfo(TArray<double> Multiagents);
	void SendData(TArray<double> msg);

	UFUNCTION(BlueprintCallable, Category = "Socket")
		void StartServer(FString ipAddress, int32 port);

	UPROPERTY(BlueprintAssignable)
		FOnDataReception OnDataReceptionDelegate;

	FSocket* ListenSocket;
	FSocket* ConnectionSocket;
};

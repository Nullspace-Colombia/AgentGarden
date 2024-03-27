// Copyright (c) 2023 Unray. All rights reserved.


#include "Connector.h"

// Sets default values
AConnector::AConnector()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AConnector::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AConnector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AConnector::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	Close_Connection();
}

// Called to bind functionality to input
void AConnector::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


void AConnector::Conduct_Connection() {

	if (WaitingForConnection) {
		TSharedRef<FInternetAddr> RemoteAddress = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
		bool hasConnection = false;
		if (ListenSocket->HasPendingConnection(hasConnection) && hasConnection) {
			ConnectionSocket = ListenSocket->Accept(*RemoteAddress, TEXT("Connection"));
			WaitingForConnection = false;
			UE_LOG(LogTemp, Warning, TEXT("incoming connection"));
			connected = true;
			// Start Recv Thread
			ClientConnectionFinishedFuture = Async(EAsyncExecution::Thread, [&]() {
				UE_LOG(LogTemp, Warning, TEXT("recv thread started in port: %d"), ListenSocket->GetPortNo());
				//Sending a confirmation array:

				while (IsConnectionOpen) {
					uint32 size;
					TArray<uint8> ReceivedData;

					if (ConnectionSocket->HasPendingData(size)) {



						ReceivedData.Init(0, 128);
						ConnectionSocket->Recv(ReceivedData.GetData(), ReceivedData.Num(), bytesread);

						OnDataReceptionDelegate.Broadcast(ReceivedData);

						ReceivedData.Reset();
					}


				}
				});

		}
	}
}

void AConnector::StartServer(FString ipAddress, int32 port) {

	UE_LOG(LogTemp, Warning, TEXT("Openning Connection"));
	IsConnectionOpen = true;
	WaitingForConnection = true;

	FIPv4Address IPAddress;
	FIPv4Address::Parse(ipAddress, IPAddress);
	FIPv4Endpoint Endpoint(IPAddress, (uint16)port);

	ListenSocket = FTcpSocketBuilder(TEXT("TcpSocket")).AsReusable();

	ISocketSubsystem* SocketSubsystem = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM);
	ListenSocket->Bind(*SocketSubsystem->CreateInternetAddr(Endpoint.Address.Value, Endpoint.Port));
	ListenSocket->Listen(1);
	UE_LOG(LogTemp, Warning, TEXT("Listening"));

}


void AConnector::Close_Connection() {
	if (IsConnectionOpen) {
		UE_LOG(LogTemp, Warning, TEXT("Closing Connection"));
		IsConnectionOpen = false;

		ListenSocket->Close();
	}
}

TArray<float> AConnector::GetAction(TArray<uint8> msg) {

	TArray<float> data_rcv;
	data_ptr = reinterpret_cast<float*>(msg.GetData());

	int buff_size = bytesread / 4;

	for (int idx = 0; idx < (int)buff_size; idx++) {
		data = *(data_ptr + idx);
		data_rcv.Add(data);
	}
	return data_rcv;

}

void AConnector::SendData(TArray<double> msg) {


	int32 BytesSent = 0;
	int32 BufferSize = msg.Num() * 8;

	ConnectionSocket->Send(reinterpret_cast<uint8*>(msg.GetData()), BufferSize, BytesSent);

}

void AConnector::SendMultiagentsInfo(TArray<double> Multiagents) {
	SendData(Multiagents);
}

void AConnector::SendState(TArray<float> Observations, float Reward, bool Done) {

	TArray<double> state;
	double obs_data;
	for (int i = 0; i < Observations.Num(); i++) {
		obs_data = *(Observations.GetData() + i);
		state.Add(StaticCast<double>(obs_data));

	}
	double s_reward = StaticCast<double>(Reward);
	double s_done = StaticCast<double>(Done);
	state.Add(s_reward);
	state.Add(s_done);
	SendData(state);

}

// Orden: Identificador, Longitud de observaciones, Arreglo de observaciones, Reward, Done
TArray<double> AConnector::AddAgent(int ID, TArray<float> Observations, float Reward, bool Done) {
	TArray<double> AgentInfo;
	double s_id = StaticCast<double>(ID);
	AgentInfo.Add(s_id);
	double obs_data;
	for (int i = 0; i < Observations.Num(); i++) {
		obs_data = *(Observations.GetData() + i);
		AgentInfo.Add(StaticCast<double>(obs_data));

	}
	double s_reward = StaticCast<double>(Reward);
	double s_done = StaticCast<double>(Done);

	AgentInfo.Add(s_reward);
	AgentInfo.Add(s_done);

	return AgentInfo;
}

TArray<double> AConnector::GetAgentsInfo(TArray<double> A, TArray<double> B) {
	TArray<double> Agents;
	Agents = A;
	Agents.Append(B);
	return Agents;
}

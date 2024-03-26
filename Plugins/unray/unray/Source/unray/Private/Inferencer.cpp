// Fill out your copyright notice in the Description page of Project Settings.


#include "Inferencer.h"

// Sets default values
AInferencer::AInferencer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInferencer::BeginPlay()
{
	Super::BeginPlay();
	configureActionSpace();

	if (ModelData)
	{
		UE_LOG(LogTemp, Warning, TEXT("PreLoadedModelData loaded %s"), *ModelData->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("PreLoadedModelData is not set, please assign it in the editor"));
	}
	if (ModelData)
	{
		TWeakInterfacePtr<INNERuntimeCPU> Runtime = UE::NNE::GetRuntime<INNERuntimeCPU>(FString("NNERuntimeORTCpu"));
		if (Runtime.IsValid())
		{
			UE_LOG(LogTemp, Warning, TEXT("Valid Runtime"));

			TUniquePtr<UE::NNE::IModelCPU> Model = Runtime->CreateModel(ModelData);
			if (Model.IsValid())
			{
				ModelInstance = Model->CreateModelInstance();

				if (ModelInstance.IsValid())
				{

					UE_LOG(LogTemp, Warning, TEXT("Valid Model Instance"));

					TConstArrayView<UE::NNE::FTensorDesc> InputTensorDescs = ModelInstance->GetInputTensorDescs();

					UE::NNE::FSymbolicTensorShape SymbolicInputTensorShape = InputTensorDescs[0].GetShape();
					TArray<UE::NNE::FTensorShape> InputTensorShapes = { UE::NNE::FTensorShape::MakeFromSymbolic(SymbolicInputTensorShape) };

					ModelInstance->SetInputTensorShapes(InputTensorShapes);

					OutputTensorDescs = ModelInstance->GetOutputTensorDescs();

					UE::NNE::FSymbolicTensorShape SymbolicOutputTensorShape = OutputTensorDescs[0].GetShape();
					OutputTensorShapes = { UE::NNE::FTensorShape::MakeFromSymbolic(SymbolicOutputTensorShape) };



				}
				else
				{
					UE_LOG(LogTemp, Error, TEXT("Failed to create the model instance"));
				}
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("Failed to create the model"));
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Cannot find runtime NNERuntimeORTCpu, please enable the corresponding plugin"));
		}
	}
}


void AInferencer::configureActionSpace() {
	if (actionSpaceType == ActionSpaceType::Box || actionSpaceType == ActionSpaceType::MultiDiscrete || actionSpaceType == ActionSpaceType::MultiBinary) {
		float num;
		Shape.ParseIntoArray(Out, TEXT(","), true);

		for (int i = 0; i < Out.Num(); i++) {
			num = FCString::Atof(*Out[i]);
			nums.Add(num);
		}
	}
	else if (actionSpaceType == ActionSpaceType::Discrete) {
		float num;
		num = FCString::Atof(*Shape);
		nums.Add(num);
	}

}

TArray<float> AInferencer::makeInference(TArray<double> observations) {

	InputBindings.SetNumZeroed(1);
	InputBindings[0].Data = observations.GetData();
	InputBindings[0].SizeInBytes = observations.Num() * sizeof(double);

	OutputData.SetNumUninitialized(OutputTensorShapes[0].Volume());
	OutputBindings.SetNumZeroed(1);
	OutputBindings[0].Data = OutputData.GetData();
	OutputBindings[0].SizeInBytes = OutputData.Num() * sizeof(float);

	if (ModelInstance->RunSync(InputBindings, OutputBindings) != 0)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to run the model"));
	}
	Actions.Reset();
	TArray<float> output_actions = getActions(OutputData);
	return output_actions;

}

TArray<float> AInferencer::getActions(TArray<float> OutputD) {

	
	float max = 0;
	float value;
	int count = 0;
	float action_value;
	float std_dev;
	float mean;
	TArray<float> values;
	TArray<float> output_values;
	std::default_random_engine generator;

	if (actionSpaceType == ActionSpaceType::Box) {
		for (int i = 0; i < nums.Num(); i++) {
			for (int j = 0; j < nums[i]; j++) {
				std_dev = exp(OutputD[j * 2 + count]);
				mean = OutputD[j * 2 + count + 1];
				std::normal_distribution<float> distribution(mean, std_dev);
				action_value = distribution(generator);
				Actions.Add(action_value);
			}

			count = count + (nums[i] * 2);
		}
	}
	else {
		float sum = 0;
		float temp;
		float aux;

		for (int i = 0; i < OutputD.Num(); i++) {
			temp = exp(OutputD[i]);
			output_values.Add(temp);
			sum += temp;
		}
		for (int i = 0; i < output_values.Num(); i++) {
			aux = output_values[i] / sum;
			values.Add(aux);
		}
		for (int i = 0; i < nums.Num(); i++) {
			for (int j = 0; j < nums[i]; j++) {
				value = values[j + count];
				if (value > max) {
					max = value;
					action_value = j;
				}
			}
			Actions.Add(action_value);
			count = count + nums[i];
			max = 0;
		}
	}
	
	return Actions;
}
// Called every frame
void AInferencer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


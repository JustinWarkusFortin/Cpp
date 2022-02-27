#include "Vehicle.h"
#include <iostream>
using namespace std;
#pragma once

class GasolineVehicle : public Vehicle {
public:
	float currentGasoline, maximumGasoline;

	GasolineVehicle(float maxGas, float efficiency);
	float calculateRange();
	float percentEnergyRemaining();
	void drive(float km);
	~GasolineVehicle();
};
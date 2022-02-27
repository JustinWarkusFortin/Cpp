#include "Vehicle.h"
#include <iostream>
using namespace std;
#pragma once

class ElectricVehicle : public Vehicle {
public:

	float currentCharge, maximumCharge;
	ElectricVehicle(float maxCharge, float efficiency);
	float calculateRange();
	float percentEnergyRemaining();
	void drive(float km);
	~ElectricVehicle();
};
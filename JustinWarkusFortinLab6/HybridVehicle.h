#include "ElectricVehicle.h"
#include "GasolineVehicle.h"

#pragma once

class HybridVehicle : public ElectricVehicle, public GasolineVehicle {
public:
	HybridVehicle(float gasMax, float gasEfficiency, float chargeMax, float electricEfficiency);
	float calculateRange();
	float percentEnergyRemaining();
	void drive(float km);
	~HybridVehicle();
};
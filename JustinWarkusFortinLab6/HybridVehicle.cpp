#include "HybridVehicle.h"

HybridVehicle::HybridVehicle(float gasMax, float gasEfficiency, float chargeMax, float electricEfficiency) : GasolineVehicle(gasMax, gasEfficiency)  , ElectricVehicle(chargeMax, electricEfficiency){
};
float HybridVehicle::calculateRange() {
	return  (float)(currentCharge * 100 / ElectricVehicle::engineEfficiency) + (currentGasoline * 100 / GasolineVehicle::engineEfficiency);
};
float HybridVehicle::percentEnergyRemaining() {
	return  (float)((currentCharge / maximumCharge * 100.0) + (currentGasoline / maximumGasoline * 100.0)) / 2;
};
void HybridVehicle::drive(float km) {
	if (km > ElectricVehicle::calculateRange()) {
		km -= ElectricVehicle::calculateRange();
		currentCharge = 0;
	}
	if (currentCharge > 0) {
		currentCharge -= (km / 100) * ElectricVehicle::engineEfficiency;
	}
	else {
		currentGasoline -= (km / 100) * GasolineVehicle::engineEfficiency;
		if (currentGasoline < 0) {
			cout << "Your car has run out of energy!" << endl;
		}
	}
};
HybridVehicle::~HybridVehicle() {
	cout << "In Hybrid Vehicle Destructor" << endl;
};
#include "GasolineVehicle.h"


float currentGasoline, maximumGasoline;

GasolineVehicle::GasolineVehicle(float maxGas, float efficiency) {
	maximumGasoline = maxGas;
	currentGasoline = maximumGasoline;
	engineEfficiency = efficiency;
};
float GasolineVehicle::calculateRange() {
	return  (float)currentGasoline * 100 / engineEfficiency;
}
float GasolineVehicle::percentEnergyRemaining() {
	return  (float)(currentGasoline / maximumGasoline * 100.0);
}
void GasolineVehicle::drive(float km) {
	if (currentGasoline < 0) {
		cout << "Your car is out of energy!" << endl;
		return;
	}
	currentGasoline -= (km / 100) * engineEfficiency;

	if (currentGasoline < 0) {
		cout << "Your car is out of energy!" << endl;
		return;
	}
}
GasolineVehicle::~GasolineVehicle() {
	cout << "In Gasoline Vehicle Destructor" << endl;
}

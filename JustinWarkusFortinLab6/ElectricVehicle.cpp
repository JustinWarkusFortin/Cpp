#include "ElectricVehicle.h"
#pragma once

float currentCharge, maximumCharge;

ElectricVehicle::ElectricVehicle(float maxCharge, float efficiency) {
	maximumCharge = maxCharge;
	currentCharge = maximumCharge;
	engineEfficiency = efficiency;
};
float ElectricVehicle::calculateRange() {
	return  (float)currentCharge * 100 / engineEfficiency;
}
float ElectricVehicle::percentEnergyRemaining() {
	return (float)(currentCharge / maximumCharge * 100.0);
}
void ElectricVehicle::drive(float km) {
	if (currentCharge < 0) {
		cout << "Your car is out of energy!" << endl;
		return;
	}
	currentCharge -= (km / 100) * engineEfficiency;

	if (currentCharge < 0) {
		cout << "Your car is out of energy!" << endl;
		return;
	}
}
ElectricVehicle::~ElectricVehicle() {
	cout << "In Electric Vehicle Destructor" << endl;   //Change ClassName to either 
}

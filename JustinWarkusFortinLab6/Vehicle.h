#include <iostream>
#pragma once
using namespace std;
class Vehicle {
public:
	int numWheels, numDoors;
	float engineEfficiency;
	Vehicle(int w, int d);
	Vehicle(int w);
	Vehicle();
	virtual ~Vehicle();
	void printVehicle();
	Vehicle(Vehicle &);
	Vehicle(Vehicle *);
	virtual float calculateRange()=0;
	virtual float percentEnergyRemaining()=0;
	virtual void drive(float km)=0;
};

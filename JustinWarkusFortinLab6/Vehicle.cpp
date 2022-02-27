#include "Vehicle.h"
#include <iostream>
using namespace std;
#pragma once
Vehicle::Vehicle(int w, int d) {
	numWheels = w;
	numDoors = d;

	//cout << "In constructor with 2 parameters" << endl;
};
Vehicle::Vehicle(int w) : Vehicle(w, 4) {
	//cout << "In constructor with 1 parameters, number of wheels = " << w << endl;
};
Vehicle::Vehicle() : Vehicle(4) {
	//cout << "In constructor with 0 parameters" << endl;
};
Vehicle::~Vehicle() {
	cout << "In  Vehicle Destructor " << endl;
};
void Vehicle::printVehicle() {
	//cout << "Number of wheels: " << Vehicle::numWheels << " Number of doors: " << Vehicle::numDoors << endl;
};
Vehicle::Vehicle(Vehicle& copy) :Vehicle(copy.numWheels, copy.numDoors)
{
	//cout << "Copying from " << &copy << endl;
}
Vehicle::Vehicle(Vehicle* copy) : Vehicle(*copy)
{
	//cout << "Copying from " << copy << endl;
}

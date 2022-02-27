#include "Vehicle.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle(int w, int d) {
	numWheels = w;
	numDoors = d;

	cout << "In constructor with 2 parameters" << endl;
};
Vehicle:: Vehicle(int w): Vehicle(w, 4) {
	cout << "In constructor with 1 parameter" << endl;
	};
Vehicle:: Vehicle() : Vehicle(4) {
	cout << "In constructor with 0 parameters" << endl;
	};
Vehicle::~Vehicle() {
	cout << "In Destructor " << endl;
}; void Vehicle::printVehicle() {
	cout << "Number of wheels: " <<Vehicle::numWheels << " Number of doors: " << Vehicle::numDoors << endl;
};
Vehicle::Vehicle(Vehicle& copy) {};
Vehicle::Vehicle(Vehicle* copy) : Vehicle(*copy) {};
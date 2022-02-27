#include "Vehicle.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle(int w, int d) {
	numWheels = w;
	numDoors = d;

	cout << "In constructor with 2 parameters" << endl;
};
Vehicle::Vehicle(int w) : Vehicle(w, 4) {
	cout << "In constructor with 1 parameters, number of wheels = " << w << endl;
};
Vehicle:: Vehicle() : Vehicle(4) {
	cout << "In constructor with 0 parameters" << endl;
};
Vehicle::~Vehicle() {
	cout << "In Destructor " << endl;
}; 
void Vehicle::printVehicle() {
	cout << "Number of wheels: " <<Vehicle::numWheels << " Number of doors: " << Vehicle::numDoors << endl;
};
Vehicle::Vehicle(Vehicle& copy) :Vehicle(copy.numWheels, copy.numDoors)
{
	cout << "Copying from " << &copy << endl;
}
Vehicle::Vehicle(Vehicle* copy) : Vehicle(*copy)
{
	cout << "Copying from " << copy << endl;
}
Vehicle& Vehicle::operator=(const Vehicle& v)
{
	
	numDoors = v.numDoors;
	numWheels = v.numWheels;
	return *this;
}
bool Vehicle::operator==(const Vehicle& v) {
	if (v.numDoors == numDoors && v.numWheels == numWheels) {
		return true;
	}
	return false;
};
bool Vehicle::operator!=(const Vehicle& v) {
	if (v.numDoors != numDoors && v.numWheels != numWheels) {
		return true;
	}
	return false;
};
Vehicle Vehicle::operator++(int i) {
	Vehicle copy(numWheels, numDoors);
	++numDoors;
	++numWheels;

	return copy;
};
Vehicle Vehicle::operator++() {
	++numDoors;
	++numWheels;

	return Vehicle(numWheels, numDoors);
};
Vehicle Vehicle::operator--(int i) {
	Vehicle copy(numWheels, numDoors);
	--numDoors;
	--numWheels;

	return copy;
};
Vehicle Vehicle::operator--() {
	--numDoors;
	--numWheels;

	return Vehicle(numWheels, numDoors);
};
ostream& operator<< (ostream& cout, const Vehicle& v) {
	return cout << "Number of Wheels: " << v.numWheels << " Number of doors: " << v.numDoors << endl;
};
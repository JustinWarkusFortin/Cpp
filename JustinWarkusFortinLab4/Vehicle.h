#pragma once
class Vehicle {
public:
	int numWheels = 0, numDoors = 0;
public:
	Vehicle(int w, int d);
	Vehicle(int w);
	Vehicle();
	~Vehicle();
	void printVehicle();
	Vehicle(Vehicle &);
	Vehicle(Vehicle *);
};
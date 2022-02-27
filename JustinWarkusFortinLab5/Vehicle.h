#include <iostream>
#pragma once
using namespace std;
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
	Vehicle& operator=(const Vehicle& v);
	bool operator==(const Vehicle&);
	bool operator!=(const Vehicle&);
	Vehicle operator++(int i);
	Vehicle operator++();
	Vehicle operator--(int i);
	Vehicle operator--();
	friend ostream& operator<< (ostream&, const Vehicle&);
};
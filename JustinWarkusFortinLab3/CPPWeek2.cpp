// CPPWeek2.cpp : Defines the entry point for the application.
//

#include "CPPWeek2.h"
#include<iostream>
using namespace std;


class MySecondClass {
public:
	MySecondClass() {
		cout << "In MySecondClass();" << endl;
	}

};

class MyFirstClass {
protected:
	int age = 0;
	char *firstName = "", *lastName = "";
	MySecondClass second;
public:							 //int,	char*,	  char*
	MyFirstClass() : MyFirstClass(420, "Generic","Name") {
		cout << "In myFirstClass()" << endl;
	};
	MyFirstClass(int a, char* f, char* l) {
		setAge(a);
		setFirstName(f);
		setLastName(l);
		cout << "In myFirstClass(int a, char* f, char* l)" << endl;
	};

	~MyFirstClass() {
		cout << "In ~MyFirstClass()" << endl;
	}
	int getAge() { return age; }
	
protected:
	void setAge(int a) { age = a; }
	void setFirstName(char* f) { firstName = f; }
	void setLastName(char* l) { lastName = l; }
};
namespace A {
	namespace cst8219 {
		int main(int argc, char** argv) {
			cout << "Hello Worldception!" << endl;
			return 0;
		};
	}
}

namespace CST8219 {

	class Vehicle {
	private:
		int numWheels = 0, numDoors = 0;
	public:
		Vehicle(int w, int d) {
			numWheels = w;
			numDoors = d;

			cout << "In constructor with 2 parameters" << endl;
		}

		Vehicle(int w) : Vehicle(w, 4) {
			cout << "In constructor with 1 parameter" << endl;
		};

		Vehicle() : Vehicle(4) {
			cout << "In constructor with 0 parameters" << endl;
		};

		~Vehicle() {
			cout << "In Destructor " << endl;
		};
	};
}
using namespace CST8219;

int main(int argc, char** argv)
{
	char choice = '2';
	int d, w;
	Vehicle v1;
	Vehicle v2(4);
	Vehicle v3(4, 2);
	cout << "Vehicle takes "<< sizeof(v1) << endl;
	cout << "Vehicle takes " << sizeof(v2) << endl;
	cout << "Vehicle takes " << sizeof(v3) << endl;
	Vehicle* pVehicle;

	do {
		cout << "New vehicle (any input) or q for quit" << endl;
		cin >> choice;
		if (choice == 'q') {
			return 0;
		}
	DOOR:
		cout << "Enter number of doors: " << endl;
		cin >> d;
		if (d < 0 || cin.fail()) {
			cin.clear();
			cin.ignore(10000, '\n');
			goto DOOR;
		}
	WHEEL:
		cout << "Enter number of wheels: " << endl;
		cin >> w;
		if (w < 0 || cin.fail()) {
			cin.clear();
			cin.ignore(10000, '\n');
			goto WHEEL;
		}
		pVehicle = new Vehicle(d, w);
		pVehicle->~Vehicle();
	} while (choice != 'q');
	return 0;
} 

//Hybrid or Virtual inheritance

#include <iostream>
using namespace std;

//base clas
class Vehicle
{
	//create constructor with parameter - vehicleNumber
	public : 
		Vehicle(int vehicleNumber)
		{
			cout << "Vehicle Number : " << vehicleNumber << endl;
		}
		Vehicle(int vehicleNumber, int anotherValue)
		{
			cout << "Vehicle constuctor with extra value called" << endl;
		}
};

//base class
class Fare
{
	//create construcotr with parameter - fareAmount
	public:
		Fare(int fareAmount)
		{
			cout << "Fare amount : " << fareAmount << endl;
		}
};

//sub class
class Car : public Vehicle
{

};

//sub class
//class Bus : public Fare, public Vehicle // Constructor call sequence - Fare, Vehicle, Bus
//The destructors are called in reverse order of the constructors
class Bus : public Vehicle, public Fare // Constructor call sequence - Vehicle, Fare, Bus
{
	//create constructor with parameters - vehicleNumber and fareAmount
	public:
		Bus(int vehicleNumber, int fareAmount) : Vehicle(vehicleNumber, 12), Fare(fareAmount)
		{
			cout << "Bus constructor " << endl;
		}

};

int main89898()
{
	Bus obj(456, 20);
	return 0;
}

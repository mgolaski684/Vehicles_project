#include <iostream>
#include <string>
#include "Vehicles.h"
using namespace std;

class Vehicle {
public:
	int m_num_tires;
	int m_weight;
	int m_num_passengers;
	string m_model;

	Vehicle(int num_tires = 4, int weight = 80, int num_passengers = 5, string model = "")
		: m_num_tires(num_tires), m_weight(weight), m_num_passengers(num_passengers), m_model(model) 
	{
	}
	string getmodel() const { return m_model;}

};

class Car : public Vehicle {
public:
	string m_radio;
	int m_num_door;

	Car(string radio = "", int num_door = 4)
		: m_radio(radio), m_num_door(num_door)
	{
	}
};

class Bike : public Vehicle {
public:
	int m_helmet_size;

	Bike(int helmet_size = 15)
		: m_helmet_size(helmet_size)
	{
	}
};
int main()
{
	Car expedition;
	expedition.m_model = "expedition";
	cout << expedition.getmodel() << '\n';
	return 0;
}
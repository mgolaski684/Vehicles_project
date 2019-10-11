#include <string>
#include <iostream>
#include "Vehicles.h"
using namespace std;
int main()
{
	Car expedition;
	expedition.m_model = "expedition";
	cout << expedition.getmodel() << '\n';
	return 0;
}
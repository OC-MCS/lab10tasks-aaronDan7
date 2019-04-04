#ifndef CARGOSHIP_H
#define CARGOSHIP_H

#include "Ship.h"
#include <iostream>
#include <string>

using namespace std;

class CargoShip : public Ship 
{
private:
	int maxWeight;
public:
	CargoShip(int maxCap, string n, string y) :
		Ship(n, y)
	{
			maxWeight = maxCap;
	}
	virtual void print();
};

#endif
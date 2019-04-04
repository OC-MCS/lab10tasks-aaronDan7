#ifndef CRUISESHIP_H
#define CRUISESHIP_H

#include "Ship.h"
#include <iostream>
#include <string>

using namespace std;

class CruiseShip : public Ship 
{
private:
	int maxPass;
public:
	CruiseShip(int maxNum, string n, string y) :
		Ship(n, y) 
	{
		maxPass = maxNum;
	}
	virtual void print();
};

#endif
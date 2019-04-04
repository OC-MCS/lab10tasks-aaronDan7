#pragma once
#ifndef ODOMETER_H
#define ODOMETER_H

#include <iostream>
#include "FuelGauge.h"

using namespace std;

class Odometer;
class FuelGauge; 
class Odometer
{
private:
	int odo;
	int driven;
	FuelGauge *fuel;

public:
	Odometer(int o, FuelGauge * fg);
	int getMileage();
	Odometer operator++();
	Odometer operator++(int);
	void decrease(int d);
};

#endif
// test commit
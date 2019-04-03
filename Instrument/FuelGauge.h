#pragma once
#ifndef FUELGAUGE_H
#define FUELGAUGE_H
#include <iostream>
using namespace std;


class FuelGauge
{
private:
	int galls;
public:
	FuelGauge();
	FuelGauge(int g);
	int getFuelLeft();
	FuelGauge operator++();
	FuelGauge operator++(int);
	FuelGauge operator--();
	FuelGauge operator--(int);
	void refuel();
};

#endif

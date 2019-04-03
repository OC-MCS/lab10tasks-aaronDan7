#include "FuelGauge.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std; 

FuelGauge::FuelGauge()
{
	galls = 0;
}

FuelGauge::FuelGauge(int g)
{
	if (g < 0)
	{
		cout << "no negative fuel values" << endl;
		galls = 0;
	}
	else if (g > 15)
	{
		cout << "max fuel is 15, decreasing level" << endl;
		galls = 15;
	}
	else
	{
		galls = g;
	}
}

int FuelGauge::getFuelLeft()
{
	return galls;
}

FuelGauge FuelGauge::operator++()
{

	if (galls == 15)
	{
		cout << "Tank is full!" << endl;
	}
	else
	{
		++galls;
	}
	return *this;
}

FuelGauge FuelGauge::operator++(int)
{

	if (galls == 15)
	{
		cout << "Tank is full" << endl;
	}
	else
	{
		galls++;
	}
	return *this;
}

FuelGauge FuelGauge::operator--()
{
	if (galls == 0)
	{
		cout << "Tank is empty" << endl;
	}
	else {
		--galls;
	}
	return *this;
}

FuelGauge FuelGauge::operator--(int)
{
	if (galls == 0)
	{
		cout << "Tank is empty" << endl;
	}

	else
	{
		galls--;
	}

	return *this;
}

void FuelGauge::refuel()
{
	galls = 15;
}
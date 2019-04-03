#include "Odometer.h" 
#include "FuelGauge.h"

using namespace std;

Odometer::Odometer(int o = 0, FuelGauge *fg = new FuelGauge)
{
	if (o < 0)
	{
		odo = 0;
		driven = 0;
		fuel = fg;
	}
	else if (o > 999999)
	{
		cout << "miles cap at 999999, now resetting" << endl;
		driven = 0;
		fuel = fg;
	}
	else
	{
		odo = o;
		driven = 0;
		fuel = fg;
	}
}

int Odometer::getMileage()
{
	return odo;
}

Odometer Odometer::operator++()
{
	if (odo == 999999)
	{
		++driven;
		odo = 0;
		decrease(driven);
	}
	else
	{
		++driven;
		++odo;
		decrease(driven);
	}
	return *this;
}

Odometer Odometer::operator++(int)
{
	if (odo == 999999)
	{
		driven++;
		odo = 0;
		decrease(driven);
	}
	else
	{
		driven++;
		odo++;
		decrease(driven);
	}
	return *this;
}
void Odometer::decrease(int d)
{
	if (d % 24 == 0)
	{
		cout << "Another 24 miles driven ";
		cout << "Decreasing fuel by 1 gallon" << endl;
		(*fuel)--;
	}
}
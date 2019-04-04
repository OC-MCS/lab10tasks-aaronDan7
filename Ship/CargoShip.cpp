#include "CargoShip.h"
#include "Ship.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

void CargoShip::print()
{
	cout << "Name: " << name << endl;
	cout << "Max Capacity: " << maxWeight << endl;
}

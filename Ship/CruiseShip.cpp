#include "CruiseShip.h"
#include "Ship.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

void CruiseShip::print()
{
	cout << "Name: " << name << endl;
	cout << "Max occupancy: " << maxPass << endl;
}

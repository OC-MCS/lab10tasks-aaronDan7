#include "Ship.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

Ship::Ship(string n, string y)
{
	name = n;
	year = y;
}

void Ship::print()
{
	cout << "name: " << name << endl;
	cout << "year: " << year << endl;
}

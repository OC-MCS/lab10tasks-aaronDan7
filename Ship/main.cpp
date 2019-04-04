#include <iostream>
#include <string>
#include <iomanip>
#include "Ship.h"
#include "CruiseShip.h"
#include "CargoShip.h"

using namespace std;

int main()
{
	Ship *ships[3] = 
	{
		new Ship("test", "2019"),
		new CruiseShip(2000, "name", "2019"),
		new CargoShip(15000, "yeah", "2019")
	};

	for (int i = 0; i < 3; i++) 
	{
		ships[i]->print();
		cout << endl;
	}

	return 0;
}
#include <iostream>
#include <iomanip>
#include "FuelGauge.h"
#include "Odometer.h"

using namespace std;


int main()
{
	cout << "Creating a fuel gauge and an odometer...\n";
	FuelGauge *fgauge = new FuelGauge;
	Odometer ometer(0, fgauge);
	cout << "Done!\n\n";
	cout << "Amount of fuel left: " << fgauge->getFuelLeft();
	cout << " galls.\n";
	cout << "Car Mileage: " << ometer.getMileage() << " miles.\n\n";
	cout << "Refueling car...\n";
	fgauge->refuel();
	cout << "Amount of fuel left: " << fgauge->getFuelLeft();
	cout << " galls.\n\n";
	cout << "Now driving for 24 miles" << endl;

	for (int counter = 0; counter < 24; counter++) 
	{
		ometer++;
		cout << "Odometer :" << setw(7) << ometer.getMileage();
		cout << " miles.";
		cout << "\tFuel left: " << setw(3) << fgauge->getFuelLeft();
		cout << endl;
	}

	cout << "\nNow driving until car runs out...\n";
	cout << "Current mileage: " << ometer.getMileage() << endl;
	cout << "Expected mileage when car runs out: ";
	cout << ometer.getMileage() + 24 * fgauge->getFuelLeft() << endl;

	while (fgauge->getFuelLeft() > 0) 
	{
		ometer++;
		cout << "Odometer :" << setw(7) << ometer.getMileage();
		cout << " miles.";
		cout << "\tFuel left: " << setw(3) << fgauge->getFuelLeft();
		cout << endl;
	}

	cout << "\nAdding 1 gallon of fuel\n";
	(*fgauge)++;
	cout << "Fuel left: " << fgauge->getFuelLeft() << endl;
	cout << "\nNow creating another Odometer object\n";
	Odometer ometer2(999990, fgauge);  
	cout << "Mileage: " << ometer2.getMileage() << endl;
	cout << "\nRunning car for another 24 miles...\n";

	while (fgauge->getFuelLeft() > 0)
	{
		++ometer2;
		cout << "Odometer :" << setw(7) << ometer2.getMileage();
		cout << " miles.";
		cout << "\tFuel left: " << setw(3) << fgauge->getFuelLeft();
		cout << endl;
	}
	cout << "\nTank is now empty. Now trying to decrease ";
	cout << "fuel by 1 gallon" << endl;

	--(*fgauge);

	cout << "\nNow refueling car\n";
	fgauge->refuel();
	cout << "Done!\n";
	cout << "Current fuel level: " << fgauge->getFuelLeft() << endl;
	cout << "\nNow attempting to add 1 gallon\n";
	++(*fgauge);

	delete fgauge;

	return 0;
}
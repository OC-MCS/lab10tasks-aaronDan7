#include <iostream>
#include <iomanip>
#include "ProductionWorker.h"

using namespace std;

int main()
{
	ProductionWorker worker;

	cout << fixed << setprecision(2);

	worker.setName("John Smith");
	worker.setNumber(1234);
	worker.setHireDate(8, 12, 2010);
	worker.setShift(2);
	worker.setPayRate(15.5);

	cout << "Now displaying data" << endl;
	cout << "Name: " << worker.getName() << endl;
	cout << "Employee Number: " << worker.getNumber() << endl;
	cout << "Hire Date: " << worker.getHireDate() << endl;
	cout << "Working shift: " << worker.getShift() << endl;
	cout << "Pay rate: $" << worker.getPayRate() << "/hr" << endl;

	return 0;
}
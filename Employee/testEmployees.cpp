#include <iostream>
#include <iomanip>
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
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

	cout << "Now displaying worker data" << endl;
	cout << "Name: " << worker.getName() << endl;
	cout << "Employee Number: " << worker.getNumber() << endl;
	cout << "Hire Date: " << worker.getHireDate() << endl;
	cout << "Working shift: " << worker.getShift() << endl;
	cout << "Pay rate: $" << worker.getPayRate() << "/hr" << endl << endl;

	ShiftSupervisor test;

	test.setName("ron dan");
	test.setNumber(3333);
	test.setHireDate(12, 10, 2015);
	test.setSalary(2000.00);
	test.setBonus(1000.00);

	cout << "Now displaying supervisor data" << endl;
	cout << "Name: " << test.getName() << endl;
	cout << "Employee Number: " << test.getNumber() << endl;
	cout << "Hire Date: " << test.getHireDate() << endl;
	cout << "Salary: $" << test.getSalary() << endl;
	cout << "Yearly bonus: $" << test.getBonus() << endl;

	return 0;
}
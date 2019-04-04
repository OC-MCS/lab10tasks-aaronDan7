#include "ShiftSupervisor.h"
#include "Employee.h"
#include <iostream>

using namespace std;


double ShiftSupervisor::getSalary() 
{
	return salary;
}

double ShiftSupervisor::getBonus()
{
	return yrBonus;
}

void ShiftSupervisor::setSalary(double s) 
{
	while (s < 0) 
	{
		cout << "Salary cannot be negative number!";
		cout << " Enter again: ";
		cin >> s;
	}
	salary = s;
}

void ShiftSupervisor::setBonus(double b)
{
	while (b < 0)
	{
		cout << "Bonus cannot be negative number!";
		cout << " Enter again: ";
		cin >> b;
	}
	yrBonus = b;
}
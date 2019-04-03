#include "Employee.h"
#include <iostream>
#include <string>

Employee::Employee()
{
	name = "";
	number = 0;
	hireDay = 0;
	hireMonth = 0;
	hireYear = 0;
}

Employee::Employee(string n, int num, int d, int m, int y)
{
	name = n;
	number = num;
	if (d < 0 || d > 31 || m < 0 ||
		m > 12 || y < 1900 || y > 2018)
	{
		cout << "Error! Invalid hire date! Now terminating!\n";
		exit(EXIT_FAILURE);
	}
	else
	{
		hireDay = d;
		hireMonth = m;
		hireYear = y;
	}
}

string Employee::getName()
{
	return name;
}

int Employee::getNumber() 
{
	return number;
}

string Employee::getHireDate() 
{
	string dt = "";

	dt += to_string(hireDay) + "/" +
		to_string(hireMonth) + "/" +
		to_string(hireYear);

	return dt;
}

void Employee::setName(string n)
{
	name = n;
}

void Employee::setNumber(int num)
{
	number = num;
}

void Employee::setHireDate(int d, int m, int y)
{
		hireDay = d;
		hireMonth = m;
		hireYear = y;
}

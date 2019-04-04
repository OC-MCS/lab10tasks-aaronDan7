#pragma once
#ifndef SHIFTSUPERViSOR_H
#define SHIFTSUPERVISOR_H
#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

class ShiftSupervisor : public Employee
{
private:
	double salary;
	double yrBonus;
public:
	// constructors
	ShiftSupervisor() : Employee()
	{
		salary = 0.0;
		yrBonus = 0.0;
	}

	ShiftSupervisor(string n, int num, int d, int m, int y,
		double s, double b) : Employee(n, num, d, m, y)
	{
		salary = s;
		yrBonus = b;
	}

	double getSalary();
	double getBonus();
	void setSalary(double s);
	void setBonus(double b);
};
#endif // !SHIFTSUPERViSOR_H

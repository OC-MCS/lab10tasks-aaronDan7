#pragma once
#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include <string>
#include <iostream>
#include "Employee.h"

using namespace std;


class ProductionWorker : public Employee
{
private:
	int shift;
	double payRate;
public:
	ProductionWorker() : Employee()
	{
		shift = 1;
		payRate = 0.0;
	}

		ProductionWorker(string n, int num, int d,
			int m, int y, int sh, double p) :
		Employee(n, num, d, m, y)
	{
			shift = sh;
			payRate = p;
	}

	string getShift();

	double getPayRate();
	void setShift(int sh);
	void setPayRate(double p);
};

#endif
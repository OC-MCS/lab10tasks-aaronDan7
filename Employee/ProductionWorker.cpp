#include "ProductionWorker.h"
#include "Employee.h"
#include <iostream>
#include<string>
#include <iomanip>
using namespace std;

string ProductionWorker::getShift()
{
	if (shift == 1)
		return "Day";
	return "Night";
}

double ProductionWorker::getPayRate() 
{
	return payRate;
}

void ProductionWorker::setShift(int sh)
{
		shift = sh;
}

void ProductionWorker::setPayRate(double p)
{
		payRate = p;
}



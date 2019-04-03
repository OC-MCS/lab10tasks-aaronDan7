#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>
using namespace std;

class Employee
{
private:
	string name;
	int number;
	int hireDay;
	int hireMonth;
	int hireYear;
public:
	Employee();
	Employee(string n, int num, int d, int m, int y);
	string getName();
	int getNumber();
	string getHireDate();
	void setName(string n);
	void setNumber(int num);
	void setHireDate(int d, int m, int y);
};

#endif
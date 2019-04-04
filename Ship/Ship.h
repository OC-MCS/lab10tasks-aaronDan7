#ifndef SHIP_H
#define SHIP_H

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Ship 
{
private:
public:
	string name;
	string year;
	Ship(string n, string y);
	virtual void print();
};

#endif

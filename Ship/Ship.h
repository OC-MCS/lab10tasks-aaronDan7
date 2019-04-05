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
	string name; // in the midst of todays lecture i realized that i could have
	string year; // accomplished the same thing with getter and setter function
	Ship(string n, string y); // if name and year were private data
	virtual void print();
};

#endif

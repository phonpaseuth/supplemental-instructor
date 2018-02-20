#pragma once
#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
	Employee(string theName, float thePayRate);
	// A class with virtual methods should make its destructor virtual.
	virtual ~Employee();
	string getName() const;
	float getPayRate() const;
	virtual float pay(float hoursWorked) const;
	void printPay(float hoursWorked) const;
protected:
	string name;
	float payRate;
};
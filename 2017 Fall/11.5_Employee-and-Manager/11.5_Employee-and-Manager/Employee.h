/*
*          File: employee.h
*        Author: Robert I. Pitts <rip@cs.bu.edu>
* Last Modified: April 21, 2000
*         Topic: Introduction to Polymorphism in C++
* ----------------------------------------------------------------
*
* Employee class definition.
*/

#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

#include <string>

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

#endif /* not defined _EMPLOYEE_H */

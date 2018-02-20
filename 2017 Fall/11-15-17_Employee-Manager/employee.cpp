#include "employee.h"

Employee::Employee(string theName, float thePayRate)
{
	name = theName;
	payRate = thePayRate;
}

Employee::~Employee() {}

string Employee::getName() const
{
	return name;
}

float Employee::getPayRate() const
{
	return payRate;
}

float Employee::pay(float hoursWorked) const
{
	return hoursWorked * payRate;
}

void Employee::printPay(float hoursWorked) const
{
	cout << "Pay: " << pay(hoursWorked) << endl;
}
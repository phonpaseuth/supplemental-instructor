#include "Header.h"

Employee::Employee() {
	firstName = "unknown";
	lastName = "unknown";
	SSN = "unknown";
}

Employee::Employee(string fName, string lName, string ssn) {
	firstName = fName;
	lastName = lName;
	SSN = ssn;
}

string Employee::getFirstName() {
	return firstName;
}

string Employee::getLastName() {
	return lastName;
}

string Employee::getSSN() {
	return SSN;
}

void Employee::setFirstName(string fName) {
	firstName = fName;
}

void Employee::setLastName(string lName) {
	lastName = lName;
}

void Employee::setSSN(string ssn) {
	SSN = ssn;
}

string Employee::getFullName() {
	return lastName + ", " + firstName;
}

// Hourly Employee
HourlyEmployee::HourlyEmployee(string fName, string lName, string ssn, float rate, int hours) {
	setFirstName(fName);
	setLastName(lName);
	setSSN(ssn);
	hourlyRate = rate;
	hrsWorked = hours;
}

void HourlyEmployee::setHourlyRate(float rate) {
	hourlyRate = rate;
}

void HourlyEmployee::setHrsWorked(int hours) {
	hrsWorked = hours;
}

float HourlyEmployee::getHourlyRate(){
	return hourlyRate;
}

int HourlyEmployee::getHrsWorked(){
	return hrsWorked;
}

double HourlyEmployee::calcWeeklySalary(){
	double overtime = 0.0;
	if (hrsWorked > 40)
		overtime = (hrsWorked - 40) * (0.5 * hourlyRate);
	return overtime + hrsWorked * hourlyRate;
}
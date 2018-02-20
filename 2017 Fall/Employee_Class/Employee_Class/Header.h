#include <iostream>
#include <string>
using namespace std;

// Employee base class
class Employee {
private:
	string firstName;
	string lastName;
	string SSN;
public:
	Employee();
	Employee(string fName, string lName, string ssn);
	string getFirstName();
	string getLastName();
	string getSSN();
	void setFirstName(string fName);
	void setLastName(string lName);
	void setSSN(string ssn);
	string getFullName();
};

// Hourly employee
class HourlyEmployee : public Employee {
private:
	float hourlyRate;
	int hrsWorked;
public:
	HourlyEmployee(string fName, string lName, string ssn, float rate, int hours);
	void setHourlyRate(float rate);
	void setHrsWorked(int hours);
	float getHourlyRate();
	int getHrsWorked();
	double calcWeeklySalary();
};
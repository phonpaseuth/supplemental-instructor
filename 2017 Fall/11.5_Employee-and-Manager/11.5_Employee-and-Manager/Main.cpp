#include "Employee.h"
#include "Manager.h"

void PrintPay(const Employee &empl,
	float hoursWorked);

int main()
{
	Employee *emplP;

	string choice;
	cout << "What kind of employee do you want: ";
	cin >> choice;

	if (choice == "Employee") {
		emplP = new Employee("John Burke", 25.0);
	}
	else if (choice == "Manager") {
		emplP = new Manager("Jan Kovacs", 1200.0, true);
	}
	else {
		cerr << "Unrecognized kind of employee: " << choice << "!" << endl;
		return 1;  // Exit program, returning error code.
	}

	cout << "\nEmployee info..." << endl;
	cout << "Name: " << emplP->getName() << endl;
	cout << "Pay Rate: " << emplP->getPayRate() << endl;

	cout << "\nUsing pay() method..." << endl;
	cout << "Pay: " << emplP->pay(40.0) << endl;

	cout << "\nUsing PrintPay() function..." << endl;
	PrintPay(*emplP, 40.0);

	cout << "\nUsing printPay() method..." << endl;
	emplP->printPay(40.0);

	// cout << "\nEmployee info using print() method..." << endl;
	// emplP->print(40.0);

	return 0;
}

void PrintPay(const Employee &empl,
	float hoursWorked)
{
	cout << "Pay: " << empl.pay(hoursWorked) << endl;
}
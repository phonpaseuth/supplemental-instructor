#include "Header.h"

int main() {
	Employee emp1;
	cout << emp1.getFirstName() << " " << emp1.getLastName() << " " << emp1.getSSN() << endl;
	cout << emp1.getFullName() << endl;
	Employee emp2("Alice", "Lackey", "291294949");
	cout << emp2.getFirstName() << " " << emp2.getLastName() << " " << emp2.getSSN() << endl;
	cout << emp2.getFullName() << endl;
	HourlyEmployee hremp1("Tom", "Steele", "3235245", 7.8, 20);
	cout << hremp1.getFirstName() << " " << hremp1.getLastName() << " " << hremp1.getSSN() << " " << hremp1.getHourlyRate() << " " << hremp1.getHrsWorked() << endl;
	cout << hremp1.getFullName() << endl;
	cout << hremp1.calcWeeklySalary() << endl;
	hremp1.setFirstName("Bob");
	hremp1.setLastName("Zhang");
	hremp1.setSSN("9879870897");
	hremp1.setHourlyRate(8.5);
	hremp1.setHrsWorked(18);
	cout << hremp1.calcWeeklySalary() << endl;

	return 0;
}
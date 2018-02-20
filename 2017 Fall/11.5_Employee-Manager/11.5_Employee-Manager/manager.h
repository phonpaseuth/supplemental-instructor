#include "employee.h"

class Manager : public Employee {
public:
	Manager(string theName, float thePayRate, bool isSalaried);
	bool getSalaried() const;
	virtual float pay(float hoursWorked) const;
protected:
	bool salaried;
};
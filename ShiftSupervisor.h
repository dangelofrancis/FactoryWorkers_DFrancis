#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H

#include "Employee.h"

class ShiftSupervisor : public Employee {
private:
	double annualSalary;
	double annualBonus;

public:
	//constructors
	ShiftSupervisor();
	ShiftSupervisor(string n, int num, string date, double salary, double bonus);

	// mutators
	void setAnnualSalary(double salary);
	void setAnnualBonus(double bonus);

	// accessors
	double getAnnualSalary() const;
	double getAnnualBonus() const;

	// print 
	void printShiftSupervisor() const;
};

#endif
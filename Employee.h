#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
	string name;
	int employeeNumber;
	string hireDate;

public:
	// default constructor
	Employee();

	// param constructor
	Employee(string n, int num, string date);

	// mutators
	void setName(string n);
	void setEmployeeNumber(int num);
	void setHireDate(string date);

	// accessors
	string getName() const;
	int getEmployeeNumber() const;
	string getHireDate() const;

	// print
	void printEmployee() const;
};

#endif
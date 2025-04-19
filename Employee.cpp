#include "Employee.h"

// default constructor
Employee::Employee() {
	name = "";
	employeeNumber = 0;
	hireDate = "";
}

// param constructor
Employee::Employee(string n, int num, string date) {
	name = n;
	employeeNumber = num;
	hireDate = date;
}

// mutators
void Employee::setName(string n) {
	name = n;
}
void Employee::setEmployeeNumber(int num) {
	employeeNumber = num;
}
void Employee::setHireDate(string date) {
	hireDate = date;
}

// accessors
string Employee::getName() const {
	return name;
}
int Employee::getEmployeeNumber() const{
	return employeeNumber;
}
string Employee::getHireDate() const {
	return hireDate;
}

// print
void Employee::printEmployee() const {
	cout << "Name: " << name << endl;
	cout << "Employee Number: " << employeeNumber << endl;
	cout << "Hire Date: " << hireDate << endl;
}

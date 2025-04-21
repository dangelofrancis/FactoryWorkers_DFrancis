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
	//constructors
	Employee();
	Employee(string n, int num, string date);

	// mutators

	//***************************************
	// Function: setName                    *
	// Description: sets the employees name *
	// Pre: 'n' has to be a string          *                                  
	// Post: The employee's name is set     *
	//***************************************
	void setName(string n);

	//***************************************
	// Function: setEmployeeNumber          *
	// Description: set employee number     *
	// Pre: "num" has to be a valid int     *                                  
	// Post: The employee's ID number is set*
	//***************************************
	void setEmployeeNumber(int num);

	//***************************************
	// Function: setHireDate                *
	// Description: sets employee hire date *
	// Pre: date should be valid            *                                  
	// Post: The employee's hire date is set*
	//***************************************
	void setHireDate(string date);

	// accessors

	//***************************************
	// Function: getName                    *
	// Description: gets the employees name *
	// Pre: None                            *                                  
	// Post: Returns the employees name     *
	//***************************************
	string getName() const;

	//***************************************
	// Function: getEmployeeNumber          *
	// Description: gets the employees id   *
	// Pre: None                            *                                  
	// Post: Returns the employees id       *
	//***************************************
	int getEmployeeNumber() const;

	//***************************************
	// Function: getHireDate                *
	// Description: gets employees hire date*
	// Pre: None                            *                                  
	// Post: Returns the employees hire date*
	//***************************************
	string getHireDate() const;

	//*****************************************
	// Function: printEmployee                *
	// Description: prints an employee info   *
	// Pre: all member variables initialized  *                                  
	// Post: displays employee info on console*
	//*****************************************
	void printEmployee() const;
};

#endif
/*
PROJECT NAME: Factory Workers Project
PROGRAMMER: D'Angelo Francis
DUE DATE: 4/21/2025
REQUIREMENTS: This project guides you through designing a 
class hierarchy for different types of factory workers using inheritance. 
The goal is to practice code reuse through base classes
without using polymorphism (i.e., no virtual functions or dynamic dispatch).
*/


#include <iostream>
#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"

using namespace std;

int main() {
// production workers
	ProductionWorker worker1("Sarah McCarthy", 221, "1/10/2025", 1, 15.00);
	ProductionWorker worker2("Simon Cobalt", 442, "1/12/2025", 2, 15.00);

// shift supervisors
	ShiftSupervisor supervisor1("Johnny Stiff", 413, "3/23/2004", 30000.00, 4000.00);

// team leaders
	TeamLeader leader1("David Arnolds", 101, "4/02/2001", 1, 20.00, 50.00, 40, 38);

	cout << "FACTORY WORKER EMPLOYEES LIST" << endl;
	cout << "--------------------------\n\n";
	cout << "PRODUCTION WORKERS\n\n";
	worker1.printProductionWorker();
	cout << endl;
	worker2.printProductionWorker();
	cout << endl;

	cout << "--------------------------\n\n";
	cout << "SHIFT SUPERVISORS\n\n";
	supervisor1.printShiftSupervisor();
	cout << endl;

	cout << "--------------------------\n\n";
	cout << "TEAM LEADERS\n\n";
	leader1.printTeamLeader();
 
	return 0;

}
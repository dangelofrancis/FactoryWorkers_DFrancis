#include "ProductionWorker.h"
#include <iostream>
using namespace std;

// default constructor
ProductionWorker::ProductionWorker() : Employee() {
	shift = 1;
	hourlyPayRate = 0.0;
}

// param constructor
ProductionWorker::ProductionWorker(string n, int num, string date, int s, double pay)
	: Employee(n, num, date) {
	shift = s;
	hourlyPayRate = pay;
}

// mutators
void ProductionWorker::setShift(int s) {
	shift = s;
}
void ProductionWorker::setHourlyPayRate(double pay) {
	hourlyPayRate = pay;
}

// accessors
int ProductionWorker::getShift() const {
	return shift;
}
double ProductionWorker::getHourlyPayRate() const {
	return hourlyPayRate;
}

// print
void ProductionWorker::printProductionWorker() const {
	printEmployee();
	cout << "Shift: " << (shift == 1 ? "Day " : "Night") << endl;
	cout << "Hourly Pay Rate: $" << hourlyPayRate << endl;
}
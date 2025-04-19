#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "Employee.h"

class ProductionWorker : public Employee {
private:
	int shift;
	double hourlyPayRate;

public:
	//constructors
	ProductionWorker();
	ProductionWorker(string n, int num, string date, int s, double pay);

	// mutators
	void setShift(int s);
	void setHourlyPayRate(double pay);

	// accessors
	int getShift() const;
	double getHourlyPayRate() const;

	// print
	void printProductionWorker() const;
};

#endif
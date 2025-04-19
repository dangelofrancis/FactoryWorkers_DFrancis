#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include "ProductionWorker.h"

class TeamLeader : public ProductionWorker {
private:
	double monthlyBonus;
	int requiredTrainingHours;
	int attendedTrainingHours;

public:
	//constructors
	TeamLeader();
	TeamLeader(string n, int num, string date, int s, double pay, double bonus, int requiredHours, int attendedHours);

	// mutators
	void setMonthlyBonus(double bonus);
	void setRequiredTrainingHours(int requiredHours);
	void setAttendedTrainingHours(int attendedHours);

	// accessors
	double getMonthlyBonus() const;
	int getRequiredTrainingHours() const;
	int getAttendedTrainingHours() const;

	// print
	void printTeamLeader() const;
};

#endif
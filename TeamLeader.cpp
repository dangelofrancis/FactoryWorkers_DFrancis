#include "TeamLeader.h"
#include <iostream>
using namespace std;

//constructors
TeamLeader::TeamLeader() : ProductionWorker() {
	monthlyBonus = 0.0;
	requiredTrainingHours = 0;
	attendedTrainingHours = 0;
}
TeamLeader::TeamLeader(string n, int num, string date, int s, double pay, double bonus, int requiredHours, int attendedHours)
	: ProductionWorker(n, num, date, s, pay) {
	monthlyBonus = bonus;
	requiredTrainingHours = requiredHours;
	attendedTrainingHours = attendedHours;
}

// mutators
void TeamLeader::setMonthlyBonus(double bonus) {
	monthlyBonus = bonus;
}
void TeamLeader::setRequiredTrainingHours(int requiredHours) {
	requiredTrainingHours = requiredHours;
}
void TeamLeader::setAttendedTrainingHours(int attendedHours) {
	attendedTrainingHours = attendedHours;
}

// accessors
double TeamLeader::getMonthlyBonus() const {
	return monthlyBonus;
}
int TeamLeader::getRequiredTrainingHours() const {
	return requiredTrainingHours;
}
int TeamLeader::getAttendedTrainingHours() const {
	return attendedTrainingHours;
}

// print
void TeamLeader::printTeamLeader() const {
	printProductionWorker();
	cout << "Monthly Bonus: $" << monthlyBonus << endl;
	cout << "Required Training Hours: " << requiredTrainingHours << endl;
	cout << "Attended Training Hours: " << attendedTrainingHours << endl;
}
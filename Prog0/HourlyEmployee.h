//function/method definitions can be found in HourlyEmployee.cpp
//Program Name: Program 0
//Programmer Name: Khodr Salman
//Description: calculate and display employee payments for a company, and practice with classes
//Date Created: 1/18/21

#include "Employee.h"

#ifndef HOURLYEMPLOYEE_HPP
#define HOURLYEMPLOYEE_HPP

class HourlyEmployee : public Employee {

protected:
	float hourlyPay;
	int numberOfHours;
	float weeklyPay;

public:

	HourlyEmployee();
	void setWeeklyPay(float input, bool* methodStatus);

	float getHourlyPay();
	float getWeeklyPay();

	void setNumberOfHours(int input, bool* methodStatus);
	int getNumberOfHours();

	void printHourlyEmployee(ofstream& ofs);

};//end class

#endif // !HOURLYEMPLOYEE_HPP

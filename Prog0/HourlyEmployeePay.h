//all method definitions can be found in HourlyEmployeePay.cpp
//Program Name: Program 0
//Programmer Name: Khodr Salman
//Description: calculate and display employee payments for a company, and practice with classes
//Date Created: 1/18/21

#include "HourlyEmployee.h"

#ifndef HOURLYEMPLOYEEPAY_HPP
#define HOURLYEMPLOYEEPAY_HPP

class HourlyEmployeePay : public HourlyEmployee {

protected:
	float overtimePay;
	int taxRateCode;
	char workStatus;

public:
	HourlyEmployeePay();
	
	float getOvertimePay();
	void setOvertimePay(float input);

	void setTaxRateCode(int input, bool* methodStatus);
	int getTaxRateCode();

	void setWorkStatus(char input, bool* methodStatus);
	char getWorkStatus();

	void printHourlyEmployeePay(ofstream& ofs);


};//end class

#endif // !HOURLYEMPLOYEEPAY_HPP

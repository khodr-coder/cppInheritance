//all method definistions are found in SalaryEmployeePay.cpp
//Program Name: Program 0
//Programmer Name: Khodr Salman
//Description: calculate and display employee payments for a company, and practice with classes
//Date Created: 1/18/21

#include "Employee.h"

#ifndef SALARYEMPLOYEEPAY_HPP
#define SALARYEMPLOYEEPAY_HPP

class SalaryEmployeePay : public Employee {

protected:
	float annualPay;
	float weeklyPay;
	int taxRateCode;

public:
	SalaryEmployeePay();

	float getAnnualPay();
	void setAnnualPay(float input, bool* methodStatus);

	int getTaxRateCode();
	void setTaxRateCode(int input, bool* methodStatus);

	void printSalaryEmployeePay(ofstream& ofs);

};// end class


#endif // !SALARYEMPLOYEEPAY_HPP
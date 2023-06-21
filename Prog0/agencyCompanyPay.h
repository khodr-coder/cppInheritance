//all method definitions and explinations can be found in agencyCompanyPay.cpp
//Program Name: Program 0
//Programmer Name: Khodr Salman
//Description: calculate and display employee payments for a company, and practice with classes
//Date Created: 1/18/21

#include "HourlyEmployeePay.h"

#ifndef AGENCYCOMPANYPAY_HPP
#define AGENCYCOMPANYPAY_HPP

class agencyCompanyPay : public HourlyEmployeePay {

protected:
	string companyToPay;

public:
	agencyCompanyPay();
	void setCompanyToPay(string input);

	string getCompanyToPay();

	void printAgencyEmployeePay(ofstream& ofs);

};//end class

#endif // !AGENCYCOMPANYPAY_HPP


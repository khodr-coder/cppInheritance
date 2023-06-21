#include "agencyCompanyPay.h"

//Description: default constructor for agencyCompanyPay
//Pre-condition: the user will create an instance of the object agencyCompanyPay
//Post-condition: the instance is created and all values will be set to default
agencyCompanyPay::agencyCompanyPay() {
	companyToPay = "Ford";
}

//Description: this method will set the company pay for agencyCompanyPay
//Pre-condition: the user will send in input(string) as parameter
//Post-condition: the attribute companyToPay is set to string input
void agencyCompanyPay::setCompanyToPay(string input) {
	companyToPay = input;

}
//Description: this method will retun the company pay for agencyCompanyPay
//Pre-condition: the attribute companyToPay will already be set
//Post-condition: the attribute companyToPay is returned
string agencyCompanyPay::getCompanyToPay() { return companyToPay; }

//Description: this method will print agencyCompanyPay object to console and file
//Pre-condition: all attributes will have already been set 
//Post-condition: the class is printed to console and file 
void agencyCompanyPay::printAgencyEmployeePay(ofstream& ofs) {

	float paymentDue, taxRate;

	if (taxRateCode == 1)
		taxRate = .25;
	else if (taxRateCode == 2)
		taxRate = .2;
	else if (taxRateCode == 3)
		taxRate = .15;

	if (numberOfHours > 40) {
		paymentDue = (overtimePay * (numberOfHours % 40)) - (overtimePay * ((numberOfHours % 40) * taxRate)); 
	}
	if (numberOfHours <= 40) {
		paymentDue = (numberOfHours * hourlyPay) - ((numberOfHours * hourlyPay) * taxRate);
	}

	
	cout << "\n Data for Agency Employee pay: \n";
	cout << "first name: " << firstName << endl;
	cout << "last name: " << lastName << endl;
	cout << "ssn: " << hideSsn << endl;
	cout << "id: " << id << endl;
	cout << "weekly pay: " << weeklyPay << endl;
	cout << "hourly pay: " << hourlyPay << endl;
	cout << "hours worked: " << numberOfHours << endl;
	cout << "overtime pay: $" << overtimePay << endl;
	cout << "tax rate: " << taxRate << endl;
	cout << "work status: " << workStatus << endl;
	cout << "payment due: " << paymentDue << endl;
	cout << "company to pay: " << companyToPay << endl;

	ofs << "\n Data for Agency Employee pay: \n";
	ofs << "first name: " << firstName << endl;
	ofs << "last name: " << lastName << endl;
	ofs << "ssn: " << hideSsn << endl;
	ofs << "id: " << id << endl;
	ofs << "weekly pay: " << weeklyPay << endl;
	ofs << "hourly pay: " << hourlyPay << endl;
	ofs << "hours worked: " << numberOfHours << endl;
	ofs << "overtime pay: $" << overtimePay << endl;
	ofs << "tax rate: " << taxRate << endl;
	ofs << "work status: " << workStatus << endl;
	ofs << "payment due: " << paymentDue << endl;
	ofs << "company to pay: " << companyToPay << endl;
	ofs << flush;
}
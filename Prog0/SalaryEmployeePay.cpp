#include "SalaryEmployeePay.h"


//Description: default constructor for salaryEmployeePay
//Pre-condition: the user will create an instance object of the class SalaryEmployeePay 
//Post-condition: the constructor is called and default values will be set 
SalaryEmployeePay::SalaryEmployeePay() {
	annualPay = 0;
	weeklyPay = 0;
	taxRateCode = 1;

}


//Description: this method will return the annual pay for the salaryEmployeePay
//Pre-condition: the annualPay will have already been set 
//Post-condition: the annual pay will be returned
float SalaryEmployeePay::getAnnualPay() { return annualPay; }

//Description: this method will set the annual pay for the salaryEmployeePay
//Pre-condition: the user will send input(float) and a bool value as parameters 
//Post-condition: the annual pay (float >=0) will be set to the instance of object created and bool value = true
void SalaryEmployeePay::setAnnualPay(float input, bool* methodStatus) {
	*methodStatus = false;

	if (input >= 0) {
		*methodStatus = true;
		annualPay = input;
		weeklyPay = annualPay / 52;
	}
	else
		return;
	
}

//Description: this method will return the tax rate code for the salaryEmployeePay
//Pre-condition: the tax rate code will have already been set 
//Post-condition: the tax rate code will be returned
int SalaryEmployeePay::getTaxRateCode() { return taxRateCode; }

//Description: this method will set the tax rate code for the salaryEmployeePay
//Pre-condition: the tax rate code (int) will be sent in as parameter along with bool value
//Post-condition: the input(int >1 or <3) will be set to tax rate code and bool value will = true
void SalaryEmployeePay::setTaxRateCode(int input, bool* methodStatus) {
	if (input < 1 || input > 3) {
		*methodStatus = false;
	}
	else {
		*methodStatus = true;
		taxRateCode = input;
	}
}
//Description: this method will print the values of salaryEmployeePay
//Pre-condition: all values of class object will be set  
//Post-condition: the class instance and its values will be printed to console and file
void SalaryEmployeePay::printSalaryEmployeePay(ofstream& ofs) {
	float paymentDue, taxRate;

	if (taxRateCode == 1)
		taxRate = .25;
	else if (taxRateCode == 2)
		taxRate = .2;
	else if (taxRateCode == 3)
		taxRate = .15;

	paymentDue = weeklyPay - (weeklyPay * taxRate);

	cout << "\n data for SalaryEmployeePay: employee: \n";
	cout << "first name: " << firstName << endl;
	cout << "last name: " << lastName << endl;
	cout << "ssn: " << hideSsn << endl;
	cout << "id: " << id << endl;
	cout << "annual pay: " << annualPay << endl;
	cout << "weekly pay: " << weeklyPay << endl;
	cout << "tax rate code: " << taxRateCode << endl;
	cout << "payment amount: " << paymentDue << endl;

	ofs << "\n data for SalaryEmployeePay employee: \n";
	ofs << "first name: " << firstName << endl;
	ofs << "last name: " << lastName << endl;
	ofs << "ssn: " << hideSsn << endl;
	ofs << "id: " << id << endl;
	ofs << "annual pay: " << annualPay << endl;
	ofs << "weekly pay: " << weeklyPay << endl;
	ofs << "tax rate code: " << taxRateCode << endl;
	ofs << "payment amount: " << paymentDue << endl;
	ofs << flush; 

}
#include "HourlyEmployeePay.h"


//Description: default constructor for HourlyEmployeePay
//Pre-condition: the user will create an object instance of HorlyEmployeePay
//Post-condition: the object instance is created and all values will be set to 0 
HourlyEmployeePay::HourlyEmployeePay() {
	overtimePay = 0;
	taxRateCode = 1;
	workStatus = 'p';

}

//Description: this method will return overtime pay when called
//Pre-condition: the overtime pay will have already been set
//Post-condition: overtime pay of the employee is returned
float HourlyEmployeePay::getOvertimePay() { return overtimePay; }

//Description: this method will set overtime pay for hourlyEmployeePay 
//Pre-condition: the normal pay of employee (int) will be sent in as parameter
//Post-condition: overtime pay of the employee is set to normal rate *1.5
void HourlyEmployeePay::setOvertimePay(float input) { overtimePay = input * 1.5; }


//Description: this method will set the tax rate code for hourlyEmployeePay 
//Pre-condition: the tax rate code of employee (int) will be sent in as parameter along with bool value
//Post-condition:tax rate code (int between 1 and 3) will be set and bool value = true
void HourlyEmployeePay::setTaxRateCode(int input, bool* methodStatus) {
	if (input < 1 || input > 3) {
		*methodStatus = false;
	}
	else {
		*methodStatus = true;
		taxRateCode = input;
	}
}

//Description: this method will return the tax rate code for hourlyEmployeePay 
//Pre-condition: the tax rate code of employee (int) will already be set
//Post-condition:tax rate code (int between 1 and 3) will be returned 
int HourlyEmployeePay::getTaxRateCode() { return taxRateCode; }

//Description: this method will set the work status for hourlyEmployeePay 
//Pre-condition: the work status of employee (char) will be sent in as parameter along with bool value 
//Post-condition:work status (char F f or P p) will be set as work status of object instance  
void HourlyEmployeePay::setWorkStatus(char input, bool* methodStatus) {

	if (input != 'F' && input != 'f' && input != 'P' && input != 'p') {
		*methodStatus = false;
	}
	else if (input == 'F' || input == 'f') {
		input = 'F';
		*methodStatus = true;
		workStatus = input;

	}
	else if (input == 'P' || input == 'p') {
		input = 'p';
		*methodStatus = true;
		workStatus = input;

	}


}

//Description: this method will return the work status for hourlyEmployeePay 
//Pre-condition: the work status of employee (char) will be already be set 
//Post-condition:work status (char F f or P p) will be returned
char HourlyEmployeePay::getWorkStatus() { return workStatus; }


//Description: this method will calculate the payment due and print the hourly employee pay
//Pre-condition: all values will be set to class before calling print function 
//Post-condition: hourly employee pay is printed
void HourlyEmployeePay::printHourlyEmployeePay(ofstream& ofs) {
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

	cout << "\n Data for Hourly Employee pay: \n";
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

	ofs << "\n Data for Hourly Employee pay: \n";
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
	ofs << flush;

}
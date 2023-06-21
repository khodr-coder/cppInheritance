//Program Name: Program 0
//Programmer Name: Khodr Salman
//Description: calculate and display employee payments for a company, and practice with classes
//Date Created: 1/18/21

#include "Employee.h"
#include "SalaryEmployeePay.h"
#include "HourlyEmployee.h"
#include "HourlyEmployeePay.h"
#include "agencyCompanyPay.h"

int main() {

	int intInput;
	string stringInput;
	char charInput;
	char sentinel = 'y';
	bool methodStatus = false;
	float floatInput;
	//bool yn;
	Employee employee;
	SalaryEmployeePay salaryEmployee;
	HourlyEmployee hourlyEmployee;
	HourlyEmployeePay hourlyEmployeePay;
	agencyCompanyPay agencyEmployee;

	ofstream ofs;
	ofs.open("pay.dat");

	while (sentinel == 'y') {
		
		cout << "\n1. Employee \n";
		cout << "2. Salary Employee Pay\n";
		cout << "3. Hourly Employee\n";
		cout << "4. Hourly Employee Pay\n";
		cout << "5. Agency Employee Pay\n";
		cout << "Which type of employee would you like to create? \n";

		cin >> intInput;

		if (ofs.is_open()) {

			if (intInput == 1) {

				cout << "\n enter employees first name ";
				cin >> stringInput;
				employee.setFirstName(stringInput);

				cout << "\n enter employees last name ";
				cin >> stringInput;
				employee.setLastName(stringInput);

				cout << "\n enter employees SSN ";
				cin >> stringInput;
				employee.setSsn(stringInput, &methodStatus);
				while (methodStatus == false) {
					cout << "\n Error, invalid format. Please enter ssn in format xxx - xx - xxxx (x:number) : ";
					cin >> stringInput;
					employee.setSsn(stringInput, &methodStatus);
				}

				cout << "\n enter employee id: ";
				cin >> stringInput;
				employee.setId(stringInput, &methodStatus);
				while (methodStatus == false) {
					cout << "\n Enter id of format xxx-L (x:number, L:letter a-m: ";
					cin >> stringInput;
					employee.setId(stringInput, &methodStatus);
				}

				employee.printEmployee(ofs);
			}

			else if (intInput == 2) {
				cout << "\n enter employees first name ";
				cin >> stringInput;
				salaryEmployee.setFirstName(stringInput);
				
				cout << "\n enter employees last name ";
				cin >> stringInput;
				salaryEmployee.setLastName(stringInput);

				cout << "\n enter employees ssn ";
				cin >> stringInput;
				salaryEmployee.setSsn(stringInput, &methodStatus);
				while (methodStatus == false) {
					cout << "\nError, invalid format. Please enter ssn in format xxx-xx-xxxx (x:number): ";
					cin >> stringInput;
					salaryEmployee.setSsn(stringInput, &methodStatus);
				}

				cout << "\n enter employees id ";
				cin >> stringInput;
				salaryEmployee.setId(stringInput, &methodStatus); 
				while (methodStatus == false) {
					cout << "\nEnter id of format xxx-L (x:number, L:letter a-m: ";
					cin >> stringInput;
					salaryEmployee.setId(stringInput, &methodStatus);
				}

				cout << "\n enter employees annual pay ";
				cin >> floatInput;
				salaryEmployee.setAnnualPay(floatInput, &methodStatus);
				while (methodStatus == false) {
					cout << "\nerror, enter a value greater than 0 "; 
					cin >> floatInput;
					salaryEmployee.setAnnualPay(floatInput, &methodStatus);

				}
				cout << "\n enter tax rate ";
				cin >> intInput;
				salaryEmployee.setTaxRateCode(intInput, &methodStatus);
				while (methodStatus == false) {
					cout << "\nerror, enter tax rate code 1-3";
					cin >> intInput;
					salaryEmployee.setTaxRateCode(intInput, &methodStatus);
				}

				salaryEmployee.printSalaryEmployeePay(ofs);
			}

			else if (intInput == 3) {
				cout << "\n enter employees first name ";
				cin >> stringInput;
				hourlyEmployee.setFirstName(stringInput);

				cout << "\n enter employees last name ";
				cin >> stringInput;
				hourlyEmployee.setLastName(stringInput);

				cout << "\n enter employees ssn ";
				cin >> stringInput;
				hourlyEmployee.setSsn(stringInput, &methodStatus);
				while (methodStatus == false) {
					cout << "\n Error, invalid format. Please enter ssn in format xxx-xx-xxxx (x:number):";
					cin >> stringInput;
					hourlyEmployee.setSsn(stringInput, &methodStatus);
				}

				cout << "\nenter employees id ";
				cin >> stringInput;
				hourlyEmployee.setId(stringInput, &methodStatus);
				while (methodStatus == false) {
					cout << "Enter id of format xxx-L (x:number, L:letter a-m: ";
					cin >> stringInput;
					hourlyEmployee.setId(stringInput, &methodStatus);
				}
				
				cout << "\n enter employees weekly pay: ";
				cin >> floatInput;
				hourlyEmployee.setWeeklyPay(floatInput, &methodStatus);
				while (methodStatus == false) {
					cout << "\n error, enter a value greater than 0 ";
					cin >> floatInput;
					hourlyEmployee.setWeeklyPay(floatInput, &methodStatus);
				}

				cout << "\n enter number of hours worked ";
				cin >> intInput;
				hourlyEmployee.setNumberOfHours(intInput, &methodStatus);
				while (methodStatus == false) {
					cout << "\n error, enter a value 1-60";
					cin >> intInput;
					hourlyEmployee.setNumberOfHours(intInput, &methodStatus);
				}
				hourlyEmployee.printHourlyEmployee(ofs);
			}

			else if (intInput == 4) {
				
				cout << "\n enter employees first name ";
				cin >> stringInput;
				hourlyEmployeePay.setFirstName(stringInput);

				cout << "\n enter employees last name ";
				cin >> stringInput;
				hourlyEmployeePay.setLastName(stringInput);

				cout << "\n enter employee ssn ";
				cin >> stringInput;
				hourlyEmployeePay.setSsn(stringInput, &methodStatus);
				while (methodStatus == false) {
					cout << "\nError, invalid format. Please enter ssn in format xxx-xx-xxxx (x:number): ";
					cin >> stringInput;
					hourlyEmployeePay.setSsn(stringInput, &methodStatus);
				}

				cout << "\n enter employee id ";
				cin >> stringInput;
				hourlyEmployeePay.setId(stringInput, &methodStatus);
				while (methodStatus == false) {
					cout << "\n Enter id of format xxx-L (x:number, L:letter a-m: ";
					cin >> stringInput;
					hourlyEmployeePay.setId(stringInput, &methodStatus);
				}

				cout << "\n enter employees weekly pay: ";
				cin >> floatInput;
				hourlyEmployeePay.setWeeklyPay(floatInput, &methodStatus);
				while (methodStatus == false) {
					cout << "\n error, enter a value greater than 400 and less than 3000: ";
					cin >> floatInput;
					hourlyEmployeePay.setWeeklyPay(floatInput, &methodStatus);
				}

				hourlyEmployeePay.setOvertimePay(hourlyEmployeePay.getHourlyPay());
				
				cout << "\n enter number of hours worked ";
				cin >> intInput;
				hourlyEmployeePay.setNumberOfHours(intInput, &methodStatus);
				while (methodStatus == false) {
					cout << "\n error, enter a value 1-60: ";
					cin >> intInput;
					hourlyEmployeePay.setNumberOfHours(intInput, &methodStatus);
				}

				cout << "\n enter tax rate code ";
				cin >> intInput;
				hourlyEmployeePay.setTaxRateCode(intInput, &methodStatus);
				while (methodStatus == false) {
					cout << "\nerror, enter a tax rate code 1-3";
					cin >> intInput;
					hourlyEmployeePay.setTaxRateCode(intInput, &methodStatus);

				}

				cout << "\n enter work status ";
				cin >> charInput;
				hourlyEmployeePay.setWorkStatus(charInput, &methodStatus);
				while (methodStatus == false) {
					cout << "\n error, work status must be F for full time or P for part time";
					cin >> charInput;
					hourlyEmployeePay.setWorkStatus(charInput, &methodStatus);
				}
				hourlyEmployeePay.printHourlyEmployeePay(ofs);
			}

			else if (intInput == 5) {
				cout << "\n enter employees first name ";
				cin >> stringInput;
				agencyEmployee.setFirstName(stringInput);

				cout << "\n enter employees last name ";
				cin >> stringInput;
				agencyEmployee.setLastName(stringInput);

				cout << "\n enter employees ssn ";
				cin >> stringInput;
				agencyEmployee.setSsn(stringInput, &methodStatus);
				while (methodStatus == false) {
					cout << "\n Error, invalid format. Please enter ssn in format xxx-xx-xxxx (x:number): ";
					cin >> stringInput;
					agencyEmployee.setSsn(stringInput, &methodStatus);
				}

				cout << "\n enter employee id ";
				cin >> stringInput;
				agencyEmployee.setId(stringInput, &methodStatus);
				while (methodStatus == false) {
					cout << "\n Enter id of format xxx-L (x:number, L:letter a-m: ";
					cin >> stringInput;
					agencyEmployee.setId(stringInput, &methodStatus);
				}

				cout << "\n enter employees weekly pay ";
				cin >> floatInput;
				agencyEmployee.setWeeklyPay(floatInput, &methodStatus);
				while (methodStatus == false) {
					cout << "\n error, enter a value greater than 0";
					cin >> floatInput;
					agencyEmployee.setWeeklyPay(floatInput, &methodStatus);

				}
				
				agencyEmployee.setOvertimePay(agencyEmployee.getHourlyPay());

				cout << "\n enter number of hours worked ";
				cin >> intInput;
				agencyEmployee.setNumberOfHours(intInput, &methodStatus);
				while (methodStatus == false) {
					cout << "\n error, enter a value 1-60";
					cin >> intInput;
					agencyEmployee.setNumberOfHours(intInput, &methodStatus);

				}

				cout << "\n enter tax rate code ";
				cin >> intInput;
				agencyEmployee.setTaxRateCode(intInput, &methodStatus);
				while (methodStatus == false) {
					cout << "\nerror, enter a tax rate code 1-3";
					cin >> intInput;
					agencyEmployee.setTaxRateCode(intInput, &methodStatus);

				}

				cout << "\n enter work status ";
				cin >> charInput;
				agencyEmployee.setWorkStatus(charInput, &methodStatus);
				while (methodStatus == false) {
					cout << "\n error, work status must be ‘F’ for full time or ‘P’ for part time";
					cin >> charInput;
					agencyEmployee.setWorkStatus(charInput, &methodStatus);
				}
				agencyEmployee.printAgencyEmployeePay(ofs);
			}

			else {
				cin.ignore(1000, '\n');
				cout << "\nError, invalid input. Enter a value 1-5 ";
			}
		}
		else {
		cout << "\n error file could not be opened ";
		ofs.close();
		exit(0);
		}

		cout << "\n would you like to enter data for another employee ? y for yes n for no ";
		cin >> sentinel;

		while (sentinel != 'Y' && sentinel != 'y' && sentinel != 'N' && sentinel != 'n') {
			cout << "\n enter y for yes n for no ";
			cin >> sentinel;
		}
	}

	ofs.close();
	

	return 0;
}
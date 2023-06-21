#include "HourlyEmployee.h"

//Description: default constructor for HourlyEmployee
//Pre-condition: the user will create an object instance of HorlyEmployee
//Post-condition: the object instance is created and all values will be set to 0 
HourlyEmployee::HourlyEmployee() {
	hourlyPay = 0;
	numberOfHours = 0;
	weeklyPay = 0;

}

//Description: this method will set the weekly pay of the hourly employee between 400 and 3000
//Pre-condition: the weekly pay (float between 400 and 3000) of the employee will be sent in as parameter along with bool value
//Post-condition: weekly pay of the employee is set and bool value = true
void HourlyEmployee::setWeeklyPay(float input, bool* methodStatus) {
	if (input >= 400 && input <= 3000) {
		*methodStatus = true;
		weeklyPay = input;
		hourlyPay = weeklyPay / 40;
	}
	else
		*methodStatus = false;

}

//Description: this method will return the hourly pay of the hourly employee 
//Pre-condition: the hourly pay of the employee will set
//Post-condition: hourly pay of the employee is returned
float HourlyEmployee::getHourlyPay() { return hourlyPay; }

//Description: this method will return the weekly pay of the hourly employee 
//Pre-condition: the weekly pay of the employee will set
//Post-condition: weekly pay of the employee is returned
float HourlyEmployee::getWeeklyPay() { return weeklyPay; }

//Description: this method will set the number of hours of the hourly employee 
//Pre-condition: the number of hours (int) of the employee will sent in as parameter along with bool value
//Post-condition: number of hours (int) is set between 1 and 60 and bool value = true
void HourlyEmployee::setNumberOfHours(int input, bool* methodStatus) {
	if (input < 1 || input > 60) {
		*methodStatus = false;
	}
	else {
		*methodStatus = true;
		numberOfHours = input;
	}

}

//Description: this method will return the number of hours of the hourly employee 
//Pre-condition: the number of hours of the employee will already be set
//Post-condition: hours of the employee is returned
int HourlyEmployee::getNumberOfHours() { return numberOfHours; }

//Description: this method will print the hourly employee
//Pre-condition: all values will be set to class before calling print function 
//Post-condition: hourly employee is printed
void HourlyEmployee::printHourlyEmployee(ofstream& ofs) {

	cout << "\n data for Hourly employee: \n";
	cout << "first name: " << firstName << endl;
	cout << "last name: " << lastName << endl;
	cout << "ssn: " << hideSsn << endl;
	cout << "id: " << id << endl;
	cout << "weekly pay: " << weeklyPay << endl;
	cout << "hourly pay: " << hourlyPay << endl;
	cout << "hours worked: " << numberOfHours << endl;

	ofs << "\n data for Hourly employee: \n";
	ofs << "first name: " << firstName << endl;
	ofs << "last name: " << lastName << endl;
	ofs << "ssn: " << hideSsn << endl;
	ofs << "id: " << id << endl;
	ofs << "weekly pay: " << weeklyPay << endl;
	ofs << "hourly pay: " << hourlyPay << endl;
	ofs << "hours worked: " << numberOfHours << endl;
	ofs << flush;		

}
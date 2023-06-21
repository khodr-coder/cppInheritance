#include "Employee.h"

Employee::Employee() {
	firstName = "";
	lastName = "";
	ssn = "";
	hideSsn = "";
	id = "";
}


//Description: this method will return the first name of the employee
//Pre-condition: the first name of the employee will already be set 
//Post-condition: return the first name of the employee
string Employee::getFirstName() { return firstName; }

//Description: this method will set the first name of the employee
//Pre-condition: the user will send a string they wish to set as the first name 
//Post-condition: the string sent in as parameter will be set to first name of object instance created 
void Employee::setFirstName(string fn) { firstName = fn; }

//Description: this method will return the last name of the employee
//Pre-condition: the last name of the employee will already be set 
//Post-condition: last name of the employee will be returned 
string Employee::getLastName() { return lastName; }

//Description: this method will set the last name of the employee
//Pre-condition: the last name of the employee will be sent in as a parameter 
//Post-condition: last name of the employee will be set to the object instance 
void Employee::setLastName(string ln) { lastName = ln; }

//Description: this method will return the id of the employee
//Pre-condition: the id of the employee will already be set
//Post-condition: id of the employee will be returned
string Employee::getId() { return id; }

//Description: this method will set the id of the employee
//Pre-condition: the id of the employee will be sent in as a parameter along with bool value
//Post-condition: id of the employee will be set to the object instance 
void Employee::setId(string input, bool* methodStatus) {

	*methodStatus = false;

	if (input.length() == 5) {

		for (int i = 0; i < 5; i++) {
			if (i == 3) {
				if (input[i] != '-')
					goto endLoop;
			}
			else if (i == 4) {
				switch (input[i]) {
				case 'A':
					input[i] = 'A';
					break;
				case 'a':
					input[i] = 'A';
					break;
				case 'B':
					input[i] = 'B';
					break;
				case 'b':
					input[i] = 'B';
					break;
				case 'C':
					input[i] = 'C';
					break;
				case 'c':
					input[i] = 'C';
					break;
				case 'D':
					input[i] = 'D';
					break;
				case 'd':
					input[i] = 'D';
					break;
				case 'E':
					input[i] = 'E';
					break;
				case 'e':
					input[i] = 'E';
					break;
				case 'F':
					input[i] = 'F';
					break;
				case 'f':
					input[i] = 'F';
					break;
				case 'G':
					input[i] = 'G';
					break;
				case 'g':
					input[i] = 'G';
					break;
				case 'H':
					input[i] = 'H';
					break;
				case 'h':
					input[i] = 'H';
					break;
				case 'I':
					input[i] = 'I';
					break;
				case 'i':
					input[i] = 'I';
					break;
				case 'J':
					input[i] = 'J';
					break;
				case 'j':
					input[i] = 'J';
					break;
				case 'K':
					input[i] = 'K';
					break;
				case 'k':
					input[i] = 'K';
					break;
				case 'L':
					input[i] = 'L';
					break;
				case 'l':
					input[i] = 'L';
					break;
				case 'M':
					input[i] = 'M';
					break;
				case 'm':
					input[i] = 'M';
					break;
				default:
					goto endLoop;
				}
				*methodStatus = true; 
			}
			else {
				if ( !isdigit(input[i]) ) {
					goto endLoop;
				}
			}
		}
	endLoop:
		if (*methodStatus == true) {
			id = input;
		};
	}
}

//Description: this method will get the SSN of the employee
//Pre-condition: the SSN of the employee will be already set to object instance
//Post-condition: SSN of the employee will be returned
string Employee::getSsn() { return hideSsn; }

//Description: this method will set the SSN of the employee
//Pre-condition: the SSN (string) will be sent in as parameter along with bool value
//Post-condition: SSN of the employee will be set to object instance 
void Employee::setSsn(string input, bool* methodStatus) {

	*methodStatus = false;

	int i = 0;	//i = input.length()
	for ( i = 0; i < 10; i++) {
		if (i == 3 || i == 6) {
			if ( input[i] != '-' ) { //maybe input[i] != '-' ??  i have it as  !input[i] == '-'
				goto endLoop;
			}
			
		}
		else if (!isdigit(input[i])) { //took out the not 
			goto endLoop;
		}
	}
	if (isdigit(input[i]))
		*methodStatus = true;
endLoop:
	if (*methodStatus == true) {
		hideSsn = input;
		ssn = input;
	}
	else
		return;
	for (int x = 0; x < 6; x++) {
		
		if (x != 3) {
			hideSsn[x] = 'x';
		}
			
	}
	;
}
//Description: this method will print the employee
//Pre-condition: all values will be set to class before calling print function 
//Post-condition: employee is printed
void Employee::printEmployee(ofstream& ofs) {
	cout << "\nfirst name: " << firstName;
	cout << "\nlast name: " << lastName;
	cout << "\nssn: " << hideSsn;
	cout << "\nid: " << id;
	cout << endl;

	ofs << "\nfirst name: " << firstName;
	ofs << "\nlast name: " << lastName;
	ofs << "\nssn: " << ssn;
	ofs << "\nid: " << id;
	ofs << endl;
	ofs << flush;
}
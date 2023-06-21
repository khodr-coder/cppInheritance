//comments for all functionality found on Employee.cpp
//Program Name: Program 0
//Programmer Name: Khodr Salman
//Description: calculate and display employee payments for a company, and practice with classes
//Date Created: 1/18/21

#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Employee {

protected:
	string firstName;
	string lastName;
	string ssn;
	string hideSsn;
	string id;

public:

	Employee();

	string getFirstName();
	void setFirstName(string fn);
	
	string getLastName();
	void setLastName(string ln);

	string getId();
	void setId(string input, bool* methodStatus);

	string getSsn();
	void setSsn(string input, bool* methodStatus); 

	void printEmployee(ofstream& ofs);

};//end class employee

#endif // !EMPLOYEE_HPP


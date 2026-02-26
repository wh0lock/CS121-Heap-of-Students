#include <iostream>
#include <sstream>
#include "date.h"
#include "address.h"
#include "student.h"

Student::Student(){
	firstName = "";
	lastName = "";
	address = new Address();
	birthDate = new Date();
	gradDate = new Date();
	creditHours = 0;
} // end constructor

Student::~Student(){
	delete address;
	delete birthDate;
	delete gradDate;
} // end destructor

void Student::init(std::string studentString){
	std::stringstream converter;
	std::string street;
	std::string city;
	std::string state;
	std::string zip;
	std::string sBirthDate;
	std::string sGradDate;
	std::string sCreditHours;

	converter.clear();
	converter.str(studentString);

	getline(converter, firstName, ',');
	getline(converter, lastName, ',');

	getline(converter, street, ',');
	getline(converter, city, ',');
	getline(converter, state, ',');
	getline(converter, zip, ',');

	address->init(street, city, state, zip);

	getline(converter, sBirthDate, ',');
	getline(converter, sGradDate, ',');

	birthDate->init(sBirthDate);
	gradDate->init(sGradDate);

	getline(converter, sCreditHours, ',');

	converter.clear();
	converter.str("");
	converter << sCreditHours;
	converter >> creditHours;

} // end init

void Student::printStudent(){
	std::cout << lastName << ", " << firstName << std::endl;
	address->printAddress();
	std::cout << "Birth date: ";
	birthDate->printDate();
	std::cout << "Grad date: ";
	gradDate->printDate();
	std::cout << "Credit Hours: " << creditHours << std::endl;
	std::cout << std::endl;
} // end printStudent

std::string Student::getLastFirst(){
	std::stringstream converter;
	converter.str("");
	converter << lastName << ", " << firstName;
	return converter.str();
} // end getLastFirst

std::string Student::getLastName(){
	return lastName;
} // end getLastName

std::string Student::getFirstName(){
	return firstName;
} // end getFirstName

int Student::getCreditHours(){
	return creditHours;
} // end getCreditHours


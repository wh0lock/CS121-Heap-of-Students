#include <iostream>
#include <sstream>
#include "date.h"
#include "address.h"
#include "student.h"

Student::Student(){
	std::string firstName;
	std::string lastName;
	int creditHours;
} // end constructor

void Student::init(std::string studentString){
	std::stringstream converter;
	std::string sCreditHours;

	converter.str(studentString);
	getline(converter, sCreditHours);

	converter.clear();
	converter.str("");

	converter << sCreditHours;
	converter >> creditHours;
} // end init

void printStudent(){

} // end printStudent

std::string getLastFirst(){

} // end getLastFirst(){



#include <iostream>
#include <sstream>
#include "date.h"

Date::Date(){
	month = 1;
	day = 1;
	year = 2000;
} // end constructor

void Date::init(std::string dateString){
	// dateString is mm/dd/yyyy
	// make stringstream
	std::stringstream converter;
	std::string sMonth;
	std::string sDay;
	std::string sYear;

	// temporary strings
	converter.str(dateString);
	getline(converter, sMonth, '/');
	getline(converter, sDay, '/');
	getline(converter, sYear);

	// convert to ints
	converter.clear();
	converter.str("");

	converter << sMonth << " " << sDay << " " << sYear;
	converter >> month >> day >> year;

} // end init

void Date::printDate(){
	std::string monthWord[] = {"null", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	std::cout << monthWord[month] << " " << day << ", " << year << std::endl;
} // end printDate


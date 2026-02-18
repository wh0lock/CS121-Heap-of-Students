#include <iostream>
#include <sstream>
#include "address.h"

Address::Address(){
	street = "test";
	city = "test";
	state = "test";
	zip = "test";
} // end constructor

void Address::init(std::string street, std::string city, std::string state, std::string zip){
	// make stringstream 
	std::stringstream ss;
	std::string nStreet;
	std::string nCity;
	std::string nState;
	std::string nZip;

	// separate
	getline(ss, nStreet, ',');
	getline(ss, nCity, ',');
	getline(ss, nState, ',');
	getline(ss, nZip);

	// pass
	ss.clear();
	ss.str("");

	ss << nStreet << " " << nCity << " " << nState << " " << nZip;
	ss >> street >> city >> state >> zip;

} // end init
 
void Address::printAddress(){
	std::cout << street << ", " << city << ", " << state << ", " << zip << std::endl;
} // end printAddress

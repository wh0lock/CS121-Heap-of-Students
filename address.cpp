#include <iostream>
#include <sstream>
#include "address.h"

Address::Address(){
	std::string street;
	std::string city;
	std::string state;
	std::string zip;
} // end constructor

void Address::init(std::string street, std::string city, std::string state, std::string zip){
	// make stringstream 
	std::stringstream converter;
	// separate
	converter.clear();
	converter.str("");

	getline(converter, street, ',');
	getline(converter, city, ',');
	getline(converter, state, ',');
	getline(converter, zip, ',');
} // end init
 
void Address::printAddress(){
	std::cout << street << ", " << city << ", " << state << ", " << zip << std::endl;

} // end printAddress

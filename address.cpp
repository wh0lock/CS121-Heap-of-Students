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
	Address::street = street;
	Address::city = city;
	Address::state = state;
	Address::zip = zip;
} // end init
 
void Address::printAddress(){
	std::cout << street << ", " << city << ", " << state << ", " << zip << std::endl;

} // end printAddress

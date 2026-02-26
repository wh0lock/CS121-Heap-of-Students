#include <string>
#include "date.h"
#include "address.h"

#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

class Student{
	private:
		std::string firstName;
		std::string lastName;
		int creditHours;
		Date* birthDate;
		Date* gradDate;
		Address* address;
	public:
		Student();
		~Student();
		void init(std::string studentString);
		void printStudent();
		std::string getLastFirst();
		std::string getLastName();
		std::string getFirstName();
		int getCreditHours();
};		
	
#endif

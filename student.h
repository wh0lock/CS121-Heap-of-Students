#include <string>

#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

class Student{
	private:
		std::string firstName;
		std::string lastName;
		int creditHours;
		Date birthDate;
		Date gradDate;
		Address address;
	public:
		Student();
		void init(std::string studentString);
		void printStudent();
		std::string getLastFirst();
};		
		
#endif

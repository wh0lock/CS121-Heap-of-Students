#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

#include "date.h"
#include "address.h"
#include "student.h"

void loadStudents(std::vector<Student*>&);
void printStudents(std::vector<Student*>&);
void showStudentNames(std::vector<Student*>&);
void findStudent(std::vector<Student*>&);
void delStudents(std::vector<Student*>&);
std::string menu();

int main(){
	std::vector<Student*> students;
	loadStudents(students);
	showStudentNames(students);
	printStudents(students);
	findStudent(students);
	delStudents(students);
} // end main

void loadStudents(std::vector<Student*>& students){
	std::ifstream inFile;
	std::string currentLine;

	inFile.open("students.csv");
	while(getline(inFile, currentLine)){
		//std::cout << currentLine << std::endl;
		Student* s = new Student();
		s->init(currentLine);
		students.push_back(s);
	} // end while
	
	inFile.close();
} // end loadStudents

void showStudentNames(std::vector<Student*>& students){
	for (Student* student: students){
		std::cout << student->getLastFirst();
		std::cout << ", " << student->getCreditHours() << std::endl;
	} // end for
} // end showStudentNames 

void delStudents(std::vector<Student*>& students){
	for (Student* student: students){
		delete student;
	} // end for
} // end delStudents

void printStudents(std::vector<Student*>& students){
	for (Student* student: students){
		student->printStudent();
		std::cout << "__________________________" << std::endl;
	} // end for
} // end printStudents

void findStudent(std::vector<Student*>& students){
	for (Student* student: students){
		std::string lastName;
		std::cout << "last name of student: ";
		std::cin >> lastName;
		std::string currentLine;
		
		std::string studentString = student->getLastFirst();

		int result = studentString.find(lastName);

		if (result = std::string::npos){
			std::cout << result;
		}else{
			std::cout << lastName << " not found :(";
		} // end if
	} // end for
} // end findStudent



#include <iostream>
#include "degree.h"
#include "student.h"

using std::string;

Student::Student(string iStudentID, string iFName, string iLName, string iEmail,  int iAge, int daysToCom1, int daysToCom2, int daysToCom3, DegreeProgram iDegree) {
	setID(iStudentID);
	setFName(iFName);
	setLName(iLName);
	setEmail(iEmail);
	setAge(iAge);
	setComArray(daysToCom1, daysToCom2, daysToCom3);
	setDegree(iDegree);
}

void Student::setID(string iStudentID) {
		studentID = iStudentID;
	}
void Student::setFName(string iFName) {
		fName = iFName;
	}
void Student::setLName(string iLName) {
		lName = iLName;
	}
void Student::setEmail(string iEmail) {
		email = iEmail;
	}
void Student::setAge(int iAge) {
		age = iAge;
	}
void Student::setComArray(int daysToCom1, int daysToCom2, int daysToCom3) {
		numDaysToCom[0] = (daysToCom1);
		numDaysToCom[1] = (daysToCom2);
		numDaysToCom[2] = (daysToCom3);
	}
void Student::setDegree(DegreeProgram iDegree) {
		degree = iDegree;
	}

string Student::getID() {
		return studentID;
	}
string Student::getFName() {
		return fName;
	}
string Student::getLName() {
		return lName;
	}
string Student::getEmail() {
		return email;
	}
int Student::getAge() {
		return age;
	}
int Student::getDay1() {
		return numDaysToCom[0];
	}
int Student::getDay3() {
		return numDaysToCom[2];
	}
double Student::getAvgDays() {
		double avg = 0;
		for (int i = 0; i < 3; i++) {
			avg = avg + numDaysToCom[i];
		}
		return avg;
		
	}
DegreeProgram Student::getDegree() {
		return degree;
	}

void Student::print() {
	int i;
	std::cout << studentID << "\tFirst Name: " << fName << "\tLast Name: " << lName << "\tAge: " << age << "\tdaysInCourse: {";
	for (i = 0; i < 2; i++) {
		std::cout << numDaysToCom[i] << ", ";
	}
	std::cout << numDaysToCom[i] << "} Degree Program: ";
	switch (degree) {
		case 0:
			std::cout << "SECURITY\n";
			break;
		case 1:
			std::cout << "NETWORK\n";
			break;
		case 2:
			std::cout << "SOFTWARE\n";
			break;
		default:
			std::cout << "INVALID DEGREE\n";
	}
}

void Student::test() {
	std::cout << getID() << std::endl;
	std::cout << getFName() << std::endl;
	std::cout << getLName() << std::endl;
	std::cout << getEmail() << std::endl;
	std::cout << getAge() << std::endl;
	std::cout << getAge() << std::endl;
	std::cout << getDay1() << std::endl;
	std::cout << getDay2() << std::endl;
	std::cout << getDay3() << std::endl;
	std::cout << getAvgDays() << std::endl;
	std::cout << getDegree() << std::endl;
	print();
}
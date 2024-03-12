#include <iostream>
#include "roster.h"
#include "student.h"
#include "degree.h"

Roster::Roster() {
	this->capacity = 0;
	this->size = 0;
	this->classRosterArray = nullptr;
}

Roster::Roster(int capacity) {
	this->capacity = capacity;
	this->size = 0;
	this->classRosterArray = new Student*[capacity];
}

Roster::~Roster() {
	for (int i = 0; i = size; i++) {
		delete this->classRosterArray[i];
	}
	delete classRosterArray;
}

void Roster::add(string iStudentID, string iFName, string iLName, string iEmail, int iAge, int daysToCom1, int daysToCom2, int daysToCom3, DegreeProgram iDegree) {
	classRosterArray[size] = new Student(iStudentID, iFName, iLName, iEmail, iAge, daysToCom1, daysToCom2, daysToCom3, iDegree);
	size += 1;
}

void Roster::remove(string studentID) {
	for (int i = 0; i < size; i++) {
		if (classRosterArray[i]->getID() == studentID) {
			delete classRosterArray[i];
		}
		else {
			std::cout << "No student with ID\n";
		}
	}
}

void Roster::printAll() {
	for (int i = 0; i < size; i++) {
		(this->classRosterArray)[i]->print();
	}
}

void Roster::printAverageDaysInCourse(string studentID) {
	for (int i = 0; i < size; i++) {
		if (classRosterArray[i]->getID() == studentID) {
			classRosterArray[i]->getAvgDays();
		}
		else {
			std::cout << "No student with ID\n";
		}
	}
}

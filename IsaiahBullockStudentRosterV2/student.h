#pragma once
#include "degree.h"
using std::string;
class Student {
	string studentID;
	string fName;
	string lName;
	string email;
	int age;
	int numDaysToCom[3];
	DegreeProgram degree;
public:
	Student(string iStudentID = "Blank", string iFName = "Blank", string iLName = "Blank", string iEmail = "Blank", int iAge = 0, int daysToCom1 = 0, int daysToCom2 = 0, int daysToCom3 = 0, DegreeProgram iDegree = SECURITY);
	void setID(string iStudentID);
	void setFName(string iFName);
	void setLName(string iLName);
	void setEmail(string iEmail);
	void setAge(int iAge);
	void setComArray(int daysToCom1, int daysToCom2, int daysToCom3);
	void setDegree(DegreeProgram iDegree);
	string getID();
	string getFName();
	string getLName();
	string getEmail();
	int getAge();
	int getDay1();
	int getDay2();
	int getDay3();
	double getAvgDays();
	DegreeProgram getDegree();
	
	void print();
};
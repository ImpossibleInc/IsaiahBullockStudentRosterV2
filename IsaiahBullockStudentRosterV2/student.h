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
	Student(string iStudentID, string iFName, string iLName, string iEmail, int iAge, int daysToCom1, int daysToCom2, int daysToCom3, DegreeProgram iDegree);
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
	void test();
};
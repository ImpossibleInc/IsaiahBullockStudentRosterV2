// IsaiahBullockStudentRosterV2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "degree.h"
#include "student.h"
#include "roster.h"
using namespace std;

int commaSpotStart = 0;
int commaSpotEnd;
int commaDist;
string scrubbedID;
string scrubbedFName;
string scrubbedLName;
string scrubbedEmail;
string scrubbedAge;
string scrubbedD1;
string scrubbedD2;
string scrubbedD3;
string scrubbedDegree;
int convAge;
int convD1;
int convD2;
int convD3;
DegreeProgram convDegree;


void scrub(string stringStudent) {
	commaSpotStart = 0;
	commaSpotEnd = stringStudent.find(",", commaSpotStart);
	scrubbedID = stringStudent.substr(commaSpotStart, commaSpotEnd);
	commaSpotStart = commaSpotEnd + 1;
	commaSpotEnd = stringStudent.find(",", commaSpotStart);
	commaDist = commaSpotEnd - commaSpotStart;
	scrubbedFName = stringStudent.substr(commaSpotStart, commaDist);
	commaSpotStart = commaSpotEnd + 1;
	commaSpotEnd = stringStudent.find(",", commaSpotStart);
	commaDist = commaSpotEnd - commaSpotStart;
	scrubbedLName = stringStudent.substr(commaSpotStart, commaDist);
	commaSpotStart = commaSpotEnd + 1;
	commaSpotEnd = stringStudent.find(",", commaSpotStart);	commaDist = commaSpotEnd - commaSpotStart;
	scrubbedEmail = stringStudent.substr(commaSpotStart, commaDist);
	commaSpotStart = commaSpotEnd + 1;
	commaSpotEnd = stringStudent.find(",", commaSpotStart);
	commaDist = commaSpotEnd - commaSpotStart;
	scrubbedAge = stringStudent.substr(commaSpotStart, commaDist);
	commaSpotStart = commaSpotEnd + 1;
	commaSpotEnd = stringStudent.find(",", commaSpotStart);
	commaDist = commaSpotEnd - commaSpotStart;
	scrubbedD1 = stringStudent.substr(commaSpotStart, commaDist);
	commaSpotStart = commaSpotEnd + 1;
	commaSpotEnd = stringStudent.find(",", commaSpotStart);
	commaDist = commaSpotEnd - commaSpotStart;
	scrubbedD2 = stringStudent.substr(commaSpotStart, commaDist);
	commaSpotStart = commaSpotEnd + 1;
	commaSpotEnd = stringStudent.find(",", commaSpotStart);
	commaDist = commaSpotEnd - commaSpotStart;
	scrubbedD3 = stringStudent.substr(commaSpotStart, commaDist);
	commaSpotStart = commaSpotEnd + 1;
	commaSpotEnd = stringStudent.find(",", commaSpotStart);
	commaDist = commaSpotEnd - commaSpotStart;
	scrubbedDegree = stringStudent.substr(commaSpotStart, commaDist);
	commaSpotStart = commaSpotEnd + 1;
}
void printStringStudent() {
	int i = 0;
	std::cout << scrubbedID << "\tFirst Name: " << scrubbedFName << "\tLast Name: " << scrubbedLName << "\tAge: " << scrubbedAge << "\tdaysInCourse: {";
	std::cout << scrubbedD1 << ", " << scrubbedD2 << ", " << scrubbedD3 << "} Degree Program: " << scrubbedDegree << std::endl;
}
void convertAge() {
	convAge = 0;
	for (int i = 0; i < scrubbedAge.length(); i++) {
		convAge = convAge * 10 + scrubbedAge[i] - '0';
	}
}
void convertD1() {
	convD1 = 0;
	for (int i = 0; i < scrubbedD1.length(); i++) {
		convD1 = convD1 * 10 + scrubbedD1[i] - '0';
	}
}
void convertD2() {
	convD2 = 0;
	for (int i = 0; i < scrubbedD2.length(); i++) {
		convD2 = convD2 * 10 + scrubbedD2[i] - '0';
	}
}
void convertD3() {
	convD3 = 0;
	for (int i = 0; i < scrubbedD3.length(); i++) {
		convD3 = convD3 * 10 + scrubbedD3[i] - '0';
	}
}
void convertDegree() {
	if (scrubbedDegree == "SECURITY") {
		convDegree = SECURITY;
	}
	else if (scrubbedDegree == "NETWORK") {
		convDegree = NETWORK;
	}
	else if (scrubbedDegree == "SOFTWARE") {
		convDegree = SOFTWARE;
	}
	else {
		std::cout << "ERROR\n";
	}
}
void convert() {
	convertAge();
	convertD1();
	convertD2();
	convertD3();
	convertDegree();
}

int main()
{  
   cout << "Course Title: Scripting and Programming - Applications - C867\n";
   cout << "Language Used: C++\nStudent ID: 011142624\nName: Isaiah Bullock\n";
   const string studentData[] = {
 "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Isaiah,Bullock,ibullo2@wgu.edu,21,20,25,30,SOFTWARE"
   };

   Roster classRosterArray(5);
   scrub(studentData[0]);
   convert();
   classRosterArray.add(scrubbedID, scrubbedFName, scrubbedLName, scrubbedEmail, convAge, convD1, convD2, convD3, convDegree);
   scrub(studentData[1]);
   convert();
   classRosterArray.add(scrubbedID, scrubbedFName, scrubbedLName, scrubbedEmail, convAge, convD1, convD2, convD3, convDegree);
   scrub(studentData[2]);
   convert();
   classRosterArray.add(scrubbedID, scrubbedFName, scrubbedLName, scrubbedEmail, convAge, convD1, convD2, convD3, convDegree);
   scrub(studentData[3]);
   convert();
   classRosterArray.add(scrubbedID, scrubbedFName, scrubbedLName, scrubbedEmail, convAge, convD1, convD2, convD3, convDegree);
   scrub(studentData[4]);
   convert();
   classRosterArray.add(scrubbedID, scrubbedFName, scrubbedLName, scrubbedEmail, convAge, convD1, convD2, convD3, convDegree);
   classRosterArray.printAll();

   

   }

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#include <iostream>
#include "roster.h"
#include "student.h"
#include "degree.h"
int i = 0;
void Roster::add(string iStudentID, string iFName, string iLName, string iEmail, int iAge, int daysToCom1, int daysToCom2, int daysToCom3, DegreeProgram iDegree) {

	Student::Student i(iStudentID, iFName, iLName, iEmail, iAge, daysToCom1, daysToCom2, daysToCom3, iDegree);
}
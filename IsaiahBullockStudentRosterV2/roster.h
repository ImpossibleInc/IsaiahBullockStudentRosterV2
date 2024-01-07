#pragma once
#include "student.h"
#include "degree.h"

class Roster {
public:
	void add(string iStudentID, string iFName, string iLName, string iEmail, int iAge, int daysToCom1, int daysToCom2, int daysToCom3, DegreeProgram iDegree);
};
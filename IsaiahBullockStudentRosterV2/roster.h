#pragma once
#include "student.h"
#include "degree.h"

class Roster {
public:
    int capacity;
    int size;
    Student** classRosterArray;
    Roster();
    Roster(int capacity);
    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
    void remove(string studentID);
    void printAll();
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degreeProgram);
    ~Roster();
};
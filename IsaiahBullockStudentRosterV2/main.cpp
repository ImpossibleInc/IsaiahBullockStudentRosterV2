// IsaiahBullockStudentRosterV2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "degree.h"
#include "student.h"
#include "roster.h"

using namespace std;
int main()
{
   cout << "Course Title: Scripting and Programming - Applications - C867\n";
   cout << "Language Used: C++\nStudent ID: 011142624\nName: Isaiah Bullock\n";
   Student student1("A1", "John", "Smith", "John1989@gm ail.com", 20, 30, 35, 40, SECURITY);
   Student student2("A2", "Suzan", "Erickson", "Erickson_1990@gmailcom", 19, 50, 30, 40, NETWORK);
   Student student3("A3", "Jack", "Napoli", "The_lawyer99yahoo.com", 19, 20, 40, 33, SOFTWARE);
   Student student4("A4", "Erin", "Black", "Erin.black@comcast.net", 22, 50, 58, 40, SECURITY);
   Student student5("A5", "Isaiah", "Bullock", "ibullo2@wgu.edu", 21, 20, 25, 30, SOFTWARE);
   student1.print();
   student2.print();
   student3.print();
   student4.print();
   student5.print();
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

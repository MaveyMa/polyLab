#include "highSchoolStudent.h"
#include <iostream>
#include <string>
using namespace std;

HighSchoolStudent::HighSchoolStudent() : Student()
{
    grade = 1;
    isROPStudent = false;
    mathLevel = 1;
    englishLevel = 1;
}//DEFAULT CONSTRUCTOR

HighSchoolStudent::HighSchoolStudent(string first, string middle, string last,
                                     string sID, string school, double gpa,
                                     int grade, bool isROPStudent, 
                                     int mathLevel, int englishLevel) 
                                     : Student(first, middle, last,
                                               sID, school, gpa)
{
    if (grade >= 1 && grade <= 4)
    {
        this->grade = grade;
    }
    else
    {
        this->grade = 1;
    }
    this->isROPStudent = isROPStudent;
    if (mathLevel >= 1 && mathLevel <= 4)
    {
        this->mathLevel = mathLevel;
    }
    else
    {
        this->mathLevel = 1;
    }
    if (englishLevel >= 1 && englishLevel <= 4)
    {
        this->englishLevel = englishLevel;
    }
    else
    {
        this->englishLevel = 1;
    }
}//OVERLOADED CONSTRUCTOR

void HighSchoolStudent::printInfo()
{
    cout << "====HIGHSCHOOL STUDENT INFORMATION====" << endl;
    cout << "School: " << school << endl;
    cout << first << " " << middle << " " << last << endl;
    cout << "Student ID: " << sID << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Grade " << grade;
    if (isROPStudent)
    {
        cout << "ROP Student" << endl;
    }
    cout << "Math Level: " << mathLevel << endl;
    cout << "English Level: " << englishLevel << endl;
    cout << "======================================" << endl << endl;
    return;
}//END PRINT HIGHSCHOOL STUDENT INFO

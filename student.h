//*******************************
//Class Name: Student
//Description: Full Name, Student ID, School, GPA, purely virtual printInfo()
//*******************************
#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student
{
    protected:
        string first, 
               middle, 
               last;
        string sID,
               school;
        double gpa;
    public:
        Student();
        Student(string first, string middle, string last,
                string sID, string school, double gpa);
        virtual void printInfo() = 0;
        virtual ~Student() {}
        //GETTERS AND SETTERS================================
        string getFirst()const{return first;}
        string getMiddle()const{return middle;}
        string getlast()const{return last;}
        string getSID()const{return sID;}
        string getSchool()const{return school;}
        double getGPA()const{return gpa;}
        void setFirst(string first){this->first = first;}
        void setMiddle(string middle){this->middle = middle;}
        void setLast(string last){this->last = last;}
        void setSID(string sID){this->sID = sID;}
        void setSchool(string school){this->school = school;}
        void setGPA(double gpa){this->gpa = gpa;}
        //GETTERS AND SETTERS================================
};

Student::Student()
{
    first = "";
    middle = "";
    last = "";
    sID = "";
    school = "";
    gpa = 0.0;
}//END DEFAULT CONSTRUCTOR

Student::Student(string first, string middle, string last,
        string sID, string school, double gpa)
{
    this->first = first;
    this->middle = middle;
    this->last = last;
    this->sID = sID;
    this->school = school;
    if (gpa >= 0 && gpa <= 5)
    {
        this->gpa = gpa;
    }
    else
    {
        gpa = 0.0;
    }
}//END OVERLOADED CONSTRUCTOR

#endif //STUDENT_H

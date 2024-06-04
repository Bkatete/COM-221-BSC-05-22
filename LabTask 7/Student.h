#pragma once
#include<string>
//#include"School.h"
using namespace std;

class Student{
   /* private:
    string mFirstName;
    string mLastName;
    float mWeight;
    unsigned int mAge;
    School mSchool;

    public:
    Student();
    ~Student();
    void SetSchool(School newSchool);St
    School GetSchool() const;

    void initialize();
    static int mIncrement;
    void CalculateAge(int yearBorn, int currentYear);*/
    public:
    Student();
    Student(int newAge);
    Student(string newFirstName, string newLastName,int newAge);
    string GetFirstName() const;
    string GetLastName() const;
    string GetAge() const;

    private:
    string mFirstName;
    string mLastName;
    int mAge;
};

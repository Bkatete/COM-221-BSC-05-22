#include"Student.h"
using namespace std;
#include<iostream>

Student::Student(){
    mFirstName = "default";
    mLastName = "default";
    int mAge = 0;
}

Student::Student(int newAge){
    mFirstName = "default";
    mLastName = "default";
    int mAge = newAge;
}
Student::Student(string newFirstName, string newLastName,int newAge){
    mFirstName = newFirstName;
    mLastName = newLastName;
    int mAge = newAge;
}
/*void Student::initialize(){
    mFirstName = "shalom";
    mLastName= "makwinja";
    mAge = 17;
    cout<<"you have a beautiful name and face, just imagine your name being "<< mFirstName <<" "<<mLastName<<" and besides your age is: "<<mAge <<endl;
}    
void Student::CalculateAge(int yearBorn, int currentYear){
    mAge = currentYear - yearBorn;
    cout<<"your are too young \n and the size of the class is: ";
}
void Student::SetSchool(School newSchool){
    mSchool = newSchool;
}
School Student :: GetSchool() const{
    return mSchool;
}*/

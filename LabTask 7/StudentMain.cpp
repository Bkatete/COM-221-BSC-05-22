#include"Student.h"
using namespace std;

#include<iostream>

int main(){
    Student obj = Student("John", "Doe", 22);
    cout<<"First name is: "<<obj.GetFirstName()<<endl;
    cout<<"Last name is: "<<obj.GetLastName()<<endl;
    cout<<"Age is: "<<obj.GetAge()<<endl;
    /*obj.initialize();
    obj.CalculateAge(2003, 2024);
    cout<<sizeof(Student)<<endl;

    School rect;
    rect.SetSchoolName("some school");
    obj.SetSchool(rect);
    cout<<"School name is: "<<obj.GetSchool().GetSchoolName()<<endl;
    return 0;*/

}
#include<iostream>
#include<string>
using namespace std;
int main(){
    int x = 0;
    int * dynamicInteger = nullptr;

    string Var =" ";
    string * dynamicVar = nullptr;

    cout<<"enter any number: ";
    cin>>x;

    cout <<"enter the value of Var: ";
    cin>>Var;

    dynamicInteger = new int;
    dynamicVar = new string;

    cout<<"the value of x is: "<< x <<endl;
    cout<<"the value of Var is: "<< Var <<endl;

    delete[] dynamicInteger;
    delete[] dynamicVar;

    return 0;

 
}
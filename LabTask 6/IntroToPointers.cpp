#include<iostream>
using namespace std;

int main(){
    int * pPointer = nullptr;
    int integerVar = 5;
    pPointer = &integerVar;

    cout<<"integerVar: "<< integerVar <<endl;
    cout<<"Address of the integerVar: "<< pPointer <<endl;
    cout<<"Address of pPointer: "<< &pPointer <<endl;
    cout<<"Address of pPointer: "<< pPointer <<endl;
    cout<<"Address of the integerVar: "<< &integerVar <<endl;
    cout<<"Address of the integerVar: "<< pPointer + 1 <<endl;
    
   cout<<"Address of pPointer: "<< pPointer <<endl; 



    return 0;
}
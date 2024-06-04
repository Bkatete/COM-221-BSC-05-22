#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;


int main(){
    
    ofstream Myfile("myName.txt");
    string fileData;
    if(Myfile.is_open()){
        Myfile<<"This is the Computer Programming Module. \n";
        Myfile.close();

    }else{
        cout<<"unable to open file \n";
    }
    return 0;
}
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string names [] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
   int size = sizeof(names) / sizeof(names[0]);
   for(int i = 0; i < size; i++){
    if(names[i].find('B') == 0){
        cout<< names[i]<< endl;
    }
   }
}
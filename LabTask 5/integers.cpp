#include<iostream>
#include<limits>
using namespace std;

int main(){
   int userInput = 0;
   bool validInput = false;
   while(!validInput){
    cout<<"please enter an integer  value between 5 and 10: \n ";
    if(!(cin >> userInput)){
        cout<<"Invalid input. Please enter a valid integer. \n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    else if(userInput >= 5 && userInput <= 10){
        validInput = true;
    }else{
        cout<<"Invalid range. The number must between 5 and 10. \n";
    }
   }
    cout<<"thank you! Your input value ("<< userInput<<") has been accepted \n";
}
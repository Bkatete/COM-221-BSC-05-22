#include <iostream>
using namespace std;
int main()
 {
    int userInput;

    bool validInput = false;

    while (!validInput)
     {
        cout << "Enter an integer value between 5 and 10: ";
        cin >> userInput;

        if (cin.fail() || userInput < 5 || userInput > 10)
         {
            cin.clear();
            cin.ignore(10000, '\n'); 
            cout << "Sorry, you entered an invalid number. please try again 1.\n";
        } 
        else
        {
            validInput = true;
        }
    }

    cout << "Your input value " << userInput << " has been accepted.\n";

    return 0;
}

#include <iostream> 

using namespace std;

int main() {

    int* dynamicallyAllocatedInteger = new int;

    cout << "Enter a value for the dynamically allocated integer: ";
    cin >> *dynamicallyAllocatedInteger;

    string* dynamicallyAllocatedString = new string;

    cout << "Enter a value for the dynamically allocated string: ";
    cin.ignore();
    
    getline(*dynamicallyAllocatedString, 100);

    
    cout << "\nThe value of the dynamically allocated integer is: " << *dynamicallyAllocatedInteger;
    cout << "\nThe value of the dynamically allocated string is: " << *dynamicallyAllocatedString;

    delete dynamicallyAllocatedInteger;
    delete dynamicallyAllocatedString;

    return 0;
}
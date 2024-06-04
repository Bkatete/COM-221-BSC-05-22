#include <iostream>
using namespace std;

int main() {
    // Declare an integer variable
    int myInteger = 5;

    // Declare a pointer to an integer and initialize it to nullptr
    int* ptrToInt = nullptr;

    // Assign the pointer to the address of myInteger
    ptrToInt = &myInteger;

    // Output the value of myInteger
    cout << "myInteger: " << myInteger << endl;

    // Output the address of myInteger
    cout << "Address of myInteger: " << &myInteger << endl;

    // Output the address assigned to ptrToInt
    cout << "ptrToInt: " << ptrToInt << endl;

    // Output the address of ptrToInt
    cout << "Address of ptrToInt: " << &ptrToInt << endl;

    return 0;
}
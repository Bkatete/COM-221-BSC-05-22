#include <iostream>
using namespace std;

int main() {
    int firstValue = 0;  // Initialize variables
    int secondValue = 0;

    int* pPointer = nullptr;  // Use a pointer to int

    pPointer = &firstValue;  // Assign pointer to firstValue
    *pPointer = 10;  // Indirection

    pPointer = &secondValue;  // Assign pointer to secondValue
    *pPointer = 20;  // Indirection

    cout << "firstValue is " << firstValue << '\n';
    cout << "secondValue is " << secondValue << '\n';

    return 0;
}
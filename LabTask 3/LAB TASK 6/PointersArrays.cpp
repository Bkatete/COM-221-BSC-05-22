#include <iostream>
using namespace std;

int main() {
    int numbersArray[5];
    int* pPointer = nullptr;

    pPointer = numbersArray;  // Assign the address of the first element to the pointer
    *pPointer = 10;  // Assign a value to the first element

    pPointer++;  // Increment the pointer using pointer arithmetic
    *pPointer = 20;  // Assign a value to the second element

    pPointer = &numbersArray[2];  // Assign the address of the third element to the pointer
    *pPointer = 30;  // Assign a value to the third element

    pPointer = numbersArray + 3;  // Assign the address of the fourth element to the pointer using pointer arithmetic
    *pPointer = 40;  // Assign a value to the fourth element

    *(numbersArray + 4) = 50;  // Assign a value to the fifth element using indirection and pointer arithmetic

    // Iterate and output all the elements in the array
    for (int n = 0; n < 5; n++) {
        cout << numbersArray[n] << ", ";
    }

    cout << '\n';

    return 0;
}
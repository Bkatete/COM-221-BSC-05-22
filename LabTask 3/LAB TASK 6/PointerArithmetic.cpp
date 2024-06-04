#include <iostream>
using namespace std;

int main() {
    // Null pointer
    int* pPointer = nullptr;

    int numbersArray[3] = {10, 20, 30};

    // Assign address of the first element to the pointer
    pPointer = numbersArray;

    // Output the address of the first element
    cout << "Address at pPointer: " << pPointer << endl;

    // Output the address of numbersArray[0]
    cout << "Address of numbersArray[0]: " << &numbersArray[0] << endl;

    // Output the value of the first element using the pointer and indirection
    cout << "Value at pPointer: " << *pPointer << endl;

    // Output the value of the second element
    cout << "Value at ++pPointer: " << *(++pPointer) << endl;

    // Reset the pointer to the first element
    pPointer = numbersArray;

    // Output the value of the first element
    cout << "Value at pPointer++: " << *pPointer++ << endl;

    return 0;
}
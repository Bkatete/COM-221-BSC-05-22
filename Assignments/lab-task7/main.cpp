#include <iostream>
#include "Person.h"

int main() {
    Person Jane("Jane", 60.0f);
    Person John("John", 75.0f);

    float totalWeight = Jane.operator+(John);
    std::cout << "Total weight: " << totalWeight << std::endl;

    if (Jane == John) {
        std::cout << "This is the same person" << std::endl;
    } else {
        std::cout << "This is NOT the same person" << std::endl;
    }

    if (Jane > John) {
        std::cout << "Jane is older than John" << std::endl;
    } else if (John > Jane) {
        std::cout << "John is older than Jane" << std::endl;
    } else {
        std::cout << "Jane and John have the same age" << std::endl;
    }

    return 0;
}
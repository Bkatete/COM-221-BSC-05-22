#include <iostream>
#include <cmath>

// Function prototypes
double calculateTriangleArea(double base, double height);
double calculateRectangleArea(double length, double width);
double calculateSquareArea(double side);

int main() {
    char choice;
    bool quit = false;

    while (!quit) {
        std::cout << "please select the area of the shape to calculate:\n"
                  << "1. Triangle\n"
                  << "2. Rectangle\n"
                  << "3. Square\n"
                  << "4. Quit program\n"
                  << "Enter selection: ";
        std::cin >> choice;

        switch (choice) {
            case '1': {
                double base, height;
                std::cout << "Enter the base length: ";
                std::cin >> base;
                std::cout << "Enter the height: ";
                std::cin >> height;
                std::cout << "The area of the triangle is: " << calculateTriangleArea(base, height) << std::endl;
                break;
            }
            case '2': {
                double length, width;
                std::cout << "Enter the length: ";
                std::cin >> length;
                std::cout << "Enter the width: ";
                std::cin >> width;
                std::cout << "The area of the rectangle is: " << calculateRectangleArea(length, width) << std::endl;
                break;
            }
            case '3': {
                double side;
                std::cout << "Enter the side length: ";
                std::cin >> side;
                std::cout << "The area of the square is: " << calculateSquareArea(side) << std::endl;
                break;
            }
            case '4':
                quit = true;
                break;
            default:
                std::cout << "You input was: number which is an invalid input.\n";
                std::cout << "please enter a valid input!!!\n";
        }
    }

    return 0;
}

// Function definitions
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

double calculateRectangleArea(double length, double width) {
    return length * width;
}

double calculateSquareArea(double side) {
    return side * side;
}

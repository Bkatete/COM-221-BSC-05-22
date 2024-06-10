#include "Area.h"
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include <cmath>

double Area::calculateSquareArea(shapes::Square square) {
    double side = square.getSideLength();
    return side * side;
}

double Area::calculateTriangleArea(shapes::Triangle triangle) {
    double base = triangle.getBase();
    double height = triangle.getHeight();
    return 0.5 * base * height;
}

double Area::calculateCircleArea(shapes::Circle circle) {
    double radius = circle.getRadius();
    return M_PI * radius * radius;
}

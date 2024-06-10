#pragma once

#include <iostream> 

namespace shape { 

    Triangle::Triangle() : base(0.0), height(0.0) {}

    Triangle::Triangle(double b, double h) : base(b), height(h) {}

    Triangle::~Triangle() {}

    void Triangle::setBase(double b) {
        base = b;
    }

    void Triangle::setHeight(double h) {
        height = h;
    }

    double Triangle::getBase() {
        return base;
    }

    double Triangle::getHeight() {
        return height;
    }
}

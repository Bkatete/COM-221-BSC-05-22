#pragma once

#include <iostream>

class Box {
public:
    Box();
    Box(const double newLength, const double newBreadth, const double newHeight);
    ~Box();

    double GetVolume() const;

    void SetLength(double len);
    void SetBreadth(double bre);
    void SetHeight(double hei);

private:
    double length;
    double breadth;
    double height;
};
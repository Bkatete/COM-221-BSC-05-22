#pragma once

#include <iostream> 

using namespace std; 

class Box { 

public: 

Box();
Box(const double newLength, const double newBreadth, const double newHeight); 
~Box(); 

double GetVolume();

void Set Length (double len); 
void SetBreadth (double bre); 
void SetHeight(double hei); 

// Overload + operator to add two Box objects. Box operator+(const Box& b); 
private: 
double length; double breadth; double height; 
// Length of a box // Breadth of a box // Height of a box 
}; 

#pragma once 
#include "Box.h" 
Box::Box() { 
} 
length = 0.0; 
breadth = 0.0; 
height = 0.0; 
Box::Box(const double newLength, const double newBreadth, const double newHeight) { 
length 
= 
newLength; 
breadth = newBreadth; 
height 
= 
} 
Box::~Box() { 
} 
newHeight; 
double Box::GetVolume() { 
} 
return length * breadth * height; 
void Box::SetLength(double len) { 
} 
length 
= 
len; 
void Box::SetBreadth (double bre) { 
} 
breadth = bre; 
void Box::SetHeight(double hei) { 
height 
= 
hei; 
} 

Box box; 
box.length 
= 
this->length + b.length; 
box.breadth = this->breadth + b.breadth; 
this->height + b.height; 
box.height 
= 
return box; 
} 

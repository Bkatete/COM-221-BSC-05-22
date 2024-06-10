#include <iostream>

class Box {
public:
    Box() : length(0.0), breadth(0.0), height(0.0) {}
    void SetLength(double l) { length = l; }
    void SetBreadth(double b) { breadth = b; }
    void SetHeight(double h) { height = h; }
    double GetVolume() const { return length * breadth * height; }
    Box operator+(const Box& other) const {
        Box result;
        result.length = length + other.length;
        result.breadth = breadth + other.breadth;
        result.height = height + other.height;
        return result;
    }
private:
    double length;
    double breadth;
    double height;
};

int main() {
    Box Box1;
    Box Box2;
    Box Box3;

    double volume = 0.0;

    // box 1 specification
    Box1.SetLength(6.0);
    Box1.SetBreadth(7.0);
    Box1.SetHeight(5.0);

    // box 2 specification
    Box2.SetLength(12.0);
    Box2.SetBreadth(13.0);
    Box2.SetHeight(10.0);

    // volume of box 1
    volume = Box1.GetVolume();
    std::cout << "Volume of Box1: " << volume << std::endl;

    // volume of box 2
    volume = Box2.GetVolume();
    std::cout << "Volume of Box2: " << volume << std::endl;

    // Add two objects as follows:
    Box3 = Box1 + Box2;

    // volume of box 3
    volume = Box3.GetVolume();
    std::cout << "Volume of Box3: " << volume << std::endl;

    return 0;
}
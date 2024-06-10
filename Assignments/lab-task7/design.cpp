#pragma once
#include <string>

class Person {
public:
    Person();
    Person(const std::string& firstName, float weight);
    ~Person();
    // Overload the add operator
    float operator+(const Person& otherPerson) const;
private:
    float mWeight;
    std::string mFirstName;
    int mAge;
};


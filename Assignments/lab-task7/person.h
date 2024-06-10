#pragma once

#include <string>

class Person {
public:
    Person();
    Person(const std::string& newFirstName, float newWeight);
    ~Person();

    float operator+(const Person& otherPerson);

    bool operator==(const Person& otherPerson) const;
    bool operator!=(const Person& otherPerson) const;
    bool operator<(const Person& otherPerson) const;
    bool operator>(const Person& otherPerson) const;

private:
    std::string firstName;
    float weight;
    int age;
};
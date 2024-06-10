#include "Person.h"

Person::Person() : firstName(""), weight(0.0f), age(0) {}

Person::Person(const std::string& newFirstName, float newWeight)
    : firstName(newFirstName), weight(newWeight), age(0) {}

Person::~Person() {}

float Person::operator+(const Person& otherPerson) {
    return weight + otherPerson.weight;
}

bool Person::operator==(const Person& otherPerson) const {
    return firstName == otherPerson.firstName;
}

bool Person::operator!=(const Person& otherPerson) const {
    return firstName != otherPerson.firstName;
}

bool Person::operator<(const Person& otherPerson) const {
    return age < otherPerson.age;
}

bool Person::operator>(const Person& otherPerson) const {
    return age > otherPerson.age;
}
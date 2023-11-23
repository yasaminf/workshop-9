#include "Student.h"
#include <iostream>
#include <cstring>

namespace sdds {
    Student::Student() : name(nullptr), age(0) {}

    Student::Student(const char* studentName, int studentAge) : age(studentAge) {
        name = new char[strlen(studentName) + 1];
        strcpy(name, studentName);
    }

    Student::Student(const Student& other) : age(other.age) {
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
    }

    Student& Student::operator=(const Student& other) {
        if (this != &other) {
            delete[] name;
            age = other.age;
            name = new char[strlen(other.name) + 1];
            strcpy(name, other.name);
        }
        return *this;
    }

    Student::~Student() {
        delete[] name;
    }

    void Student::display() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
} // namespace sdds
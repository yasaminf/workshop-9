// Graduate.cpp

#include "Graduate.h"
#include <iostream> // Include this header for cout and endl
#include <cstring>

namespace sdds {
    Graduate::Graduate() : supervisor(nullptr), thesisTitle(nullptr) {}

    Graduate::Graduate(const char* studentName, int studentAge, const char* title, const char* supervisor)
        : Student(studentName, studentAge) {
        thesisTitle = new char[strlen(title) + 1];
        strcpy(thesisTitle, title);
        this->supervisor = new char[strlen(supervisor) + 1];
        strcpy(this->supervisor, supervisor);
    }

    Graduate::Graduate(const Graduate& other) : Student(other) {
        thesisTitle = new char[strlen(other.thesisTitle) + 1];
        strcpy(thesisTitle, other.thesisTitle);
        supervisor = new char[strlen(other.supervisor) + 1];
        strcpy(supervisor, other.supervisor);
    }

    Graduate& Graduate::operator=(const Graduate& other) {
        if (this != &other) {
            Student::operator=(other);
            delete[] thesisTitle;
            thesisTitle = new char[strlen(other.thesisTitle) + 1];
            strcpy(thesisTitle, other.thesisTitle);
            delete[] supervisor;
            supervisor = new char[strlen(other.supervisor) + 1];
            strcpy(supervisor, other.supervisor);
        }
        return *this;
    }

    Graduate::~Graduate() {
        delete[] thesisTitle;
        delete[] supervisor;
    }

    void Graduate::display() const {
        Student::display();
        std::cout << "Thesis Title: " << thesisTitle << std::endl
                  << "Supervisor: " << supervisor << std::endl
                  << "---------------------------------------------" << std::endl;
    }
} // namespace sdds

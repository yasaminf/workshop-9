#ifndef GRADUATE_H
#define GRADUATE_H

#include "Student.h"

namespace sdds {
    class Graduate : public Student {
    private:
        char* supervisor;
        char* thesisTitle;

    public:
        Graduate();
        Graduate(const char* studentName, int studentAge, const char* title, const char* supervisor);
        Graduate(const Graduate& other);
        Graduate& operator=(const Graduate& other);
        ~Graduate();
        void display() const;
    };
} // namespace sdds

#endif // GRADUATE_H
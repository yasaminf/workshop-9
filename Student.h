#ifndef STUDENT_H
#define STUDENT_H

namespace sdds {
    class Student {
    private:
        char* name;
        int age;

    public:
        Student();
        Student(const char* studentName, int studentAge);
        Student(const Student& other);
        Student& operator=(const Student& other);
        ~Student();
        void display() const;
    };
} // namespace sdds

#endif // STUDENT_H
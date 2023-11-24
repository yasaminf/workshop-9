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
        virtual ~Student(); //This could be a source of memory leak
                            //From now on always have "virtual" for your destructors
                            //It does not affect anything if inheritance is not involved.
                            //But it does avoid memory leak by using the most updated destructor
                            //when inheritance is involved. Read about it in your virtuality notes.
        void display() const;
    };
} // namespace sdds

#endif // STUDENT_H

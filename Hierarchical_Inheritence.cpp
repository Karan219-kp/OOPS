#include <iostream>
using namespace std;

// Base class
class Person {
public:
    void display() {
        cout << "This is a person." << endl;
    }
};

// Derived class 1
class Student : public Person {
public:
    void study() {
        cout << "Student is studying." << endl;
    }
};

// Derived class 2
class Teacher : public Person {
public:
    void teach() {
        cout << "Teacher is teaching." << endl;
    }
};

int main() {
    Student s;
    Teacher t;

    s.display();
    s.study();

    cout << endl;

    t.display();
    t.teach();

    return 0;
}

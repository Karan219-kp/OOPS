#include <iostream>
using namespace std;

// Base class
class Student {
public:
    void getStudent() {
        cout << "Student Details" << endl;
    }
};

// Derived class from Student
class Marks : public Student {
public:
    void getMarks() {
        cout << "Marks Obtained: 90" << endl;
    }
};

// Another base class
class Sports {
public:
    void getSports() {
        cout << "Sports Score: 95" << endl;
    }
};

// Hybrid inheritance: Result inherits from Marks and Sports
class Result : public Marks, public Sports {
public:
    void displayResult() {
        cout << "Final Result: Pass" << endl;
    }
};

int main() {
    Result r;

    r.getStudent();
    r.getMarks();
    r.getSports();
    r.displayResult();

    return 0;
}

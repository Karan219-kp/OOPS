#include <iostream>
using namespace std;

// Base class
class Student {
public:
    string name;

    void getName() {
        cout << "Enter name: ";
        cin >> name;
    }
};

// Derived class
class Marks : public Student {
public:
    int marks;

    void getMarks() {
        cout << "Enter marks: ";
        cin >> marks;
    }
};

// Derived from Marks
class Result : public Marks {
public:
    void display() {
        cout << "\nStudent Name: " << name << endl;
        cout << "Marks: " << marks << endl;

        if (marks >= 40)
            cout << "Result: Pass";
        else
            cout << "Result: Fail";
    }
};

int main() {
    Result r;

    r.getName();
    r.getMarks();
    r.display();

    return 0;
}

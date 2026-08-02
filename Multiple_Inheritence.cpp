#include <iostream>
using namespace std;

// Base class 1
class Student {
public:
    void getStudent() {
        cout << "Student details entered." << endl;
    }
};

// Base class 2
class Sports {
public:
    void getSports() {
        cout << "Sports marks entered." << endl;
    }
};

// Derived class
class Result : public Student, public Sports {
public:
    void displayResult() {
        cout << "Result calculated successfully." << endl;
    }
};

int main() {
    Result r;

    r.getStudent();
    r.getSports();
    r.displayResult();

    return 0;
}

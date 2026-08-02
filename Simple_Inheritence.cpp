#include <iostream>
using namespace std;

// Base class
class A {
public:
    void showdata() {
        cout << "I'm Karan B Prajapati !" << endl;
    }
};

// Derived class
class B : public A {
public:
    void display() {
        cout << "Now I'm Studying" << endl;
    }
};

int main() {
    B o;

    // Calling base class function
    o.showdata();

    // Calling derived class function
    o.display();

    return 0;
}

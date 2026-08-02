#include <iostream>
using namespace std;

// Base class
class A {
public:
    void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

// Derived class
class B : public A {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

int main() {
    B o;

    // Calling base class function
    o.sound();

    // Calling derived class function
    o.bark();

    return 0;
}

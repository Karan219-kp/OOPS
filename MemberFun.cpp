#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks;

public:
    void getDetails();
    void displayDetails();
};

// Member function definition outside the class
void Student::getDetails()
{
    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Marks: ";
    cin >> marks;
}

// Member function definition outside the class
void Student::displayDetails()
{
    cout << "\nStudent Details" << endl;
    cout << "Roll Number: " << rollNo << endl;
    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;
}

int main()
{
    Student s;

    s.getDetails();
    s.displayDetails();

    return 0;
}

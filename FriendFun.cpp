#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rno;
    string name;

public:
    void getData()
    {
        cout << "Enter Roll Number: ";
        cin >> rno;

        cout << "Enter Name: ";
        cin >> name;
    }

    friend void display(Student s);
};

// Friend function
void display(Student s)
{
    cout << "\nStudent Details" << endl;
    cout << "Roll Number: " << s.rno << endl;
    cout << "Name: " << s.name << endl;
}

int main()
{
    Student s;

    s.getData();
    display(s);

    return 0;
}

#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;

public:
    Student(int r)
    {
        rollNo = r;
    }

    Student(Student &s)
    {
        rollNo = s.rollNo;
    }

    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main()
{
    Student s1(101);
    Student s2(s1);

    s2.display();

    return 0;
}

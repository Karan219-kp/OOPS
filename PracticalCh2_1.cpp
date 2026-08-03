#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    void getPerson()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void showPerson()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class CollegeStudent : public Person
{
private:
    int rollNo;
    string course;
    float percentage;

public:
    void getStudent()
    {
        getPerson();

        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Course Name: ";
        cin >> course;

        cout << "Enter Percentage: ";
        cin >> percentage;
    }

    void showStudent()
    {
        showPerson();

        cout << "Roll Number: " << rollNo << endl;
        cout << "Course: " << course << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main()
{
    CollegeStudent s;

    s.getStudent();

    cout << "\nStudent Profile\n";
    s.showStudent();

    return 0;
}

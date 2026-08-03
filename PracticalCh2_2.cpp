#include <iostream>
using namespace std;

class Employee
{
protected:
    string name;
    float basicSalary;

public:
    void getEmployee()
    {
        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }
};

class SalesManager : public Employee
{
private:
    float salesAmount, commissionRate;

public:
    void getData()
    {
        getEmployee();

        cout << "Enter Sales Amount: ";
        cin >> salesAmount;

        cout << "Enter Commission Rate (%): ";
        cin >> commissionRate;
    }

    void display()
    {
        float commission = salesAmount * commissionRate / 100;
        float finalSalary = basicSalary + commission;

        cout << "\nEmployee Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Commission: " << commission << endl;
        cout << "Final Salary: " << finalSalary << endl;
    }
};

int main()
{
    SalesManager s;

    s.getData();
    s.display();

    return 0;
}

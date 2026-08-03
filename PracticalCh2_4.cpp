#include <iostream>
using namespace std;

class AcademicPerformance
{
protected:
    int academicMarks;

public:
    void getAcademic()
    {
        cout << "Enter Academic Marks: ";
        cin >> academicMarks;
    }
};

class SportsPerformance
{
protected:
    int sportsMarks;

public:
    void getSports()
    {
        cout << "Enter Sports Marks: ";
        cin >> sportsMarks;
    }
};

class ScholarshipResult : public AcademicPerformance, public SportsPerformance
{
public:
    void getData()
    {
        getAcademic();
        getSports();
    }

    void result()
    {
        if (academicMarks >= 75 && sportsMarks >= 60)
            cout << "Eligible for Scholarship";
        else
            cout << "Not Eligible for Scholarship";
    }
};

int main()
{
    ScholarshipResult s;

    s.getData();
    s.result();

    return 0;
}

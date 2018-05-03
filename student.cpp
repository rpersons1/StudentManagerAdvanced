#include "student.h"
#include <string>
using namespace std;
student::student()
{
    firstName = "";
    lastName = "";
}
void student::setName(string s1, string s2)
{
    firstName = s1;
    lastName = s2;
}
string student::fullName()
{
    string f;
    f.append(firstName);
    f.append(" ");
    f.append(lastName);
    return f;
}

void student::addGrade(double grade)
{
    grades.push_back(grade);    
}

double student::getScore()
{
    double sum = 0;
    if(grades.empty())
    {
        return 0;
    }
    else
    {
        for(int i=0; i< grades.size(); i++)
        {
            sum += grades[i];
        }
    }
    return sum/grades.size();
}

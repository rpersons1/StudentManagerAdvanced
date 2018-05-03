
#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>
#include <vector>

using namespace std;

class student
{
private:
    string firstName;
    string lastName;
    vector <double> grades;
public:
    student();
    void setName(string s1, string s2);
    string fullName();
    void addGrade(double);
    double getScore();
};

#endif

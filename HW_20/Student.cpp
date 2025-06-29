#include "Student.h"
#include <iostream>
using namespace std;

Student::Student()
    : fullName("Unknown")
    , averageGrade(0.0)
    , institution("Unknown")
    , groupNumber(0)
{
}

Student::Student(const string& name,
    double avg,
    const string& inst,
    int group)
    : fullName(name)
    , averageGrade(avg)
    , institution(inst)
    , groupNumber(group)
{
}

Student::Student(const Student& other)
    : fullName(other.fullName)
    , averageGrade(other.averageGrade)
    , institution(other.institution)
    , groupNumber(other.groupNumber)
{
}

void Student::printInfo() const {
    cout << "Студент: " << fullName
        << "\nСередній бал: " << averageGrade
        << "\nЗаклад: " << institution
        << "\nГрупа: " << groupNumber
        << "\n\n";
}

const string& Student::getFullName()   const { return fullName; }
double        Student::getAverage()    const { return averageGrade; }
const string& Student::getInstitution() const { return institution; }
int           Student::getGroup()       const { return groupNumber; }

void Student::setFullName(const string& name) { fullName = name; }
void Student::setAverage(double avg) { averageGrade = avg; }
void Student::setInstitution(const string& inst) { institution = inst; }
void Student::setGroup(int group) { groupNumber = group; }

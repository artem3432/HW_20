#include "Student.h"
#include <iostream>
using namespace std;

Student::Student()
    : fullName_("Unknown"), averageGrade_(0.0),
    schoolName_("Unknown"), groupNumber_(0) {
}

Student::Student(const string& fullName, double averageGrade,
    const string& schoolName, int groupNumber)
    : fullName_(fullName), averageGrade_(averageGrade),
    schoolName_(schoolName), groupNumber_(groupNumber) {
}

const string& Student::getFullName() const { return fullName_; }
double        Student::getAverageGrade() const { return averageGrade_; }
const string& Student::getSchoolName() const { return schoolName_; }
int           Student::getGroupNumber() const { return groupNumber_; }

void Student::printInfo() const {
    cout << "Student: " << fullName_ << "\n"
        << "  Average: " << averageGrade_ << "\n"
        << "  School: " << schoolName_ << "\n"
        << "  Group#: " << groupNumber_ << "\n";
}

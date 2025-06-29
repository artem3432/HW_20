#pragma once

#include <string>
using namespace std;

class Student {
private:
    string fullName_;
    double averageGrade_;
    string schoolName_;
    int groupNumber_;

public:
    Student();
    Student(const string& fullName, double averageGrade,
        const string& schoolName, int groupNumber);

    const string& getFullName() const;
    double        getAverageGrade() const;
    const string& getSchoolName() const;
    int           getGroupNumber() const;

    void printInfo() const;
};

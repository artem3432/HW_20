#include <string>

class Student {
private:
    std::string fullName;
    double      averageGrade;
    std::string institution;
    int         groupNumber;

public:
    Student();
    Student(const std::string& name,
        double avg,
        const std::string& inst,
        int group);
    Student(const Student& other);

    void printInfo() const;

    const std::string& getFullName()   const;
    double              getAverage()    const;
    const std::string& getInstitution() const;
    int                 getGroup()       const;

    void setFullName(const std::string& name);
    void setAverage(double avg);
    void setInstitution(const std::string& inst);
    void setGroup(int group);
};


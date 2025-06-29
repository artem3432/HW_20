// Student
//#include "Student.h"
//#include <iostream>
//#include <clocale>
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, ""); 
//
//    Student s1;
//    cout << "Default student:\n";
//    s1.printInfo();
//
//    Student s2("Іван Петренко", 4.5, "КПІ", 201);
//    cout << "\nCustom student:\n";
//    s2.printInfo();
//
//    cout << "\nAccessors demo:\n";
//    cout << "Name: " << s2.getFullName() << "\n";
//    cout << "Grade: " << s2.getAverageGrade() << "\n";
//    cout << "School: " << s2.getSchoolName() << "\n";
//    cout << "Group: " << s2.getGroupNumber() << "\n";
//
//    return 0;
//}

// Airplane
#include "Plane.h"
#include <iostream>
using namespace std;

int main() {

    Plane p1;
    cout << "Default plane:\n";
    p1.printInfo();

    Plane p2("PS123", "Kyiv", "London", "Boeing 737", 180, 10);
    cout << "\nCustom plane:\n";
    p2.printInfo();

    cout << "\nSelling 5 tickets...\n";
    if (p2.sellTickets(5)) cout << "Sold ✓\n";
    p2.printInfo();

    cout << "\nReturning 3 tickets...\n";
    if (p2.returnTickets(3)) cout << "Returned ✓\n";
    p2.printInfo();

    cout << "\nTry sell 200...\n";  p2.sellTickets(200);
    cout << "\nTry return 20...\n"; p2.returnTickets(20);

    return 0;
}



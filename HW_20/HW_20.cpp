//#include "Student.h"
//#include <iostream>
//#include <clocale>
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "");
//
//    Student s1;
//    cout << "=== s1 (default) ===\n";
//    s1.printInfo();
//
//    Student s2("�������� ���� ��������", 4.5, "�������� ����������", 312);
//    cout << "=== s2 (with params) ===\n";
//    s2.printInfo();
//
//    cout << "��� �������� s2: " << s2.getFullName() << "\n";
//    cout << "������� ��� �������� s2: " << s2.getAverage() << "\n";
//    cout << "���������� ������ s2: " << s2.getInstitution() << "\n";
//    cout << "����� ����� s2: " << s2.getGroup() << "\n\n";
//
//    s2.setAverage(4.8);
//    s2.setGroup(315);
//    cout << "=== s2 after changes ===\n";
//    s2.printInfo();
//
//    return 0;
//}

#include "Airplane.h"
#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    Airplane a1;
    cout << "=== a1 ===\n";
    a1.printInfo();

    Airplane a2("PS123", "���", "������", "Boeing 777", 300, 150);
    cout << "=== a2 ===\n";
    a2.printInfo();

    cout << "������ ������� 100 ������ �� ���� " << a2.getFlightNumber() << ": ";
    cout << (a2.sellTickets(100) ? "������.\n" : "���� ������ ���� ��� �������.\n");
    a2.printInfo();

    cout << "������ ������� 100 ������ ��������: ";
    cout << (a2.sellTickets(100) ? "������.\n" : "���������, ������ ����.\n");
    a2.printInfo();

    cout << "���������� 50 ������: ";
    cout << (a2.returnTickets(50) ? "��������.\n" : "������� � �������.\n");
    a2.printInfo();

    cout << "���������� 500 ������: ";
    cout << (a2.returnTickets(500) ? "��������.\n" : "�������: ����� ������ �� ���� �������.\n");
    a2.printInfo();

    return 0;
}

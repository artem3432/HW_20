#include "Student.h"
#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "");

    Student s1;
    cout << "=== s1 (default) ===\n";
    s1.printInfo();

    Student s2("�������� ���� ��������", 4.5, "�������� ����������", 312);
    cout << "=== s2 (with params) ===\n";
    s2.printInfo();

    cout << "��� �������� s2: " << s2.getFullName() << "\n";
    cout << "������� ��� �������� s2: " << s2.getAverage() << "\n";
    cout << "���������� ������ s2: " << s2.getInstitution() << "\n";
    cout << "����� ����� s2: " << s2.getGroup() << "\n\n";

    s2.setAverage(4.8);
    s2.setGroup(315);
    cout << "=== s2 after changes ===\n";
    s2.printInfo();

    return 0;
}

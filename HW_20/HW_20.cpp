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
//    Student s2("Іваненко Іван Іванович", 4.5, "Київський Університет", 312);
//    cout << "=== s2 (with params) ===\n";
//    s2.printInfo();
//
//    cout << "Ім’я студента s2: " << s2.getFullName() << "\n";
//    cout << "Середній бал студента s2: " << s2.getAverage() << "\n";
//    cout << "Навчальний заклад s2: " << s2.getInstitution() << "\n";
//    cout << "Номер групи s2: " << s2.getGroup() << "\n\n";
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

    Airplane a2("PS123", "Київ", "Лондон", "Boeing 777", 300, 150);
    cout << "=== a2 ===\n";
    a2.printInfo();

    cout << "Спроба продати 100 квитків на рейс " << a2.getFlightNumber() << ": ";
    cout << (a2.sellTickets(100) ? "успішно.\n" : "немає вільних місць або помилка.\n");
    a2.printInfo();

    cout << "Спроба продати 100 квитків повторно: ";
    cout << (a2.sellTickets(100) ? "успішно.\n" : "неможливо, замало місць.\n");
    a2.printInfo();

    cout << "Повернення 50 квитків: ";
    cout << (a2.returnTickets(50) ? "здійснено.\n" : "помилка у кількості.\n");
    a2.printInfo();

    cout << "Повернення 500 квитків: ";
    cout << (a2.returnTickets(500) ? "здійснено.\n" : "помилка: таких квитків не було продано.\n");
    a2.printInfo();

    return 0;
}

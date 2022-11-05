#include <iostream>
#include <windows.h>

using namespace std;

const static string daysOfWeek[] = {
    "Понедельник",
    "Вторник",
    "Среда",
    "Четверг",
    "Пятница",
    "Суббота",
    "Воскресенье"
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int dayInYear;
    int startDayOfWeekIn2022 = 5;
    cout << "Введите число от 1 до 365: " << endl;
    cin >> dayInYear;

    if (dayInYear < 1 && dayInYear > 365) {
        cout << "Введено неверное число";
    } else {
        dayInYear--;
        int index = (dayInYear % 7 + startDayOfWeekIn2022) % 7;
        cout << "День недели - " << daysOfWeek[index];
    }

    return 0;
}

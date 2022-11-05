#include <iostream>
#include <windows.h>

using namespace std;

const static string daysOfWeek[] = {
    "�����������",
    "�������",
    "�����",
    "�������",
    "�������",
    "�������",
    "�����������"
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int dayInYear;
    int startDayOfWeekIn2022 = 5;
    cout << "������� ����� �� 1 �� 365: " << endl;
    cin >> dayInYear;

    if (dayInYear < 1 && dayInYear > 365) {
        cout << "������� �������� �����";
    } else {
        dayInYear--;
        int index = (dayInYear % 7 + startDayOfWeekIn2022) % 7;
        cout << "���� ������ - " << daysOfWeek[index];
    }

    return 0;
}

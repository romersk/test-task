#include <iostream>
#include <windows.h>
#include <map>

using namespace std;

map <string, string> vocabl = {{"������", "Apple"},
                             {"����", "Table"},
                             {"����", "Chair"}};

string translateToRussian(string word, map <string, string> :: iterator &itToFindValue) {
    itToFindValue = vocabl.begin();

    for (int i = 0; itToFindValue != vocabl.end(); itToFindValue++, i++)
    {
        if (itToFindValue->second == word)
        {
            return itToFindValue->first;
        }
    }

    return "������ ����� � ������� ���";
}

string translateToEnglish(string word, map <string, string> :: iterator &itToFindKey) {
    itToFindKey = vocabl.find(word);

    if (itToFindKey == vocabl.end())
    {
        return "������ ����� � ������� ���";
    } else
    {
        return itToFindKey->second;
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    map <string, string> :: iterator itToFindKey, itToFindValue;

    int exit = 1;
    while (exit)
    {
        cout << endl << "1. ��������� ���������� �����" << endl;
        cout << "2. ��������� ������� �����" << endl;
        cout << "0 - �����" << endl;
        cin >> exit;

        switch(exit)
        {
            case 0:
            {
                break;
            }
            case 1:
            {
                cout << "������� ����� ��� ��������:" << endl;
                string word;
                cin >> word;

                cout << translateToRussian(word, itToFindValue) << endl;
                break;
            }
            case 2:
            {
                cout << "������� ����� ��� ��������:" << endl;
                string word;
                cin >> word;

                cout << translateToEnglish(word, itToFindKey) << endl;
                break;
            }
            default:
            {
                cout << "�������� ��������" << endl;
            }
        }
    }
    return 0;
}

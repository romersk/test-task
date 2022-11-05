#include <iostream>
#include <windows.h>
#include <map>

using namespace std;

map <string, string> vocabl = {{"Яблоко", "Apple"},
                             {"Стол", "Table"},
                             {"Стул", "Chair"}};

string translateToRussian(string word, map <string, string> :: iterator &itToFindValue) {
    itToFindValue = vocabl.begin();

    for (int i = 0; itToFindValue != vocabl.end(); itToFindValue++, i++)
    {
        if (itToFindValue->second == word)
        {
            return itToFindValue->first;
        }
    }

    return "Такого слова в словаре нет";
}

string translateToEnglish(string word, map <string, string> :: iterator &itToFindKey) {
    itToFindKey = vocabl.find(word);

    if (itToFindKey == vocabl.end())
    {
        return "Такого слова в словаре нет";
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
        cout << endl << "1. Перевести английское слово" << endl;
        cout << "2. Перевести русское слово" << endl;
        cout << "0 - Выход" << endl;
        cin >> exit;

        switch(exit)
        {
            case 0:
            {
                break;
            }
            case 1:
            {
                cout << "Введите слово для перевода:" << endl;
                string word;
                cin >> word;

                cout << translateToRussian(word, itToFindValue) << endl;
                break;
            }
            case 2:
            {
                cout << "Введите слово для перевода:" << endl;
                string word;
                cin >> word;

                cout << translateToEnglish(word, itToFindKey) << endl;
                break;
            }
            default:
            {
                cout << "Неверное значение" << endl;
            }
        }
    }
    return 0;
}

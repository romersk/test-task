#include <iostream>
#include <windows.h>

using namespace std;

void showProducts(const string* arr, const int size) {
    cout << endl << "������ �������:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << (i+1) << ". " << arr[i] << endl;
    }
    cout << endl;
}

void pushProduct(string *&arr, int &size, string productName) {
    string *tempArray = new string[size + 1];

    for (int i = 0; i < size; i++)
    {
        tempArray[i] = arr[i];
    }

    tempArray[size] = productName;

    size++;
    delete[] arr;

    arr = tempArray;
}

void deleteProduct(string *&arr, int &size, int index) {
    string *tempArray = new string[size - 1];
    index--;

    for (int i = 0; i < index; i++)
    {
        tempArray[i] = arr[i];
    }

    for (int i = index + 1; i < size; i++)
    {
        tempArray[i] = arr[i];
    }

    size--;
    delete[] arr;

    arr = tempArray;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int countOfProducts = 0;
    string *products = new string[countOfProducts];
    int answer = 1;

    while (answer != 0)
    {
        cout << endl << "�������� ����� ���� (0 - ��� ������): " << endl;
        cout << "1. �������� ������."<< endl;
        cout << "2. ������� �������."<< endl;
        cout << "3. ����������� ������."<< endl;

        cin >> answer;

        switch(answer)
        {
            case 1:
            {
                cout << "������� �������� ������:" << endl;
                string nameOfProduct;
                cin >> nameOfProduct;

                pushProduct(products, countOfProducts, nameOfProduct);
                break;
            }
            case 2:
            {
                cout << "������� ������ �������� ��� ��������:" << endl;
                int index;
                cin >> index;

                if (index > countOfProducts)
                {
                    cout << "������ ������� �� ����������" << endl;
                } else
                {
                    deleteProduct(products,countOfProducts,index);
                }

                break;
            }
            case 3:
            {
                showProducts(products, countOfProducts);
                break;
            }
            default:
            {
                cout << "������� �������� ��������" << endl;
                break;
            }
        }
    }

    delete[] products;
    return 0;
}

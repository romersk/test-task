#include <iostream>
#include <windows.h>

using namespace std;


template<class T>
void sort_arr(T* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}

template<class T>
void outputArr(T* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int size = 5;
    int* arr = new int[size];
    arr[0] = 2332;
    arr[1] = 133;
    arr[2] = 202;
    arr[3] = 2000;
    arr[4] = 332;

    cout << "До сортировки" << endl;
    outputArr(arr, size);
    sort_arr(arr, size);
    cout << "После сортировки" << endl;
    outputArr(arr, size);

    return 0;
}

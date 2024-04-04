#include <iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

void main()
{
    setlocale(LC_ALL, "");

    const int n = 10;
    int arr[n];
    //int minRand = 0, maxRand = 7;
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 8; 
    }
    cout << "Случайные числа: " << "\t";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
     int counting[8] = { 0 };
    for (int i = 0; i < n; i++)
    {
        counting[arr[i]]++;
    }
    cout << "Повторяющиеся значения и количество повторений: " << endl;
    for (int i = 0; i < 8; i++)
    {
        if (counting[i] > 1)
        {
            cout << "Значение: " << i << " повторяется: " << counting[i] << " раз" << endl;
        }
    }
}
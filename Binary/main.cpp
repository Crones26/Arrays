#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

void main()
{
    setlocale(LC_ALL, "");

    int decimal;
    cout << "Введите десятичное число: "; cin >> decimal;
    const int n = 8;
    bool bin[n] = {};
    int i = 0;
    while (decimal > 0)
    {
        bin[i] = decimal % 2;
        i++;
        decimal /= 2;
    }
    for (--i; i >= 0; i--)
    {
        cout << bin[i];
    }
    cout << endl;
}
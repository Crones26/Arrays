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
    const int n = 32;
    int bin[n] = {};
    int i = 0;
    while (decimal > 0 && i < n)
    {
        bin[i++] = decimal % 2;
        decimal /= 2;
    }
    int whitespace = 0; 
    for (--i; i >= 0; i--)
    {
        cout << bin[i];
        whitespace++;
        if (whitespace == 4) 
        { 
            cout << " ";
            whitespace = 0; 
        }
    }
    cout << endl;
}
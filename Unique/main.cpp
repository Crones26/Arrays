#include <iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define UNIQUE_1
#define UNIQUE_2
#define tab "\t"

void main()
{
    setlocale(LC_ALL, "");

#ifdef UNIQUE_1
    const int n = 10; 
    int arr[n];
    int minRand = 20, maxRand = 30; 
    for (int i = 0; i < n;)
    {
        arr[i] = rand() % (maxRand - minRand) + minRand;
        bool Unique = true;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == arr[i])
            {
                Unique = false;
                break;
            }
        }
        // Если число уникально, добавляем его в массив
        if (Unique)
        {
            i++;
        }
    }
    // Вывод массива на экран
    cout << "Уникальные числа:" << tab;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << tab;
    }
    cout << endl;
#endif // UNIQUE_1

#ifdef UNIQUE_2
    const int n = 10;
    int arr[n];
    int minRand, maxRand;
    while (true)
    {
        cout << "Введите минимальное случайное число: "; cin >> minRand;
        cout << "Введите максимальное случайное число: "; cin >> maxRand;
        if (minRand < maxRand)
        {
            break;
        }
        else if (minRand == maxRand)
        {
            cout << "Ошибка: Минимальное и максимальное значения не должны быть одинаковыми.\n";
        }
        else
        {
            cout << "Ошибка: Минимальное значение должно быть меньше максимального значения.\n";
        }
    }
    for (int i = 0; i < n;)
    {
        arr[i] = rand() % (maxRand - minRand) + minRand;
        // Проверка на уникальность числа
        bool Unique = true;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == arr[i])
            {
                Unique = false;
                break;
            }
        }
        // Если число уникально, добавляем его в массив
        if (Unique)
        {
            i++;
        }
    }
    // Сортировка от меньшего к большему
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int buffer = arr[i];
                arr[i] = arr[j];
                arr[j] = buffer;
            }
        }
    }
    // Вывод массива на экран
    cout << "Уникальные числа:" << tab;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << tab;
    }
    cout << endl;
#endif // UNIQUE_2

}
#include <iostream>
using namespace std;

using std::cout;
using std::cin;
using std::endl;

//#define SEARCH_1
#define SEARCH_2

void main()
{
    setlocale(LC_ALL, "");

#ifdef SEARCH_1
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
#endif // SEARCH_1

#ifdef SEARCH_2

    const int n = 10;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 3;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        bool met_before = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                met_before = true;
                break;          // прерывает текущую итерацию и все последующие
           }
        }
        if (met_before)continue;// прерывает текущую итерацию и переходть к следующей

        int counter = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j]) counter++;
        }
        if (counter) printf("Значение %i повторяется %i раз\n", arr[i], counter);
        //if (counter)cout << " Значения " << arr[i] << " Повторяется " << counter << " Раз" << endl;
    }
#endif // SEARCH_2

}
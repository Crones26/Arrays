#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	//cout() << int() << endl; 
	//int() значение по умолчанию для типа 'int'
	//double() значение по умолчанию для типа 'double' 
	/*const int n = 10;
	int arr[n] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 };*/
	// Вывод исходного массива на экран:
	//for (int i = 0; i < n; i++)
	//{
	//	cout << arr[i] << tab;
	//}
	//cout << endl;
	//// Сдвиг массива:
	//int shift;
	//cout << "Укажите на сколько сдвинуть массив: "; cin >> shift;
	//for (int i = 0; i < shift; i++)
	//{
	//	int buf = arr[0];
	//	for (int i = 0; i < n - 1; i++)
	//	{
	//		arr[i] = arr[i + 1];
	//	}
	//	arr[n - 1] = buf;
	//// Вывод сдвинутого массива на экран:
	//	for (int i = 0; i < n; i++)
	//	{
	//		cout << arr[i] << tab;
	//	}
	//	cout << endl;
	//}

	const int n = 10;
	int arr[n] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 };
	// Вывод исходного массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	// Сдвиг массива:
	int shift;
	cout << "Ведите количество сдвигов: "; cin >> shift;
	for (int i = 0; i < shift; i++)
	{
		int buf = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buf;
	// Вывод сдвинутого массива на экран:
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;
	}

}
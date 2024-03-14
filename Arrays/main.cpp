#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE];
	/*cout << int() << endl;*/
	//arr[2] = 2048;			// Обращение к элементу массива на запись
	//cout << arr[2] << endl;   // обращение к элементу массива на чтение

	cout << "Введите значение элементов: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout << "\nЗначение в прямом порядке: " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << " \nЗначение в обратном порядке: " << endl;
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "\nСумма элементов массива: " << sum << endl;
	cout << "\nСреднее арифметическое элементов массива: " << sum / SIZE << endl;
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "\nМинимальное значение элемента массива : " << min << endl;
	cout << "\nМаксимальное значение элемента массива: " << max << endl;
}
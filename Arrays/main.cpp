#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

void main()
{
	setlocale(LC_ALL, "");
	//const int SIZE = 5;
	//int arr[SIZE];

	//arr[2] = 2048;			// ��������� � �������� ������� �� ������
	//cout << arr[2] << endl;   // ��������� � �������� ������� �� ������

	//for (int i = 0; i < SIZE; i++)
	//{
	//	cout << arr[i] << "\t";
	//}
	//cout << endl;

    int SIZE;
    int sum = 0;
    cout << "������� ������ �������: ";
    cin >> SIZE;
    int arr[] = { 1, 2, 3 };
    int min = arr[0];
    int max = arr[0];
    cout << "������� �������� �������:\n";
    for (int i = 0; i < SIZE; i++)
    {
        cin >> arr[i];
    }
    cout << "�������� �������:\n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "\n�������� ���.�������:\n";
    for (int i = SIZE - 1; i >= 0; --i)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++)
    {
        sum += arr[i];
    }
    cout << "\n ����� ��������� �������:\n" << sum << endl;
    cout << "\n �������-�������������� ��������� �������:\n";
    cout << (double)sum / SIZE << "\t";
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] < min)min = arr[i];
        if (arr[i] > max)max = arr[i];
    }
    cout << "\n ������� �������:\n";
    cout << min << "\t";
    cout << "\n �������� �������:\n";
    cout << max << "\t";
    cout << endl;
}
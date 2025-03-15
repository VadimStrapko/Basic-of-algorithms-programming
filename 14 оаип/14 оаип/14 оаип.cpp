#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <conio.h>
#define N 2
using namespace std;

int var11_1() {

	setlocale(LC_CTYPE, "ru");
	const int n = 6;
	int arr[n][n];
	int row = 0, k = 0;

	cout << "Начальная матрица:" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 41 - 20;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
		cout << endl;
	}
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i][i] > max)
		{
			max = arr[i][i];
			row = i;
		}
	}
	cout << "Самый большой элемент на диагонали:" << endl;
	cout << max << endl;
	cout << "Строка, в которой находится наибольший элемент главной диагонали: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[row][i] << "  ";
	}


	return 0;
}

int var11_2() {

	const int n = 5;
	int arr[n][n];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 10 - 6;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
		cout << endl;
	}
	int k = 0;

	for (int i = 0; i < n; i++)
	{
		int j = 0;
		cout << arr[i][j] << endl;
		k += arr[i][j];
	}
	cout << k / 5 << " - среднее арифметическое столбца." << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] - k / 5 << " - полученное значения." << endl;
		}
	}


	return 0;
}





int main() {


	setlocale(LC_CTYPE, "ru");
	cout << "Задание 1(1), Задание 2(2)" << endl;
	int var; cin >> var;
	switch (var)
	{
	case 1:
	{
		var11_1();
		break;
	}
	case 2:
	{
		var11_2();
		break;
	}
	}
}
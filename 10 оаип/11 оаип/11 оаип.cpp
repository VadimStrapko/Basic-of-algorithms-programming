//1з
/*
#include <iostream>
#include <Windows.h>
using namespace std;
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int N = 100;
	int i, sz, A[N], n = 0, j = 0;
	cout << "Введите размер массива ";
	cin >> sz;
	cout << "Массив A:" << endl;
	for (i = 0; i < sz; i++)
	{
		A[i] = rand() % 99;
		cout << A[i] << " ";
	}
	A[sz] = 0;
	A[sz + 1] = 0;
	A[sz + 2] = 0;
	cout << endl << "Изменённый массив:" << endl;
	for (i = 0; i < sz + 3; i++)
	{
		if (n < 5)
		{
			if (A[i] % 2 == 0)
			{
				A[i] = A[i];
			}
			else
			{
				A[i] = 101;
				n++;
			}
		}
	}
	for (i = 0; i < sz + 3; i++)
	{
		if (A[i] == 101) {
			for (j = i; j < sz; j++) {
				A[j] = A[j + 1];
			}
			i = -1;
		}
	}
	for (i = 0; i < sz - 2; i++) {
		cout << A[i] << " ";
	}
}*/

//2з

#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
    setlocale(LC_CTYPE, "Russian");
    const int n = 15;
    int m[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Введите символ: ";
        cin >> m[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (m[i] == m[j])
            {
                m[i] = 0;
            }
        }

    }

    for (int i = 0; i < n; i++)
        cout << m[i];

    _getch();
}

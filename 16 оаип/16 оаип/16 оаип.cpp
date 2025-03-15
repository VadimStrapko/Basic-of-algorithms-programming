#include <iostream>
#include<Windows.h>
#include<vector>
#include<string.h>
using namespace std;





int var(int n, int m, int** matr)
{


    for (int i = 0; i < n; i++)
        matr[i] = new int[m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matr[i][j] = rand() % 100 - 10;
            cout << matr[i][j] << "\t";
        }
        cout << endl;
        cout << endl;
    }
    int max = 0, p, o;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matr[i][j] > max)
            {
                max = matr[i][j];
                p = i;
                o = j;
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (j != i && i >= j)
            {
                sum += matr[i][j];
            }
        }

    }
    cout << sum << " - сумма" << endl;
    cout << p << " - строка " << o << " - столбец" << endl;
    return max;
}


void print(char* str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'c')
        {
            int j = i;
            while (str[j] != '\0')
            {
                j++;
            }
            while (j > i)
            {
                str[j + 1] = str[j];
                j--;
            }
            str[i + 1] = '*';
        }
        i++;
    }
    cout << "Новая строка: " << str << endl;

}


int main()
{
    setlocale(LC_CTYPE, "ru");
    int variant;
    cout << "Выберете задание: 1 или 2????" << endl;
    cin >> variant;


    switch (variant)

    {
    case 1:
    {
        int n, m;
        cout << "n = " << endl;
        cin >> n;

        cout << "m = " << endl;
        cin >> m;

        int** matr;
        matr = new int* [n];
        cout << var(n, m, matr) << " - максимальный элемент.";
        break;
    }
    case 2:
    {
        int i = 0;
        setlocale(LC_CTYPE, "rus");
        cout << "Введите строку: ";
        char str[100];
        cin.getline(str, 100);
        print(str);
    }
    }
}


//11 вар
//1з
/*
#include<iostream>
#include<locale>
#include <string.h>

using namespace std;
void main() {
    setlocale(LC_CTYPE, "Russian");
    char c[100];
    cout << "Введите предложение: "; 
    gets_s(c);
    for (int i = 1; c[i] != 0; i++)
    {
        if (c[i] == ' ')
        {
            cout << c[i - 1] << endl;
        }
    }
    cout << endl;
    system("pause");
}
*/

//2з
/*
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

void main()
{
    setlocale(LC_CTYPE, "ru");
    char s[50];
    int a[50], b[50];
    int i, j, k, z, d, max;
    gets_s(s);
    d = strlen(s);
    s[d] = ' ';
    k = 0;
    for (i = 0; i < d; i++)
        if ((s[i] != ' ') && ((i == 0) || (s[i - 1] == ' ')))
        {
            j = i;
            b[k] = i;
            while (s[j] != ' ')
            {
                a[k]++; j++;
           }
            k++;
        }
    max = a[0];
    for (i = 1; i < k; i++) if (a[i] > max)
    {
        max = a[i]; z = i;
    }
    cout << "Номер слова:  " << z + 1 << ' ';
    cout << "Номер позиции:  " << b[z] << ' ';
}
*/
          
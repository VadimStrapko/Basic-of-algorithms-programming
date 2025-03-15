#include<iostream>
using namespace std;

//Вариант 11(1)
/*
int main()
{

    setlocale(LC_CTYPE, "ru");

    int N = 0;
    cout << "Введите количество элементов массива:" << endl;
    cin>>N;
    
    int* arr = new int[N];
    int k;


    cout << "Введите массив: " << endl;
   for (int i = 0; i < N; i++) 
    {
        cout << i << "-й элемент массива: ";
        cin >> arr[i];
    }
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == 0)
        {
            k = i;
            break;
        }
    }
    cout << k<<"-й элемент равен нулю.";
    return 0;
}*/
//Вариант 11(2)
/*
int main() {

	setlocale(LC_CTYPE, "ru");
	int arr[4][4];

	cout << "Введите элементы матрицы:" << endl;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << "Элемент " << "[" << i << "]" << "[" << j << "]:";
			cin >> arr[i][j];
		}

	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
		cout << endl;
	}
	for (int row = 0, column = 0; row < 4, column < 4; row++, column++)
	{
		int count = 4;
		for (int i = 0, j = 0; i < 4, j < 4; i++, j++)
		{
			if (arr[row][j] != arr[i][column])
			{
				count--;
			}
			else
			{
				continue;
			}

		}
		if (count == 4)
		{
			cout << row << " - номер равных строки и столбца." << endl;
		}
	}
}*/
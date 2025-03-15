//Вариант 11
//1з
/*
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{   
    setlocale(LC_CTYPE, "ru");
    int n, * mas;
    cout << "Кол-во членов массива: " << endl;
    cin >> n;
    mas = new int[n];
    for (int i = 0; i < n; ++i)
       cin >> mas[i];
    sort(mas, mas + n);
    for (int i = 0; i < n; ++i)
        if (mas[i] != i + 1)
        {
            cout << i + 1 << endl;
            break;
        }
    return 0;
}*/
//2з
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "ru");
    int size1, size2, z, sum1 = 0, sum2 = 0;
    int* arr1, *arr2;
    cout << endl << "Введите z: ";
    cin >> z;
    cout << "Введите кол-во элементов первого массива" << endl;
    cin >> size1;
    cout << "Введите кол-во элементов второго массива" << endl;
    cin >> size2;
    arr1 = new int[size1];
    arr2 = new int[size2];
    for (int i = 0; i < size1; ++i)
    {
        arr1[i] = rand()%20;
        if (arr1[i] < z)
        {
            sum1++;
        }
    }
    for (int i = 0; i < size2; ++i)
    {
        arr2[i] = rand() % 20;
        if (arr2[i] < z)
        {
            sum2++;
        }
    }

    cout << "Всего чисел, меньше z: "<<sum1+sum2<<endl;
    if (sum1 >= sum2)
    {
        for (int i = 0; i < size1; ++i)
        {
            cout<<arr1[i]<<" ";
            
        }
        cout << endl;
        for (int i = 0; i < size2; ++i)
        {
            cout << arr2[i] << " ";

        }

    }
    else
    {
        for (int i = 0; i < size2; ++i)
        {
            cout << arr2[i] << " ";

        }
        cout << endl;
        for (int i = 0; i < size1; ++i)
        {
            cout << arr1[i] << " ";

        }
        
    }
    
    


    return 0;
}

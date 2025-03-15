/*#include <iostream>
#include <cmath>
using namespace std;

//Вариант 11
    double f(double x)
    {
        return sin(x) + 1;
    }


    double Trapecii(double a, double b, int n)
    {
        double h = (a - b) / n;
        double sum = f(a) + f(b);
        for (int i = 1; i <= n - 1; i++)
        {
            sum += 2 * f(a + i * h);
        }
        sum *= h / 2;
        return sum;
    }


    double Paraboli(double a, double b, int n)
    {
        double h = (a - b) / n;
        double sum = f(a) + f(b);
        int k;
        for (int i = 1; i <= n - 1; i++)
        {
            k = 2 + 2 * (i % 2);
            sum += k * f(a + i * h);
        }
        sum *= h / 3;
        return sum;
    }


    int main()
    {
        setlocale(LC_CTYPE, "ru");
        double a , b ;
        int n ;
        a = 1;
        b = 3;
        n = 200;
        cout << "Трапеции " << Trapecii(a, b, n) << endl;
        cout << "Параболы " << Paraboli(a, b, n) << endl;


        return(0);
    }*/
    #include <iostream>
    #include <cmath>
    using namespace std;

    //Вариант 11 дихотомия

    double f11(double x)
    {
        return 2 * x + x * x * x - 7;
    }

    int main()
    {
        setlocale(LC_CTYPE, "ru");
        double x;
        double a = 1, b = 3;
        double e = 0.0001;

        do
        {

            x = (a + b) / 2.0;
            (f11(x) * f11(a) <= 0) ?
                b = x :
                a = x;
        } while (abs(a - b) > 2 * e);

        cout << " x = " << x << endl;

        return 0;
    }



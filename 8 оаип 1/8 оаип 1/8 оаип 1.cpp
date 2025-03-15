/* #include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");

	//Вариант 11
	double a = 5.45, n = 5;
	double y[]{ 2.1, 7.7, -4, 5, 9 };
	for (int i = 0; i < 5; i++)
	{
		double q = 4;
		for (int j = i; j <= n; j++)
		{
			double buff = 1;
			buff = buff * j * j;
			q = q * buff;

		}
		q *= y[i];
		q = q / (i * i + 1);

		int s = 2 * a + q * sin(a);
		cout << "q = " << q << " " << "s = " << s << endl;

	}

} */
//Вариант 8
/*#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n1 = 6, n2 = 5;
	double c = 0.7, f = 0, x = 0, d;
	float a[6] = { 3, 12, -4, 6.2, 3, 0.4 }; float  b[5] = { 19, 1, -24,  4.2, 8 };

	for (int j = 0; j < n1; j++)
	{
		f += a[j];
	}
	for (int i = 0; i < n2; i++)
	{
		x += (b[i] - 1) * (b[i] - 1);
	}
	d = f - c * x;
	cout << "d=" << d << endl;
}*/
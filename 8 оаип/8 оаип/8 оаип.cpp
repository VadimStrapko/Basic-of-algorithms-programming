#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");


	//Вариант 11 1з
	/*double a = 5.45, n = 5;
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
	}*/
	//2з
	double y[5] = { 1.3, 1, 0.9, 0.5,8 }, k, sum;
	for (int i = 0; i < 5; i++)
	{
		sum += y[i];
		if (y[i] < y[i - 1])
		{
			k = y[i];

		}

	}
	sum += k;
}


	
	/*
	//вариант 13
#include <iostream>
	using namespace std;

	int main()
	{
		double y[5] = { 5, 7, 0.9, 0.5, 2 };
		double d = y[0];
		double q;
		for (int i = 0; i < size(y); i++)
		{
			if (d > y[i]) {
				d = y[i];
			}
		}
		cout << "d = " << d << endl;
		for (int i = 1; i < 5; i++)
		{
			q = 4 * y[i] + d;
			cout << "q = " << q << endl;
		}
		cout << endl;

		double x[5] = { 8, -2.3, -8.4, 5.1,9 };
		double t = 0.5;
		double y2;
		while (t <= 3)
		{
			if (t > 2)
			{
				for (int i = 1; i < 5; i++)
				{
					y2 = pow(x[i], 2) + t;
				}
			}
			else
			{
				y2 = cos(pow(t, 2));
			}
			cout << "y=" << y2 << endl;
			t += 0.5;
		}

	}
}

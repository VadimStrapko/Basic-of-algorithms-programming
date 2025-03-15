#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");



	//2з
	double a = 5.45, n = 5;
	double y[]{ 1.3, 1, 0.9, 0.5, 8 };
	for (int i = 0; i < 5; i++)
	{
		double q = 1;
		for (int j = i; j <= n; j++)
		{
			double buff = 1;
			buff = buff * j * j;
			q = q * buff;

		}
		q *= y[i];
		q = (q + min(y));

		int s = 2 * a + q * sin(a);
		cout << "q = " << q << " " << "s = " << s << endl;
	}
}

#include <iostream>
#include <bitset>
#include <ctime>
using namespace std;


int main()
{

	setlocale(LC_CTYPE, "Russian");


	// Вариант 11 номер 1
	// Используя битовые операции проверить, кратно ли шестнадцати число А.  16 8 4 2 1
	/*unsigned int A;
	cout << "Введите число : "; cin >> A;
	int count = 0;

	for (int i = 0; i < 4; i++)
	{
		int bit = (A >> i) & 1;
		if (bit == 1) count++;
	}

	//Число кратно 16 если его 4 бит равен 1
	if (count == 0) cout << "Число кратно 16" << endl;
	else cout << "Число не кратно 16" << endl;
	}
	*/

	// Вариант 11 номер 2
	//Установить в 0 в числе А n битов влево от позиции p, заменить ими m битов числа В, начиная с позиции q
	/* unsigned int n, p;
	int B = 65535;
	auto number = 65535;
	cout << "Сколько битов в числе А установить в 0? "; cin >> n;
	cout << "С какой позиции установить биты в 0? "; cin >> p;
	cout << "до    : " << bitset<16>(number) << endl;
	for (int i = 0; i < n; i++)
	{
		unsigned int pos{ p  }; // позиция бита

		bool new_bit{ 0 }; // 0 или 1 (что задать в бит на pos)

		number = (number & ~(1UL << pos)) | (new_bit << pos);

		p++;
	}
	cout << "после : " << bitset<16>(number) << endl;

	cout << "число B до    : " << bitset<16>(B) << endl;
	B &= number; // Замена битов
	cout << "число B после : " << bitset<16>(B) << endl;
}
*/
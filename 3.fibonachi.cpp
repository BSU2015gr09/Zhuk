﻿#include <iostream>//отношение соседних чисел Фибоначчи
#include <iomanip>
#include <clocale>
using std::cout;
using std::cin;
using std::endl;
int main()
{
	setlocale(LC_ALL, "Russian");
	float mas[40], a, b;
	int n;
	cout << "                                  Отношение                             " << endl;
	cout << "         Последующее к предыдущему    |    Предыдущее к последующему    " << endl;
	cout << "                     1                                1                 " << endl;
	mas[0] = 1;
	mas[1] = 1;
	for (n = 2; n < 40; n++)
	{
		mas[n] = mas[n - 1] + mas[n - 2];
		a = mas[n] / mas[n - 1];
		b = mas[n - 1] / mas[n];
		cout << std::setw(25) << std::setprecision(7) << a;
		cout << std::setw(14) << "|";
		cout << std::setw(10) << std::fixed << std::setprecision(7) << " " << b << endl;
	}
	return 0;
}
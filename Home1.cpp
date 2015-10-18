#include <iostream> //Программа находит сумму цифр числа до первого встреченного 0.
using std::cout;
using std::cin;
int main()
{
	setlocale(LC_ALL, "Russian");
	unsigned int a = 0, b = 1, c = 0;
	cout << "Введите число "; cin >> a;
	while (b != 0)
	{
		b = a % 10;
		a = a / 10;
		c = c + b;
	}
	cout << c << "\n";
	return 0;
}
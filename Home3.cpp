#include <iostream>//  Считает сумму цифр стоящих на чётной позиции, затем на нечётной и потом проверяет делимость числа на 11.
using std::cout;
using std::cin;
int main()
{
	setlocale(LC_ALL, "Russian");
	int i = 0, a = 0, z = 0, c = 0, k = 0, b = 0;
	cin >> a;
	z = a;
	k = a;
	while (a != 0)
	{
		a = a / 10;
		i++;
	}
	while (z != 0)
	{
		b = b + z % 10;
		z = z / 100;
	}
	while (k != 0)
	{
		k = k / 10;
		c = c + k % 10;
		k = k / 10;
	}
	if (b == c || c == b + 11 || b == c + 11)
	{
		cout << "Число делится на 11" << "\n";
	}
	else
	{
		cout << "Число не делится на 11" << "\n";
	}
	return 0;
}
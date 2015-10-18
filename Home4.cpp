#include <iostream>  //Программа вычисляет значение примера.
using std::cout;
using std::cin;
int main()
{
	setlocale(LC_ALL, "Russian");
	int c = 1, i = 1, n = 0, x = 0;
	long float k = 1, e = 0;
	cout << "Введите x ";
	cin >> x;
	while (k > 0.00001)
	{
		c = c*i;
		k = pow(x, n) / c;
		e = e + k;
		n++;
		i++;
	}
	cout << "Сумма=  " << e << "\n";
	return 0;
}
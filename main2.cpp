#include <iostream>  //Программа  выводит наибольшую цифру числа и её позицию.
#include <clocale>
#include <iomanip>
#include <cmath>
using std::cin;
using std::cout;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n1 = 1, n2 = 1, a = 0, b = 0, num = 0;
	cin >> num;
	a = num % 10;
	while (num != 0)
	{
		num = num / 10;
		b = num % 10;
		n2++;//шикарное имя для переменной, хранящей позицию цифры!!!
		if (a < b)
		{
			a = b;
			n1 = n2; //еще более шикарное имя для переменной, хранящей позицию цифры!!!
		}
	}
	cout << "Наибольшая цифра числа = " << a << " и её позиция с конца:  " << n1<<"\n";
	return 0;
}

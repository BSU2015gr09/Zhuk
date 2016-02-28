#include <iostream>  //Программа  выводит наибольшую цифру числа и её позицию.
#include <clocale>
#include <iomanip>
#include <cmath>
using std::cin;
using std::cout;
int main()
{
	setlocale(LC_ALL, "Russian");
	int i = 1, k = 1, a = 0, b = 0, num = 0;
	cin >> num;
	a = num % 10;
	while (num != 0)
	{
		num = num / 10;
		b = num % 10;
		k++;
		if (a < b)
		{
			a = b;
			i = k;
		}
	}
	cout << "Наибольшая цифра числа = " << a << " и её позиция с конца:  " << n1<<"\n";
	return 0; 
}

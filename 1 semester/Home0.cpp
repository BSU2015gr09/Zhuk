#include <iostream>  //Программа переворачивает число.
using std::cout;
using std::cin;
int main()
{
	setlocale(LC_ALL, "Russian");
	int i = 0, a = 1, z = 1, k=1;
	cin >> z;
	a = z;
	k = z;
	while (a != 0)
	{
		a = a / 10;
		i++;
	}
	while (i != 0)
	{
		k = z % 10;
		z = z / 10;
		i = i - 1;
		cout << k;
	}
	cout << "\n";
	return 0;
}
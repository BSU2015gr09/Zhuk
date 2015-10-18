#include <iostream>//Считает сумму введённых чисел до первого введённого отрицательного.
using std::cin;
using std::cout;
int main()
{
	setlocale(LC_ALL, "Russian");
	int S = 0, a = 0;
	cout << "Введите число  ";
	cin>>a;
	while (a >= 0)
	{
		S = S + a;
		cout << "Введите число  ";
		cout << "Сумма положительных чисел равна  ";
		cin>> a;
	}
	cout << S << "\n";
	return 0;
}
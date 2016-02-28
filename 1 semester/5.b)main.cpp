//Задача под номером b)
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void initialization(int mas[], int N)
{
	cout << "Заполнение массива который содержит " << N << " элементов" << endl;
	for (int i = 0; i < N; i++)
	{
		cin >> mas[i];
	}
}

void vvod_poisk(int mas[], int N)
{
	int a = 0;
	cout << "Введите число, индекс которго хотите узнать  ";
	cin >> a;
	for (int i = 0; i < N; i++)
	{
		if (mas[i] == a)
		{
			cout << "Индекс введённого вами числа равен:  " << i << endl;
			break;
		}
		else if (i == N - 1) cout << "Такого числа нет" << endl;
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int const N = 5;
	int mas[N];
	initialization(mas, N);
	vvod_poisk(mas, N);
	return 0;
}
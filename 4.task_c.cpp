#include <iostream>//Задание c 
using std::cin;
using std::cout;
using std::endl;
int xorshift(int x)
{
	int tmp, a = 13, b = 15, c = 5;
	tmp = x ^ (x << a);
	tmp = tmp ^ (tmp >> b);
	x = tmp ^ (tmp << c);
	return x;
}
void initialization(int mas[], int N)//инициализация чисел и исходный массив
{
	int i = 0;
	mas[0] = mas[i] % 51;
	for (i = 0; i<N; i++)
	{
		mas[i] = xorshift(mas[i - 1]);
	}
	cout << "Массив до замен:" << endl;
	for (i = 0; i<N; i++)
	{
		mas[i] = mas[i] % 51;
		cout << mas[i] << "  ";
	}
}
void max_min(int mas[], int N, int &max, int &min)//Максимум и минимум
{
	for (int i = 0; i<N; i++)
	{
		if (mas[i] > max)
		{
			max = mas[i];
		}
	}
	min = max;
	for (int i = 0; i<N; i++)
	{
		if (mas[i] < min)
		{
			min = mas[i];
		}
	}
	//cout <<endl<< "Максимум равен:  " << max << endl;
	//cout << "Минимум  равен:  " << min << endl;
}
void zamena(int mas[], int N)//делает замену
{
	int max, min, n = 0;
	max_min(mas, N, max, min);
	for (n = 0; n<N; n++)
	{
		if (mas[n] == 0)
		{
			mas[n + 1] = 999;
		}
	}
	for (n = 0; n<N; n++)
	{
		if (mas[n] == min)
		{
			mas[n + 1] = 111;
		}
	}
	for (n = 0; n<N; n++)
	{
		if (mas[n] == max)
		{
			mas[n - 1] = 222;
		}
	}
	cout << endl << "Массив после замен:" << endl;
	for (int i = 0; i<N; i++)
	{
		cout << mas[i] << "  ";//массив с изменениями
	}
}
int main()
{
	const int N = 100;
	setlocale(LC_ALL, "Russian");
	int mas[N];
	initialization(mas, N);
	zamena(mas, N);
	return 0;
}
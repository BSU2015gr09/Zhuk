/*Объявить массив вещественных чисел размера N (число N объявить как константу равную нескольким десятков тысяч).
Проинициализировать значения элементов массива случайными числами из промежутка от -50 до 50.*/
#include <iostream>
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
void initialization(int mas[], int N)//инициализация чисел
{
	int i = 0;
	mas[0] = mas[i] % 51;
	for ( i = 0; i<N; i++)
	{
		mas[i] = xorshift(mas[i - 1]);
	}
	for (i = 0; i<N; i++)
	{
		mas[i] = mas[i] % 51;
		//cout << mas[i] << endl; //вывод в обычном порядке
	}
}
void reverse_order(int mas[], int N)//вывод в обратном порядке
{
	cout << "Вывод чисел в обратном порядке" << endl;
	for (int i = N-1; i >= 0; i--)
	{
		cout << mas[i] << "  ";
	}
}
void parity(int mas[], int N)//Вывести значения сначала элементов с нечетными коэффициентами (1-й, 3-й, 5-й,...) а затем - с четными.
{
	cout <<endl<< "Числа стоящие на нечётной позицие:" << endl;
	for (int i = 0; i < N; i += 2)
	{
		cout << mas[i] << "  ";
	}
	cout <<endl<< "Числа стоящие на чётной позицие:" << endl;
	for (int i = 1; i < N; i += 2)
	{
		cout << mas[i] << "  ";
	}
}
void positive_negative(int mas[], int N)//Кол-во положительных и количество отрицательных и равных нулю элементов в массиве
{
	int pol = 0, neg = 0, zero=0;
	for (int i = 0; i < N; i++)
	{
		if (mas[i]>0)
		{
			pol++;
		}
		else if (mas[i] < 0)
		{
			neg++;
		}
		else
		{
			zero++;
		}
	}
	cout << endl << "Количество положительных чисел:  " << pol << endl;
	cout << "Количество отрицательных чисел:  " << neg << endl;
	cout << "Количество чисел равных нулю:  " << zero << endl;
}
void max_min(int mas[], int N)//Максимум и минимум
{
	int max = mas[0], min = mas[0];
	for (int i = 0; i<N; i++)
	{
		if (mas[i] > max)
		{
			max = mas[i];
		}
		if (mas[i] < min)
		{
			min = mas[i];
		}
	}
	cout << "Максимум равен:  " << max << endl;
	cout << "Минимум  равен:  " << min << endl;
}
void quantity_max_min(int mas[], int N)//Количество максимумов и минимумов
{
	int max = mas[0], min = mas[0];
	int k=0, l=0;
	for (int i = 0; i<N; i++)
	{
		if (mas[i] > max)
		{
			max = mas[i];
		}
		if (mas[i] == max)
		{
			k++;
		}
		if (mas[i] < min)
		{
			min = mas[i];
		}
		if (mas[i] == min)
		{
			l++;
		}
	}
	cout << "Количество максимальных значений:  " << k << endl;
	cout << "Количество минимальных значений:   " << l << endl;
}
void reconstruction(int mas[], int N, int masb[])//"Перестройка" в массив b
{
	int k = 0, l = N-1;
	for (int i = 0; i < N; i++)
	if (mas[i] < 0)
	{
		masb[k] = mas[i];
		k++;
	}
	else
	{
		masb[l] = mas[i];
		l--;
	}
}
void reconstruction2(int mas[], int N)//"Перестройка" начального массива
{
	int k = N;
	for (int i = 0; i<N; i++)
	{
		if (mas[i]<0)
		{
			for (k = N; k>i; k--)
			{
				if (mas[k] >= 0)
				{
					mas[k] = mas[i];
				}
			}
		}
	}
}
int main()
{
	const int N = 20000;
	setlocale(LC_ALL, "Russian");
	int mas[N];
	initialization(mas, N);
	reverse_order(mas, N);
	parity(mas, N);
	positive_negative(mas, N);
	max_min(mas, N);
	quantity_max_min(mas, N);
	int const B = N;
	int masb[B];
	reconstruction(mas, N, masb);
	reconstruction2(mas, N);
	return 0;
}
//Задача номер a)двумерные массивы
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int const N = 5;

void initialization(int(&mas)[N][N])//инициализация чисел
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j<N; j++)
		{
			mas[i][j] = rand() % 20 - 9;
		}
	}
}

void print(int(&mas)[N][N])//вывод массива
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << mas[i][j] << "\t";
		}
		cout << endl << endl;
	}
}

void sum_diag(int(&mas)[N][N])//сумма главной диагонали матрици
{
	int S = 0;
	for (int i = 0; i<N; i++)
	{
		S += mas[i][i];
	}
	cout << "Сумма главной диагонали матрици равна   " << S << endl;
}

void sum_n_treug(int(&mas)[N][N])//сумма нижнего треугольника матрици
{
	int S = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (j < i)
			{ 
				S = S + mas[i][j];
			}
		}
	}
	cout << "Сумма элементов нижнего треугольника равна   " << S << endl;
}

int main()
{

	setlocale(LC_ALL, "Russian");
	int mas[N][N];
	initialization(mas);//инитаализация

	print(mas);//вывод массива

	sum_diag(mas);//сумма главной диагонали матрици

	sum_n_treug(mas);//сумма нижнего треугольника матрици
}
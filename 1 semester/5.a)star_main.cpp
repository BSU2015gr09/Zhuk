//Задача a со звёздочкой
//Определить максимальную длину последовательности равных элементов
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void initialization(int mas[], int N)//инициализация чисел
{
	for (int i = 0; i<N; i++)
	{
		mas[i] = rand() % 50 - 25;
	}
}

void print(int mas[], int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << mas[i] << " ";
	}
}

void length(int mas[], int N)//определить максимальную длину последовательности равных элементов
{
	int l = 0, maxl = 0;
	int  i = 0, a = mas[i];
	for (i = 0; i < N; i++)
	{
		a = mas[i];
		while (mas[i] == a)
		{
			l++;
			i++;
		}
		if (l>maxl)
		{
			maxl = l;
			l = 0;
		}
		else l = 0;
	}
	cout << endl << endl << "Максимальная длина равных последовательных элементов  " << maxl << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int const N = 200;
	int mas[N], max = 0, min = 0;

	initialization(mas, N);//инитиализация массива
	cout << endl << "Первоначальный вывод массива" << endl;
	print(mas, N);
	length(mas, N);//определить максимальную длину последовательности равных элементов
	return 0;
}
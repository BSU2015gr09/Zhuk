/*(на бонус) Дописать программу, которая реализует очередь 5 целых чисел на массиве (функции push, pop).
Внутри main выполнить по очереди несколько действий, демонстрирующих, что ваша очередь работает:*/


#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void print(char mas[], int N, int n)
{
	if (N - n == 0) cout << "Массив пустой (в очереди никого нет)" << endl;
	cout << "Печать массива" << endl;
	for (int i = 0; i < N-n; i++)
	{
		cout << mas[i] << "  ";
	}
	cout << endl;
}

void push(char mas[], int N, int &n)
{
	cout << "Заполнение массива который может содержать максимум "<<N<<" элементов."<<endl;
	cout << "Чтобы закончить ввод не заполняя весь массив введите 'q'."<<endl;
	char element;
	for (int i = 0; i < N; i++)
	{
		cin >> element;
		n--;
		if (element == 'q')
		{
			n++;
			break;
		}
		else mas[i]=element;
	}
}

void pop(char mas[], int N,int &n)
{
	if (N-n==0) cout << "В стеке больше нет элементов" << endl;
	else
	{
		cout << "Элемент, который мы достаём:  " << mas[0] << endl;
		n++;
		for (int i = 0; i < N - n; i++)
		{
			mas[i] = mas[i + 1]; // НЕ, переставлять элементы нельзя!!!! Представь, если их в очереди не 5, а 5миллионов!!!
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int const N = 5;
	int n = N;
	char mas[N];
	push(mas, N, n);
	print(mas, N, n);
	pop(mas, N, n);
	print(mas, N, n);
	pop(mas, N, n);
	print(mas, N, n);
	pop(mas, N, n);
	print(mas, N, n);
	pop(mas, N, n);
	print(mas, N, n);
	pop(mas, N, n);
	print(mas, N, n);
	pop(mas, N, n);
	push(mas, N, n);
	print(mas, N, n);
	pop(mas, N, n);
	print(mas, N, n);
	pop(mas, N, n);
	print(mas, N, n);
	return 0;
}

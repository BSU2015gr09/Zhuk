//Задача под номером d)
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void initialization(int mas[], int N)
{
	cout << "Заполнение массива который содержит " << N << " элементов" << endl;
	int a = 1;
	for (int i = 0; i < N; i++)
	{
		mas[i]=a++;
	}
}

void print(int mas[], int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl << endl;
}

void insert(int mas[], int &N)
{
	int a = 0, i = 0;
	cout << "Введите число, которое хотите поместить в массив  ";
	cin >> a;
	N = N++;
	i = N-1;
	if (a <= 0)
	{
		while (i > 0)
		{
			mas[i] = mas[i - 1];
			i--;
		}
		mas[0] = a;
	}
	else if (a < mas[i-1])
	{
		mas[i] = mas[i - 1];
		i = N - 2;
		while (a < mas[i])
		{
			mas[i] = mas[i - 1];
			i--;
		}
		mas[i] = a;
	}
	else 
		mas[i] = a;
}

void vvod_poisk(int mas[], int N)
{
	int a = 0,i=0;
	cout << "Введите число, которое хотите удалить  ";
	cin >> a;
	for (i = 0; i < N; i++)
	{
		if (mas[i] == a)
		{
			break;
		}
		else if (i == N - 1) cout << "Такого числа нет" << endl;
	}
	if (i != N - 1)
	{
		for (i; i < N; i++)
		{
			mas[i] = mas[i + 1];
		}
		N--;
		print(mas, N);
	}
	else
	{
		cout << "Введённого вами числа нет в массиве"<< endl;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int const A = 100;
	int mas[A],N=0;
	cout << "Введите количество эллементом массива  " << endl;
	cin >> N;
	cout << endl;
	if (N <= 100)
	{
		initialization(mas, N);
		print(mas, N);
		insert(mas, N);
		print(mas, N);
		vvod_poisk(mas, N);
	}
	else
		cout << "Вы ввели число которое превышает реально используемую часть массива" << endl << endl;
	return 0;
}
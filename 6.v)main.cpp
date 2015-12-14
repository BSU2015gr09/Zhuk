/*В программе объявлен массив А элементов типа char (размер массива 20).
Пользователь вводит массив c клавиатуры.
Затем ищем в массиве какая буква встречается чаще всего. Ее выводим на экран. */


#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void initialization(char mas[], int N)
{
	cout << "Заполнение массива который содержит " << N << " элементов" << endl;
	for (int i = 0; i < N; i++)
	{
		cin >> mas[i];
	}
}

void print(char mas[], int N)
{
	cout << endl << "Печеть массива" << endl;
	for (int i = 0; i < N ; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl << endl;
}

void letter(char mas[], int N)
{
	int k = 0, n = 0, b = 0, i = 0;
	char a = mas[i], let = mas[i];
	while (k < N)
	{
		a = mas[i];
		for ( int i = k; i < N; i++)
		{
			if (a == mas[i]) n++;
		}
		i++;
		k++;
		if (b <= n) { b = n; let = a; }
		n = 0;
	}
	cout <<"Элемент который встречается наибольшее количество раз   "<< let <<endl<<endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int const N = 20;
	char mas[N];
	initialization(mas, N);//Инициализация (ручная)
	print(mas, N);//Печать массива
	letter(mas, N);//Функция ищет какая буква встречается в массиве чаще всего и выводит её на экран
	return 0;
}

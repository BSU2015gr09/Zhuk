/*В программе объявлен массив А элементов типа char (размер массива 20).
Пользователь вводит массив c клавиатуры. 
Затем заменяем последнюю встреченную в массиве букву Z на букву F.*/

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
	for (int i = 0; i < N; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl << endl;
}

void poisk_Z(char mas[], char N)
{
	cout << "Поиск и замена последней буквы Z на букву F" << endl;
	for (int i = N - 1; i >= 0; i--)
	{
		if (mas[i] == 'Z')
		{
			mas[i] = 'F';
			break;
		}
		if (i == 0 && mas[0] != 'Z') cout << "В массиве нету буквы Z" << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int const N = 20;
	char mas[N];
	initialization(mas, N);//Инициализация (ручная)
	print(mas, N);//Печать массива
	poisk_Z(mas, N);//Заменяет последнюю встреченную в массиве букву Z на F
	print(mas, N);
	return 0;
}

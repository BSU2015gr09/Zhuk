/*b)В программе объявлен массив А целых элементов (размер массива 10).
Пользователь вводит массив c клавиатуры. Потом распечатываем массив.
Вводим число N < 10. Затем удаляем N-ый элемент массива (сдвигая остальные элементы).*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void initialization(int mas[], int N)
{
	cout << "Заполнение массива который содержит " << N << " элементов" << endl;
	for (int i = 0; i < N; i++)
	{
		cin>> mas[i];
	}
}

void print(int mas[], int N, int n)
{
	cout <<endl << "Печеть массива" << endl;
	for (int i = 0; i < N-n; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl << endl;
}

void remove(int mas[], int N, int &n)
{
	int i;
	cout << "Введите номер элемента от 0 до " <<N-1-n<< " который хотите удалить" << endl;
	cin >> i;
	if (i >= N - n) cout << "Ошибка. Вы ввели номер, который превышает размер массива." << endl;
	else
	{
		for (i; i < N - 1; i++)
		{
			mas[i] = mas[i + 1];
		}
		n++;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int const N = 10;
	int mas[N], n=0;
	initialization(mas, N);//Инициализация (ручная)
	print(mas, N, n);//Печать массива
	remove(mas, N, n);//Удаление элемента и сдвиг
	print(mas, N, n);
	return 0;
}
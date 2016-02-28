/*a) Дописать программу, которая реализует стек целых чисел на массиве
(функции push, pop и дополнительную функцию с именем view,
которая печатает элемент, находящийся в вершине стека).
Внутри main выполнить по очереди 14 действий.
*/


#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void initialization(int mas[], int N, int &element, int &i)
{
	cout << "Введите элемент  ";
	cin >> element;
	mas[i] = element;
}

void push(int mas[], int N, int &i,int element)
{
	mas[i] = element;
	i++;
}

void view(int mas[], int N, int i)
{
	if (i == 0) cout << "В стеке больше нет элементов" << endl;
	else cout <<"Вершина стека:  "<< mas[i-1]<<endl;
}

void much(int i)
{
	cout << "Количество элементов в стеке:  " << i << endl;
}

void pop(int mas[], int &i)
{
	if (i == 0) cout << "В стеке больше нет элементов" << endl;
	else
	{
		cout << "Элемент, который мы достаём:  " << mas[i - 1] << endl;
		i--;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int const N = 10;
	int mas[N], element = 1,i=0;
	initialization(mas, N, element, i);//Инициализация
	push(mas, N, i,element);//Функция Push
	initialization(mas, N, element, i);
	push(mas, N, i, element);
	initialization(mas, N, element, i);
	push(mas, N, i, element);
	view(mas, N, i);//Функция которая печатает элемент находящийся в верхушке
	much(i);//Выводит количество элементов
	pop(mas, i);//Достаёт элемент из стека
	much(i);
	pop(mas, i);
	much(i);
	pop(mas, i);
	much(i);
	pop(mas, i);
	initialization(mas, N, element, i);
	push(mas, N, i, element);
	much(i);
	return 0;
}
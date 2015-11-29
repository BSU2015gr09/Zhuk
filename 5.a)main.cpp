//В массиве случайных целых чисел *первый положительный элемент и последний отрицательный элемент переставить местами.
//Все четные элементы заменить максимальным элементом, а нечетные — минимальным.
//Найти максимальный из элементов, встречающихся только один раз.
//Найти минимальное из чисел, встречающихся более одного раза.
#include <iostream>//Задача a
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

void max_min(int mas[], int N,int &max,int &min)//Максимум и минимум
{
	max = mas[0]; min = mas[0];
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
	/*cout <<endl<< "Максимум равен:  " << max << endl;
	cout << "Минимум  равен:  " << min << endl;*/
}
void transposition(int mas[], int N)//перестановка первого положительного и последнего отрицательного элемента
{
	int p=0, n=N-1;
	while (mas[p] < 0){ p++; }
	while (mas[n] > 0){ n--; }
	mas[n] = mas[n] - mas[p];
	mas[p] = mas[p] + mas[n];
	mas[n] = mas[p] - mas[n];
}
void replacement(int mas[], int N )//все чётные элементы заменить максимальными, а нечётные минимальными
{
	int max, min;
	max_min(mas, N, max, min);
	for (int i = 0; i < N; i++)
	{
		if (mas[i] % 2 == 0 || -mas[i] % 2 == 0)mas[i] = max;
		else if (mas[i] % 2 == 1 || -mas[i] % 2 == 1)mas[i] = min;
	}
}
void maximum(int mas[], int N)
{
	int max = mas[0], mx = mas[0],l=0,z=0;
	for (int i = 1; i<N; i++)
	{
		if (mas[i] > max)
		{
			mx = mas[i];
			for (int k=i+1; k < N ; k++)
			{
				z = 0;
				if (mas[k] == mx)
				{
					l++;
					if (l != 0){ l = 0; z = 1; break; }
				}
			}
			if (l == 0 && z==0) max = mx;
		}
	}
	cout <<endl<< "Максимальный элемент встречающийся только один раз равен  " << max << endl;
}
void minimum(int mas[], int N)
{
	int min = mas[0], mn = mas[0], l = 0, z = 0;
	for (int i = 1; i<N; i++)
	{
		if (mas[i] < min)
		{
			mn = mas[i];
			for (int k = i + 1; k < N; k++)
			{
				z = 0;
				if (mas[k] == mn)
				{
					l++;
					if (l != 0){ l = 0; z = 1; break; }
				}
			}
			if (l == 0 && z == 1) min = mn;
		}
	}
	cout << endl << "Минимальный элемент встречающийся более одного раза равен  " << min << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int const N = 50;
	int mas[N], max=0,min=0;

	initialization(mas, N);//инитиализация массива
	cout << endl << "Первоначальный вывод массива" << endl;
	print(mas, N);
	maximum(mas, N);//Максимальный элемент встречающийся только один раз
	minimum(mas, N);//Минимальный элемент встречающийся только один раз

	cout << endl << endl << "Перестановка первого положительного и последнего отрицательного элемента" << endl;
	transposition(mas, N);//перестановка первого положительного и последнего отрицательного элемента
	print(mas, N);//вывод массива с перестановкой первого положительного и последнего отрицательного элемента

	cout << endl << endl << "Все чётные элементы заменить максимальными, а нечётные минимальными" << endl;
	replacement(mas, N);//все чётные элементы заменить максимальными, а нечётные минимальными
	print(mas, N);//вывод массива с заменой
	return 0;
}
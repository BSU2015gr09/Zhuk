//77.	Два натуральных числа называют дружественными, если каждое из них равно сумме всех делителей второго 
//не считая самого этого числа. Найти все пары дружественных чисел из заданного массива чисел.
#include<iostream>
#include <clocale> 
#include <ctime>
using namespace std;

void initialisation_1(int *p, int num)
{
	for (int i = 0; i < num; i++)
	{
		*(p + i) = rand() % 100 + 1;
		cout << *(p + i) << "; ";
	}
}

void initialisation_2(int *p, int num)
{
	for (int i = 0; i < num; i++)
	{
		cin >> *(p + i);
		cout << *(p + i) << "; ";
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int num=0, temp=0;
	cout << "Введите размер массива" << endl;
	cin >> num;
	int *mas = new int [num], *p=mas;
	srand(time(NULL));
	cout << "Для инициализации массива случайними числами нажмите 1" << endl;
	cout << "Для инициализации массива вручную нажмите 2" << endl;
	cin >> temp; 
	cout << endl;
	if (temp==1)
		initialisation_1(p, num);
	else if (temp == 2)
		initialisation_2(p, num);
	else
		cout << "Ошибка! Вы нажали не на ту клавишу." << endl;
	int sdel = 0, del=2, temp2=1;
	int sdel1=0, sdel2=0;
	for (int i = 0; i < num; i++)
	{
		while (del < *(p + i))
		{
			if (*(p + i) % del == 0){
				sdel1 += del;
				del++;
			}
			else{
				del++;
			}
		}
		del = 2;
		for (int j = i+1; j < num; j++)
		{
			while (del < *(p + j))
			{
				if (*(p + j) % del == 0){
					sdel2 += del;
					del++;
				}
				else{
					del++;
				}
			}
			del = 2;
			if (temp2 == 1){
				cout << "\n""Дружескими являются:" << endl;
			}
			temp2 = 0;
			if (sdel1 == *(p + j) && sdel2 == *(p + i)){
				cout << *(p + i) << " и " << *(p + j) << endl;
			}
			sdel2 = 0;
		}
		sdel1 = 0;
	}
	return 0;
}
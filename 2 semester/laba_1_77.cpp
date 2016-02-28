//77.	Два натуральных числа называют дружественными, если каждое из них равно сумме всех делителей второго 
//не считая самого этого числа. Найти все пары дружественных чисел из заданного массива чисел.

//Пример дружественной пары: 220 и 284, 1184 и 1210, 2620 и 2924...;
//Больше примеров тут: http://qps.ru/mCXEk;

//Я закоментировал вывод функции вывода массива и инициализации случайными числами,т.к.
//дружественные числа встречаются очень редко и начиная с 220-ого;

#include<iostream>
#include<clocale> 
#include<ctime>
using namespace std;

void rand_initialization(int *mas, int N){
	for (int i = 0; i < N; i++){
		*(mas + i) = rand() % 10000 + 1;
	}
}

void interval_initialization(int *mas, int N){//Первое дружественная пара 220 и 284, поэтому temp можно приракнять к 220;
	for (int i = 0, temp = 1; i < N; i++){
		*(mas + i) = temp++;
	}
}

void print(int *mas, int N){
	for (int i = 0; i < N; i++){
		cout << *(mas + i) << "; ";
	}
	cout << endl;
}

void friend_number(int *mas, int N){
	int divider = 1, first_S = 0, second_S = 0;
	for (int i = 0; i < N; i++){
		while (divider < *(mas + i)){
			if (*(mas + i) % divider == 0){
				first_S += divider;
				divider++;
			}
			else
				divider++;
		}
		divider = 1;

		for (int j = i + 1; j < N; j++){
			while (divider < *(mas + j)){
				if (*(mas + j) % divider == 0){
					second_S += divider;
					divider++;
				}
				else
					divider++;
			}
			divider = 1;
			if (*(mas + i) == second_S && *(mas + j) == first_S){
				cout << *(mas + i) << " и " << *(mas + j) << endl;
			}
			second_S = 0;
			
		}
		first_S = 0;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int N = 0 , M=0;
	cout << "Введите размер массива ";
	cin >> N;
	int *mas = new int[N];
	//rand_initialization(mas, N);
	interval_initialization(mas, N);//От 1 до N
	//print(mas, N);
	friend_number(mas, N);
	return 0;
}
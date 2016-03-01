//№48
//Элементы массива А(N) упорядочить в порядке возрастания, используя сортировку quicksort,
//и вставить k заданных числа, не нарушая упорядоченности массива.
#include<iostream>
#include<clocale> 
#include<ctime>
using namespace std;

void print_task(){
	cout << "Задача №48" << endl;
	cout << "Элементы массива А(N) упорядочить в порядке возрастания, используя сортировку" << endl;
	cout << "quicksort, и вставить k заданных числа, не нарушая упорядоченности массива." << endl << endl;;
}

void initialization(int *mas, int N){
	cout << "Введите " << N << "чисел." << endl;
	for (int i = 0; i < N; i++){
		cin >> *(mas + i);
	}
}

void rand_initialization(int *mas, int N){
	for (int i = 0; i < N; i++){
		*(mas + i) = rand() % 100 + 1;
	}
}

void print(int *mas, int N){
	for (int i = 0; i < N; i++)
		cout << *(mas + i) << "; ";
	cout << endl;
}

void quicksort(int* mas, int first, int last){
	int i = first, j = last, x = mas[(first + last) / 2];
	do {
		while (mas[i] < x)
			i++;
		while (mas[j] > x)
			j--;

		if (i <= j) {
			if (i < j){
				int temp = mas[i];
				mas[i] = mas[j];
				mas[j] = temp;
			}
			i++;
			j--;
		}
	} while (i <= j);
	if (i < last)
		quicksort(mas, i, last);
	if (first < j)
		quicksort(mas, first, j);
}

void added(int *mas, int N){
	int k = 0, n = 0;
	cout << "Введите количество элементов, которых хотите добавить в массив." << endl;
	cin >> k;
	int *arr = new int[N + k];
	for (int i = 0; i<N; i++){
		*(arr + i) = *(mas + i);
	}
	int *add = new int[k];
	cout << "Введите числа, которые хотите добавить." << endl;
	for (int i = 0; i < k; i++){
		 cin>>*(add + i);
	}
	for (int i = 0; i < k; i++){
		for (int j = 0; j < N + n; j++){
			if (*(add + i) < *(arr + j)){
				for (int f = (N + n)-1; f >= j; f--){//сдвиг
					*(arr + f + 1) = *(arr + f);
				}
				*(arr + j) = *(add + i);
				n++;//т.к. число уже добавили
				break;
			}
			if (j == N + n - 1){
				*(arr + N + n) = *(add + i);//добавляем в конец
				n++;
				break;
			}
		}
	}
	cout << "Массив с добавленными числами" << endl;
	print(arr, N + k);
}

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int N = 0;
	cout << "Введите размер массива ";
	cin >> N;
	int *mas = new int[N];
	int first = 0, last = N - 1, pick, temp=0;

	while (1)
	{
		cout << "Выберите действие:" << endl;
		cout << "1 - увидеть условие задачи" << endl;
		cout << "2 - проинициализировать массив вручную" << endl;
		cout << "3 - проинициализировать массив рандомными числами" << endl;
		if (temp == 1){
			cout << "4 - распечатать массив" << endl;
			cout << "5 - отсортировать массив" << endl;
			cout << "6 - добавить в массив элементы" << endl;

		}
		cout << "0 - завершить программу" << endl;
		cin >> pick;
		switch (pick)
		{
		case(1) : {print_task(); break; }
		case(2) : {initialization(mas, N); temp = 1; break; }
		case(3) : {rand_initialization(mas, N); temp = 1; break; }
		case(4) : {
						if (temp == 1)
							print(mas, N);
						else
							cout << "Вы ввели неправильный символ!" << endl;
						break;
		}
		case(5) : {
						if (temp == 1)
							quicksort(mas, first, last);
						else
							cout << "Вы ввели неправильный символ!" << endl;
						break;
		
		}
		case(6) : {
						if (temp == 1)
							added(mas, N);
						else
							cout << "Вы ввели неправильный символ!" << endl;
						break;
		}
		case(0) : return 1;
		default: {cout << "Вы ввели неправильный символ!" << endl; break; }
		}
	}
	return 0;
}
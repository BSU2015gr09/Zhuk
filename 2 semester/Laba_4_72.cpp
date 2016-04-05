#include <iostream>
#include <clocale>
#include <iomanip>
#include <ctime>

using namespace std;

void print_task(){
	cout << "Задача №72" << endl;
	cout << "Симметричную матрицу А(N,N), заданную нижним треугольником в виде одномерного" << endl;
	cout << "массива относительно главной диагонали,умножить на вектор В(N). В памяти матрицу не получать." << endl << endl;
}

void initialization(int **matrix_A, int N){
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++)
			matrix_A[i][j] = rand() % 10; //заполнение массива случайными числами с масштабированием от 0 до 9
	}

	cout << "Введите " << (N*N - N) / 2 << " элемент (-ов), чтобы заполнить нижний треугольник матрицы и получить симметричную матрицу" << endl;
	for (int i = 1; i < N; i++){
		for (int j = 0; j < i; j++)
			cin >> matrix_A[i][j];
	}

	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++)
			matrix_A[i][j] = matrix_A[j][i];
	}
}

void rand_initialization(int **matrix_A, int N){
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++)
			matrix_A[i][j] = rand() % 10; //заполнение массива случайными числами с масштабированием от 0 до 9
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			matrix_A[i][j] = matrix_A[j][i];
	}
}

void print(int **matrix_A, int N){
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cout <<setw(4)<< matrix_A[i][j] << " ";
		cout << endl;
	}
}

void multiplication(int **matrix_A, int N){
	int *vector = new int [N];
	cout << "Введите значения вектора ("<<N<<" элемента (-ов))" << endl;
	for (int i = 0; i < N; i++){
		cin>>vector[i];
	}
	for (int j = 0; j < N; j++){
		for (int i = 0; i < N; i++){
			matrix_A[i][j] = matrix_A[i][j] * vector[j];
		}
	}
	delete[] vector;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int N;
	cout << "Введите размер матрицы: ";
	cin >> N;
	int **matrix_A = new int *[N];//количество строк
	for (int i = 0; i < N; i++)
		matrix_A[i] = new int [N];//количество столбцов
	
	int pick, temp = 0;
	while (1)
	{
		cout << "Выберите действие:" << endl;
		cout << "1 - увидеть условие задачи" << endl;
		cout << "2 - заполнить симметричный массив вручную" << endl;
		cout << "3 - заполнить симметричный массив рандомными числами" << endl;
		if (temp == 1){
			cout << "4 - умножить матрицу на вектор" << endl;
			cout << "5 - распечатать массив" << endl;

		}
		cout << "0 - завершить программу" << endl;
		cin >> pick;
		switch (pick)
		{
		case(1) : {print_task(); break; }
		case(2) : {initialization(matrix_A, N); temp = 1; break; }
		case(3) : {rand_initialization(matrix_A, N); temp = 1; break; }
		case(4) : {
					  if (temp == 1)
						  multiplication(matrix_A, N);
					  else
						  cout << "Вы ввели неправильный символ!" << endl;
					  break;
		}
		case(5) : {
					  if (temp == 1)
						  print(matrix_A, N);
					  else
						  cout << "Вы ввели неправильный символ!" << endl;
					  break;

		}
		case(0) : return 1;
		default: {cout << "Вы ввели неправильный символ!" << endl; break; }
		}
	}
	for (int count = 0; count < N; count++)
		delete[] matrix_A[count];
	delete[] matrix_A;
	return 0;
}
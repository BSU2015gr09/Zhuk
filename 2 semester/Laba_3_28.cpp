#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <clocale>

using namespace std;
int const N = 500;

void print_task(){
	cout << "Задача №28" << endl;
	cout << "(Жук) Преобразовать каждое слово чётной длины в строке, удалив в нём стоящие" << endl;
	cout << "рядом одинаковые символы, оставив по одному." << endl << endl;
}

void initialization(char *str, int N)
{
	cout << "Введите строку:" << endl;
	cin.get();
	cin.getline(str, N);
}

void file_init(char *str, int N)
{
	ofstream fout("example.txt"); // создаём объект класса ofstream для записи и связываем его с файлом example.txt
	fout << "MMY nnaammee is   Dmmmitry"; // запись строки в файл
	fout.close(); // закрываем файл

	ifstream fin("example.txt"); // открыли файл для чтения
	fin.getline(str, N); // считали строку из файла
	fin.close(); // закрываем файл
}

void print(char *str, int N)
{
	cout << "Вывод строки:" << endl;
	cout << str << endl;
}

void manipulation(char *str, int N)
{
	char *tmpstr = new char[N];
	char *newstr = new char[N];
	strcpy_s(newstr, N, "");
	char *word = new char[50];
	char *newword = new char[50];
	char *symbol1 = new char[2];
	char *symbol2 = new char[2];
	bool t = true;
	strcpy_s(tmpstr, N, str);

	strcat_s(tmpstr, N, " \0");// Добавляю в конец строки пробел
	while (strlen(tmpstr) != 0)
	{
		for (int i = 0; tmpstr[0] == ' '; i++){
			strcat_s(newstr, N, " \0");
			strcpy_s(tmpstr, N, &tmpstr[1]);//копирую всё кроме 1-ого символа
		}

		char * space = strchr(tmpstr, ' ');//нахожу первый пробел
		int num = space - tmpstr;//на какой он позиции

		strncpy_s(word, 50, tmpstr, num);//копирую слово до первого пробела

		if (strlen(word) % 2 == 0)
		{
			while (strlen(word) != 0)
			{
				if (t){//делаю это один раз
					strcpy_s(newword, 50, "");
					strncpy_s(symbol1, 2, word, 1);//копирую один символ
					strcpy_s(word, 50, &word[1]);//вырезаю тот символ который скопировал
					strcat_s(newword, 50, symbol1);//добавляю символ1 вместе с нулём
					t = !t;
				}
				strncpy_s(symbol2, 2, word, 1);
				strcpy_s(word, 50, &word[1]);
				if (strcmp(symbol1, symbol2) != 0)//если символы не равны
				{
					strcat_s(newword, 50, symbol2);//добавляю в конец
					strcpy_s(symbol1, 2, symbol2);//символ1 приравниваю к символу2
				}
			}
			t = !t;
		}
		else
			strcpy_s(newword, 50, word);
		strcat_s(newstr, N, newword);
		strcat_s(newstr, N, " \0");
		strcpy_s(word, 50, "");

		strcpy_s(tmpstr, N, &tmpstr[num + 1]);//перехожу к началу следующего слова
	}
	cout << "Новая строка:" << endl << newstr << endl;


	delete[]symbol2;
	delete[]symbol1;
	delete[]newword;
	delete[]word;
	delete[]newstr;
	delete[]tmpstr;
	
}

int main()
{
	setlocale(LC_ALL, "Russian");
	char *str = new char[N];

	int pick, temp = 0;
	while (1)
	{
		cout << "Выберите действие:" << endl;
		cout << "1 - увидеть условие задачи" << endl;
		cout << "2 - ввести строку вручную" << endl;
		cout << "3 - создать файл с текстом и считать его" << endl;
		if (temp == 1){
			cout << "4 - распечатать строку" << endl;
			cout << "5 - выполнить условие задачи" << endl;

		}
		cout << "0 - завершить программу" << endl;
		cin >> pick;
		switch (pick)
		{
		case(1) : {print_task(); break; }
		case(2) : {initialization(str, N); temp = 1; break; }
		case(3) : {file_init(str, N); temp = 1; break; }
		case(4) : {
					  if (temp == 1)
						  print(str, N);
					  else
						  cout << "Вы ввели неправильный символ!" << endl;
					  break;
		}
		case(5) : {
					  if (temp == 1)
						  manipulation(str, N);
					  else
						  cout << "Вы ввели неправильный символ!" << endl;
					  break;

		}
		case(0) : return 1;
		default: {cout << "Вы ввели неправильный символ!" << endl; break; }
		}
	}
	delete[]str;
	return 0;
}
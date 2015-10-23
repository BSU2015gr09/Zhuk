#include <iostream>//"Нормальный" калькулятор.
using std::cin;
using std::cout;
using std::endl;
int main()
{
	setlocale(LC_ALL, "Russian");
	int b=0,n=1;
	float rez=0, a=0;
	char oper, c, e;
	while (n == 1)
	{
		n++;
		cout << "Введите первое число" << endl;
		cin >> rez;
		cout << "Введите операцию" << endl;
		cin >> oper;
		switch (oper)
		{
		case 'c'://При вводе "c" происходит сброс всех значений.
			n = 1;
			break;
		case 'e'://При вводе"e" происходит выход из программы.
			n = 3;
			break;
		}
		while (n == 2)
		{
			cout << "Введите второе число" << endl;
			cin >> b;
			switch (oper)
			{
			case '+':
				rez = rez + b;
				cout << "Результат = " << rez << endl;
				break;
			case '-':
				rez = rez - b;
				cout << "Результат = " << rez << endl;
				break;
			case '*':
				rez = rez * b;
				cout << "Результат = " << rez << endl;
				break;
			case '/':
				switch (int(b))
				{
				case 0:
					cout << "Выражение не имеет смысла.(деление на ноль)" << endl;
					break;
				default:
					rez = rez / b;
					cout << "Результат = " << rez << endl;
					break;
				}
				break;
			case 'c':
				n = 1;
				break;
			case 'e':
				n = 3;
				break;
			}
			switch (int(n))
			{
			case 2:
				cout << "Введите операцию" << endl;
				cin >> oper;
				switch (oper)
				{
				case 'c':
					n = 1;
					break;
				case 'e':
					n = 3;
					break;
				}
				break;
			default:
				break;
			}
		}
	}
	return 0;
}
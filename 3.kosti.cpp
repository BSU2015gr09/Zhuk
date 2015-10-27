# include <iostream>//Игра "Кости"
#include<cstdlib>
#include<ctime>
using std::cout;
using std::cin;
using std::endl;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, f, g, c=3;//не понял зачем аж 4 переменных для результатов
	srand(time(NULL));
	while (c != 0)
	{
		cout << "Введите 1, чтобы играть, или введите 0, чтобы выйти из игры." << endl;
		cin >> c;
		switch (int(c)) // не понял зачем приведение типов
		{
		case 1:
			cout << "Ваш бросок" << endl;
			a = 1 + (std::rand() % 6);
			switch (int(a))
			{
			case 1:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "|       |" << endl;
				cout << "|   o   |" << endl;
				cout << "|       |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 2:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 3:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "|   o   |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 4:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 5:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|   o   |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 6:
				cout << "---------" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "---------" << endl;
				break;
			}
			b = 1 + (std::rand() % 6);
			switch (int(b))// не понял зачем приведение типов
			{
			case 1:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "|       |" << endl;
				cout << "|   o   |" << endl;
				cout << "|       |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 2:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 3:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "|   o   |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 4:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 5:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|   o   |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 6:
				cout << "---------" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "---------" << endl;
				break;
			}

			cout << "Бросок компьютера" << endl;
			f = 1 + (std::rand() % 6);
			switch (int(f))// не понял зачем приведение типов
			{
			case 1:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "|       |" << endl;
				cout << "|   o   |" << endl;
				cout << "|       |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 2:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 3:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "|   o   |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 4:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 5:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|   o   |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 6:
				cout << "---------" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "---------" << endl;
				break;
			}
			g = 1 + (std::rand() % 6);
			switch (int(g))// не понял зачем приведение типов
			{
			case 1:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "|       |" << endl;
				cout << "|   o   |" << endl;
				cout << "|       |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 2:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 3:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "|   o   |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 4:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 5:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|   o   |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 6:
				cout << "---------" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "---------" << endl;
				break;
			}
			cout << endl;
			if (a + b > f + g)
			{
				cout << "Вы победили!" << endl;
			}
			else if (a + b == f + g)
			{
				cout << "Ничья!" << endl;
			}
			else
			{
				cout << "Победил компьютер!" << endl;
				cout << endl;
			}
			break;
		case 0:
			cout << "Конец игры" << endl;
			break;
		}
	}
	return 0;
}

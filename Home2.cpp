#include <iostream>//��������� ����� �� ���������.
using std::cout;
using std::cin;
int main()
{
	setlocale(LC_ALL, "Russian");
	int nam = 0, nam1 = 0, nam2 = 0, i = 0, k = 0, b = 1, d = 1, g = 1, l = 0;
	cin >> nam;
	nam1 = nam;
	nam2 = nam;
	while (nam != 0)
	{
		nam = nam / 10;
		i++;
	}
	l = i;
	if (i % 2 == 0)
	{
		while (b == d && i > 0)
		{
			g = pow(10, (l - 1));
			b = nam1 % 10;
			d = nam2 / pow(10, (l - 1));
			nam1 = nam1 / 10;
			nam2 = nam2 % g;
			i = i - 2;
			l = l - 1;
		}
		if (b == d)
		{
			cout << "����� ������������" << "\n";
		}
		else
		{
			cout << "����� ��������������" << "\n";
		}
	}
	else
	{
		b = 1, d = 1;
		while (b == d && i>1)
		{
			g = pow(10, (l - 1));
			b = nam1 % 10;
			d = nam2 / pow(10, (l - 1));
			nam1 = nam1 / 10;
			nam2 = nam2 % g;
			i = i - 2;
			l = l - 1;
		}
		if (b == d)
		{
			cout << "����� ������������" << "\n";
		}
		else
		{
			cout << "����� ��������������" << "\n";
		}
	}
	return 0;
}
		


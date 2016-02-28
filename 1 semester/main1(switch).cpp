#include <iostream>  //Программа решает квадратное уравниние и выводит на экран его корни.
#include <clocale>
#include <iomanip>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
int main()
{
	setlocale(LC_ALL, "Russian");
	float a = 0, b = 0, c = 0, x1 = 0, x2 = 0, D = 0, x = 0;
	cout << "Введите a   "; cin >> a;
	cout << "Введите b   "; cin >> b;
	cout << "Введите c   "; cin >> c;
	switch (int(a))
	{
		case 0:
			switch (int(b))
			{
				case 0:
					switch (int(c))
					{
						case 0:
							cout << "x=любому числу" << "\n";
							break;
						default:
							cout << "корней не существует" << "\n";
					}
					break;
				default:
					switch (int(c))
					{
						case 0:
							x = 0;
							cout << "x1=x2 = " << x << "\n";
							break;
						default:
							x = (-c) / b;
							cout << "x1=x2 = " << x << "\n";
					}
					break;
			}
			break;
		default:
			switch (int(b))
			{
				case 0:
					switch (int(c))
					{
						case 0:
							x = 0;
							cout << "x1=x2 = " << x << "\n";
							break;

						default:
							x1 = (-c) / a;
							x2 = -x1;
							cout << "x1 = " << x1 << "\n";
							cout << "x2 = " << x2 << "\n";
					}
					break;
				default:
					switch (int(c))
					{
						case 0:
							x1 = 0;
							x2 = (-b) / a;
							cout << "x1 = " << x1 << "\n";
							cout << "x2 = " << x2 << "\n";
							break;
						default:
							D = b*b - (4 * a*c);
							if (D == 0)
							{
								x = (-b) / (2 * a);
								cout << "x1=x2 = " << x << "\n";
							}
							else
							{
								if (D>0)
								{
									x1 = (-b + sqrt(D)) / (2 * a);
									x2 = (-b - sqrt(D)) / (2 * a);
									cout << "x1 = " << x1 << "\n";
									cout << "x2 = " << x2 << "\n";
								}
								else
								{
									cout << "x1 = " << (-b) / 2 << "+" << (sqrt(-D)) / 2 << "*i" << "\n";
									cout << "x2 = " << (-b) / 2 << "-" << (sqrt(-D)) / 2 << "*i" << "\n";
								}
							}
					}
					break;
			}
			break;
	}
	return 0;
}
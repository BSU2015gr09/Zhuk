#include <iostream>  //Программа решает квадратное уравниние.
#include <clocale>
#include <iomanip>
#include <cmath>
using std::cin;
using std::cout;
int main()
{
	setlocale(LC_ALL, "Russian");
	float a = 0, b = 0, c = 0, x1 = 0, x2 = 0, D = 0, x=0;
	cout << "Введите a   "; cin >> a;
	cout << "Введите b   "; cin >> b;
	cout << "Введите c   "; cin >> c;
	if (a==0 || b==0 || c==0 )
	{
		if (a == 0 && b!=0 && c!=0)
		{
			x = (-c) / b;
			cout << "x1=x2 = " << x << "\n";
		}
		if (c == 0 && a != 0 && b != 0)
		{
			x1 = 0;
			x2 = (-b) / a;
			cout <<"x1 = "<< x1 << "\n";
			cout << "x2 = " << x2 << "\n";
		}
		if (b == 0 && c != 0 && a != 0)
		{
			x1 = (-c) / a;
			x2 = -x1;
			cout <<"x1 = "<< x1 << "\n";
			cout << "x2 = " << x2 << "\n";
		}
		if (a == 0 && b == 0 && c==0)
		{
			cout << "x=любому числу" << "\n";
		}
		if (a == 0 && b == 0 && c != 0)
		{
			cout << "корней не существует" << "\n";
		}
		if ((a == 0 && c == 0 && b!=0) || (b == 0 && c == 0 && a!=0))
		{
			x = 0;
			cout << "x1=x2 = " << x << "\n";
		}
	}
	else
	{
		D = pow(b, 2) - (4 * a*c);
		if (D < 0)
		{
			cout << "x1 = (" << -b << "+" << sqrt(-D) << "i)" << "/2" << "\n";
			cout << "x2 = (" << -b << "-" << sqrt(-D) << "i)" << "/2" << "\n";
		}
		if (D == 0)
		{
			x = (-b) / (2 * a);
			cout << "x1=x2 = " << x << "\n";
		}
		if (D > 0)
		{
			x1 = (-b + sqrt(D))/(2*a);
			x2 = (-b - sqrt(D))/(2*a);
			cout << "x1 = " << x1 <<"\n";
			cout << "x2 = " << x2 <<"\n";
		}
	}
	return 0;
}
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <clocale>
using namespace std;

class Fraction {
private:
	int num;
	int denom;
public:
	//Конструктор без параметров
	Fraction() : num(0), denom(1)
	{
		//тело конструктора
		cout << "Сработал конструктор без параметров" << endl;
	}

	//Конструктор с одним параметром
	Fraction(int n) : num(n), denom(1)
	{
		//тело конструктора
		cout << "Сработал конструктор с одним параметром" << endl;
	}

	//Конструктор с двумя параметрами
	Fraction(int n, int d) : num(n), denom(d)
	{
		cout << "Сработал конструктор с двумя параметрами" << endl;
	}

	~Fraction()
	{
		cout << "Сработал деструктор" << endl;
	}

	void setFraction()
	{
		cout << "Введите числитель: ";
		cin >> num;
		cout << "Введите знаменатель: ";
		cin >> denom;
	}

	void showFraction()
	{
		cout << "\nВведённая дробь равна: " << num << "/" << denom << endl;	
	}

	void showReductionFraction()
	{
		cout << "Сокращённая дробь равна: " << num / nod(num, denom) << "/" << denom / nod(num, denom) << endl;
	}

	int div = nod(num, denom);
	int nod(int numerator, int denominator)
	{
		int num = numerator, denom = denominator, rem;
		if (num<denom && num!=0)
		{
			int temp = num;
			num = denom;
			denom = temp;
		}
		//rem = num % denom;
		while (rem = num % denom)
		{
			num = denom;
			denom = rem;
		}
		return denom;
	}

	//f3 = f1 + f2
	Fraction operator + (Fraction f);
	//f3 = f1 - f2
	Fraction operator - (Fraction f);
	//f3 = f1 * f2
	Fraction operator * (Fraction f);
	//f3 = f1 / f2
	Fraction operator / (Fraction f);
	//<<
	friend ostream& operator << (ostream& out, const Fraction& f);
};

int main()
{

	setlocale(LC_ALL, "rus");

	Fraction f1(9,6);
	Fraction f2(4,5);
	Fraction f3;
	Fraction f4(2);
	cout <<"\nПервая дробь равна: "<< f1;
	cout << "Вторая дробь равна: " << f2;
	f3 = f1 + f2;
	cout << "\nСумма равна: " << f3;

	f3 = f1 - f2;
	cout << "\nРазность равна: " << f3;

	f3 = f1 * f2;
	cout << "\nПроизведение равно: " << f3;

	f3 = f1 / f2;
	cout << "\nДеление равно: " << f3;

	f3 = f2 + f4;
	cout << "\nСумма с целым числом: " << f3;
	system("pause");
	return 0;
}

Fraction Fraction::operator + (Fraction f)
{
	int x;
	int y;
	if (denom != f.denom)
	{
		x = num*f.denom + f.num*denom;
		y = denom * f.denom;
	}
	else
	{
		x = num + f.num;
	}
	return Fraction(x, y);
}

Fraction Fraction::operator - (Fraction f)
{
	int x;
	int y;
	if (denom != f.denom)
	{
		x = num*f.denom - f.num*denom;
		y = denom * f.denom;
	}
	else
	{
		x = num - f.num;
	}
	return Fraction(x, y);
}

Fraction Fraction::operator * (Fraction f)
{
	int x=num*f.num;
	int y=denom*f.denom;

	return Fraction(x, y);
}

Fraction Fraction::operator / (Fraction f)
{
	int x = num*f.denom;
	int y = denom*f.num;

	return Fraction(x, y);
}

ostream& operator << (ostream& out, const Fraction& f)
{
	out << f.num << "/" << f.denom << "=" << f.num / f.div << "/" << f.denom / f.div << endl;
	return out;
}
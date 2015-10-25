#include <iostream>// Линейный конгруэнтный генератор псевдослучайных чисел
#include <clocale>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
int main()
{
	int a = 4096, c = 150889, m = 714025;
	int i = 0;
	int mas[15];
	mas[0]=1;
	cout << "1  = " << mas[0] << endl;
	for (i = 1; i<15; i++)
	{
		mas[i] = (a*mas[i - 1] + c) % m;
		cout << std::setw(2) << std::left << i + 1 << " = " << mas[i] << endl;
	}
	return 0;
}
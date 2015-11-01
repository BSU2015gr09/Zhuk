#include <iostream>
using std::cin;
using std::cout;
using std::endl;
void xorshift(int &x)
{
	x = 2;
	int tmp, a=13, b=15, c=5;
	tmp = x^( x << a);
	tmp = tmp^( tmp >> b);
	x = tmp^ (tmp << c);
}
int main()
{
	int x = 0;
	xorshift (x);
	cout << x << endl;
	return 0;
}
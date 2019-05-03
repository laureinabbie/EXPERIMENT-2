#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Enter first number: "; cin >> a;
	cout << "Enter second number: "; cin >> b;
	cout << "Enter third number: "; cin >> c;
	if (a > b && c)
		cout << "The largest number is = " << a << endl;
		else if (b > a && c)
			cout << "The largest number is = " << b << endl;
		else if (c > a && b)
			cout << "The largest number is = " << c << endl;
		else 
			cout << "None of the numbers is the largest!" << endl;
	_getch ();
	return 0;
}

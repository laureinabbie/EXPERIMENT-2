#include <iostream>
using namespace std;
int main()
{
	int x;
	cout << "Enter a number: ";
	cin >> x;
	cout << "Multiplication Table of " << x << ":";
	for (int y=1; y<=10; ++y)
	cout << "\n" << x << " x " << y << " = " << x*y;
	return 0;
}

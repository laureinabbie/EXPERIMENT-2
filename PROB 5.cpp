#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int counter;
	for (counter = 1; counter <= 9; counter++)
	{
	cout << counter << ", "; 
	}
	counter = 10;
	while (counter <=30)
	{
	cout << counter << ", ";
	counter+=2;
	}
	return 0;
}

#include <iostream>
using namespace std;
int main()
{
	char choice;
	int hours, fixedA, hoursA, fixedB, hoursB, fixedC, total;	
	
		cout << "[A] - For P995/mo 10 hours of access are provided. Additional P20 per hour exceeded." << endl;
		cout << "[B] - For P1495/mo 20 hours of access are provided. Additional P10 per hour exceeded." << endl;
		cout << "[C] - For P1995/mo of unlimited access is provided." << endl;
		cout << "Choose an Internet Subscription Package:" << endl;
		cin >> choice;
		cout << "How many hours were used:" << endl; 
		cin >> hours;
		
		fixedA = 995;
		fixedB = 1495;
		fixedC = 1995;
		switch (choice)
		{
			case 'A':
			case 'a':
				if (hours <= 10)
				{
					cout << "The total amount due is = P" << fixedA << endl;
				}
				else 
				{
				    hoursA = hours - 10;
					cout << "The total amount due is = P" << fixedA + 20 * hoursA <<  endl;
				}
				break;
			case 'B':
			case 'b':
				if (hours <= 20)
				{
				 cout << "The total amount due is = P" << fixedB << endl;
				}
				else 
				{
				    hoursB = hours - 20;
				cout << "The total amount due is = P" << fixedB + 10 * hoursB << endl;
				}
				break;
			case 'C':
			case 'c':
			    {
				cout << "The total amount due is = P" << fixedC << endl;
			    }
			    break;
		}
	return 0;
}

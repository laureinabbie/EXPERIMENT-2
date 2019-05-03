#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int x, y;
    float z, v;
    z = 2.5;
    cout << "Enter a value for X = "; cin >> x;
    cout << "Enter a value for Y = "; cin >> y;
    switch (x)
    { 
        case 1:
            if (x == 1 && 1 < y && y < 5)
            {
                v = x * y * z;
                cout << setw(10) << setprecision(2) << "V = " << v << endl;
            }
            else
			{
				v = x + y / z;
				cout << setw(10) << setprecision(2) << "V = " << v << endl;
			}
				break;
		case 2:
			if (x == 2 && y <= 5)
			{
				v = abs((x-y)/z);
				cout << setw(10) << setprecision(2) << "V = " << v << endl;
			}
			else
			{
				v = x - sqrt(y + z);
				cout << setw(10) << setprecision(2) << "V = " << v << endl;
			}
				break;
		default:
			v = x + y + z;
			cout << setw(10) << setprecision(2) << "V = " << v << endl;
			break;
		}
	return 0;
}


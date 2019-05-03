#include <iostream>
using namespace std;
int main()
{
    int i, count, x = 0, y = 1, z = 0;
    for (count = 1; count <= 20; count++)
    {
        z = x + y;
        x = y;
        y = z; 
        if(i == 1)
        {
            cout << ", " << x;
            continue;
        }
        if(i == 2)
        {
            cout << y << ", ";
            continue;
        }
        cout << z << ", ";
    }
    return 0;
}

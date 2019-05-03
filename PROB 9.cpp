#include <iostream>
using namespace std;
int main()
{
    int x, y, rows, columns;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> columns;
    for(x = 1; x <= rows; x++)
    {
        for(y = 1; y <= columns; y++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

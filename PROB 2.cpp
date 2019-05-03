#include <iostream>
using namespace std;
int main()
{   
int fixed;
float gallon, bal, bill;
fixed = 35;	
cout << "Enter gallons used = "; cin >> gallon;
cout << "Enter unpaid balance = P"; cin >> bal;
bill = fixed + (1.10 * gallon);
if (bal > 0) 
{    
cout << "The total water bill is = P" << bill + bal + 20; 
}    
else    
{     
cout << "The total water bill is = P" << bill;    
}
return 0;
}

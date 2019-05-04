#include<iostream>
using namespace std;
int main() 
{ 
int n, sum=0, a;
do
{
cout << "\n Enter a number: "; cin >> n;
int sum = 0;
for(a = 0; a <= n; a++)
sum = sum + a;
if (n > 0) 
{
cout<<"\t The sum of all whole numbers from 1 to "<< n <<" is "<< sum << ".";
}
else 
{
cout << "\t Thank you." << endl;
}
}
while (n > 0);
return 0;
}



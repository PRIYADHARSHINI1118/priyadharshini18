#include <iostream>
using namespace std;

int main() 
{
    int i = 0,a,rem[10];
    int sum = 0;
	cout << "input number"<<endl;
	cin >> a;
	while (a > 0)
	{	
		rem[i] = a%10;
		sum = sum + rem[i];
		a= a/10;
		i++;
	}
	for (i = i-1; i >= 0 ; i--)
	{
		cout << rem[i] << " ";
	}
	
	return 0;
}
   

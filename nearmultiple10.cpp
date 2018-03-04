#include<iostream>
using namespace std;
int main() {
	int a;
	cin>>a;
	while(a!=0)
	{
		if(a%10==0)
		{
			cout<<a;
			break;
		}
		a++;
	}
	return 0;
}

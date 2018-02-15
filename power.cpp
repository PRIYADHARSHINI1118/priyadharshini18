#include <iostream>
using namespace std;

int main() {
	
	int a,b ,temp=1;
	cout<<"enter a and b"<<endl;
	cin>>a>>b;
	for(int i=1;i<=b;i++)
	{
		temp=temp*a;
	}
	cout<<"the power is:"<<temp<<endl;
	return 0;
}

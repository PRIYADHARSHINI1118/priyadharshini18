#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cout<<"enter a numbers:"<<endl;
	cin>>a>>b>>c;
	if(a>=b)
	{
		if(a>=c)
		{
			cout<<a<<"is a greatest number"<<endl;
		}
		else
		{
	cout<<c<<"is a greatest number"<<endl;
		}
	}
	else
	{
		if(b>=c)
		{
				cout<<b<<"is a greatest number"<<endl;
		}
		else
		{
				cout<<c<<"is a greatest number"<<endl;
		}
	}
	return 0;
}

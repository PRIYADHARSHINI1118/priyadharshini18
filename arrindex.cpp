#include <iostream>

using namespace std;

int main()
{
    int n,i,a[10];
	cout<<"ENTER THE TOTAL NO.OF.ELEMENTS:"<<endl;
	cin>>n;
	cout<<"ENTER THE ELEMENTS:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<" THE ELEMENTS WITH ITS INDEX POSITION ARE:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<i;
	}
    
    return 0;
}

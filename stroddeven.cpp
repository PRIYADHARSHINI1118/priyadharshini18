#include <iostream>
#include<string.h>
using namespace std;
int main()
{
   char s[50];
	int i,a;
	cout<<"Enter the string"<<endl;
	cin>>s;
	a=strlen(s);
	for(i=0;i<a;i++)
	{
		if(i%2==0)
		{
		cout<<s[i];
		}
   }
cout<<" ";
	for(i=0;i<a;i++)
	{
		if(i%2!=0)
		{
			cout<<s[i];
		}
	}
        
    return 0;
}

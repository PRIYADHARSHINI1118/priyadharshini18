#include <iostream>
using namespace std;
int main()
{
   int s[200],i,d=4,k,temp,j=0;
	for(i=0;i<=d;i++)
	{
		cin>>s[i];
	}
	for(i=0;i<=d;i++)
	{
	for(k=i+1;k<=d;k++)
	{ 
		if(s[i]>s[k])
		{
	    temp=s[i];
	    s[i]=s[k];
	   s[k]= temp;
	   j++;
	}
	}
	}cout<<j;
    return 0;
}

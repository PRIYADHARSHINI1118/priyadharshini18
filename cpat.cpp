#include<iostream>
#define MAX 100
using namespace std;
int main()
{
	char str[MAX]={0};	
	int i;
	

	cout<<"Enter a string: ";
	cin>>str; 
	
	
	for(i=0; str[i]!='\0'; i++)
	{
		
		if(i==0)
		{
			if((str[i]>='a' && str[i]<='z'))
				str[i]=str[i]-32; 
			continue; 
		}
		if(str[i]==' ')
		{
			
			++i;
		
			if(str[i]>='a' && str[i]<='z')
			{
				str[i]=str[i]-32; 
				continue; 
			}
		}
		else
		{
	
			if(str[i]>='A' && str[i]<='Z')
				str[i]=str[i]+32;
		}
	}
	
	cout<<str;
	return 0;
}

#include <iostream>
using namespace std;
int main() 
{

	char s[50];
	int i,count=1;
	cout<<"enter the sentence:"<<endl;
	cin>>s; 
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='.')
		{
			count=count+1;

		}
	}
	cout<<count;
	return 0;

}


#include <iostream>
using namespace std;
#include<string.h>
int main()
{
char a[1000];
int i,n,S,count=0;
cout<<"Enter the string"<<endl;
cin>>a;
n=strlen(a);
for(i=0;i<n;i++)
{
if(a[i]==' ')
{
count++;
}
}
S=n-count;
cout<<"The result is"<<S;
return 0;
}

#include<iostream>
using namespace std;
int main()
{
int i,j,s,temp,a[100];

cout<<"Enter the number";
cin>>s;
for(i=0;i<s;i++)
{
cin>>a[i];
}
for(i=0;i<s;i++)
{
for(j=i+1;j<s;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
cout<<"The sorted array is\n";
for(i=0;i<s;i++)
{
cout<<a[i];
}
}

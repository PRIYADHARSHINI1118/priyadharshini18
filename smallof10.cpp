#include<iostream>
using namespace std;
int main()
{
int a[10],i,small;
cout<<"Enter the number";
for(i=0;i<10;i++)
{
cin>>a[i];
}
small=a[0];
for(i=0;i<10;i++)
{
if(small>a[i])
{
small=a[i];
}
}
cout<<small;
}

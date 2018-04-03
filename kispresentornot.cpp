#include <iostream>
using namespace std;
int main()
{
    int n,k,d[100],s,i;
cout<<"Enter the n and k";
cin>>n>>k;
for(i=0;i<n;i++)
{
cin>>d[i];
}
for(i=0;i<n;i++)
{
if(k==d[i])
{
s=d[i];
}
}
if(s==k)
{
cout<<"yes";
}
else
{
cout<<"no";
}
    return 0;
}

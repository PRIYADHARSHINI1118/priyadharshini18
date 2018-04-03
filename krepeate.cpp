#include <iostream>
using namespace std;
int main()
{
    int n,k,d[100],i,count=0;

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
count++;
}
}
cout<<count;
    return 0;
}

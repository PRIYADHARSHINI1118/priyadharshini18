#include <iostream>
using namespace std;
int main()
{
int n,b=0;
cout<<"Enter the number"<<endl;
cin>>n;
while(n>0)
{
n=n/10;
b++;
}
cout<<b;
return 0;
}

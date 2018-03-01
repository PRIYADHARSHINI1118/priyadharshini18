#include <iostream>

using namespace std;

int main()
{
    int n,a,d,sum=0,i,y=0;
    cin>>n>>a>>d;
for(i=a;i<=n;i=i+d)
{
sum=sum+i;
} 
cout<<"the result is "<<sum;

    return 0;
}

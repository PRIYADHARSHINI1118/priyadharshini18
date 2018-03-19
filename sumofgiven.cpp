#include <iostream>
using namespace std;
int main()
{
   int a[100],i,sum=0,k;
   cout<<"enter the n numbers:";
   cin>>k;
   cout<<"enter the numbers:";
   for(i=0;i<k;i++)
   {
       cin>>a[i];
       sum=sum+a[i];
       }
      cout<<sum;
       return 0;
}

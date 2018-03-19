#include <iostream>
#include<math.h>
using namespace std;
int main()
{
   int n,r,a;
   float p,i;
   cin>>n;
   cin>>r;
   cin>>p;
   i=(p*n*r)/100;
   a=floor(i);
   cout<<a;
   return 0;
}

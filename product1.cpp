#include <iostream>
using namespace std;
int main()
{
   int n,p=1,s;
   cout<<"enter the number"<<endl;
   cin>>n;
   while(n!=0)
   {
       s=n%10;
       p=p*s;
       n=n/10;
   }
   cout<<"product num is"<<" "<<p;
    return 0;
}

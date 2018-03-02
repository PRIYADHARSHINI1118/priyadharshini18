#include <iostream>
using namespace std;
int main()
{
  int a,b,c;
  cin>>a>>b;
  c=a*b;
  if(c%2==0)
    {
     cout<<c<<"The number is even"<<endl;
    }
  else
    {
      cout<<c<<"The number is odd"<<endl;
   }
  return 0;
}

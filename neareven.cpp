#include <iostream>
using namespace std;
int main()
{
  int a;
  cout<<"Enter the number"<<endl;
  cin>>a;
  if(a%2==0)
    {
     cout<<"The near even num is"<<a;
    }
  else
    {
      cout<<"The near even num is"<<a-1;
   }
  return 0;
}

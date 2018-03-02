#include <iostream>
using namespace std;
int main()
{
  int a,count=0,rem;  
  cout<<"Enter the number"<<endl;
  cin>>a;
  while(a!=0)
  {
  rem=a%10;
  count=count+rem;
  a=a/10;
  }
  cout<<"The sum is"<<count;
  return 0;
}

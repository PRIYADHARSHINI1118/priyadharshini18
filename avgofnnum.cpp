#include <iostream>
using namespace std;
int main()
{
  int b,c,i,sum=0,avg;
      cout<<"Enter the number"<<endl;
      cin>>b;
      int a[b];
      for(i=0;i<b;i++)
      {
          cin>>a[i];
          sum=sum+a[i];
      }
      avg=sum/b;
      cout<<avg;
  return 0;    
  }

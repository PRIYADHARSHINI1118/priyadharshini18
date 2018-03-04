#include <iostream>
using namespace std;
int main()
{
    char s[100];
  int i,e,count=0;
  cout<<"enter the string";
  cin>>s;
  for(i=0;s[i]!=0;i++)
  {
    count++;
  }
e=count/2;
   if(count%2!=0)
  {
    s[e]='*';
    for(i=0;s[i]!='\0';i++)
    {
    cout<<s[i];
    }
    }
    else
    {
      s[e-1]='*';
        for(i=0;s[i]!='\0';i++)
      {
        cout<<s[i];
      }
    }
    return 0;
}

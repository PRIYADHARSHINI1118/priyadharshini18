#include <iostream>
#include<string.h>
using namespace std;
int main()
{
   char a[100];
    int count=0,s,i;
     cout<<"Enter the string";
  cin>>a;
  s=strlen(a);
  for(i=0;i<s;i++)
  {
     if((a[i]>='0'&&a[i]<='9')||(a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
      {
          count++;
      }
  }
 if(count==s)
 {
     cout<<"Yes"<<endl;
 }
 else
 {
     cout<<"No"<<endl;
 }
    
       return 0;
}

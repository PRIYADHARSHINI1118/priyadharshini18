#include <iostream>
using namespace std;
int main() 
{
int n=0;
string s;
cout<<"enter the string"<<endl;
cin>>s;
  for (int i = 0; i < s.length(); i++)
  {
  	if(s[i]>= '1' && s[i]<= '9')
  	
            n++;
  }
  cout<<n;
  return 0;
}

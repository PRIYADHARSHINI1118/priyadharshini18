#include <iostream>
using namespace std;
int main() 
{
int special=0;
string s;
cout<<"enter the string"<<endl;
cin>>s;
  for (int i = 0; i < s.length(); i++)
  {
 if ((s[i] >= 'A' && s[i] <= 'Z')|| (s[i] >= 'a' && s[i] <= 'z')||(s[i]>= '0' && s[i]<= '9'))
 cout<<"";
 else
        special++;
  }
  cout<<special;
  return 0;
}

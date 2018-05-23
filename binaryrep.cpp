#include<iostream>
using namespace std;
int main()
{
string s;
int count=0,i;
cout<<"enter the string"<<endl;
cin>>s;
for(i=0;i<s.size();i++)
{
    if(s[i]=='0'||s[i]=='1')
    {
          count=0;
    }
           else
        {
            count=1;
            break;
        }
}
        if(count!=0)
        {
            cout<<"no"<<endl;
        }
        else
        {
            cout<<"yes"<<endl;
        }
        return 0;
}     

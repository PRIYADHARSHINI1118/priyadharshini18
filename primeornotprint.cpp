#include<iostream>
using namespace std;
int main(){
int a,count=0;
cout<<"enter the number"<<endl;
cin>>a;
for(int i=1;i<=a;i++)
{
if (a%i==0)
{
count++;
}	
}
if(count==2)
{
cout<<"yes";
}
else
{
cout<<"no";
}
return 0;
}

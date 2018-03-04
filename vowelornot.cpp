#include <iostream>
using namespace std;

int main() {
char s[100];
int i,n,c,count=0;
cout<<"Enter the string";
cin>>s;

for(i=0;s[i]!='\0';i++)
{
 if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')||(s[i]=='A')||(s[i]=='E')||(s[i]=='I')||(s[i]=='O')||(s[i]=='U'))
{
count++;
}
}
if(count>0)
{
cout<<"Yes";
}
else
{
cout<<"No";
}
return 0;
}

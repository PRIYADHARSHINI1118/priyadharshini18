#include <iostream>
using namespace std;

int main() {
	int n,a=0;
cout<<"Enter any num :"<<endl;
cin>>n;
while(n>0)
{
n=n/10;
a++;
}
cout<<"\n no. of digits in given number is:"<<a;// your code goes here
	return 0;
}

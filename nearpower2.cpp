#include<iostream>
using namespace std;
int main() {
	
        int n;
	cin>>n;
	int p=1;
	while(p<n)
	{
		p<<=1;
	}
	cout<<p;
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int a[25],n,i,k,sum=0;
    cout<<"enter n value"<<endl;
    cin>>n;
    cout<<"how many element want sum"<<endl;
    cin>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(i=0;i<k;i++)
    {
        sum=sum+a[i];
    }
    cout<<sum;// your code goes here
	return 0;
}

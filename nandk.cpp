#include <iostream>
using namespace std;
int main()
{
   int a[50],i,n,k;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"Enter the value of k"<<endl;
    cin>>k;
    for(i=1;i<=n;i++)
    {
        cout<<"enter the nos:";
        cin>>a[i];
        
    }
    cout<<"The result is :\t"<<a[k];
    return 0;
}

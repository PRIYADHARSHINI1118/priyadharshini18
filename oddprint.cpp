#include<iostream>
using namespace std;
int main()
{
    int a[20],i,num;
    cout<<"enter the numbers";
    cin>>num;
    for(i=0;i<num;i++)
    {
        cout<<"enter the list of numbers";
        cin>>a[i];
    }
    for(i=0;i<num;i++)
    {
        if(a[i]%2==0)
        {
            cout<<" ";
        }
        else if(a[i]%2==1)
        {
            cout<<a[i]<<"odd value";
        }
        
    }return 0;
}

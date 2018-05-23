#include<iostream>
using namespace std;
int main()
{
string str[20],temp;
int n,i,j;
cout<<"enter the size of the array"<<endl;
cin>>n;
cout<<"enter the words"<<endl;
for(i=0;i<n;i++)
{
    cin>>str[i];
}
for(i=0;i<n-1;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(str[i]>str[j])
        {
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
        }
    }
}
        cout<<"the lexical order is"<<endl;
                for(i=0;i<n;i++)
            {
                cout<<str[i]<<endl;
            }
        return 0;
}     

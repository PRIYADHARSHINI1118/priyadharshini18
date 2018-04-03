#include <iostream>
using namespace std;
int main()
{
    int a;
    int count=0;
    cin>>"enter the numbers";
    cin>>a;
    while(a!=0)
    {
        a=a/10;
        count++;
    }
cout<<count;
    return 0;
}

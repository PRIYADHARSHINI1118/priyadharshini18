#include <iostream>

using namespace std;

int main()
{
    char ch;
    cin>>ch;
    if(ch>='0' && ch<='9')
    cout<<"the number is integer";
    else
    cout<<"the number is string";
    
    return 0;
}

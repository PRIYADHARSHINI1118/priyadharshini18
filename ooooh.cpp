#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    char d;
    
        cout<<"Enter the number"<<endl;
        cin>>a>>d>>b;
        if(d=='/')
        {
            c=a/b;
            cout<<c;
        }
        else
        {
            c=a%b;
            cout<<c;
        }
        
    return 0;
}

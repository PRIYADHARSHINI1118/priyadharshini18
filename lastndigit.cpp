#include <iostream>
#include<string.h>
using namespace std;
class LastGiven
{
    private:
    char a[100];
    int s,p,f,h;
    public:
    void display()
    {
        cout<<"enter the strings";
        cin>>a>>f;
        s=strlen(a);
        h=s-f;
        for(p=h;p<=s;p++)
        {
            cout<<a[p];
        }
    }
};
int main()
{
    LastGiven l;
    l.display();
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
 
void splitString(string str)
{
    string alpha, num;
    for (int i=0; i<str.length(); i++)
    {
        if (isdigit(str[i]))
            num.push_back(str[i]);
        else 
            alpha.push_back(str[i]);
    }
 
    cout << alpha << endl;
    cout << num << endl;
}
int main()
{
    string str ;
    cin>>str;
    splitString(str);
    return 0;
}

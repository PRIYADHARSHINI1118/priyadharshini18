#include <iostream>
using namespace std;

int main() {
	
int num,m,n;
cout<<"enter m and n values:"<<endl;
cin>>m>>n;
    cout<<"Print even Numbers in a given range m to n:"<<endl;
    for (num = m; num <= n; num++)
        {
               if (num % 2 == 0)
                  cout<< num<<endl;
         }
	return 0;
}

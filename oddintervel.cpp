#include <iostream>
using namespace std;

int main() {
	
int num,m,n;
cout<<"enter m and n values:"<<endl;
cin>>m>>n;
    cout<<"Print Odd Numbers in a given range m to n:"<<endl;
    for (num = m; num <= n; num++)
        {
               if (num % 2 == 1)
                  cout<< num<<endl;
         }
	return 0;
}

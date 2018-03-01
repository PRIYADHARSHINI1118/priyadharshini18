#include <iostream>

using namespace std;

int main()
{
    int min,rem,h;

	cin>>min;

	h=min/60;

	rem=min-(60*h);

	cout<<h<<rem;
    
    return 0;
}


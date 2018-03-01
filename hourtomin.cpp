#include <iostream>

using namespace std;

int main()
{
    int hr[2],mins[2],i,m,hour,diff,res[2];
	for(i=0;i<2;i++)
	{
	    cin>>hr[i]>>mins[i];
	}
	for(i=0;i<2;i++)
	{
	    res[i]=(hr[i]*60)+mins[i];
	}
	if(res[0]>res[1])
	{
	    diff=res[0]-res[1];
	}
	else
	{
	    diff=res[1]-res[0];
	}
	hour=diff/60;
	m=diff%60;
	cout<<hour<<" "<<m;
    
    return 0;
}


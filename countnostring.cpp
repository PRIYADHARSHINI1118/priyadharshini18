#include <iostream>
using namespace std;
int main( )
{
	char s[80];
	
	cout << "Enter a string: "<<endl;
	cin.getline(s,80);
	
	int words = 1; 
	
	for(int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ') 
		{
			words++;
		} 		
	}

	cout << "The number of words  " << words<< endl;

	return 0;
}

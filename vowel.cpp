#include <iostream>
using namespace std;

int main() {
	char c;
    int LowercaseVowel=(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    int  UppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    cout << "Enter an alphabet: ";
    cin >> c;
    if (LowercaseVowel || UppercaseVowel)
    {
        cout << c << " is a vowel.";
    }
    else
    {
        cout << c << " is a consonant.";
    }
// your code goes here
	return 0;
}

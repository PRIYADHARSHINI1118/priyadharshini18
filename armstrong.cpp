#include <iostream>
using namespace std;
int main() {
int a, num, rem, sum = 0,d;
  cout << "Enter a positive  integer: ";
  cin >> a;

  num = a;

  while(num != 0)
  {
      d = num % 10;
      sum += d * d * d;
      num /= 10;
  }

  if(sum == a)
    cout << a << " is an Armstrong number.";
  else
    cout << a << " is not an Armstrong number.";
return 0;
}

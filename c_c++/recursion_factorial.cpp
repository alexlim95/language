#include <iostream>
using namespace std;

// factorial calculation with recursion
int factorial(int i)
{
  if(i == 0) return 1;                // base case
  else return i * factorial(i-1);     // general case
}

int main()
{
  int fact = 5;
  int result = factorial(fact);
  cout << fact << "! = " << result << endl;
  return 0;
}

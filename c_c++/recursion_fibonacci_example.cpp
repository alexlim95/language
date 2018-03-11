/*
* Fibonacci example using recursion.
* Fibonacci sequence is current element is the sum of the past two elements
* fn = fn-2 + fn-1
* f1 = 1
* f2 = 1
*/

#include <iostream>
#include <iomanip>
using namespace std;

long fibonacci(int n);

int main()
{
  for(int i = 1; i <= 30; i++)
  {
    cout << "fibonacci(" << setw(2) << i << ") = "
      << setw(11) << fibonacci(i) << endl;
  }
  return 0;
}

long fibonacci(int n)
{
  if (n <= 2) return 1;
  else        return fibonacci(n-2) + fibonacci(n-1);
}

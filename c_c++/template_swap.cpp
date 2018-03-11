/**
* Author: Alex Lim
*
* Templates (mold) are used for the compiler
* to generate source come on an as-needed basis.
* Do not need to specify data type initially.
*/

#include <iostream>
using namespace std;

template <typename T>
void exchange(T& first, T& second)
{
  T temp = first;     // stores first into template
  first = second;     // stores second into first
  second = temp;      // stores temp into second
}

template <typename T>
void print(T first, T second)
{
  cout << "First: " << first << " Second: " << second << endl;
}

int main()
{
  // int data types numbers passed to exchange and print
  int i(6), j(5);
  print (i, j);
  cout << "Swap first and second:" << endl;
  exchange (i, j);
  print (i, j);

  // double data types numbers passed to exchange and print
  double a(5.22), b(6.99);
  print (a, b);
  cout << "Swap first and second:" << endl;
  exchange (a, b);
  print (a, b);
  return 0;
}

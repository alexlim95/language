#include <iostream>
using namespace std;

long multiply(int i, int j);

int main()
{
  int i(5), j(2);
  long product = multiply(i, j);
  cout << "The product of " << i << " and " << j << " is " << product << endl;
  return 0;
}

long multiply(int i, int j)
{
  switch(i)
  {
    case 0: return 0;
    case 1: return j;
    default: return j + multiply(i-1, j);
  }
}

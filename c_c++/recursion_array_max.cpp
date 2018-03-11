#include <iostream>
using namespace std;

int maximum(const int list[], int lowerLimit, int upperLimit)
{
  int max;
  // base case: one element in array
  if (lowerLimit == upperLimit) return list[lowerLimit];
  else
  {
    max = maximum(list, lowerLimit+1, upperLimit);
    if (list[lowerLimit] >= max) return list[lowerLimit];
    else return max;
  }
}

int main()
{
  int array[] = {1, 2, 5, 10, 3, 4, 30};
  int max = maximum(array, 0, 6);
  cout << "The maximum integer in the array is: " << max << endl;
  return 0;
}

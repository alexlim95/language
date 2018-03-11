#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Pair
{
public:
  Pair(T1 a_value, T2 b_value); // constructor
  T1 first() const;             // accessor/getter
  T2 second() const;            // accessor/getter

private:
  T1 a;     // member variable
  T2 b;     // member variable
};

template <typename T1, typename T2>
Pair<T1, T2>::Pair(T1 a_value, T2 b_value) : a(a_value), b(b_value) {}

template <typename T1, typename T2>
T1 Pair<T1, T2>::first() const {return a;}

template <typename T1, typename T2>
T2 Pair<T1, T2>::second() const {return b;}

template <typename T1, typename T2>
ostream& operator <<(ostream& outs, Pair<T1, T2>& p)
{
  outs << "First: " << p.first() << " Second: " << p.second();
  return outs;
}

int main()
{
  // construct pairs of different data types
  Pair<int, double>     p1(2, 3.14);
  Pair<double, string>  p2(3.14, "Hello");
  Pair<string, string>  p3("Hello", "Goodbye");

  // print out pairs
  cout << p1 << endl;
  cout << p2 << endl;
  cout << p3 << endl;

  return 0;
}

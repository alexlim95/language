#include <iostream>
using namespace std;

class Array1
{
public:
  Array1(int s, int v[]);
  Array1(const Array1 &other);
  ~Array1();
  Array1& operator =(const Array1 &other);
private:
  int size;
  int *vals;
};

int main()
{
  int vals[4] = {1, 2, 3, 4};

  Array1 a1(4, vals);
  Array1 a2(a1);         // copy
  a1 = a2;

  cout << "Done!" << endl;
  return 0;

}

Array1::Array1(int s, int v[])
{
  size = s;
  vals = new int[size];
  copy(v, v + size, vals);
}

Array1::Array1(const Array1 &other)
{
  size = other.size;
  vals = new int[other.size];
  copy(other.vals, other.vals + size, vals);
}

Array1::~Array1()
{
  delete vals;
  vals = nullptr;
}

Array1& Array1::operator =(const Array1 &other)
{
  size = other.size;
  vals = new int[other.size];
  copy(other.vals, other.vals + size, vals);
  return *this;
}

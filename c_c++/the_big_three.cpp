#include <iostream>

using namespace std;

class SchoolInfo
{
public:
  SchoolInfo();                                 // default constructor
  SchoolInfo(string name, int age, int id_num); // constructor

  // The "Big Three"
  virtual ~SchoolInfo();  // destructor
  SchoolInfo(const SchoolInfo &other);  // copy constructor
  SchoolInfo &operator =(const SchoolInfo &other); // overloaded assignment operator

private:
  string name;
  int age;
  int id_num;
};

int main()
{
  return 0;
}

SchoolInfo::SchoolInfo() : name(""), age(0), id_num(0)
{}

SchoolInfo::SchoolInfo(string name, int age, int id_num)
  : name(name), age(age), id_num(id_num)
{}

SchoolInfo::~SchoolInfo() {}

SchoolInfo::SchoolInfo(const SchoolInfo &other)
{
  name = other.name;
  age = other.age;
  id_num = other.id_num;
}

SchoolInfo& SchoolInfo::operator =(const SchoolInfo &other)
{
  name = other.name;
  age = other.age;
  id_num = other.id_num;
  return *this;
}

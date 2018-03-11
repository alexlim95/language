#include <iostream>
#include <map>

using namespace std;

int main()
{
  map<char, int> my_map;  // declare a <char, int> key-value pair map

  // define key-value pairs
  my_map['b'] = 200;
  my_map['a'] = 100;
  my_map['c'] = 300;

  // iterate through the map and print out key-value pair
  /*
  for (map<char,int>::iterator it = my_map.begin(); it!=my_map.end(); it++)
  {
    cout << it->first << " >= " << it->second << endl;
  }
  */

  // re-written using auto keyword
  for (auto it = my_map.begin(); it!=my_map.end(); it++)
  {
    cout << it->first << " >= " << it->second << endl;
  }
  return 0;
}

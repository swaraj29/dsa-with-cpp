#include <iostream>
#include <map>
using namespace std;

int main()
{
  map < int,string >m;
  m[1] = " zoro ";
  m[13] = " Dragon ";
  m[2] = " luffy ";

  m.insert( {5, " bheem "} );

  for(auto i : m)
  {
    cout << i.first << " " << i.second << endl;
  }

  cout << " finding 13-> " << m.count(13) << endl;
}

// map works on key value pair
// one key == one value

// map are always in sorted order . it is order map
// unorder map are in unsorted order

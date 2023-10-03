#include <iostream>
#include <set>
using namespace std;

int main()
{
  set<int> s;

  s.insert(5);
  s.insert(5);
  s.insert(5);
  s.insert(1);
  s.insert(6);
  s.insert(6);
  s.insert(0);
  s.insert(0);
  s.insert(0);

  for(auto i : s)
  {
    cout << i << endl;
  }cout << endl;

  set<int>::iterator it = s.begin();
  it++; // iskaa matlab first element 

  s.erase(it);

    for(auto i : s)
  {
    cout << i << endl;
  }
  cout << endl;

  cout << " -5 is present or not-> " << s.count(-5) << endl;

  set<int>::iterator itr = s.find(5);
  for(auto it=itr; it != s.end(); it++)
  {
    cout << *it << endl; 
  }
  cout << endl;


  
}

// set only print unique element
// set contain element in sorted oreder

//5 aur 6 jo output hai matlab 5 ke aage kaa saare element print hogaa
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> v;

  vector<int> a(5, 1); // Vector initialized with 5 elements, all set to 1

  vector<int> last(a); // Vector 'a' is copied

  cout << "print last " << endl;
  for (int i : last) {
    cout << i << " ";
  }
  cout << endl;

  cout << "Capacity->" << v.capacity() << endl;

  v.push_back(1); 
  cout << "Capacity->" << v.capacity() << endl;

  v.push_back(2); 
  cout << "Capacity->" << v.capacity() << endl;

  v.push_back(3); 
  cout << "Capacity->" << v.capacity() << endl;
  cout << "Size->" << v.size() << endl;

  cout << "Element at 2nd index->" << v.at(1) << endl; // Changed the index to 1, as vectors are 0-indexed

  cout << "Front->" << v.front() << endl;
  cout << "Back->" << v.back() << endl;

  cout << "before pop" << endl;
  for (int i : v)
  {
    cout << i << endl;
  }
  cout << endl;

  v.pop_back(); // Use pop_back() to remove the last element, and it doesn't return a value

  cout << "after pop " << endl;
  for (int i : v)
  {
    cout << i << endl;
  }
  cout << endl;

  cout << "before clear size " << v.size() <<endl;
  v.clear();
  cout << "after clear size " << v.size() <<endl;
}



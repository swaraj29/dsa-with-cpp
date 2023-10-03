#include <iostream>
#include <array>
using namespace std;

int main()
{
  // Normal array
  int basic[4] = {1, 2, 3, 4};

  // STL array
  array<int, 4> a = {1, 2, 3, 4};

  int size = a.size();
  for (int i = 0; i < size; i++)
  {
    cout << a[i] << endl;
  }

  cout << "Element at 2nd index->"<<a.at(2)<<endl; 
  
  cout << "Empty or not->"<< a.empty()<<endl;

  cout << "First Element->"<< a.front()<<endl;
  cout << "Second Element->"<< a.back()<<endl;

  return 0; // Add this to indicate a successful execution of your program
}

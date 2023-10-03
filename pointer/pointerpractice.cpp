#include <iostream>
using namespace std;
int main()
{
  // int *p = 0;
  // cout << *p << endl;

  int i = 5;

  // method 1 to initiliaze and make the pointer 
  int *q = &i;
  cout << q << endl;
  cout << *q << endl;

   // method 2 to initiliaze and make the pointer 
  int *p = 0;
  p = &i;
  cout << p << endl;
  cout << *p << endl;




}
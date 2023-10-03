#include <iostream>
using namespace std;
int main()
{
  int num = 5;
  int a = num;
  cout << " a before " << num << endl;
  a++;
  cout << " a after " << num << endl;

 
  int *p = &num;
  cout << " before " << num << endl;
  (*p)++; // ye declare karoge tabhi change ho gaaya
  cout << " after " << num << endl;
  

  
  // copying a pointer
  int *q = p; // copy one pointer into another pointer
  cout << p << " " << q << endl;
  cout << *p << " " << *q << endl;

  // important concept
  int i = 3;
  int *t = &i;
  cout << (*t)++ << endl;






}
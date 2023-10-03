#include <iostream>
#include <stack>
using namespace std;

int main()
{
  stack <string> s;
  s.push("luffy");
  s.push("Dragon");
  s.push("zoro");

  cout<<"TopElement->"<<s.top()<<endl;
  s.pop();

  cout<<"TopElement->"<<s.top()<<endl;

  cout<<"size of stack->"<<s.size()<<endl;

  cout<<"Empty or not->"<<s.empty()<<endl;

}

// stack works on last in first out
// 0 means false
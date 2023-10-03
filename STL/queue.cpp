#include <iostream>
#include <queue>
using namespace std;

int main()
{
  queue <string> q;
  q.push("luffy");
  q.push("Dragon");
  q.push("zoro");

  cout<<"TopElement->"<<q.front()<<endl;
  q.pop();

  cout<<"TopElement->"<<q.front()<<endl;

  cout<<"size of stack->"<<q.size()<<endl;

  cout<<"Empty or not->"<<q.empty()<<endl;

}

// queue works on first in first out
// 0 means false
#include <iostream>
using namespace std;
int main(){
  int a,b;

  cout<<"enter the number a"<<endl;
  cin>>a;

  cout <<"enter the number b"<<endl;
  cin>>b;

  char op;
  cout<<"Enter the operation to be performed"<<endl;
  cin>>op;

  switch( op )
  {
    case '+': cout<< (a+b) <<endl;
              break;
    
    case '-': cout<< (a-b) <<endl;
              break;

    case '*': cout<< (a*b) <<endl;
              break;
    
    case '/': cout<< (a/b) <<endl;
              break;
    
    case '%': cout<< (a%b) <<endl;
              break;

    default : cout<< "please enter a valid operation" <<endl;        
  }
  

}

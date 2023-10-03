#include <iostream>
using namespace std;

// 1 -> Even
// 0 -> Odd

  bool iseven(int a){
    // odd
    if(a&1){
      return 0;
    }
     else{     //even
      return 1;
    }
  }

int main(){
  int num;
  cin>>num;

  if( iseven(num) ){
    cout << "number is even " <<endl;
  }
  else{
    cout<<"Number is odd" <<endl;
  }

  }



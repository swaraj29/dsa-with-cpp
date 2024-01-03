#include <iostream>
using namespace std;

void reachHome(int src, int dest){

  cout << "source is:" << src <<  " destination is:" << dest << endl;

  // base case
  if(src == dest){
    cout << "pahucha gaya" << endl;
    return ;
  }
   
   src++;
   reachHome(src, dest);


}


int main(){
  int dest = 10;
  int src = 1;

  reachHome(src,dest);
}
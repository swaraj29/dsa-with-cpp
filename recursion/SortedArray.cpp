#include <iostream>
using namespace std;
bool issortedarray(int arr[],int size){
  if(size == 0 || size == 1){
    return true;
  }

  if(arr[0] > arr[1]){
    return false;
  }
  else{
    bool remainingPart = issortedarray(arr + 1, size - 1);
    return remainingPart;
  }
}



int main(){
  int arr[5]={2,4,6,8,9};
  int size = 5;
  int ans = issortedarray(arr,size);
  if(ans){
    cout << "Array is sorted" << endl;
  }
  else{
    cout << "Array is not sorted" << endl;
  }
}
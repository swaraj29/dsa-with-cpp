#include <iostream>
using namespace std;

int getPivot(int arr[],int size){
int s = 0;
int e = size - 1;
int mid = s + (e-s)/2;
while(s<e){
  if(arr[mid] >= arr[0]){
    s = mid + 1;
  }
  else{
    e = mid;
  }
  mid = s + (e-s)/2;
  }
  return s;
}

int main(){
  int arr[] = {8,10,17,1,3};
  cout << "pivot is = " << getPivot(arr,5) << endl;
}
// in this we find pivot index with the help of binary search
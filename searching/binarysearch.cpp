#include <iostream>
using namespace std;

int binarysearch(int arr[],int size, int key){
  int Start = 0; //index hai
  int End = size-1; //index hai

  int mid = Start + (End-Start)/2;
  
  while(Start<=End){

    if(key == arr[mid]){
      return mid;
    }
    // Go to right waala part
    if(key > arr[mid]){
      Start = mid + 1;
    }
    else{
      End = mid -1;
    }
    mid = Start + (End-Start)/2;

  }
  return -1;

}

int main(){
  int even[6]={1,2,3,5,6,7};
  int odd[5]={1,2,3,4,5};

  int index = binarysearch(even,6,2);

  cout << "index = " << index <<endl;
}
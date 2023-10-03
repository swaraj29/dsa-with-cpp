#include <iostream>
using namespace std;

int firstocc(int arr[],int size, int key){
  int Start = 0; //index hai
  int End = size-1; //index hai
  int ans = -1;

  int mid = Start + (End-Start)/2;
  
  while(Start<=End){

    if(key == arr[mid]){
      ans =  mid;
      End = mid - 1 ;
    }
    // Go to right waala part
    else if(key > arr[mid]){ // Right me jaayo
      Start = mid + 1;
    }
    else if(key < arr[mid]){ // Left me jaayo
      End = mid - 1;
    }
    mid = Start + (End-Start)/2;

  }
  return ans;;
}

int lastocc(int arr[],int size, int key){
  int Start = 0; //index hai
  int End = size-1; //index hai
  int ans = -1;

  int mid = Start + (End-Start)/2;
  
  while(Start<=End){

    if(key == arr[mid]){
      ans =  mid;
      Start = mid + 1 ;
    }
    // Go to right waala part
    else if(key > arr[mid]){ // Right me jaayo
      Start = mid + 1;
    }
    else if(key < arr[mid]){ // Left me jaayo
      End = mid - 1;
    }
    mid = Start + (End-Start)/2;

  }
  return ans;;
}

int main(){
  int even[6]={1,2,3,3,5};
  int FirstIndex = firstocc(even, 6, 3);
  int LastIndex = lastocc(even, 6, 3);
  int Totaloccurence = (LastIndex - FirstIndex) + 1;
  cout <<"Total no of occurence  of 3 is " << Totaloccurence <<endl;

}


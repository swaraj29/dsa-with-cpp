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
  int even[6]={1,2,3,3,3,7};

  cout << "first occurrence of 3 is at index " << firstocc(even, 6, 3) << endl;
  cout << "last occurrence of 3 is at index " << lastocc(even, 6, 3) << endl;
}

// array sorted denaa tabhi code work karegaa
// unsorted mat de diyo nahi to code work nahi karegaa

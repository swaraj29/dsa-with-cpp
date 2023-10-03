#include <iostream>
using namespace std;

void printarray(int arr[], int size) {
  // Printing the array
  for (int i = 0; i < size; i++) {
    cout << arr[i] << endl;
  }
}

int main() {
  // Declare an array
  int A[3] = {1, 2, 3};
  int n = 3;

  int Arraysize = sizeof(A)/sizeof(int);
  cout <<"array size is = "<< Arraysize << endl;

  // Calling the function to print the array
  printarray(A, 3);

  return 0;
}
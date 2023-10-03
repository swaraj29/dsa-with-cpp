#include <iostream>
using namespace std;

void insertionsort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0 ; j--) {
          if(arr[j] > temp){
            // shift
             arr[j + 1] = arr[j];
          }
          else{
            break;
          }
         
        }
         arr[j + 1] = temp;  // j humsaa ek position piche hogaa jahaa pe mujhe daalana hai isliya J + 1 use kiya hai debug karke bhi dekhe sakte ho par 
       
    }
}
int main() {
    int arr[] = {10, 1, 7, 4, 8, 2, 11};
    int n = 7;

    insertionsort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0; // Added return statement to indicate successful execution.
}

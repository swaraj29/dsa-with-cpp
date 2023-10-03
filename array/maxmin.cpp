#include <iostream>
#include <climits> // for INT_MIN
using namespace std;

int getMax(int num[], int size) {
  int max = INT_MIN;
  for (int i = 0; i < size; i++) {
    if (num[i] > max) {
      max = num[i];
    }
  }
  return max;
}

int getMin(int num[], int size) {
  int min = INT_MAX;
  for (int i = 0; i < size; i++) {
    if (num[i] < min) {
      min = num[i];
    }
  }
  return min;
}

int main() {

  int num[5];
  int n = 5;
  
  // Taking input in array
  for (int i = 0; i < 5; i++) {
    cin >> num[i];
  }
  
  cout << "Maximum value is " << getMax(num, 5) << endl;
  cout << "Minimum value is " << getMin(num, 5) << endl;

  return 0;
}


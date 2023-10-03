#include <iostream>
using namespace std;

int countOccurrences(int arr[], int size, int key) {
  int count = 0;

  for (int i = 0; i < size; i++) {
    if (arr[i] == key) {
      count++;
    }
  }

  return count;
}

int main() {
  int A[] = {1, 3, 3, 4, 5, 6};
  int key = 3;
  int totalOccurrences = countOccurrences(A, sizeof(A) / sizeof(A[0]), key);

  cout << "Total occurrences of " << key << " is " << totalOccurrences << endl;
  return 0;
}

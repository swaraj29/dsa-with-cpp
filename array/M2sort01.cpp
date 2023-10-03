#include <iostream>
using namespace std;

void printarray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
}

void sortone(int arr[], int n) {
    int left = 0, right = n - 1;

    while (left < right) {
        while (arr[left] == 0 && left < right) {
            left++;
        }

        while (arr[right] == 1 && left < right) {
            right--;
        }

        if (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main() {
    int arr[] = {1, 1, 0, 0, 0, 0, 1, 0};
    int n = 8;

    sortone(arr, n);
    printarray(arr, n);

    return 0;
}
   
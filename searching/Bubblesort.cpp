#include <iostream>
using namespace std;

void bubblesort(int arr[], int n) {
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // If no two elements were swapped in the inner loop, the array is already sorted
        if (swapped == false) {
            break;
        }
    }
}

int main() {
    int arr[] = {10, 1, 7, 6, 14, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubblesort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
#include <iostream>
using namespace std;

void swapalternate(int arr[], int n) {
    for (int i = 0; i < n - 1; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;

    cout << "Original array is" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    swapalternate(arr, n);

    cout << "Swapped array is" << endl;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}

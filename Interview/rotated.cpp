#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;
    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] > arr[right]) {
            left = mid + 1; // Pivot is in the right half
        } else {
            right = mid;    // Pivot is in the left half or at mid
        }
    }

    return left; // Pivot index
}

int binarySearch(vector<int>& arr, int target, int left, int right) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;  // Element found, return its index
        }

        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Element not found
}

int searchInRotatedArray(vector<int>& arr, int target) {
    int pivot = findPivot(arr);

    if (pivot == 0) {
        // The array is not rotated, perform a normal binary search
        return binarySearch(arr, target, 0, arr.size() - 1);
    }

    if (target >= arr[0] && target <= arr[pivot - 1]) {
        // Target is in the left sorted part
        return binarySearch(arr, target, 0, pivot - 1);
    } else {
        // Target is in the right sorted part
        return binarySearch(arr, target, pivot, arr.size() - 1);
    }
}

int main() {
    vector<int> rotatedArray = {4, 5, 6, 7, 8, 1, 2, 3};
    int target = 6;

    int result = searchInRotatedArray(rotatedArray, target);

    if (result != -1) {
        cout << "Element " << target << " found at index " << result << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}
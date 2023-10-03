#include <iostream>
#include <vector>
#include <algorithm> // Include the algorithm header for std::sort
using namespace std;

int main() {
    // Initialize a vector with specific values
    vector<int> arr = {0, 1, 0, 1, 0, 0};

    // Sort the vector
    sort(arr.begin(), arr.end());

    // Access and print elements
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
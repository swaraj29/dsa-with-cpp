#include <iostream>
using namespace std;

int main() {
    int array[] = {0, 5, 7, 13, 2};
    int size = sizeof(array) / sizeof(array[0]);
    int maxElement = array[0]; // Assume the first element is the maximum
    for (int i = 1; i < size; i++) {
        if (array[i] > maxElement) {
            maxElement = array[i];
            
        }
    }
    

    cout << "The largest element in the array is: " << maxElement <<endl;

    return 0;
}

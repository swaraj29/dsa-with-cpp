#include <iostream>
#include <math.h>
#include <algorithm> // Include the algorithm header
using namespace std;

int main() {

    int A[] = {1, 0, 1, 0, 1, 1};
     int size = sizeof(A) / sizeof(A[0]); // Calculate the size of the array

     sort(begin(A),end(A));

    // std::sort(std::begin(A), std::end(A));

    for (int i = 0; i < size; i++) {
        cout << A[i] << endl;
    }

    return 0;
}

// This type of sorting only work in array and sorting method for vector is other let us  
// discuss this in other code Msort01.cpp//


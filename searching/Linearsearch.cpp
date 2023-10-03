#include <iostream>
using namespace std;

bool search(int A[], int n, int key) {
    for (int i = 0; i < n; i++) { // Use < instead of <= to avoid going out of bounds
        if (key == A[i]) {
            return true; // Use 'true' instead of '1'
        }
    }
    return false; // Use 'false' instead of '0'
}

int main() {
    int A[10] = {2, 8, 6, 5, 12, 98, 34, 12, 45, 4};
    int n = 10;
    cout << "Enter the element to search for" << endl;
    int key;
    cin >> key;

    bool found = search(A, n, key); // Declare 'found' and use ';' to terminate the statement

    if (found) {
        cout << "key is present" << endl;
    } else {
        cout << "key is absent" << endl;
    }

    return 0; // Add a return statement to indicate successful program execution
}

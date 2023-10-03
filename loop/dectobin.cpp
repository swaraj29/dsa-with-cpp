#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n;
    cin >> n; // Read an integer from the user

    int ans = 0; // Initialize the result variable to 0
    int i = 0;   // Initialize a counter for the position of the binary digit

    while (n != 0) { // Continue the loop until n becomes 0
        int bit = n & 1; // Extract the least significant bit of n using bitwise AND with 1

        ans = (bit * pow(10, i)) + ans; // Convert the bit to its decimal equivalent and add it to ans

        n = n >> 1; // Right shift n by 1 to remove the least significant bit
        i++; // Increment the position counter
    }

    cout << "Answer is " << ans << endl; // Print the binary representation

    return 0; // Return 0 to indicate successful execution
}
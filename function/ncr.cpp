#include <iostream> // Include the header file with correct syntax

using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) { // Declare and initialize 'i' as an integer
        fact = fact * i;
    }
    return fact;
}

int ncr(int n, int r) {
    int num = factorial(n);
    int den = factorial(r) * factorial(n - r);
    int ans = num / den; // Declare 'ans' as an integer
    return ans;
}

int main() { 
    int n, r;
    cin >> n >> r;

    cout << "answer is " << ncr(n, r) << endl; 

    return 0; // Return 0 to indicate successful program execution
}

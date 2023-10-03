#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) {
            return 0;
        }
        // 0 AURA 1 NAHI LEGE ISLIYA N + 1 LEGE AISA NAHI TO N - 1 TAK LETAA HAI 
        vector<bool> isPrime(n+1, true); 
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i < n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        int count = 0;
        for (int i = 2; i < n; i++) {
            if (isPrime[i]) {
                count++;
            }
        }

        return count;
    }
};

int main() {
    Solution solution;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int primeCount = solution.countPrimes(n);
    cout << "Number of prime numbers less than " << n << " is: " << primeCount << endl;
    return 0;
}

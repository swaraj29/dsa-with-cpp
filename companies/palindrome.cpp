#include <iostream>

using namespace std;

class Solution {
public:

    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        long rev = 0;
        int digit;
        int original = x;
        while (x != 0) {
            digit = x % 10;
            rev = rev * 10 + digit;
            x = x / 10;
        }
        return rev == original;
    }
};

int main() {
    Solution sol;
    int input;
    cout << "Enter an integer: ";
    cin >> input;

    bool result = sol.isPalindrome(input);
    if (result) {
        cout << input << " is a palindrome." << endl;
    } else {
        cout << input << " is not a palindrome." << endl;
    }

    return 0;
}

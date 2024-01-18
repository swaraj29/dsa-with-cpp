#include <iostream>
using namespace std;

class Solution {
public:
    int solve(string &haystack, string &needle) {
        int ind = haystack.find(needle);
        if (ind != string::npos) return ind;
        return -1;
    }

    int strStr(string haystack, string needle) {
        return solve(haystack, needle);
    }
};

int main() {
    // Example usage:
    Solution solution;
    string haystack = "hello";
    string needle = "ll";

    int result = solution.strStr(haystack, needle);

    if (result != -1) {
        cout << "Needle found at position: " << result << endl;
    } else {
        cout << "Needle not found in haystack." << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {

        // cout << "it gives garbage value:" << s.find(part) << endl;
        while (s.length() != 0 && s.find(part) < s.length()) {
            cout<<"part from where remove happens:"<<s.find(part) << endl;
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};

int main() {
    Solution solution;
    
    string s, part;
    cout << "Enter the main string: ";
    cin >> s;
    cout << "Enter the string to remove: ";
    cin >> part;

    string result = solution.removeOccurrences(s, part);

    cout << "Result: " << result << endl;

    return 0;
}

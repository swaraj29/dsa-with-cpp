#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

int main() {
    // Example usage
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    Solution sol;
    int newSize = sol.removeElement(nums, val);

    cout << "New size of array after removing " << val << ": " << newSize << endl;
    cout << "Remaining elements: ";
    for (int i = 0; i < newSize; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}

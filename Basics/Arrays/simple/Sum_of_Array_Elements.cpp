#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arraySum(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            count += nums[i];
        }
        return count;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3};
    int result = solution.arraySum(nums);
    cout << result << endl;
    return 0;
}

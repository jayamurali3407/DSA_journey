#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twosum(vector<int> &nums, int target)
    {
        vector<int> ans;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    ans.push_back(i);
                    ans.push_back(j);

                    return ans;
                }
            }
        }
        return {-1, -1};
    }
};

int main()
{
    vector<int> nums = {1, 4, 5, 6, 3, 9};
    int target = 9;

    Solution sol;

    vector<int> ans = sol.twosum(nums, target);

    cout << "This is the answer : [" << ans[0] << "," << ans[1] << "]";

    cout << endl;

    return 0;
}
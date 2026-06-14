#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> Leaders(vector<int> &nums)
    {
        int n = nums.size();

        vector<int> ans;

        bool leader;
        for (int i = 0; i < n; i++)
        {
            leader = true;
            for (int j = i + 1; j < n; j++)
            {
                if (nums[j] > nums[i])
                {
                    leader = false;
                    break;
                }
            }
            if (leader == true)
                ans.push_back(nums[i]);
        }
        return ans;
    }
};

int main()
{
    vector<int> nums = {1, 2, 5, 3, 1, 2};

    Solution sol;

    vector<int> ans = sol.Leaders(nums);

    cout << "Leaders in an array are :";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
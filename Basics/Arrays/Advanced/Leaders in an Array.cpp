#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> leader(vector<int> &nums)
    {
        int n = nums.size();

        vector<int> ans;

        int maxi = nums[n - 1];
        ans.push_back(nums[maxi]);
        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i] > maxi)
            {
                maxi = nums[i];
                ans.push_back(nums[i]);
            }
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};

int main()
{
    vector<int> nums = {1, 2, 5, 3, 1, 2};
    Solution sol;

    vector<int> ans = sol.leader(nums);

    cout << "Leaders in an Array are : ";

    for (int x : ans)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
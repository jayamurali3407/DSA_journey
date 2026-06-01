#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findmaxconsecutiveones(vector<int> &nums)
    {
        int count = 0;
        int maxcount = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0 || nums[i] == 1)
            {
                if (nums[i] == 1)
                {
                    count++;
                    maxcount = max(count, maxcount);
                }
                else
                {
                    count = 0;
                }
            }
        }
        return maxcount;
    }
};

int main()
{
    vector nums = {1, 1, 0, 0, 1, 0, 1, 0};

    Solution sol;

    int ans = sol.findmaxconsecutiveones(nums);

    cout << "The maximum consecutive 1's are : " << ans << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int Majorityelement(vector<int> &nums)
    {
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            int count = 0;

            for (int j = 0; j < n; j++)
            {
                if (nums[j] == nums[i])
                {
                    count++;
                }
            }
            if (count > (n / 2))
            {
                return nums[i];
            }
        }
        return -1;
    }
};

int main()
{
    vector<int> nums = {2, 2, 3, 4, 5, 2, 6, 2, 2};

    Solution sol;

    int ans = sol.Majorityelement(nums);

    cout << "The majority element is : " << ans << endl;

    return 0;
}
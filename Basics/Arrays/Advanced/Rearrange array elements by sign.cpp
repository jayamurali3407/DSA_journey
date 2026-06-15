#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> rearrangearray(vector<int> &nums)
    {
        int n = nums.size();

        vector<int> pos, neg;

        for (int x : nums)
        {
            if (x > 0)
                pos.push_back(x);
            else
                neg.push_back(x);
        }
        for (int i = 0; i < pos.size(); i++)
        {
            nums[2 * i] = pos[i];
            nums[2 * i + 1] = neg[i];
        }
        return nums;
    }
};

int main()
{
    vector<int> nums = {1, 2, -4, -5};

    Solution sol;

    vector<int> ans = sol.rearrangearray(nums);

    cout << "After rearranging the array elements by sign : ";

    for (int num : ans)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int solve(vector<int> &nums, int index)
    {
        if (index == nums.size())
            return 0;

        return nums[index] + solve(nums, index + 1);
    }
    int arraysum(vector<int> nums)
    {
        return solve(nums, 0);
    }
};

int main()
{
    int n;
    cout << "Enter the no.of elements : ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the Array Elements : ";

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    Solution sol;

    int k = sol.arraysum(nums);

    cout << "The sum of Array Elements is : " << k;

    cout << endl;

    return 0;
}
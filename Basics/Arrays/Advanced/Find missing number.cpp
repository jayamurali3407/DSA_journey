#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();

        /*the brute force method to find the missing number in an array, the time complexity would be definately o(n2) with
         with the space complexity of o(1) ..........*/

        for (int i = 0; i <= n; i++)
        {
            int flag = 0;

            for (int j = 0; j < n; j++)
            {
                if (nums[j] == i)
                {
                    flag = 1;
                    break;
                }
            }

            if (flag == 0)
                return i;
        }

        return -1;
    }
};

int main()
{
    vector<int> nums = {0, 1, 2, 4, 5};

    Solution sol;

    int ans = sol.missingNumber(nums);

    cout << "The missing number is: " << ans << endl;

    return 0;
}
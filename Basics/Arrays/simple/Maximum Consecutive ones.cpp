#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int count = 0;
        int maxcount = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0 || nums[i] == 1)
            {
                if (nums[i] == 1)
                {
                    count++;
                    maxcount = max(maxcount, count);
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
    Solution sol;

    int n;
    cout << "Enter the Array size : ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter only 1's and 0's as Array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = sol.findMaxConsecutiveOnes(arr);

    cout << "The maximun consecutive 1's are " << ans << endl;
    return 0;
}
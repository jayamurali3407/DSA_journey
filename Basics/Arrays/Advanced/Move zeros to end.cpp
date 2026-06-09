#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void moveZero(vector<int> &nums)
    {
        int numszeor = 0;

        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                result.push_back(nums[i]);
            }
            else
            {
                numszeor++;
            }
        }
        while (numszeor--)
        {
            result.push_back(0);
        }
        nums = result;
    }
};

int main()
{
    int n;
    cout << "Enter the size of the Array : ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the Array Elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    Solution obj;
    obj.moveZero(nums);

    cout << "Array after moving the zeros to the end : ";

    for (int x : nums)
    {
        cout << " " << x;
    }
    cout << endl;
    return 0;
}
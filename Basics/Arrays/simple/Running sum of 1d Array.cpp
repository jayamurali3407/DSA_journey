#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> runningsum(vector<int> nums)
    {
        int n = nums.size();
        for (int i = 1; i < n; i++)
        {
            nums[i] += nums[i - 1];
        }
        return nums;
    }
};

int main()
{
    Solution sol;
    int n;
    cout << "Enter the size of Array : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the Array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> result = sol.runningsum(arr);

    cout << "The running sum of Array elements are : " << endl;
    for (int x : result)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}

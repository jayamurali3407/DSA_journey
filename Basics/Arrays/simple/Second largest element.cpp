#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int secondlargestelement(vector<int> &nums)
    {
        int k = nums.size();
        int largest = nums.back();
        int secondlargest = -1;

        for (int i = k - 2; i >= 0; i--)
        {
            if (nums[i] != largest)
            {
                secondlargest = nums[i];
                break;
            }
        }
        return secondlargest;
    }
};

int main()
{
    Solution sol;
    int n;
    cout << "Enter the size of the element : " << endl;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The second largest element is : " << sol.secondlargestelement(arr) << endl;
    return 0;
}
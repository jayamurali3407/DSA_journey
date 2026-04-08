#include <bits/stdc++.h>
using namespace std;

bool containsduplicate(vector<int> nums, int k)
{
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        if (m.count(nums[i]))
        {
            if (i - m[nums[i]] <= k)
            {
                return true;
            }
        }
        m[nums[i]] = i;
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter the size of the Array : ";
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the K value : ";
    cin >> k;

    cout << (containsduplicate(arr, k) ? "true" : "false") << endl;
}
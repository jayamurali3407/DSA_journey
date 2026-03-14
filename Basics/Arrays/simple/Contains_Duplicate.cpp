#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {

        unordered_set<int> st;

        for (int num : nums)
        {
            if (st.find(num) != st.end())
            {
                return true; // duplicate found
            }
            st.insert(num);
        }
        return false;
    }
};

int main()
{

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    Solution sol;
    bool result = sol.containsDuplicate(nums);

    cout << "Contains duplicate? "
         << (result ? "true" : "false") << endl;

    return 0;
}

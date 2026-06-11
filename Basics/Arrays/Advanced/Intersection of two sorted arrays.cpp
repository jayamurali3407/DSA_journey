#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> intersectionArray(vector<int> &nums1, vector<int> &nums2)
    {
        int i = 0, j = 0;

        vector<int> ans;

        int n = nums1.size();
        int m = nums2.size();

        while (i < n && j < m)
        {
            if (nums1[i] < nums2[j])
            {
                i++;
            }
            else if (nums1[i] > nums2[j])
            {
                j++;
            }
            else
            {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
        }

        return ans;
    }
};

int main()
{
    vector<int> nums1 = {1, 2, 3, 3, 4, 5, 5, 6};
    vector<int> nums2 = {3, 3, 4, 4, 5, 6, 7, 8};

    Solution sol;

    vector<int> ans = sol.intersectionArray(nums1, nums2);

    cout << "Intersection of nums1 and nums2 is : " << endl;

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    cout << endl;

    return 0;
}
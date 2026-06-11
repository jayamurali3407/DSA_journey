#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution
{
public:
    int RemoveDuplicates(vector<int> &nums)
    {
        //Store unique elements
        set<int> s;

        for (int val : nums)
        {
            s.insert(val);
        }

        int k = s.size();

        int j = 0;
        // Copy unique elements back
        for (int val : s)
        {
            nums[j++] = val;
        }
        return k;
    }
};

// Helper function to print the first n elements of an array

void printarray(vector<int> &nums, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4, 4, 4};

    cout << "Original Array : ";
    printarray(nums, nums.size());

    Solution sol;

    int k = sol.RemoveDuplicates(nums);

    cout << "Array after removing the duplicates : ";

    printarray(nums, k);

    return 0;
}
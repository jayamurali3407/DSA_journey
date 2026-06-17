#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int NumbersSum(int n)
    {
        if (n == 0)
            return 0;
        return n + NumbersSum(n - 1);
    }
};

int main()
{
    int n = 10;

    Solution sol;

    int k = sol.NumbersSum(n);

    cout << "Sum of first " << n << " numbers is : " << k;
    cout << endl;

    return 0;
}
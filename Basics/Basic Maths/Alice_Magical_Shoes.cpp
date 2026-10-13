#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int alicemagicalshoes(int n, vector<int> &houses)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (houses[i] % 3 == 0)
            {
                count++;
            }
        }
        return count;
    }
};

int main()
{
    Solution sol;
    int n;
    cout << "Enter the no.of houses : ";
    cin >> n;
    vector<int> houses(n);
    cout << "Enter the values of houses : ";
    for (int i = 0; i < n; i++)
    {
        cin >> houses[i];
    }

    int result = sol.alicemagicalshoes(n, houses);
    cout << "No.of houses that alice can climb with her magical shoes are : " << result;
    return 0;
}
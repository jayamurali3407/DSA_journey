#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int firstUniqueChar(string s)
    {
        vector<int> freq(26, 0);

        for (char c : s)
        {
            freq[c - 'a']++;
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (freq[s[i] - 'a'] == 1)
            {
                return i;
            }
        }
        return -1;
    }
};

int main()
{
    Solution sol;
    string str;
    cin >> str;

    cout << sol.firstUniqueChar(str);
    return 0;
}
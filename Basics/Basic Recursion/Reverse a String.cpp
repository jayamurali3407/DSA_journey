#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void reverse(vector<char> &s, int left, int right)
    {
        if (left >= right)
            return;

        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        return reverse(s, left + 1, right - 1);
    }
    vector<char> reversestring(vector<char> s)
    {
        int left = 0;
        int right = s.size() - 1;
        reverse(s, left, right);
        return s;
    }
};

int main()
{
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    Solution sol;

    vector<char> ans = sol.reversestring(s);

    for (char x : ans)
    {
        cout << x << " ";
    }
    return 0;
}
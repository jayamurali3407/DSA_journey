#include <bits/stdc++.h>
using namespace std;

void repeat_string(int n, string str)
{
    for (int i = 0; i < n; i++)
    {
        cout << str;
    }
    cout << endl;
}

int main()
{
    string str;
    int n;
    cin >> n >> str;
    repeat_string(n, str);
    return 0;
}
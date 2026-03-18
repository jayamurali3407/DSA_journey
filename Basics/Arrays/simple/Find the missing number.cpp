#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    // Edge case: missing is 1
    if (arr[0] != 1)
    {
        cout << "Missing number is: 1";
        return 0;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] != arr[i] + 1)
        {
            cout << "Missing number is: " << arr[i] + 1;
            return 0;
        }
    }

    // If no gap → missing is n+1
    cout << "Missing number is: " << arr[n - 1] + 1;

    return 0;
}
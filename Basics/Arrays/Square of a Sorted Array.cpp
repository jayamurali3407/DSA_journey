#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements (sorted in non-decreasing order): ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> result(n);
    int left = 0, right = n - 1;
    for (int i = n - 1; i >= 0 && left <= right; i--)
    {
        if (abs(arr[left]) >= abs(arr[right]))
        {
            result[i] = arr[left] * arr[left];
            left++;
        }
        else
        {
            result[i] = arr[right] * arr[right];
            right--;
        }
    }
    cout << "Sorted Squares : ";
    for (int x : result)
    {
        cout << x << " ";
    }
    return 0;
}
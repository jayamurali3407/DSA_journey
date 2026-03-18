#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the number of places to rotate the array : ";
    cin >> k;
    vector<int> arr(n);
    cout << "Enter the values : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    k = k % n;
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());
    cout << "Array after left rotation by " << k << " places : ";
    for (int x : arr)
        cout << x << " ";
    return 0;
}
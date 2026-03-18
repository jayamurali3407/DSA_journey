#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the values : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    arr.erase(unique(arr.begin(), arr.end()), arr.end());

    cout << "Array after sorting and removing the duplicates : ";
    for (int x : arr)
        cout << x << " ";

    return 0;
}
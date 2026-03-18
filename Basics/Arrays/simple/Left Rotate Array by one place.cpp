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

    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
    arr[n - 1] = temp;

    cout << "Array after left rotation by one place : ";
    for (int x : arr)
        cout << x << " ";

    return 0;
}
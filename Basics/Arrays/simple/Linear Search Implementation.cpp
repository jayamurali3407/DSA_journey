#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements to store in the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the value to be searched : ";
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at index : " << i;
            return 0;
        }
    }
    cout << "Element not found in the Array";
    return 0;
}
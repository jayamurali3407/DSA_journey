#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the Array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[j] = arr[i];
            j++;
        }
    }
    while (j < n)
    {
        arr[j] = 0;
        j++;
    }

    cout << "Array after moving all the Zeros to the end : ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
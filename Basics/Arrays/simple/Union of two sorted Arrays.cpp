#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter the size of first array : ";
    cin >> n1;
    vector<int> arr1(n1);
    cout << "Enter the elements of first array (sorted in non-decreasing order): ";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the size of second array : ";
    cin >> n2;
    vector<int> arr2(n2);
    cout << "Enter the elements of second array (sorted in non-decreasing order): ";
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    vector<int> result;
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            if (result.empty() || result.back() != arr1[i])
            {
                result.push_back(arr1[i]);
            }
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            if (result.empty() || result.back() != arr2[j])
            {
                result.push_back(arr2[j]);
            }
            j++;
        }
        else
        {
            if (result.empty() || result.back() != arr1[i])
            {
                result.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }
    while (i < n1)
    {
        if (result.empty() || result.back() != arr1[i])
        {
            result.push_back(arr1[i]);
        }
        i++;
    }
    while (j < n2)
    {
        if (result.empty() || result.back() != arr2[j])
        {
            result.push_back(arr2[j]);
        }
        j++;
    }
    cout << "Union of two sorted arrays : ";
    for (int x : result)
    {
        cout << x << " ";
    }
    return 0;
}
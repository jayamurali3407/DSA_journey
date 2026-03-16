// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int start = 0;
//     int end = n - 1;

//     while (start < end)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void reverse(int arr[], int n)
    {
        int Start = 0, end = n - 1;
        while (Start < end)
        {
            int temp = arr[Start];
            arr[Start] = arr[end];
            arr[end] = temp;
            Start++;
            end--;
        }
    }
};

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n = 5;
    int arr[] = {5, 4, 3, 2, 1};
    Solution solution;
    cout << "Original array: ";
    printArray(arr, n);
    solution.reverse(arr, n);
    cout << "Reversed array: ";
    printArray(arr, n);

    return 0;
}

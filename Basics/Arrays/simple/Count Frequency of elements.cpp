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
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == arr[i + 1])
//         {
//             cout << arr[i] << " ";
//         }
//         count += 1 ;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++; // increase count
    }

    for (auto x : freq)
    {
        cout << x.first << " occurs " << x.second << " times\n";
    }

    return 0;
}
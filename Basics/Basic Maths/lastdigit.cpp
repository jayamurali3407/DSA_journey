#include <bits/stdc++.h>
using namespace std;

int lastdigit(int n)
{
    int lastdigit;
    while (n > 0)
    {
        if (n < 10)
            return n;
        else
        {
            lastdigit = n % 10;
            break;
        }
    }
    return lastdigit;
}

int main()
{
    int n;

    cin >> n;
    cout << lastdigit(n);

    return 0;
}
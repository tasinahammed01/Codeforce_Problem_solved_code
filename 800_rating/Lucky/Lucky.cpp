#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string a;
        cin >> a;

        int l = 0;
        int r = a.size() - 1;
        int sum1 = 0;
        int sum2 = 0;

        while (l < r)
        {
            sum1 += a[l] - '0';
            sum2 += a[r] - '0';
            l++;
            r--;
        }
        (sum1 == sum2) ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}
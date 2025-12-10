#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;
        if (n % 2 == 1 || n == 2)
        {
            cout << -1 << endl;
        }
        else
        {
            long long mn = (n + 5) / 6;
            long long mx = n / 4;
            cout << mn << " " << mx << endl;
        }
    }
    return 0;
}

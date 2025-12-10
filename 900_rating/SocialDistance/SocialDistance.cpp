#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while (t--)
    {
        long long n, m;
        cin >> n >> m;

        long long x = 0;
        long long int min_val = LLONG_MIN;
        long long max_val = 0;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            x += a[i];
            min_val = min(min, a[i]);
            max_val = max(max, a[i]);
        }
    }

    return 0;
}

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
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        int indx = -1;

        for (int j = 0; j < n - 1; j++)
        {
            if (a[j + 1] - a[j] > k)
            {
                indx = j;
                break;
            }
        }

        if (indx < n / 2)
        {
            cout << indx + 1 << endl;
        }
        else
        {
            cout << n - indx << endl;
        }
    }
    return 0;
}

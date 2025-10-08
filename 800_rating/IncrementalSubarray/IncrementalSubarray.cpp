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
        int n, m;
        cin >> n >> m;
        vector<int> a(m);
        for (int &x : a)
            cin >> x;

        int count;
        if (a[0] != 1)
        {
            count = 1; 
        }
        else
        {
            bool ok = true;
            for (int i = 0; i < m - 1; i++)
            {
                if (a[i + 1] != a[i] + 1)
                {
                    ok = false;
                    break;
                }
            }
            count = ok ? (n - a[m - 1] + 1) : 1;
        }

        cout << count << endl;
        }

    return 0;
}

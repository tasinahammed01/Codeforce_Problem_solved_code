#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] == k)
            {
                count++;
            }
        }

        if (count <= 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        sort(a.begin(), a.end());

        bool adsf = true;

        for (int i = 0; i < a.size() - 1; i++)
        {
            if (abs(a[i] - a[i + 1]) > 1)
            {
                adsf = false;
                break;
            }
        }
        if (adsf)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
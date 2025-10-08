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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> counts;

        int count = 0;
        for (int j = 0; j < n; j++)
        {

            if (a[j] == 0)
            {
                count++;
            }
            else if (a[j] == 1)
            {
                counts.push_back(count);
                count = 0;
            }
        }
        counts.push_back(count);

        int ans = *max_element(counts.begin(), counts.end());

        cout << ans << endl;
    }

    return 0;
}
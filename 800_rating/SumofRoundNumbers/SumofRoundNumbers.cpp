#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> ans;

        int p = 1;

        while (n > 0)
        {
            if (n % 10 > 0)
            {
                int dig = (n % 10) * p;
                ans.push_back(dig);
            }

            n /= 10;
            p *= 10;
        }

        cout << ans.size() << endl;

        for (int j = 0; j < ans.size(); j++)
        {
            cout << ans[j] << " ";
        }
        cout << endl;
    }

    return 0;
}
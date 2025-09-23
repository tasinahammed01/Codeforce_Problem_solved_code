#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    int ans = 0;

    for (int i = 0; i < t; i++)
    {
        long long a, b;
        cin >> a >> b;

        if (a % b != 0)
        {
            ans = b - (a % b);
        }
        else
        {
            ans = 0;
        }
        cout << ans << endl;
    }

    return 0;
}
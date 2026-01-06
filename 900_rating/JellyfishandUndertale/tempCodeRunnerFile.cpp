#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        long long a, b, n;
        cin >> a >> b >> n;

        vector<long long> x(n);
        long long sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
            if (x[i] > a)
            {
                sum += a;
            }
            else
            {

                sum += x[i];
            }
        }


        cout << sum + (b-1) << endl;
    }

    return 0;
}
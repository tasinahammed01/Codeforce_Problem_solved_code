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

        for (int i = 2; i < 10e7; i++)
        {
            int pw = pow(2, i) - 1;

            if (n % pw == 0)
            {
                cout << n / pw << endl;
                break;
            }
        }
    }
    return 0;
}

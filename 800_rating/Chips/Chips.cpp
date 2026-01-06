#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int remain = m;

    while (true)
    {
        bool gave = false;

        for (int i = 1; i <= n; i++)
        {
            if (remain >= i)
            {
                remain -= i;
                gave = true;
            }
            else
            {
                cout << remain << endl;
                return 0;
            }
        }

        if (!gave)
            break;
    }

    cout << remain << endl;
    return 0;
}

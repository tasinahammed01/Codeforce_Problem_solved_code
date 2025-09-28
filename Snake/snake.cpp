#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 0; j < m; j++)
            {
                cout << "#";
            }
        }
        else
        {
            if ((i / 2) % 2 == 1)
            {
                for (int i = 1; i < m; i++)
                {
                    cout << ".";
                }
                cout << "#";
            }
            else
            {
                cout << "#";
                for (int i = 1; i < m; i++)
                {
                    cout << ".";
                }
            }
        }
        cout << endl;
    }

    return 0;
}
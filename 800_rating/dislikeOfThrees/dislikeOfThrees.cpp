#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int k;
        cin >> k;

        for (int j = 0;; j++)
        {

            if (j % 3 == 0 || j%10 == 3)
            {
                continue;
            }
            if (--k == 0)
            {
                cout << j << endl;

                break;
            }
        }
    }

    return 0;
}
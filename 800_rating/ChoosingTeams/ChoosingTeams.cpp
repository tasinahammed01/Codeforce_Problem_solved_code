#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;

    vector<int> y(n);
    for (int i = 0; i < n; i++)
        cin >> y[i];

    sort(y.begin(), y.end());

    int count = 0;

    for (int j = 0; j < y.size(); j++)
    {
        int initial = y[j] + k;

        if (initial <= 5)
        {
            count++;
        }
    }

    if (count < 3)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << count / 3 << endl;
    }

    return 0;
}
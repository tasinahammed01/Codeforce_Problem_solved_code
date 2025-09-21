#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> opini(n);

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> opini[i];

        if (opini[i] == 1)
        {
            ans++;
        }
    }

    (ans > 0) ? cout << "HARD" << endl : cout << "EASY" << endl;

    return 0;
}
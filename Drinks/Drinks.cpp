#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> p(n);

    double total_P = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        total_P += p[i];
    }

    cout << fixed << setprecision(12) << (total_P / n) << endl;

    return 0;
}
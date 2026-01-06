#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;

    vector<int> a(12);

    for (int i = 0; i < 12; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    int count = 0;

    int sum = 0;

    for (int j = 0; j < a.size(); j++)
    {

        if (sum >= k)
        {
            break;
        }
        sum += a[j];
        count++;
    }

    if (sum < k)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << count << endl;
    }

    return 0;
}
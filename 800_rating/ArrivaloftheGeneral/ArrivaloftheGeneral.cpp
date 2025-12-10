#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> a(n);

    int minVal = INT_MAX, maxVal = INT_MIN;
    int minindx = 0, maxindx = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > maxVal)
        {
            maxVal = a[i];

            maxindx = i;
        }

        if (a[i] <= minVal)
        {
            minVal = a[i];

            minindx = i;
        }
    }

    int stepForMin = (n - 1 - minindx);
    int stepForMax = maxindx;

    int ans = stepForMax + stepForMin;

    if (maxindx > minindx)
        ans--;

    cout << ans << endl;

    return 0;
}
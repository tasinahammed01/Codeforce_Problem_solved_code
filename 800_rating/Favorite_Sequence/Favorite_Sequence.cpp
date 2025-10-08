#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int left = 0, right = n - 1;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                cout << a[left] << " ";
                left++;
            }
            else
            {
                cout << a[right] << " ";
                right--;
            }
        }
        cout << endl;
    }

    return 0;
}
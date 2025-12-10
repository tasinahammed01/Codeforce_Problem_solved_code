#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int n = s.size();
        int lastNonZero = -1;

        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] != '0')
            {
                lastNonZero = i;
                break;
            }
        }

        int keep = 0;
        for (int i = 0; i <= lastNonZero; i++)
        {
            if (s[i] == '0' || i == lastNonZero)
                keep++;
        }

        int removeCount = n - keep;
        cout << removeCount << endl;
    }
    return 0;
}

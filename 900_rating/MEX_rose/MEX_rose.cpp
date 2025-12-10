#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        vector<int> freq(n + 1, 0);
        for (int x : a)
            if (x <= n)
                freq[x]++;

        if (k == 0)
        {
            cout << freq[0] << "\n"; 
        }
        else
        {
            int missing = 0;
            for (int i = 0; i < k; i++)
                if (freq[i] == 0)
                    missing++; 

            int countK = freq[k]; 
            cout << missing + countK << "\n";
        }
    }
    return 0;
}

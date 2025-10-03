#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> s(n);

    int available = 0;   
    int untreated = 0;   

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];

        if (s[i] > 0)
        {
            available += s[i];   
        }
        else
        {
            if (available > 0)
            {
                available--;   
            }
            else
            {
                untreated++;   
            }
        }
    }

    cout << untreated << endl;

    return 0;
}

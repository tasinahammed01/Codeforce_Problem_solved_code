#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    string s;
    cin >> s;

    int anton = 0;
    int danik = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            anton++;
        }
        else if (s[i] == 'D')
        {
            danik++;
        }
    }
    if (anton == danik)
        cout << "Friendship" << endl;

    else
        (anton > danik) ? cout << "Anton" << endl : cout << "Danik" << endl;

    return 0;
}
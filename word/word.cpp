#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;

    cin >> s;

    int lower = 0;
    int upper = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] <= 'z' && s[i] >= 'a')
        {
            lower++;
        }
        else
        {
            upper++;
        }
    }

    if (upper > lower)
    {
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    else if (upper < lower || upper == lower)
    {
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
    }

    cout << s << endl;

    return 0;
}
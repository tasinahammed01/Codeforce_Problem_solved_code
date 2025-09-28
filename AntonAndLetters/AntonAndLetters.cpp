#include <bits/stdc++.h>
using namespace std;

int main()
{

    string n;
    getline(cin, n);

    set<char> s;
    
    for (char c : n)
    {
        if (isalpha(c))
            s.insert(c);
    }

    cout << s.size() << endl;

    return 0;
}
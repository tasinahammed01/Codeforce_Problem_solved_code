#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;

        string first_Alph = string(1, word.front());
        string last_Alph = string(1, word.back());

        if (word.length() > 10)
        {
            cout << first_Alph << word.length() - 2  << last_Alph << endl;
        }
        else
        {
            cout << word << endl;
        }
    }

    return 0;
}
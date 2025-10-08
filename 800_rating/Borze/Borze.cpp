#include <bits/stdc++.h>
using namespace std;

int main()
{

    string a;
    cin >> a;

    string ans;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '.') {
            ans.push_back('0'); 
        }
        else if (a[i] == '-') {
            if (a[i + 1] == '.') {
                ans.push_back('1'); 
                i++; 
            }
            else if (a[i + 1] == '-') {
                ans.push_back('2'); 
                i++; 
            }
        }
    }

    cout << ans << endl;

    return 0;
}
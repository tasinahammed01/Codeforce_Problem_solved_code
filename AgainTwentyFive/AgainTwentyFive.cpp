#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    if (n == 1)
        cout << "05" << endl;
    else
        cout << "25" << endl;

    return 0;
}

// here i have to show last 2 digit . so last 2 digit of pow of 5 is 25  like (25 , 125, 625....etc.)
// thats why we just have to show 25  and if < 10 then add 0 then 5;

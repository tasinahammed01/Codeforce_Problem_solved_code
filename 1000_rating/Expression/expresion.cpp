#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b, c;
    cin >> a >> b >> c;

    int test1, test2, test3, test4, test5;

    test1 = a + b * c;
    test2 = a * (b + c);
    test3 = a * b * c;
    test4 = (a + b) * c;
    test5 = a + b + c;

    cout << max({test1, test2, test3, test4, test5}) << endl;

    return 0;
}
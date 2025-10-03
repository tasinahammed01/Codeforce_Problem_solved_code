#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<long long> n(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> n[i];
    }

    sort(n.begin(), n.end());


    long long a = n[3] - n[2]; // a= total -(b+c)
    long long b = n[3] - n[1]; // b = total - (a+c) 
    long long c = n[3] - n[0]; // c = total - (a+b)

    cout << a << " " << b << " " << c;

    return 0;
}
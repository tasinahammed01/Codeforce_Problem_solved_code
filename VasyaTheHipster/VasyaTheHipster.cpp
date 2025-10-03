#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int day = min(a, b);  
    int runoutDay = (max(a, b) - min(a, b)) / 2;  

    cout << day << " " << runoutDay << endl;
    return 0;
}

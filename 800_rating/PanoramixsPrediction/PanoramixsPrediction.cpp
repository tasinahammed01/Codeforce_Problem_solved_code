#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int next = n + 1;
    while (true) {
        bool isPrime = true;
        for (int i = 2; i * i <= next; i++) {
            if (next % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) break;
        next++;
    }

    if (next == m)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

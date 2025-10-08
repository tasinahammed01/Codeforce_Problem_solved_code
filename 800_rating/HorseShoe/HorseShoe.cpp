#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    set<long long> s = {s1, s2, s3, s4};

    cout << 4 - s.size() << endl;

    return 0;
}


/*
🔹 What is set<> in C++?

A set in C++ is a container (like an array or vector) from the Standard Template Library (STL).
It stores unique elements in a sorted order (by default).

🔹 Key Features

No duplicates – if you insert the same value again, it won’t be stored twice.

Automatically sorted – values are kept in ascending order by default.

Size – you can check how many unique elements are inside using .size().
*/
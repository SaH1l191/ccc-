#ifndef DEBUG_H
#define DEBUG_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(int x) { cerr << x; }
void _print(string x) { cerr << x; }
void _print(long long x) { cerr << x; }

template <class T>
void _print(vector<T> v) {
    cerr << "[";
    for (T i : v)
        cerr << i << " ";
    cerr << "]";
}

#endif // DEBUG_H

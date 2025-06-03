#ifndef DEBUG_H
#define DEBUG_H

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

// =========== DEBUG TEMPLATE ===========
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

// Primitive types
void _print(int x)                     { cerr << x; }
void _print(long x)                    { cerr << x; }
void _print(long long x)              { cerr << x; }
void _print(unsigned x)               { cerr << x; }
void _print(unsigned long x)          { cerr << x; }
void _print(unsigned long long x)     { cerr << x; }
void _print(float x)                  { cerr << x; }
void _print(double x)                 { cerr << x; }
void _print(long double x)            { cerr << x; }
void _print(char x)                   { cerr << '\'' << x << '\''; }
void _print(const char *x)            { cerr << '\"' << x << '\"'; }
void _print(const string &x)          { cerr << '\"' << x << '\"'; }
void _print(bool x)                   { cerr << (x ? "true" : "false"); }

// Pair
template<typename T, typename V>
void _print(const pair<T, V> &x) {
    cerr << "("; _print(x.first); cerr << ", "; _print(x.second); cerr << ")";
}

// Vector
template<typename T>
void _print(const vector<T> &v) {
    cerr << "[";
    for (size_t i = 0; i < v.size(); ++i) {
        _print(v[i]);
        if (i != v.size() - 1) cerr << ", ";
    }
    cerr << "]";
}

// Set
template<typename T>
void _print(const set<T> &v) {
    cerr << "{";
    for (auto it = v.begin(); it != v.end(); ++it) {
        _print(*it);
        if (next(it) != v.end()) cerr << ", ";
    }
    cerr << "}";
}

// Multiset
template<typename T>
void _print(const multiset<T> &v) {
    cerr << "{";
    for (auto it = v.begin(); it != v.end(); ++it) {
        _print(*it);
        if (next(it) != v.end()) cerr << ", ";
    }
    cerr << "}";
}

// Map
template<typename K, typename V>
void _print(const map<K, V> &v) {
    cerr << "{";
    for (auto it = v.begin(); it != v.end(); ++it) {
        _print(it->first);
        cerr << ": ";
        _print(it->second);
        if (next(it) != v.end()) cerr << ", ";
    }
    cerr << "}";
}

// Unordered Set
template<typename T>
void _print(const unordered_set<T> &v) {
    cerr << "{";
    for (auto it = v.begin(); it != v.end(); ++it) {
        _print(*it);
        if (next(it) != v.end()) cerr << ", ";
    }
    cerr << "}";
}

// Unordered Map
template<typename K, typename V>
void _print(const unordered_map<K, V> &v) {
    cerr << "{";
    for (auto it = v.begin(); it != v.end(); ++it) {
        _print(it->first);
        cerr << ": ";
        _print(it->second);
        if (next(it) != v.end()) cerr << ", ";
    }
    cerr << "}";
}

#endif // DEBUG_H
